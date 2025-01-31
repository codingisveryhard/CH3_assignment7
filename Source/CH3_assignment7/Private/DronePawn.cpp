// Fill out your copyright notice in the Description page of Project Settings.


#include "DronePawn.h"
#include "DroneController.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ADronePawn::ADronePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
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
	SpringArmComp->bUsePawnControlRotation = true;
	CameraComp->bUsePawnControlRotation = false;

	StaticMeshComp->SetSimulatePhysics(false);											// 스켈레탈 메시 물리 시뮬레이션 비활성화
	StaticMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);					// 스켈레탈 메시 충돌 비활성화
	StaticMeshComp->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);	// 스켈레탈 메시 모든 충돌 채널 무시

	MoveSpeed = 100.0f;
	RotationSpeed = 2.0f;
}

// Called when the game starts or when spawned
void ADronePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADronePawn::Move(const FInputActionValue& value)
{
	if (!Controller) return;

	const FVector MoveInput = value.Get<FVector>();

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

// Called every frame
void ADronePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator CurrentRotation = GetActorRotation();
	FRotator ZeroRotation = FRotator(0.0f, CurrentRotation.Yaw, 0.0f);
	FRotator NewRotation = FMath::RInterpTo(CurrentRotation, ZeroRotation, DeltaTime, RotationSpeed);
	SetActorRotation(NewRotation);

}

// Called to bind functionality to input
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

