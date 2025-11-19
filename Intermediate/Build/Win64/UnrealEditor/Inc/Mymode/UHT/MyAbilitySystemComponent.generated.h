// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/MyAbilitySystemComponent.h"

#ifdef MYMODE_MyAbilitySystemComponent_generated_h
#error "MyAbilitySystemComponent.generated.h already included, missing '#pragma once' in MyAbilitySystemComponent.h"
#endif
#define MYMODE_MyAbilitySystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMyAbilitySystemComponent ************************************************
struct Z_Construct_UClass_UMyAbilitySystemComponent_Statics;
MYMODE_API UClass* Z_Construct_UClass_UMyAbilitySystemComponent_NoRegister();

#define FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAbilitySystemComponent(); \
	friend struct ::Z_Construct_UClass_UMyAbilitySystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYMODE_API UClass* ::Z_Construct_UClass_UMyAbilitySystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mymode"), Z_Construct_UClass_UMyAbilitySystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UMyAbilitySystemComponent)


#define FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyAbilitySystemComponent(UMyAbilitySystemComponent&&) = delete; \
	UMyAbilitySystemComponent(const UMyAbilitySystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAbilitySystemComponent) \
	NO_API virtual ~UMyAbilitySystemComponent();


#define FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAbilitySystemComponent_h_12_PROLOG
#define FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAbilitySystemComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyAbilitySystemComponent;

// ********** End Class UMyAbilitySystemComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAbilitySystemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
