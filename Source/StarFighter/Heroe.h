// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "Poder.h"
#include "Escudo.h"
#include "Vidaextra.h"


class Heroe 
{

public:

	float Danoestructutra; 
	APoder PoderHeroe; 
	AEscudo EscudoHeroe;
	AVidaextra VidaextraHeroe;

	// Sets default values for this pawn's properties

protected:

	int Numerodevidas;
	float Resistencia;
	float Velocidad;

	Heroe();
	control_Heroe() {}; 
	// Called when the game starts or when spawned
};
