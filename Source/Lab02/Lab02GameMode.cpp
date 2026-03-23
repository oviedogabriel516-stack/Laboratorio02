// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab02GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Inclusiones de todas tus clases
#include "EAAvion.h"
#include "EAHelicoptero.h"
#include "EADron.h"
#include "EABarco.h"
#include "EALancha.h"
#include "EAMotoAcuatica.h"
#include "ETSoldado.h"
#include "ETTanque.h"
#include "ETCamion.h"
#include "ETBlindado.h"

void ALab02GameMode::BeginPlay()
{
	Super::BeginPlay();

	// Iniciamos con la primera cuadrilla
	SpawnerCuadrilla1();

	// Configuramos el TimerHandle para que desaparezcan en 10 segundos
	GetWorldTimerManager().SetTimer(TimerDesaparicion, this, &ALab02GameMode::EjecutarDesaparicion, 10.0f, false);
}

void ALab02GameMode::SpawnerCuadrilla1()
{
	UWorld* World = GetWorld();
	if (!World) return;

	APawn* Player = UGameplayStatics::GetPlayerPawn(this, 0);
	FVector Loc = Player ? Player->GetActorLocation() : FVector::ZeroVector;
	FVector Fwd = Player ? Player->GetActorForwardVector() : FVector(1, 0, 0);

	// Posición base delante del jugador
	FVector BasePos = Loc + (Fwd * 500.0f);

	// Cuadrilla 1: Mezcla de tipos (Aéreos y Terrestres principales)
	Cuadrilla1.Add(World->SpawnActor<AEAAvion>(AEAAvion::StaticClass(), BasePos + FVector(0, -200, 800), FRotator::ZeroRotator));
	Cuadrilla1.Add(World->SpawnActor<AEAHelicoptero>(AEAHelicoptero::StaticClass(), BasePos + FVector(0, 200, 700), FRotator::ZeroRotator));
	Cuadrilla1.Add(World->SpawnActor<AEADron>(AEADron::StaticClass(), BasePos + FVector(0, 0, 900), FRotator::ZeroRotator));
	Cuadrilla1.Add(World->SpawnActor<AEABarco>(AEABarco::StaticClass(), BasePos + FVector(0, -300, 0), FRotator::ZeroRotator));
	Cuadrilla1.Add(World->SpawnActor<AETSoldado>(AETSoldado::StaticClass(), BasePos + FVector(0, 100, 50), FRotator::ZeroRotator));
	Cuadrilla1.Add(World->SpawnActor<AETTanque>(AETTanque::StaticClass(), BasePos + FVector(0, 300, 50), FRotator::ZeroRotator));
}

void ALab02GameMode::EjecutarDesaparicion()
{
	// Recorremos la Cuadrilla 1 y destruimos a todos sus miembros
	for (AEnemigo* Enemigo : Cuadrilla1)
	{
		if (Enemigo)
		{
			Enemigo->Destroy();
		}
	}
	Cuadrilla1.Empty(); // Limpiamos el arreglo

	// Una vez que todos desaparecen, spawneamos la Cuadrilla 2
	SpawnerCuadrilla2();
}

void ALab02GameMode::SpawnerCuadrilla2()
{
	UWorld* World = GetWorld();
	if (!World) return;

	APawn* Player = UGameplayStatics::GetPlayerPawn(this, 0);
	FVector Loc = Player ? Player->GetActorLocation() : FVector::ZeroVector;
	FVector Fwd = Player ? Player->GetActorForwardVector() : FVector(1, 0, 0);

	FVector BasePos = Loc + (Fwd * 600.0f);

	// Cuadrilla 2: El resto de clases (Acuáticos y Terrestres restantes)
	Cuadrilla2.Add(World->SpawnActor<AEALancha>(AEALancha::StaticClass(), BasePos + FVector(0, -150, -50), FRotator::ZeroRotator));
	Cuadrilla2.Add(World->SpawnActor<AEAMotoAcuatica>(AEAMotoAcuatica::StaticClass(), BasePos + FVector(0, 150, -50), FRotator::ZeroRotator));
	Cuadrilla2.Add(World->SpawnActor<AETCamion>(AETCamion::StaticClass(), BasePos + FVector(0, -400, 50), FRotator::ZeroRotator));
	Cuadrilla2.Add(World->SpawnActor<AETBlindado>(AETBlindado::StaticClass(), BasePos + FVector(0, 400, 50), FRotator::ZeroRotator));
}
