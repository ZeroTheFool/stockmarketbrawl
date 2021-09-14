// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class stockmarketbrawl2 : ModuleRules
{
	public stockmarketbrawl2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
