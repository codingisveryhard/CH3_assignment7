// Fill out your copyright notice in the Description page of Project Settings.


#include "AssignPawn.h"

// Sets default values
AAssignPawn::AAssignPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleRoot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleRoot"));
	SetRootComponent(CapsuleRoot);
	SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMeshComp->SetupAttachment(CapsuleRoot);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("/Game/Resources/Characters/Meshes/SKM_Quinn.SKM_Quinn"));
	if (MeshAsset.Succeeded()) {
		SkeletalMeshComp->SetSkeletalMesh(MeshAsset.Object);
	}
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset0(TEXT("/Game/Resources/Characters/Materials/Instances/Quinn/MI_Quinn_01.MI_Quinn_01"));
	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset1(TEXT("/Game/Resources/Characters/Materials/Instances/Quinn/MI_Quinn_01.MI_Quinn_02"));
	if (MaterialAsset0.Succeeded() && MaterialAsset1.Succeeded()) {
		SkeletalMeshComp->SetMaterial(0, MaterialAsset0.Object);
		SkeletalMeshComp->SetMaterial(1, MaterialAsset1.Object);
	}
}

// Called when the game starts or when spawned
void AAssignPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAssignPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAssignPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

