// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorNavesAereas.h"

#include "NaveEnemiga.h"
#include "NaveAerea_Transporte.h"
#include "NaveAerea_Caza.h"

ANaveEnemiga* ACreadorNavesAereas::CrearNaveEnemiga(FString NombreNaveSKU, FVector PosicionNave, FRotator Rotacion)
{
	// Selecciona que nave crear dependiendo de la cadena pasada
	if (NombreNaveSKU.Equals("NaveAerea_Caza")) {
		return GetWorld()->SpawnActor<ANaveAerea_Caza>(ANaveAerea_Caza::StaticClass(),
			PosicionNave, Rotacion);
	}

	// Selecciona que nave crear dependiendo de la cadena pasada
	else if (NombreNaveSKU.Equals("NaveAerea_Transporte")) {
			return GetWorld()->SpawnActor<ANaveAerea_Transporte>(ANaveAerea_Transporte::StaticClass(),
				PosicionNave, Rotacion);
		}
	else return nullptr; //Si la cadena es nula o no coincide con ninguna nave, devuelve nullptr
}