// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JocNebun : ModuleRules
{
	public JocNebun(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
