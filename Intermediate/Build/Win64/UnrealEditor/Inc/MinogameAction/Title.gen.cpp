// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinogameAction/MakeTitle/Title.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitle() {}
// Cross Module References
	MINOGAMEACTION_API UClass* Z_Construct_UClass_UTitle_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_UTitle();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MinogameAction();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_UCmnProgressBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTitle::execOnStartButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartButtonClicked();
		P_NATIVE_END;
	}
	void UTitle::StaticRegisterNativesUTitle()
	{
		UClass* Class = UTitle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStartButtonClicked", &UTitle::execOnStartButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTitle_OnStartButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTitle_OnStartButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MakeTitle/Title.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitle_OnStartButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitle, nullptr, "OnStartButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTitle_OnStartButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTitle_OnStartButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTitle_OnStartButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitle_OnStartButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTitle);
	UClass* Z_Construct_UClass_UTitle_NoRegister()
	{
		return UTitle::StaticClass();
	}
	struct Z_Construct_UClass_UTitle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pProgressBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTitle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MinogameAction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTitle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTitle_OnStartButtonClicked, "OnStartButtonClicked" }, // 126492650
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MakeTitle/Title.h" },
		{ "ModuleRelativePath", "MakeTitle/Title.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MakeTitle/Title.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton = { "m_pStartButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitle, m_pStartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MakeTitle/Title.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText = { "m_pStartText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitle, m_pStartText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitle_Statics::NewProp_m_pProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MakeTitle/Title.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitle_Statics::NewProp_m_pProgressBar = { "m_pProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitle, m_pProgressBar), Z_Construct_UClass_UCmnProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitle_Statics::NewProp_m_pProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitle_Statics::NewProp_m_pProgressBar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitle_Statics::NewProp_m_pProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTitle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitle_Statics::ClassParams = {
		&UTitle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTitle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	struct Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MakeTitle_Title_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MakeTitle_Title_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTitle, UTitle::StaticClass, TEXT("UTitle"), &Z_Registration_Info_UClass_UTitle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitle), 4069199028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MakeTitle_Title_h_1081530858(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MakeTitle_Title_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MakeTitle_Title_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
