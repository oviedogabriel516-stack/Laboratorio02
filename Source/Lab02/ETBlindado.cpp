// Fill out your copyright notice in the Description page of Project Settings.

#include "ETBlindado.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AETBlindado::AETBlindado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}

	// Comportamiento: Patrulla constante
	Amplitud = 200.0f;
	Frecuencia = 2.0f;
	MallaEnemigo->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
}

