///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2017, Intel Corporation
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated 
// documentation files (the "Software"), to deal in the Software without restriction, including without limitation 
// the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in all copies or substantial portions of 
// the Software.
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
// SOFTWARE.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

