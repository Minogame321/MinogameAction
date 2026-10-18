#include "BasePlayerController.h"
#include "../Manager/UICloseManager.h"

void ABasePlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAction(
        "RightClick",
        IE_Pressed,
        this,
        &ABasePlayerController::OnRightClick
    );
}

void ABasePlayerController::OnRightClick()
{
    UI_CLOSE_MANAGER().CloseUI();
}