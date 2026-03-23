// Fill out your copyright notice in the Description page of Project Settings.

#include "EALancha.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEALancha::AEALancha()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}

	// Comportamiento: Velocidad moderada
	Amplitud = 300.0f;
	Frecuencia = 2.0f;
	MallaEnemigo->SetRelativeScale3D(FVector(1.5f, 0.8f, 0.8f));
}

