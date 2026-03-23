// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lab02 : ModuleRules
{
	public Lab02(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
