// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ownershipRPC : ModuleRules
{
	public ownershipRPC(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ownershipRPC",
			"ownershipRPC/Variant_Platforming",
			"ownershipRPC/Variant_Platforming/Animation",
			"ownershipRPC/Variant_Combat",
			"ownershipRPC/Variant_Combat/AI",
			"ownershipRPC/Variant_Combat/Animation",
			"ownershipRPC/Variant_Combat/Gameplay",
			"ownershipRPC/Variant_Combat/Interfaces",
			"ownershipRPC/Variant_Combat/UI",
			"ownershipRPC/Variant_SideScrolling",
			"ownershipRPC/Variant_SideScrolling/AI",
			"ownershipRPC/Variant_SideScrolling/Gameplay",
			"ownershipRPC/Variant_SideScrolling/Interfaces",
			"ownershipRPC/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
