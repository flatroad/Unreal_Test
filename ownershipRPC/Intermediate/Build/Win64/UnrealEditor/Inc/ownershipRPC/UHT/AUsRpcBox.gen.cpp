// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AUsRpcBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAUsRpcBox() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
OWNERSHIPRPC_API UClass* Z_Construct_UClass_AAUsRpcBox();
OWNERSHIPRPC_API UClass* Z_Construct_UClass_AAUsRpcBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_ownershipRPC();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAUsRpcBox Function Client_Notify ****************************************
struct AUsRpcBox_eventClient_Notify_Parms
{
	FString Msg;
};
static FName NAME_AAUsRpcBox_Client_Notify = FName(TEXT("Client_Notify"));
void AAUsRpcBox::Client_Notify(const FString& Msg)
{
	AUsRpcBox_eventClient_Notify_Parms Parms;
	Parms.Msg=Msg;
	UFunction* Func = FindFunctionChecked(NAME_AAUsRpcBox_Client_Notify);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AAUsRpcBox_Client_Notify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AUsRpcBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAUsRpcBox_Client_Notify_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUsRpcBox_eventClient_Notify_Parms, Msg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAUsRpcBox_Client_Notify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAUsRpcBox_Client_Notify_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAUsRpcBox_Client_Notify_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAUsRpcBox_Client_Notify_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAUsRpcBox, nullptr, "Client_Notify", Z_Construct_UFunction_AAUsRpcBox_Client_Notify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAUsRpcBox_Client_Notify_Statics::PropPointers), sizeof(AUsRpcBox_eventClient_Notify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAUsRpcBox_Client_Notify_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAUsRpcBox_Client_Notify_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AUsRpcBox_eventClient_Notify_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAUsRpcBox_Client_Notify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAUsRpcBox_Client_Notify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAUsRpcBox::execClient_Notify)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_Notify_Implementation(Z_Param_Msg);
	P_NATIVE_END;
}
// ********** End Class AAUsRpcBox Function Client_Notify ******************************************

// ********** Begin Class AAUsRpcBox Function Server_DoSomething ***********************************
static FName NAME_AAUsRpcBox_Server_DoSomething = FName(TEXT("Server_DoSomething"));
void AAUsRpcBox::Server_DoSomething()
{
	UFunction* Func = FindFunctionChecked(NAME_AAUsRpcBox_Server_DoSomething);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AAUsRpcBox_Server_DoSomething_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AUsRpcBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAUsRpcBox_Server_DoSomething_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAUsRpcBox, nullptr, "Server_DoSomething", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAUsRpcBox_Server_DoSomething_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAUsRpcBox_Server_DoSomething_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AAUsRpcBox_Server_DoSomething()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAUsRpcBox_Server_DoSomething_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAUsRpcBox::execServer_DoSomething)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DoSomething_Implementation();
	P_NATIVE_END;
}
// ********** End Class AAUsRpcBox Function Server_DoSomething *************************************

// ********** Begin Class AAUsRpcBox ***************************************************************
void AAUsRpcBox::StaticRegisterNativesAAUsRpcBox()
{
	UClass* Class = AAUsRpcBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_Notify", &AAUsRpcBox::execClient_Notify },
		{ "Server_DoSomething", &AAUsRpcBox::execServer_DoSomething },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAUsRpcBox;
UClass* AAUsRpcBox::GetPrivateStaticClass()
{
	using TClass = AAUsRpcBox;
	if (!Z_Registration_Info_UClass_AAUsRpcBox.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AUsRpcBox"),
			Z_Registration_Info_UClass_AAUsRpcBox.InnerSingleton,
			StaticRegisterNativesAAUsRpcBox,
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
	return Z_Registration_Info_UClass_AAUsRpcBox.InnerSingleton;
}
UClass* Z_Construct_UClass_AAUsRpcBox_NoRegister()
{
	return AAUsRpcBox::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAUsRpcBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AUsRpcBox.h" },
		{ "ModuleRelativePath", "Public/AUsRpcBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AUsRpcBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AUsRpcBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSnapshot_MetaData[] = {
		{ "ModuleRelativePath", "Public/AUsRpcBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerSnapshot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAUsRpcBox_Client_Notify, "Client_Notify" }, // 1881030933
		{ &Z_Construct_UFunction_AAUsRpcBox_Server_DoSomething, "Server_DoSomething" }, // 1170698921
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAUsRpcBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAUsRpcBox_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAUsRpcBox, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAUsRpcBox_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAUsRpcBox, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAUsRpcBox_Statics::NewProp_OwnerSnapshot = { "OwnerSnapshot", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAUsRpcBox, OwnerSnapshot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerSnapshot_MetaData), NewProp_OwnerSnapshot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAUsRpcBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAUsRpcBox_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAUsRpcBox_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAUsRpcBox_Statics::NewProp_OwnerSnapshot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAUsRpcBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAUsRpcBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ownershipRPC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAUsRpcBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAUsRpcBox_Statics::ClassParams = {
	&AAUsRpcBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAUsRpcBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAUsRpcBox_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAUsRpcBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AAUsRpcBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAUsRpcBox()
{
	if (!Z_Registration_Info_UClass_AAUsRpcBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAUsRpcBox.OuterSingleton, Z_Construct_UClass_AAUsRpcBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAUsRpcBox.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AAUsRpcBox::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_OwnerSnapshot(TEXT("OwnerSnapshot"));
	const bool bIsValid = true
		&& Name_OwnerSnapshot == ClassReps[(int32)ENetFields_Private::OwnerSnapshot].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAUsRpcBox"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AAUsRpcBox);
AAUsRpcBox::~AAUsRpcBox() {}
// ********** End Class AAUsRpcBox *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h__Script_ownershipRPC_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAUsRpcBox, AAUsRpcBox::StaticClass, TEXT("AAUsRpcBox"), &Z_Registration_Info_UClass_AAUsRpcBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAUsRpcBox), 4205650624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h__Script_ownershipRPC_805538646(TEXT("/Script/ownershipRPC"),
	Z_CompiledInDeferFile_FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h__Script_ownershipRPC_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h__Script_ownershipRPC_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
