// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PortaNavesAereas.h"
#include "BuilderPortaNavesAereas.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuilderPortaNavesAereas : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGAUSFX_LAB06_API IBuilderPortaNavesAereas
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	// metodos para el nivel 1
	virtual void ConstruirHangar() = 0;
	virtual void ConstruirCentrodeMuniciones() = 0;
	virtual void ConstruirEscudos() = 0;
	virtual void ConstruirMotor() = 0;

	virtual class APortaNavesAereas* GetPortaNaveAerea() = 0;


	class AHangar* Hangar;
	class ACentroMuniciones* CentroMuniciones;
	class AEscudo* Escudo;
	class AMotor* Motor;

};

	
