// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define SNAKEGAME_Interactable_generated_h

#define FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_SPARSE_DATA
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_ACCESSORS
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SNAKEGAME_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SNAKEGAME_API UInteractable(UInteractable&&); \
	SNAKEGAME_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNAKEGAME_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	SNAKEGAME_API virtual ~UInteractable();


#define FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SnakeGame"), SNAKEGAME_API) \
	DECLARE_SERIALIZER(UInteractable)


#define FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_10_PROLOG
#define FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_SPARSE_DATA \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_ACCESSORS \
	FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_SnakeGame_Source_SnakeGame_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
