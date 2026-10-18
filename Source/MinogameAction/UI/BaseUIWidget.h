#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseUIWidget.generated.h"

UCLASS()
class MINOGAMEACTION_API UBaseUIWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;
    bool IsCanRightClickClose() { return CanRightClickClose; }

protected:
    virtual bool bCanCloseRightClick() { return false; };

protected:
    bool CanRightClickClose = true;
};