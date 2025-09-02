// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ownershipRPCGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeownershipRPCGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
OWNERSHIPRPC_API UClass* Z_Construct_UClass_AownershipRPCGameMode();
OWNERSHIPRPC_API UClass* Z_Construct_UClass_AownershipRPCGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ownershipRPC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AownershipRPCGameMode ****************************************************
void AownershipRPCGameMode::StaticRegisterNativesAownershipRPCGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AownershipRPCGameMode;
UClass* AownershipRPCGameMode::GetPrivateStaticClass()
{
	using TClass = AownershipRPCGameMode;
	if (!Z_Registration_Info_UClass_AownershipRPCGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ownershipRPCGameMode"),
			Z_Registration_Info_UClass_AownershipRPCGameMode.InnerSingleton,
			StaticRegisterNativesAownershipRPCGameMode,
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
	return Z_Registration_Info_UClass_AownershipRPCGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AownershipRPCGameMode_NoRegister()
{
	return AownershipRPCGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AownershipRPCGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ownershipRPCGameMode.h" },
		{ "ModuleRelativePath", "ownershipRPCGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AownershipRPCGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AownershipRPCGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ownershipRPC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AownershipRPCGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AownershipRPCGameMode_Statics::ClassParams = {
	&AownershipRPCGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AownershipRPCGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AownershipRPCGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AownershipRPCGameMode()
{
	if (!Z_Registration_Info_UClass_AownershipRPCGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AownershipRPCGameMode.OuterSingleton, Z_Construct_UClass_AownershipRPCGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AownershipRPCGameMode.OuterSingleton;
}
AownershipRPCGameMode::AownershipRPCGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AownershipRPCGameMode);
AownershipRPCGameMode::~AownershipRPCGameMode() {}
// ********** End Class AownershipRPCGameMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCGameMode_h__Script_ownershipRPC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AownershipRPCGameMode, AownershipRPCGameMode::StaticClass, TEXT("AownershipRPCGameMode"), &Z_Registration_Info_UClass_AownershipRPCGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AownershipRPCGameMode), 1079889266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCGameMode_h__Script_ownershipRPC_290576217(TEXT("/Script/ownershipRPC"),
	Z_CompiledInDeferFile_FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCGameMode_h__Script_ownershipRPC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCGameMode_h__Script_ownershipRPC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
