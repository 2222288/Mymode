// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/My.h"

#ifdef MYMODE_My_generated_h
#error "My.generated.h already included, missing '#pragma once' in My.h"
#endif
#define MYMODE_My_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMy **********************************************************************
struct Z_Construct_UClass_AMy_Statics;
MYMODE_API UClass* Z_Construct_UClass_AMy_NoRegister();

#define FID_CS_Mymode_Source_Mymode_Public_Character_My_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMy(); \
	friend struct ::Z_Construct_UClass_AMy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYMODE_API UClass* ::Z_Construct_UClass_AMy_NoRegister(); \
public: \
	DECLARE_CLASS2(AMy, ABase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mymode"), Z_Construct_UClass_AMy_NoRegister) \
	DECLARE_SERIALIZER(AMy)


#define FID_CS_Mymode_Source_Mymode_Public_Character_My_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMy(AMy&&) = delete; \
	AMy(const AMy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMy) \
	NO_API virtual ~AMy();


#define FID_CS_Mymode_Source_Mymode_Public_Character_My_h_8_PROLOG
#define FID_CS_Mymode_Source_Mymode_Public_Character_My_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CS_Mymode_Source_Mymode_Public_Character_My_h_11_INCLASS_NO_PURE_DECLS \
	FID_CS_Mymode_Source_Mymode_Public_Character_My_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMy;

// ********** End Class AMy ************************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CS_Mymode_Source_Mymode_Public_Character_My_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
