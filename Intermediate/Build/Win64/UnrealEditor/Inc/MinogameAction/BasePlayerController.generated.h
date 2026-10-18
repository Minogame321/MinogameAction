// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINOGAMEACTION_BasePlayerController_generated_h
#error "BasePlayerController.generated.h already included, missing '#pragma once' in BasePlayerController.h"
#endif
#define MINOGAMEACTION_BasePlayerController_generated_h

#define FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_SPARSE_DATA
#define FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_RPC_WRAPPERS
#define FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayerController(); \
	friend struct Z_Construct_UClass_ABasePlayerController_Statics; \
public: \
	DECLARE_CLASS(ABasePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinogameAction"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayerController)


#define FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABasePlayerController(); \
	friend struct Z_Construct_UClass_ABasePlayerController_Statics; \
public: \
	DECLARE_CLASS(ABasePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinogameAction"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayerController)


#define FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayerController(ABasePlayerController&&); \
	NO_API ABasePlayerController(const ABasePlayerController&); \
public:


#define FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayerController(ABasePlayerController&&); \
	NO_API ABasePlayerController(const ABasePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayerController)


#define FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_7_PROLOG
#define FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_SPARSE_DATA \
	FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_RPC_WRAPPERS \
	FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_INCLASS \
	FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_SPARSE_DATA \
	FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_INCLASS_NO_PURE_DECLS \
	FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINOGAMEACTION_API UClass* StaticClass<class ABasePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MinogameAction_Source_MinogameAction_PlayerController_BasePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
