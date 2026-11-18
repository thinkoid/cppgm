# Closing the native Arm compiler rebuild gap

The release comparison times two Arm executables of cppgm building the same 498 translation units at O3 on a 16-core Ampere Altra VM. Clang 22 builds the reference executable. cppgm builds the candidate. Every timed rebuild must reproduce all 498 object hashes and the linked compiler. The release target is a self-built / Clang-built wall-time ratio of 1.05 or less. Child CPU time measures compiler work across all workers. The release target applies to the committed Linux compiler. Apple Silicon has a separate ABI and execution lane.

## How much remains

| Compiler source and generator | Clang-built cppgm | Self-built cppgm | Wall gap | Two wall blocks | Child CPU gap |
| --- | ---: | ---: | ---: | ---: | ---: |
| Current branch, 6ceb479e8 | 11.93 s | 13.00 s | **+8.99%** | +9.06%, +8.93% | +10.72% |
| Development R167, variable bit test and earlier experiments | 12.19 s | 12.99 s | +6.50% | +6.06%, +6.95% | +7.65% |
| Development R175, partial inlining and earlier experiments | 12.22 s | 12.93 s | **+5.84%** | +7.02%, +4.66% | +8.62% |
| Development R176, adds final virtual-call lowering to R175 | 12.25 s | 13.14 s | +7.29% | +8.01%, +6.57% | +8.06% |

R167, R175 and R176 identify archived experimental builds. Each row compares two executables built from that row’s source. R175 recorded the smallest wall gap, with one of two blocks inside 5% and an A/A ratio of 0.988. R167 used less relative CPU and had more consistent wall blocks. The branch needs a **3.67% reduction in its own wall time**, about 0.48 seconds per rebuild, at its current Clang baseline. R175 would need another 0.79% at its own baseline. Source changes can move both times, so compare generators on a fixed source before promoting an experiment.

## What the measurements locate

Holding the *current* compiler source fixed changes which experiment to promote. Building 6ceb479e8 with the R167 generator saved **2.57% CPU** on the native six-file replay versus building it with the committed generator. The two blocks saved 2.60% and 2.54%. R175 saved **2.17% CPU**, with gains of 2.33% and 2.01%. All three resulting compilers produced identical outputs on the six inputs. Start with R167 as the positive control. R175’s smaller self/Clang wall ratio alone would have picked a different starting point.

An independent experiment held the compiler source fixed at a0bb0662a. Two versions of the cppgm code generator, the committed version and the development build R153, each built that source. Those two executables then compiled identical inputs and produced identical outputs. The development generator saved **2.64% wall time** (13.19 to 12.84 seconds) and **3.11% child CPU**. Both comparison blocks improved, by 3.17% and 2.11%. The A/A ratio was 0.979. This makes the combined changes a candidate for integration. It leaves the contribution of each individual change open.

A 997 Hz user CPU-clock profile of the current commit recorded **140,493 samples in self-built cppgm and 124,061 in Clang-built cppgm**. A second pair of profiles at R153 provides a cross-check. Each sample is grouped by the instruction at the sampled address. A stall may be charged to an instruction after the load that caused it. This VM exposes software performance events, so cache misses and branch mispredictions remain unmeasured.

| Sampled instruction | Current self-built | Current Clang-built | Current difference | R153 difference |
| --- | ---: | ---: | ---: | ---: |
| Load/store outside an SP- or FP-relative address | 38,060 | 30,449 | +7,611 | +6,709 |
| Conditional branch | 28,469 | 25,749 | +2,720 | +1,717 |
| Width conversion or bit-field operation | 2,222 | 357 | +1,865 | +1,777 |
| SP- or FP-relative load/store | 12,588 | 11,257 | +1,331 | +961 |
| Jump or return | 3,185 | 2,154 | +1,031 | +1,019 |
| Move or constant materialization | 10,552 | 11,898 | −1,346 | −1,179 |

Grouping current samples by symbol owner puts 5,916 excess samples in semantics, 3,418 in LowIR and the optimizer, and 2,819 in syntax. The first two account for 57% of the 16,432-sample difference, compared with 64% at R153. Changes to the Arm instruction selector can improve the code executed in all of those modules. For two concrete lookups, the current self/Clang PC counts were 2,510/2,027 for `NameLookup::own_declarations` and 795/544 for `TypeTable::find_function`. Inlining moves work between categories. Also, a stack address held in an ordinary register counts in the first table row.

An independent QEMU replay on the later R176 development build shows the same direction for data access. Compiling the loop vectorizer executed 114.2 million more non-SP/FP-relative memory instructions, 47.2 million more jumps/returns and 32.9 million more width operations than the matching Clang-built compiler. It executed **30.8 million fewer** SP/FP-relative memory instructions. The vector-selector and host-environment inputs also had fewer frame-relative accesses and more other memory accesses. This points first to redundant data traffic, aggregate transfers and control flow. A wholesale allocator rewrite has weak support. Arm and x86 already share live segments, interference tracking, phi webs and parallel register moves. Arm and Wasm share spill/local slot reuse and eligible whole-object storage decisions. [Allocation comparison](aarch64-optimization-gaps.md#which-decisions-the-targets-share)

### Replacing one set of compiler objects at a time

I rebuilt the same 498 translation units with Clang using the PA35 compiler flags, then relinked a self-built compiler with just one group of those objects replaced. Relinking the unchanged objects reproduced the bootstrap executable byte for byte. Each hybrid compiled all six inputs into the same objects in both timing orders.

| Clang-produced part of the compiler | Objects replaced | Change in CPU to compile six files |
| --- | ---: | ---: |
| Optimizer | 59 | **−4.87%** |
| Semantic analysis and types | 92 | **−2.91%** |
| Syntax | 19 | **−2.64%** |
| AArch64 backend | 24 | −1.66% |
| Lexing and preprocessing | 27 | −1.21% |
| Lowering | 63 | −1.12% |
| Remaining objects | 214 | +0.07% |
| Whole compiler under the common PA35 flags | 498 | −12.49% |

For the optimizer-only swap the two blocks saved 5.25% and 4.50%, against A/A variation of 0.43%. Start by comparing the code each producer emits *for* the optimizer, then for semantic lookup and syntax. Relinking can change code layout and which weak definitions the linker selects. The table measures each replacement against the same baseline, so adding its rows would overstate what the experiment establishes.

A second pass narrowed the search using the same cached objects and about ten seconds per comparison. Swapping **only `opt/value_simplify.cpp` saved 1.64%** of total replay CPU (0.78% and 2.50% in the two blocks). Replacing constant propagation, CFG cleanup and jump threading together saved 1.12% (1.08% and 1.16%). Replacing `sema/lookup.cpp` and `sema/type_table.cpp` together saved 1.00%. Replacing `opt/memory_forwarding.cpp` alone saved 0.79%. The smaller controls help select functions where an assembly difference matters to a real compile. The 171.9-second attribution campaign included generating the 498 Clang objects once, building two fixed-source controls and timing all ten comparisons. The four follow-up swaps reused those objects. Cache by source, flags and compiler digest so further short comparisons pay only the relink and replay cost.

## Which changes to try together

### 1. Recover the fixed-source gain from R167

Build the committed compiler source with R167 as the positive control. Screen Arm allocation and branch layout, Arm instruction selection, and the shared LowIR changes as three independent groups. Then combine the two winners. If their gains overlap, remove one group at a time and remeasure on the same compiler source.

For example, `NameLookup::own_declarations` tests a variable bit with a constant, a left shift, an AND and a conditional branch. R167 substitutes a right shift and `tbz`. Check masked shift counts, zero and high bits, and both branch polarities. For allocation, preserve the x8 indirect-result convention and Darwin’s x18 reservation. For layout, reuse block weights and verify phi edges, indirect labels and unwind entries.

### 2. Improve the code generated for the optimizer

Start with `Simplifier::process_block`. Both compilers entered it 81,625 times on the loop-vectorizer input. The self-built compiler executed 108.61 million instructions there against Clang’s 93.36 million. `MemoryForwarding::process` had 67,686 entries each and executed 63.92 versus 57.92 million instructions. Match the busiest load and branch PCs to their definitions in optimized LowIR. Try one change for repeated object-field loads and one for branch or argument placement. Rebuild just these compiler objects, relink, and replay before regenerating the whole compiler.

Semantic lookup provides an independent check. In `NameScopes::search_level`, two return words go through stack memory on their way to x0/x1, but that reload ran only 6,800 times in this input. Both compilers also copy the 72-byte `Type` on entry to `TypeTable::canonical_of`. Count how many *avoidable* reloads a proposed rule removes across functions. Reuse the shared storage facts and require a private slot or a proved unmodified address on every path. Cover partial overlaps, escapes, volatile operations and exceptional exits. [Storage facts](../../dev/src/machine/frame_lifetimes.h) · [Memory forwarding](../../dev/src/opt/memory_forwarding.cpp)

### 3. Shorten fast paths in small functions

Both compilers entered `MemoryForwarding::may_alias` 811,216 times. Five eager argument moves from x0–x4 to x19–x23 account for 4.06 million of cppgm’s 33.88 million instructions in that function. Clang leaves the arguments in place at entry and executes 27.75 million instructions. The whole cppgm function executed only 120,403 non-tail calls. Keep arguments in the incoming registers through the cheap tests, then move just the values live into the path containing the call. Those five moves alone are 0.15% of the whole input. Count additional eligible sites before extending the allocator.

On the same input, R176 entered the out-of-line `ParserState::at` 384,583 times and called `ParseTokenStream::fill` 45,151 times. Clang’s out-of-line entry ran 11,757 times. Test a cached-token or capacity check with the existing partial-inliner, keeping allocation and growth out of line. Compare total work in caller and callee and check text size. An alternative for the same pattern is x86-style shrink wrapping on one call-free return region. Test saves, CFI, cold calls, multiple returns and Darwin frame chains before enabling that on Apple. [Partial inlining](../../dev/src/opt/inliner.cpp) · [x86 shrink wrapping](../../dev/src/native/select/shrink_wrap.cpp)

### 4. Defer final virtual calls pending an isolated gain

The R176 experiment replaced two vtable loads and an indirect call with a direct call to `PPLexer::next`. Two source-stack methods took that edge 447,413 times, yet the whole probe executed more instructions than R175. A two-unit Linux oracle passed all 16 combinations of optimization level and caller/definition producer. The optimized caller had two direct relocations for final calls and retained both open virtual branches, including a covariant return through a secondary base. R176 improved the full rebuild’s CPU ratio and worsened its wall ratio. Leave this change out of the first batch.

The application workload remains a separate check. At a0bb0662a explicit NEON measured 1.000× Clang throughput, memory 1.008× and lookup 0.853×. Five portable public programs ranged from 0.962× for Bubblesort to 2.394× for FloatMM. The later R176 lookup kernel executed 1.9% fewer guest instructions than Clang, with 2.08 million additional unconditional jumps. Both compilers used the same number of data accesses. Clang rotates the probe loop and arranges a conditional backedge. Use this as an independent test of branch layout and dependent-load scheduling. It gives no estimate of the gain on compiler self-build. [Native applications](aarch64-optimization-gaps.md#native-linux-arm-rebuild-and-generated-programs)

## Validate once per batch

| When | Run | Evidence needed to advance |
| --- | --- | --- |
| Each edit on x86 | Incrementally build the host compiler, regenerate an affected real Arm object and disassemble the hot function. Run its existing PA39 Perl fixture at O0–O3. Run the corresponding Apple-target fixture for an ABI or frame change. | Intended instructions or memory operations change. A positive and an adversarial input produce the expected result under QEMU or the mixed Clang oracle. |
| Each independent idea | Use PA35 `probe-self-object` and `probe-self-link` with a frozen compiler source and object set. Replace only the compiler objects that exercise the changed rule. Count executed instructions in the named functions on two real inputs. | Show executed sites, changed bytes and an identical output object when the before/after runners compile the same source. A hybrid isolates a rule's effect on those linked objects. |
| Two or three compatible ideas | Keep each change on a separate commit. Use the candidate generators to build the same frozen cppgm source and run those compilers on a pinned native replay. Compare the individual ideas, their combination and a repeat of the unchanged control on the same inputs. | Retain every observation and output digest. Prefer a gain larger than the warmed A/A variation with agreement in both block orders. For a smaller change, combine complementary rules or repeat the paired blocks. Keep two untouched translation units, e.g. `lower/expression_lowering.cpp` and `sema/class_deduction.cpp`, for a check outside the six-file set. Drop a consistently losing change. If a combination loses, remove one group at a time and retest the same compiler source. |
| A surviving batch | Time one full native rebuild comparison, with A/A, ABBA and BAAB. Alternate which compiler runs first in independent repeats near 1.05. Hold the VM exclusive, reuse frozen inputs and compare all object and executable hashes. | Report both wall blocks, child CPU and the Clang-built baseline. A changed compiler can slow down its own baseline. Use the fixed-source generator comparison to distinguish that from a true codegen win. |
| An integrated commit that reaches the target | Run the repository's strict report, debug-info checks, PA35 through PA5 and inception, PA36 release check, PA39 Linux and native Apple Silicon, shared Wasm coverage, architecture/placement audits and standard x86 compile comparison against main. Refresh the kernel/public panel, including NEON. | Qualify the exact commit on native Linux Arm. Carry through CI's test-first dependencies and opt-in PR benchmarks. |

The leaf-arithmetic fixture took 4.02 seconds on the x86 development host. The single-case student command is `make -C pa39 check TEST=tests/quality/700-leaf-arithmetic.t`. The existing PA35 object and relink probes allow cheap, explicitly mixed builds. Normal compiler builds still need to invalidate objects when the compiler changes. [PA39 tests](../../pa39/Makefile) · [PA35 probes](../../pa35/Makefile) · [Benchmark commands](../../benchmarks/aarch64/README.md)

On the native VM the six-file replay took a median **9.1 seconds** across 11 archived compiler pairs. Its CPU ratio moved in the same direction as the full rebuild’s child CPU in eight of ten transitions and as full elapsed time in six of ten. Rank correlations were 0.86 and 0.76 respectively. Median absolute A/A variation was 0.35%, with a maximum of 0.74%. Each compiler processed the same source stack, name scopes, lookup, loop vectorizer, vector selector and host environment files. The six cores ran in parallel, one per file, each with warmups, A/A, ABBA and BAAB. All 84 objects matched their per-file controls in each replay. Per-file totals overweight expensive files and the sample deliberately includes workloads likely to respond to the optimizations.

The reusable maintainer replay reproduced a known fixed-source improvement in **10.1 seconds**, measuring 3.15% less child CPU versus 3.11% on the full corpus. Its inputs are a frozen checkout, its PA35 build log and generated headers, and two executable paths. It saves the input identities, exact compiler arguments, timings and object hashes. Run it on a Linux Arm host with six available cores, using a new output directory for each comparison. The runner and original observations are included with the performance evidence.

```sh
python3 aarch64-native-replay.py --checkout "$frozen" --build-log "$bootstrap_log" \
  --generated "$generated_headers" --reference "$baseline_cppgm" \
  --candidate "$candidate_cppgm" --cores 1,2,3,4,5,6 --output "$new_result_dir"
```

A short replay can miss contention and the slowest worker in a 16-job build. When the short panel is ambiguous, a single warm full-corpus ABBA block on this VM costs about 50 seconds and covers every translation unit. Use it to choose between whole batches. Reserve the complete calibrated run and cross-target release checks for the survivor. Cache the baseline executable and generated headers by content and keep each measured object directory separate.

Use the QEMU three-file panel for instruction counts. Across 79 matched trial pairs through R166 its level correlated with native wall ratios (Spearman 0.94). Across the last 12 of those trials the correlation was 0.06, and changes above one basis point predicted the direction of the next native wall change in five of nine comparisons. Extending the recent window through R176 gave 9 correct directions in 15 and a rank correlation of 0.34 across 20 builds. The long trend reflects large past improvements. The full native measurement cost a median of about 149 seconds in the measured positions alone, before bootstrapping and correctness validation. That cost belongs at the batch boundary.

## x86 and target coverage at the pause

The final compiler commit, 6ceb479e8, and origin/main at 90ebfa8f4 each compiled the frozen `semantic_overload.cpp` on one pinned x86 core. At O0 through O3 the retired-instruction changes were −0.010%, +0.031%, +0.032% and +0.042%. Wall-time changes were +4.73%, −3.36%, −0.08% and +0.36%, with A/A controls of +4.29%, −0.67%, −1.22% and +0.11%. All 144 outputs matched and the counters recorded zero CPU migrations. On this input there is no material increase in compiler work.

PA39 passed all 22 controls. The strict course report passed 11,325 cases, debug-info checks and PA35 through PA5 passed, and inception reproduced cppgm. The Apple cross-target package contains 265 objects, 52 course executables and 256 SDK link cases. Native macOS execution remains a release check. The Arm timings in this report were measured on Linux.

The PA39 placement check found no misplaced tests. The full placement scan recorded 10,690 tests and zero placement findings. At the preceding compiler commit, 7eaf2af02, all 17 ordinary PA36 limits passed, but the course implementation missed the maintainer release margin for compile scaling (2.67, required at most 2.40). A single pinned repeat of the speed checks with the same compiler binaries measured 2.18. The student result was 2.39 and the recomputed release report passed 17/17. Both sets of observations are retained.
