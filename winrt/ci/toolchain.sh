#!/bin/bash
# Builds the port toolchain into /opt/winrt/sdk from the recipes in winrt/toolchains:
#   sysroots           Chromium's DEPS-pinned debian_bullseye arm/arm64 sysroots
#   llvm-mingw-winrt   build_llvm_winrt.sh (llvm-mingw + patched clang/lld + Chromium plugins)
#   xwin-10.0.22621    fetch_xwin_splat.sh (Windows SDK / MSVC CRT splat)
#   winrt-sdk          build_winrt_sdk.sh
#   winrt-crt          build_winrt_crt_runtimes.sh
# Runs inside the builder image; /opt/winrt/repo is a (sparse) checkout of this branch.
set -euxo pipefail
W=/opt/winrt
SDK=$W/sdk
R=$W/repo
TC=$W/toolchains/win_mingw_fixes
# The recipes run with the bootstrap toolchain on PATH, never a half-installed port toolchain.
export PATH=/usr/local/bin:/opt/llvm-mingw/bin:/usr/sbin:/usr/bin:/sbin:/bin

rm -rf "$W/toolchains"; cp -a "$R/winrt/toolchains" "$W/toolchains"
ln -sfn "$R" "$W/chromium"          # tools/clang (Chromium's clang plugins)
mkdir -p "$SDK/tools" "$SDK/src" "$SDK/sysroots" "$SDK/staging"

for a in arm arm64; do
  python3 "$R/build/linux/sysroot_scripts/install-sysroot.py" --arch=$a
done
for d in "$R"/build/linux/debian_bullseye_*-sysroot; do
  rm -rf "$SDK/sysroots/$(basename "$d")"; mv "$d" "$SDK/sysroots/"
done

PIN=$(sed -n 's/^PIN=//p' "$TC/build_llvm_winrt.sh")
L=$SDK/src/llvm-project
if [ "$(git -C "$L" rev-parse HEAD 2>/dev/null)" != "$PIN" ]; then
  rm -rf "$L"; git init -q "$L"
  git -C "$L" fetch -q --depth 1 https://github.com/llvm/llvm-project.git "$PIN"
  git -C "$L" checkout -q FETCH_HEAD
fi

sh "$TC/build_llvm_winrt.sh"
rm -rf "$SDK/build"
sh "$TC/fetch_xwin_splat.sh"
rm -rf "$SDK/staging/xwin-cache"
sh "$TC/build_winrt_sdk.sh"
sh "$TC/build_winrt_crt_runtimes.sh"
rm -rf "$L" "$SDK/staging"
du -sh "$SDK"/*
