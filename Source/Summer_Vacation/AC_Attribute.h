// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AC_Attribute.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDead);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SUMMER_VACATION_API UAC_Attribute : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_Attribute();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	UPROPERTY(BlueprintReadWrite)
	float HP = 100, MAXHP = 100, Stamina = 100, MaxStamina = 100, Funk = 0, MaxFunk = 100;



	UFUNCTION(BlueprintCallable)
		void CalculatorHP(float Damage);

	UPROPERTY(BlueprintAssignable)
		FDead Dead;


	UFUNCTION(BlueprintCallable)
		void RegenerationTimer();

private:
	// Timer handle
	FTimerHandle TimerHandleDelay, TimerHandleCall;

	// Regeneration delay time (in seconds)
	const float RegenerationDelaySeconds = 10.0f;

	// Function call interval (in seconds)
	const float FunctionCallIntervalSeconds = 1.0f;

	// Function to be called every second
	void Call_Regen();

	void Clear_Regen();
};
