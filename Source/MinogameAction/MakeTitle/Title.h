// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Title.generated.h"



/**
 * 
 */
UCLASS()
class MINOGAMEACTION_API UTitle : public UUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct();


private:
	void SetText() {m_pStartText->SetText(FText::FromString(TEXT("START")));};


private:

	UPROPERTY(meta = (BindWidget));
	UButton* m_pStartButton;

	UPROPERTY(meta = (BindWidget));
	UTextBlock* m_pStartText;

	UFUNCTION()
	void OnStartButtonClicked();

};
