#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"

class StructurePoolBlockPredicateBlockMatchRandom : public ::IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateBlockMatchRandom& operator=(StructurePoolBlockPredicateBlockMatchRandom const&);
    StructurePoolBlockPredicateBlockMatchRandom(StructurePoolBlockPredicateBlockMatchRandom const&);
    StructurePoolBlockPredicateBlockMatchRandom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StructurePoolBlockPredicateBlockMatchRandom@@UEAA@XZ
    virtual ~StructurePoolBlockPredicateBlockMatchRandom() = default;

    // vIndex: 1, symbol: ?test@StructurePoolBlockPredicateBlockMatchRandom@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
    virtual bool test(class Block const& block, class Randomize& randomize) const;

    // vIndex: 2, symbol: ?test@StructurePoolBlockPredicateBlockMatchRandom@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
    virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize& randomize) const;

    // symbol: ??0StructurePoolBlockPredicateBlockMatchRandom@@QEAA@AEBVBlock@@M@Z
    MCAPI StructurePoolBlockPredicateBlockMatchRandom(class Block const& block, float probability);

    // NOLINTEND
};
