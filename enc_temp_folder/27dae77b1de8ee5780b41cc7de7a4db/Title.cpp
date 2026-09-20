// Fill out your copyright notice in the Description page of Project Settings.


#include "Title.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LevelStreaming.h"
#include "Input/Reply.h"

void UTitle::NativeConstruct()
{
	SetText();

	if (m_pStartButton) {
		m_pStartButton->OnClicked.AddDynamic(
			this,
			&UTitle::OnStartButtonClicked // ←実行したい関数名
		);
	}
}

// スタートボタンが押された時に行う処理
void UTitle::OnStartButtonClicked()
{
	TransfertoWorld();
}

// 任意の画面内クリックでも遷移
FReply UTitle::NativeOnMouseButtonDown(
	const FGeometry& InGeometry,
	const FPointerEvent& InMouseEvent)
{
	TransfertoWorld();

	return FReply::Handled();
}

void UTitle::TransfertoWorld()
{
	UGameplayStatics::OpenLevel(this, FName("World2"));

}