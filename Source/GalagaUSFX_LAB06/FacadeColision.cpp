// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeColision.h"

#include "NaveEnemiga.h"
#include "NaveAerea_Caza.h"
#include "NaveAerea_Transporte.h"	
#include "NaveAcuatica_Espia.h"
#include "NaveAcuatica_Exploracion.h"
#include "NaveTerrestre_Artilleria.h"
#include "NaveTerrestre_Transporte.h"

// Sets default values
AFacadeColision::AFacadeColision()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeColision::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFacadeColision::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacadeColision::DestruirNaves(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		// Verificar si la bala colisionó con una Nave Aérea Caza
		ANaveAerea_Caza* NaveAereaCaza = Cast<ANaveAerea_Caza>(OtherActor);
		if (NaveAereaCaza)
		{
			// Reducir la energía de la nave enemiga
			float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
			NaveAereaCaza->RecibirDanio(Cantidad);
			//TANavesEnemigasEliminadas.Add(NaveAereaCaza);

			//// Eliminar la bala
			//if (GetOwner() != NULL)
			//{
			//	GetOwner()->Destroy();
			//}

			//// Eliminar la nave enemiga directamente
			//NaveAereaCaza->Destroy(); // si descomento esto elimina la nave directamente
		}

		// Verificar si la bala colisionó con una Nave Aérea Transporte
		ANaveAerea_Transporte* NaveAereaTransporte = Cast<ANaveAerea_Transporte>(OtherActor);
		if (NaveAereaTransporte)
		{

			// Reducir la energía de la nave enemiga
			float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
			NaveAereaTransporte->RecibirDanio(Cantidad);
			//TANavesEnemigasEliminadas.Add(NaveAereaTransporte);


			//// Eliminar la bala
			//if (GetOwner() != NULL)
			//{
			//	GetOwner()->Destroy();
			//}
			//// Eliminar la nave enemiga directamente
			//NaveAereaTransporte->Destroy(); // si descomento esto elimina la nave directamente
		}

		ANaveAcuatica_Espia* NaveAcuaticaEspia = Cast<ANaveAcuatica_Espia>(OtherActor);
		if (NaveAcuaticaEspia)
		{
			// Reducir la energía de la nave enemiga
			float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
			NaveAcuaticaEspia->RecibirDanio(Cantidad);

			// Eliminar la bala
			/*if (GetOwner() != NULL)
			{
				GetOwner()->Destroy();
			}*/
			// Eliminar la nave enemiga directamente
			//NaveAcuaticaEspia->Destroy(); // si descomento esto elimina la nave directamente
		}

		ANaveAcuatica_Exploracion* NaveAcuaticaExploracion = Cast<ANaveAcuatica_Exploracion>(OtherActor);
		if (NaveAcuaticaExploracion)
		{
			// Reducir la energía de la nave enemiga
			float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
			NaveAcuaticaExploracion->RecibirDanio(Cantidad);

			// Eliminar la bala
			/*if (GetOwner() != NULL)
			{
			GetOwner()->Destroy();
			}*/

			// Eliminar la nave enemiga directamente
			//NaveAcuaticaExploracion->Destroy(); // si descomento esto elimina la nave directamente
		}

		ANaveTerrestre_Artilleria* NaveTerrestreArtilleria = Cast<ANaveTerrestre_Artilleria>(OtherActor);
		if (NaveTerrestreArtilleria)
		{
			// Reducir la energía de la nave enemiga
			float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
			NaveTerrestreArtilleria->RecibirDanio(Cantidad);

			// Eliminar la bala
			/*if (GetOwner() != NULL)
						{
			GetOwner()->Destroy();
			}*/

			// Eliminar la nave enemiga directamente
			//NaveTerrestreArtilleria->Destroy(); // si descomento esto elimina la nave directamente
		}

		ANaveTerrestre_Transporte* NaveTerrestreTransporte = Cast<ANaveTerrestre_Transporte>(OtherActor);
		if (NaveTerrestreTransporte)
		{
			// Reducir la energía de la nave enemiga
			float const Cantidad = 10.0f; // Cantidad de daño que inflige la bala
			NaveTerrestreTransporte->RecibirDanio(Cantidad);

			// Eliminar la bala
			/*if (GetOwner() != NULL)
						{
			GetOwner()->Destroy();
			}*/

			// Eliminar la nave enemiga directamente
			//NaveTerrestreTransporte->Destroy(); // si descomento esto elimina la nave directamente
		}
	}
}

