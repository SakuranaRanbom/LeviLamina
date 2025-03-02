#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class Trade1Ingredient1ContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    Trade1Ingredient1ContainerValidation& operator=(Trade1Ingredient1ContainerValidation const&);
    Trade1Ingredient1ContainerValidation(Trade1Ingredient1ContainerValidation const&);
    Trade1Ingredient1ContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Trade1Ingredient1ContainerValidation@@UEAA@XZ
    virtual ~Trade1Ingredient1ContainerValidation() = default;

    // vIndex: 1, symbol:
    // ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
    virtual bool
    isValidSlotForContainer(class ContainerScreenContext const&, class Container const& container, int slot) const;

    // vIndex: 2, symbol:
    // ?isItemAllowedInSlot@Trade1Ingredient1ContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
    virtual bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const& item, int) const;

    // vIndex: 3, symbol: ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
    virtual int getAvailableSetCount(int slot, class ItemStackBase const& item) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool canItemMoveToContainer(class ItemStackBase const& item) const;

    // vIndex: 7, symbol: ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
    virtual bool canDestroy(class ContainerScreenContext const&) const;

    // vIndex: 8, symbol: ?getContainerOffset@Trade1Ingredient1ContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
    virtual int getContainerOffset(class ContainerScreenContext const&) const;

    // vIndex: 9, symbol: ?getContainerSize@ContainerValidationBase@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
    virtual int getContainerSize(class ContainerScreenContext const&, class Container const& container) const;

    // symbol: ??0Trade1Ingredient1ContainerValidation@@QEAA@_N@Z
    MCAPI explicit Trade1Ingredient1ContainerValidation(bool);

    // NOLINTEND
};
