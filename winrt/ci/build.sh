#!/bin/bash
# build.sh <chrome|chromium> <minutes>: builds the browser into out/<flavor> for at most <minutes>.
# Exit 0 = everything built, 3 = time is up (continue in the next job), anything else = failure.
#   chrome    winrt_arm_args.gni as is (Google Chrome's media codec set: H.264, AAC, ...)
#   chromium  the same with Chromium's open codec set (proprietary_codecs=false, ffmpeg "Chromium")
set -euo pipefail
FLAVOR=$1 MINUTES=$2
W=/home/winrt
S=$W/gc/src
O=out/$FLAVOR
ARGS=$W/toolchains/win_mingw_fixes/winrt_arm_args.gni
cd "$S"

# Case-insensitive views (as Chromium's Linux->Windows builds see the SDK) of the Windows SDK
# splat, the port toolchain and the toolchain supplement dirs: a lowercase backing copy filled
# through ciopfs, mounted read-only over the original path. The supplement dirs need it too:
# the tree includes their headers in either case (e.g. <DelayIMP.h> and <delayimp.h>), which
# the original build host's case-insensitive file system resolved to one file.
for D in sdk/xwin-10.0.22621 sdk/llvm-mingw-winrt toolchains/win_mingw_fixes toolchains/win_sdk_supplement; do
  C=$W/ci/$(basename "$D")
  if [ ! -d "$C" ]; then
    mkdir -p "$C.new" /mnt/ci
    ciopfs -o use_ino "$C.new" /mnt/ci
    python3 "$S/winrt/ci/ciopfs-fill" "$W/$D" /mnt/ci
    fusermount -u /mnt/ci
    mv "$C.new" "$C"
  fi
  mountpoint -q "$W/$D" ||
    ciopfs -o ro,use_ino,allow_other,nonempty,default_permissions "$C" "$W/$D"
done

mkdir -p "$O"
case $FLAVOR in
  chrome)   printf 'import("%s")\n' "$ARGS" > "$O/args.gn.new" ;;
  chromium) sed -e 's/^proprietary_codecs = true$/proprietary_codecs = false/' \
                -e 's/^ffmpeg_branding = "Chrome"$/ffmpeg_branding = "Chromium"/' "$ARGS" > "$O/args.gn.new"
            grep -qx 'proprietary_codecs = false' "$O/args.gn.new"
            grep -qx 'ffmpeg_branding = "Chromium"' "$O/args.gn.new" ;;
  *) echo "unknown flavor $FLAVOR" >&2; exit 2 ;;
esac
if ! cmp -s "$O/args.gn.new" "$O/args.gn" || [ ! -f "$O/build.ninja" ]; then
  mv "$O/args.gn.new" "$O/args.gn"
  gn gen "$O"
else
  rm "$O/args.gn.new"
fi

# Everything the two archive layouts and the installer take (package.py), by output name.
WANT="chrome chrome.exe chrome.dll chrome_elf.dll chrome_proxy.exe chrome_pwa_launcher.exe
      notification_helper.exe elevation_service.exe eventlog_provider.dll chrome_wer.dll
      mojo_core.dll libEGL.dll libGLESv2.dll vk_swiftshader.dll vk_swiftshader_icd.json
      vulkan-1.dll resources.pak chrome_100_percent.pak chrome_200_percent.pak icudtl.dat
      snapshot_blob.bin v8_context_snapshot.bin setup.exe mini_installer.exe"
# Headers chrome's sources include without a GN dependency on their generators (a build of
# `all` happens to generate them first); generated before everything else.
# Only the generated files themselves (their GN targets would also compile all their deps).
FIRST="gen/chrome/browser/password_manager/password_manager_buildflags.h
       gen/components/password_manager/services/csv_password/public/mojom/csv_password_parser.mojom.h"
T=
for t in $WANT; do
  ninja -C "$O" -t query "$t" >/dev/null 2>&1 && T="$T $t"
done
echo "targets:$T"
END=$(( $(date +%s) + MINUTES * 60 ))
ninja -C "$O" $FIRST
set +e
left=$(( (END - $(date +%s)) / 60 ))
[ "$left" -gt 0 ] || { echo "time is up; continuing in the next job"; exit 3; }
timeout --signal=INT --kill-after=10m "${left}m" ninja -k 0 -C "$O" $T
rc=$?
set -e
[ $rc -eq 124 ] && { echo "time is up; continuing in the next job"; exit 3; }
exit $rc
