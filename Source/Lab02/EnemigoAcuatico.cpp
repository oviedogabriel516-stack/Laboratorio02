// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemigoAcuatico.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemigoAcuatico::AEnemigoAcuatico()
{
	// Buscamos la forma de Cilindro
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	if (CylinderAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(CylinderAsset.Object);
	}

	// Ajustes de movimiento acuático
	Amplitud = 400.0f;
	Frecuencia = 1.0f;
}

