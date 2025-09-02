// Copyright Epic Games, Inc. All Rights Reserved.


#include "ownershipRPCPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "Blueprint/UserWidget.h"
#include "ownershipRPC.h"
#include "Kismet/GameplayStatics.h"
#include "AUsRpcBox.h"
#include "Widgets/Input/SVirtualJoystick.h"

void AownershipRPCPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// only spawn touch controls on local player controllers
	UE_LOG(LogTemp, Warning, TEXT("[PC=%s] BeginPlay Local=%d Auth=%d NetMode=%d"),
		*GetName(), IsLocalPlayerController(), HasAuthority(), (int32)GetWorld()->GetNetMode());

	if (SVirtualJoystick::ShouldDisplayTouchInterface() && IsLocalPlayerController())
	{
		// spawn the mobile controls widget
		MobileControlsWidget = CreateWidget<UUserWidget>(this, MobileControlsWidgetClass);

		if (MobileControlsWidget)
		{
			// add the controls to the player screen
			MobileControlsWidget->AddToPlayerScreen(0);

		} else {

			UE_LOG(LogownershipRPC, Error, TEXT("Could not spawn mobile controls widget."));

		}

	}
}

void AownershipRPCPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// only add IMCs for local player controllers
	if (IsLocalPlayerController())
	{
		// Add Input Mapping Contexts
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}

			// only add these IMCs if we're not using mobile touch input
			if (!SVirtualJoystick::ShouldDisplayTouchInterface())
			{
				for (UInputMappingContext* CurrentContext : MobileExcludedMappingContexts)
				{
					Subsystem->AddMappingContext(CurrentContext, 0);
				}
			}
		}
	}

	InputComponent->BindKey(EKeys::O, IE_Pressed, this, &AownershipRPCPlayerController::Cmd_CallBoxBpc);
	InputComponent->BindKey(EKeys::K, IE_Pressed, this, &AownershipRPCPlayerController::Cmd_ClaimBoxToMe);        // Owner=PC(나)
	InputComponent->BindKey(EKeys::J, IE_Pressed, this, &AownershipRPCPlayerController::Cmd_ClaimBoxToMyPawn);     // Owner=내 Pawn
	InputComponent->BindKey(EKeys::One, IE_Pressed, this, &AownershipRPCPlayerController::Cmd_ToggleOnlyRelevantToOwner); // '1'
	InputComponent->BindKey(EKeys::Two, IE_Pressed, this, &AownershipRPCPlayerController::Cmd_ToggleUseOwnerRelevancy);   // '2'
}

static AAUsRpcBox* FindBox(UWorld* World)
{
	TArray<AActor*> Found;
	UGameplayStatics::GetAllActorsOfClass(World, AAUsRpcBox::StaticClass(), Found);
	return (Found.Num() ? Cast<AAUsRpcBox>(Found[0]) : nullptr);
}

void AownershipRPCPlayerController::Cmd_CallBoxBpc()
{
	if (HasAuthority()) { // 서버(호스트)면 막기
		UE_LOG(LogTemp, Warning, TEXT("[HOST %s] O input is client only"), *GetName());
		return;
	}
	if (AAUsRpcBox* Box = FindBox(GetWorld()))
	{
		UE_LOG(LogTemp, Warning, TEXT(
			"[CLIENT %s] Try Server_DoSomething (IsLocal=%d)"),
			*GetName(), 
			IsLocalPlayerController()
		);
		Box->Server_DoSomething();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[CLIENT %s] AAUsRpcBox not found"), *GetName());
	}
}

void AownershipRPCPlayerController::Cmd_ClaimBoxToMe()
{
	Server_ClaimBoxToMe();
}

void AownershipRPCPlayerController::Cmd_ClaimBoxToMyPawn()
{
	Server_ClaimBoxToMyPawn();
}

void AownershipRPCPlayerController::Cmd_ToggleOnlyRelevantToOwner()
{
	Server_ToggleOnlyRelevantToOwner();
}

void AownershipRPCPlayerController::Cmd_ToggleUseOwnerRelevancy()
{
	Server_ToggleUseOwnerRelevancy();
}

void AownershipRPCPlayerController::Server_DumpBoxState_Implementation()
{
	if (auto* Box = FindBox(GetWorld())) {
		UE_LOG(LogTemp, Warning, TEXT("[DUMP] Owner=%s  OnlyRel=%d  UseOwnerRel=%d"),
			*GetNameSafe(Box->GetOwner()),
			Box->bOnlyRelevantToOwner ? 1 : 0,
			Box->bNetUseOwnerRelevancy ? 1 : 0);
	}
}

void AownershipRPCPlayerController::Server_ClaimBoxToMe_Implementation()
{
	if (AAUsRpcBox* Box = FindBox(GetWorld()))
	{
		Box->SetOwner(this);
		Box->OwnerSnapshot = this;
		Box->SetNetDormancy(DORM_Awake);
		Box->ForceNetUpdate();
		UE_LOG(LogTemp, Warning, TEXT("[SERVER] Box owner -> %s (PC)"), *GetName());
	}
}

void AownershipRPCPlayerController::Server_ClaimBoxToMyPawn_Implementation()
{
	if (AAUsRpcBox* Box = FindBox(GetWorld()))
	{
		APawn* P = GetPawn();
		Box->SetOwner(P ? Cast<AActor>(P) : this);
		Box->OwnerSnapshot = P ? Cast<AActor>(P) : Cast<AActor>(this);
		Box->SetNetDormancy(DORM_Awake);
		Box->ForceNetUpdate();

		UE_LOG(LogTemp, Warning, TEXT("[SERVER] Box owner -> %s (Pawn=%s)"), *GetName(), *GetNameSafe(P));
	}
}

void AownershipRPCPlayerController::Server_ToggleOnlyRelevantToOwner_Implementation()
{
	if (AAUsRpcBox* Box = FindBox(GetWorld()))
	{
		Box->bOnlyRelevantToOwner = !Box->bOnlyRelevantToOwner;
		Box->SetNetDormancy(DORM_Awake);
		Box->ForceNetUpdate();

		UE_LOG(LogTemp, Warning, TEXT(
			"[SERVER] bOnlyRelevantToOwner -> %s"),
			Box->bOnlyRelevantToOwner ? TEXT("true") : TEXT("false")
		);
	}
}

void AownershipRPCPlayerController::Server_ToggleUseOwnerRelevancy_Implementation()
{
	if (AAUsRpcBox* Box = FindBox(GetWorld()))
	{
		Box->bNetUseOwnerRelevancy = !Box->bNetUseOwnerRelevancy;
		Box->SetNetDormancy(DORM_Awake);
		Box->ForceNetUpdate();

		UE_LOG(LogTemp, Warning, TEXT("[SERVER] bNetUseOwnerRelevancy -> %s"),
			Box->bNetUseOwnerRelevancy ? TEXT("true") : TEXT("false"));
	}
}
