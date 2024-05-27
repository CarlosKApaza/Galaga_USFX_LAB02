// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaEnergia.h"
// pawn
#include "GalagaUSFX_LAB06Pawn.h"

ACapsulaEnergia::ACapsulaEnergia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> mallaC(TEXT("StaticMesh'/Game/TwinStick/Meshes/CapsulaEnergia.CapsulaEnergia'"));
	mallaCapsula->SetStaticMesh(mallaC.Object);
	mallaCapsula->BodyInstance.SetCollisionProfileName("Capsule"); //StaticMesh'/Game/TwinStick/Meshes/EnergyCapsule.EnergyCapsule'
	mallaCapsula->OnComponentHit.AddDynamic(this, &ACapsulaEnergia::OnHit);

	InitialLifeSpan = 6.0f;
}

void ACapsulaEnergia::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalagaUSFX_LAB06Pawn* Jugador = Cast<AGalagaUSFX_LAB06Pawn>(OtherActor);
	if (Jugador)
	{
		Jugador->Energia();
		Jugador->SetPlayerInputEnabled(true);
		FString Message = FString::Printf(TEXT("Energia consumida %d "));
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, Message);

		Destroy();//Destruir la capsula
	}
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation()); //
	}
}
