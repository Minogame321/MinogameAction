#include "WarriorHeroCharacter.h"
#include "Debug.h"

AWarriorHeroCharacter::AWarriorHeroCharacter()
{
}

void AWarriorHeroCharacter::BeginPlay()
{
	int x = 4;
	FString Str = TEXT("TEST");
	Str += FString::FromInt(x);
	Debug::Print(Str);
}