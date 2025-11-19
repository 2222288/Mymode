// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMymode_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Mymode;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Mymode()
	{
		if (!Z_Registration_Info_UPackage__Script_Mymode.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Mymode",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x2D15AE0F,
			0x19623C62,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Mymode.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Mymode.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Mymode(Z_Construct_UPackage__Script_Mymode, TEXT("/Script/Mymode"), Z_Registration_Info_UPackage__Script_Mymode, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2D15AE0F, 0x19623C62));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
