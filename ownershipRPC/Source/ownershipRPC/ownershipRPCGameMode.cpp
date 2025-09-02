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
		// 소유자 : 서버 로컬의 0번 PlayerController (Listen Server에서 호스트 클라이언트).
		APlayerController* PC0 = UGameplayStatics::GetPlayerController(World, 0);
		Box->SetOwner(PC0);
		Box->OwnerSnapshot = PC0;
	}
}
