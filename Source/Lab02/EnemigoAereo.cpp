// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemigoAereo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoAereo::AEnemigoAereo()
{
	// Buscamos la malla de Cono
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ConeAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));

	if (ConeAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(ConeAsset.Object);
	}

	// Opcional: Si quieres que el aéreo se mueva más rápido que el normal
	Frecuencia = 4.0f;
	Amplitud = 500.0f;
}

