// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <GameplayTagContainer.h>
#include <Engine/DataTable.h>
#include "BaseActor_Use.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUse, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAfterUse, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOpen, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClose, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLock, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnLock, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlick, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnFlick, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAlarm, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDisAlarm, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExploxe, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShoot, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTakeKey, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSliderLock, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSliderUnLock, bool, isHorror);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTakePhoto, bool, isHorror);

UCLASS()
class SUMMER_VACATION_API ABaseActor_Use : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseActor_Use();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class UBillboardComponent* BBC;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class UAC_Use* UseComponent;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		FGameplayTag ItemTag;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		FName RowName;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
		FDataTableRowHandle Table;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Default")
        bool CanUse;

	UPROPERTY(BlueprintAssignable)
		FUse Use;

	UPROPERTY(BlueprintAssignable)
		FAfterUse AfterUse;

	UPROPERTY(BlueprintAssignable)
		FOpen Open;

	UPROPERTY(BlueprintAssignable)
		FClose Close;

	UPROPERTY(BlueprintAssignable)
		FLock Lock;

	UPROPERTY(BlueprintAssignable)
		FUnLock UnLock;

	UPROPERTY(BlueprintAssignable)
		FFlick Flick;

	UPROPERTY(BlueprintAssignable)
		FUnFlick UnFlick;

	UPROPERTY(BlueprintAssignable)
		FAlarm Alarm;

	UPROPERTY(BlueprintAssignable)
		FDisAlarm DisAlarm;

	UPROPERTY(BlueprintAssignable)
		FExploxe Exploxe;

	UPROPERTY(BlueprintAssignable)
		FShoot Shoot;

	UPROPERTY(BlueprintAssignable)
		FTakeKey TakeKey;

	UPROPERTY(BlueprintAssignable)
		FSliderLock SliderLock;

	UPROPERTY(BlueprintAssignable)
		FSliderUnLock SliderUnLock;

	UPROPERTY(BlueprintAssignable)
		FTakePhoto TakePhoto;


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallUseDelegate(bool isHorror)
    {
        Use.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
        void CallAfterUseDelegate(bool isHorror)
    {
        AfterUse.Broadcast(isHorror);
    };


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallOpenDelegate(bool isHorror)
    {
        Open.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallCloseDelegate(bool isHorror)
    {
        Close.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallLockDelegate(bool isHorror)
    {
        Lock.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallUnLockDelegate(bool isHorror)
    {
        UnLock.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallFlickDelegate(bool isHorror)
    {
        Flick.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallUnFlickDelegate(bool isHorror)
    {
        UnFlick.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallAlarmDelegate(bool isHorror)
    {
        Alarm.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallDisAlarmDelegate(bool isHorror)
    {
        DisAlarm.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallExploxeDelegate(bool isHorror)
    {
        Exploxe.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallShootDelegate(bool isHorror)
    {
        Shoot.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallTakeKeyDelegate(bool isHorror)
    {
        TakeKey.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallSliderLockDelegate(bool isHorror)
    {
        SliderLock.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallSliderUnLockDelegate(bool isHorror)
    {
        SliderUnLock.Broadcast(isHorror);
    }


    UFUNCTION(BlueprintCallable, Category = "Delegate")
    void CallTakePhotoDelegate(bool isHorror)
    {
        TakePhoto.Broadcast(isHorror);
    }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;




};
