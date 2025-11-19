// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/MyInterface.h"

#ifdef MYMODE_MyInterface_generated_h
#error "MyInterface.generated.h already included, missing '#pragma once' in MyInterface.h"
#endif
#define MYMODE_MyInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMyInterface *********************************************************
struct Z_Construct_UClass_UMyInterface_Statics;
MYMODE_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();

#define FID_CS_Mymode_Source_Mymode_Public_Interface_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYMODE_API UMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyInterface(UMyInterface&&) = delete; \
	UMyInterface(const UMyInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYMODE_API, UMyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInterface) \
	virtual ~UMyInterface() = default;


#define FID_CS_Mymode_Source_Mymode_Public_Interface_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMyInterface(); \
	friend struct ::Z_Construct_UClass_UMyInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYMODE_API UClass* ::Z_Construct_UClass_UMyInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Mymode"), Z_Construct_UClass_UMyInterface_NoRegister) \
	DECLARE_SERIALIZER(UMyInterface)


#define FID_CS_Mymode_Source_Mymode_Public_Interface_MyInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CS_Mymode_Source_Mymode_Public_Interface_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_CS_Mymode_Source_Mymode_Public_Interface_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CS_Mymode_Source_Mymode_Public_Interface_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMyInterface() {} \
public: \
	typedef UMyInterface UClassType; \
	typedef IMyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CS_Mymode_Source_Mymode_Public_Interface_MyInterface_h_10_PROLOG
#define FID_CS_Mymode_Source_Mymode_Public_Interface_MyInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CS_Mymode_Source_Mymode_Public_Interface_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyInterface;

// ********** End Interface UMyInterface ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CS_Mymode_Source_Mymode_Public_Interface_MyInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
