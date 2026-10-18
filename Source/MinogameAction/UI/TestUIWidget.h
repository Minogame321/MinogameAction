#pragma once

#include "CoreMinimal.h"
#include "BaseUIWidget.h"
#include "TestUIWidget.generated.h"

UCLASS()
class MINOGAMEACTION_API UTestUIWidget : public UBaseUIWidget
{
    GENERATED_BODY()

protected:
    virtual bool bCanCloseRightClick() override
    {
        return true;
    }
};