// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FPS_TestingGroundsGameMode.h"
#include "FPS_TestingGroundsHUD.h"
#include "FPS_TestingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_TestingGroundsGameMode::AFPS_TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_TestingGroundsHUD::StaticClass();
}
