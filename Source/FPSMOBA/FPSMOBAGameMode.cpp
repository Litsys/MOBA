// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "FPSMOBA.h"
#include "FPSMOBAGameMode.h"
#include "FPSMOBAHUD.h"
#include "FPSMOBACharacter.h"

AFPSMOBAGameMode::AFPSMOBAGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSMOBAHUD::StaticClass();
}
