/*
 * Copyright 2006 The Android Open Source Project
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "include/private/base/SkDebug.h"
#include "include/private/base/SkFeatures.h"
#include "include/private/base/SkLoadUserConfig.h"

#if !defined(SK_BUILD_FOR_WIN) && !defined(SK_BUILD_FOR_ANDROID)

#include <stdarg.h>
#include <stdio.h>

void SkDebugf(const char format[], ...) {
    va_list args;
    va_start(args, format);
#if defined(SK_BUILD_FOR_OHOS)
#if BUILDFLAG(ARKWEB_DFX_LOGGING)
    char str_printed[256];
    vsprintf(str_printed, format, args);
    OHOS::NWeb::HiLogAdapter::PrintLog(OHOS::NWeb::LogLevelAdapter::DEBUG, "%{public}s", str_printed);
#endif
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat-nonliteral"
    vfprintf(stderr, format, args);
#pragma GCC diagnostic pop
#endif
    va_end(args);
}
#endif  // !defined(SK_BUILD_FOR_WIN) && !defined(SK_BUILD_FOR_ANDROID)
