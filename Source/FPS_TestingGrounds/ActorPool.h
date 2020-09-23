// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorPool.generated.h"
/*
Pool Design Pattern
*/

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPS_TESTINGGROUNDS_API UActorPool : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorPool();


	AActor* Checkout();
	void Return(AActor* ActorToReturn);

	void Add(AActor* ActorToAdd);

};
