// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadWriteTxtFile.h"

bool UReadWriteTxtFile::LoadTxt(FString FileNameA, FString& OutText)
{
     return FFileHelper::LoadFileToString(OutText, *(FPaths::ProjectDir() + FileNameA));
}

bool UReadWriteTxtFile::SaveTxt(FString InText, FString FileNameB)
{
     return FFileHelper::SaveStringToFile(InText, *(FPaths::ProjectDir() + FileNameB));
}
