// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAcuatica_Espia.h"

void ANaveAcuatica_Espia::BeginPlay()
{
	Super::BeginPlay();
}

ANaveAcuatica_Espia::ANaveAcuatica_Espia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_Acuatica.TwinStickUFO_Acuatica'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	NombreNave = "NaveAcuatica_Espia"; //Nombre de la nave
	VelocidadYEspia = -200.0f;

	//VIDA DE LA NAVE 
	energia = 10; // Inicializar la energia que tendra la nave
	resistencia = 30; // Inicializar la resistencia que tendra la nave
}

void ANaveAcuatica_Espia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveAcuatica_Espia::Mover(float DeltaTime)
{
	//Obtenemos la posicion actual del Actor
	FVector PosicionActual = GetActorLocation();

	// Damos un valor a X 
	float NuevaX = 0.0f;

	// Calculamos el movimiento para Y 
	float MovimientoY = PosicionActual.Y + (VelocidadYEspia * DeltaTime);

	//Verificamos si la posicion alcanza el limite supeior e inferior 

	if (MovimientoY <= -1500.0f)
	{
		VelocidadYEspia *= -1.1;
	}
	else if (MovimientoY >= 1500.0f)
	{
		VelocidadYEspia *= -1;
	}
	//  Establecemos la nueva posicion del actor
	SetActorLocation(FVector(PosicionActual.X + NuevaX, MovimientoY, PosicionActual.Z));
}

int32 ANaveAcuatica_Espia::RecibirDanio(float dano)
{
	resistencia -= dano;
	if (resistencia <= 0)
	{
		energia -= dano;    // Reducir la energía según la cantidad de daño recibido		}
	}

	if (energia <= 0)        // Verificar si la energía llega a cero o menos
	{
		Destroy();
	}
	return 0; // si la energia es menor o igual a 0 se destruye la nave
}
