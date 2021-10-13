// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JocNebun/OmuBaterie_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOmuBaterie_GameMode() {}
// Cross Module References
	JOCNEBUN_API UClass* Z_Construct_UClass_AOmuBaterie_GameMode_NoRegister();
	JOCNEBUN_API UClass* Z_Construct_UClass_AOmuBaterie_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_JocNebun();
// End Cross Module References
	void AOmuBaterie_GameMode::StaticRegisterNativesAOmuBaterie_GameMode()
	{
	}
	UClass* Z_Construct_UClass_AOmuBaterie_GameMode_NoRegister()
	{
		return AOmuBaterie_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOmuBaterie_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOmuBaterie_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_JocNebun,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOmuBaterie_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "OmuBaterie_GameMode.h" },
		{ "ModuleRelativePath", "OmuBaterie_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOmuBaterie_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOmuBaterie_GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOmuBaterie_GameMode_Statics::ClassParams = {
		&AOmuBaterie_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOmuBaterie_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOmuBaterie_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOmuBaterie_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOmuBaterie_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOmuBaterie_GameMode, 3388812304);
	template<> JOCNEBUN_API UClass* StaticClass<AOmuBaterie_GameMode>()
	{
		return AOmuBaterie_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOmuBaterie_GameMode(Z_Construct_UClass_AOmuBaterie_GameMode, &AOmuBaterie_GameMode::StaticClass, TEXT("/Script/JocNebun"), TEXT("AOmuBaterie_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOmuBaterie_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
