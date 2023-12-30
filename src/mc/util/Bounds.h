#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Bounds {
public:
    // Bounds inner types define
    enum class Option {};

public:
    // prevent constructor by default
    Bounds& operator=(Bounds const&);
    Bounds(Bounds const&);
    Bounds();

public:
    // NOLINTBEGIN
    // symbol: ??0Bounds@@QEAA@AEBVChunkPos@@0@Z
    MCAPI Bounds(class ChunkPos const& min, class ChunkPos const& max);

    // symbol: ??0Bounds@@QEAA@AEBVBlockPos@@0HW4Option@0@@Z
    MCAPI
    Bounds(class BlockPos const& minBlock, class BlockPos const& maxBlock, int side, enum Bounds::Option buildOption);

    // symbol: ??0Bounds@@QEAA@AEBVBlockPos@@HHFF@Z
    MCAPI Bounds(class BlockPos const&, int, int, short, short);

    // NOLINTEND
};
