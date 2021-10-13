// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JocNebun/JocNebunGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJocNebunGameMode() {}
// Cross Module References
	JOCNEBUN_API UClass* Z_Construct_UClass_AJocNebunGameMode_NoRegister();
	JOCNEBUN_API UClass* Z_Construct_UClass_AJocNebunGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JocNebun();
// End Cross Module References
	void AJocNebunGameMode::StaticRegisterNativesAJocNebunGameMode()
	{
	}
	UClass* Z_Construct_UClass_AJocNebunGameMode_NoRegister()
	{
		return AJocNebunGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJocNebunGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJocNebunGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JocNebun,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJocNebunGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "JocNebunGameMode.h" },
		{ "ModuleRelativePath", "JocNebunGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJocNebunGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJocNebunGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJocNebunGameMode_Statics::ClassParams = {
		&AJocNebunGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJocNebunGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJocNebunGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJocNebunGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJocNebunGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJocNebunGameMode, 3978926360);
	template<> JOCNEBUN_API UClass* StaticClass<AJocNebunGameMode>()
	{
		return AJocNebunGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJocNebunGameMode(Z_Construct_UClass_AJocNebunGameMode, &AJocNebunGameMode::StaticClass, TEXT("/Script/JocNebun"), TEXT("AJocNebunGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJocNebunGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
