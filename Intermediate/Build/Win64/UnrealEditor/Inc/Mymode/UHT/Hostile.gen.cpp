// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Hostile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHostile() {}

// ********** Begin Cross Module References ********************************************************
MYMODE_API UClass* Z_Construct_UClass_ABase();
MYMODE_API UClass* Z_Construct_UClass_AHostile();
MYMODE_API UClass* Z_Construct_UClass_AHostile_NoRegister();
MYMODE_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mymode();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHostile *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHostile;
UClass* AHostile::GetPrivateStaticClass()
{
	using TClass = AHostile;
	if (!Z_Registration_Info_UClass_AHostile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Hostile"),
			Z_Registration_Info_UClass_AHostile.InnerSingleton,
			StaticRegisterNativesAHostile,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AHostile.InnerSingleton;
}
UClass* Z_Construct_UClass_AHostile_NoRegister()
{
	return AHostile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHostile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Hostile.h" },
		{ "ModuleRelativePath", "Public/Character/Hostile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighlighted_MetaData[] = {
		{ "Category", "Hostile" },
		{ "ModuleRelativePath", "Public/Character/Hostile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AHostile constinit property declarations *********************************
	static void NewProp_bHighlighted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlighted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AHostile constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHostile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHostile_Statics

// ********** Begin Class AHostile Property Definitions ********************************************
void Z_Construct_UClass_AHostile_Statics::NewProp_bHighlighted_SetBit(void* Obj)
{
	((AHostile*)Obj)->bHighlighted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHostile_Statics::NewProp_bHighlighted = { "bHighlighted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHostile), &Z_Construct_UClass_AHostile_Statics::NewProp_bHighlighted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighlighted_MetaData), NewProp_bHighlighted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHostile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostile_Statics::NewProp_bHighlighted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHostile_Statics::PropPointers) < 2048);
// ********** End Class AHostile Property Definitions **********************************************
UObject* (*const Z_Construct_UClass_AHostile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABase,
	(UObject* (*)())Z_Construct_UPackage__Script_Mymode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHostile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHostile_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMyInterface_NoRegister, (int32)VTABLE_OFFSET(AHostile, IMyInterface), false },  // 166554665
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHostile_Statics::ClassParams = {
	&AHostile::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHostile_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHostile_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHostile_Statics::Class_MetaDataParams), Z_Construct_UClass_AHostile_Statics::Class_MetaDataParams)
};
void AHostile::StaticRegisterNativesAHostile()
{
}
UClass* Z_Construct_UClass_AHostile()
{
	if (!Z_Registration_Info_UClass_AHostile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHostile.OuterSingleton, Z_Construct_UClass_AHostile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHostile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHostile);
AHostile::~AHostile() {}
// ********** End Class AHostile *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h__Script_Mymode_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHostile, AHostile::StaticClass, TEXT("AHostile"), &Z_Registration_Info_UClass_AHostile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHostile), 2053493573U) },
	};
}; // Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h__Script_Mymode_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h__Script_Mymode_3541965889{
	TEXT("/Script/Mymode"),
	Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h__Script_Mymode_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_Character_Hostile_h__Script_Mymode_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
