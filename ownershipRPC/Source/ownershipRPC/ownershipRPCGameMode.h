// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ownershipRPCGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS()
class AownershipRPCGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
};



