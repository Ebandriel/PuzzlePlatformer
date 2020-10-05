// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMER_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	AMovingPlatform();
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	float Speed = 100.0f;
	UPROPERTY(EditAnywhere, meta = (MakeEditWidget=true))
	FVector TargetLocation;

	void AddActiveTrigger();
	void RemoveActiveTrigger();

private:
	FVector GlobalTargetLocation;
	FVector GlobalStartLocation;

	UPROPERTY(EditAnywhere)
	int ActiveTriggers = 1;



};
