#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace VanillaComplexAliasBlockUtils::Stone {
// NOLINTBEGIN
// symbol: ?getComplexAliasCallback@Stone@VanillaComplexAliasBlockUtils@@YA?AV?$function@$$A6APEBVBlock@@H@Z@std@@XZ
MCAPI std::function<class Block const*(int)> getComplexAliasCallback();

// symbol:
// ?getSplitStates@Stone@VanillaComplexAliasBlockUtils@@YA?AV?$vector@USplitBlock@RemovedStateCollection@BlockLegacy@@V?$allocator@USplitBlock@RemovedStateCollection@BlockLegacy@@@std@@@std@@XZ
MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getSplitStates();
// NOLINTEND

}; // namespace VanillaComplexAliasBlockUtils::Stone
