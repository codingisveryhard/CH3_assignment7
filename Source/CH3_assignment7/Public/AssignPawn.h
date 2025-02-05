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
	AAssignPawn();


protected:
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
	UFUNCTION()
	void StartJump(const FInputActionValue& value);
	UFUNCTION()
	void StopJump(const FInputActionValue& value);
	UFUNCTION(BlueprintCallable)
	void Look(const FInputActionValue& value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Properties")
	float MoveSpeed;

	// 중력 작용을 위한 변수 및 함수
	FVector Gravity;
	float AirSpeed;
	void IsMoving();
	void IsGround();
	void Jumping(float DeltaTime);
	void Falling(float DeltaTime);
	void GroundMove();

	// 애니메이션 적용을 위해 선언
	UPROPERTY(EditAnywhere, Category = "Pawn| Animation")
	UAnimationAsset* IdleAnim;
	UPROPERTY(EditAnywhere, Category = "Pawn| Animation")
	UAnimationAsset* RunAnim;
	UPROPERTY(EditAnywhere, Category = "Pawn| Animation")
	UAnimationAsset* FallingAnim;
	UPROPERTY(EditAnywhere, Category = "Pawn| Animation")
	UAnimationAsset* JumpAnim;
	UPROPERTY(EditAnywhere, Category = "Pawn| Animation")
	UAnimationAsset* LandAnim;

	UAnimationAsset* CurrentAnim; // 현재 재생중인 애니메이션 확인용

	// 애니메이션의 루프 동작을 위한 함수
	void PlayIdleAnim();
	void PlayFallingAnim();
	void PlayRunAnim();
	void PlayJumpAnim();
	void PlayLandAnim();

	// 점프를 위한 변수
	float CurrentVerticalVelocity;	// 점프 시 변하는 속도
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Properties")
	float JumpVelocity;				// 점프 시작 시 올라가는 속도

	// 이동 및 점프, 낙하 그리고 현재 위치를 저장하는 변수
	bool bIsGround;
	bool bIsMoving;
	bool bIsJumping;
	FVector SaveLocation;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
