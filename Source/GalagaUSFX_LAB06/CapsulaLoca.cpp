// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaLoca.h"
#include "GalagaUSFX_LAB06Pawn.h"

ACapsulaLoca::ACapsulaLoca()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/CapsulaLoca.CapsulaLoca'"));
	mallaCapsula->SetStaticMesh(CapsulaMesh.Object);
	mallaCapsula->BodyInstance.SetCollisionProfileName("Capsula");
	mallaCapsula->OnComponentHit.AddDynamic(this, &ACapsulaLoca::OnHit);

	ProyectileMovimiento = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Capsula"));
	ProyectileMovimiento->UpdatedComponent = mallaCapsula;
	ProyectileMovimiento->InitialSpeed = 3000.0f;
	ProyectileMovimiento->MaxSpeed = 3000.0f;
	ProyectileMovimiento->bRotationFollowsVelocity = true;//
	ProyectileMovimiento->bShouldBounce = false;//
	ProyectileMovimiento->ProjectileGravityScale = 0.0f; // No gravity
	InitialLifeSpan = 6.0f;

}


void ACapsulaLoca::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AGalagaUSFX_LAB06Pawn* Jugador = Cast<AGalagaUSFX_LAB06Pawn>(OtherActor);
	if(Jugador)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Capsula consumida"));

		Jugador->MovimientoLocoInicio();
		Jugador->SetPlayerInputEnabled(true);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Sin Movimiento"));
		Destroy();
		return;
	}
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation()); //
	}
}

void ACapsulaLoca::DispararCapsula()
{
	ProyectileMovimiento->Velocity = GetActorForwardVector() * ProyectileMovimiento->InitialSpeed;
}

void ACapsulaLoca::DispararDireccion(const FVector& FireDirection)
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 300.0f;
	SetActorLocation(NewLocation);
}
