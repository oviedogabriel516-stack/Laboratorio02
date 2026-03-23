// Fill out your copyright notice in the Description page of Project Settings.

#include "EAMotoAcuatica.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEAMotoAcuatica::AEAMotoAcuatica()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}

	Amplitud = 150.0f;
	Frecuencia = 4.5f;
	MallaEnemigo->SetRelativeScale3D(FVector(0.6f, 0.4f, 0.4f));
}
