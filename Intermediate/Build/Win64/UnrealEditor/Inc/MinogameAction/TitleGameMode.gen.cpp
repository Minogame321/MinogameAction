// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinogameAction/TitleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleGameMode() {}
// Cross Module References
	MINOGAMEACTION_API UClass* Z_Construct_UClass_ATitleGameMode_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_ATitleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MinogameAction();
// End Cross Module References
	void ATitleGameMode::StaticRegisterNativesATitleGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATitleGameMode);
	UClass* Z_Construct_UClass_ATitleGameMode_NoRegister()
	{
		return ATitleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATitleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATitleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MinogameAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitleGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TitleGameMode.h" },
		{ "ModuleRelativePath", "TitleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATitleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATitleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATitleGameMode_Statics::ClassParams = {
		&ATitleGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATitleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATitleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATitleGameMode()
	{
		if (!Z_Registration_Info_UClass_ATitleGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATitleGameMode.OuterSingleton, Z_Construct_UClass_ATitleGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATitleGameMode.OuterSingleton;
	}
	template<> MINOGAMEACTION_API UClass* StaticClass<ATitleGameMode>()
	{
		return ATitleGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATitleGameMode);
	struct Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TitleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TitleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATitleGameMode, ATitleGameMode::StaticClass, TEXT("ATitleGameMode"), &Z_Registration_Info_UClass_ATitleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATitleGameMode), 2333500600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TitleGameMode_h_759022876(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TitleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TitleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
