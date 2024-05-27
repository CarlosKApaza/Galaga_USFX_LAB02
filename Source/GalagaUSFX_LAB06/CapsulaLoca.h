// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "CapsulaLoca.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_LAB06_API ACapsulaLoca : public ACapsula
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivate = "true"))
	UProjectileMovementComponent* ProyectileMovimiento;

public:
	ACapsulaLoca();
	FString tipoCapsula = "Capsula loca ";
	UFUNCTION()

	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	void DispararCapsula();
	void DispararDireccion(const FVector& FireDirection);
	
};
