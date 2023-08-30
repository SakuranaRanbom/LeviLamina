#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MonumentRoomFitter {

public:
    // prevent constructor by default
    MonumentRoomFitter& operator=(MonumentRoomFitter const&) = delete;
    MonumentRoomFitter(MonumentRoomFitter const&)            = delete;
    MonumentRoomFitter()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fits\@FitDoubleXYRoom\@\@UEBA_NAEBVRoomDefinition\@\@\@Z
     */
    virtual bool fits(class RoomDefinition const&) const = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?create\@FitDoubleXYRoom\@\@UEAA?AV?$unique_ptr\@VOceanMonumentPiece\@\@U?$default_delete\@VOceanMonumentPiece\@\@\@std\@\@\@std\@\@AEAHV?$shared_ptr\@VRoomDefinition\@\@\@3\@AEAVRandom\@\@\@Z
     */
    virtual std::unique_ptr<class OceanMonumentPiece>
    create(int32_t&, std::shared_ptr<class RoomDefinition>, class Random&) = 0;
    // NOLINTEND
};
