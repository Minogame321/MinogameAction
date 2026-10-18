#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseUIWidget.generated.h"

UCLASS()
class MINOGAMEACTION_API UBaseUIWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    bool IsCanRightClickClose() { return CanRightClickClose; }
    void Setup();

protected:
    bool CanRightClickClose = true;
};