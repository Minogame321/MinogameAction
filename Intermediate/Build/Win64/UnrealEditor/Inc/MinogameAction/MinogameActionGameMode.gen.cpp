// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinogameAction/MinogameActionGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinogameActionGameMode() {}
// Cross Module References
	MINOGAMEACTION_API UClass* Z_Construct_UClass_AMinogameActionGameMode_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_AMinogameActionGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MinogameAction();
// End Cross Module References
	void AMinogameActionGameMode::StaticRegisterNativesAMinogameActionGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinogameActionGameMode);
	UClass* Z_Construct_UClass_AMinogameActionGameMode_NoRegister()
	{
		return AMinogameActionGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMinogameActionGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinogameActionGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MinogameAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinogameActionGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MinogameActionGameMode.h" },
		{ "ModuleRelativePath", "MinogameActionGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinogameActionGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinogameActionGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinogameActionGameMode_Statics::ClassParams = {
		&AMinogameActionGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMinogameActionGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMinogameActionGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinogameActionGameMode()
	{
		if (!Z_Registration_Info_UClass_AMinogameActionGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinogameActionGameMode.OuterSingleton, Z_Construct_UClass_AMinogameActionGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMinogameActionGameMode.OuterSingleton;
	}
	template<> MINOGAMEACTION_API UClass* StaticClass<AMinogameActionGameMode>()
	{
		return AMinogameActionGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinogameActionGameMode);
	struct Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MinogameActionGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MinogameActionGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMinogameActionGameMode, AMinogameActionGameMode::StaticClass, TEXT("AMinogameActionGameMode"), &Z_Registration_Info_UClass_AMinogameActionGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinogameActionGameMode), 2199550004U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MinogameActionGameMode_h_1028464957(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MinogameActionGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MinogameActionGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
