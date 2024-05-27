// Fill out your copyright notice in the Description page of Project Settings.


#include "Escudo.h"

// Sets default values
AEscudo::AEscudo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaS(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	MeshEscudo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPrope"));
	MeshEscudo->SetupAttachment(RootComponent);
	MeshEscudo->SetStaticMesh(mallaS.Object);
	RootComponent = MeshEscudo;
}

// Called when the game starts or when spawned
void AEscudo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscudo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

