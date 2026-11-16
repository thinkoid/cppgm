#!/usr/bin/env bash
# Build the files of a native release package (scripts/package_release.py). cppgm compiles what the package holds:
#   dev/<tool>                                 stage one: the nine tools, compiled by the host compiler
#   obj/release/bin/selfhost/<tool>-self       stage two: the nine tools, compiled by stage one's cppgm
#   obj/release/bin/inception/<tool>-inception stage three: compiled by stage two's cppgm; equal to stage two
#   dev/libcppgm_lowir.*                       the LowIR library, compiled by stage two's cppgm
# The host compiler links every stage and supplies the standard library.
set -euo pipefail

host=${1:?usage: build_release_tools.sh <host compiler> [make argument ...]}
shift
root=$(cd "$(dirname "$0")/.." && pwd)
stage=obj/release
library_flags='-pthread -fPIC -fvisibility=hidden -fvisibility-inlines-hidden'

make -C "$root/dev" all CXX="$host" CPPGM_HOST_CXX="$host" "$@"
make -C "$root/pa35" compare-inception CXX=../dev/cppgm CPPGM_HOST_CXX="$host" \
  INCEPTION_OBJ_ROOT_BASE="../$stage/pic" INCEPTION_BIN_ROOT_BASE="../$stage/bin" \
  INCEPTION_EXTRA_CC_FLAGS="$library_flags ${INCEPTION_EXTRA_CC_FLAGS:-}" "$@"
# Third-stage shared objects were compiled by cppgm-self with library flags.
# Only the library-specific objects need rebuilding when that compiler changes.
make -C "$root/dev" clean-lowir-library OBJ="../$stage/library"
make -C "$root/dev" lowir-library CXX="$root/$stage/bin/selfhost/cppgm-self" CPPGM_HOST_CXX="$host" \
  OBJ="../$stage/library" LOWIR_LIBRARY_REUSE_OBJDIR="../$stage/pic/inception/shared/release" "$@"
