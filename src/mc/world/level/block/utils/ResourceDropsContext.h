#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

struct ResourceDropsContext {
public:
    // prevent constructor by default
    ResourceDropsContext& operator=(ResourceDropsContext const&);
    ResourceDropsContext(ResourceDropsContext const&);
    ResourceDropsContext();

public:
    // NOLINTBEGIN
    // symbol: ??0ResourceDropsContext@@QEAA@MAEBVItemStack@@AEBVBlockSource@@@Z
    MCAPI ResourceDropsContext(float explosionRadius, class ItemStack const&, class BlockSource const& region);

    // symbol: ??0ResourceDropsContext@@QEAA@MAEBVItemStack@@AEAVILevel@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI ResourceDropsContext(
        float explosionRadius,
        class ItemStack const&,
        class ILevel& level,
        DimensionType dimensionType
    );

    // symbol: ?getRandom@ResourceDropsContext@@QEBAAEAVRandom@@XZ
    MCAPI class Random& getRandom() const;

    // NOLINTEND
};
