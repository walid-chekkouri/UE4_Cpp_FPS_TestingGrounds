// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolRoute.generated.h"

/**
* A Route card to help AI choose their next waypoint
*/

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_TESTINGGROUNDS_API UPatrolRoute : public UActorComponent
{
	GENERATED_BODY()

public:	
	TArray<AActor*> GetPatrolPoints() const;

private:

	UPROPERTY(EditInstanceOnly, Category = "PatrolRoute")
	TArray<AActor*> PatrolPoints;
		
};
