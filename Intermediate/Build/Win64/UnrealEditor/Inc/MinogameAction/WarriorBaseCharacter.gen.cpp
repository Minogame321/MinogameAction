// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinogameAction/WarriorBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorBaseCharacter() {}
// Cross Module References
	MINOGAMEACTION_API UClass* Z_Construct_UClass_AWarriorBaseCharacter_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_AWarriorBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MinogameAction();
// End Cross Module References
	void AWarriorBaseCharacter::StaticRegisterNativesAWarriorBaseCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorBaseCharacter);
	UClass* Z_Construct_UClass_AWarriorBaseCharacter_NoRegister()
	{
		return AWarriorBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AWarriorBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWarriorBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MinogameAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarriorBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WarriorBaseCharacter.h" },
		{ "ModuleRelativePath", "WarriorBaseCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWarriorBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorBaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorBaseCharacter_Statics::ClassParams = {
		&AWarriorBaseCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWarriorBaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWarriorBaseCharacter()
	{
		if (!Z_Registration_Info_UClass_AWarriorBaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorBaseCharacter.OuterSingleton, Z_Construct_UClass_AWarriorBaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWarriorBaseCharacter.OuterSingleton;
	}
	template<> MINOGAMEACTION_API UClass* StaticClass<AWarriorBaseCharacter>()
	{
		return AWarriorBaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorBaseCharacter);
	struct Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorBaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorBaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorBaseCharacter, AWarriorBaseCharacter::StaticClass, TEXT("AWarriorBaseCharacter"), &Z_Registration_Info_UClass_AWarriorBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorBaseCharacter), 2658897245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorBaseCharacter_h_124629408(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorBaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
