// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Intel_RCRacelandTarget : TargetRules
{
	public Intel_RCRacelandTarget(TargetInfo Target) : base( Target )
	{
		Type = TargetType.Game;

        ExtraModuleNames.Add("Intel_RCRaceland");
	}
}
