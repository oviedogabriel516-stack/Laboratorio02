// Fill out your copyright notice in the Description page of Project Settings.

#include "ETSoldado.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AETSoldado::AETSoldado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}

	// Comportamiento: Movimiento rápido y corto
	Amplitud = 100.0f;
	Frecuencia = 4.0f;
	MallaEnemigo->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
}