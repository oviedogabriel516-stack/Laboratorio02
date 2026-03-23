// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef LAB02_Lab02Projectile_generated_h
#error "Lab02Projectile.generated.h already included, missing '#pragma once' in Lab02Projectile.h"
#endif
#define LAB02_Lab02Projectile_generated_h

#define Lab02_Source_Lab02_Lab02Projectile_h_15_SPARSE_DATA
#define Lab02_Source_Lab02_Lab02Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Lab02_Source_Lab02_Lab02Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Lab02_Source_Lab02_Lab02Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALab02Projectile(); \
	friend struct Z_Construct_UClass_ALab02Projectile_Statics; \
public: \
	DECLARE_CLASS(ALab02Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab02"), NO_API) \
	DECLARE_SERIALIZER(ALab02Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Lab02_Source_Lab02_Lab02Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALab02Projectile(); \
	friend struct Z_Construct_UClass_ALab02Projectile_Statics; \
public: \
	DECLARE_CLASS(ALab02Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab02"), NO_API) \
	DECLARE_SERIALIZER(ALab02Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Lab02_Source_Lab02_Lab02Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALab02Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALab02Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab02Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab02Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALab02Projectile(ALab02Projectile&&); \
	NO_API ALab02Projectile(const ALab02Projectile&); \
public:


#define Lab02_Source_Lab02_Lab02Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALab02Projectile(ALab02Projectile&&); \
	NO_API ALab02Projectile(const ALab02Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab02Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab02Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALab02Projectile)


#define Lab02_Source_Lab02_Lab02Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ALab02Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALab02Projectile, ProjectileMovement); }


#define Lab02_Source_Lab02_Lab02Projectile_h_12_PROLOG
#define Lab02_Source_Lab02_Lab02Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab02_Source_Lab02_Lab02Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Lab02_Source_Lab02_Lab02Projectile_h_15_SPARSE_DATA \
	Lab02_Source_Lab02_Lab02Projectile_h_15_RPC_WRAPPERS \
	Lab02_Source_Lab02_Lab02Projectile_h_15_INCLASS \
	Lab02_Source_Lab02_Lab02Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lab02_Source_Lab02_Lab02Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab02_Source_Lab02_Lab02Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Lab02_Source_Lab02_Lab02Projectile_h_15_SPARSE_DATA \
	Lab02_Source_Lab02_Lab02Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Lab02_Source_Lab02_Lab02Projectile_h_15_INCLASS_NO_PURE_DECLS \
	Lab02_Source_Lab02_Lab02Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB02_API UClass* StaticClass<class ALab02Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Lab02_Source_Lab02_Lab02Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
