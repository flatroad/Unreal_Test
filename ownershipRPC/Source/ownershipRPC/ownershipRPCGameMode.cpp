// Copyright Epic Games, Inc. All Rights Reserved.

#include "ownershipRPCGameMode.h"
#include "AUsRpcBox.h"
#include "Kismet/GameplayStatics.h"

void AownershipRPCGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{
		FActorSpawnParameters P;
		UWorld* World = GetWorld();
		AAUsRpcBox* Box = World->SpawnActor<AAUsRpcBox>(AAUsRpcBox::StaticClass(), FVector(680.0, 120.0, 460.0), FRotator::ZeroRotator, P);
		// ������ : ���� ������ 0�� PlayerController (Listen Server���� ȣ��Ʈ Ŭ���̾�Ʈ).
		APlayerController* PC0 = UGameplayStatics::GetPlayerController(World, 0);
		Box->SetOwner(PC0);
		Box->OwnerSnapshot = PC0;
	}
}
