// Fill out your copyright notice in the Description page of Project Settings.


#include "LearningStyleTest.h"

void ULearningStyleTest::CalculateLearningStyle(TArray<int32> LearningStyleValues, FConvertedLearningStyle& CLS){
    
    //explain here
    if(LearningStyleValues[0] < LearningStyleValues[1]){
        CLS.Style1_Letter = "B";
        CLS.Style1_Value = LearningStyleValues[1] - LearningStyleValues[0];
    }
    else{
        CLS.Style1_Letter = "A";
        CLS.Style1_Value = LearningStyleValues[0] - LearningStyleValues[1];
    }

    if(LearningStyleValues[2] < LearningStyleValues[3]){
        CLS.Style1_Letter = "B";
        CLS.Style1_Value = LearningStyleValues[3] - LearningStyleValues[2];
    }
    else{
        CLS.Style1_Letter = "A";
        CLS.Style1_Value = LearningStyleValues[2] - LearningStyleValues[3];
    }

    if(LearningStyleValues[4] < LearningStyleValues[5]){
        CLS.Style1_Letter = "B";
        CLS.Style1_Value = LearningStyleValues[5] - LearningStyleValues[4];
    }
    else{
        CLS.Style1_Letter = "A";
        CLS.Style1_Value = LearningStyleValues[4] - LearningStyleValues[5];
    }

    if(LearningStyleValues[6] < LearningStyleValues[7]){
        CLS.Style1_Letter = "B";
        CLS.Style1_Value = LearningStyleValues[7] - LearningStyleValues[6];
    }
    else{
        CLS.Style1_Letter = "A";
        CLS.Style1_Value = LearningStyleValues[6] - LearningStyleValues[7];
    }
}