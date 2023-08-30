#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/server/commands/CommandBlockMode.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CommandBlock : public ::ActorBlock {

public:
    // prevent constructor by default
    CommandBlock& operator=(CommandBlock const&) = delete;
    CommandBlock(CommandBlock const&)            = delete;
    CommandBlock()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl 43
     * @symbol __unk_vfn_43
     */
    virtual void __unk_vfn_43();
    /**
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl 46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl 47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl 48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl 49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl 50
     * @symbol __unk_vfn_50
     */
    virtual void __unk_vfn_50();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 63
     * @symbol __unk_vfn_63
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl 75
     * @symbol ?onRedstoneUpdate\@CommandBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int32_t, bool) const;
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 81
     * @symbol ?setupRedstoneComponent\@CommandBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@CommandBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /**
     * @vftbl 105
     * @symbol ?asItemInstance\@CommandBlock\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 108
     * @symbol ?getPlacementBlock\@CommandBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uint8_t, class Vec3 const&, int32_t) const;
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl 124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl 126
     * @symbol ?getComparatorSignal\@CommandBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@E\@Z
     */
    virtual int32_t getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uint8_t) const;
    /**
     * @vftbl 128
     * @symbol __unk_vfn_128
     */
    virtual void __unk_vfn_128();
    /**
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl 143
     * @symbol ?getVariant\@CommandBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int32_t getVariant(class Block const&) const;
    /**
     * @vftbl 146
     * @symbol ?getMappedFace\@CommandBlock\@\@UEBAEEAEBVBlock\@\@\@Z
     */
    virtual uint8_t getMappedFace(uint8_t, class Block const&) const;
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153();
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 163
     * @symbol __unk_vfn_163
     */
    virtual void __unk_vfn_163();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 165
     * @symbol ?onPlace\@CommandBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 168
     * @symbol ?tick\@CommandBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 173
     * @symbol ?use\@CommandBlock\@\@UEBA_NAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool use(class Player&, class BlockPos const&, uint8_t) const;
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDBLOCK
    /**
     * @symbol ?canInstatick\@CommandBlock\@\@UEBA_NXZ
     */
    MCVAPI bool canInstatick() const;
    /**
     * @symbol ?hasComparatorSignal\@CommandBlock\@\@UEBA_NXZ
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @symbol ?isInteractiveBlock\@CommandBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol
     * ??0CommandBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4CommandBlockMode\@\@\@Z
     */
    MCAPI CommandBlock(std::string const&, int32_t, enum class CommandBlockMode);
    /**
     * @symbol ?execute\@CommandBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void execute(class BlockSource&, class BlockPos const&) const;
    /**
     * @symbol ?getMode\@CommandBlock\@\@QEBA?AW4CommandBlockMode\@\@XZ
     */
    MCAPI enum class CommandBlockMode getMode() const;
    /**
     * @symbol ?updateBlock\@CommandBlock\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@W4CommandBlockMode\@\@_N\@Z
     */
    MCAPI void updateBlock(class BlockSource&, class BlockPos const&, enum class CommandBlockMode, bool) const;
    /**
     * @symbol ?_getCommandBlockActor\@CommandBlock\@\@SAPEAVCommandBlockActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class CommandBlockActor* _getCommandBlockActor(class BlockSource&, class BlockPos const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_execute\@CommandBlock\@\@AEBAXAEAVBlockSource\@\@AEAVCommandBlockActor\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI void _execute(class BlockSource&, class CommandBlockActor&, class BlockPos const&, bool) const;
    /**
     * @symbol ?_executeChain\@CommandBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _executeChain(class BlockSource&, class BlockPos const&) const;
    /**
     * @symbol
     * ?_executeChainBlock\@CommandBlock\@\@AEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVCommandBlockActor\@\@_N\@Z
     */
    MCAPI bool _executeChainBlock(class BlockSource&, class BlockPos const&, class CommandBlockActor&, bool) const;
    /**
     * @symbol ?_installCircuit\@CommandBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI void _installCircuit(class BlockSource&, class BlockPos const&, bool) const;
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?mCBModeMap\@CommandBlock\@\@0PAHA
     */
    MCAPI static int32_t mCBModeMap[];
    // NOLINTEND
};
