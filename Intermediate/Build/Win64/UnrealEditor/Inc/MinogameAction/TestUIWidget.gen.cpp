// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinogameAction/UI/TestUIWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestUIWidget() {}
// Cross Module References
	MINOGAMEACTION_API UClass* Z_Construct_UClass_UTestUIWidget_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_UTestUIWidget();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_UBaseUIWidget();
	UPackage* Z_Construct_UPackage__Script_MinogameAction();
// End Cross Module References
	void UTestUIWidget::StaticRegisterNativesUTestUIWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestUIWidget);
	UClass* Z_Construct_UClass_UTestUIWidget_NoRegister()
	{
		return UTestUIWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTestUIWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestUIWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUIWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MinogameAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestUIWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/TestUIWidget.h" },
		{ "ModuleRelativePath", "UI/TestUIWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestUIWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestUIWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestUIWidget_Statics::ClassParams = {
		&UTestUIWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestUIWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestUIWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestUIWidget()
	{
		if (!Z_Registration_Info_UClass_UTestUIWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestUIWidget.OuterSingleton, Z_Construct_UClass_UTestUIWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestUIWidget.OuterSingleton;
	}
	template<> MINOGAMEACTION_API UClass* StaticClass<UTestUIWidget>()
	{
		return UTestUIWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestUIWidget);
	struct Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_UI_TestUIWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_UI_TestUIWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestUIWidget, UTestUIWidget::StaticClass, TEXT("UTestUIWidget"), &Z_Registration_Info_UClass_UTestUIWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestUIWidget), 2872031660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_UI_TestUIWidget_h_2953582009(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_UI_TestUIWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_UI_TestUIWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
