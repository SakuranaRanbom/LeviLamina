#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ArmorStand : public ::Mob {
public:
    // ArmorStand inner types declare
    // clang-format off
    struct Pose;
    // clang-format on

    // ArmorStand inner types define
    struct Pose {
    public:
        // prevent constructor by default
        Pose& operator=(Pose const&);
        Pose(Pose const&);
        Pose();
    };

public:
    // prevent constructor by default
    ArmorStand& operator=(ArmorStand const&);
    ArmorStand(ArmorStand const&);
    ArmorStand();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1ArmorStand@@UEAA@XZ
    virtual ~ArmorStand() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 29, symbol: ?normalTick@ArmorStand@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: ?getShadowRadius@ArmorStand@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 51, symbol: ?isPickable@ArmorStand@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 78, symbol: ?isInvulnerableTo@ArmorStand@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 139, symbol: ?getInteraction@ArmorStand@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
    virtual bool getInteraction(class Player& player, class ActorInteraction& interaction, class Vec3 const& location);

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 146, symbol: ?kill@ArmorStand@@UEAAXXZ
    virtual void kill();

    // vIndex: 147, symbol: ?die@ArmorStand@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 160, symbol: ?updateEntitySpecificMolangVariables@ArmorStand@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@ArmorStand@@UEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float, bool, bool);

    // vIndex: 164, symbol: ?readAdditionalSaveData@ArmorStand@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 165, symbol: ?addAdditionalSaveData@ArmorStand@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 178, symbol: ?pushActors@ArmorStand@@UEAAXXZ
    virtual void pushActors();

    // symbol: ?interactPreventDefault@ArmorStand@@UEAA_NXZ
    MCVAPI bool interactPreventDefault();

    // symbol: ??0ArmorStand@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ArmorStand(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_causeDamage@ArmorStand@@AEAAXM@Z
    MCAPI void _causeDamage(float dmg);

    // symbol: ?_destroyWithEffects@ArmorStand@@AEAAXPEAVActor@@@Z
    MCAPI void _destroyWithEffects(class Actor*);

    // symbol: ?_dropHeldItems@ArmorStand@@AEAAXXZ
    MCAPI void _dropHeldItems();

    // symbol: ?_dropHeldItemsAndResource@ArmorStand@@AEAAXXZ
    MCAPI void _dropHeldItemsAndResource();

    // symbol: ?_dropItem@ArmorStand@@AEAAXAEBVItemStack@@@Z
    MCAPI void _dropItem(class ItemStack const& item);

    // symbol: ?_trySwapItem@ArmorStand@@AEAA_NAEAVPlayer@@W4EquipmentSlot@Legacy@Puv@@@Z
    MCAPI bool _trySwapItem(class Player&, ::Puv::Legacy::EquipmentSlot);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?POSE_ATHENA@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;

    // symbol: ?POSE_BRANDISH@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;

    // symbol: ?POSE_CANCAN_A@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;

    // symbol: ?POSE_CANCAN_B@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;

    // symbol: ?POSE_DEFAULT@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;

    // symbol: ?POSE_ENTERTAIN@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;

    // symbol: ?POSE_HERO@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_HERO;

    // symbol: ?POSE_HONOR@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_HONOR;

    // symbol: ?POSE_RIPOSTE@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;

    // symbol: ?POSE_SALUTE@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;

    // symbol: ?POSE_SOLEMN@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;

    // symbol: ?POSE_ZERO_ROTATION@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;

    // symbol: ?POSE_ZOMBIE@ArmorStand@@0UPose@1@B
    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;

    // symbol: ?STAND_POSES@ArmorStand@@0PAPEBUPose@1@A
    MCAPI static struct ArmorStand::Pose const* STAND_POSES[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $POSE_ATHENA() { return POSE_ATHENA; }

    static auto& $POSE_BRANDISH() { return POSE_BRANDISH; }

    static auto& $POSE_CANCAN_A() { return POSE_CANCAN_A; }

    static auto& $POSE_CANCAN_B() { return POSE_CANCAN_B; }

    static auto& $POSE_DEFAULT() { return POSE_DEFAULT; }

    static auto& $POSE_ENTERTAIN() { return POSE_ENTERTAIN; }

    static auto& $POSE_HERO() { return POSE_HERO; }

    static auto& $POSE_HONOR() { return POSE_HONOR; }

    static auto& $POSE_RIPOSTE() { return POSE_RIPOSTE; }

    static auto& $POSE_SALUTE() { return POSE_SALUTE; }

    static auto& $POSE_SOLEMN() { return POSE_SOLEMN; }

    static auto& $POSE_ZERO_ROTATION() { return POSE_ZERO_ROTATION; }

    static auto& $POSE_ZOMBIE() { return POSE_ZOMBIE; }

    static auto& $STAND_POSES() { return STAND_POSES; }

    // NOLINTEND
};
