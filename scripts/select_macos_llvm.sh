#!/usr/bin/env bash
# Select the installed Homebrew LLVM (scripts/install_macos_llvm.sh) as the host compiler of a GitHub Actions job:
# writes a clang++ wrapper, then CXX, CPPGM_HOST_CXX and SDKROOT to the job's environment, and checks the SDK.
set -euo pipefail

major=${1:?usage: select_macos_llvm.sh 18|21}
host_llvm="$(brew --prefix "cppgm/ci/llvm@$major")"
test -x "$host_llvm/bin/clang++"
host_sdk="$(xcrun --sdk macosx --show-sdk-path)"
host_tools="$RUNNER_TEMP/host-llvm-$major"
mkdir -p "$host_tools"
# Keep SDK selection identical in builds, header discovery and linking.
python3 - "$host_llvm/bin/clang++" "$host_sdk" "$host_tools/clang++" <<'PY'
from pathlib import Path
import shlex
import sys
compiler, sdk, wrapper = sys.argv[1:]
path = Path(wrapper)
base = shlex.join([compiler, '--no-default-config', '--sysroot=' + sdk, '-isysroot', sdk])
library = Path(compiler).parent.parent / 'lib'
directories = [p for p in [library / 'c++', library / 'unwind', library] if p.is_dir()]
link = shlex.join([f'-L{p}' for p in directories] + ['-lunwind'] +
                  [f'-Wl,-rpath,{p}' for p in directories])
# Homebrew's bundled libc++/unwind flags apply only when linking.
path.write_text('#!/bin/sh\nfor argument do\n  case "$argument" in\n'
                '    -c|-S|-E|-M|-MM|-fsyntax-only|--version)\n'
                '      exec ' + base + ' "$@" ;;\n'
                '  esac\ndone\nexec ' + base + ' ' + link + ' "$@"\n')
path.chmod(0o755)
PY
printf '%s\n%s\n' "$host_llvm/bin" "$host_tools" >> "$GITHUB_PATH"
printf 'CXX=%s\nCPPGM_HOST_CXX=%s\n' \
  "$host_tools/clang++" "$host_tools/clang++" >> "$GITHUB_ENV"
printf 'SDKROOT=%s\n' "$host_sdk" >> "$GITHUB_ENV"
echo "Host compiler: $host_llvm/bin/clang++"
echo "SDK: $host_sdk"
"$host_tools/clang++" --version
if ! "$host_tools/clang++" -std=c++11 -Wall -Werror -x c++ - -o "$host_tools/sdk-check" <<'CPP'
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <cmath>
static_assert(sizeof(std::uintptr_t) == 8, "x86-64 SDK");
int main() {
  char text[2] = {};
  std::memcpy(text, "a", 2);
  return std::strlen(text) != 1 || !std::isfinite(1.0);
}
CPP
then
  "$host_tools/clang++" -v -E -x c++ /dev/null > /dev/null
  "$host_tools/clang++" -### -x c++ /dev/null -o "$host_tools/sdk-check"
  exit 1
fi
"$host_tools/sdk-check"
