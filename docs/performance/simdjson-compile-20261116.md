# simdjson compile-time investigation, 2026-11-16

The smaller lead over Clang comes mainly from the optimizer, rather than
preprocessing or semantic analysis. Clang also performs well relative to GCC
on this workload. cppgm's frontend advantage is larger than its advantage
once optimized kernel generation is included.

## Dedicated Intel observations

The retained v0.9.2 measurement is commit
`2a915cfbfed25b5f95be7b7e5c345dfe87f11666`, Intel Xeon Platinum 8581C,
GCC 15.2 and Clang 21.1.8. These are one-object, single-process compilations
of unmodified simdjson 5.1.1, with the same source and options described in
[the benchmark guide](../../benchmarks/simdjson/README.md). Linking is excluded.

| Backend | cppgm CPU | Clang CPU | GCC CPU | Paired Clang / cppgm |
|---|---:|---:|---:|---:|
| Scalar | 1.59 s | 2.48 s | 5.34 s | 1.568x |
| SSE | 1.78 s | 3.09 s | 6.385 s | 1.738x |

CPU values are medians of retained AB observations; the final column is the
original median paired-block ratio, not a ratio of independently rounded
medians. A/A checks showed no calibration variation above 2%.
[CI run and raw artifacts](https://github.com/vishvananda/cppgm/actions/runs/43794025927).

## Where the advantage goes

Local diagnostic measurements use the exact v0.9.2 source, built by GCC 15.2
at O3 with debug symbols, no LTO/PGO, and the same Clang 21.1.8 version.
The host is Xeon E5-2696 v4; its timings are not replacements for the dedicated
Intel measurements. Both compilers use GCC 15's installed C++ headers.
Three local observations per cell give these median CPU times:

| Backend | cppgm syntax only | Clang syntax only | cppgm O0 | Clang O0 | cppgm O1 | cppgm O3 | Clang O3 |
|---|---:|---:|---:|---:|---:|---:|---:|
| Scalar | 0.29 s | 1.28 s | 0.34 s | 1.52 s | 2.36 s | 2.46 s | 4.89 s |
| SSE | 0.47 s | 2.04 s | 0.54 s | 2.48 s | 2.85 s | 2.71 s | 5.38 s |

O1 already incurs most of cppgm's optimizer cost; the problem is not confined
to O3-specific loop passes. The small SSE O1/O3 reversal is local timing
variation, not evidence that more optimization is intrinsically cheaper.

Separate three-repeat hardware instruction counts make the change in work
clearer, without relying on clock frequency:

| Backend | cppgm O0 | Clang O0 | cppgm O3 | Clang O3 |
|---|---:|---:|---:|---:|
| Scalar | 1.313 billion | 3.910 billion | 9.397 billion | 14.025 billion |
| SSE | 1.915 billion | 5.692 billion | 10.580 billion | 18.024 billion |

The roughly 3x O0 instruction advantage becomes 1.49x / 1.70x at O3,
close to the dedicated Intel compile ratios. This is not just wall-time noise.
The O3-minus-O0 differences include changes to lowering and code generation;
they are not isolated optimizer timers.

Cycle-sampling profiles put about 80% of scalar cppgm compilation under
optimization. The frontend is about 12–18% in separate `--stats` runs;
instruction selection is about 120–140 ms and encoding about 7 ms locally.
Clang's time trace also shows substantial optimization and machine-code work.
The final output is only a few dozen functions: cppgm is not simply emitting
thousands of unwanted out-of-line helpers.

Temporary pass instrumentation isolates the repeated work:

| Backend | Local function-pipeline visits | Scalar-round invocations | CFG builds | Dominator builds | Jump-threading invocations |
|---|---:|---:|---:|---:|---:|
| Scalar | 683 | 2,790 | 8,032 | 4,245 | 1,145 |
| SSE | 853 | 3,471 | 8,383 | 4,435 | 1,197 |

These include helpers subsequently inlined or pruned; they are not counts of
final machine functions. The large stage-two parser bodies and their inlined
copies account for much of the work. Inlining invokes local simplification,
and jump threading repeatedly reconstructs graph and dominance facts as it
changes edges. In the scalar instrumented run, jump threading takes about
787 ms, value simplification 354 ms and memory forwarding 329 ms. These timers
include nested work and must not be added to CFG/dominator times again.

## Retained changes

The implementation is based on v0.9.4 (`4b05c87802afb837551466590e3eb75c8099ec82`).
Its optimizer differs from the profiled version only by an aggregate-slot
change, so measurements compare immutable v0.9.4 baseline/candidate images.

- Constant propagation retains a current instruction-to-block map because it
  replaces operands without moving instructions. Dead-code removal updates
  the entries it unlinks, allowing the next pass to reuse that map too.
  `--verify-passes` checks retained analysis after these changed passes.
- Jump threading stops looking for a compare after its existing copy budget
  makes the block ineligible. Dominator intervals answer ancestor cases
  before a nearest-common-dominator walk, and reject a use outside a candidate
  successor's dominance region before walking the tree.
- The driver's Wasm stack-size parser is extracted from argument dispatch.
  This reduces `parse` from 243 to 231 code lines, preserving diagnostics and
  the 240-line audit limit.

The retained micro-optimizations reduce instructions by 0.125% for scalar,
0.113% for SSE and 0.104% for the frozen O3 compiler workload. Frozen O0 is
unchanged to within 0.006%. These are small reductions in compiler work; local
wall/CPU timing variation does not establish a material elapsed-time gain.
They do not turn the simdjson comparison into a much larger speedup.

A broader EH-block cache was rejected: its extra bookkeeping increased scalar
instructions about 0.38%. A narrower redundant-CFG-rebuild prototype also
showed no useful instruction reduction. Neither is in the retained patch.
Larger gains require reducing repeated whole-function optimizer analysis
without losing useful transformations or changing their decisions.

## Validation and evidence

Scalar, SSE and the frozen workload match the baseline object bytes at O0,
O1, O2 and O3. Twelve Wasm stack-size command-line probes match exit status,
stdout and stderr. The final rebuilt candidate's SHA256 matches the immutable
image used in the retained measurements.

All 467 compiler objects match byte for byte in PA36's full source identity
check. The strict course report passes all 11,314 tests (the Wasm lane was
rerun with the pinned tools on PATH after initial missing-tool setup errors).
Debug-info tests, PA36 correctness smoke, self-host through PA5 and inception
all pass. Architecture audits, the file audit and formatting with CI's pinned
Clang-format 21.1.8 pass; the file audit retains seven pre-existing header-body
warnings. Clang-format 22 initially reported a difference in an untouched
file, so the final audit uses the same formatter version as CI.

Raw commands, compiler images, profiles, pass counts, byte comparisons and
counter observations are retained locally under
`/mnt/vizier/cppgm-simdjson-compile-analysis-20261116/`. The retained measurements
are in `prototype-dominance/`; `rejected-eh-cache/` contains the rejected
experiment. `validation-progress.log` records the broader checks. No raw build
artifacts or benchmark input changes are committed with the implementation.
