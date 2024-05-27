// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanoPortaNavesAereas.h"

#include "PortaNavesAereas.generated.h"

//class UStaticMeshComponent;

UCLASS()
class GALAGAUSFX_LAB06_API APortaNavesAereas : public AActor, public IPlanoPortaNavesAereas
{
	GENERATED_BODY()

public:
	APortaNavesAereas();

private:

	class AHangar* Hangar;
	class ACentroMuniciones* CentroMuniciones;
	class AEscudo* Escudo;
	class AMotor* Motor;

	//FString Malla;
	FString Hangars;
	FString CentroMunicioness;
	FString Escudoss;
	FString Motorss;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
	// Metodos 
	virtual void SetHangar(AHangar* hangar, FString hangars) override;
	virtual void SetCentrodeMuniciones(ACentroMuniciones* centroMuniciones, FString centroMunicioness) override; // 
	virtual void SetEscudos(AEscudo* escudo, FString escudoss) override;
	virtual void SetMotor(AMotor* motor, FString motorss) override;

	void CaracteristicasPortaNaveAerea();


	//public:
	//	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	//	UStaticMeshComponent* MallaPortaNave;

		/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PortaNavesAereas")
		TArray<APortaNavesAereas*> Almacenamiento;*/

		// FUNCIONES AGREGADAS PARA RECARGAR BALAS
	//public:
		// Aumenta el número de balas disponibles
		//void RecargarBalas(int32 NumBalasRecargar);

	//private:
	//	int32 NumBalas; // Número actual de balas
	//	int32 MaxBalas; // Número máximo de balas permitidas
	//
	//public: 
	//	int32 GetNumBalas() const { return NumBalas; }
	//	int32 GetMaxBalas() const { return MaxBalas; }
};
