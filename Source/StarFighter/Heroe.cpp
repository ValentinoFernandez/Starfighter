// Fill out your copyright notice in the Description page of Project Settings.


#include "Heroe.h"

// Sets default values
AHeroe::AHeroe()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHeroe::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHeroe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHeroe::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

