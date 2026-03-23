// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class LAB02_API AEnemigo : public AActor
{
	GENERATED_BODY()

public:
	AEnemigo();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaEnemigo;

	float Amplitud = 300.0f; 
	float Frecuencia = 2.0f;
	FVector PosicionInicial;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
