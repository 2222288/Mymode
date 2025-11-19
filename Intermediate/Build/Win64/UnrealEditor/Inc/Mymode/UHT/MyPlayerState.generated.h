// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/MyPlayerState.h"

#ifdef MYMODE_MyPlayerState_generated_h
#error "MyPlayerState.generated.h already included, missing '#pragma once' in MyPlayerState.h"
#endif
#define MYMODE_MyPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyPlayerState ***********************************************************
struct Z_Construct_UClass_AMyPlayerState_Statics;
MYMODE_API UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();

#define FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerState(); \
	friend struct ::Z_Construct_UClass_AMyPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYMODE_API UClass* ::Z_Construct_UClass_AMyPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mymode"), Z_Construct_UClass_AMyPlayerState_NoRegister) \
	DECLARE_SERIALIZER(AMyPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AMyPlayerState*>(this); }


#define FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyPlayerState(AMyPlayerState&&) = delete; \
	AMyPlayerState(const AMyPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerState) \
	NO_API virtual ~AMyPlayerState();


#define FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h_15_PROLOG
#define FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyPlayerState;

// ********** End Class AMyPlayerState *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
