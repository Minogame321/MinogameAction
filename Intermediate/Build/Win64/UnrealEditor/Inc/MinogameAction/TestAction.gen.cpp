// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinogameAction/TestAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestAction() {}
// Cross Module References
	MINOGAMEACTION_API UClass* Z_Construct_UClass_ATestAction_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_ATestAction();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MinogameAction();
// End Cross Module References
	void ATestAction::StaticRegisterNativesATestAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestAction);
	UClass* Z_Construct_UClass_ATestAction_NoRegister()
	{
		return ATestAction::StaticClass();
	}
	struct Z_Construct_UClass_ATestAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MinogameAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestAction.h" },
		{ "ModuleRelativePath", "TestAction.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestAction_Statics::ClassParams = {
		&ATestAction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATestAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestAction()
	{
		if (!Z_Registration_Info_UClass_ATestAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestAction.OuterSingleton, Z_Construct_UClass_ATestAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestAction.OuterSingleton;
	}
	template<> MINOGAMEACTION_API UClass* StaticClass<ATestAction>()
	{
		return ATestAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestAction);
	struct Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TestAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TestAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestAction, ATestAction::StaticClass, TEXT("ATestAction"), &Z_Registration_Info_UClass_ATestAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestAction), 2072921262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TestAction_h_205623271(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TestAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TestAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
