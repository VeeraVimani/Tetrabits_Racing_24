// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tetrabits_Racing_25 : ModuleRules
{
	public Tetrabits_Racing_25(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore" });
	}
}
