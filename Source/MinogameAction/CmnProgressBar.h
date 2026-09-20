// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CmnProgressBar.generated.h"

class UProgressBar;

/**
 * 
 */
UCLASS()
class MINOGAMEACTION_API UCmnProgressBar : public UUserWidget
{
	GENERATED_BODY()
	virtual void NativeConstruct() override;

	virtual FReply NativeOnMouseButtonDown(
		const FGeometry& InGeometry,
		const FPointerEvent& InMouseEvent) override;
	
	UPROPERTY(meta = (BindWidget));
	UProgressBar* m_pProgressBar;
};
