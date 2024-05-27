// Fill out your copyright notice in the Description page of Project Settings.


#include "PortaNavesAereas.h"
#include "Hangar.h"
#include "CentroMuniciones.h"
#include "Escudo.h"
#include "Motor.h"

#include "Engine/Engine.h"

// Sets default values
APortaNavesAereas::APortaNavesAereas()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Inicializamos NumBalas y MaxBalas a algún valor
	//NumBalas = 0;
	//MaxBalas = 100; // Número máximo de balas permitidas
}

// Called when the game starts or when spawned
void APortaNavesAereas::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APortaNavesAereas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APortaNavesAereas::SetHangar(AHangar* hangar, FString hangars)
{
	Hangar = hangar; // actor 
	Hangars = hangars; // string
}

void APortaNavesAereas::SetCentrodeMuniciones(ACentroMuniciones* centroMuniciones, FString centroMunicioness)
{
	CentroMuniciones = centroMuniciones;
	CentroMunicioness = centroMunicioness;
}

void APortaNavesAereas::SetEscudos(AEscudo* escudo, FString escudoss)
{
	Escudo = escudo;
	Escudoss = escudoss;
}

void APortaNavesAereas::SetMotor(AMotor* motor, FString motorss)
{
	Motor = motor;
	Motorss = motorss;
}


void APortaNavesAereas::CaracteristicasPortaNaveAerea()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Hangars));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *CentroMunicioness));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Escudoss));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s"), *Motorss));
}

//void APortaNavesAereas::RecargarBalas(int32 NumBalasRecargar)
//{
//	// Asegúrate de que el número de balas no exceda el máximo
//	NumBalas = FMath::Clamp(NumBalas + NumBalasRecargar, 0, MaxBalas);
//}
//
