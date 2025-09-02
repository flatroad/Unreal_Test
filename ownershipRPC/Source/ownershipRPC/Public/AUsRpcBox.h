// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AUsRpcBox.generated.h"

UCLASS()
class OWNERSHIPRPC_API AAUsRpcBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAUsRpcBox();

	UFUNCTION(Server, Reliable)
	void Server_DoSomething();

	UFUNCTION(Client, Reliable)
		void Client_Notify(const FString& Msg);
protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<USceneComponent> Root;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> Mesh;

public:	
	UPROPERTY(Replicated)
	AActor* OwnerSnapshot = nullptr;

};
