#include "BaseUIWidget.h"
#include "../Manager/UICloseManager.h"

void UBaseUIWidget::NativeConstruct()
{
	if (bCanCloseRightClick()) {
		UI_CLOSE_MANAGER().AddUI(this);
	}
}

