// Copyright Epic Games, Inc. All Rights Reserved.

#include "cleanGameMode.h"
#include "cleanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AcleanGameMode::AcleanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
