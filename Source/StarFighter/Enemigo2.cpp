// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo2.h"

// Sets default values
AEnemigo2::AEnemigo2()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigo2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemigo2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

