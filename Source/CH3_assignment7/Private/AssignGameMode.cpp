// Fill out your copyright notice in the Description page of Project Settings.

#include "AssignGameMode.h"
#include "AssignPawn.h"
#include "AssignPlayerController.h"

AAssignGameMode::AAssignGameMode()
{
	DefaultPawnClass = AAssignPawn::StaticClass();
	PlayerControllerClass = AAssignPlayerController::StaticClass();

}
