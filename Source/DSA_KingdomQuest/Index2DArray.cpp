// Fill out your copyright notice in the Description page of Project Settings.


#include "Index2DArray.h"

void UIndex2DArray::ReturnKey(TArray<FInputAxisKeyMapping> InputArray, TArray<FKey> MovementKeys){

    const FInputAxisKeyMapping& test;

    for(auto Itr = InputArray.CreateConstIterator(); Itr; ++Itr){

        test = *Itr;
        MovementKeys.Add(test.Key);
        
    }
}