// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lab02/Lab02GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLab02GameMode() {}
// Cross Module References
	LAB02_API UClass* Z_Construct_UClass_ALab02GameMode_NoRegister();
	LAB02_API UClass* Z_Construct_UClass_ALab02GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Lab02();
	LAB02_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
// End Cross Module References
	void ALab02GameMode::StaticRegisterNativesALab02GameMode()
	{
	}
	UClass* Z_Construct_UClass_ALab02GameMode_NoRegister()
	{
		return ALab02GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALab02GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cuadrilla1_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cuadrilla1_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cuadrilla1;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cuadrilla2_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cuadrilla2_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cuadrilla2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALab02GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Lab02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALab02GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Forward declaration\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Lab02GameMode.h" },
		{ "ModuleRelativePath", "Lab02GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Forward declaration" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla1_Inner = { "Cuadrilla1", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla1_MetaData[] = {
		{ "Comment", "// Arreglos para rastrear las cuadrillas\n" },
		{ "ModuleRelativePath", "Lab02GameMode.h" },
		{ "ToolTip", "Arreglos para rastrear las cuadrillas" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla1 = { "Cuadrilla1", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALab02GameMode, Cuadrilla1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla1_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla2_Inner = { "Cuadrilla2", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla2_MetaData[] = {
		{ "ModuleRelativePath", "Lab02GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla2 = { "Cuadrilla2", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALab02GameMode, Cuadrilla2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALab02GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla1_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALab02GameMode_Statics::NewProp_Cuadrilla2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALab02GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALab02GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALab02GameMode_Statics::ClassParams = {
		&ALab02GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALab02GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALab02GameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALab02GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALab02GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALab02GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALab02GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALab02GameMode, 3572722004);
	template<> LAB02_API UClass* StaticClass<ALab02GameMode>()
	{
		return ALab02GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALab02GameMode(Z_Construct_UClass_ALab02GameMode, &ALab02GameMode::StaticClass, TEXT("/Script/Lab02"), TEXT("ALab02GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALab02GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
