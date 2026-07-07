#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WarriorBaseCharacter.h"
#include "WarriorHeroCharacter.generated.h"

UCLASS()
class MINOGAMEACTION_API AWarriorHeroCharacter : public AWarriorBaseCharacter
{
    GENERATED_BODY()

public:
    AWarriorHeroCharacter();

    void BeginPlay() override;

};