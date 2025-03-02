#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileWriteAccess {
public:
    // prevent constructor by default
    IFileWriteAccess& operator=(IFileWriteAccess const&);
    IFileWriteAccess(IFileWriteAccess const&);
    IFileWriteAccess();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1IFileWriteAccess@@UEAA@XZ
    virtual ~IFileWriteAccess() = default;

    // vIndex: 1, symbol: ?fwrite@FileSystemFileWriteAccess@FileSystemFileAccess@@UEAA_KPEBX_K1PEAX@Z
    virtual uint64 fwrite(void const*, uint64, uint64, void*) = 0;

    // NOLINTEND
};
