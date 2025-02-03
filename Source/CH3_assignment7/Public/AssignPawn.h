// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"		// 폰액터에서 캡슐 컴포넌트를 사용하기 위해 추가
#include "AssignPawn.generated.h"

class UCameraComponent;
class USpringArmComponent;
struct FInputActionValue;

UCLASS()
class CH3_ASSIGNMENT7_API AAssignPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAssignPawn();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Components")
	UCapsuleComponent* CapsuleRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Components")
	USkeletalMeshComponent* SkeletalMeshComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Components")
	UCameraComponent* CameraComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Components")
	USpringArmComponent* SpringArmComp;

	UFUNCTION()
	void Move(const FInputActionValue& value);
	//UFUNCTION()
	//void StartJump(const FInputActionValue& value);
	//UFUNCTION()
	//void StopJump(const FInputActionValue& value);
	UFUNCTION(BlueprintCallable)
	void Look(const FInputActionValue& value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Properties")
	float MoveSpeed;
	float Accelerate;

	FVector Gravity;
	float AirSpeed;
	void Falling(float DeltaTime);

	UPROPERTY(EditAnywhere, Category = "Pawn| Animation")
	UAnimationAsset* IdleAnim;
	UPROPERTY(EditAnywhere, Category = "Pawn| Animation")
	UAnimationAsset* RunAnim;
	UPROPERTY(EditAnywhere, Category = "Pawn| Animation")
	UAnimationAsset* FallingAnim;

	UAnimationAsset* CurrentAnim; // 현재 재생중인 애니메이션 확인용

	void PlayIdleAnim();
	void PlayFallingAnim();
	void PlayRunAnim();


	float JumpDist;
	float JumpSpeed;

	bool bIsGround;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Properties")
	bool bIsMoving;
	bool bIsJumping;
	FVector SaveLocation;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
