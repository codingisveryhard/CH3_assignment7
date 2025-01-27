// Fill out your copyright notice in the Description page of Project Settings.


#include "AssignPlayerController.h"
#include "EnhancedInputSubSystems.h"

AAssignPlayerController::AAssignPlayerController() : InputMappingContext(nullptr), MoveAction(nullptr), LookAction(nullptr) {} // JumpAction(nullptr) 제거

void AAssignPlayerController::BeginPlay() {
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer()) {
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()) {
			if (InputMappingContext) {
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}
