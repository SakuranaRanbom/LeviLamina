#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"
#include "mc/deps/core/utility/MultidimensionalArray.h"
#include "mc/world/level/levelgen/WorldGenerator.h"

class TheEndGenerator : public ::WorldGenerator {
public:
    std::unique_ptr<PerlinNoise>        mLPerlinNoise1;    // this+0x68
    std::unique_ptr<PerlinNoise>        mLPerlinNoise2;    // this+0x70
    std::unique_ptr<PerlinNoise>        mPerlinNoise1;     // this+0x78
    std::unique_ptr<SimplexNoise>       mIslandNoise;      // this+0x80
    std::unique_ptr<PerlinSimplexNoise> mMaterialAdjNoise; // this+0x88
    // Bedrock::Threading::InstancedThreadLocal<TheEndGenerator::ThreadData>
    char                              generatorHelpersPool[168]; // this+0x90
    std::unique_ptr<FixedBiomeSource> mBiomeSource;              // this+0x138

    // prevent constructor by default
    TheEndGenerator& operator=(TheEndGenerator const&);
    TheEndGenerator(TheEndGenerator const&);
    TheEndGenerator();

public:
    // NOLINTBEGIN
    // vIndex: 45, symbol:
    // ?decorateWorldGenLoadChunk@TheEndGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockVolumeTarget@@AEAVRandom@@AEBVChunkPos@@@Z
    virtual void decorateWorldGenLoadChunk(
        class Biome&             biome,
        class LevelChunk&        lc,
        class BlockVolumeTarget& target,
        class Random&            random,
        class ChunkPos const&    pos
    ) const;

    // vIndex: 46, symbol:
    // ?decorateWorldGenPostProcess@TheEndGenerator@@MEBAXAEAVBiome@@AEAVLevelChunk@@AEAVBlockSource@@AEAVRandom@@@Z
    virtual void decorateWorldGenPostProcess(
        class Biome&       biome,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    // vIndex: 42, symbol: ?findSpawnPosition@TheEndGenerator@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos findSpawnPosition() const;

    // vIndex: 39, symbol: ?getBiomeArea@TheEndGenerator@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
    virtual class BiomeArea getBiomeArea(class BoundingBox const& area, uint scale) const;

    // vIndex: 40, symbol: ?getBiomeSource@TheEndGenerator@@UEBAAEBVBiomeSource@@XZ
    virtual class BiomeSource const& getBiomeSource() const;

    // vIndex: 41, symbol: ?getBlockVolumeDimensions@TheEndGenerator@@UEBA?AUBlockVolumeDimensions@WorldGenerator@@XZ
    virtual struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;

    // symbol: ?getPreliminarySurfaceLevel@TheEndGenerator@@UEBA?AV?$optional@F@std@@V?$DividedPos2d@$03@@@Z
    virtual std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4> worldQuartPos) const;

    // vIndex: 11, symbol: ?loadChunk@TheEndGenerator@@UEAAXAEAVLevelChunk@@_N@Z
    virtual void loadChunk(class LevelChunk& levelChunk, bool forceImmediateReplacementDataLoad);

    // vIndex: 9, symbol: ?postProcess@TheEndGenerator@@UEAA_NAEAVChunkViewSource@@@Z
    virtual bool postProcess(class ChunkViewSource& neighborhood);

    // vIndex: 12, symbol: ?postProcessMobsAt@TheEndGenerator@@UEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
    virtual void
    postProcessMobsAt(class BlockSource& blockSource, int chunkWestBlock, int chunkNorthBlock, class Random& random);

    // vIndex: 38, symbol:
    // ?prepareAndComputeHeights@TheEndGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAV?$vector@FV?$allocator@F@std@@@std@@_NH@Z
    virtual void prepareAndComputeHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        std::vector<short>&   ZXheights,
        bool                  factorInBeardsAndShavers,
        int                   skipTopN
    );

    // vIndex: 37, symbol: ?prepareHeights@TheEndGenerator@@UEAAXAEAVBlockVolume@@AEBVChunkPos@@_N@Z
    virtual void prepareHeights(class BlockVolume& box, class ChunkPos const& chunkPos, bool factorInBeardsAndShavers);

    // symbol:
    // ??0TheEndGenerator@@QEAA@AEAVDimension@@IPEBVBiome@@V?$unique_ptr@VStructureFeatureRegistry@@U?$default_delete@VStructureFeatureRegistry@@@std@@@std@@@Z
    MCAPI
    TheEndGenerator(class Dimension& dimension, uint seed, class Biome const*, std::unique_ptr<class StructureFeatureRegistry>);

    // symbol: ?buildSurfaces@TheEndGenerator@@QEAAXAEAVBlockVolume@@AEBVChunkPos@@AEAVLevelChunk@@@Z
    MCAPI void buildSurfaces(class BlockVolume& box, class ChunkPos const& chunkPos, class LevelChunk& levelChunk);

    // symbol:
    // ?generateDensityCellsForChunk@TheEndGenerator@@QEBA?AV?$MultidimensionalArray@M$02$02$0CB@@Util@@AEBVChunkPos@@@Z
    MCAPI class Util::MultidimensionalArray<float, 3, 3, 33> generateDensityCellsForChunk(class ChunkPos const& chunkPos
    ) const;

    // symbol: ?isOutsideCentralIslandArea@TheEndGenerator@@SA_NAEBVChunkPos@@@Z
    MCAPI static bool isOutsideCentralIslandArea(class ChunkPos const& chunkPos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_prepareHeights@TheEndGenerator@@AEAAXAEAVBlockVolume@@AEBVChunkPos@@_NPEAV?$vector@FV?$allocator@F@std@@@std@@H@Z
    MCAPI void _prepareHeights(
        class BlockVolume&    box,
        class ChunkPos const& chunkPos,
        bool                  factorInBeardsAndShavers,
        std::vector<short>*,
        int
    );

    // symbol: ?getIslandHeightValue@TheEndGenerator@@AEBAMHHHH@Z
    MCAPI float getIslandHeightValue(int chunkX, int chunkZ, int, int) const;

    // NOLINTEND
};
