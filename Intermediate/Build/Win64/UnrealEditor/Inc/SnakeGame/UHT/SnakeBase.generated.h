// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_SnakeBase_generated_h
#error "SnakeBase.generated.h already included, missing '#pragma once' in SnakeBase.h"
#endif
#define SNAKEGAME_SnakeBase_generated_h

#define FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_SPARSE_DATA
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_ACCESSORS
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeBase(); \
	friend struct Z_Construct_UClass_ASnakeBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ASnakeBase)


#define FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeBase(ASnakeBase&&); \
	NO_API ASnakeBase(const ASnakeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeBase) \
	NO_API virtual ~ASnakeBase();


#define FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_21_PROLOG
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_SPARSE_DATA \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_ACCESSORS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ASnakeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeBase_h


#define FOREACH_ENUM_EMOVEMENTDIRECTION(op) \
	op(EMovementDirection::UP) \
	op(EMovementDirection::DOWN) \
	op(EMovementDirection::LEFT) \
	op(EMovementDirection::RIGHT) 

enum class EMovementDirection;
template<> struct TIsUEnumClass<EMovementDirection> { enum { Value = true }; };
template<> SNAKEGAME_API UEnum* StaticEnum<EMovementDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
