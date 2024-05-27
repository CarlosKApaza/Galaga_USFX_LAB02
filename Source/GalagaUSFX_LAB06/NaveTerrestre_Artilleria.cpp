// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveTerrestre_Artilleria.h"
#include "TimerManager.h"

void ANaveTerrestre_Artilleria::BeginPlay()
{
	Super::BeginPlay();
}

ANaveTerrestre_Artilleria::ANaveTerrestre_Artilleria()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_Transporte.TwinStickUFO_Transporte'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveTerrestre_Artilleria"; //Nombre de la nave
	VelocidadYArtilleria = 350.0f;


	//VIDA DE LA NAVE 
	energia = 10; // Inicializar la energia que tendra la nave
	resistencia = 50; // Inicializar la resistencia que tendra la nave
	/*VelocidadXArtilleria = 0.0f;*/
}

void ANaveTerrestre_Artilleria::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveTerrestre_Artilleria::Mover(float DeltaTime)
{
	//Obtenemos la posición actual del actor
	FVector PosicionActual = GetActorLocation();

	// Generamos nuevas coordenadas X e Y aleatorias
	float NuevaX = 0.0f; // No se mueve en el eje X
	// Calculamos la nueva posición en el eje Y
	float MovimientoY = PosicionActual.Y + (VelocidadYArtilleria * DeltaTime);

	// Verificamos si la nave ha alcanzado el límite superior o inferior en el eje Y
	if (MovimientoY >= 1100.0f || MovimientoY  <= -1100.0f)
	{
		// Cambiamos la dirección multiplicando por -1
		VelocidadYArtilleria *= -1.0f;
	}
	// Establecemos la nueva posición del actor
	SetActorLocation(FVector(PosicionActual.X + NuevaX, MovimientoY, PosicionActual.Z));

 
}


int32 ANaveTerrestre_Artilleria::RecibirDanio(float dano)
{
	resistencia -= dano;
	if (resistencia <= 0)
	{
		energia -= dano;    // Reducir la energía según la cantidad de daño recibido
	}
	if (energia <= 0)        // Verificar si la energía llega a cero o menos
	{
		// Destruir la nave
		Destroy();
	}
	return 0;
}
