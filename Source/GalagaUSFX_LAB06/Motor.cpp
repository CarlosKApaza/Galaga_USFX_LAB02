// Fill out your copyright notice in the Description page of Project Settings.


#include "Motor.h"

// Sets default values
AMotor::AMotor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaS(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshMotor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshMotor"));
	MeshMotor->SetupAttachment(RootComponent);
	MeshMotor->SetStaticMesh(mallaS.Object);
	SetActorScale3D(FVector(5.0f, 5.0f, 5.0f));
	
	RootComponent = MeshMotor;
}

// Called when the game starts or when spawned
void AMotor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMotor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

