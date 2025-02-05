#include "DronePawn.h"
#include "DroneController.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

ADronePawn::ADronePawn()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(SceneRoot);
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Resources/Props/SM_Couch.SM_Couch"));
	if (MeshAsset.Succeeded()) {
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset0(TEXT("/Game/Resources/Materials/M_Coin_A.M_Coin_A"));
	if (MaterialAsset0.Succeeded()) {
		StaticMeshComp->SetMaterial(0, MaterialAsset0.Object);
	}


	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = false;
	CameraComp->bUsePawnControlRotation = false;

	StaticMeshComp->SetSimulatePhysics(false);											// 스켈레탈 메시 물리 시뮬레이션 비활성화
	StaticMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);				// 스켈레탈 메시 충돌 비활성화
	StaticMeshComp->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);	// 스켈레탈 메시 모든 충돌 채널 무시

	MoveSpeed = 100.0f;
	RotationSpeed = 2.0f;
	HorizonSpeed = 1.0f;
	LastMovingTime = 0.0f;
}

void ADronePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADronePawn::Move(const FInputActionValue& value)
{
	if (!Controller) return;

	const FVector MoveInput = value.Get<FVector>();

	LastMovingTime = GetWorld()->GetTimeSeconds();		// 마지막으로 움직였을 때의 시간을 저장한다


	float RotationScale = 5.0f;							// 이동 시 기울어지는 각도의 배율
	FRotator CurrentRotation = GetActorRotation();
	float MovingPitch = -MoveInput.X * RotationScale;	// 이동 시 Pitch로 기울여지게 될 각도
	float MovingRoll = MoveInput.Y * RotationScale;		// 이동 시 Roll로 기울여지게 될 각도
	FRotator DroneRotation = FRotator(CurrentRotation.Pitch + MovingPitch, CurrentRotation.Yaw, CurrentRotation.Roll +  MovingRoll);	// 상승 시에는 기울여지지 않는다.
	FRotator NewRotation = FMath::RInterpTo(CurrentRotation, DroneRotation, GetWorld()->GetDeltaSeconds(), RotationSpeed);	// 기울여지는 움직임을 자연스럽게 한다
	SetActorRotation(NewRotation);


	if (!FMath::IsNearlyZero(MoveInput.X)) {
		AddActorLocalOffset(FVector(MoveInput.X * MoveSpeed, 0.0f, 0.0f));
	}
	if (!FMath::IsNearlyZero(MoveInput.Y)) {
		AddActorLocalOffset(FVector(0.0f, MoveInput.Y * MoveSpeed, 0.0f));
	}
	if (!FMath::IsNearlyZero(MoveInput.Z)) {
		AddActorLocalOffset(FVector(0.0f, 0.0f, MoveInput.Z * MoveSpeed * 0.1f));
	}
}

void ADronePawn::Look(const FInputActionValue& value) {
	FVector2D LookInput = value.Get<FVector2D>();

	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);
	AddActorLocalRotation(FRotator(-LookInput.Y * RotationSpeed, LookInput.X * RotationSpeed, 0.0f));
}

void ADronePawn::Wheel(const FInputActionValue& value)
{
	const float WheelInput = value.Get<float>();

	AddControllerRollInput(WheelInput);
	AddActorLocalRotation(FRotator(0.0f, 0.0f, WheelInput * RotationSpeed));
}

void ADronePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float CurrentTime = GetWorld()->GetTimeSeconds();	// 현재 시간을 가져온다

	FRotator CurrentRotation = GetActorRotation();
	FRotator ZeroRotation = FRotator(0.0f, CurrentRotation.Yaw, 0.0f);	// 수평이기 때문에 Yaw축은 제외
	FRotator NewRotation = FMath::RInterpTo(CurrentRotation, ZeroRotation, DeltaTime, HorizonSpeed);	// 자연스러운 움직임으로 되돌아간다
	SetActorRotation(NewRotation);

	if (CurrentTime - LastMovingTime > 1.0f) {			// 마지막으로 움직인 시간과 1초 이상 차이가 나면 회전 상태를 수평으로 유지한다
		CurrentRotation = GetActorRotation();
		ZeroRotation = FRotator(0.0f, CurrentRotation.Yaw, 0.0f);	// 수평이기 때문에 Yaw축은 제외
		NewRotation = FMath::RInterpTo(CurrentRotation, ZeroRotation, DeltaTime, RotationSpeed);	// 자연스러운 움직임으로 되돌아간다
		SetActorRotation(NewRotation);
	}
}

void ADronePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{

	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		if (ADroneController* DroneController = Cast<ADroneController>(GetController())) {
			if (DroneController->MoveAction) {
				EnhancedInput->BindAction(
					DroneController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&ADronePawn::Move
				);
			}
			if (DroneController->LookAction) {
				EnhancedInput->BindAction(
					DroneController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&ADronePawn::Look
				);
			}

			if (DroneController->WheelAction) {
				EnhancedInput->BindAction(
					DroneController->WheelAction,
					ETriggerEvent::Triggered,
					this,
					&ADronePawn::Wheel
				);
			}
		}
	}
}
