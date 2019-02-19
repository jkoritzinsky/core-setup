// Copyright (c) .NET Foundation and contributors. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef _COREHOST_CLI_HOSTFXR_H_
#define _COREHOST_CLI_HOSTFXR_H_

#include <pal.h>

// Forward declaration of required custom feature APIs
using hostfxr_main_fn = int(*)(const int argc, const pal::char_t* argv[]);
using hostfxr_main_startupinfo_fn = int(*)(
    const int argc,
    const pal::char_t* argv[],
    const pal::char_t* host_path,
    const pal::char_t* dotnet_root,
    const pal::char_t* app_path);
using hostfxr_get_delegate_fn = int(*)(
    const pal::char_t* host_path,
    const pal::char_t* dotnet_root,
    const pal::char_t* app_path,
    void **delegate);
using hostfxr_main_fn = int(*)(const int argc, const pal::char_t* argv[]);
using hostfxr_main_startupinfo_fn = int(*)(
    const int argc,
    const pal::char_t* argv[],
    const pal::char_t* host_path,
    const pal::char_t* dotnet_root,
    const pal::char_t* app_path);
using hostfxr_error_writer_fn = void(*)(const pal::char_t* message);
using hostfxr_set_error_writer_fn = hostfxr_error_writer_fn(*)(hostfxr_error_writer_fn error_writer);

#endif //_COREHOST_CLI_HOSTFXR_H_
