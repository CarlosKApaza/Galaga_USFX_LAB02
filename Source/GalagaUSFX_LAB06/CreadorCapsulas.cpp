// Fill out your copyright notice in the Description page of Project Settings.


#include "CreadorCapsulas.h"

#include "Capsula.h"
#include "CapsulaVida.h"
#include "CapsulaEscudo.h"
#include "CapsulaLoca.h"
#include "CapsulaEnergia.h"

// Sets default values
ACreadorCapsulas::ACreadorCapsulas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACreadorCapsulas::BeginPlay()
{
	Super::BeginPlay();
}

void ACreadorCapsulas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

ACapsula* ACreadorCapsulas::CrearCapsulas(FString NombreCapsulaSKU, FVector PosicionCapsula, FRotator Rotacion)
{
	if (NombreCapsulaSKU.Equals("CapsulaVida")) {
		return GetWorld()->SpawnActor<ACapsulaVida>(ACapsulaVida::StaticClass(),
			PosicionCapsula, Rotacion);
	}
	else if (NombreCapsulaSKU.Equals("CapsulaEscudo")) {
		return GetWorld()->SpawnActor<ACapsulaEscudo>(ACapsulaEscudo::StaticClass(),
			PosicionCapsula, Rotacion);
	}
	else if (NombreCapsulaSKU.Equals("CapsulaLoca")) {
		return GetWorld()->SpawnActor<ACapsulaLoca>(ACapsulaLoca::StaticClass(),
			PosicionCapsula, Rotacion);
	}
	else if (NombreCapsulaSKU.Equals("CapsulaEnergia")) {
		return GetWorld()->SpawnActor<ACapsulaEnergia>(ACapsulaEnergia::StaticClass(),
			PosicionCapsula, Rotacion);
	}
	else return nullptr; //Si la cadena es nula o no coincide con ninguna capsula, devuelve nullptr
}

ACapsula* ACreadorCapsulas::OrdenarCapsula(FString NombreCapsulaSKU, FVector PosicionCapsula, FRotator Rotacion)
{
	ACapsula* Capsula = CrearCapsulas(NombreCapsulaSKU, PosicionCapsula, Rotacion);
	return Capsula;
}
