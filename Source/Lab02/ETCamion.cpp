// Fill out your copyright notice in the Description page of Project Settings.

#include "ETCamion.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AETCamion::AETCamion()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}

	Amplitud = 300.0f;
	Frecuencia = 1.5f;
	MallaEnemigo->SetRelativeScale3D(FVector(2.5f, 1.0f, 1.2f));
}

