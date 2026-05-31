// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinogameAction/TitleActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleActor() {}
// Cross Module References
	MINOGAMEACTION_API UClass* Z_Construct_UClass_ATitleActor_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_ATitleActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MinogameAction();
// End Cross Module References
	void ATitleActor::StaticRegisterNativesATitleActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATitleActor);
	UClass* Z_Construct_UClass_ATitleActor_NoRegister()
	{
		return ATitleActor::StaticClass();
	}
	struct Z_Construct_UClass_ATitleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATitleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MinogameAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitleActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TitleActor.h" },
		{ "ModuleRelativePath", "TitleActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATitleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATitleActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATitleActor_Statics::ClassParams = {
		&ATitleActor::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ATitleActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATitleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATitleActor()
	{
		if (!Z_Registration_Info_UClass_ATitleActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATitleActor.OuterSingleton, Z_Construct_UClass_ATitleActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATitleActor.OuterSingleton;
	}
	template<> MINOGAMEACTION_API UClass* StaticClass<ATitleActor>()
	{
		return ATitleActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATitleActor);
	struct Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TitleActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TitleActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATitleActor, ATitleActor::StaticClass, TEXT("ATitleActor"), &Z_Registration_Info_UClass_ATitleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATitleActor), 1362799748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TitleActor_h_2117166320(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TitleActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_TitleActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
