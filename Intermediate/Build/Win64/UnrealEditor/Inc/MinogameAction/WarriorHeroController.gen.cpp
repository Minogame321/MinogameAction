// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinogameAction/WarriorHeroController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroController() {}
// Cross Module References
	MINOGAMEACTION_API UClass* Z_Construct_UClass_AWarriorHeroController_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_AWarriorHeroController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MinogameAction();
// End Cross Module References
	void AWarriorHeroController::StaticRegisterNativesAWarriorHeroController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorHeroController);
	UClass* Z_Construct_UClass_AWarriorHeroController_NoRegister()
	{
		return AWarriorHeroController::StaticClass();
	}
	struct Z_Construct_UClass_AWarriorHeroController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWarriorHeroController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MinogameAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarriorHeroController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "WarriorHeroController.h" },
		{ "ModuleRelativePath", "WarriorHeroController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWarriorHeroController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeroController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeroController_Statics::ClassParams = {
		&AWarriorHeroController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWarriorHeroController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWarriorHeroController()
	{
		if (!Z_Registration_Info_UClass_AWarriorHeroController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeroController.OuterSingleton, Z_Construct_UClass_AWarriorHeroController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWarriorHeroController.OuterSingleton;
	}
	template<> MINOGAMEACTION_API UClass* StaticClass<AWarriorHeroController>()
	{
		return AWarriorHeroController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeroController);
	struct Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorHeroController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorHeroController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeroController, AWarriorHeroController::StaticClass, TEXT("AWarriorHeroController"), &Z_Registration_Info_UClass_AWarriorHeroController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeroController), 4273617111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorHeroController_h_1482732030(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorHeroController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_WarriorHeroController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
