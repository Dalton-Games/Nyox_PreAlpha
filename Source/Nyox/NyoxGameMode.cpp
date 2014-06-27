

#include "Nyox.h"
#include "NyoxGameMode.h"
#include "NyoxPlayerController.h"

ANyoxGameMode::ANyoxGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ANyoxPlayerController::StaticClass();
}


