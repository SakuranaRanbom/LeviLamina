#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {
class Value;
}
class CommandRegistry;
template <typename>
class CommandSelector;
template <typename>
class WildcardCommandSelector;

namespace Bedrock {

template <typename Category>
class typeid_t {
public:
    constexpr static ushort count = 0;

    ushort value;
    [[nodiscard]] constexpr typeid_t(typeid_t const& id) : value(id.value) {}
    [[nodiscard]] constexpr typeid_t(ushort value) : value(value) {}
    [[nodiscard]] inline typeid_t() : value(++_getCounter()) {}

    static std::atomic_ushort& _getCounter() {

        // MCAPI // error C2201
        static std::atomic_ushort storage;

        return storage;
    }
};

template <>
LLAPI std::atomic_ushort& typeid_t<CommandRegistry>::_getCounter();

template <typename Category, typename Type>
typeid_t<Category> type_id() {
    static typeid_t<Category> id{};
    return id;
}

}; // namespace Bedrock

// clang-format off
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, int>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, bool>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, float>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, DimensionType>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, std::string>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, std::unique_ptr<class Command>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, std::vector<class BlockStateCommandParam>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandBlockName>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandFilePath>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandItem>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandMessage>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandPosition>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandPositionFloat>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandRawText>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandSelector<class Actor>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandSelector<class Player>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class CommandWildcardInt>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class Json::Value>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class MobEffect const*>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class RelativeFloat>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, class WildcardCommandSelector<class Actor>>();
MCTAPI Bedrock::typeid_t<CommandRegistry> Bedrock::type_id<CommandRegistry, struct ActorDefinitionIdentifier const*>();
// clang-format on
