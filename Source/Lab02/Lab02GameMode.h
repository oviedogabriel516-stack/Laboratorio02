// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Lab02GameMode.generated.h"

class AEnemigo; 

UCLASS()
class LAB02_API ALab02GameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	TArray<AEnemigo*> Cuadrilla1;

	UPROPERTY()
	TArray<AEnemigo*> Cuadrilla2;

	FTimerHandle TimerDesaparicion;

	void SpawnerCuadrilla1();
	void SpawnerCuadrilla2();
	void EjecutarDesaparicion();
};

