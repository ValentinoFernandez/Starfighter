// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo3.h"

// Sets default values
AEnemigo3::AEnemigo3()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigo3::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemigo3::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

