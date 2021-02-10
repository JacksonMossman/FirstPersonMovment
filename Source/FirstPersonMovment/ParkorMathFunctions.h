// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ParkorMathFunctions.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONMOVMENT_API UParkorMathFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "ParkorMath")
	 static float CameraXRotationManager(float X);
	UFUNCTION(BlueprintCallable, Category = "ParkorMath")
	 static FVector CalculateSlideVector(AActor* actor);


};
