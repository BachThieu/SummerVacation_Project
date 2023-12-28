// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_Attribute.h"


// Sets default values for this component's properties
UAC_Attribute::UAC_Attribute()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	
	// ...
}


// Called when the game starts
void UAC_Attribute::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UAC_Attribute::CalculatorHP(float Damage)
{
	HP = FMath::Clamp(HP + Damage, 0.f, MAXHP);
	if (HP == 0) 
		Dead.Broadcast();
}

void UAC_Attribute::Call_Regen()
{
	CalculatorHP(5);
	UE_LOG(LogTemp, Warning, TEXT("Regeneration called. RegenAmount"));
}

void UAC_Attribute::Clear_Regen()
{
	// Clear the timer that repeats every second
	GetWorld()->GetTimerManager().ClearTimer(TimerHandleCall);

	// Clear the regeneration delay timer
	GetWorld()->GetTimerManager().ClearTimer(TimerHandleDelay);
}

void UAC_Attribute::RegenerationTimer()
{

	// Set the timer to repeat every second
	GetWorld()->GetTimerManager().SetTimer(TimerHandleCall, this, &UAC_Attribute::Call_Regen,
		FunctionCallIntervalSeconds, true);

	// Set the timer for the regeneration delay
	GetWorld()->GetTimerManager().SetTimer(TimerHandleDelay, this, &UAC_Attribute::Clear_Regen,RegenerationDelaySeconds, false);
}


