// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "AssignPawn.generated.h"

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


	UCapsuleComponent* CapsuleRoot;
	USkeletalMeshComponent* SkeletalMeshComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
