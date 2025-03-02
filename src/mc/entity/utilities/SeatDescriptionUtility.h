#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SeatDescriptionUtility {
public:
    // prevent constructor by default
    SeatDescriptionUtility& operator=(SeatDescriptionUtility const&);
    SeatDescriptionUtility(SeatDescriptionUtility const&);
    SeatDescriptionUtility();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getSeatDescriptionOfPassenger@SeatDescriptionUtility@@SAAEBUSeatDescription@@AEBV?$vector@USeatDescription@@V?$allocator@USeatDescription@@@std@@@std@@HH@Z
    MCAPI static struct SeatDescription const&
    getSeatDescriptionOfPassenger(std::vector<struct SeatDescription> const&, int, int);

    // symbol:
    // ?setValuesToSynchedActorData@SeatDescriptionUtility@@SAXVSynchedActorDataWriter@@AEBVVec3@@AEBUSeatDescription@@M@Z
    MCAPI static void setValuesToSynchedActorData(
        class SynchedActorDataWriter,
        class Vec3 const&             offset,
        struct SeatDescription const& seat,
        float
    );

    // NOLINTEND
};
