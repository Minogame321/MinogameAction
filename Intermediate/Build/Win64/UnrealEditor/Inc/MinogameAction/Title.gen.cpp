// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinogameAction/Title.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitle() {}
// Cross Module References
	MINOGAMEACTION_API UClass* Z_Construct_UClass_UTitle_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_UTitle();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MinogameAction();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UTitle::StaticRegisterNativesUTitle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTitle);
	UClass* Z_Construct_UClass_UTitle_NoRegister()
	{
		return UTitle::StaticClass();
	}
	struct Z_Construct_UClass_UTitle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pStartButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pStartButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pStartText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pStartText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTitle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MinogameAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Title.h" },
		{ "ModuleRelativePath", "Title.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Title.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton = { "m_pStartButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitle, m_pStartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Title.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText = { "m_pStartText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitle, m_pStartText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTitle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitle_Statics::ClassParams = {
		&UTitle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTitle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTitle_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTitle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTitle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTitle()
	{
		if (!Z_Registration_Info_UClass_UTitle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTitle.OuterSingleton, Z_Construct_UClass_UTitle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTitle.OuterSingleton;
	}
	template<> MINOGAMEACTION_API UClass* StaticClass<UTitle>()
	{
		return UTitle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTitle);
	struct Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_Title_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_Title_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTitle, UTitle::StaticClass, TEXT("UTitle"), &Z_Registration_Info_UClass_UTitle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitle), 3589341829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_Title_h_1631362998(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_Title_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_Title_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
