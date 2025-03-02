#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class ProjectileSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    ProjectileSystem& operator=(ProjectileSystem const&);
    ProjectileSystem(ProjectileSystem const&);
    ProjectileSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ProjectileSystem@@UEAA@XZ
    virtual ~ProjectileSystem() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?tick@ProjectileSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // symbol: ?_tickProjectileComponent@ProjectileSystem@@SAXPEAVActor@@AEAVProjectileComponent@@@Z
    MCAPI static void _tickProjectileComponent(class Actor* actor, class ProjectileComponent&);

    // NOLINTEND
};
