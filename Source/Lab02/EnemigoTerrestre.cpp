// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemigoTerrestre.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoTerrestre::AEnemigoTerrestre()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	if (SphereAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(SphereAsset.Object);
	}

	Amplitud = 250.0f;
	Frecuencia = 1.5f;
}

