#pragma once

#include "CoreMinimal.h"

namespace Debug
{
	static void Print(const FString& Msg, const FColor& Color = FColor::MakeRandomColor(), int InKey = -1)
	{
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(InKey, 7.f, Color, Msg);
		}
	}
}

