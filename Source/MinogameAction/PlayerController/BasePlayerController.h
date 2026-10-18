#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

UCLASS()
class MINOGAMEACTION_API ABasePlayerController
    : public APlayerController
{
    GENERATED_BODY()

protected:
    virtual void SetupInputComponent() override;

    void OnRightClick();
};