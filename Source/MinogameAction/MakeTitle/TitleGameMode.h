// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TitleGameMode.generated.h"

class UTitle;

/**
 * 
 */
UCLASS()
class MINOGAMEACTION_API ATitleGameMode : public AGameModeBase
{
public:
	ATitleGameMode();
	GENERATED_BODY()

	void BeginPlay();
	
private:
	TSubclassOf<UTitle> TitleWidgetClass;
};
