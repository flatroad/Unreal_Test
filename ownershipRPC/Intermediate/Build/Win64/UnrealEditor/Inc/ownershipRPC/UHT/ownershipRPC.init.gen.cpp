// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeownershipRPC_init() {}
	OWNERSHIPRPC_API UFunction* Z_Construct_UDelegateFunction_ownershipRPC_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ownershipRPC;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ownershipRPC()
	{
		if (!Z_Registration_Info_UPackage__Script_ownershipRPC.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ownershipRPC_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ownershipRPC",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x973F22F4,
				0x7F620A03,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ownershipRPC.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ownershipRPC.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ownershipRPC(Z_Construct_UPackage__Script_ownershipRPC, TEXT("/Script/ownershipRPC"), Z_Registration_Info_UPackage__Script_ownershipRPC, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x973F22F4, 0x7F620A03));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
