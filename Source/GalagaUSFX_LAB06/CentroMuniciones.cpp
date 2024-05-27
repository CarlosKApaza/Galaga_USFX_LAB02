// Fill out your copyright notice in the Description page of Project Settings.


#include "CentroMuniciones.h"

// Sets default values
ACentroMuniciones::ACentroMuniciones()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaS(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'"));
	MeshCentroMuniciones = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshCentroMuniciones"));
	MeshCentroMuniciones->SetupAttachment(RootComponent);
	MeshCentroMuniciones->SetStaticMesh(mallaS.Object);
	RootComponent = MeshCentroMuniciones;
}

// Called when the game starts or when spawned
void ACentroMuniciones::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACentroMuniciones::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

