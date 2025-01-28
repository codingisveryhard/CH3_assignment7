// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneController.h"
#include "EnhancedInputSubSystems.h"


ADroneController::ADroneController() : InputMappingContext(nullptr), MoveAction(nullptr), LookAction(nullptr), WheelAction(nullptr) {}

void ADroneController::BeginPlay() {
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer()) {
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()) {
			if (InputMappingContext) {
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}
