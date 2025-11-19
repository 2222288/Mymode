// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystem/MyAttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyAttributeSet() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
MYMODE_API UClass* Z_Construct_UClass_UMyAttributeSet();
MYMODE_API UClass* Z_Construct_UClass_UMyAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mymode();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyAttributeSet **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMyAttributeSet;
UClass* UMyAttributeSet::GetPrivateStaticClass()
{
	using TClass = UMyAttributeSet;
	if (!Z_Registration_Info_UClass_UMyAttributeSet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyAttributeSet"),
			Z_Registration_Info_UClass_UMyAttributeSet.InnerSingleton,
			StaticRegisterNativesUMyAttributeSet,
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
	return Z_Registration_Info_UClass_UMyAttributeSet.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyAttributeSet_NoRegister()
{
	return UMyAttributeSet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/MyAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/MyAttributeSet.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMyAttributeSet constinit property declarations **************************
// ********** End Class UMyAttributeSet constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMyAttributeSet_Statics
UObject* (*const Z_Construct_UClass_UMyAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Mymode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAttributeSet_Statics::ClassParams = {
	&UMyAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAttributeSet_Statics::Class_MetaDataParams)
};
void UMyAttributeSet::StaticRegisterNativesUMyAttributeSet()
{
}
UClass* Z_Construct_UClass_UMyAttributeSet()
{
	if (!Z_Registration_Info_UClass_UMyAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAttributeSet.OuterSingleton, Z_Construct_UClass_UMyAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAttributeSet.OuterSingleton;
}
UMyAttributeSet::UMyAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMyAttributeSet);
UMyAttributeSet::~UMyAttributeSet() {}
// ********** End Class UMyAttributeSet ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h__Script_Mymode_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAttributeSet, UMyAttributeSet::StaticClass, TEXT("UMyAttributeSet"), &Z_Registration_Info_UClass_UMyAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAttributeSet), 747750805U) },
	};
}; // Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h__Script_Mymode_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h__Script_Mymode_770051564{
	TEXT("/Script/Mymode"),
	Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h__Script_Mymode_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_AbilitySystem_MyAttributeSet_h__Script_Mymode_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
