#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace MobJumpSystemImpl {
// NOLINTBEGIN
// symbol: ?doDecrementNoJumpDelaySystem@MobJumpSystemImpl@@YAXAEAUMobJumpComponent@@@Z
MCAPI void doDecrementNoJumpDelaySystem(struct MobJumpComponent&);

// symbol:
// ?doMobJumpSystem@MobJumpSystemImpl@@YAXAEBVStrictEntityContext@@V?$Optional@$$CBVJumpControlComponent@@@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UPlayerComponentFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@USquidFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UWasAutoJumpingFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UInWaterFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UCanStandOnSnowFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UHasLightweightFamilyFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UImmuneToLavaDragFlag@@@@@@AEBUAABBShapeComponent@@AEBUSwimAmountComponent@@AEBUMobEffectsComponent@@AEBUSubBBsComponent@@AEBUSynchedActorDataComponent@@AEAUMobJumpComponent@@AEAUStateVectorComponent@@V?$EntityModifier@V?$FlagComponent@UJumpFromGroundRequestFlag@@@@@@AEBVIConstBlockSource@@@Z
MCAPI void doMobJumpSystem(
    class StrictEntityContext const&                 context,
    class Optional<class JumpControlComponent const> jumpControlComponent,
    class Optional<class FlagComponent<struct OnGroundFlag> const>,
    class Optional<class FlagComponent<struct PlayerComponentFlag> const>,
    class Optional<class FlagComponent<struct SquidFlag> const>,
    class Optional<class FlagComponent<struct WasAutoJumpingFlag> const>,
    class Optional<class FlagComponent<struct InWaterFlag> const>,
    class Optional<class FlagComponent<struct CanStandOnSnowFlag> const>,
    class Optional<class FlagComponent<struct HasLightweightFamilyFlag> const>,
    class Optional<class FlagComponent<struct ImmuneToLavaDragFlag> const>,
    struct AABBShapeComponent const&,
    struct SwimAmountComponent const&,
    struct MobEffectsComponent const&,
    struct SubBBsComponent const&,
    struct SynchedActorDataComponent const&,
    struct MobJumpComponent&,
    struct StateVectorComponent&,
    class EntityModifier<class FlagComponent<struct JumpFromGroundRequestFlag>> mod,
    class IConstBlockSource const&                                              region
);

// symbol: ?doResetNoJumpDelaySystem@MobJumpSystemImpl@@YAXAEBVStrictEntityContext@@AEAUMobJumpComponent@@@Z
MCAPI void doResetNoJumpDelaySystem(class StrictEntityContext const&, struct MobJumpComponent&);
// NOLINTEND

}; // namespace MobJumpSystemImpl
