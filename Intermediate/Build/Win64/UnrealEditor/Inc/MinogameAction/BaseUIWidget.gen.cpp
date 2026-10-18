// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinogameAction/UI/BaseUIWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUIWidget() {}
// Cross Module References
	MINOGAMEACTION_API UClass* Z_Construct_UClass_UBaseUIWidget_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_UBaseUIWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MinogameAction();
// End Cross Module References
	void UBaseUIWidget::StaticRegisterNativesUBaseUIWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseUIWidget);
	UClass* Z_Construct_UClass_UBaseUIWidget_NoRegister()
	{
		return UBaseUIWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseUIWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseUIWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MinogameAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseUIWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BaseUIWidget.h" },
		{ "ModuleRelativePath", "UI/BaseUIWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseUIWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseUIWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseUIWidget_Statics::ClassParams = {
		&UBaseUIWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseUIWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUIWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseUIWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseUIWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseUIWidget.OuterSingleton, Z_Construct_UClass_UBaseUIWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseUIWidget.OuterSingleton;
	}
	template<> MINOGAMEACTION_API UClass* StaticClass<UBaseUIWidget>()
	{
		return UBaseUIWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseUIWidget);
	struct Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_UI_BaseUIWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_UI_BaseUIWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseUIWidget, UBaseUIWidget::StaticClass, TEXT("UBaseUIWidget"), &Z_Registration_Info_UClass_UBaseUIWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseUIWidget), 3436340976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_UI_BaseUIWidget_h_3267960103(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_UI_BaseUIWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_UI_BaseUIWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
