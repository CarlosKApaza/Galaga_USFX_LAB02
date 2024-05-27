// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Capsula.h"
#include "CapsulaVida.h"
#include "CapsulaEscudo.h"
#include "CapsulaLoca.h"



#include "CreadorCapsulas.generated.h"



UCLASS()
class GALAGAUSFX_LAB06_API ACreadorCapsulas : public AActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "FabricaCapsulas")
	virtual ACapsula* CrearCapsulas(FString NombreCapsulaSKU, FVector PosicionCapsula, FRotator Rotacion);

	ACapsula* OrdenarCapsula(FString NombreCapsulaSKU, FVector PosicionCapsula, FRotator Rotacion);
public:	
	// Sets default values for this actor's properties
	ACreadorCapsulas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FTimerHandle SpawnTimerHandle;

};
