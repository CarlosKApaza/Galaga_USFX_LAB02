// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula.h"
#include "Kismet/GameplayStatics.h"
#include "GalagaUSFX_LAB06Pawn.h"

// Sets default values
ACapsula::ACapsula()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaCapsula = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaCapsula"));
	mallaCapsula->SetStaticMesh(CapsulaMesh.Object);

	RootComponent = mallaCapsula;
	InitialLifeSpan = 5.0f;
}

// Called when the game starts or when spawned
void ACapsula::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

