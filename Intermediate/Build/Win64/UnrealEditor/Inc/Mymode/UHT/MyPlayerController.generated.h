// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/MyPlayerController.h"

#ifdef MYMODE_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define MYMODE_MyPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyPlayerController ******************************************************
struct Z_Construct_UClass_AMyPlayerController_Statics;
MYMODE_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();

#define FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct ::Z_Construct_UClass_AMyPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYMODE_API UClass* ::Z_Construct_UClass_AMyPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mymode"), Z_Construct_UClass_AMyPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerController_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyPlayerController(AMyPlayerController&&) = delete; \
	AMyPlayerController(const AMyPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerController) \
	NO_API virtual ~AMyPlayerController();


#define FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerController_h_18_PROLOG
#define FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyPlayerController;

// ********** End Class AMyPlayerController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
