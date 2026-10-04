#!/bin/bash
# checkout.sh <commit>: gclient checkout of this repository at <commit> with every DEPS
# dependency (no history) into /home/winrt/gc/src, then the nested-repository patches
# (winrt/patches/series) and the linux-arm64 host tools the DEPS hooks do not provide.
# Source mtimes are pinned so that a later job can continue an earlier job's out/ directory.
set -euxo pipefail
COMMIT=$1
W=/home/winrt
G=$W/gc
S=$G/src
DT=$W/depot_tools
export PATH="$PATH:$DT" DEPOT_TOOLS_UPDATE=0 DEPOT_TOOLS_METRICS=0

if [ ! -d "$DT" ]; then
  git clone -q https://chromium.googlesource.com/chromium/tools/depot_tools.git "$DT"
  # depot_tools as of Chromium 109's release
  git -C "$DT" checkout -q "$(git -C "$DT" rev-list -1 --before=2023-01-20 origin/main)"
fi

mkdir -p "$G"
cat > "$G/.gclient" <<EOF
solutions = [{
  "name": "src",
  "url": "https://github.com/${GITHUB_REPOSITORY}.git@${COMMIT}",
  "deps_file": "DEPS",
  "managed": False,
  # CIPD packages with no linux-arm64 build at Chromium 109's pins: reclient (not used) and the
  # host 7-Zip (installed below from winrt/toolchains/win_mingw_fixes/fetch_7z_host_platform.sh).
  "custom_deps": {
    "src/buildtools/reclient:infra/rbe/client/\${{platform}}": None,
    "src/third_party/lzma_sdk/bin/host_platform:infra/3pp/tools/7z/\${{platform}}": None,
  },
  "custom_vars": {"checkout_pgo_profiles": True},
}]
target_os = ["win"]
EOF
cd "$G"
gclient sync --no-history --shallow -j 8 --nohooks --revision "src@${COMMIT}"

while read -r repo patch; do
  [ -n "$repo" ] || continue
  git -C "$S/$repo" apply --whitespace=nowarn "$S/winrt/patches/$patch"
done < "$S/winrt/patches/series"

gclient runhooks

rm -rf "$W/toolchains"; cp -a "$S/winrt/toolchains" "$W/toolchains"
ln -sfn "$S" "$W/chromium"
CHROMIUM_SRC=$S sh "$W/toolchains/win_mingw_fixes/fetch_node_linux_arm64.sh"
mkdir -p "$S/third_party/lzma_sdk/bin/host_platform"
CHROMIUM_SRC=$S sh "$W/toolchains/win_mingw_fixes/fetch_7z_host_platform.sh"

# Same mtime for every source file in every job (out/ is carried between jobs with its own).
find "$S" -path "$S/out" -prune -o -print0 | xargs -0 touch -h -d "2023-01-01 00:00:00"
