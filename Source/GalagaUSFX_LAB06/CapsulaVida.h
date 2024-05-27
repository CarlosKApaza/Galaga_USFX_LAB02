// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaVida.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_LAB06_API ACapsulaVida : public ACapsula
{
	GENERATED_BODY()
protected:
	ACapsulaVida();
	FString tipoCapsula = "Vida";
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
