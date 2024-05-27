// Fill out your copyright notice in the Description page of Project Settings.


#include "Hangar.h"

// Sets default values
AHangar::AHangar()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> meshHangar(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	MeshHangar = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshHangar"));
	MeshHangar->SetupAttachment(RootComponent);
	MeshHangar->SetStaticMesh(meshHangar.Object);

	SetActorScale3D(FVector(5.0f, 5.0f, 5.0f));
}

// Called when the game starts or when spawned
void AHangar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHangar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

