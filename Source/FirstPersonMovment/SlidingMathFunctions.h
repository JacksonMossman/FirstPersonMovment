// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SlidingMathFunctions.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONMOVMENT_API USlidingMathFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "SlidingFunctions")
		static float SlideVel(float CurrentForwardSpeed);

};
