#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class ClientCacheStatusPacket : public ::Packet {
public:
    bool mEnabled; // this+0x30

    // prevent constructor by default
    ClientCacheStatusPacket& operator=(ClientCacheStatusPacket const&);
    ClientCacheStatusPacket(ClientCacheStatusPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClientCacheStatusPacket@@UEAA@XZ
    virtual ~ClientCacheStatusPacket() = default;

    // vIndex: 1, symbol: ?getId@ClientCacheStatusPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@ClientCacheStatusPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@ClientCacheStatusPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 7, symbol:
    // ?_read@ClientCacheStatusPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0ClientCacheStatusPacket@@QEAA@XZ
    MCAPI ClientCacheStatusPacket();

    // NOLINTEND
};
