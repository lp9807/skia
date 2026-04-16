/*
 * Copyright 2024 Google LLC
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef skgpu_graphite_FakeGpuPathAtlas_DEFINED
#define skgpu_graphite_FakeGpuPathAtlas_DEFINED

#include "src/gpu/graphite/PathAtlas.h"

#include "src/base/SkTInternalLList.h"
#include "src/core/SkTHash.h"
#include "src/gpu/AtlasTypes.h"
#include "src/gpu/RectanizerSkyline.h"
#include "src/gpu/ResourceKey.h"
#include "src/gpu/graphite/DrawAtlas.h"

#include <memory>

namespace skgpu::graphite {

class Device;
class DrawList;

/**
 * Base class for PathAtlas implementations that rasterize coverage masks on the GPU using compute
 * shaders.
 *
 * After a successful call to `recordDraws()`, the client is free to call `reset()` and start
 * adding new shapes for a future atlas render.
 */
class FakeGpuPathAtlas : public PathAtlas {
public:
    explicit FakeGpuPathAtlas(Recorder*);
    
    // Clear all scheduled atlas draws and free up atlas allocations, if necessary. After this call
    // the atlas can be considered cleared and available for new shape insertions. However this
    // method does not have any bearing on the contents of any atlas textures themselves, which may
    // be in use by GPU commands that are in-flight or yet to be submitted.
    void reset();

protected:
    const TextureProxy* texture() const { return fTexture.get(); }
    const TextureProxy* addRect(skvx::half2 maskSize,
                                SkIPoint16* outPos);
    bool isSuitableForAtlasing(const Rect& transformedShapeBounds,
                               const Rect& clipBounds) const override;

private:
    bool initializeTextureIfNeeded();
    
    const TextureProxy* onAddShape(const Shape&,
                                   const Transform&,
                                   const SkStrokeRec&,
                                   skvx::half2 maskSize,
                                   skvx::half2* outPos) override;
    
    class GpuAtlasMgr : public PathAtlas::DrawAtlasMgr {
    public:
        GpuAtlasMgr(size_t width, size_t height, const Caps* caps)
            : PathAtlas::DrawAtlasMgr(width, height, width, height,
                                      DrawAtlas::UseStorageTextures::kYes,
                                      /*label=*/"FakeGpuPathAtlas", caps) {}

        void onReset() {
            fDrawAtlas->markUsedPlotsAsFull();
            for (int i = 0; i < PlotLocator::kMaxMultitexturePages; ++i) {
                fOccupiedAreas[i] = {0, 0};
            }
        }

    protected:
        bool onAddToAtlas(const Shape&,
                          const Transform& transform,
                          const SkStrokeRec&,
                          SkIRect shapeBounds,
                          const AtlasLocator&) override;

    private:
        SkISize fOccupiedAreas[PlotLocator::kMaxMultitexturePages] = {
            {0, 0}, {0, 0}, {0, 0}, {0, 0}
        };
    };
        
    //////////////////
    // Uncached data

    // ComputePathAtlas lazily requests a texture from the AtlasProvider when the first shape gets
    // added to it and references the same texture for the duration of its lifetime. A reference to
    // this texture is stored here, which is used by AtlasShapeRenderStep when encoding the render
    // pass.
    sk_sp<TextureProxy> fTexture;
    sk_sp<Device> fTargetDevice;
    std::unique_ptr<DrawList> fCachedAtlasDraws;
    
    skgpu::RectanizerSkyline fRectanizer;
    GpuAtlasMgr fCachedAtlasMgr;
};

}  // namespace skgpu::graphite

#endif  // skgpu_graphite_FakeGpuPathAtlas_DEFINED
