// Fill out your copyright notice in the Description page of Project Settings.


#include "CmnProgressBar.h"
#include "Components/ProgressBar.h"

void UCmnProgressBar::NativeConstruct()
{

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