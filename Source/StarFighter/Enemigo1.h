// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemigo1.generated.h"


class  Enemigo1 : public APawn
{
	GENERATED_BODY()

public:

	float Danoestructutra;
	float Patrondeataque;

	// Sets default values for this pawn's properties
	
protected:
	
	int Numerodevidas;
	float Resistencia;
	float Velocidad;

	AEnemigo1();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
