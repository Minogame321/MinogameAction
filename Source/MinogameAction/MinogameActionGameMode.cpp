// Copyright Epic Games, Inc. All Rights Reserved.

#include "MinogameActionGameMode.h"
#include "MinogameActionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMinogameActionGameMode::AMinogameActionGameMode()
{

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
