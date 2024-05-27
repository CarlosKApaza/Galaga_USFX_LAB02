// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GalagaUSFX_LAB06GameMode.generated.h"

class ANaveEnemiga; //Forward Declaration

UCLASS(MinimalAPI)
class AGalagaUSFX_LAB06GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalagaUSFX_LAB06GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
//------------------------------Builder PortaNavesAereasNiv1--------------------------------//
	// builder concreto 1
	UPROPERTY(VisibleAnywhere, Category = "BuilderPortaNavesAereasNiv1")
	class ABuilderPortaNavesAereasNiv1* BuilderPortaNavesAereasNiv1;
	// builder director
	UPROPERTY(VisibleAnywhere, Category = "DirectorPortaNavesAereas")
	class ADirectorPortaNavesAereas* DirectorPortaNavesAereas;

	
public:
	TArray<ANaveEnemiga*> TANavesEnemigas; //Array de Naves Enemigas
	//TArray<APortaNavesAereas*> TAPortaNavesAereas; //Array que almacena la Porta Naves Aereas

	int ClaveNaves = 0; // clave para las naves enemigas
	//int Puntaje; //Puntaje del jugador

UPROPERTY()
	TMap<ANaveEnemiga*, int> TMClavesNavesEnemigas; //Mapa de Naves Enemigas
	TMap<ANaveEnemiga*, FVector> TMNavesEnemigas; //Mapa de Naves Enemigas

public:

	FTimerHandle FTHMostrarClaves;


	FTimerHandle FTHEliminarEnemigosAleatorios;
	FTimerHandle FTHCrearEnemigosAleatorios;

	void MostrarClavesNaves(); //Funcion para mostrar las claves de las naves
	void OcultarClavesNaves(); //Funcion para ocultar las claves de las naves


	void CrearEnemigosAleatoriamente(TArray<FString> TiposNaves, FVector PosicionInicial, FRotator RotacionNaves, float EspacioEntreNavesY, int CantidadNaves); //Funcion para crear enemigos aleatoriamente
	void CrearEnemigos(); //Funcion para crear enemigos de un tipo especifico



//	void Score(); //Funcion para mostrar el score
//	void IncrementarPuntaje(int32 Puntos);
//	FTimerHandle FTHImcrementarPuntaje;
//
//protected:
//	int32 Puntaje; //Puntaje del jugador
};



