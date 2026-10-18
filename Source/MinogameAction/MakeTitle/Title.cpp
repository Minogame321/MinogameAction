#include "Title.h"

#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "InputCoreTypes.h"

#include "../UI/BaseUIWidget.h"
#include "../UI/TestUIWidget.h"



// コンストラクタ
UTitle::UTitle(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    // Widget Blueprint のクラスを取得
    static ConstructorHelpers::FClassFinder<UBaseUIWidget> GenerateBP(
        TEXT("/Game/UI/UIParts/NewWidgetBlueprint")
    );

    if (GenerateBP.Succeeded())
    {
        TestWidgetClass = GenerateBP.Class;
    }
    else
    {
        UE_LOG(
            LogTemp,
            Error,
            TEXT("NewWidgetBlueprint の読み込みに失敗しました")
        );
    }
}


// Widget 構築時
void UTitle::NativeConstruct()
{
    Super::NativeConstruct();

    // テキスト設定
    SetText();

    // ボタンイベント登録
    if (m_pStartButton)
    {
        m_pStartButton->OnClicked.AddUniqueDynamic(
            this,
            &UTitle::OnStartButtonClicked
        );
    }
    else
    {
        UE_LOG(
            LogTemp,
            Error,
            TEXT("m_pStartButton が nullptr です。Widget Blueprint の名前を確認してください")
        );
    }
}


// スタートテキスト設定
void UTitle::SetText()
{
    if (m_pStartText)
    {
        m_pStartText->SetText(
            FText::FromString(TEXT("START"))
        );
    }
    else
    {
        UE_LOG(
            LogTemp,
            Error,
            TEXT("m_pStartText が nullptr です。Widget Blueprint の名前を確認してください")
        );
    }
}


// スタートボタンが押されたとき
void UTitle::OnStartButtonClicked()
{
    TransfertoWorld();
}


// A キーが押されたとき
FReply UTitle::NativeOnKeyDown(
    const FGeometry& InGeometry,
    const FKeyEvent& InKeyEvent
)
{
    if (InKeyEvent.GetKey() == EKeys::A)
    {
        APlayerController* PlayerController = GetOwningPlayer();

        if (!PlayerController)
        {
            UE_LOG(
                LogTemp,
                Error,
                TEXT("PlayerController が取得できません")
            );

            return FReply::Unhandled();
        }

        if (!TestWidgetClass)
        {
            UE_LOG(
                LogTemp,
                Error,
                TEXT("TestWidgetClass が設定されていません")
            );

            return FReply::Unhandled();
        }

        UTestUIWidget* TestWidget =
            CreateWidget<UTestUIWidget>(
                PlayerController,
                TestWidgetClass
            );

        if (TestWidget)
        {
            TestWidget->AddToViewport();
            return FReply::Handled();
        }

        UE_LOG(
            LogTemp,
            Error,
            TEXT("Widget の生成に失敗しました")
        );

        return FReply::Unhandled();
    }

    return Super::NativeOnKeyDown(
        InGeometry,
        InKeyEvent
    );
}


// 画面がクリックされたとき
FReply UTitle::NativeOnMouseButtonDown(
    const FGeometry& InGeometry,
    const FPointerEvent& InMouseEvent
)
{
    TransfertoWorld();

    return FReply::Handled();
}


// ワールド遷移
void UTitle::TransfertoWorld()
{
    // 遷移先のレベル名に変更してください
    // UGameplayStatics::OpenLevel(this, FName(TEXT("World2")));
}