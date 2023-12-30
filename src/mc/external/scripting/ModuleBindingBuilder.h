#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class Release; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ConstantFactory; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
namespace Scripting { struct FunctionBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct ObjectFactory; }
namespace Scripting { struct TaggedBinding; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

class ModuleBindingBuilder {
public:
    // prevent constructor by default
    ModuleBindingBuilder& operator=(ModuleBindingBuilder const&);
    ModuleBindingBuilder(ModuleBindingBuilder const&);
    ModuleBindingBuilder();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ModuleBindingBuilder@Scripting@@QEAA@AEBUUUID@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVersion@1@@Z
    MCAPI ModuleBindingBuilder(struct Scripting::UUID const&, std::string const&, struct Scripting::Version const&);

    // symbol:
    // ?build@ModuleBindingBuilder@Scripting@@QEAA?AUModuleBinding@2@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI struct Scripting::ModuleBinding build(bool, std::vector<std::string> const&);

    // symbol: ?classBinding@ModuleBindingBuilder@Scripting@@QEAAAEAV12@$$QEAUClassBinding@2@@Z
    MCAPI class Scripting::ModuleBindingBuilder& classBinding(struct Scripting::ClassBinding&&);

    // symbol:
    // ?dependency@ModuleBindingBuilder@Scripting@@QEAAAEAV12@AEBV?$vector@UModuleDescriptor@Scripting@@V?$allocator@UModuleDescriptor@Scripting@@@std@@@std@@@Z
    MCAPI class Scripting::ModuleBindingBuilder& dependency(std::vector<struct Scripting::ModuleDescriptor> const&);

    // symbol: ?enumBinding@ModuleBindingBuilder@Scripting@@QEAAAEAV12@$$QEAUEnumBinding@2@@Z
    MCAPI class Scripting::ModuleBindingBuilder& enumBinding(struct Scripting::EnumBinding&&);

    // symbol: ?errorBinding@ModuleBindingBuilder@Scripting@@QEAAAEAV12@$$QEAUErrorBinding@2@@Z
    MCAPI class Scripting::ModuleBindingBuilder& errorBinding(struct Scripting::ErrorBinding&&);

    // symbol: ?getModuleDescriptor@ModuleBindingBuilder@Scripting@@QEBA?AUModuleDescriptor@2@XZ
    MCAPI struct Scripting::ModuleDescriptor getModuleDescriptor() const;

    // symbol: ?interfaceBinding@ModuleBindingBuilder@Scripting@@QEAAAEAV12@$$QEAUInterfaceBinding@2@@Z
    MCAPI class Scripting::ModuleBindingBuilder& interfaceBinding(struct Scripting::InterfaceBinding&&);

    // symbol: ??1ModuleBindingBuilder@Scripting@@QEAA@XZ
    MCAPI ~ModuleBindingBuilder();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_allowed@ModuleBindingBuilder@Scripting@@AEBA_NAEBV?$vector@VRelease@Scripting@@V?$allocator@VRelease@Scripting@@@std@@@std@@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI bool _allowed(std::vector<class Scripting::Release> const&, bool, std::vector<std::string> const&) const;

    // symbol:
    // ?_filterClassBindings@ModuleBindingBuilder@Scripting@@AEBA?AV?$vector@UClassBinding@Scripting@@V?$allocator@UClassBinding@Scripting@@@std@@@std@@AEBV34@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI std::vector<struct Scripting::ClassBinding>
    _filterClassBindings(std::vector<struct Scripting::ClassBinding> const&, bool, std::vector<std::string> const&)
        const;

    // symbol:
    // ?_filterEnumBindings@ModuleBindingBuilder@Scripting@@AEBA?AV?$vector@UEnumBinding@Scripting@@V?$allocator@UEnumBinding@Scripting@@@std@@@std@@AEBV34@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI std::vector<struct Scripting::EnumBinding>
    _filterEnumBindings(std::vector<struct Scripting::EnumBinding> const&, bool, std::vector<std::string> const&) const;

    // symbol:
    // ?_filterEnumValueMap@ModuleBindingBuilder@Scripting@@AEBA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vmeta_any@entt@@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vmeta_any@entt@@@std@@@2@@std@@AEBV?$vector@UConstantFactory@Scripting@@V?$allocator@UConstantFactory@Scripting@@@std@@@4@AEBV34@@Z
    MCAPI std::vector<std::pair<std::string, entt::meta_any>>
    _filterEnumValueMap(std::vector<struct Scripting::ConstantFactory> const&, std::vector<std::pair<std::string, entt::meta_any>> const&)
        const;

    // symbol:
    // ?_filterErrorBindings@ModuleBindingBuilder@Scripting@@AEBA?AV?$vector@UErrorBinding@Scripting@@V?$allocator@UErrorBinding@Scripting@@@std@@@std@@AEBV34@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI std::vector<struct Scripting::ErrorBinding>
    _filterErrorBindings(std::vector<struct Scripting::ErrorBinding> const&, bool, std::vector<std::string> const&)
        const;

    // symbol:
    // ?_filterInterfaceBindings@ModuleBindingBuilder@Scripting@@AEBA?AV?$vector@UInterfaceBinding@Scripting@@V?$allocator@UInterfaceBinding@Scripting@@@std@@@std@@AEBV34@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI std::vector<struct Scripting::InterfaceBinding>
    _filterInterfaceBindings(std::vector<struct Scripting::InterfaceBinding> const&, bool, std::vector<std::string> const&)
        const;

    // symbol:
    // ?_isClassTypeInList@ModuleBindingBuilder@Scripting@@AEBA_NVmeta_type@entt@@AEBV?$vector@UClassBinding@Scripting@@V?$allocator@UClassBinding@Scripting@@@std@@@std@@@Z
    MCAPI bool _isClassTypeInList(entt::meta_type, std::vector<struct Scripting::ClassBinding> const&) const;

    // symbol:
    // ?_orderClassBindingsByDependency@ModuleBindingBuilder@Scripting@@AEBA?AV?$vector@UClassBinding@Scripting@@V?$allocator@UClassBinding@Scripting@@@std@@@std@@AEAV34@@Z
    MCAPI std::vector<struct Scripting::ClassBinding>
          _orderClassBindingsByDependency(std::vector<struct Scripting::ClassBinding>&) const;

    // symbol:
    // ?_assertClassMemberSymbolDoesntExist@ModuleBindingBuilder@Scripting@@CA_NAEBUClassBinding@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUTaggedBinding@2@@Z
    MCAPI static bool
    _assertClassMemberSymbolDoesntExist(struct Scripting::ClassBinding const&, std::string const&, struct Scripting::TaggedBinding const&);

    // symbol:
    // ?_assertEnumMemberSymbolDoesntExist@ModuleBindingBuilder@Scripting@@CA_NAEBUEnumBinding@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUTaggedBinding@2@@Z
    MCAPI static bool
    _assertEnumMemberSymbolDoesntExist(struct Scripting::EnumBinding const&, std::string const&, struct Scripting::TaggedBinding const&);

    // symbol:
    // ?_assertModuleMemberSymbolDoesntExist@ModuleBindingBuilder@Scripting@@CA_NAEBUModuleBinding@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUTaggedBinding@2@@Z
    MCAPI static bool
    _assertModuleMemberSymbolDoesntExist(struct Scripting::ModuleBinding const&, std::string const&, struct Scripting::TaggedBinding const&);

    // symbol: ?_validateClassConstructors@ModuleBindingBuilder@Scripting@@CAXAEBUModuleBinding@2@@Z
    MCAPI static void _validateClassConstructors(struct Scripting::ModuleBinding const&);

    // symbol: ?_validateModuleNames@ModuleBindingBuilder@Scripting@@CAXAEBUModuleBinding@2@@Z
    MCAPI static void _validateModuleNames(struct Scripting::ModuleBinding const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mEmptyConstantFactory@ModuleBindingBuilder@Scripting@@0UConstantFactory@2@A
    MCAPI static struct Scripting::ConstantFactory mEmptyConstantFactory;

    // symbol: ?mEmptyFunctionBinding@ModuleBindingBuilder@Scripting@@0UFunctionBinding@2@A
    MCAPI static struct Scripting::FunctionBinding mEmptyFunctionBinding;

    // symbol: ?mEmptyObjectFactory@ModuleBindingBuilder@Scripting@@0UObjectFactory@2@A
    MCAPI static struct Scripting::ObjectFactory mEmptyObjectFactory;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mEmptyConstantFactory() { return mEmptyConstantFactory; }

    static auto& $mEmptyFunctionBinding() { return mEmptyFunctionBinding; }

    static auto& $mEmptyObjectFactory() { return mEmptyObjectFactory; }

    // NOLINTEND
};

}; // namespace Scripting
