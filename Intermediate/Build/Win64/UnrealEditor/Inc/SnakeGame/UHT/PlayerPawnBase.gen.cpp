// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/PlayerPawnBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawnBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_AFood_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_APlayerPawnBase();
	SNAKEGAME_API UClass* Z_Construct_UClass_APlayerPawnBase_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References
	DEFINE_FUNCTION(APlayerPawnBase::execSpawnFood)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnFood();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerPawnBase::execHandlePlayerHorizontalImput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerHorizontalImput(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerPawnBase::execHandlePlayerVerticalImput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePlayerVerticalImput(Z_Param_value);
		P_NATIVE_END;
	}
	void APlayerPawnBase::StaticRegisterNativesAPlayerPawnBase()
	{
		UClass* Class = APlayerPawnBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePlayerHorizontalImput", &APlayerPawnBase::execHandlePlayerHorizontalImput },
			{ "HandlePlayerVerticalImput", &APlayerPawnBase::execHandlePlayerVerticalImput },
			{ "SpawnFood", &APlayerPawnBase::execSpawnFood },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics
	{
		struct PlayerPawnBase_eventHandlePlayerHorizontalImput_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPawnBase_eventHandlePlayerHorizontalImput_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawnBase, nullptr, "HandlePlayerHorizontalImput", nullptr, nullptr, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::PlayerPawnBase_eventHandlePlayerHorizontalImput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::PlayerPawnBase_eventHandlePlayerHorizontalImput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics
	{
		struct PlayerPawnBase_eventHandlePlayerVerticalImput_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerPawnBase_eventHandlePlayerVerticalImput_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawnBase, nullptr, "HandlePlayerVerticalImput", nullptr, nullptr, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::PlayerPawnBase_eventHandlePlayerVerticalImput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::PlayerPawnBase_eventHandlePlayerVerticalImput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawnBase_SpawnFood_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawnBase_SpawnFood_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawnBase_SpawnFood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawnBase, nullptr, "SpawnFood", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_SpawnFood_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerPawnBase_SpawnFood_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerPawnBase_SpawnFood()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerPawnBase_SpawnFood_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerPawnBase);
	UClass* Z_Construct_UClass_APlayerPawnBase_NoRegister()
	{
		return APlayerPawnBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnakeActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SnakeActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnakeActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SnakeActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoodActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoodActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoodActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FoodActorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerPawnBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalImput, "HandlePlayerHorizontalImput" }, // 2411281776
		{ &Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalImput, "HandlePlayerVerticalImput" }, // 2096911449
		{ &Z_Construct_UFunction_APlayerPawnBase_SpawnFood, "SpawnFood" }, // 1146356749
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawnBase.h" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera = { "PawnCamera", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawnBase, PawnCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData), Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor = { "SnakeActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawnBase, SnakeActor), Z_Construct_UClass_ASnakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData), Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass = { "SnakeActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawnBase, SnakeActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASnakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData), Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActor_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActor = { "FoodActor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawnBase, FoodActor), Z_Construct_UClass_AFood_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActor_MetaData), Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActorClass_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActorClass = { "FoodActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerPawnBase, FoodActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFood_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActorClass_MetaData), Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActorClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawnBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawnBase_Statics::ClassParams = {
		&APlayerPawnBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerPawnBase()
	{
		if (!Z_Registration_Info_UClass_APlayerPawnBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerPawnBase.OuterSingleton, Z_Construct_UClass_APlayerPawnBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerPawnBase.OuterSingleton;
	}
	template<> SNAKEGAME_API UClass* StaticClass<APlayerPawnBase>()
	{
		return APlayerPawnBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawnBase);
	APlayerPawnBase::~APlayerPawnBase() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerPawnBase, APlayerPawnBase::StaticClass, TEXT("APlayerPawnBase"), &Z_Registration_Info_UClass_APlayerPawnBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerPawnBase), 438032214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_2220526258(TEXT("/Script/SnakeGame"),
		Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_PlayerPawnBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
