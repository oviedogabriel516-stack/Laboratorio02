// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab02/ETTanque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETTanque() {}
// Cross Module References
	LAB02_API UClass* Z_Construct_UClass_AETTanque_NoRegister();
	LAB02_API UClass* Z_Construct_UClass_AETTanque();
	LAB02_API UClass* Z_Construct_UClass_AEnemigoTerrestre();
	UPackage* Z_Construct_UPackage__Script_Lab02();
// End Cross Module References
	void AETTanque::StaticRegisterNativesAETTanque()
	{
	}
	UClass* Z_Construct_UClass_AETTanque_NoRegister()
	{
		return AETTanque::StaticClass();
	}
	struct Z_Construct_UClass_AETTanque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AETTanque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoTerrestre,
		(UObject* (*)())Z_Construct_UPackage__Script_Lab02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AETTanque_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ETTanque.h" },
		{ "ModuleRelativePath", "ETTanque.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AETTanque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AETTanque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AETTanque_Statics::ClassParams = {
		&AETTanque::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AETTanque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AETTanque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AETTanque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AETTanque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AETTanque, 3364831188);
	template<> LAB02_API UClass* StaticClass<AETTanque>()
	{
		return AETTanque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AETTanque(Z_Construct_UClass_AETTanque, &AETTanque::StaticClass, TEXT("/Script/Lab02"), TEXT("AETTanque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AETTanque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
