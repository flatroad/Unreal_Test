// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AUsRpcBox.h"

#ifdef OWNERSHIPRPC_AUsRpcBox_generated_h
#error "AUsRpcBox.generated.h already included, missing '#pragma once' in AUsRpcBox.h"
#endif
#define OWNERSHIPRPC_AUsRpcBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAUsRpcBox ***************************************************************
#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_Notify_Implementation(const FString& Msg); \
	virtual void Server_DoSomething_Implementation(); \
	DECLARE_FUNCTION(execClient_Notify); \
	DECLARE_FUNCTION(execServer_DoSomething);


#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h_12_CALLBACK_WRAPPERS
OWNERSHIPRPC_API UClass* Z_Construct_UClass_AAUsRpcBox_NoRegister();

#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAUsRpcBox(); \
	friend struct Z_Construct_UClass_AAUsRpcBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWNERSHIPRPC_API UClass* Z_Construct_UClass_AAUsRpcBox_NoRegister(); \
public: \
	DECLARE_CLASS2(AAUsRpcBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ownershipRPC"), Z_Construct_UClass_AAUsRpcBox_NoRegister) \
	DECLARE_SERIALIZER(AAUsRpcBox) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwnerSnapshot=NETFIELD_REP_START, \
		NETFIELD_REP_END=OwnerSnapshot	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAUsRpcBox(AAUsRpcBox&&) = delete; \
	AAUsRpcBox(const AAUsRpcBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAUsRpcBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAUsRpcBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAUsRpcBox) \
	NO_API virtual ~AAUsRpcBox();


#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h_9_PROLOG
#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h_12_CALLBACK_WRAPPERS \
	FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAUsRpcBox;

// ********** End Class AAUsRpcBox *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_Public_AUsRpcBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
