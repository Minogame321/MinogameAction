// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinogameAction/WarriorHeroCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroCharacter() {}
// Cross Module References
	MINOGAMEACTION_API UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_AWarriorHeroCharacter();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_AWarriorBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_MinogameAction();
// End Cross Module References
	void AWarriorHeroCharacter::StaticRegisterNativesAWarriorHeroCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorHeroCharacter);
	UClass* Z_Construct_UClass_AWarriorHeroCharacter_NoRegister()
	{
		return AWarriorHeroCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AWarriorHeroCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWarriorHeroCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWarriorBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MinogameAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarriorHeroCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WarriorHeroCharacter.h" },
		{ "ModuleRelativePath", "WarriorHeroCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWarriorHeroCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeroCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeroCharacter_Statics::ClassParams = {
		&AWarriorHeroCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWarriorHeroCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWarriorHeroCharacter()
	{
		if (!Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton, Z_Construct_UClass_AWarriorHeroCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWarriorHeroCharacter.OuterSingleton;
	}
	template<> MINOGAMEACTION_API UClass* StaticClass<AWarriorHeroCharacter>()
	{
		return AWarriorHeroCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeroCharacter);
	struct Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorHeroCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorHeroCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeroCharacter, AWarriorHeroCharacter::StaticClass, TEXT("AWarriorHeroCharacter"), &Z_Registration_Info_UClass_AWarriorHeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeroCharacter), 1326393218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorHeroCharacter_h_3458111161(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorHeroCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorHeroCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
