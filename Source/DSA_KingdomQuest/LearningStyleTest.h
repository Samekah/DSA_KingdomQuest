// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LearningStyleTest.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FConvertedLearningStyle
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Custom")
	int32 Style1_Value;

	UPROPERTY(BlueprintReadWrite, Category = "Custom")
	FString Style1_Letter;

	UPROPERTY(BlueprintReadWrite, Category = "Custom")
	int32 Style2_Value;

	UPROPERTY(BlueprintReadWrite, Category = "Custom")
	FString Style2_Letter;

	UPROPERTY(BlueprintReadWrite, Category = "Custom")
	int32 Style3_Value;

	UPROPERTY(BlueprintReadWrite, Category = "Custom")
	FString Style3_Letter;

	UPROPERTY(BlueprintReadWrite, Category = "Custom")
	int32 Style4_Value;

	UPROPERTY(BlueprintReadWrite, Category = "Custom")
	FString Style4_Letter;

};
UCLASS()
class DSA_KINGDOMQUEST_API ULearningStyleTest : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	public:

	UFUNCTION(BlueprintCallable, Category = "Custom")
	static void CalculateLearningStyle(TArray<int32> LearningStyleValues, FConvertedLearningStyle& CLS);
};
