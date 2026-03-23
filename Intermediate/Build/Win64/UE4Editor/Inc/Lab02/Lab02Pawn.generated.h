// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAB02_Lab02Pawn_generated_h
#error "Lab02Pawn.generated.h already included, missing '#pragma once' in Lab02Pawn.h"
#endif
#define LAB02_Lab02Pawn_generated_h

#define Lab02_Source_Lab02_Lab02Pawn_h_12_SPARSE_DATA
#define Lab02_Source_Lab02_Lab02Pawn_h_12_RPC_WRAPPERS
#define Lab02_Source_Lab02_Lab02Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Lab02_Source_Lab02_Lab02Pawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALab02Pawn(); \
	friend struct Z_Construct_UClass_ALab02Pawn_Statics; \
public: \
	DECLARE_CLASS(ALab02Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab02"), NO_API) \
	DECLARE_SERIALIZER(ALab02Pawn)


#define Lab02_Source_Lab02_Lab02Pawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALab02Pawn(); \
	friend struct Z_Construct_UClass_ALab02Pawn_Statics; \
public: \
	DECLARE_CLASS(ALab02Pawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab02"), NO_API) \
	DECLARE_SERIALIZER(ALab02Pawn)


#define Lab02_Source_Lab02_Lab02Pawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALab02Pawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALab02Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab02Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab02Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALab02Pawn(ALab02Pawn&&); \
	NO_API ALab02Pawn(const ALab02Pawn&); \
public:


#define Lab02_Source_Lab02_Lab02Pawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALab02Pawn(ALab02Pawn&&); \
	NO_API ALab02Pawn(const ALab02Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab02Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab02Pawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALab02Pawn)


#define Lab02_Source_Lab02_Lab02Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(ALab02Pawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ALab02Pawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ALab02Pawn, CameraBoom); }


#define Lab02_Source_Lab02_Lab02Pawn_h_9_PROLOG
#define Lab02_Source_Lab02_Lab02Pawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab02_Source_Lab02_Lab02Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Lab02_Source_Lab02_Lab02Pawn_h_12_SPARSE_DATA \
	Lab02_Source_Lab02_Lab02Pawn_h_12_RPC_WRAPPERS \
	Lab02_Source_Lab02_Lab02Pawn_h_12_INCLASS \
	Lab02_Source_Lab02_Lab02Pawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lab02_Source_Lab02_Lab02Pawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab02_Source_Lab02_Lab02Pawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Lab02_Source_Lab02_Lab02Pawn_h_12_SPARSE_DATA \
	Lab02_Source_Lab02_Lab02Pawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Lab02_Source_Lab02_Lab02Pawn_h_12_INCLASS_NO_PURE_DECLS \
	Lab02_Source_Lab02_Lab02Pawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB02_API UClass* StaticClass<class ALab02Pawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Lab02_Source_Lab02_Lab02Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
