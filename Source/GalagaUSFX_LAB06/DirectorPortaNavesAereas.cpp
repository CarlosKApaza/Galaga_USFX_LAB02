// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorPortaNavesAereas.h"
#include "PortaNavesAereas.h"


// Sets default values
ADirectorPortaNavesAereas::ADirectorPortaNavesAereas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorPortaNavesAereas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorPortaNavesAereas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Nivel 1
void ADirectorPortaNavesAereas::ConstruirPortaNaveAerea()
{
	if (BuilderPortaNavesAereas)
	{
		BuilderPortaNavesAereas->ConstruirHangar();
		BuilderPortaNavesAereas->ConstruirCentrodeMuniciones();
		BuilderPortaNavesAereas->ConstruirEscudos();
		BuilderPortaNavesAereas->ConstruirMotor();
	}
}

void ADirectorPortaNavesAereas::SetBuilderPortaNavesAereas(AActor* Builder)
{
	BuilderPortaNavesAereas = Cast<IBuilderPortaNavesAereas>(Builder);
}

APortaNavesAereas* ADirectorPortaNavesAereas::GetPortaNaveAerea()
{
	return BuilderPortaNavesAereas->GetPortaNaveAerea();
}

