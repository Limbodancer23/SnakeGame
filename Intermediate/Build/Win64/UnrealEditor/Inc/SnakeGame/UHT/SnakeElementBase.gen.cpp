// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeElementBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeElementBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeElementBase();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References
	void ASnakeElementBase::StaticRegisterNativesASnakeElementBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeElementBase);
	UClass* Z_Construct_UClass_ASnakeElementBase_NoRegister()
	{
		return ASnakeElementBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeElementBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeElementBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::DependentSingletons) < 16);
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakeElementBase_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeElementBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeElementBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeElementBase_Statics::ClassParams = {
		&ASnakeElementBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeElementBase_Statics::PropPointers),
		0,
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
		{ Z_Construct_UClass_ASnakeElementBase, ASnakeElementBase::StaticClass, TEXT("ASnakeElementBase"), &Z_Registration_Info_UClass_ASnakeElementBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeElementBase), 3217110407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeElementBase_h_177778546(TEXT("/Script/SnakeGame"),
		Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeElementBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_SnakeGame_Source_SnakeGame_SnakeElementBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
