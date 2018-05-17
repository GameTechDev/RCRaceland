// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Intel_RCRacelandEditorTarget : TargetRules
{
	public Intel_RCRacelandEditorTarget(TargetInfo Target) : base( Target )
	{
		Type = TargetType.Editor;

        ExtraModuleNames.Add("Intel_RCRaceland");
    }
}
