// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5expGameMode.h"
#include "UE5expCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5expGameMode::AUE5expGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
