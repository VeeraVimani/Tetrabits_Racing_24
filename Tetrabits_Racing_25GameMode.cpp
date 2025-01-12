// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tetrabits_Racing_25GameMode.h"
#include "Tetrabits_Racing_25PlayerController.h"

ATetrabits_Racing_25GameMode::ATetrabits_Racing_25GameMode()
{
	PlayerControllerClass = ATetrabits_Racing_25PlayerController::StaticClass();
}
