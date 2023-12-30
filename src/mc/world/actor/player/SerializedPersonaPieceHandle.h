#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class SerializedPersonaPieceHandle {
public:
    // prevent constructor by default
    SerializedPersonaPieceHandle(SerializedPersonaPieceHandle const&);
    SerializedPersonaPieceHandle();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0SerializedPersonaPieceHandle@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PieceType@persona@@VUUID@mce@@_N0@Z
    MCAPI SerializedPersonaPieceHandle(
        std::string const&      pieceId,
        enum persona::PieceType pieceType,
        class mce::UUID         packId,
        bool                    isDefaultPiece,
        std::string const&      productId
    );

    // symbol: ??4SerializedPersonaPieceHandle@@QEAAAEAV0@AEBV0@@Z
    MCAPI class SerializedPersonaPieceHandle& operator=(class SerializedPersonaPieceHandle const&);

    // NOLINTEND
};
