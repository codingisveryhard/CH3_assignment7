// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AssignPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class CH3_ASSIGNMENT7_API AAssignPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:
	AAssignPlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input");
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input");
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input");
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input");
	UInputAction* JumpAction;

	virtual void BeginPlay() override;

};