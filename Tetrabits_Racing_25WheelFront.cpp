// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tetrabits_Racing_25WheelFront.h"
#include "UObject/ConstructorHelpers.h"

UTetrabits_Racing_25WheelFront::UTetrabits_Racing_25WheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}