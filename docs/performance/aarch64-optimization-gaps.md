# Where the AArch64 backend spends its instructions

This investigation compares Linux AArch64 executables under QEMU user mode
10.2.1 on an x86-64 host, using the Cortex-A53 CPU model. The compiler workload
compares two Arm executables of **cppgm** built from matching sources, one
by Clang 22.1.2 and one by cppgm. The application workload compares programs
built by the two different compilers. The initial full rebuild took **1.337×**
as long in the self-built compiler as in the Clang-built compiler. After the
core rebase, the 498-object rebuild took **1.022×** as long under QEMU.
[Previous measurements and reproduction commands](aarch64-codegen-20261118.md)

## Attribution on the compiler itself

Each column below counts millions of guest instructions to compile the same
frozen cppgm translation unit at O3. For each compiler revision, the Clang-built
and cppgm-built compilers produced byte-identical target objects. Different
revisions can produce different machine code. This makes the Clang-built
compiler a control for the extra work of changing the compiler algorithm itself.

| Change in the self-built compiler | Vector selector | Loop vectorizer | Host environment |
| --- | ---: | ---: | ---: |
| Previous measured backend | 1,280 | 7,121 | 2,418 |
| Free argument registers between calls, select integer immediates and remainders | 1,185 | 6,694 | 2,260 |
| Use x86 per-block intervals and the interference tree, prefer a phi partner's register | 1,151 | 6,536 | 2,195 |
| Add the exceptional predecessors already used on x86 | 1,091 | 5,712 | 2,006 |
| Select from comparison flags, fuse branches, remove redundant extensions | 1,032 | 5,320 | 1,882 |
| Copy objects using bounded register transfers and wider loops | 991 | 5,153 | 1,822 |
| Enable loop-literal holding and fix NEON packing scratch, a57b21310 | 990 | 5,159 | 1,823 |
| Select narrow comparisons, indices and constant power-of-two scales, 81df21b7c | 872 | 4,427 | 1,589 |
| Keep scalar FP operations in SIMD registers and select widening and narrowing, c916a559d | 872 | 4,427 | 1,589 |
| Fold shifted operands and 32-bit conversions, pair callee saves and use the allocated indirect-call register, 836846bb9 | 856 | 4,386 | 1,568 |
| Transfer independent scalar, SIMD and spilled phi inputs directly, d3e0a40bd | 844 | 4,273 | 1,537 |
| Clang-built cppgm control at d3e0a40bd | 567 | 2,664 | 998 |
| Keep dying scalar arguments in their outgoing registers, 4c5e16765 | 845 | 4,263 | 1,537 |
| Combine adjacent halves of a packed integer load in the shared optimizer, e9f3089c2 | 845 | 4,264 | 1,537 |
| Clang-built cppgm control at e9f3089c2 | 568 | 2,672 | 999 |
| Share x86 block frequencies when simultaneous integer values exceed Arm register capacity, 0b396b840 | 837 | 4,112 | 1,499 |
| Clang-built cppgm control at 0b396b840 | 568 | 2,678 | 1,000 |
| Compare switch values against immediate operands and branch directly to cases with no phi transfers | 804 | 3,959 | 1,442 |
| Use the shared dense-switch planner to select Arm jump tables, 16bbf1f0d | 794 | 3,920 | 1,427 |
| Clang-built cppgm control at 16bbf1f0d | 568 | 2,679 | 1,000 |
| Write addresses, narrow results and phi reloads directly to the allocated register, 745793f39 | 761 | 3,785 | 1,372 |
| Clang-built cppgm control at 745793f39 | 568 | 2,678 | 1,000 |
| Resolve small parallel scalar copies with the same scheduling rule on x86 and Arm, e388a3f7b | 751 | 3,745 | 1,354 |
| Fold frame offsets and the zero register into memory operands, 5f5dcaa8f | 741 | 3,708 | 1,337 |
| Place unconditional jump targets without breaking existing fallthrough, ca01d358d | 741 | 3,708 | 1,337 |
| Keep an indexed address live when a second field displacement cannot fold, b08f2acd8 | 740 | 3,693 | 1,334 |
| Pair adjacent stores and fall through after conditional phi copies, 0f09ba077 | 735 | 3,672 | 1,326 |
| Clang-built cppgm control at 0f09ba077 | 568 | 2,678 | 1,000 |
| Pass naturally aligned eight-byte integer aggregates as scalars, e81d18f06 | 734 | 3,463 | 1,315 |
| Use the named slot as the incoming aggregate home, f0cd28853 | 733 | 3,450 | 1,313 |
| Clang-built cppgm control at f0cd28853 | 568 | 2,582 | 1,000 |
| Select paired Arm loads, 3e4dc2762 | 734 | 3,450 | 1,313 |
| Use constant select operands and fuse multiply-add addresses, 709d060ce | 726 | 3,419 | 1,301 |
| Clang-built cppgm control at 709d060ce | 568 | 2,582 | 1,001 |
| Hold invariant address strides, unroll short four-lane loops and share x86 phi webs, 09b98b886 | 716 | 3,381 | 1,284 |
| Fold shifted multiplies, transfer ABI pieces directly, schedule backedge moves and copy through allocated addresses, a247c587b | 708 | 3,341 | 1,271 |
| Keep loop-invariant masks in a register and coalesce zero extensions, 3ff5a4cb2 | 700 | 3,286 | 1,252 |
| Clang-built cppgm control at 3ff5a4cb2 | 568 | 2,585 | 1,002 |
| Pair adjacent typed fields and weight all uses of coalesced names, before the rebase | 654 | 3,115 | 1,182 |
| Fold a reused power-of-two subscript into each Arm address | 653 | 3,059 | 1,170 |
| Place single-use field addresses beside their accesses, then rebase onto 90ebfa8f4 and build 0.9.7, c33a4bad2 | 648 | 3,036 | 1,161 |
| Clang-built cppgm control at c33a4bad2 | 568 | 2,585 | 1,004 |

The largest allocation gain on the compiler inputs came from exceptional
control flow. Arm previously reserved every cross-block value for the whole
function if the function had a handler. Sharing the exceptional predecessor
graph lets it preserve a value across the particular call that can unwind into
its handler. The five public programs showed essentially unchanged counts in
that experiment. A public-only screen would have undervalued the change.

### Last-stage compiler rebuild

A is the AArch64 executable of cppgm compiled by Clang. B is the AArch64
executable of cppgm compiled by cppgm. Each then compiles the entire compiler
from an empty object directory under QEMU. Each revision has its own matching
A and B. The four A-only calibration builds precede an ABBA and a BAAB block.
Elapsed seconds and aggregate child CPU seconds below are arithmetic means
of the four comparison runs per executable. Ratios come from the paired
blocks. Concurrent host activity affects both.

| Compiler revision | Jobs | A elapsed | B elapsed | B/A elapsed, per block | B/A CPU, per block | A/A elapsed |
| --- | ---: | ---: | ---: | --- | --- | ---: |
| Shared live segments, a57b21310 | 24 | 164.6 s | 159.6 s | 1.239×, 0.826× | 1.256×, 1.040× | 0.884× |
| Pressure-aware allocation, 0b396b840 | 24 | 204.5 s | 238.7 s | 1.213×, 1.132× | 1.206×, 1.200× | 1.028× |
| Dense switch selection, 16bbf1f0d | 16 | 251.7 s | 301.7 s | 1.060×, 1.321× | 1.089×, 1.280× | 0.937× |
| Paired stores and conditional phi fallthrough, 0f09ba077 | 16 | 222.1 s | 266.3 s | 1.178×, 1.220× | 1.162×, 1.221× | 1.090× |
| Fused multiply-add addressing, 709d060ce | 16 | 265.9 s | 313.5 s | 1.234×, 1.128× | 1.196×, 1.167× | 1.078× |
| Allocated object-copy addresses, a247c587b | 16 | 253.1 s | 285.9 s | 1.143×, 1.115× | 1.163×, 1.142× | 1.050× |
| Paired callee saves, d68506fc0 | 16 | 230.7 s | 326.2 s | 1.345×, 1.514× | 1.189×, 1.400× | 0.991× |
| Checked bit-test branches, 977a2ea57 | 16 | 223.1 s | 247.6 s | 1.046×, 1.178× | 1.058×, 1.210× | 1.093× |
| Rebased backend, v0.9.7, c33a4bad2 | 16 | 208.6 s | 213.4 s | 0.953×, 1.091× | 0.971×, 1.108× | 1.003× |

At 0b396b840, the paired ratios were **1.173× elapsed** and **1.203× aggregate
CPU**. Both compilers rebuilt exactly the same 497 objects and the resulting
executable matched the self-built input. The earlier checkpoint's wall blocks
went in opposite directions. The absolute seconds between checkpoints also
include changes in host load. At 16bbf1f0d the paired slowdown was 1.190×
elapsed and 1.185× CPU. Both compilers reproduced the same 497 objects and
the self-built input executable in every build. At 0f09ba077 the paired ratios were
1.199× elapsed and 1.192× CPU, again with identical outputs across all
497 translation units and the final link. The
matched rebuild at 709d060ce took 1.181× as long by the wall clock and
1.182× by aggregate CPU. Both builders reproduced the same output hashes
across four calibration builds and eight comparison builds.

At c33a4bad2 the full compiler grew to 498 objects. Every object and the
linked compiler matched in all 12 builds. Aggregate child CPU time was
1.039× Clang-built cppgm's. The two elapsed blocks ranged from 0.953× to
1.091×. The earlier callee-save revision was slower in both blocks at
1.345× and 1.514×. That run started over after an interrupted calibration.
Changes in elapsed time across these runs include host scheduling and QEMU
translation costs.

### Instructions across all 497 translation units

For 709d060ce we also replayed each compiler invocation under the instruction
plugin. Every output matched the SHA-256 recorded by the timed rebuild. Across
all 497 object compilations, Clang-built cppgm executed **456.442 billion**
guest instructions and self-built cppgm executed **594.428 billion**, or
**1.302×** as many. This excludes orchestration and the final link. The three
original profile inputs measured 1.28×, 1.32× and 1.30× at this revision.

| Input source directory | Clang-built cppgm, billions | Self-built cppgm, billions | Self / Clang |
| --- | ---: | ---: | ---: |
| sema | 91.24 | 119.26 | 1.307× |
| lower | 80.39 | 105.07 | 1.307× |
| native | 75.48 | 98.06 | 1.299× |
| opt | 69.27 | 90.66 | 1.309× |
| wasm | 56.69 | 73.47 | 1.296× |
| aarch64 | 16.37 | 21.11 | 1.289× |

The directory identifies the source being compiled. The excess recurs across
the frontend, optimizers and backends. The larger directories account for
more of the total because they require more work from both compilers.

A subsequent whole-rebuild timing at a247c587b averaged **253.1 s** with
Clang-built cppgm and **285.9 s** with self-built cppgm. The two paired
wall-time ratios were 1.143× and 1.115×, with an overall 1.129× elapsed
slowdown, 1.152× in aggregate CPU and 1.050× A/A wall calibration. All
497 objects and the linked compiler matched for each run.

The instruction-count replay of this same revision used **456,655,057,014**
guest instructions with Clang-built cppgm and **580,397,148,082** with
self-built cppgm. All 994 individual executions reproduced the corresponding
object from the timed run. The instruction ratio fell from 1.302× to 1.271×.
The 1.129× wall-time ratio above measures the separately timed full builds.

## From hot blocks to candidate changes

The QEMU instruction plugin counted all executed guest instructions. For
attribution we replayed the same commands with the hot-block plugin reporting
every entry. We disassembled each measured ELF, credited each instruction in
a translated block with its execution count, and grouped the result by opcode,
operand and symbol. The largest difference between reconstructed and counted
totals for the three compiler inputs at a57b21310 was below 0.02%. QEMU
translation blocks and successful guest instructions can differ around exits.
Frame-relative memory includes arguments, locals, callee saves and spills.
The move category includes register copies, FP transfers and materializing
constants. These categories locate work for inspection. Causal estimates come
from separately built compiler variants.

| Workload and observation | Disassembly and resulting decision |
| --- | --- |
| Compiling the loop vectorizer, before segmented allocation | cppgm executed about 1.48 billion more SP/FP-relative memory instructions than Clang-built cppgm. Reused x86 live intervals and exceptional edges before changing instruction patterns. At a57b21310 the excess was 417 million. |
| Compiling the loop vectorizer, after segmented allocation | Moves and constant materialization still cost about 882 million excess instructions and explicit width operations cost 422 million. In `restore_definition_order`, comparing a loaded byte with a small enum constant took two copies, two extensions and a register comparison. AArch64 can compare the already normalized byte against an immediate. |
| Identifier scanning | `PPLexer::take_identifier_bytes` copied a table base and a byte subscript into scratch registers and extended the subscript again before loading. The Arm selector now consumes the same typed indexed address as x86 and uses the target's extend-and-scale addressing forms. Signed byte/short indices have separate treatment. |
| Hash lookup | The hot loop built each of two 64-bit multiplicands with four instructions per iteration. The existing loop-literal pass initially missed a guarded loop with no dedicated preheader. Allowing these effect-free copies in its dominating test removed **33.6 million** instructions on this workload alone. |
| Object copies | Two of the most frequently entered blocks of the self-built compiler copied eight bytes with seven instructions per trip. Arm now loads both ends before storing short copies, uses paired 128-bit transfers in longer loops, and chooses the direction when ranges can overlap. This follows the Wasm small-object strategy and preserves page boundaries. |
| Matrix multiplication | At a57b21310 cppgm executed about 715 million more move/materialization instructions and 718 million fewer non-frame memory instructions than Clang. The total was already lower than Clang's. Allocating scalar floats to SIMD registers and selecting FP loads, stores and arithmetic directly reduced cppgm's count from 1,837 million to 1,709 million. |
| Bubble sort | Clang carries one adjacent element in a register. Its hot comparison reads one new element, while cppgm reads both. At a57b21310 non-frame memory instructions were 37.9 million versus 19.0 million. Both paths return to a latch placed after the function epilogue, adding a second opportunity to improve the loop. A loop-carried load transformation needs a proof covering both the swap and the no-swap backedges. |
| Puzzle | A loop trip copied a W register immediately before comparing its low 32 bits and branching. This sequence ran 52.6 million times. Folding single-use truncations into their consuming W comparisons and combining shifted operands removed 79 million instructions on this input. |
| SIMD and the memory kernel | The NEON arithmetic kernel ran exactly 192,938,048 guest instructions with either producer. In the memory workload the most heavily weighted checksum block was the same six instructions in both ELFs. Attribute time in the common harness before drawing conclusions about the kernel body. |

On the loop-vectorizer compile, 2.49 billion excess instructions remained at
a57b21310. After the operand and phi changes, 1.61 billion remained. The same
Clang-built control compiled the input in about 2.66 billion instructions in
both comparisons. Direct inspection separated the largest remaining classes.

| Excess executed instructions over Clang, millions | a57b21310 | d3e0a40bd | 0b396b840 | 16bbf1f0d | 0f09ba077 |
| --- | ---: | ---: | ---: | ---: | ---: |
| Moves and materializing constants | 882 | 413 | 420 | 303 | 204 |
| Frame-relative loads and stores | 417 | 345 | 160 | 160 | 99 |
| Other loads and stores | 266 | 266 | 265 | 265 | 253 |
| Explicit integer widths | 422 | 112 | 112 | 91 | 61 |
| Conditional branches | 52 | 52 | 52 | 25 | 25 |
| Unconditional jumps and returns | 92 | 91 | 94 | 92 | 71 |
| Calls | 2 | 2 | 1 | 1 | 1 |
| Other instructions | 363 | 328 | 329 | 304 | 280 |

At 0b396b840 the same three compiler inputs also ran without instrumentation
on a pinned x86 CPU. The median self-built / Clang-built CPU-time ratios were
**1.24×**, **1.27×** and **1.28×**, respectively. Four paired blocks alternated
ABBA and BAAB after an identical-compiler calibration. The vectorizer’s
individual ratios ranged from 1.19× to 1.67×. Each run checked the emitted
object. At 0f09ba077 the corresponding time ratios were **1.086×**, **1.209×**
and **1.282×**. The host-environment input ranged from 1.089× to 1.584× over
its four blocks. These observations measure one translation unit at a time.

The frame-relative count includes prologues and epilogues. For example,
`MemoryForwarding::may_alias` reserves 352 bytes and saves ten callee-saved
registers even on early-return paths. x86 already moves some saves and restores
down into the paths that need them. That is a separate opportunity from choosing
which values should spill. The nearly unchanged ordinary memory and branch counts
also show where additional improvements in register-only instructions have
limited leverage.

### Choosing a spill priority

Three private comparisons used the same inputs to separate the value of
prioritization from its compile-time cost. Sorting every non-straight-line
function by raw use counts put the compiler input panel at **839 / 4,194 /
1,516 million** guest instructions. It increased the hash and memory kernels
from 139.1 to 147.5 million and 42.1 to 44.2 million. Replacing raw counts
with x86’s Wu–Larus block-frequency estimator improved the compiler panel
to **825 / 4,101 / 1,482 million**, but still increased the hash kernel.

A second allocation only after observing a spill protected the kernels but
added optimizer work. The Clang-built compiler took 2,718 million instructions
on the loop vectorizer in that experiment. The retained policy first counts
simultaneous integer and pointer values in the existing live segments. It uses
the preserved-register limit across calls and the full GPR limit elsewhere.
Only functions exceeding that lower bound pay for loop frequencies and
priority sorting. The Clang-built control used 2,678 million instructions,
versus 2,672 million before the priority experiment. The self-built compiler
saved 152 million on the same input. The nine application counts retained the
earlier gains.

### Switch dispatch

At 0b396b840 the self-built compiler executed 223 million `mov` instructions
with an immediate or a special register operand on the loop-vectorizer input.
Disassembly showed enum switches repeatedly materializing a constant and
comparing two registers. Encoding an immediate in `cmp` and branching directly
to a case with no edge transfers removed 153 million guest instructions.
Arm now uses the same density and range planner as x86 and Wasm. A dense Arm
switch subtracts the low case, performs an unsigned bounds check, computes a
PC-relative table address with `adr`, and branches through a table of local
branches. Holes go to the default. A case that needs phi transfers keeps
its explicit edge. This removed another 39 million instructions on the same
input. The jump table needs no embedded host address on Linux or Darwin.

Immediate and special-register moves fell to 126 million after both changes.
The full move and materialization category still exceeds Clang by 303 million.
The hottest remaining copies include arguments shuffled around calls, scalar
values temporarily written to the stack on phi edges, and narrow values
extended in a scratch register before a second move. Those are distinct from
ordinary register-pressure spills.

### What happened to the remaining copies and branches

The loop-vectorizer input at 16bbf1f0d had a hot parallel copy that stored
registers into temporary frame slots, reloaded each into scratch, then copied
it to its destination. Writing addresses and canonical narrow values into
their assigned registers saved 135 million instructions on that input.
For small parallel copies, both native backends now emit a move whose
destination nobody still needs to read. A cycle saves one value in scratch
and redirects its readers there. Arm can also schedule full-sized scalar
spill slots. An independent simultaneous-assignment oracle exercised every
mapping of one through six destinations to registers or distinct literals,
including cycles and repeated sources, **126,125 cases**. Larger or mixed
Arm transfers retain the existing fallback. The x86 caller uses the shared
scheduler for small general-register copies. Its existing general resolver
still handles its memory-address and SIMD dependencies.

Bubble sort's conditional swap showed where selection and placement interact.
The old latch sat after the function's return. Moving it beside the swap
removed 18.8 million instructions. Arm also kept the array element's address
in a register because an indexed A64 load cannot also encode a field
displacement. That removed another 6.4 million. In the taken arm, one
`stp wB, wA, [xBase]` now covers the two adjacent nonvolatile stores without
a separate address calculation. At 0f09ba077 Bubble sort runs 107.7 million
instructions against Clang's 88.6 million. Its two consecutive reads can also
share one instruction. `ldp wA, wB, [xBase]` saves 12.5 million more, bringing
the count to **95.2 million**. The selector checks the exact read widths,
address, stride, volatility, single-use index and distinct result registers.

We also tried forwarding the next iteration's element through a loop phi. The
proof used the identical SSA index arriving on the backedge and split the
taken entry edge so a zero-trip loop acquired no memory read. The transformation
removed one load per iteration. Before improving edge layout it **increased**
the count from 120.5 to 126.7 million. With paired stores and the improved
layout it moved 107.70 to 107.39 million. The extra phi moves and branches
nearly canceled the load saving, so this transformation remains an experiment.

### Aggregates at function boundaries

The typed LowIR representation of cppgm’s own `Type` packs several bitfields
in eight bytes. Both Arm ABIs pass it in one general-purpose register.
Previously the optimizer recognized only a single eight-byte member. In
`normalize_integer`, cppgm wrote the incoming value to the stack, copied it
into a second home, and then read the fields. Clang used the incoming register.
Applying the existing scalar-boundary pass to all known integer-class shapes
of size and alignment eight reduced the frame from 80 to 64 bytes. The
self-built compiler saved 209 million instructions on the loop vectorizer.
The Clang-built control also saved 96 million, so part of the benefit was
less work to optimize the target translation unit.

Two-word aggregates require separate treatment. An eight-aligned pair can
start at an odd general register on Linux. An `i128` carrier can skip that
register, and the Darwin stack layout also depends on alignment. A trial
scalarized general two-word results and only sixteen-aligned two-word
arguments. Its compiler panel used 745 / 3,618 / 1,335 million instructions,
versus 734 / 3,463 / 1,315 million with the one-word change. We retained
the one-word rule. The mixed-Clang fixture checks bitfields, both pair
alignments, a floating homogeneous aggregate and a returned pair.

Arm can still avoid redundant homes for parameters wider than a word.
The x86 selector already puts a single-use incoming aggregate into its named
slot when its first access is a whole-object copy. Wasm resolves the same
copy to a slot using LowIR address facts. Arm and Wasm now share that
whole-copy check. On Arm it applies to initial copies on a non-reentered
entry block with independent, suitably aligned slots. Cross-block reads of
the slot still use its original address. This removed another 12.8 million
instructions on the loop vectorizer.

## Generated applications

The starting column uses the previous published Arm checkpoint. The generated-program
columns count guest instructions in millions, including the harness and any
linked runtime. All nine binaries produced the expected output. The four
kernels exercise calls, hash lookup, object memory operations and SIMD. The
public panel contains the five fixed programs used in the previous comparison.

| Workload | Previous cppgm | cppgm at 16bbf1f0d | cppgm at 709d060ce | Clang 22 |
| --- | ---: | ---: | ---: | ---: |
| primes | 1,351.7 | 610.8 | 610.8 | 703.0 |
| Bubblesort | 171.1 | 145.8 | 95.2 | 88.6 |
| FloatMM | 2,382.5 | 1,218.7 | 1,218.7 | 1,923.0 |
| Puzzle | 837.1 | 469.2 | 458.0 | 407.8 |
| Treesort | 199.6 | 170.1 | 168.4 | 155.4 |
| calls | 91.8 | 74.4 | 74.4 | 61.3 |
| lookup | 356.1 | 139.1 | 132.7 | 113.6 |
| memory | 47.4 | 42.1 | 42.1 | 36.8 |
| vectors | 192.9 | 192.9 | 192.9 | 192.9 |

Two earlier changes had a larger effect on individual programs than on the compiler inputs. An argument that dies at a call
can already occupy its outgoing register. Intersecting eligible registers over
every use, including indirect targets and repeated arguments, saved **46.3
million** instructions on `primes`. In `lookup`, the two adjacent 32-bit fields
of a key now compile to one 64-bit load. A bounded same-block proof checks the
offset, operand widths, single uses and intervening effects. The wider load
carries no source-language alias-type promise. This removed **24.6 million**
instructions on `lookup`.

The remaining `lookup` probe computes a table address from a slot number and a
12-byte stride. Clang holds the stride in a register and uses `umaddl`. cppgm
initially materialized the stride and used separate multiply and add
instructions. At 709d060ce the selector emits `madd` to calculate the
whole address, saving 6.4 million instructions.
On `Treesort`, the allocator and C library also matter to interpretation. The
two binaries spend virtually the same 87 million instructions inside
`_int_malloc`, `__libc_malloc2` and `malloc`. The application function
`Trees(int)` accounts for most of the excess.

The complete memory kernel costs cppgm 42.1 million instructions to Clang’s
36.8 million. The common driver accounts for the same 31.5 million in both.
Inside `transform`, the figures are **10.61 million versus 5.30 million**.
Both compilers emit NEON. cppgm processes four integers per branch with
separate indexed addresses, vector multiply and vector add. Clang processes
eight, uses paired vector loads and stores and uses the integer multiply-
accumulate instruction. This differs from the explicit-SIMD kernel, whose
two binaries execute exactly the same instruction count.

### Application throughput under QEMU

The five public ELFs and the kernel executable are byte-identical between
0b396b840 and 16bbf1f0d for each producer. The same timed run applies to both
revisions. Each position averages five fresh emulator launches. The first
two four-position blocks compare Clang against itself, followed by four
alternating ABBA and BAAB blocks. Every launch checks exit status and output.
Throughput is Clang CPU time divided by cppgm CPU time. A value above 1 means
the cppgm-generated application ran faster.

| Workload | cppgm throughput / Clang | Range across four paired blocks | Clang / Clang calibration |
| --- | ---: | ---: | ---: |
| primes | 1.060× | 0.88–1.21× | 1.033× |
| Bubblesort | 0.805× | 0.74–0.97× | 1.042× |
| FloatMM | 1.086× | 0.87–1.20× | 1.107× |
| Puzzle | 0.812× | 0.70–0.88× | 1.006× |
| Treesort | 0.990× | 0.85–1.03× | 1.004× |
| calls | 1.176× | 0.81–2.20× | 1.215× |
| lookup | 0.896× | 0.87–0.98× | 1.218× |
| memory | 0.808× | 0.65–1.76× | 0.904× |
| vectors | 1.038× | 0.71–1.18× | 0.952× |

The geometric mean is **0.943×** for the five public programs and **0.969×**
for the four kernels. Bubble sort and Puzzle were slower in all four paired
blocks. SIMD ran identical instruction counts. Its paired blocks crossed 1.0.
The short calls and memory kernels had wide block ranges, and the identical
binary calibration on calls and lookup was more than 20% from 1. Treat small
time differences on this host as unresolved.

### Later measurements on the same workloads

After pairing stores and simplifying phi edges (0f09ba077), each timing
position used eight fresh emulator launches over six alternating paired
blocks, following two Clang/Clang calibration blocks. The public-program
geometric mean reached 0.989× Clang throughput and the four-kernel mean
reached 0.923×. Puzzle was slower in every paired block.

| Workload | Throughput vs Clang | Six-block range | A/A |
| --- | ---: | ---: | ---: |
| calls | 0.979× | 0.863–1.086× | 1.147× |
| lookup | 0.980× | 0.797–1.186× | 0.956× |
| memory | 0.760× | 0.628–1.057× | 1.006× |
| vectors | 0.995× | 0.844–1.101× | 1.071× |
| primes | 1.039× | 0.994–1.095× | 0.988× |
| Bubblesort | 1.025× | 0.910–1.180× | 1.024× |
| FloatMM | 1.090× | 0.930–1.230× | 0.908× |
| Puzzle | 0.858× | 0.797–0.955× | 1.045× |
| Treesort | 0.949× | 0.743–1.180× | 1.136× |

The memory transform runs eight elements per loop branch after enabling
the existing two-round vector unroll for short four-lane Arm loops. Its
inner function fell from 10.61 to 8.52 million instructions, versus 5.30
million with Clang. With both cppgm versions measured in the same six
paired blocks, throughput rose 1.083×, with five blocks improving. The
corresponding lookup comparison was 0.971× with a 0.867–1.599× range.
The smaller lookup instruction count has no resolved elapsed-time benefit
in that comparison.

The call-heavy kernel showed a different bottleneck. With x86's phi-web
construction, Arm can prefer the same register for incoming values from
several predecessors. Favoring just a backward predecessor made both calls
and Treesort worse. The whole-web preference removed 39.2 million
instructions from the loop-vectorizer compile. A liveness check for moving
one register copy across a conditional backedge and holding an expensive
integer mask across calls brought the call kernel to **61,341,775** guest
instructions. Clang used **61,341,776**. The explicit-SIMD kernel executed
**192,938,048** with either producer.

A narrow integer in Arm SSA already has canonical high bits, including
when spilled to an eight-byte home. Charging a zero extension's later uses
to its original value lets both names share that home across calls and
phis. At 3ff5a4cb2 this removed another 57.1 million instructions from the
loop-vectorizer compile and 6.4 million from the lookup application. The
three compiler-input ratios were 1.234×, 1.271×, 1.250× in table order.
The independent Clang-built cppgm controls reproduced each target object.

### Where the remaining compiler instructions execute

The loop-vectorizer translation unit isolates several different costs. The
table gives excess millions of guest instructions executed by self-built
cppgm over its matching Clang-built cppgm. The disassembly counts agree
with the independent instruction plugin within 0.01% on these runs.

| Instructions | Paired stores and phi fallthrough | Multiply-add addressing | Canonical zero extensions |
| --- | ---: | ---: | ---: |
| SP/FP-relative loads and stores | 98.8 | 82.2 | 95.0 |
| Other loads and stores | 253.2 | 208.1 | 193.9 |
| Moves and constant construction | 203.9 | 180.0 | 64.3 |
| Explicit width operations | 61.4 | 57.5 | 57.5 |
| Unconditional jumps and returns | 70.9 | 67.3 | 57.9 |
| Conditional branches | 24.8 | 22.1 | 21.0 |
| Calls | 1.5 | 0.2 | 0.1 |
| Remaining arithmetic and other instructions | 279.6 | 219.8 | 210.8 |

At 3ff5a4cb2 the largest difference among the named functions appearing in
both hot-symbol lists is `Simplifier::process_block`, at 132.2 versus 97.1
million instructions. A loop header loads a base pointer, adds 104, and
reloads through the computed address. Clang folds 104 into the load. The next
address calculation uses a shift and a separate add, while Clang folds the
shift into the add. In `MemoryForwarding::may_alias`, 958,795 entries pay for
the full prologue, including fast-return cases. The total is 46.5 versus
32.6 million. Reducing register copies has made address generation and
frame accesses a larger fraction of the excess.

The tree walk in the public Treesort executable illustrated a separate
control-flow cost. Its backedge targeted a move followed by a branch.
An identical move already fell through to the loop header. Retargeting
that edge using the x86 backend's short-tail sharing strategy removed
6.57 million executed instructions, bringing Treesort to 161.19 million
versus 155.45 million for Clang. The Arm pass preserves the original
labels, instruction addresses and frame records.

With callee saves grouped before named stack slots, the selector can use
consecutive `stp` and `ldp` pairs and combine the first transfer with the
stack adjustment. This cut 50.5 million more instructions from the loop-
vectorizer compile. It applies to ordinary exits as well as early exits.
On the three compiler inputs, grouping saves, coalescing canonical scalar
copies, folding through pointer facts and selecting narrow arithmetic
brought the self-built counts to 665.9, 3,157.9, 1,199.1 million, versus
567.7, 2,585.1, 1,001.6 million for Clang-built cppgm.

The nine-application timing at 3ff5a4cb2 used two calibration and four
paired blocks, with four launches at each position. Its geometric mean was
0.977× Clang throughput on the five public applications and 0.943× on the
four kernels. Puzzle was 0.821×, while FloatMM was 1.053×. The call-heavy
kernel was 0.851× on elapsed guest-process CPU despite the two producers'
instruction counts differing by only one. QEMU wall and CPU time also
depend on how the emulator translates and chains the guest blocks.

### Reused indices, spill priorities and public workloads

Weighting each coalesced register or spill slot by all its SSA uses saved
0.69 million instructions on the loop-vectorizer compile. Pairing adjacent
field accesses saved 11.2 million. In the disassembly of `opt::count_uses`,
two distinct base pointers used the same element number. The compiler kept
a separately shifted copy live for both. Expressing the power-of-two stride
on each typed LowIR index let Arm select `add xD, xBase, xIndex, lsl #6`.
This saved another 55.1 million instructions on the loop-vectorizer compile
and 12.5 million on the driver compile.

After the core rebase, the matched compiler-input ratios were **1.141×,
1.175× and 1.156×** in table order. Every output object matched. The
rebased source also ran the upstream quote-only include fixture as an Arm
ELF and emitted its arm64 Mach-O object. One local-return check combined
unsigned and signed internal callees with an external assembly function
that left its upper return bits set. Its Linux executable returned the
expected value. Both object formats encoded all 1,021 one-byte SIMD
broadcast immediates, including zero. A Linux execution checked 12,300
individual SIMD lane values against calculations compiled by the Arm
cross-compiler.

The six-block application timing before the rebase used four executions
per position and two A/A calibration blocks. The five public applications
had a geometric mean of **0.965× Clang throughput**. Puzzle was slower in
every block at 0.822× overall (0.778–0.908×). FloatMM was faster in every
block at 1.046× (1.033–1.066×). The four kernels averaged 1.069×, but
the memory kernel's A/A ratio was 1.291× and the lookup kernel's was
0.882×. The instruction counts and paired ranges give a firmer basis for
iteration on those two workloads than their elapsed averages.

### Scalar records and paired stores after the rebase

An address calculation between two adjacent stores prevented Arm from
selecting a store pair. Recognizing both instruction orders reduced
Bubblesort from 101.6 to 95.2 million guest instructions, against Clang's
88.6 million. The outputs of all nine public programs and kernels matched.

Reusing the shared one-word aggregate pass for records with subword alignment
let `Simplifier::resolve` read a field from the incoming register with
`ubfx`. Its original prologue stored the register to a new stack frame
and read the field back. The loop-vectorizer compile saved 78.7 million
guest instructions. The vector-selector compile spent 2.6 million more and
the host-environment compile saved 2.1 million. Checking both producers
at each optimization level also exposed a Darwin stack ABI difference.
After eight integer arguments and a byte, Clang passes an eight-byte
general-class record at offset 8. cppgm had placed it at offset 4. Linux
and Darwin now use the same eight-byte carrier for these records. Tests
exercise one- and two-word stack records with partial tails in both caller
directions. The Linux-hosted launcher ran the Mach-O program bytes.

### Native x86 compile performance against main

The release comparison used `origin/main` at 90ebfa8f4 and the feature at
cb4ae379e. GCC built both compilers at the same path. Each compiled the
frozen `semantic_overload.cpp` and headers on one pinned x86-64 Linux CPU.
At each level there were three A/A and six paired comparison blocks.
Every output digest matched, including across the calibration and comparison.

| Level | Retired instructions | Peak RSS | Wall time | A/A wall time |
| --- | ---: | ---: | ---: | ---: |
| -O0 | -0.010% | +0.08% | -0.08% | +12.84% |
| -O1 | +0.022% | +0.14% | -1.45% | -3.28% |
| -O2 | +0.030% | +0.07% | +2.23% | +2.58% |
| -O3 | +0.012% | +0.06% | +5.37% | +4.11% |

The earlier feature build at a6d120637 ranged from −0.010% to +0.023% in
retired instructions across the same four levels. On PA36's generated
function workload, doubling from 800 to 1,600 functions multiplied retired
instructions by 1.9933 on main and 1.9932 on that feature build. These are
Linux `perf stat` counters. The wall-time samples came from a shared host.

## Which decisions the targets share

| Decision | Implementations using it |
| --- | --- |
| LowIR simplification, inlining, loop transforms, address sinking and vectorization | x86, Arm and Wasm consume the shared typed optimizer. Profitability and instruction legalization depend on the target. |
| Dense switch range, density and default holes | All three targets share the same planner. x86 and Arm encode local branches and Wasm emits structured `br_table` dispatch. |
| Sequential storage for eligible addressable frame slots | All three call the same frame-lifetime analysis. Wasm and Arm also share the check for a whole incoming object copied into one named slot. |
| Bounded SSA predecessor walk, per-block live segments, loop-backedge phi writes, exception predecessors and the interference tree | Arm and x86 use the same implementation. The x86 selector supplies early and late reads for two-address instructions. Arm supplies separate read and write slots, reserved scratches, both register banks and the AAPCS64/Darwin call rules. |
| Reusing a storage location after its last use | Arm spills and Wasm locals use the same interval-slot pool, partitioned by compatible storage. The Wasm engine assigns physical host registers. |
| Spill priority and edge transfers | x86 estimates execution frequency, can split a range around loops and schedules parallel register and memory moves. Both native targets weight uses at their blocks, including a phi input at its predecessor. Arm retains start order when the live segments fit the register set and uses the shared phi webs to prefer a register already assigned to related transfers. It transfers registers and scalar spill slots directly when independent. Small scalar cycles can use the shared resolver and one scratch register. Complex edges retain the memory snapshot. Arm still budgets snapshot space conservatively. |
| Floating-point ABI | Linux and Darwin Arm use SIMD registers for scalar floating arguments and results. Arm keeps eligible scalar FP values in that bank through arithmetic. A value spanning a call can use a preserved GPR or a spill slot. Full-width vector preservation has different ABI rules. |

[Shared live segments](../../dev/src/machine/ssa_segments.h) ·
[Shared block frequencies](../../dev/src/machine/block_frequency.h) ·
[Shared switch planner](../../dev/src/machine/switch_plan.h) ·
[Shared interference tree](../../dev/src/machine/register_pressure.cpp) ·
[Shared exceptional predecessors](../../dev/src/machine/exception_predecessors.h) ·
[Shared storage pool](../../dev/src/machine/interval_slots.h) ·
[x86 allocation](../../dev/src/native/select/register_allocation.cpp) ·
[Wasm local allocation](../../dev/src/wasm/local_lifetimes.cpp)

## Measurement controls

We used the existing x86 procedure of screening on immutable binaries and
frozen compiler inputs, checking emitted objects and inspecting instructions
before changing policy. The Wasm procedure supplied the distinction between
deterministic execution counts, bounded code shape and elapsed time. Linux
and Darwin use the same selector with distinct ABI rules. Native Apple
Silicon and Linux Arm timings need separate hardware runs.

The mixed-producer PA39 fixtures exercise live values at an exception
landing, byte/short indexing and comparisons, saturation in a vectorized
loop, mixed-width floating calls, and object copies next to an inaccessible
page. The pre-existing field-projection fixture also exposed a cost of widening
two words before a phi whose consumer reads only one field. The shared
optimization now requires a local whole-word consumer, preserving the typed
narrow loads in that case. Two informational references returning both words
were regenerated with the course tools. The vectorized test caught a hard-coded
v0 scratch overwriting a live value. The mixed-producer switch fixture covers signed
64-bit selectors, holes, callbacks and values beyond the case range. A compiler comparison on five public sources also produced
byte-identical x86 and Wasm objects at O0 and O3, twenty comparisons in all.

[x86 investigation method](llvm-gap-strategy-20261110.md) ·
[Wasm qualification](../wasm32-completion-status.md) ·
[QEMU comparison runner](../../scripts/aarch64_qemu_profile.py)
