// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CmnProgressBar.generated.h"

class UProgressBar;
class UImage;
class UOverlay;

/**
 * 
 */
UCLASS()
class MINOGAMEACTION_API UCmnProgressBar : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	void    Setup();

	virtual FReply NativeOnMouseButtonDown(
		const FGeometry& InGeometry,
		const FPointerEvent& InMouseEvent) override;
	
	UPROPERTY(meta = (BindWidget));
	UProgressBar* m_pProgressBar;

	UPROPERTY(meta = (BindWidget));

	UOverlay* m_pOverlay;

	UPROPERTY(meta = (BindWidget));
	UImage* m_pImage1;

	UPROPERTY(meta = (BindWidget));
	UImage* m_pImage2;
};
