#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/world/components/FlagComponent.h"

namespace ServerMoveInputHandlerSystemUtils {
// NOLINTBEGIN
// symbol:
// ?_tickServerMoveInputHandler@ServerMoveInputHandlerSystemUtils@@YAXAEAVStrictEntityContext@@AEBUAbilitiesComponent@@AEBUServerPlayerCurrentMovementComponent@@AEAUClientInputLockComponent@@AEAUMoveInputComponent@@AEAUSynchedActorDataComponent@@AEAUVanillaClientGameplayComponent@@V?$Optional@$$CBUSneakingComponent@@@@V?$Optional@$$CBV?$FlagComponent@UInWaterFlag@@@@@@AEAV?$OptionalGlobal@$$CBVPlayerMovementSettingsComponent@@@@@Z
MCAPI void _tickServerMoveInputHandler(class StrictEntityContext&, struct AbilitiesComponent const&, struct ServerPlayerCurrentMovementComponent const&, struct ClientInputLockComponent&, struct MoveInputComponent&, struct SynchedActorDataComponent&, struct VanillaClientGameplayComponent&, class Optional<struct SneakingComponent const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class OptionalGlobal<class PlayerMovementSettingsComponent const>&);
// NOLINTEND

}; // namespace ServerMoveInputHandlerSystemUtils
