#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class CompoundTag : public ::Tag {

public:
    // prevent constructor by default
    CompoundTag& operator=(CompoundTag const&) = delete;
    CompoundTag(CompoundTag const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?write\@CompoundTag\@\@UEBAXAEAVIDataOutput\@\@\@Z
     */
    virtual void write(class IDataOutput&) const;
    /**
     * @vftbl 3
     * @symbol ?load\@CompoundTag\@\@UEAAXAEAVIDataInput\@\@\@Z
     */
    virtual void load(class IDataInput&);
    /**
     * @vftbl 4
     * @symbol
     * ?toString\@CompoundTag\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @vftbl 5
     * @symbol ?getId\@CompoundTag\@\@UEBA?AW4Type\@Tag\@\@XZ
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl 6
     * @symbol ?equals\@CompoundTag\@\@UEBA_NAEBVTag\@\@\@Z
     */
    virtual bool equals(class Tag const&) const;
    /**
     * @vftbl 8
     * @symbol
     * ?print\@CompoundTag\@\@UEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVPrintStream\@\@\@Z
     */
    virtual void print(std::string const&, class PrintStream&) const;
    /**
     * @vftbl 9
     * @symbol ?copy\@CompoundTag\@\@UEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl 10
     * @symbol ?hash\@CompoundTag\@\@UEBA_KXZ
     */
    virtual uint64_t hash() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOUNDTAG
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CompoundTag();
#endif
    /**
     * @symbol ??0CompoundTag\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI CompoundTag(class CompoundTag&&);
    /**
     * @symbol ??0CompoundTag\@\@QEAA\@XZ
     */
    MCAPI CompoundTag();
    /**
     * @symbol ?append\@CompoundTag\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void append(class CompoundTag const&);
    /**
     * @symbol
     * ?begin\@CompoundTag\@\@QEBA?AV?$_Tree_const_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::_Tree_const_iterator<
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const, class CompoundTagVariant>>>>
    begin() const;
    /**
     * @symbol ?clear\@CompoundTag\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol
     * ?clone\@CompoundTag\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> clone() const;
    /**
     * @symbol
     * ?contains\@CompoundTag\@\@QEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@W4Type\@Tag\@\@\@Z
     */
    MCAPI bool contains(std::string_view, enum class Tag::Type) const;
    /**
     * @symbol ?contains\@CompoundTag\@\@QEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool contains(std::string_view) const;
    /**
     * @symbol ?deepCopy\@CompoundTag\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void deepCopy(class CompoundTag const&);
    /**
     * @symbol
     * ?end\@CompoundTag\@\@QEBA?AV?$_Tree_const_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::_Tree_const_iterator<
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const, class CompoundTagVariant>>>>
    end() const;
    /**
     * @symbol ?get\@CompoundTag\@\@QEAAPEAVTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Tag* get(std::string_view);
    /**
     * @symbol ?get\@CompoundTag\@\@QEBAPEBVTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Tag const* get(std::string_view) const;
    /**
     * @symbol ?getBoolean\@CompoundTag\@\@QEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool getBoolean(std::string_view) const;
    /**
     * @symbol ?getByte\@CompoundTag\@\@QEBAEV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI uint8_t getByte(std::string_view) const;
    /**
     * @symbol
     * ?getByteArray\@CompoundTag\@\@QEBAAEBUTagMemoryChunk\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI struct TagMemoryChunk const& getByteArray(std::string_view) const;
    /**
     * @symbol
     * ?getByteTag\@CompoundTag\@\@QEAAPEAVByteTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ByteTag* getByteTag(std::string_view);
    /**
     * @symbol ?getCompound\@CompoundTag\@\@QEBAPEBV1\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class CompoundTag const* getCompound(std::string_view) const;
    /**
     * @symbol ?getCompound\@CompoundTag\@\@QEAAPEAV1\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class CompoundTag* getCompound(std::string_view);
    /**
     * @symbol ?getFloat\@CompoundTag\@\@QEBAMV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI float getFloat(std::string_view) const;
    /**
     * @symbol ?getInt\@CompoundTag\@\@QEBAHV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI int32_t getInt(std::string_view) const;
    /**
     * @symbol ?getInt64\@CompoundTag\@\@QEBA_JV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI int64_t getInt64(std::string_view) const;
    /**
     * @symbol
     * ?getInt64Tag\@CompoundTag\@\@QEBAPEBVInt64Tag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Int64Tag const* getInt64Tag(std::string_view) const;
    /**
     * @symbol
     * ?getInt64Tag\@CompoundTag\@\@QEAAPEAVInt64Tag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Int64Tag* getInt64Tag(std::string_view);
    /**
     * @symbol
     * ?getIntTag\@CompoundTag\@\@QEAAPEAVIntTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class IntTag* getIntTag(std::string_view);
    /**
     * @symbol
     * ?getIntTag\@CompoundTag\@\@QEBAPEBVIntTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class IntTag const* getIntTag(std::string_view) const;
    /**
     * @symbol ?getList\@CompoundTag\@\@QEBAPEBVListTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ListTag const* getList(std::string_view) const;
    /**
     * @symbol ?getList\@CompoundTag\@\@QEAAPEAVListTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ListTag* getList(std::string_view);
    /**
     * @symbol ?getShort\@CompoundTag\@\@QEBAFV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI int16_t getShort(std::string_view) const;
    /**
     * @symbol
     * ?getShortTag\@CompoundTag\@\@QEBAPEBVShortTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class ShortTag const* getShortTag(std::string_view) const;
    /**
     * @symbol
     * ?getString\@CompoundTag\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@3\@\@Z
     */
    MCAPI std::string const& getString(std::string_view) const;
    /**
     * @symbol
     * ?getStringTag\@CompoundTag\@\@QEBAPEBVStringTag\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class StringTag const* getStringTag(std::string_view) const;
    /**
     * @symbol ?isEmpty\@CompoundTag\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ??4CompoundTag\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CompoundTag& operator=(class CompoundTag&&);
    /**
     * @symbol
     * ?put\@CompoundTag\@\@QEAAAEAVTag\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV2\@\@Z
     */
    MCAPI class Tag& put(std::string, class Tag&&);
    /**
     * @symbol
     * ?put\@CompoundTag\@\@QEAAPEAVTag\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI class Tag* put(std::string, std::unique_ptr<class Tag>);
    /**
     * @symbol
     * ?putBoolean\@CompoundTag\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void putBoolean(std::string, bool);
    /**
     * @symbol
     * ?putByte\@CompoundTag\@\@QEAAAEAEV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@E\@Z
     */
    MCAPI uint8_t& putByte(std::string, uint8_t);
    /**
     * @symbol
     * ?putByteArray\@CompoundTag\@\@QEAAAEAUTagMemoryChunk\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U2\@\@Z
     */
    MCAPI struct TagMemoryChunk& putByteArray(std::string, struct TagMemoryChunk);
    /**
     * @symbol
     * ?putCompound\@CompoundTag\@\@QEAAAEAV1\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V1\@\@Z
     */
    MCAPI class CompoundTag& putCompound(std::string, class CompoundTag);
    /**
     * @symbol
     * ?putCompound\@CompoundTag\@\@QEAAPEAV1\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI class CompoundTag* putCompound(std::string, std::unique_ptr<class CompoundTag>);
    /**
     * @symbol
     * ?putFloat\@CompoundTag\@\@QEAAAEAMV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@Z
     */
    MCAPI float& putFloat(std::string, float);
    /**
     * @symbol
     * ?putInt\@CompoundTag\@\@QEAAAEAHV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI int32_t& putInt(std::string, int32_t);
    /**
     * @symbol
     * ?putInt64\@CompoundTag\@\@QEAAAEA_JV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_J\@Z
     */
    MCAPI int64_t& putInt64(std::string, int64_t);
    /**
     * @symbol
     * ?putShort\@CompoundTag\@\@QEAAAEAFV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@F\@Z
     */
    MCAPI int16_t& putShort(std::string, int16_t);
    /**
     * @symbol
     * ?putString\@CompoundTag\@\@QEAAAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V23\@0\@Z
     */
    MCAPI std::string& putString(std::string, std::string);
    /**
     * @symbol
     * ?rawView\@CompoundTag\@\@QEBAAEBV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@U?$less\@X\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VCompoundTagVariant\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::map<
        std::string,
        class CompoundTagVariant,
        std::less<void>,
        std::allocator<std::pair<std::string const, class CompoundTagVariant>>> const&
    rawView() const;
    /**
     * @symbol ?remove\@CompoundTag\@\@QEAA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool remove(std::string_view);
    /**
     * @symbol
     * ?rename\@CompoundTag\@\@QEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI void rename(std::string_view, std::string);
    /**
     * @symbol ?size\@CompoundTag\@\@QEBA_KXZ
     */
    MCAPI uint64_t size() const;
    // NOLINTEND
};
