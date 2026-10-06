#!/usr/bin/env python3
# Copyright 2026 The Chromium Authors
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

"""Runs an lld-link /lldmingw executable link with the entry point MSVC-mode
lld would infer.

usage: mingw_exe_entry.py <llvm-nm> -- <link command...>

The Microsoft C runtime has one startup routine per entry function
(mainCRTStartup, wmainCRTStartup, WinMainCRTStartup, wWinMainCRTStartup), and
lld-link in MSVC mode picks among them from the entry functions the image
defines (lld/COFF/SymbolTable.cpp SymbolTable::findDefaultEntry). In MinGW mode
(/lldmingw) lld picks by subsystem only (mainCRTStartup / WinMainCRTStartup),
because MinGW's own CRT uses those two names for both character widths. This
script applies the MSVC-mode rule and adds the resulting /ENTRY: for
/SUBSYSTEM:WINDOWS, wWinMainCRTStartup if the image defines wWinMain and not
WinMain, else WinMainCRTStartup; otherwise wmainCRTStartup if it defines wmain
and not main, else mainCRTStartup. When both widths are defined it takes the
narrow one and warns, as lld does. "Defined by the image" means defined in the
object files and archives the command names (the toolchain's runtime libraries,
named without a path and found through -libpath, are not scanned). A command
that already has an /ENTRY: is run unchanged.
"""

import os
import shlex
import subprocess
import sys


def expand(command):
  """The command's arguments with @rsp files expanded (posix quoting)."""
  args = []
  for arg in command:
    if arg.startswith('@'):
      with open(arg[1:]) as f:
        args += expand(shlex.split(f.read()))
    else:
      args.append(arg)
  return args


def option(args, name):
  """Value of the last /name: or -name: option (case-insensitive), or None."""
  value = None
  for arg in args:
    if arg[:1] in '/-' and arg[1:].lower().startswith(name + ':'):
      value = arg[len(name) + 2:]
  return value


def defined_symbols(nm, inputs, wanted):
  found = set()  # no inputs: nothing to run llvm-nm on (it would read a.out)
  for i in range(0, len(inputs), 200):  # bounded command lines
    out = subprocess.run([nm, '--defined-only', '--format=just-symbols'] +
                         inputs[i:i + 200],
                         stdout=subprocess.PIPE,
                         stderr=subprocess.DEVNULL,
                         universal_newlines=True).stdout
    found |= set(out.split()) & wanted
  return found


def main():
  sep = sys.argv.index('--')
  nm = sys.argv[1]
  command = sys.argv[sep + 1:]
  args = expand(command[1:])
  if option(args, 'entry') is None:
    gui = (option(args, 'subsystem') or '').lower().startswith('windows')
    narrow, wide = ('WinMain', 'wWinMain') if gui else ('main', 'wmain')
    # Inputs are told apart from options by existing as files: on a POSIX
    # host an absolute input path starts with '/' like an option does.
    inputs = [
        a for a in args if a.lower().endswith(('.obj', '.o', '.lib', '.a')) and
        os.path.isfile(a)
    ]
    defined = defined_symbols(nm, inputs, {narrow, wide})
    if wide in defined and narrow in defined:
      print('mingw_exe_entry.py: warning: found both %s and %s; using latter' %
            (wide, narrow),
            file=sys.stderr)
    fn = wide if wide in defined and narrow not in defined else narrow
    command = command[:1] + ['/ENTRY:%sCRTStartup' % fn] + command[1:]
  return subprocess.call(command)


if __name__ == '__main__':
  sys.exit(main())
