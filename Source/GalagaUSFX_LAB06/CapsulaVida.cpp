// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaVida.h"

ACapsulaVida::ACapsulaVida()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaVidaMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/CapsulaVida.CapsulaVida'"));
	mallaCapsula->SetStaticMesh(CapsulaVidaMesh.Object);
	mallaCapsula->BodyInstance.SetCollisionProfileName("Capsula");
	mallaCapsula->OnComponentHit.AddDynamic(this, &ACapsulaVida::OnHit);
}

void ACapsulaVida::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//AGalagaUSFX_LAB06Pawn* Jugador= Cast<AGalagaUSFX_LAB06Pawn>(OtherActor);
	//if (Jugador)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Capsula consumida"));

	//	Jugador->VidaExtra();
	//	Destroy();
	//	return;
	//}
	//if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	//{
	//	OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation()); //
	//}
}
