#include "UICloseManager.h"
#include "../UI/BaseUIWidget.h"


void UICloseManager::AddUI(UBaseUIWidget* Widget)
{
	UIStack.AddUnique(Widget);
}

void UICloseManager::CloseUI()
{

    if (UIStack.Num() == 0) {
        return;
    }
    TWeakObjectPtr<UBaseUIWidget> WeakWidget = UIStack.Pop();

    if (!WeakWidget.IsValid())
    {
        return;
    }

    UBaseUIWidget* Widget = WeakWidget.Get();

    if (IsValid(Widget))
    {
        Widget->RemoveFromParent();
        return;
    }
}
