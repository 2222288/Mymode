// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Base.h"

#ifdef MYMODE_Base_generated_h
#error "Base.generated.h already included, missing '#pragma once' in Base.h"
#endif
#define MYMODE_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABase ********************************************************************
struct Z_Construct_UClass_ABase_Statics;
MYMODE_API UClass* Z_Construct_UClass_ABase_NoRegister();

#define FID_CS_Mymode_Source_Mymode_Public_Character_Base_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABase(); \
	friend struct ::Z_Construct_UClass_ABase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYMODE_API UClass* ::Z_Construct_UClass_ABase_NoRegister(); \
public: \
	DECLARE_CLASS2(ABase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mymode"), Z_Construct_UClass_ABase_NoRegister) \
	DECLARE_SERIALIZER(ABase) \
	virtual UObject* _getUObject() const override { return const_cast<ABase*>(this); }


#define FID_CS_Mymode_Source_Mymode_Public_Character_Base_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABase(ABase&&) = delete; \
	ABase(const ABase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABase) \
	NO_API virtual ~ABase();


#define FID_CS_Mymode_Source_Mymode_Public_Character_Base_h_13_PROLOG
#define FID_CS_Mymode_Source_Mymode_Public_Character_Base_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CS_Mymode_Source_Mymode_Public_Character_Base_h_16_INCLASS_NO_PURE_DECLS \
	FID_CS_Mymode_Source_Mymode_Public_Character_Base_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABase;

// ********** End Class ABase **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CS_Mymode_Source_Mymode_Public_Character_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
