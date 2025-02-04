// Fill out your copyright notice in the Description page of Project Settings.


#include "AssignPawn.h"
#include "AssignPlayerController.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
AAssignPawn::AAssignPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	// 중력 작용을 위해 true

	CapsuleRoot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleRoot"));
	SetRootComponent(CapsuleRoot);
	SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMeshComp->SetupAttachment(CapsuleRoot);
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(CapsuleRoot);
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/Resources/Characters/Meshes/SKM_Quinn.SKM_Quinn"));
	if (MeshAsset.Succeeded()) {
		SkeletalMeshComp->SetSkeletalMesh(MeshAsset.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset0(TEXT("/Game/Resources/Characters/Materials/Instances/Quinn/MI_Quinn_01.MI_Quinn_01"));
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset1(TEXT("/Game/Resources/Characters/Materials/Instances/Quinn/MI_Quinn_01.MI_Quinn_02"));
	if (MaterialAsset0.Succeeded() && MaterialAsset1.Succeeded()) {
		SkeletalMeshComp->SetMaterial(0, MaterialAsset0.Object);
		SkeletalMeshComp->SetMaterial(1, MaterialAsset1.Object);
	}

	static ConstructorHelpers::FObjectFinder<UAnimationAsset> IdleAsset(TEXT("/Game/Resources/Characters/Animations/Quinn/MF_Idle.MF_Idle"));
	if (IdleAsset.Succeeded()) {
		IdleAnim = IdleAsset.Object;
	}
	static ConstructorHelpers::FObjectFinder<UAnimationAsset> RunAsset(TEXT("/Game/Resources/Characters/Animations/Quinn/MF_Run_Fwd.MF_Run_Fwd"));
	if (RunAsset.Succeeded()) {
		RunAnim = RunAsset.Object;
	}
	static ConstructorHelpers::FObjectFinder<UAnimationAsset> FallingAsset(TEXT("/Game/Resources/Characters/Animations/Manny/MM_Fall_Loop.MM_Fall_Loop"));
	if (FallingAsset.Succeeded()) {
		FallingAnim = FallingAsset.Object;
	}
	static ConstructorHelpers::FObjectFinder<UAnimationAsset> JumpAsset(TEXT("/Game/Resources/Characters/Animations/Manny/MM_Jump.MM_Jump"));
	if (JumpAsset.Succeeded()) {
		JumpAnim = JumpAsset.Object;
	}

	CapsuleRoot->InitCapsuleSize(22.0f, 90.0f);									// 캡슐 컴포넌트 크기 조정
	SkeletalMeshComp->SetRelativeLocation(FVector(0.0f, 0.0f, 90.0f));			// 캡슐 컴포넌트의 위치에 맞게 변경
	SkeletalMeshComp->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));		// 정면을 바라보도록 변경
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = true;
	CameraComp->bUsePawnControlRotation = false;

	CapsuleRoot->SetSimulatePhysics(false);													// 캡슐 컴포넌트 물리 시뮬레이션 비활성화
	SkeletalMeshComp->SetSimulatePhysics(false);											// 스켈레탈 메시 물리 시뮬레이션 비활성화
	SkeletalMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);					// 스켈레탈 메시 충돌 비활성화
	SkeletalMeshComp->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);	// 스켈레탈 메시 모든 충돌 채널 무시

	MoveSpeed = 50.0f;

	Gravity = FVector(0.0f, 0.0f, -980.0f);
	AirSpeed = 1.0f;

	CurrentVerticalVelocity = 0.0f;
	JumpVelocity = 1100.0f;

	bIsGround = true;
	bIsMoving = false;
	bIsJumping = false;
	SaveLocation = GetActorLocation();
}

// Called when the game starts or when spawned
void AAssignPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAssignPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Falling(DeltaTime);
	FVector Velocity = GetActorLocation() - SaveLocation;
	float Speed = Velocity.Size2D();
	if (Speed > 0) bIsMoving = true;
	else bIsMoving = false;
	SaveLocation = GetActorLocation();
}

// Called to bind functionality to input
void AAssignPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		if (AAssignPlayerController* PlayerController = Cast<AAssignPlayerController>(GetController())) {
			if (PlayerController->MoveAction) {
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&AAssignPawn::Move
				);
			}

			if (PlayerController->JumpAction) {
				EnhancedInput->BindAction(
					PlayerController->JumpAction,
					ETriggerEvent::Triggered,
					this,
					&AAssignPawn::StartJump
				);

				EnhancedInput->BindAction(
					PlayerController->JumpAction,
					ETriggerEvent::Completed,
					this,
					&AAssignPawn::StopJump
				);
			}

			if (PlayerController->LookAction) {
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&AAssignPawn::Look
				);
			}
		}
	}

}

void AAssignPawn::Move(const FInputActionValue& value) {
	if (!Controller) return;

	const FVector2D MoveInput = value.Get<FVector2D>();

	if (!FMath::IsNearlyZero(MoveInput.X)) {
		AddActorLocalOffset(FVector(MoveInput.X * MoveSpeed * AirSpeed, 0.0f, 0.0f));	// 공중에서의 속도배율 추가
	}
	if (!FMath::IsNearlyZero(MoveInput.Y)) {
		AddActorLocalOffset(FVector(0.0f, MoveInput.Y * MoveSpeed * AirSpeed, 0.0f));	// 공중에서의 속도배율 추가
	}
}
void AAssignPawn::StartJump(const FInputActionValue& value) {
	if (value.Get<bool>()) {
		if (bIsGround && !bIsJumping) // 땅에 있을 때만 점프 가능
		{
			bIsJumping = true;
			CurrentVerticalVelocity = JumpVelocity; // 초기 점프 속도 설정
		}
	}
}
void AAssignPawn::StopJump(const FInputActionValue& value) {	// 폰 클래스에서 StopJump함수를 사용할 수 없다. 사용하고자한다면 직접 만들어서 써야한다.
	if (!value.Get<bool>()) {
		if (bIsJumping)
		{
			bIsJumping = false;
		}
	}
}
void AAssignPawn::Look(const FInputActionValue& value) {
	FVector2D LookInput = value.Get<FVector2D>();

	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);
	float RotationSpeed = 5.0f;				// 그냥 사용할 시 마우스 속도에 비해 폰의 회전 속도가 느려서 추가
	AddActorLocalRotation(FRotator(0.0f, LookInput.X * RotationSpeed, 0.0f));
}

void AAssignPawn::Falling(float DeltaTime)
{
	// 바닥 체크 (레이캐스트 사용)
	FVector Start = GetActorLocation();
	FVector End = Start + FVector(0.0f, 0.0f, -90.0f); // 아래 방향으로 90cm 탐색

	FHitResult HitResult;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	bIsGround = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, CollisionParams);

	if (bIsJumping)
	{
		// 점프 중일 때는 중력을 적용하지 않고, 점프 속도를 감소시킴
		CurrentVerticalVelocity += Gravity.Z * DeltaTime;
		FVector NewLocation = GetActorLocation() + FVector(0.0f, 0.0f, CurrentVerticalVelocity * DeltaTime);
		SetActorLocation(NewLocation, true); // 충돌 검사 활성화
		if (CurrentAnim != JumpAnim) {
			PlayJumpAnim();
		}
		// 점프가 끝났는지 확인
		if (CurrentVerticalVelocity <= 0.0f)
		{
			bIsJumping = false;
		}
	}
	else if (!bIsGround)
	{
		// 점프 중이 아니고 바닥에 닿지 않았다면 중력 적용
		FVector NewVelocity = FVector(0.0f, 0.0f, Gravity.Z * DeltaTime);
		AddActorWorldOffset(NewVelocity, true); // Sweep 활성화하여 충돌 감지
		AirSpeed = 0.3f; // 공중에서의 속도 감소
		if (CurrentAnim != FallingAnim) {
			PlayFallingAnim();
		}
	}
	else
	{
		// 바닥에 닿았을 때
		AirSpeed = 1.0f; // 땅에서는 다시 정상 속도
		if (!bIsMoving) {
			if (CurrentAnim != IdleAnim) {
				PlayIdleAnim();
			}
		}
		else {
			if (CurrentAnim != RunAnim) {
				PlayRunAnim();
			}
		}
	}
}

void AAssignPawn::PlayIdleAnim()
{
	SkeletalMeshComp->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	SkeletalMeshComp->SetAnimation(IdleAnim);
	SkeletalMeshComp->Play(true);
	CurrentAnim = IdleAnim;
}

void AAssignPawn::PlayFallingAnim()
{
	SkeletalMeshComp->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	SkeletalMeshComp->SetAnimation(FallingAnim);
	SkeletalMeshComp->Play(true);
	CurrentAnim = FallingAnim;
}

void AAssignPawn::PlayRunAnim()
{
	SkeletalMeshComp->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	SkeletalMeshComp->SetAnimation(RunAnim);
	SkeletalMeshComp->Play(true);
	CurrentAnim = RunAnim;
}

void AAssignPawn::PlayJumpAnim()
{
	SkeletalMeshComp->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	SkeletalMeshComp->SetAnimation(JumpAnim);
	SkeletalMeshComp->Play(false);
	CurrentAnim = JumpAnim;
}

