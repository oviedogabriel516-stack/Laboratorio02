// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemigo::AEnemigo()
{
	PrimaryActorTick.bCanEverTick = true;

	MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = MallaEnemigo;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

	if (MallaAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MallaAsset.Object);
	}

	Amplitud = 300.0f;
	Frecuencia = 2.0f;
}

void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NuevaPosicion = GetActorLocation();
	float Desplazamiento = FMath::Sin(GetWorld()->GetTimeSeconds() * Frecuencia) * Amplitud;

	NuevaPosicion.Y = PosicionInicial.Y + Desplazamiento;
	SetActorLocation(NuevaPosicion);
}


