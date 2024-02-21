// Fill out your copyright notice in the Description page of Project Settings.


#include "OneLegDemon.h"

// Sets default values
AOneLegDemon::AOneLegDemon()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);
	
}

// Called when the game starts or when spawned
void AOneLegDemon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOneLegDemon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOneLegDemon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

