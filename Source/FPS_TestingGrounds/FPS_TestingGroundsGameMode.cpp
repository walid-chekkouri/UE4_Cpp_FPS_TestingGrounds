// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FPS_TestingGroundsGameMode.h"
#include "FPS_TestingGroundsHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_TestingGroundsGameMode::AFPS_TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Dynamic/Character/Behavior/BP_Character"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_TestingGroundsHUD::StaticClass();
}
