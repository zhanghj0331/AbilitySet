// Copyright Epic Games, Inc. All Rights Reserved.

#include "AbilitySetGameMode.h"
#include "AbilitySetCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAbilitySetGameMode::AAbilitySetGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
