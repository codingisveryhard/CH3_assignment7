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

	JumpDist = 500.0f;
	JumpSpeed = 10.0f;

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

			//if (PlayerController->JumpAction) {
			//	EnhancedInput->BindAction(
			//		PlayerController->JumpAction,
			//		ETriggerEvent::Triggered,
			//		this,
			//		&AAssignPawn::StartJump
			//	);

			//	EnhancedInput->BindAction(
			//		PlayerController->JumpAction,
			//		ETriggerEvent::Completed,
			//		this,
			//		&AAssignPawn::StopJump
			//	);
			//}

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
//void AAssignPawn::StartJump(const FInputActionValue& value) {	// 폰 클래스에서 Jump함수를 사용할 수 없다. 사용하고자한다면 직접 만들어서 써야한다.
//	if (value.Get<bool>()) {
//		Jump();
//	}
//}
//void AAssignPawn::StopJump(const FInputActionValue& value) {	// 폰 클래스에서 StopJump함수를 사용할 수 없다. 사용하고자한다면 직접 만들어서 써야한다.
//	if (!value.get<bool>()) {
//		stopjumping();
//	}
//}
void AAssignPawn::Look(const FInputActionValue& value) {
	FVector2D LookInput = value.Get<FVector2D>();

	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);
	float RotationSpeed = 5.0f;				// 그냥 사용할 시 마우스 속도에 비해 폰의 회전 속도가 느려서 추가
	AddActorLocalRotation(FRotator(0.0f, LookInput.X * RotationSpeed, 0.0f));
}

void AAssignPawn::Falling(float DeltaTime)
{
	FVector NewVelocity = Gravity * DeltaTime; // 중력 가속도 적용

	// 바닥 체크 (레이캐스트 사용)
	FVector Start = GetActorLocation();
	FVector End = Start + FVector(0.0f, 0.0f, -90.0f); // 아래 방향으로 10cm 탐색

	FHitResult HitResult;					// 충돌 검사결과를 저장
	FCollisionQueryParams CollisionParams;	// 충돌 검사 시 추가적인 조건 설정
	CollisionParams.AddIgnoredActor(this);	// 자기 자신 무시

	bIsGround = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, CollisionParams);	// 폰을 기준으로 일정거리 아래에 물체가 있을 시 땅 판정

	if (!bIsGround)
	{
		// 바닥에 닿지 않았다면 중력 적용
		AddActorWorldOffset(NewVelocity, true); // Sweep 활성화하여 충돌 감지
		AirSpeed = 0.3;							// 공중에서의 속도 감소
		if (CurrentAnim != FallingAnim) {		// 애니메이션이 전환될 때만 작동(멈춤 방지)
			PlayFallingAnim();
		}
	}
	else {
		AirSpeed = 1.0f;						// 땅에서는 다시 정상 속도
		if (!bIsMoving) {
			if (CurrentAnim != IdleAnim) {			// 애니메이션이 전환될 때만 작동(멈춤 방지)
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
