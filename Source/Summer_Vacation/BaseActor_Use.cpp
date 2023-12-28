// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseActor_Use.h"
#include "AC_Use.h"
#include "Components/BillboardComponent.h"

// Sets default values
ABaseActor_Use::ABaseActor_Use()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Scene);

	// Set up the billboard component
	BBC = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	BBC->SetupAttachment(Scene);

	// Set up the use component
	UseComponent = CreateDefaultSubobject<UAC_Use>(TEXT("UseComponent"));
	
}

// Called when the game starts or when spawned
void ABaseActor_Use::BeginPlay()
{
	Super::BeginPlay();
	
}
