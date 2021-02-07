// Fill out your copyright notice in the Description page of Project Settings.


#include "Index2DArray.h"

void UIndex2DArray::ReturnKey(TArray<FInputAxisKeyMapping> InputArray, TArray<FKey>& MovementKeys){

    for(auto Itr = InputArray.CreateConstIterator(); Itr; ++Itr){

        const FInputAxisKeyMapping& test = *Itr;
        MovementKeys.Add(test.Key);
        
    }
}

void UIndex2DArray::ReturnAKey(TArray<FInputActionKeyMapping> InputArray, TArray<FKey>& MovementKeys){

    for(auto Itr2 = InputArray.CreateConstIterator(); Itr2; ++Itr2){

        const FInputActionKeyMapping& test2 = *Itr2;
        MovementKeys.Add(test2.Key);
        
    }
}