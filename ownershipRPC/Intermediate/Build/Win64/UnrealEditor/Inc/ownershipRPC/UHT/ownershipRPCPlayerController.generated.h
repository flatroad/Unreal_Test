// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ownershipRPCPlayerController.h"

#ifdef OWNERSHIPRPC_ownershipRPCPlayerController_generated_h
#error "ownershipRPCPlayerController.generated.h already included, missing '#pragma once' in ownershipRPCPlayerController.h"
#endif
#define OWNERSHIPRPC_ownershipRPCPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AownershipRPCPlayerController ********************************************
#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_DumpBoxState_Implementation(); \
	virtual void Server_ToggleUseOwnerRelevancy_Implementation(); \
	virtual void Server_ToggleOnlyRelevantToOwner_Implementation(); \
	virtual void Server_ClaimBoxToMyPawn_Implementation(); \
	virtual void Server_ClaimBoxToMe_Implementation(); \
	DECLARE_FUNCTION(execServer_DumpBoxState); \
	DECLARE_FUNCTION(execServer_ToggleUseOwnerRelevancy); \
	DECLARE_FUNCTION(execServer_ToggleOnlyRelevantToOwner); \
	DECLARE_FUNCTION(execServer_ClaimBoxToMyPawn); \
	DECLARE_FUNCTION(execServer_ClaimBoxToMe); \
	DECLARE_FUNCTION(execCmd_ToggleUseOwnerRelevancy); \
	DECLARE_FUNCTION(execCmd_ToggleOnlyRelevantToOwner); \
	DECLARE_FUNCTION(execCmd_ClaimBoxToMyPawn); \
	DECLARE_FUNCTION(execCmd_ClaimBoxToMe); \
	DECLARE_FUNCTION(execCmd_CallBoxBpc);


#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCPlayerController_h_19_CALLBACK_WRAPPERS
OWNERSHIPRPC_API UClass* Z_Construct_UClass_AownershipRPCPlayerController_NoRegister();

#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAownershipRPCPlayerController(); \
	friend struct Z_Construct_UClass_AownershipRPCPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWNERSHIPRPC_API UClass* Z_Construct_UClass_AownershipRPCPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AownershipRPCPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ownershipRPC"), Z_Construct_UClass_AownershipRPCPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AownershipRPCPlayerController)


#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AownershipRPCPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AownershipRPCPlayerController(AownershipRPCPlayerController&&) = delete; \
	AownershipRPCPlayerController(const AownershipRPCPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AownershipRPCPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AownershipRPCPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AownershipRPCPlayerController) \
	NO_API virtual ~AownershipRPCPlayerController();


#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCPlayerController_h_16_PROLOG
#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCPlayerController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCPlayerController_h_19_CALLBACK_WRAPPERS \
	FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AownershipRPCPlayerController;

// ********** End Class AownershipRPCPlayerController **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
