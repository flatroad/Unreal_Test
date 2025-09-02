// Fill out your copyright notice in the Description page of Project Settings.


#include "AUsRpcBox.h"
#include "Net/UnrealNetwork.h"
#include "Engine/CollisionProfile.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SceneComponent.h"

// Sets default values
AAUsRpcBox::AAUsRpcBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SetReplicateMovement(false);

	bReplicates = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

	Mesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	Mesh->SetGenerateOverlapEvents(false);
	Mesh->SetMobility(EComponentMobility::Movable);

	Mesh->SetIsReplicated(true);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BoxAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
	
	if (BoxAsset.Succeeded())
	{
		Mesh->SetStaticMesh(BoxAsset.Object);
		Mesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
		Mesh->SetRelativeLocation(FVector::ZeroVector);
	}
}

void AAUsRpcBox::Server_DoSomething_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Server_DoSomething from Owner:%s, CallerOk"), *GetNameSafe(GetOwner()));
	Client_Notify(TEXT("Server received your call"));
}

void AAUsRpcBox::Client_Notify_Implementation(const FString& Msg)
{
	UE_LOG(LogTemp, Warning, TEXT("[CLIENT] %s (Box=%s)"), *Msg, *GetName());
}

void AAUsRpcBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AAUsRpcBox, OwnerSnapshot);
}
