#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ComplexItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"
#include "mc/world/level/saveddata/maps/MapItemSavedData.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class MapItem : public ::ComplexItem {
public:
    // prevent constructor by default
    MapItem& operator=(MapItem const&);
    MapItem(MapItem const&);
    MapItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MapItem@@UEAA@XZ
    virtual ~MapItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 46, symbol:
    // ?appendFormattedHovertext@MapItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 81, symbol:
    // ?buildDescriptionId@MapItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 86, symbol: ?inventoryTick@MapItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool
    inventoryTick(class ItemStack& itemStack, class Level& level, class Actor& owner, int slot, bool selected) const;

    // vIndex: 87, symbol: ?refreshedInContainer@MapItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@@Z
    virtual void refreshedInContainer(class ItemStackBase const& stack, class Level& level) const;

    // vIndex: 91, symbol: ?fixupCommon@MapItem@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z
    virtual void fixupCommon(class ItemStackBase& stack, class Level& level) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 100, symbol: ?hasSameRelevantUserData@MapItem@@UEBA_NAEBVItemStackBase@@0@Z
    virtual bool hasSameRelevantUserData(class ItemStackBase const& stack, class ItemStackBase const& other) const;

    // vIndex: 102, symbol:
    // ?setIconInfo@MapItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 103, symbol: ?getIconInfo@MapItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& itemStack, int, bool) const;

    // vIndex: 118, symbol:
    // ?getUpdatePacket@MapItem@@UEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVItemStack@@AEAVLevel@@AEAVActor@@@Z
    virtual std::unique_ptr<class Packet>
    getUpdatePacket(class ItemStack const& itemStack, class Level& level, class Actor& player) const;

    // symbol: ??0MapItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI MapItem(std::string const& itemName, short itemId);

    // symbol: ?blockTick@MapItem@@QEBAXAEAVItemStack@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void blockTick(class ItemStack& itemStack, class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?update@MapItem@@QEBAXAEAVLevel@@AEAVActor@@AEAVMapItemSavedData@@@Z
    MCAPI void update(class Level& level, class Actor& player, class MapItemSavedData& map) const;

    // symbol: ?doesDisplayPlayerMarkers@MapItem@@SA_NAEBVItemStack@@@Z
    MCAPI static bool doesDisplayPlayerMarkers(class ItemStack const& item);

    // symbol: ?getMapId@MapItem@@SA?AUActorUniqueID@@PEBVCompoundTag@@@Z
    MCAPI static struct ActorUniqueID getMapId(class CompoundTag const* tag);

    // symbol: ?markForRegeneration@MapItem@@SAXAEAVItemStackBase@@@Z
    MCAPI static void markForRegeneration(class ItemStackBase&);

    // symbol: ?renderBiomePreviewMap@MapItem@@SAXAEAVDimension@@AEAVMapItemSavedData@@@Z
    MCAPI static void renderBiomePreviewMap(class Dimension& dimension, class MapItemSavedData& data);

    // symbol:
    // ?sampleMapData@MapItem@@SA_NAEAVBlockSource@@HAEBVBlockPos@@1HHPEAV?$vector@UMapSample@@V?$allocator@UMapSample@@@std@@@std@@PEAVMapItemSavedData@@PEAV?$vector@UClientTerrainPixel@@V?$allocator@UClientTerrainPixel@@@std@@@5@@Z
    MCAPI static bool
    sampleMapData(class BlockSource& region, int blocksPerTexel, class BlockPos const& worldOrigin, class BlockPos const& updateOrigin, int imageWidth, int imageHeight, std::vector<struct MapSample>* output, class MapItemSavedData* mapData, std::vector<struct ClientTerrainPixel>*);

    // symbol:
    // ?serializeMapData@MapItem@@SAXAEBV?$vector@UMapSample@@V?$allocator@UMapSample@@@std@@@std@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static void serializeMapData(std::vector<struct MapSample> const& mapSamples, std::string& output);

    // symbol: ?setItemInstanceInfo@MapItem@@SAXAEAVItemStackBase@@AEAVMapItemSavedData@@@Z
    MCAPI static void setItemInstanceInfo(class ItemStackBase& item, class MapItemSavedData& savedData);

    // symbol: ?setMapNameIndex@MapItem@@SAXAEAVItemStack@@H@Z
    MCAPI static void setMapNameIndex(class ItemStack& item, int mapNameIndex);

    // symbol: ?TAG_MAP_INIT@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_INIT;

    // symbol: ?TAG_MAP_NAME_INDEX@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_NAME_INDEX;

    // symbol: ?TAG_MAP_PLAYER_DISPLAY@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_PLAYER_DISPLAY;

    // symbol: ?TAG_MAP_REGENERATE@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_REGENERATE;

    // symbol: ?TAG_MAP_SCALE@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_SCALE;

    // symbol: ?TAG_MAP_SCALING@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_SCALING;

    // symbol: ?TAG_MAP_UUID@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_UUID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_scheduleMapChunkRendering@MapItem@@CAXAEAVDimension@@AEBVMapItemSavedData@@UChunkBounds@3@V?$shared_ptr@_N@std@@@Z
    MCAPI static void _scheduleMapChunkRendering(
        class Dimension&                     dimension,
        class MapItemSavedData const&        original,
        struct MapItemSavedData::ChunkBounds bb,
        std::shared_ptr<bool>                chunksRefCount
    );

    // NOLINTEND
};
