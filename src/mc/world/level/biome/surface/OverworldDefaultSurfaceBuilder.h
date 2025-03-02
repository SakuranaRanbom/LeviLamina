#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ISurfaceBuilder;
// clang-format on

namespace VanillaSurfaceBuilders {

class OverworldDefaultSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // prevent constructor by default
    OverworldDefaultSurfaceBuilder& operator=(OverworldDefaultSurfaceBuilder const&);
    OverworldDefaultSurfaceBuilder(OverworldDefaultSurfaceBuilder const&);
    OverworldDefaultSurfaceBuilder();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OverworldDefaultSurfaceBuilder@VanillaSurfaceBuilders@@UEAA@XZ
    virtual ~OverworldDefaultSurfaceBuilder() = default;

    // vIndex: 1, symbol: ?init@OverworldDefaultSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVEntityContext@@I@Z
    virtual void init(class EntityContext& entity, uint);

    // vIndex: 2, symbol:
    // ?buildSurfaceAt@OverworldDefaultSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
