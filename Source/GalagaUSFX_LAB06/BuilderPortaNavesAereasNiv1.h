// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderPortaNavesAereas.h"
#include "BuilderPortaNavesAereasNiv1.generated.h"

UCLASS()
class GALAGAUSFX_LAB06_API ABuilderPortaNavesAereasNiv1 : public AActor, public IBuilderPortaNavesAereas
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilderPortaNavesAereasNiv1();
private:
	//The PNA Actor
	UPROPERTY(VisibleAnywhere, Category = "PortaNaveAerea")
	class APortaNavesAereas* PortaNaveAerea;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void ConstruirHangar() override;
	virtual void ConstruirCentrodeMuniciones() override;
	virtual void ConstruirEscudos() override;
	virtual void ConstruirMotor() override;

	virtual class APortaNavesAereas* GetPortaNaveAerea() override;
};
