// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DronePawn.generated.h"

class UCameraComponent;
class USpringArmComponent;
struct FInputActionValue;

UCLASS()
class CH3_ASSIGNMENT7_API ADronePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADronePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Components")
	UStaticMeshComponent* StaticMeshComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Components")
	UCameraComponent* CameraComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Components")
	USpringArmComponent* SpringArmComp;

	void Move(const FInputActionValue& value);
	void Look(const FInputActionValue& value);
	void Wheel(const FInputActionValue& value);		// 마우스 휠을 통해 Roll 회전을 하게 한다.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Properties")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pawn| Properties")
	float RotationSpeed;				// 그냥 사용할 시 마우스 속도에 비해 폰의 회전 속도가 느려서 추가

	float LastMovingTime;				// 움직이고 있는지 판별하기 위해 추가

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
