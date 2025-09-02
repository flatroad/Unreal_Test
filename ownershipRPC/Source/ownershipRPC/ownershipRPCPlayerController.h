// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ownershipRPCPlayerController.generated.h"

class UInputMappingContext;
class UUserWidget;

/**
 *  Basic PlayerController class for a third person game
 *  Manages input mappings
 */
UCLASS()
class AownershipRPCPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	/** Input Mapping Contexts */
	UPROPERTY(EditAnywhere, Category ="Input|Input Mappings")
	TArray<UInputMappingContext*> DefaultMappingContexts;

	/** Input Mapping Contexts */
	UPROPERTY(EditAnywhere, Category="Input|Input Mappings")
	TArray<UInputMappingContext*> MobileExcludedMappingContexts;

	/** Mobile controls widget to spawn */
	UPROPERTY(EditAnywhere, Category="Input|Touch Controls")
	TSubclassOf<UUserWidget> MobileControlsWidgetClass;

	/** Pointer to the mobile controls widget */
	TObjectPtr<UUserWidget> MobileControlsWidget;

	/** Gameplay initialization */
	virtual void BeginPlay() override;

	/** Input mapping context setup */
	virtual void SetupInputComponent() override;

	/** 클라 로컬 함수(키 입력에서 호출) */
	UFUNCTION()
	void Cmd_CallBoxBpc();
	UFUNCTION()
	void Cmd_ClaimBoxToMe();
	UFUNCTION()
	void Cmd_ClaimBoxToMyPawn();
	UFUNCTION()
	void Cmd_ToggleOnlyRelevantToOwner();
	UFUNCTION()
	void Cmd_ToggleUseOwnerRelevancy();

	UFUNCTION(Server, Reliable)
	void Server_ClaimBoxToMe();
	UFUNCTION(Server, Reliable)
	void Server_ClaimBoxToMyPawn();
	UFUNCTION(Server, Reliable)
	void Server_ToggleOnlyRelevantToOwner();
	UFUNCTION(Server, Reliable)
	void Server_ToggleUseOwnerRelevancy();

	UFUNCTION(Server, Reliable) 
	void Server_DumpBoxState();
							   
};
