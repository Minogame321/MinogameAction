// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "Title.h"

ATitleGameMode::ATitleGameMode()
{
    static ConstructorHelpers::FClassFinder<UUserWidget> TitleBP(TEXT("/Game/UI/Title"));
    TitleWidgetClass = TitleBP.Class;
}

void ATitleGameMode::BeginPlay()
{
    APlayerController* PC =
        GetWorld()->GetFirstPlayerController();

    if (!PC || !TitleWidgetClass)
    {
        return;
    }

    PC->bShowMouseCursor = true;

   

    // タイトル画面
    UTitle* TitleWidget =
        CreateWidget<UTitle>(
            PC,
            TitleWidgetClass
        );
    if (TitleWidget) {
        TitleWidget->AddToViewport();
    }
}