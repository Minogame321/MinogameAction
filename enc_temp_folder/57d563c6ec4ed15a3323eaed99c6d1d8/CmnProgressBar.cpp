// Fill out your copyright notice in the Description page of Project Settings.


#include "CmnProgressBar.h"
#include "Components/ProgressBar.h"
#include "Components/Image.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/SlateWrapperTypes.h"

void UCmnProgressBar::NativeConstruct()
{
    Super::NativeConstruct();


}

void  UCmnProgressBar::Setup()
{
    const float Progress = 0.7f;

    if (!m_pImage1)
    {
        return;
    }

    UOverlaySlot* OverlaySlot = Cast<UOverlaySlot>(m_pImage1->Slot);
    if (!OverlaySlot)
    {
        return;
    }

    // Imageの左端をProgress位置に合わせる
    OverlaySlot->SetHorizontalAlignment(HAlign_Left);
    OverlaySlot->SetVerticalAlignment(VAlign_Center);

    const FVector2D Size = m_pImage1->GetCachedGeometry().GetLocalSize();

    m_pImage1->SetRenderTranslation(FVector2D(Size.X * Progress, 0.0f));
}


FReply UCmnProgressBar::NativeOnMouseButtonDown(
    const FGeometry& InGeometry,
    const FPointerEvent& InMouseEvent)
{
    if (!m_pProgressBar) {
        FReply::Handled();
    }

    // マウスのスクリーン座標
    FVector2D MousePos = InMouseEvent.GetScreenSpacePosition();

    // ProgressBar基準のローカル座標に変換
    FVector2D LocalPos = InGeometry.AbsoluteToLocal(MousePos);

    // ProgressBarの横幅
    float Width = InGeometry.GetLocalSize().X;

    // 0.0 ～ 1.0 の割合
    float Ratio = LocalPos.X / Width;

    // 範囲外を防ぐ
    Ratio = FMath::Clamp(Ratio, 0.0f, 1.0f);

    m_pProgressBar->SetPercent(Ratio);

    return FReply::Handled();
}