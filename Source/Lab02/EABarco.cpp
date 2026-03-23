// Fill out your copyright notice in the Description page of Project Settings.

#include "EABarco.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEABarco::AEABarco()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}

	// Comportamiento: Muy lento pero con gran recorrido
	Amplitud = 600.0f;
	Frecuencia = 0.5f;
	MallaEnemigo->SetRelativeScale3D(FVector(4.0f, 1.5f, 0.8f)); // Forma alargada y baja
}

