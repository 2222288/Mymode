// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/MyAttributeSet.h"

#ifdef MYMODE_MyAttributeSet_generated_h
#error "MyAttributeSet.generated.h already included, missing '#pragma once' in MyAttributeSet.h"
#endif
#define MYMODE_MyAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMyAttributeSet **********************************************************
struct Z_Construct_UClass_UMyAttributeSet_Statics;
MYMODE_API UClass* Z_Construct_UClass_UMyAttributeSet_NoRegister();

#define FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAttributeSet(); \
	friend struct ::Z_Construct_UClass_UMyAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYMODE_API UClass* ::Z_Construct_UClass_UMyAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mymode"), Z_Construct_UClass_UMyAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UMyAttributeSet)


#define FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyAttributeSet(UMyAttributeSet&&) = delete; \
	UMyAttributeSet(const UMyAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAttributeSet) \
	NO_API virtual ~UMyAttributeSet();


#define FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h_12_PROLOG
#define FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h_15_INCLASS_NO_PURE_DECLS \
	FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyAttributeSet;

// ********** End Class UMyAttributeSet ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
