// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "ReadWriteTxtFile.generated.h"

/**
 * 
 */
UCLASS()
class DSA_KINGDOMQUEST_API UReadWriteTxtFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
	
	UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadTxt"))
	static bool LoadTxt(FString FileNameA, FString& OutText);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveTxt"))
	static bool SaveTxt(FString InText, FString FileNameB);
	
};