// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo4.h"

// Sets default values
AEnemigo4::AEnemigo4()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigo4::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo4::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemigo4::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

