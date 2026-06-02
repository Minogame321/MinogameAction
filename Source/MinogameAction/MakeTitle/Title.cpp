// Fill out your copyright notice in the Description page of Project Settings.


#include "Title.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LevelStreaming.h"

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

void UTitle::OnStartButtonClicked()
{
	UGameplayStatics::OpenLevel(this, FName("World2"));

}