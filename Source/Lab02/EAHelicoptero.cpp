// Fill out your copyright notice in the Description page of Project Settings.

#include "EAHelicoptero.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEAHelicoptero::AEAHelicoptero()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}

	// Comportamiento: Balanceo constante y estable
	Amplitud = 300.0f;
	Frecuencia = 2.0f;
}