// Fill out your copyright notice in the Description page of Project Settings.

#include "EADron.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEADron::AEADron()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}

	Amplitud = 100.0f;
	Frecuencia = 5.0f;

	MallaEnemigo->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
}

