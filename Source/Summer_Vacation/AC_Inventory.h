// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AC_Inventory.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShowInventory);

UCLASS(config = Engine, Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class SUMMER_VACATION_API UAC_Inventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_Inventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable)
		FShowInventory ShowInventory;
};
