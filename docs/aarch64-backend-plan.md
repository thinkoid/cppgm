# PA39 — optimized AArch64 backends for Linux and macOS

Base revision `4bcc7ed57`. This is a maintainer plan for an optional assignment following PA38. The Linux profile is little-endian `aarch64-linux-gnu`, Armv8-A with FP and Advanced SIMD (NEON), LP64, AAPCS64 and ELF64. Linux gives us an independent cross toolchain, a user-mode emulator on x86, and native Arm runners for the same binaries. PA39 also covers Apple Silicon with the explicit target `arm64-apple-macos11`, the Apple calling convention, binary64 long double, Mach-O and SDK linking. The existing Intel `linux` and `macos` profiles retain their published meaning. Reserve 32-bit ARM, SVE/SME and optional CPU extensions for later work. [Arm ABI specifications](https://github.com/ARM-software/abi-aa/releases)

Build on PA34's optimizer and PA37's machine interfaces. PA38 C inputs make good additional interoperability tests. Students can complete PA39 using C++ and LowIR alone. Use the existing `cppgm`, `lowiropt` and `lowir2native` entry points. The compiler should produce its own instructions and relocatable objects. The first end-to-end deliverable is a small static Linux program. Hosted C++ interoperation can then grow independently of the course executable linker, as it did for the original native backend. [PA37 handout](../pa37/README.md) · [PA38 handout](../pa38/README.md) · [Compiler architecture](../spec.md)

## Where to enter the compiler

| Existing code | Implication for PA39 |
| --- | --- |
| `dev/src/target_model.h`, `target/target.cpp`, `native/target.h` | `Architecture::AArch64` exists. The target and calling-convention enums lack an Arm profile. Non-Wasm layout currently selects x87, and the host default examines the OS alone. Preserve the existing meaning of the LowIR profile `linux` and give AArch64 its own explicit identity. Initially run cross-produced artifacts on Arm with an explicit target. Qualify a native compiler default separately. |
| `dev/cppgm.cpp`, `driver/host_environment.cpp`, `driver/toolchain.cpp`, `backend/compile.cpp`, `dev/lowir2native.cpp` | Target selection reaches preprocessing, source dumps, compilation of each unit and linking via different paths. The source driver dispatches its own object mode. The standalone backend sends non-Wasm programs to x86 and has an x86 runtime retry. Route each supported path by architecture, including errors. The optional LowIR C library also calls the native object compiler directly. Gate its accepted profiles until its Arm object API is qualified. |
| `dev/src/machine/` and PA37's boundary probe | Reuse call arguments, phi inputs, frame lifetimes, switch planning, global fixups and exception-region facts. The probe already represents overlapping W/X registers, a four-float return and a separate indirect-result register. Extend it with actual ABI and encoder tests. Give Arm its own selected instruction stream consumed by its encoder and MIR dumper. [PA37 AArch64 review](wasm32-assignment/machine-boundary-review.md) |
| `dev/src/native/mir/`, `native/object/`, `native/link/` | The native MIR has two-address operations, x86 register masks and x87 conventions. The ELF writer emits `kEmX86_64`. Share proven architecture-independent ELF section, symbol and DWARF utilities where they fit. Keep relocation selection, instruction patching, prologues and runtime entries architecture-specific. |
| PA8 LowIR object metadata | Existing `shape` and `result_shape` retain homogeneous element kinds and counts. Union alternatives are counted separately, and field offsets are absent. Check unions, padding, nested arrays and nontrivial records against an AAPCS64 classifier using completed type layouts. Add any missing typed boundary fact to source lowering, LowIR validation, reader, writer and optimizer together. Preserve existing target profiles and serialized inputs. [LowIR aggregate shapes](../pa8/lowir.md) |

## Implementation sequence

| Stage | Work | Exit test |
| --- | --- | --- |
| 1. Target contract and test driver | Write the PA39 target/ABI handout and define tool versions, target spellings, accepted output modes and diagnostics. Select the layout before preprocessing and semantic analysis. Cover plain `char` and `wchar_t` signedness, wide literals, binary128 `long double`, varargs, C++ member pointers and predefined macros. Isolate target headers and runtime lookup from the x86 host. Register target sources in `dev/frontend_source_sets.mk`. | Source assertions and serialized LowIR agree with the published ABI and a pinned Clang target probe. A conflicting LowIR target, x86 assembly, or an unavailable Arm output mode fails explicitly. |
| 2. First runnable object | Add a selector and direct A64 encoder under `dev/src/aarch64/`. Start with integer/pointer operations, loads/stores, calls, branches, phi edge copies and a simple correct stack frame. Emit ELF64 ET_REL with symbols, alignment and call relocations. Use LLD as the independent test linker and a tiny supplied Linux entry point. | A `cppgm --target=aarch64-linux-gnu -O0 -c` function links to an independently assembled caller and returns the expected value under QEMU. Inspect the relocation before linking. Exercise a loop, a taken branch and a call across objects. |
| 3. Public ABI and complete scalar lowering | Classify GP and FP/SIMD registers, stack overflow arguments, homogeneous float/vector aggregates of 1–4 elements, indirect results in x8, `va_list` register-save areas, by-value copies and nontrivial C++ parameters. Add indirect calls, switches, scalar FP, i128 and binary128 helpers. Model call clobbers, 16-byte SP alignment, link-register saves and the partially preserved SIMD bank. | Cross separately compiled caller/callee pairs in both directions against Clang. Include exhausted argument banks, over-alignment, an indirect callback, register-preservation witnesses and a variadic call. Run each at O0–O3. [AAPCS64](https://github.com/ARM-software/abi-aa/blob/main/aapcs64/aapcs64.rst) |
| 4. Programs and runtime | Support local/global data, address materialization, page/low-12 and call fixups, alignment, branch reach and range diagnostics or veneers. Add an Arm startup and the minimal static course link path for objects and archives. Use a pinned AArch64 sysroot and explicit target linker for hosted interoperability. Extend in slices through constructors, RTTI, C++ ABI helpers, DWARF CFI and exceptions. Define the supported PIC/TLS modes and runtime dependencies in the handout. | Both drivers execute a multi-unit program. Independent tools accept the produced objects. Test data from another unit, archive extraction, a constructor, and throw/catch across a mixed-producer frame when EH lands. Test unsupported relocation, target mismatch and missing runtime inputs. |
| 5. Optimized code generation | Feed the existing LowIR optimizer Arm-specific legality and cost facts. Add register allocation with W/X and overlapping SIMD views, call-aware liveness, spill-slot reuse and frame elimination. Prioritize address/immediate folding, conditional branches/selects, load/store pairs, and NEON lowering on measured loops. Check baseline atomics and acquire/release ordering on Arm. Scope later tuning by CPU feature and preserve strict FP semantics. | O0–O3 agree on outputs and public ABI. Simple register-only leaf kernels incur zero stack traffic at optimized levels. Loop bodies meet independently calibrated bounds for loads/stores, spills and code size. A native run measures gains on the kernels that motivated each optimization. |
| 6. Course integration and release | Add `pa39/README.md`, the ABI and quality contracts, a Makefile, wrappers and runnable target-specific fixture lanes. Add PA39 to root `EXPERIMENTAL_PAS` in the same change as its Makefile, expose `make test-pa39`, and document it in `ROADMAP.md`. Update fixture placement/discovery, reference wrappers, scaffold/source lists, the student document allowlist and export verification. Keep this plan maintainer-only. | A fresh export builds the assignment, can run one focused fixture and passes the full PA39 lane with the pinned tools. The ordinary report still selects the same assignments. |

Treat stages 1–2 as the first reviewable change. For wider language/runtime coverage publish an operation and feature matrix as the implementation grows. Mark a feature supported when it passes through both source and LowIR entry points with the documented runtime. Track full hosted-library builds, Arm self-hosting and stage-to-stage object identity as later qualifications with their own evidence.

## Apple Silicon deliverables

Share A64 instruction selection, register allocation, NEON and the encoder between the two profiles. Select Darwin before parsing so target headers, fundamental types, constant evaluation and the serialized `arm64_macos` ABI agree. Keep x18 reserved. Non-leaf functions maintain the x29 frame chain. Cover caller extension of narrow arguments, naturally packed named stack arguments, odd-register i128 pairs, empty records, indirect results, homogeneous aggregates, pointer-based variadic lists and structors returning `this`. Exercise these contracts against independently compiled Apple-target Clang objects in both directions. [Apple ARM64 ABI](https://developer.apple.com/documentation/xcode/writing-arm64-code-for-apple-platforms)

Produce arm64 Mach-O relocatable objects directly, including symbol decoration, branch/page/GOT/TLV relocations, CFI and initialization sections. Extend PA25’s in-process course linker to write a signed Mach-O executable with dyld startup and pointer rebases. PA39 owns Arm relocations, archive selection, startup and code-signature controls. Hosted SDK and dylib interoperability follows PA26 and uses the platform linker. From x86 Linux, inspect objects and executables, compare LowIR round trips, and execute the freestanding fixtures' linked machine code under QEMU using their original segment addresses. For release, transfer object hashes and mixed-producer fixtures to an Apple Silicon runner, link against the actual SDK, verify code signatures and execute under dyld. Include typed exceptions, cleanup, thread-local initialization and pthread isolation. Native macOS hardware is also needed for any Darwin performance claim. A compiler hosted natively on Apple Silicon is a separate qualification because today's native compiler build requires x87 host long double. [Mach-O LLD](https://lld.llvm.org/MachO/index.html)

## Browser-hosted native executable gate

The PA39 browser gate runs the WASI compiler and the packaged incpption Emscripten LLD in a worker. The Wasm runtime of these tools is independent of the executable target. Feed cppgm objects into the GNU LLD driver for Linux ELF or the Darwin driver for Mach-O, with target-specific startup and library inputs. The existing incpption build already contains both linker implementations. Verify a two-unit source program and an actual browser download for each combination of x86-64/AArch64 and Linux/macOS. Leave the ordinary PA25–PA28 contracts intact. [Browser cross test](../scripts/experimental/README.md#download-native-programs-from-the-browser)

## Testing from the x86 development host

| When and where | What to run | What it establishes |
| --- | --- | --- |
| Every change, x86 host | Use pinned LLVM tools to assemble operand and encoding boundary cases, inspect emitted ELF headers/sections/symbols/RELA records, disassemble named functions and link Arm objects. Run the same target source directly and through PA37's raw and optimized LowIR round trips at O0–O3. For the optimized path use `-S -emit-lowir`, `lowiropt -O0`, then `-c -fno-lowir-passes` at the original level. Compare the resulting objects byte-for-byte to cppgm's direct object. | Detects accidentally emitting x86, illegal encodings, incorrect fixups and ABI facts lost in text or optimization. Instruction encodings have exact oracles. Whole-function quality uses upper bounds that admit equivalent solutions. [Existing checker](../scripts/check_wasm.pl) · [PA37 quality contract](../pa37/quality.md) |
| Every PA39 PR, x86 Linux | Invoke pinned `qemu-aarch64 -cpu cortex-a53` directly on each static guest. Cross-compile reference objects with the same target and baseline ISA. Use handwritten expected results and an independent all-Clang reference for defined behavior. Link cppgm callers to Clang callees, then reverse them. Add reproducible seeded CFG/ABI cases. Use stdout or a memory checksum for values wider than an exit status. For hosted executables pass `-L` with the matching target sysroot. | Tests Linux execution, ABI and object interoperability without a VM or a host-wide binfmt install. Report missing tools as a prerequisite failure on the selected lane. Use the common parallel runner, per-process limits and cached reference inputs to keep turnaround short. [QEMU user-mode execution](https://www.qemu.org/docs/master/user/main.html) · [Clang cross-compilation](https://clang.llvm.org/docs/CrossCompilation.html) |
| Scheduled and release, native Linux AArch64 | Transfer the exact cross-built binaries and fixture manifest to an Arm runner. Verify hashes and rerun the same tests, especially unwinding/signals, threads, atomics and hosted startup. Use a GCC-produced object set as another ABI witness. A hosted `ubuntu-24.04-arm` runner is one option for correctness. | Checks emulator blind spots and the real kernel/runtime. Keeping the same artifacts distinguishes execution differences from build differences. [GitHub runner specifications](https://docs.github.com/en/actions/reference/runners/github-hosted-runners) |
| Optimization qualification, stable Arm hardware | Use fixed CPU/ISA settings and frozen inputs for integer, FP, memory, calls and vector loops plus one checked application workload. Time immutable baseline and candidate guest binaries on the same machine. Verify output, calibrate A/A noise and run paired ABBA blocks. Retain all observations, tool versions, binary hashes, code sizes and available hardware counters. Report Clang/GCC comparisons with the same ISA, options and runtime. Measure x86-host compiler speed and peak memory separately. | Native measurements establish throughput. Set published budgets after baseline calibration. Reserve emulation time for CI scheduling. If hardware is unavailable, report structural quality and mark native performance qualification pending. |

**Feasibility check on this checkout.** On x86-64 Linux, Clang 22.1.2 compiled a four-float aggregate callee for `aarch64-linux-gnu -march=armv8-a -O2`. A separate assembly caller supplied 1, 2, 4 and 8 in s0–s3. LLVM reported `EM_AARCH64` and an `R_AARCH64_CALL26` relocation to the callee. LLD linked a static executable without a sysroot. QEMU 10.2.1 with `-cpu cortex-a53` ran it and returned the expected 15. QEMU came from the distribution package extracted into a temporary directory. This exercises the proposed independent test path ahead of the cppgm implementation. [LLD ELF cross-linker](https://lld.llvm.org/)

For production changes, run the PA39 controls plus the repository's strict report, debug-info checks, PA35 through PA5, PA36 backend smoke, architecture/file/placement/format audits and harness tests. Run inception for self-host changes and the PA36 release check for release qualification. Re-run PA37 and the optional PA38 native/Wasm controls when changing shared target facts. Keep target-independent regressions in their earliest owning lane and Arm-specific controls in PA39. Publish implementation-specific performance regressions in the maintainer lane and calibrated behavioral bounds in the student lane. [Testing and references](../TESTING_AND_REFERENCES.md)

## Implementation and qualification

PA39 now emits and links Linux AArch64 and Apple Silicon objects from C++ and
LowIR. Its fixtures cover the ABI, 64-byte aligned by-value arguments, dynamic
frames, a fixed-seed full-width register preservation probe, NEON, atomics,
initializers and address rebasing, archives, exceptions and TLS. The course
driver accepts source or objects and produces the executable in one invocation.
Applications using the operating system's C++ runtime can pass the ordinary
target startup files and archives or SDK interfaces to LLD. The browser test
exercises cross-unit exception handling with the GNU/Linux C++ runtime on both
architectures and imports a libSystem symbol on both macOS architectures.

The PA39 cross lane runs Linux guests on Cortex-A53 QEMU and packages the exact
Linux executables, Mach-O objects, and course-linked Mach-O executables for
native replay. The Mach-O checker verifies every SHA-256 code-signature page.
Apple's SDK, dyld, unwind runtime and pthread tests run on the macOS workflow.
Local x86 runs cover cross-generation and emulation. Native performance and
execution under dyld require results from their respective hardware runners.

For performance, freeze a bundle with
`python3 scripts/aarch64_benchmarks.py build obj/pa39-bench` on x86. Provide
`CPPGM_AARCH64_GXX` for cross GCC and the checker variables for Clang, LLD
and QEMU. The default compares cppgm O0 and O3. Pass `--baseline PATH` to
compare two immutable O3 compilers. Both baselines also have independent GCC
and Clang O3 witnesses. The common driver writes an eight-byte checksum per
workload. It exercises PA36's hash table and observer call, PA39's memory loop,
and integer and floating-point NEON. On quiet Linux AArch64 run
`python3 scripts/aarch64_benchmarks.py measure obj/pa39-bench obj/pa39-times`.
Each block retains every observation, A/A calibration and ABBA or BAAB order.
`--perf` adds separate hardware-counter readings when supported. Hosted CI
timings are observations from shared machines. Native throughput budgets are
pending calibration on stable Arm hardware.

PA37 and PA39 use the same Perl fixture discovery and sidecar reader. PA39
uses PA37’s `source`, `units`, `flags`, `target`, `llvm_interop` and `commands`
conventions. Target-specific checks inspect ELF and Mach-O relocations, code
size and stack traffic. Additional C++ translation units live beside their
main fixture. The primary executable checker and both native replay tools are Perl.

### Recorded x86 qualification

The checked PA39 fixture set has 22 controls. The Linux replay executed 416
cross-built guests. The Darwin bundle contains 265 objects, 52 course-linked
images and 256 Apple SDK link cases. The cross host checked the code-directory
hashes and executed the SDK-free programs. Native macOS replay and native Arm
timings remain open. The PA37 suite passed all 216 controls and nine regressions
after sharing its Perl reader and quality-bound checks with PA39.

On the O3 `transform` fixture, address folding, register phi copies and paired
register saves reduced the emitted function from 201 to 149 instructions and
from 26 to six stack accesses. Clang 22.1.2 emitted 35 instructions and zero
stack accesses. Cross GCC 14.3, Clang and cppgm agreed on all eight bytes of
each benchmark checksum. The x86-host compile comparison with upstream produced
byte-identical objects. Its 9.95% wall-time A/A difference exceeded the measured
A/B difference, so it supports no compile-time speedup claim. The PA36 release
check initially missed its compile-scaling margin at 2.60. A second measurement
of the speed group yielded 2.39 and cleared the 25% margin, with all 17
release gates passing. Both sets of observations were retained.
