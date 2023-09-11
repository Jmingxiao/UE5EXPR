// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5exp : ModuleRules
{
	public UE5exp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
