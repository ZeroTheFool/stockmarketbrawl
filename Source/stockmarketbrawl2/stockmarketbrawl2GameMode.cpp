// Copyright Epic Games, Inc. All Rights Reserved.

#include "stockmarketbrawl2GameMode.h"
#include "stockmarketbrawl2Character.h"
#include "UObject/ConstructorHelpers.h"

Astockmarketbrawl2GameMode::Astockmarketbrawl2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
