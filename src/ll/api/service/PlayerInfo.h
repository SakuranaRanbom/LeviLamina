#pragma once

#include <memory>

#include "ll/api/base/Macro.h"

#include "mc/deps/core/mce/UUID.h"

namespace ll::service {
class PlayerInfo {
    class Impl;
    std::unique_ptr<Impl> impl;

    struct PlayerInfoEntry {
        mce::UUID   uuid;
        std::string xuid;
        std::string name;
    };
    PlayerInfo();

public:
    LLAPI static PlayerInfo& getInstance();

    LLNDAPI optional_ref<PlayerInfoEntry const> fromUuid(mce::UUID) const;
    LLNDAPI optional_ref<PlayerInfoEntry const> fromXuid(std::string_view) const;
    LLNDAPI optional_ref<PlayerInfoEntry const> fromName(std::string_view) const;
};
} // namespace ll::service
