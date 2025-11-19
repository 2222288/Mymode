// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Hostile.h"

#ifdef MYMODE_Hostile_generated_h
#error "Hostile.generated.h already included, missing '#pragma once' in Hostile.h"
#endif
#define MYMODE_Hostile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHostile *****************************************************************
struct Z_Construct_UClass_AHostile_Statics;
MYMODE_API UClass* Z_Construct_UClass_AHostile_NoRegister();

#define FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHostile(); \
	friend struct ::Z_Construct_UClass_AHostile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYMODE_API UClass* ::Z_Construct_UClass_AHostile_NoRegister(); \
public: \
	DECLARE_CLASS2(AHostile, ABase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mymode"), Z_Construct_UClass_AHostile_NoRegister) \
	DECLARE_SERIALIZER(AHostile) \
	virtual UObject* _getUObject() const override { return const_cast<AHostile*>(this); }


#define FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHostile(AHostile&&) = delete; \
	AHostile(const AHostile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHostile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHostile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHostile) \
	NO_API virtual ~AHostile();


#define FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h_14_PROLOG
#define FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h_17_INCLASS_NO_PURE_DECLS \
	FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHostile;

// ********** End Class AHostile *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
