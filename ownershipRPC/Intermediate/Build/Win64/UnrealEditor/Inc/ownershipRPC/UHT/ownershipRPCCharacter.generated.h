// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ownershipRPCCharacter.h"

#ifdef OWNERSHIPRPC_ownershipRPCCharacter_generated_h
#error "ownershipRPCCharacter.generated.h already included, missing '#pragma once' in ownershipRPCCharacter.h"
#endif
#define OWNERSHIPRPC_ownershipRPCCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AownershipRPCCharacter ***************************************************
#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


OWNERSHIPRPC_API UClass* Z_Construct_UClass_AownershipRPCCharacter_NoRegister();

#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAownershipRPCCharacter(); \
	friend struct Z_Construct_UClass_AownershipRPCCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWNERSHIPRPC_API UClass* Z_Construct_UClass_AownershipRPCCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AownershipRPCCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ownershipRPC"), Z_Construct_UClass_AownershipRPCCharacter_NoRegister) \
	DECLARE_SERIALIZER(AownershipRPCCharacter)


#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AownershipRPCCharacter(AownershipRPCCharacter&&) = delete; \
	AownershipRPCCharacter(const AownershipRPCCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AownershipRPCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AownershipRPCCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AownershipRPCCharacter) \
	NO_API virtual ~AownershipRPCCharacter();


#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCCharacter_h_21_PROLOG
#define FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AownershipRPCCharacter;

// ********** End Class AownershipRPCCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ragi2_Documents_Unreal_Projects_experiment_ownershipRPC_Source_ownershipRPC_ownershipRPCCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
