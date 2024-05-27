// Copyright Epic Games, Inc. All Rights Reserved.

#include "GalagaUSFX_LAB06GameMode.h"
#include "GalagaUSFX_LAB06Pawn.h"

#include "CreadorNaves.h"
#include "CreadorNavesEnemigas.h"
#include "CreadorNavesAereas.h"
#include "CreadorNavesTerrestres.h"
#include "CreadorNavesAcuaticas.h"

#include "CreadorCapsulas.h"

#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaBombardero.h"
#include "NaveEnemigaTransporte.h"


#include "NaveAerea_Caza.h"
#include "NaveAerea_Transporte.h"
#include "NaveAcuatica_Exploracion.h"
#include "NaveAcuatica_Espia.h"


#include "BuilderPortaNavesAereasNiv1.h"
#include "DirectorPortaNavesAereas.h"
#include "PortaNavesAereas.h"

AGalagaUSFX_LAB06GameMode::AGalagaUSFX_LAB06GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalagaUSFX_LAB06Pawn::StaticClass();

}

void AGalagaUSFX_LAB06GameMode::BeginPlay()
{
	Super::BeginPlay();

	//Puntaje = 0; // Inicializamos el puntaje del jugador

	//Score(); // Mostrar el puntaje al comenzar el juego

	//// LLamando a la fabrica de naves enemigas
	//ACreadorNaves* CreadorNaves = GetWorld()->SpawnActor<ACreadorNavesEnemigas>(ACreadorNavesEnemigas::StaticClass());
	
	ACreadorNaves* CreadorNavesAereas = GetWorld()->SpawnActor<ACreadorNavesAereas>(ACreadorNavesAereas::StaticClass());
	
	ACreadorNaves* CreadorNavesTerrestres = GetWorld()->SpawnActor<ACreadorNavesTerrestres>(ACreadorNavesTerrestres::StaticClass());
	
	ACreadorNaves* CreadorNavesAcuaticas = GetWorld()->SpawnActor<ACreadorNavesAcuaticas>(ACreadorNavesAcuaticas::StaticClass());
	
	ACreadorCapsulas* CreadorCapsulas = GetWorld()->SpawnActor<ACreadorCapsulas>(ACreadorCapsulas::StaticClass());

	UWorld * World = GetWorld();
	if (World != nullptr) 
	{
		// DESDE ACA SPAWNEAMOS LAS NAVES DE LAS FABRICAS DE NAVES AEREAS, TERRESTRES Y ACUATICAS
		// Creamos una nueva Posicion para las naves tipo Aereas
		FVector	PosicionNavesAereas = FVector(-450.0f, -200.0f, 200.0f);
		FRotator RotacionNavesAereas = FRotator(0.0f, 180.0f, 0.0f);  // Rotación en Z a 180 grados

		// Creamos 7 naves de la clase NaveAerea_Caza
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves aereas para crear una nave de la clase NaveAerea_Caza
			ANaveEnemiga* NaveEnemiga = CreadorNavesAereas->OrdenarNave("NaveAerea_Caza", PosicionNavesAereas, RotacionNavesAereas);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMClavesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves aerea caza
			TMNavesEnemigas.Add(NaveEnemiga, PosicionNavesAereas); // Agregamos la nave al TMap y la Posicion de la nave aerea caza
			TANavesEnemigas.Add(NaveEnemiga); // Agregamos la nave a la lista de naves enemigas
			PosicionNavesAereas.Y += 200.0f; // Sirve para que las naves esten separadas en el eje X
		}
		// Actualizamos la posicion de las naves aereas caza para trabajar con las naves de la clase NaveAerea_Transporte
		PosicionNavesAereas.X = PosicionNavesAereas.X = -150.0f; // Actualizamos la posicion en el eje X
		PosicionNavesAereas.Y = PosicionNavesAereas.Y = -200.0f;  // Actualizamos la posicion en el eje Y

		// Creamos 7 naves de la clase NaveAerea_Transporte
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves aereas para crear una nave de la clase NaveAerea_Transporte
			ANaveEnemiga* NaveEnemiga = CreadorNavesAereas->OrdenarNave("NaveAerea_Transporte", PosicionNavesAereas, RotacionNavesAereas);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMClavesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves aerea transporte
			TMNavesEnemigas.Add(NaveEnemiga, PosicionNavesAereas); // Agregamos la nave al TMap y la Posicion de la nave aerea transporte
			TANavesEnemigas.Add(NaveEnemiga); // Agregamos la nave a la lista de naves enemigas
			PosicionNavesAereas.Y += 200.0f; // Sirve para que las naves esten separadas en el eje X
		}


		// Definiendo nuevas posiciones de las Naves Terrestres
		FVector	PosicionNavesTerrestres = FVector(300.0f, -650.0f, 200.0f); // Posicion inicial de las Naves Terrestres
		FRotator RotacionNavesTerrestre = FRotator(0.0f, 180.0f, 0.0f);
		// Creamos 7 naves de la clase NaveTerrestre_Transporte
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves terrestres para crear una nave de la clase NaveTerrestre_Transporte
			ANaveEnemiga* NaveEnemiga = CreadorNavesTerrestres->OrdenarNave("NaveTerrestre_Transporte", PosicionNavesTerrestres, RotacionNavesTerrestre);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMClavesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves terrestre transporte
			//TMANavesEnemigas.Add(NaveEnemiga, PosicionNavesTerrestres); // Agregamos la nave al TMap y la Posicion de la nave terrestre transporte
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNavesTerrestres.Y += 250.0f; // sirve para que las naves esten separadas en el eje Y
		}

		// Actualizamos la posicion de las Naveterrestres_Transporte para trabajar con las naves de la clase NaveTerrestre_Artilleria
		PosicionNavesTerrestres.X = PosicionNavesTerrestres.X = 500.0f; // actualizo la posicion en la posicion X
		PosicionNavesTerrestres.Y = PosicionNavesTerrestres.Y = -650.0f; // actualizo la posicion en la posicion Y

		// Creamos 7 naves de la clase NaveTerrestre_Artilleria
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves terrestres para crear una nave de la clase NaveTerrestre_Artilleria
			ANaveEnemiga* NaveEnemiga = CreadorNavesTerrestres->OrdenarNave("NaveTerrestre_Artilleria", PosicionNavesTerrestres, RotacionNavesTerrestre);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMClavesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves terrestre artilleria
			//TMANavesEnemigas.Add(NaveEnemiga, PosicionNavesTerrestres); // Agregamos la nave al TMap y la Posicion de la nave terrestre artilleria
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNavesTerrestres.Y += 250.0f; // sirve para que las naves esten separadas en el eje Y
		}

		// Definiendo nuevas posiciones de las Naves Acuaticas
		FVector	PosicionNavesAcuaticas = FVector(900.0f, -700.0f, 180.0f); // Posicion inicial de las Naves Acuaticas
		FRotator RotacionNavesAcuaticas = FRotator(0.0f, 180.0f, 0.0f);

		// Creamos 7 naves de la clase NaveAcuatica_Exploracion
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves acuaticas para crear una nave de la clase NaveAcuatica_Exploracion
			ANaveEnemiga* NaveEnemiga = CreadorNavesAcuaticas->OrdenarNave("NaveAcuatica_Exploracion", PosicionNavesAcuaticas, RotacionNavesAcuaticas);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMClavesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves acuatica exploracion
			//TMANavesEnemigas.Add(NaveEnemiga, PosicionNavesAcuaticas); // Agregamos la nave al TMap y la Posicion de la nave acuatica exploracion
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNavesAcuaticas.Y += 250.0f; // sirve para que las naves esten separadas en el eje X
		}

		// Actualizamos la posicion de las Naves Acuaticas_Exploracion para trabajar con las naves de la clase NaveAcuatica_Espia
		PosicionNavesAcuaticas.X = PosicionNavesAcuaticas.X = 1200.0f; // actualizo la posicion en la posicion X
		PosicionNavesAcuaticas.Y = PosicionNavesAcuaticas.Y = -700.0f; // actualizo la posicion en la posicion Y

		// Creamos 7 naves de la clase NaveAcuatica_Espia
		for (int i = 0; i < 7; i++)
		{
			// Llamamos a la fabrica de naves acuaticas para crear una nave de la clase NaveAcuatica_Espia
			ANaveEnemiga* NaveEnemiga = CreadorNavesAcuaticas->OrdenarNave("NaveAcuatica_Espia", PosicionNavesAcuaticas, RotacionNavesAcuaticas);
			NaveEnemiga->idClaveNave = ClaveNaves++; // Asignar la clave y luego incrementar
			TMClavesNavesEnemigas.Add(NaveEnemiga, ClaveNaves); // Agregamos la nave al TMap y la Clave de la naves acuatica espia
			//TMANavesEnemigas.Add(NaveEnemiga, PosicionNavesAcuaticas); // Agregamos la nave al TMap y la Posicion de la nave acuatica espia
			TANavesEnemigas.Add(NaveEnemiga); // agregamos la nave a la lista de naves enemigas
			PosicionNavesAcuaticas.Y += 250.0f; // sirve para que las naves esten separadas en el eje X
		}

		FVector SpawnLocation = FVector(FMath::RandRange(-1000.0f, 120.0f), FMath::RandRange(-1000.0f, 120.0f), 200.0f);/*
		FVector SpawnLocation3 = FVector(FMath::RandRange(-1000.0f, 120.0f), FMath::RandRange(-1000.0f, 120.0f), 200.0f);*/
		FRotator SpawnRotation = FRotator(0.0f, 0.0f, .0f);
		for (int i = 0; i < 5; i++)
		{
			ACapsula* Capsula = CreadorCapsulas->OrdenarCapsula("CapsulaLoca", SpawnLocation, SpawnRotation);
			SpawnLocation.Y += 250.0f;
		}
		FVector SpawnLocation2 = FVector(FMath::RandRange(-1000.0f, 120.0f), FMath::RandRange(-1000.0f, 120.0f), 200.0f);
		for (int i = 0; i < 3; i++)
		{
			ACapsula* Capsula = CreadorCapsulas->OrdenarCapsula("CapsulaEnergia", SpawnLocation2, SpawnRotation);
			SpawnLocation2.Y += 250.0f;
		}


		//	IMPLEMENTACION DE PATRON BUILDER PARA CONSTRUIR EL PORTANAVES AEREAS

	//-----------------------------------------------------BUILDER----------------------------------------------------------------------------------//
	//UWorld* cWorld = GetWorld();
	//if (World != nullptr)//verificar si el mundo es diferente de nulo
	//{
		DirectorPortaNavesAereas = GetWorld()->SpawnActor<ADirectorPortaNavesAereas>(ADirectorPortaNavesAereas::StaticClass());

		switch (FMath::RandRange(1, 1))
		{
		case 1:
			BuilderPortaNavesAereasNiv1 = GetWorld()->SpawnActor<ABuilderPortaNavesAereasNiv1>(ABuilderPortaNavesAereasNiv1::StaticClass());//Spawning Concrete Builder
			DirectorPortaNavesAereas->SetBuilderPortaNavesAereas(BuilderPortaNavesAereasNiv1);//Setting Builder to Director 
			DirectorPortaNavesAereas->ConstruirPortaNaveAerea();//Constructing Ships 
			break;

			APortaNavesAereas* PortaNaveAerea = DirectorPortaNavesAereas->GetPortaNaveAerea();
			PortaNaveAerea->CaracteristicasPortaNaveAerea();
		}


		//-----------------------------------------------TEMPORIZADORES-------------------------------------------------------------------------//

							// Temporizador para crear enemigos aleatorios cada 5 segundos
		GetWorldTimerManager().SetTimer(FTHCrearEnemigosAleatorios, this, &AGalagaUSFX_LAB06GameMode::CrearEnemigos, 20.0f, true, 20.0f);

		// Implementamos un temporizador que controla la visualización de las claves de las naves
		GetWorldTimerManager().SetTimer(FTHMostrarClaves, this, &AGalagaUSFX_LAB06GameMode::MostrarClavesNaves, 1.0f, false);

		}
	}
	//}

void AGalagaUSFX_LAB06GameMode::MostrarClavesNaves()
{
	for (auto& ElementoActual : TMClavesNavesEnemigas) {
		ANaveEnemiga* naveEnemigaActual = ElementoActual.Key;
		int claveNave = ElementoActual.Value;

		// Convertir el entero a FString para concatenarlo
		FString claveNaveStr = FString::FromInt(claveNave);

		// Crear el mensaje concatenando las partes necesarias
		FString mensaje = "La nave " + naveEnemigaActual->GetNombreNave() + " tiene la clave: " + claveNaveStr;

		if (GEngine)
		{
			// Usar un valor entero en lugar de flotante para el alfa
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, mensaje);
		}
	}	
}
// funcion para ocultar las claves de las naves
void AGalagaUSFX_LAB06GameMode::OcultarClavesNaves()
{
	// Limpia los mensajes en pantalla
	GEngine->ClearOnScreenDebugMessages();
}


// Función para crear enemigos aleatoriamente
void AGalagaUSFX_LAB06GameMode::CrearEnemigosAleatoriamente(TArray<FString> TiposNaves, FVector PosicionInicial, FRotator RotacionNaves, float EspacioEntreNavesY, int CantidadNaves)
{
	// Obtener el mundo
	UWorld* const World = GetWorld();
	if (World == nullptr)
	{
		return;
	}

	// Posición Y inicial
	float PosicionY = PosicionInicial.Y;

	// Incremento en la posición Y para cada fila
	float IncrementoY = EspacioEntreNavesY * TiposNaves.Num();

	// Crear naves enemigas aleatoriamente
	for (int i = 0; i < CantidadNaves; i++)
	{
		// Obtener una posición aleatoria desde TMNavesEnemigas
		int32 RandomIndex = FMath::RandRange(0, TMNavesEnemigas.Num() - 1);
		auto It = TMNavesEnemigas.CreateIterator();
		for (int32 Index = 0; Index < RandomIndex; ++Index)
		{
			++It;
		}

		FVector PosicionNaveNueva = It->Value;
		FRotator RotacionNaveNueva = RotacionNaves; // Rotación en Z a 180 grados

		// Ajustar la posición Y basada en el índice de iteración
		PosicionNaveNueva.Y = PosicionY + (i * IncrementoY);

		// Obtener un tipo de nave enemiga aleatorio
		int32 RandomTypeIndex = FMath::RandRange(0, TiposNaves.Num() - 1);
		FString TipoNaveEnemiga = TiposNaves[RandomTypeIndex];

		// Llamamos a la fabrica de naves para crear una nave del tipo especificado
		ANaveEnemiga* NuevaNaveEnemiga = nullptr;
		if (TipoNaveEnemiga == "NaveAerea_Caza")
		{
			NuevaNaveEnemiga = World->SpawnActor<ANaveAerea_Caza>(ANaveAerea_Caza::StaticClass(), PosicionNaveNueva, RotacionNaveNueva);
		}
		else if (TipoNaveEnemiga == "NaveAerea_Transporte")
		{
			NuevaNaveEnemiga = World->SpawnActor<ANaveAerea_Transporte>(ANaveAerea_Transporte::StaticClass(), PosicionNaveNueva,RotacionNaveNueva);
		}
		// Agregar la nueva nave enemiga al mapa
		if (NuevaNaveEnemiga)
		{
			NuevaNaveEnemiga->idClaveNave = ClaveNaves++;
			TMClavesNavesEnemigas.Add(NuevaNaveEnemiga, NuevaNaveEnemiga->idClaveNave);
			TMNavesEnemigas.Add(NuevaNaveEnemiga, PosicionNaveNueva);
			TANavesEnemigas.Add(NuevaNaveEnemiga);
		}
	}
}



void AGalagaUSFX_LAB06GameMode::CrearEnemigos()
{
	// Lista de tipos de naves enemigas disponibles
	TArray<FString> TiposNaves;
	TiposNaves.Add("NaveAerea_Caza");
	TiposNaves.Add("NaveAerea_Transporte");

	// Espacio deseado entre las naves en el eje Y
	float EspacioEntreNavesY = 100.0f;

	// Posición inicial de las naves
	FVector PosicionInicial = FVector(0.0f, -650.0f, 200.0f);
	FRotator RotacionNaves = FRotator(0.0f, 180.0f, 0.0f);

	// Cantidad de naves a crear
	int CantidadNaves = 10;

	// Llamada a la función para crear las naves enemigas aleatoriamente
	CrearEnemigosAleatoriamente(TiposNaves, PosicionInicial, RotacionNaves, EspacioEntreNavesY, CantidadNaves);
}


//// Actualizamos el puntaje en la funcion RecibirDanio
//int32 ANaveAerea_Caza::RecibirDanio(float dano)
//{
//	// Restamos la energia de la nave
//	energia -= dano;
//
//	// Verificamos si la nave ha sido destruida
//	if (energia <= 0)
//	{
//		// Destruimos la nave
//		Destroy();
//
//		// Actualizamos el puntaje
//		Puntaje += recompensaNave;
//
//		return recompensaNave; // Si la nave ha sido destruida, retornamos la recompensa
//	}
//	return 0; // Si la nave no ha sido destruida, retornamos 0
//}


//void AGalagaUSFX_LAB06GameMode::Score()
//{
//	// Implementar la función para mostrar el score
//// Mostrar el puntaje en la pantalla
//	if (GEngine)
//	{
//		FString PuntajeStr = FString::FromInt(Puntaje);
//		FString Mensaje = "Puntaje: " + PuntajeStr;
//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, Mensaje);
//	}
//}
//
