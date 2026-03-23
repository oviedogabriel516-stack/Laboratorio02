// Fill out your copyright notice in the Description page of Project Settings.

#include "ETTanque.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AETTanque::AETTanque()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}

	// Comportamiento: Lento y pesado
	Amplitud = 500.0f;
	Frecuencia = 0.8f;
	MallaEnemigo->SetRelativeScale3D(FVector(2.0f, 1.5f, 1.0f));
}
