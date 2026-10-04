# Chromium for Windows on ARM32

Chromium 109.0.5414.176 for 32-bit ARM Windows: Surface 2 (Windows RT 8.1) and ARM64 Windows
devices running ARM32 code (tested on Surface Pro X).

## Downloads

Releases carry two builds, each as a zip and as an installer (`<zip name>-installer.exe`):

| file | layout | media codecs |
|---|---|---|
| `chromium-<version>-win-arm32.zip` | `chrome-win/`, flat (as Chromium snapshots) | open codecs (VP8/VP9/AV1, Opus, ...) |
| `chrome-<version>-win-arm32.zip` | `Chrome-bin/` (`chrome.exe` + `<version>/`, as installed Chrome) | plus H.264, AAC and the other proprietary codecs |

Unzip and run `chrome.exe`, or run the installer (Chromium's `mini_installer`, per-user install).

## Layout of this branch

- The Chromium tree carries the port's source changes directly.
- `winrt/patches/` holds the changes to DEPS-pinned dependencies (one patch per repository,
  listed in `series`), applied on top of a `gclient sync`.
- `winrt/toolchains/` holds the toolchain recipes and supplements: llvm-mingw with patched
  clang/lld (`build_llvm_winrt.sh`), the Windows SDK/CRT splat (`fetch_xwin_splat.sh`),
  CRT runtimes, header supplements, and the GN arguments (`winrt_arm_args.gni`).
- `winrt/ci/` builds everything on a linux-arm64 host: `toolchain.sh`, `checkout.sh`,
  `build.sh <chrome|chromium> <minutes>`, `package.py`.

## Building

`.github/workflows/build.yml` runs on every push (GitHub-hosted `ubuntu-24.04-arm` runners).
The toolchain is built once and cached by the hash of its recipes; the browser build is split
into stages that hand `out/` to each other, because a job is limited to six hours. Pushing a tag
`v*` publishes both zips as a release.
