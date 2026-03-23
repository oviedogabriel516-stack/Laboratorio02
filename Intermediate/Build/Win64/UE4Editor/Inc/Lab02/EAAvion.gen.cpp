// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab02/EAAvion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAAvion() {}
// Cross Module References
	LAB02_API UClass* Z_Construct_UClass_AEAAvion_NoRegister();
	LAB02_API UClass* Z_Construct_UClass_AEAAvion();
	LAB02_API UClass* Z_Construct_UClass_AEnemigoAereo();
	UPackage* Z_Construct_UPackage__Script_Lab02();
// End Cross Module References
	void AEAAvion::StaticRegisterNativesAEAAvion()
	{
	}
	UClass* Z_Construct_UClass_AEAAvion_NoRegister()
	{
		return AEAAvion::StaticClass();
	}
	struct Z_Construct_UClass_AEAAvion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEAAvion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoAereo,
		(UObject* (*)())Z_Construct_UPackage__Script_Lab02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEAAvion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EAAvion.h" },
		{ "ModuleRelativePath", "EAAvion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEAAvion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEAAvion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEAAvion_Statics::ClassParams = {
		&AEAAvion::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEAAvion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEAAvion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEAAvion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEAAvion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEAAvion, 2808663502);
	template<> LAB02_API UClass* StaticClass<AEAAvion>()
	{
		return AEAAvion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEAAvion(Z_Construct_UClass_AEAAvion, &AEAAvion::StaticClass, TEXT("/Script/Lab02"), TEXT("AEAAvion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEAAvion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
