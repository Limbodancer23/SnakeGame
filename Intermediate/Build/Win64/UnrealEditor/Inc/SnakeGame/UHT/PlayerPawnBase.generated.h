// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerPawnBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_PlayerPawnBase_generated_h
#error "PlayerPawnBase.generated.h already included, missing '#pragma once' in PlayerPawnBase.h"
#endif
#define SNAKEGAME_PlayerPawnBase_generated_h

#define FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_SPARSE_DATA
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePlayerHorizontalImput); \
	DECLARE_FUNCTION(execHandlePlayerVerticalImput);


#define FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_ACCESSORS
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawnBase(); \
	friend struct Z_Construct_UClass_APlayerPawnBase_Statics; \
public: \
	DECLARE_CLASS(APlayerPawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawnBase)


#define FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawnBase(APlayerPawnBase&&); \
	NO_API APlayerPawnBase(const APlayerPawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawnBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawnBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawnBase) \
	NO_API virtual ~APlayerPawnBase();


#define FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_10_PROLOG
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_SPARSE_DATA \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_ACCESSORS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class APlayerPawnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
