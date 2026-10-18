#include "BaseUIWidget.h"
#include "../Manager/UICloseManager.h"

void UBaseUIWidget::Setup()
{
	UI_CLOSE_MANAGER().AddUI(this);
}