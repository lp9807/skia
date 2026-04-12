/*
 * Copyright 2024 Google LLC
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "src/gpu/graphite/FakeGpuPathAtlas.h"

#include "include/gpu/graphite/Recorder.h"
#include "src/core/SkTraceEvent.h"
#include "src/gpu/graphite/AtlasProvider.h"
#include "src/gpu/graphite/Caps.h"
#include "src/gpu/graphite/Log.h"
#include "src/gpu/graphite/RasterPathUtils.h"
#include "src/gpu/graphite/RecorderPriv.h"
#include "src/gpu/graphite/RendererProvider.h"
#include "src/gpu/graphite/TextureProxy.h"
#include "src/gpu/graphite/TextureUtils.h"
#include "src/gpu/graphite/geom/Transform_graphite.h"

#ifdef SK_ENABLE_VELLO_SHADERS
#include "src/gpu/graphite/compute/DispatchGroup.h"
#endif

namespace skgpu::graphite {
namespace {

// TODO: This is the maximum target dimension that vello can handle today.
constexpr uint16_t kGpuAtlasDim = 512;

// TODO: Currently we reject shapes that are smaller than a subset of a given atlas page to avoid
// creating too many flushes in a Recording containing many large path draws. These shapes often
// don't make efficient use of the available atlas texture space and the cost of sequential
// dispatches to render multiple atlas pages can be prohibitive.
constexpr size_t kBboxAreaThreshold = 1024 * 512;

}  // namespace

FakeGpuPathAtlas::FakeGpuPathAtlas(Recorder* recorder)
    : PathAtlas(recorder, kGpuAtlasDim, kGpuAtlasDim)
    {}

bool FakeGpuPathAtlas::initializeTextureIfNeeded() {
    if (!fTexture) {
        SkColorType targetCT = ComputeShaderCoverageMaskTargetFormat(fRecorder->priv().caps());
        fTexture = fRecorder->priv().atlasProvider()->getAtlasTexture(fRecorder,
                                                                      this->width(),
                                                                      this->height(),
                                                                      targetCT,
                                                                      /*identifier=*/0,
                                                                      /*requireStorageUsage=*/true);
    }
    return fTexture != nullptr;
}

bool FakeGpuPathAtlas::isSuitableForAtlasing(const Rect& transformedShapeBounds,
                                             const Rect& clipBounds) const {
    Rect shapeBounds = transformedShapeBounds.makeRoundOut();
    Rect maskBounds = shapeBounds.makeIntersect(clipBounds);
    skvx::float2 maskSize = maskBounds.size();
    float width = maskSize.x(), height = maskSize.y();

    if (width > this->width() || height > this->height()) {
        return false;
    }

    // For now we're allowing paths that are smaller than 1/32nd of the full 4096x4096 atlas size
    // to prevent the atlas texture from filling up too often. There are several approaches we
    // should explore to alleviate the cost of atlasing large paths.
    if (width * height > kBboxAreaThreshold) {
        return false;
    }

    return true;
}

const TextureProxy* FakeGpuPathAtlas::onAddShape(const Shape& shape,
                               const Transform& transform,
                               const SkStrokeRec& style,
                               skvx::half2 maskSize,
                               skvx::half2* outPos) {
    skgpu::UniqueKey maskKey;
    bool hasKey = shape.hasKey();
    /*if (hasKey) {
        // Try to locate or add to cached DrawAtlas
        const TextureProxy* proxy = fCachedAtlasMgr.findOrCreateEntry(fRecorder,
                                                                      shape,
                                                                      transform,
                                                                      style,
                                                                      maskSize,
                                                                      outPos);
        if (proxy) {
            return proxy;
        }
    }*/

    // Try to add to uncached texture
    SkIPoint16 iPos;
    const TextureProxy* texProxy = this->addRect(maskSize, &iPos);
    if (!texProxy) {
        return nullptr;
    }
    *outPos = skvx::half2(iPos.x(), iPos.y());
    // If the mask is empty, just return.
    // TODO: This may not be needed if we can handle clipped out bounds with inverse fills
    // another way. See PathAtlas::addShape().
    if (!all(maskSize)) {
        return texProxy;
    }

    // TODO: The compute renderer doesn't support perspective yet. We assume that the path has been
    // appropriately transformed in that case.
    SkASSERT(transform.type() != Transform::Type::kPerspective);

    // Restrict the render to the occupied area of the atlas, including entry padding so that the
    // padded row/column is cleared when Vello renders.
    Rect atlasBounds = Rect::XYWH(skvx::float2(iPos.x(), iPos.y()), skvx::cast<float>(maskSize));

    return texProxy;
}

const TextureProxy* FakeGpuPathAtlas::addRect(skvx::half2 maskSize,
                                              SkIPoint16* outPos) {
    if (!this->initializeTextureIfNeeded()) {
        SKGPU_LOG_E("LLLL - FakeGpuPathAtlas::addRect - Failed to instantiate an atlas texture");
        return nullptr;
    }

    // An empty mask always fits, so just return the texture.
    // TODO: This may not be needed if we can handle clipped out bounds with inverse fills
    // another way. See PathAtlas::addShape().
    if (!all(maskSize)) {
        *outPos = {0, 0};
        return fTexture.get();
    }

    /*if (!fRectanizer.addPaddedRect(maskSize.x(), maskSize.y(), kEntryPadding, outPos)) {
        return nullptr;
    }*/

    return fTexture.get();
}

void FakeGpuPathAtlas::reset() {
    //this->onReset();
}

}  // namespace skgpu::graphite
