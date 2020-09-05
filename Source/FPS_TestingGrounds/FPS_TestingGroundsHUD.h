// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPS_TestingGroundsHUD.generated.h"

UCLASS()
class AFPS_TestingGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFPS_TestingGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

