// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Project_doroneTarget : TargetRules
{
	public Project_doroneTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V7;

		ExtraModuleNames.AddRange( new string[] { "Project_dorone" } );
	}
}
