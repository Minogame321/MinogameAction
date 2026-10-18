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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MINOGAMEACTION_API UClass* Z_Construct_UClass_UTestUIWidget_NoRegister();
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
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_pStartButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pStartText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_pStartText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TestWidgetClass;
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
		{ "IncludePath", "MakeTitle/Title.h" },
		{ "ModuleRelativePath", "MakeTitle/Title.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// Widget Blueprint \xe5\x86\x85\xe3\x81\xae\xe9\x83\xa8\xe5\x93\x81\xe5\x90\x8d\xe3\x81\xa8\xe4\xb8\x80\xe8\x87\xb4\xe3\x81\x95\xe3\x81\x9b\xe3\x82\x8b\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MakeTitle/Title.h" },
		{ "ToolTip", "Widget Blueprint \xe5\x86\x85\xe3\x81\xae\xe9\x83\xa8\xe5\x93\x81\xe5\x90\x8d\xe3\x81\xa8\xe4\xb8\x80\xe8\x87\xb4\xe3\x81\x95\xe3\x81\x9b\xe3\x82\x8b" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton = { "m_pStartButton", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitle, m_pStartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MakeTitle/Title.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText = { "m_pStartText", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitle, m_pStartText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTitle_Statics::NewProp_TestWidgetClass_MetaData[] = {
		{ "Comment", "// \xe7\x94\x9f\xe6\x88\x90\xe3\x81\x99\xe3\x82\x8b Widget Blueprint \xe3\x81\xae\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\n" },
		{ "ModuleRelativePath", "MakeTitle/Title.h" },
		{ "ToolTip", "\xe7\x94\x9f\xe6\x88\x90\xe3\x81\x99\xe3\x82\x8b Widget Blueprint \xe3\x81\xae\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTitle_Statics::NewProp_TestWidgetClass = { "TestWidgetClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTitle, TestWidgetClass), Z_Construct_UClass_UTestUIWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTitle_Statics::NewProp_TestWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTitle_Statics::NewProp_TestWidgetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitle_Statics::NewProp_m_pStartText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitle_Statics::NewProp_TestWidgetClass,
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
		{ Z_Construct_UClass_UTitle, UTitle::StaticClass, TEXT("UTitle"), &Z_Registration_Info_UClass_UTitle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitle), 3907753666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MakeTitle_Title_h_4223136850(TEXT("/Script/MinogameAction"),
		Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MakeTitle_Title_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MinogameAction_Source_MinogameAction_MakeTitle_Title_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
