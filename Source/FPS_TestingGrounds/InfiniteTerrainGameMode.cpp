// Fill out your copyright notice in the Description page of Project Settings.


#include "InfiniteTerrainGameMode.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "EngineUtils.h"

void AInfiniteTerrainGameMode::PopulateBoundsVolumePool()
{
	/*Pool Design Pattern*/
	TActorIterator<ANavMeshBoundsVolume> VolumeIterator = TActorIterator<ANavMeshBoundsVolume>(GetWorld());
	while (VolumeIterator)//element found?
	{
		AddToPool(*VolumeIterator);
		++VolumeIterator;//Advance the iterator. NB: don't use ActorIterator++
	}
}

void AInfiniteTerrainGameMode::AddToPool(ANavMeshBoundsVolume* VolumeToAdd)
{
	UE_LOG(LogTemp, Warning, TEXT("Found actor with name: %s"), *VolumeToAdd->GetName());
	
}