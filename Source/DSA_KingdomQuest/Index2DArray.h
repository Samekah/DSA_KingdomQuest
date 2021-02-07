// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "GameFramework/PlayerInput.h"
#include "Index2DArray.generated.h"

/**
 * 
 */
UCLASS()
class DSA_KINGDOMQUEST_API UIndex2DArray : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		
		UFUNCTION(BlueprintCallable, Category = "Custom")
		static void ReturnKey(TArray<FInputAxisKeyMapping> InputArray, TArray<FKey> MovementKeys);

};
