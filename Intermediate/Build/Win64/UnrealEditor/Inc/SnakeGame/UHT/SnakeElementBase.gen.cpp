// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeElementBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeElementBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeElementBase();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References
	DEFINE_FUNCTION(ASnakeElementBase::execToggleCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnakeElementBase::execHandleBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASnakeElementBase::execSetFirstElementType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFirstElementType_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ASnakeElementBase_SetFirstElementType = FName(TEXT("SetFirstElementType"));
	void ASnakeElementBase::SetFirstElementType()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASnakeElementBase_SetFirstElementType),NULL);
	}
	void ASnakeElementBase::StaticRegisterNativesASnakeElementBase()
	{
		UClass* Class = ASnakeElementBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleBeginOverlap", &ASnakeElementBase::execHandleBeginOverlap },
			{ "SetFirstElementType", &ASnakeElementBase::execSetFirstElementType },
			{ "ToggleCollision", &ASnakeElementBase::execToggleCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics
	{
		struct SnakeElementBase_eventHandleBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SnakeElementBase_eventHandleBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnakeElementBase_eventHandleBeginOverlap_Parms), &Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnakeElementBase_eventHandleBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeElementBase, nullptr, "HandleBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::SnakeElementBase_eventHandleBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::SnakeElementBase_eventHandleBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeElementBase, nullptr, "SetFirstElementType", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakeElementBase, nullptr, "ToggleCollision", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASnakeElementBase_ToggleCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakeElementBase_ToggleCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeElementBase);
	UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister()
	{
		return ASnakeElementBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeElementBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnakeOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SnakeOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeElementBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnakeElementBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakeElementBase_HandleBeginOverlap, "HandleBeginOverlap" }, // 2389212452
		{ &Z_Construct_UFunction_ASnakeElementBase_SetFirstElementType, "SetFirstElementType" }, // 3942025223
		{ &Z_Construct_UFunction_ASnakeElementBase_ToggleCollision, "ToggleCollision" }, // 592172514
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeElementBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeElementBase.h" },
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "SnakeElementBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeElementBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_SnakeOwner_MetaData[] = {
		{ "ModuleRelativePath", "SnakeElementBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_SnakeOwner = { "SnakeOwner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnakeElementBase, SnakeOwner), Z_Construct_UClass_ASnakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_SnakeOwner_MetaData), Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_SnakeOwner_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_SnakeOwner,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASnakeElementBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ASnakeElementBase, IInteractable), false },  // 2428683540
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeElementBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeElementBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeElementBase_Statics::ClassParams = {
		&ASnakeElementBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnakeElementBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASnakeElementBase()
	{
		if (!Z_Registration_Info_UClass_ASnakeElementBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeElementBase.OuterSingleton, Z_Construct_UClass_ASnakeElementBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnakeElementBase.OuterSingleton;
	}
	template<> SNAKEGAME_API UClass* StaticClass<ASnakeElementBase>()
	{
		return ASnakeElementBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeElementBase);
	ASnakeElementBase::~ASnakeElementBase() {}
	struct Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeElementBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeElementBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeElementBase, ASnakeElementBase::StaticClass, TEXT("ASnakeElementBase"), &Z_Registration_Info_UClass_ASnakeElementBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeElementBase), 1715265783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeElementBase_h_1755722360(TEXT("/Script/SnakeGame"),
		Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeElementBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeElementBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
