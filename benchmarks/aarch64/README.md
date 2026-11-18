# Measuring Arm code generation

On x86 Linux, QEMU can execute the same AArch64 ELF files that the native Arm
benchmark lane measures. Use emulation to find expensive instruction sequences.
Use the native lane for hardware timings and counters.
[Measured self-build and program comparisons](../../docs/performance/aarch64-qemu-20261117.md)

## Programs and NEON

Build the kernels and the five public programs once. The kernel builder uses
Clang, the Arm GCC cross compiler and LLD. For the public programs, set
`ARM_LINK_CXX` to a cross compiler driver that links a static Arm executable
and `ARM_SYSROOT` to its target sysroot. The PA39 workflow records the
toolchain versions. [CI configuration](../../.github/workflows/aarch64-benchmarks.yml)

```sh
python3 scripts/aarch64_benchmarks.py build obj/arm-kernels
python3 scripts/portable_public_benchmarks.py --target aarch64-linux-gnu \
  --clang clang++-22 --sysroot "$ARM_SYSROOT" --linker "$ARM_LINK_CXX" \
  --check-only --runner qemu-aarch64 --output obj/arm-public

python3 scripts/aarch64_qemu_profile.py guests --kernels obj/arm-kernels \
  --public obj/arm-public --output obj/arm-qemu-times
```

For a short iteration, add `--only Stanford/Bubblesort` or `--only vectors`.
Use `--repeats 8` to average repeated short runs within each block position.
The runner verifies guest file hashes and checks every invocation against the
original stdout checksum. It records host CPU seconds, elapsed seconds and the
order of runs in `observations.jsonl`. The `AB.ratio` in `qemu-results.json`
is cppgm time divided by Clang time. Its reciprocal is relative throughput.

To compare two cppgm builds directly, pass the older bundle as
`--baseline-public` or `--baseline-kernels`. The runner checks that both
bundles used the same workload sources, arguments and expected output.

```sh
python3 scripts/aarch64_qemu_profile.py guests --public obj/arm-public \
  --baseline-public obj/arm-public-before --output obj/arm-qemu-before-after
```

To count guest instructions, use a plugin-enabled build of the same QEMU
version and its `tests/tcg/plugins/insn.c` plugin. The optional
`contrib/plugins/hotblocks.c` plugin records block addresses, instruction
counts and execution frequencies. Match its addresses to the frozen ELF with
`llvm-objdump -d`. Each count is a separate, untimed replay.

```sh
python3 scripts/aarch64_qemu_profile.py guests --public obj/arm-public \
  --only Stanford/Bubblesort --output obj/arm-qemu-counts \
  --qemu "$PLUGIN_QEMU" --insn-plugin "$INSN_PLUGIN" --hotblocks-plugin "$HOTBLOCKS_PLUGIN"
```

## Last-stage compiler rebuild

Prepare two static Arm compiler executables from the same checkout. A is
cppgm built with Clang at `-O3`. B is cppgm built by cppgm at `-O3`. Build A
in a separate directory so the x86 tools in `dev/` remain available. Set
`ARM_CLANGXX` to the Clang cross command, including the target triple, GCC
toolchain paths, `-static` and `-fuse-ld=lld`. Use an absolute executable
path for `ARM_LINK_CXX`, for example a wrapper that invokes
`aarch64-linux-gnu-g++-14 -static -fuse-ld=lld "$@"`. Both builds use that
driver to discover the same target C++ headers.

```sh
bench="$PWD/obj/arm-last-stage"
mkdir -p "$bench/src"
git archive HEAD dev | tar -x -C "$bench/src"
make -C "$bench/src/dev" -j24 cppgm OBJ="$bench/clang-objects" \
  CXX="$ARM_CLANGXX" CPPGM_HOST_CXX="$ARM_LINK_CXX"

cat > "$bench/run-seed" <<EOF
#!/bin/sh
exec qemu-aarch64 -cpu cortex-a53 "$bench/src/dev/cppgm" "\$@"
EOF
chmod +x "$bench/run-seed"
make -C pa35 -j24 cppgm-self CXX="$bench/run-seed" CPPGM_HOST_CXX="$ARM_LINK_CXX" \
  INCEPTION_OBJ_ROOT_BASE="$bench/first-stage" INCEPTION_COMPILER_FLAVOR=selfhost \
  INCEPTION_OBJECT_BUILD_JOBS=24 INCEPTION_BUILD_MISSING_FIRST=0 \
  INCEPTION_EXTRA_CC_FLAGS='--target=aarch64-linux-gnu -fno-strict-aliasing'

python3 scripts/aarch64_qemu_profile.py rebuild --clang-built "$bench/src/dev/cppgm" \
  --self-built "$bench/first-stage/bin/selfhost/cppgm-self" --host-cxx "$ARM_LINK_CXX" \
  --jobs 24 --aa-blocks 1 --blocks 2 --output "$bench/paired"
```

The default order is four runs of A for calibration, followed by `ABBA`
and `BAAB`. Each run starts with an empty object directory and uses the same
host-side cross linker. The runner checks every object and the linked compiler
byte for byte against the first rebuild. `timings.jsonl` contains all elapsed
and aggregate CPU times. Elapsed time includes output verification. CPU time
is the sum for the build process and its children. `summary.json` reports
paired B/A ratios. `outputs.jsonl` records the object and executable hashes.

For a faster code-generation check, replay one real compiler input with the
existing PA35 probe. This example counts the instructions each compiler
executes to build the loop vectorizer, then compares their output objects.

```sh
mkdir -p "$bench/probes"
for side in seed self; do
  cat > "$bench/probes/count-$side" <<EOF
#!/bin/sh
exec "$PLUGIN_QEMU" -cpu cortex-a53 -plugin "$INSN_PLUGIN,inline=true" \
  -plugin "$HOTBLOCKS_PLUGIN,inline=true" -d plugin -D "$bench/probes/$side.log" \
  "$bench/paired/$side.elf" "\$@"
EOF
  chmod +x "$bench/probes/count-$side"
  make -C pa35 probe-self-object SOURCE=dev/src/opt/loop_vectorizer.cpp \
    PROBE_CXX="$bench/probes/count-$side" CPPGM_HOST_CXX="$ARM_LINK_CXX" \
    INCEPTION_OBJ_ROOT_BASE="$bench/probes/common" PROBE_OBJ_ROOT_BASE="$bench/probes/$side" \
    INCEPTION_EXTRA_CC_FLAGS='--target=aarch64-linux-gnu -fno-strict-aliasing' || exit 1
done
cmp "$bench/probes/seed/selfhost/shared/release/opt/loop_vectorizer.o" \
    "$bench/probes/self/selfhost/shared/release/opt/loop_vectorizer.o"
grep 'total insns' "$bench/probes/"*.log
```
