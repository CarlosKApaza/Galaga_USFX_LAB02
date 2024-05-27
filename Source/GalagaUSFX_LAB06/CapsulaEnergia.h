// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaEnergia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_LAB06_API ACapsulaEnergia : public ACapsula
{
	GENERATED_BODY()
public:
	ACapsulaEnergia();
	FString tipoCapsula = "Energia";

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

};
