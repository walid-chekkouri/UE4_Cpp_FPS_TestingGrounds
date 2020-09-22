// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPS_TestingGroundsGameMode.h"
#include "InfiniteTerrainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPS_TESTINGGROUNDS_API AInfiniteTerrainGameMode : public AFPS_TestingGroundsGameMode
{
	GENERATED_BODY()
	


public:

	UFUNCTION(BlueprintCallable, Category = "Bounds Pool")
		void PopulateBoundsVolumePool();

private:

	void AddToPool(class ANavMeshBoundsVolume* VolumeToAdd);

};
