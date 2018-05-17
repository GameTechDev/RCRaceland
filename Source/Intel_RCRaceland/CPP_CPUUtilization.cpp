// Fill out your copyright notice in the Description page of Project Settings.

#include "Intel_RCRaceland.h"
#include "CPP_CPUUtilization.h"


// Sets default values
ACPP_CPUUtilization::ACPP_CPUUtilization()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_CPUUtilization::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_CPUUtilization::Tick( float DeltaTime )
{
	Super::Tick(DeltaTime);

	//Get the actor location for X, Y, and Z values
	FVector NewLocation = GetActorLocation();

	//CPU status from the GetCPUTime function. Values range from 0-100+, with values 100 and above being optimal
	FCPUTime CPUStatus = FPlatformTime::GetCPUTime();

	//Set the X position of the actor as the CPUStatus
	NewLocation.X = CPUStatus.CPUTimePct;
	SetActorLocation(NewLocation);

}

