#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Input/Reply.h"
#include "Title.generated.h"

class UTestUIWidget;

UCLASS()
class MINOGAMEACTION_API UTitle : public UUserWidget
{
    GENERATED_BODY()

public:
    UTitle(const FObjectInitializer& ObjectInitializer);

    virtual void NativeConstruct() override;

protected:
    virtual FReply NativeOnMouseButtonDown(
        const FGeometry& InGeometry,
        const FPointerEvent& InMouseEvent
    ) override;

    virtual FReply NativeOnKeyDown(
        const FGeometry& InGeometry,
        const FKeyEvent& InKeyEvent
    ) override;

private:
    void SetText();

    void TransfertoWorld();

    UFUNCTION()
    void OnStartButtonClicked();

private:
    // Widget Blueprint 内の部品名と一致させる
    UPROPERTY(meta = (BindWidget))
    TObjectPtr<UButton> m_pStartButton;

    UPROPERTY(meta = (BindWidget))
    TObjectPtr<UTextBlock> m_pStartText;

    // 生成する Widget Blueprint のクラス
    UPROPERTY()
    TSubclassOf<UTestUIWidget> TestWidgetClass;
};