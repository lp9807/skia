#!/bin/bash

# Note: This script copy-paste fixed third-party files, update those files when necessary

# Run this script in skia's root dir

RED='\033[0;31m'
YELLOW='\033[0;33m'
GREEN='\033[0;32m'
NOCOLOR='\033[0m' # Resets to default

if [[ "$OS" == "Windows_NT" ]]; then
    is_windows=true
else
    is_windows=false
fi

if [[ "$is_windows" == "true" ]]; then
    skia_path=$(pwd -W)
else
    skia_path=$(pwd)
fi

# Auto-generated paths, verify their correctness
ohos_sdk_path=""
if ! [ -z $HOS_SDK ]; then
    ohos_sdk_path=$HOS_SDK
elif [ -d "$skia_path/ohos_sdk" ]; then
    ohos_sdk_path=$skia_path/ohos_sdk
fi

is_shared_build=true
while getopts 'shn:' opt; do
    case "$opt" in
        s) echo "Build using static option for linking";is_shared_build=false;;
        n) ohos_sdk_path=$OPTARG;;
        h) { 
            cat << EOF
Usage: $(basename $0) [-s][-n PATH]
    -s: enable static linking
    -n: specify ohos sdk path
EOF
        } 
        exit 0;;
        *) echo "Invalid option"; exit 1;;
    esac
done

if [[ -z $ohos_sdk_path ]]; then
    echo 'No HOS SDK found! You have 3 options:'
    echo '1. Setup shell variable $HOS_SDK'
    echo '2. Put the SDK in ./ohos_sdk'
    echo '3. Specify path to SDK by -n'
    exit 1
fi

echo -en "${YELLOW}Using${NOCOLOR} SDK path = "
echo "$ohos_sdk_path"

if [ -d "$ohos_sdk_path/sysroot" ]; then
    sdk_system_root=$ohos_sdk_path/sysroot
elif [ -d "$ohos_sdk_path/native/sysroot" ]; then
    sdk_system_root=$ohos_sdk_path/native/sysroot
else
    echo "Cannot find sysroot. Check your SDK version."
    exit 1
fi

third_party_dng_sdk_path=$skia_path/third_party/externals/dng_sdk
third_party_zlib_path=$skia_path/third_party/externals/zlib
third_party_partition_alloc=$skia_path/third_party/externals/partition_alloc/src/partition_alloc

if [ -d "$third_party_dng_sdk_path" ]; then
    # Change dng sdk dng_safe_arithmetic
    dng_safe_arithmetic_path=$third_party_dng_sdk_path/source/dng_safe_arithmetic.h
    cp modified_external_third_party/dng_safe_arithmetic.h $dng_safe_arithmetic_path
else
    echo "Cannot find $third_party_dng_sdk_path, make sure you have sucessfully run \`python3 tools/git-sync-deps\`"
    exit 1
fi

if [ -d "$third_party_zlib_path" ]; then
    # Change zlib cpu_features
    zlib_cpu_features_path=$third_party_zlib_path/cpu_features.c
    cp modified_external_third_party/cpu_features.c $zlib_cpu_features_path
else
    echo "Cannot find $third_party_zlib_path, make sure you have successfully run \`python3 tools/git-sync-deps\`"
    exit 1
fi

if [ -d "$third_party_partition_alloc" ]; then

    cp modified_external_third_party/BUILD.gn $third_party_partition_alloc/BUILD.gn
    cp modified_external_third_party/aarch64_support.h $third_party_partition_alloc/aarch64_support.h
else
    echo "Cannot $third_party_partition_alloc, make sure you have successfully run \`python3 tools/git-sync-deps\`"
    exit 1
fi

if [ -d "$ohos_sdk_path/toolchains/llvm" ]; then
    llvm_path=$ohos_sdk_path/toolchains/llvm
elif [ -d "$ohos_sdk_path/native/llvm" ]; then
    llvm_path=$ohos_sdk_path/native/llvm
elif [ -d "$ohos_sdk_path/llvm" ]; then 
    llvm_path=$ohos_sdk_path/llvm
else
    echo "Cannot find llvm path in the HOS SDK."
    exit 1
fi

if ! [ -z $HOS_CC ]; then
    cc_path=$HOS_CC
elif [[ "$is_windows" == "true" ]]; then
	cc_path=$llvm_path/bin/clang.exe
else
    cc_path=$llvm_path/bin/clang
fi
echo -en "${YELLOW}Using${NOCOLOR} CC path = "
echo "$cc_path"

if ! [ -z $HOS_CXX ]; then
    cxx_path=$HOS_CXX
elif [[ "$is_windows" == "true" ]]; then
	cxx_path=$llvm_path/bin/clang++.exe
else
    cxx_path=$llvm_path/bin/clang++
fi
echo -en "${YELLOW}Using${NOCOLOR} CXX path = "
echo "$cxx_path"

ndk_path=$ohos_sdk_path/native/
echo -en "${YELLOW}Using${NOCOLOR} ndk path = "
echo "$ndk_path"

if [[ "$is_windows" == "true" ]]; then
    # Windows build fix
    ar_path="$llvm_path/bin/llvm-ar"
    echo -en "${YELLOW}Windows:${NOCOLOR} "
    echo "When running ninja and have a bug related to <ar>, add modified_external_third_party/ar/ into your PATH variable (or if you want, copy llvm-ar.exe from $ar_path into the folder)."
fi

default_output_path="out/ohos_debug/"

if [[ $is_shared_build == "true" ]]; then
    extra_static=""
    extra_link="$llvm_path/lib/aarch64-linux-ohos/libc++_shared.so"
    cp $llvm_path/lib/aarch64-linux-ohos/libc++_shared.so $default_output_path
    echo "Build using dynamic linking (use -s for static if needed)"
    echo -en "${YELLOW}Running:${NOCOLOR} "
    echo "Set LD_LIBRARY_PATH=$default_output_path when running the executable to find the libc++_shared.so library"
else
    extra_static="-static"
    extra_link=""
fi

# gn gen
bin/gn gen "$default_output_path" --args="
    is_debug=true
    is_official_build=false
    target_os=\"ohos\"
    target_cpu=\"arm64\"
    skia_enable_graphite=true
    skia_use_gl=true
    skia_use_egl=true
    skia_use_vulkan=true
    skia_use_dawn=true
    dawn_enable_vulkan=true
    cc=\"$cc_path\"
    cxx=\"$cxx_path\"
    ndk=\"$ndk_path\"
    extra_cflags=[
        \"--target=aarch64-linux-ohos\",
        \"--sysroot=$sdk_system_root\",
    ]
    extra_asmflags=[
        \"--target=aarch64-linux-ohos\",
        \"--sysroot=$sdk_system_root\",
    ]
    extra_ldflags=[
        \"--target=aarch64-linux-ohos\",
        \"--sysroot=$sdk_system_root\",
        \"$extra_static\",
        \"$extra_link\",
    ]
"
