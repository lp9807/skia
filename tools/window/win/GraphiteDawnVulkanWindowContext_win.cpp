/*
 * Copyright 2022 Google LLC
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */
// Important to put this first because webgpu_cpp.h and X.h don't get along.
// Include these first, before X11 defines None, Success, Status etc.
//#include "dawn/native/DawnNative.h"  // NO_G3_REWRITE
//#include "webgpu/webgpu_cpp.h"       // NO_G3_REWRITE

#include "tools/window/win/WindowContextFactory_win.h"
#include "tools/window/GraphiteDawnWindowContext.h"

using skwindow::DisplayParams;
using skwindow::internal::GraphiteDawnWindowContext;

namespace {

class GraphiteDawnVulkanWindowContext_win : public GraphiteDawnWindowContext {
public:
    GraphiteDawnVulkanWindowContext_win(HWND hwnd, std::unique_ptr<const DisplayParams> params);

    ~GraphiteDawnVulkanWindowContext_win() override;

    bool onInitializeContext() override;
    void onDestroyContext() override;
    void resize(int w, int h) override;

private:
    HWND fWindow;
};

GraphiteDawnVulkanWindowContext_win::GraphiteDawnVulkanWindowContext_win(
    HWND hwnd,
    std::unique_ptr<const DisplayParams> params)
        : GraphiteDawnWindowContext(std::move(params), wgpu::TextureFormat::BGRA8Unorm)
        , fWindow(hwnd)  {
    RECT rect;
    GetClientRect(hwnd, &rect);
    this->initializeContext(rect.right - rect.left, rect.bottom - rect.top);
}

GraphiteDawnVulkanWindowContext_win::~GraphiteDawnVulkanWindowContext_win() {
    this->destroyContext();
}

bool GraphiteDawnVulkanWindowContext_win::onInitializeContext() {
    SkASSERT(!!fWindow);

    auto device = this->createDevice(wgpu::BackendType::Vulkan);
    if (!device) {
        SkASSERT(device);
        return false;
    }

    wgpu::SurfaceDescriptorFromWindowsHWND surfaceChainedDesc;
    surfaceChainedDesc.hwnd = fWindow;
    surfaceChainedDesc.hinstance = GetModuleHandle(nullptr);
    wgpu::SurfaceDescriptor surfaceDesc;
    surfaceDesc.nextInChain = &surfaceChainedDesc;

    auto surface = wgpu::Instance(fInstance->Get()).CreateSurface(&surfaceDesc);
    if (!surface) {
        SkASSERT(false);
        return false;
    }

    fDevice = std::move(device);
    fSurface = std::move(surface);
    configureSurface();

    return true;
}

void GraphiteDawnVulkanWindowContext_win::onDestroyContext() {}

void GraphiteDawnVulkanWindowContext_win::resize(int w, int h) {
    configureSurface();
}

}  // anonymous namespace

namespace skwindow {

std::unique_ptr<WindowContext> MakeGraphiteDawnVulkanForWin(HWND hwnd,
                                                            std::unique_ptr<const DisplayParams> params) {
    std::unique_ptr<WindowContext> ctx(new GraphiteDawnVulkanWindowContext_win(hwnd, std::move(params)));
    if (!ctx->isValid()) {
        return nullptr;
    }
    return ctx;
}

}  // namespace skwindow
