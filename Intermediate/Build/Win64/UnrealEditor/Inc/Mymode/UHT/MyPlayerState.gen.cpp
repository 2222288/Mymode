// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/MyPlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyPlayerState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
MYMODE_API UClass* Z_Construct_UClass_AMyPlayerState();
MYMODE_API UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Mymode();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyPlayerState ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMyPlayerState;
UClass* AMyPlayerState::GetPrivateStaticClass()
{
	using TClass = AMyPlayerState;
	if (!Z_Registration_Info_UClass_AMyPlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyPlayerState"),
			Z_Registration_Info_UClass_AMyPlayerState.InnerSingleton,
			StaticRegisterNativesAMyPlayerState,
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
	return Z_Registration_Info_UClass_AMyPlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyPlayerState_NoRegister()
{
	return AMyPlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/MyPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/MyPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/MyPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/MyPlayerState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMyPlayerState constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMyPlayerState constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMyPlayerState_Statics

// ********** Begin Class AMyPlayerState Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerState_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerState, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerState_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::PropPointers) < 2048);
// ********** End Class AMyPlayerState Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_AMyPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Mymode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMyPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AMyPlayerState, IAbilitySystemInterface), false },  // 2722098046
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerState_Statics::ClassParams = {
	&AMyPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams)
};
void AMyPlayerState::StaticRegisterNativesAMyPlayerState()
{
}
UClass* Z_Construct_UClass_AMyPlayerState()
{
	if (!Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton, Z_Construct_UClass_AMyPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMyPlayerState);
AMyPlayerState::~AMyPlayerState() {}
// ********** End Class AMyPlayerState *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h__Script_Mymode_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerState, AMyPlayerState::StaticClass, TEXT("AMyPlayerState"), &Z_Registration_Info_UClass_AMyPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerState), 3538589858U) },
	};
}; // Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h__Script_Mymode_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h__Script_Mymode_574375430{
	TEXT("/Script/Mymode"),
	Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h__Script_Mymode_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CS_Mymode_Source_Mymode_Public_Player_MyPlayerState_h__Script_Mymode_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
