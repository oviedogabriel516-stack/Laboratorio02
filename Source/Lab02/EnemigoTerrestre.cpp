// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemigoTerrestre.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoTerrestre::AEnemigoTerrestre()
{
	// Buscamos la forma de Esfera (Círculo en 3D)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	if (SphereAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(SphereAsset.Object);
	}

	// Ajustes de movimiento terrestre
	Amplitud = 250.0f;
	Frecuencia = 1.5f;
}

