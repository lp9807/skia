/*
 * Copyright 2014 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */
#include "include/gpu/ganesh/gl/GrGLAssembleInterface.h"
#include "include/gpu/ganesh/gl/GrGLInterface.h"
#include "include/private/base/SkTemplates.h"
#include "src/gpu/ganesh/gl/GrGLCoreFunctions.h"
#include "src/gpu/ganesh/gl/GrGLUtil.h"

#include <EGL/egl.h>
#ifndef GL_GLEXT_PROTOTYPES
#define GL_GLEXT_PROTOTYPES
#endif
#include <GLES2/gl2.h>

#include <dlfcn.h>

namespace GrGLInterfaces {
sk_sp<const GrGLInterface> MakeEGL() {
    SkDebugf("LLLL - GrGLInterfaces::MakeEGL - OHOS\n");

    static void *glesLib, *eglLib;
    if( !glesLib ) { glesLib = dlopen("libGLESv3.so", RTLD_LAZY); }
    if( !eglLib ) { eglLib = dlopen("libEGL.so", RTLD_LAZY); }

    SkDebugf("LLLL - load OHOS libEGL successfully: %s\n", eglLib ? "yes" : "no");
    SkDebugf("LLLL - load OHOS libGLES successfully: %s\n", glesLib ? "yes" : "no");

    /*GrGLGetStringFn* getString =
        (GrGLGetStringFn*)ohos_get_gl_proc((void*)module.get(), "glGetString");
    if (!getString) {
        return nullptr;
    }

    const char* verStr = reinterpret_cast<const char*>(getString(GR_GL_VERSION));
    GrGLStandard standard = GrGLGetStandardInUseFromString(verStr);
    */

    return GrGLMakeAssembledGLESInterface(
        glesLib,
        [](void* ctx, const char* name) {
            // SkDebugf("LLLL - ctx: 0x%p - get proc: %s\n", ctx, name);
            return (GrGLFuncPtr)dlsym(ctx?ctx:RTLD_DEFAULT, name);
        }
    );
}
}  // namespace GrGLInterfaces

#if !defined(SK_DISABLE_LEGACY_EGLINTERFACE_FACTORY)
sk_sp<const GrGLInterface> GrGLMakeEGLInterface() { return GrGLInterfaces::MakeEGL(); }
#endif
