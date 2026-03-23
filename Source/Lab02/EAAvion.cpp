// Fill out your copyright notice in the Description page of Project Settings.

#include "EAAvion.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEAAvion::AEAAvion()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}

	// Comportamiento: Muy rápido (Frecuencia alta)
	Amplitud = 400.0f;
	Frecuencia = 4.0f;
}
