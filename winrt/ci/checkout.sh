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
  # depot_tools as of Chromium 108/109's releases
  git -C "$DT" checkout -q "$(git -C "$DT" rev-list -1 --before=2023-01-20 origin/main)"
fi

# On an aarch64 host: CIPD packages with no linux-arm64 build at this Chromium version's pins,
# reclient (not used) and the host 7-Zip (installed below by
# winrt/toolchains/win_mingw_fixes/fetch_7z_host_platform.sh). gclient's custom_deps cannot
# drop CIPD entries, so a cipd wrapper leaves them out of `ensure`.
HOST=$(uname -m)
mkdir -p "$W/bin"
if [ "$HOST" = aarch64 ]; then
cat > "$W/bin/cipd" <<'EOF'
#!/bin/bash
args=("$@")
for i in "${!args[@]}"; do
  if [ "${args[$i]}" = -ensure-file ]; then
    f=${args[$((i + 1))]}
    sed -i -e '\#^infra/rbe/client/#d' -e '\#^infra/3pp/tools/7z/\${platform}#d' -e '\#^infra/3pp/tools/7z/linux-arm64#d' "$f"
  fi
done
exec "$DT/cipd" "$@"
EOF
chmod +x "$W/bin/cipd"
fi
export PATH="$W/bin:$PATH" DT

mkdir -p "$G"
cat > "$G/.gclient" <<EOF
solutions = [{
  "name": "src",
  "url": "https://github.com/${GITHUB_REPOSITORY}.git@${COMMIT}",
  "deps_file": "DEPS",
  "managed": False,
  "custom_deps": {},
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

# Only the DEPS hooks the Windows build uses; on an x86_64 host also Chromium's own linux-x64
# node and rc. The others fetch the toolchain (clang, objdump, ciopfs: winrt/toolchains and the
# builder image provide them), NaCl, test data, or the sysroots (in the sdk cache); on an
# aarch64 host node and rc too, as they are x86-64 binaries (winrt/toolchains provides them).
HOST=$HOST python3 - <<'EOF'
import os, subprocess
HOOKS = {"lastchange", "gpu_lists_version", "lastchange_skia", "lastchange_dawn",
         "webui_node_modules", "Fetch PGO profiles for win32"}
if os.environ["HOST"] == "x86_64":
    HOOKS |= {"node_linux64", "rc_linux"}
ns = {"Var": lambda x: "{%s}" % x, "Str": str}
exec(open("src/DEPS").read(), ns)
done = set()
for h in ns["hooks"]:
    if h.get("name") in HOOKS:
        print("hook:", h["name"], flush=True)
        subprocess.run(h["action"], check=True)
        done.add(h["name"])
assert done == HOOKS, HOOKS - done
EOF

rm -rf "$W/toolchains"; cp -a "$S/winrt/toolchains" "$W/toolchains"
ln -sfn "$S" "$W/chromium"
if [ "$HOST" = aarch64 ]; then
  CHROMIUM_SRC=$S sh "$W/toolchains/win_mingw_fixes/fetch_node_linux_arm64.sh"
  mkdir -p "$S/third_party/lzma_sdk/bin/host_platform"
  CHROMIUM_SRC=$S sh "$W/toolchains/win_mingw_fixes/fetch_7z_host_platform.sh"
fi

# Same mtime for every source file in every job (out/ is carried between jobs with its own).
find "$S" -path "$S/out" -prune -o -print0 | xargs -0 touch -h -d "2023-01-01 00:00:00"
