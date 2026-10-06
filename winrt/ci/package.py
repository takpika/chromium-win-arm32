#!/usr/bin/env python3
"""package.py <chrome|chromium> <out dir> <dest dir>

chromium -> chromium-<version>-win-arm32.zip: chrome-win/ with the files of Chromium's own
            archive (chrome/tools/build/win/FILES.cfg, main archive), flat, as Chromium snapshots.
chrome   -> chrome-<version>-win-arm32.zip: Chrome-bin/ in the installed layout
            (chrome/installer/mini_installer/chrome.release): chrome.exe and chrome_proxy.exe
            next to the <version>/ directory holding everything else.
Both     -> <name>-installer.exe: the flavor's mini_installer.exe.
"""
import configparser, fnmatch, glob, os, shutil, sys, zipfile

flavor, out, dest = sys.argv[1:4]
SRC = os.path.abspath(os.path.join(out, "..", ".."))
ver = dict(l.strip().split("=") for l in open(os.path.join(SRC, "chrome/VERSION")) if "=" in l)
VERSION = "{MAJOR}.{MINOR}.{BUILD}.{PATCH}".format(**ver)
# Must be present; anything else listed by the layouts is taken when it was built.
REQUIRED = {"chrome.exe", "chrome.dll", "chrome_elf.dll", "resources.pak", "icudtl.dat", "snapshot_blob.bin",
            "chrome_100_percent.pak", "locales/en-US.pak", "libEGL.dll", "libGLESv2.dll"}
SKIP = ("nacl", "WidevineCdm", "gcp_setup", "gaia1_0", "interactive_ui_tests")


def files_cfg():
    ns = {}
    exec(open(os.path.join(SRC, "chrome/tools/build/win/FILES.cfg")).read(), ns)
    for f in ns["FILES"]:
        if f.get("archive") is None and f.get("arch") in (None, ["32bit"]) \
                and not f["filename"].startswith(SKIP):
            yield f["filename"]


def chrome_release():
    cp = configparser.RawConfigParser(delimiters=(":",), interpolation=None)
    cp.optionxform = str
    cp.read(os.path.join(SRC, "chrome/installer/mini_installer/chrome.release"))
    for sec in ("GENERAL", "HIDPI", "FFMPEG", "SNAPSHOTBLOB"):
        for pat, to in cp.items(sec):
            to = to.replace("%(ChromeDir)s", "").replace("%(VersionDir)s", VERSION).replace("\\", "/")
            yield pat.replace("\\", "/"), to.strip("/")


def main():
    os.makedirs(dest, exist_ok=True)
    have, missing = [], []
    if flavor == "chromium":
        name, top = f"chromium-{VERSION}-win-arm32", "chrome-win"
        # FILES.cfg lists upstream's V8 startup data (v8_context_snapshot.bin) and a fixed locale
        # list; this build uses snapshot_blob.bin, and ships every locale it built.
        pats = [p for p in files_cfg() if not p.startswith("locales/")] + ["snapshot_blob.bin", "locales/*.pak"]
        for pat in pats:
            hits = glob.glob(os.path.join(out, pat))
            if not hits:
                missing.append(pat)
            have += [(h, os.path.join(top, os.path.relpath(h, out))) for h in hits if os.path.isfile(h)]
    else:
        name, top = f"chrome-{VERSION}-win-arm32", "Chrome-bin"
        for pat, to in chrome_release():
            if pat.startswith(("nacl", "chrome_child", "optimization_guide", "ffmpeg.dll", "d3dcompiler")):
                continue
            hits = [h for h in glob.glob(os.path.join(out, pat)) if os.path.isfile(h)]
            if not hits:
                missing.append(pat)
            for h in hits:
                d = os.path.join(top, to) if to else top
                have.append((h, os.path.join(d, os.path.basename(h))))
    rels = {os.path.relpath(h, out).replace("\\", "/") for h, _ in have}
    lost = [r for r in REQUIRED if r not in rels]
    if lost:
        sys.exit(f"missing required files: {lost}")
    zpath = os.path.join(dest, name + ".zip")
    with zipfile.ZipFile(zpath, "w", zipfile.ZIP_DEFLATED, compresslevel=9) as z:
        for h, a in sorted(have, key=lambda x: x[1]):
            z.write(h, a)
    print(f"{zpath}: {len(have)} files, {os.path.getsize(zpath) / 2**20:.1f} MiB")
    inst = os.path.join(out, "mini_installer.exe")
    if not os.path.isfile(inst):
        sys.exit("mini_installer.exe was not built")
    shutil.copyfile(inst, os.path.join(dest, name + "-installer.exe"))
    print(f"{name}-installer.exe: {os.path.getsize(inst) / 2**20:.1f} MiB")
    for m in missing:
        print(f"  not built (skipped): {m}")


main()
