# AArch64 register allocation and code generation under QEMU

The self-built Arm compiler took **1.337×** as long as the Clang-built
compiler to rebuild cppgm. The previous measurement was **2.249×**.
Self-build throughput relative to Clang-built cppgm increased from
**44.5% to 74.8%**. The measurements used QEMU user mode
10.2.1 on x86-64 with `-cpu cortex-a53`. [Previous measurement](aarch64-qemu-20261117.md)

## Last-stage compiler rebuild

Both compilers were built from revision `79612f465` at O3. A was built by
Clang 22.1.2 and B by cppgm. Both ran the same PA35 build with 24 jobs,
the same target C++ headers and the same static linker. Every run started
with an empty object directory. All 12 produced the same 494 objects
and an ELF executable identical to B. The ratios compare the two mean
times within each block, then take the median across blocks. The x86 host was
shared, so comparisons across campaigns use the paired ratios.

| Measurement | Clang-built A | Self-built B | ABBA B/A | BAAB B/A | Paired B/A | A/A |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| Elapsed seconds | 154.5 | 205.1 | 1.397× | 1.277× | 1.337× | 0.941× |
| Aggregate CPU seconds | 3,320.4 | 4,876.2 | 1.418× | 1.512× | 1.465× | 0.980× |

| Run order | Elapsed seconds in order | Aggregate CPU seconds in order |
| --- | --- | --- |
| AAAA | 175.35, 148.49, 146.18, 137.82 | 3856.13, 3493.86, 3453.58, 3233.32 |
| ABBA | 130.28, 184.99, 178.45, 129.79 | 3094.00, 4453.31, 4281.10, 3064.99 |
| BAAB | 243.49, 212.93, 144.88, 213.44 | 5643.31, 3834.59, 3287.89, 5127.04 |

## What the backends share

- x86 and Arm use one bounded backward pass over SSA uses and control-flow predecessors. Arm extends each range through the blocks where the value must survive, accounts for phi reads and writes on incoming edges, and allows register or spill-slot reuse after the last use. Functions with exceptional or nonlocal control flow keep conservative cross-block ranges on Arm. [Shared liveness](../../dev/src/machine/ssa_liveness.h) · [Arm ranges](../../dev/src/aarch64/lifetimes.cpp) · [x86 ranges](../../dev/src/native/select/register_allocation.cpp)
- Arm stack spills and Wasm locals use the same interval-slot assignment. Arm separates scalar and 16-byte vector slots and gives address-exposed objects dedicated storage. Wasm separates locals by value type. Arm and x86 still choose their own physical registers and implement their own call-clobber and save/restore rules. x86 also has per-block ranges, loop-weighted spill decisions and phi coalescing. [Interval slots](../../dev/src/machine/interval_slots.h) · [Arm registers](../../dev/src/aarch64/allocation.cpp) · [Wasm locals](../../dev/src/wasm/local_lifetimes.cpp)
- The shared LowIR optimizer runs on all three backends. Arm now consumes its adjacent indexed memory operations and can scalarize a layout-proved, single integer-word aggregate at Linux and Darwin ABI boundaries. Its selector uses allocated operand registers, scaled addressing and direct compare-and-branch instructions. [Aggregate boundaries](../../dev/src/opt/aggregate_boundaries.cpp) · [Arm address selection](../../dev/src/aarch64/addressing.cpp)

## Isolating allocation

Two Arm compiler executables were built from the same compiler sources. One used
the preceding Arm allocator, with the instruction-selection changes already in
place. The other used shared liveness and spill storage. The table counts guest
instructions executed by each compiler to compile one fixed translation unit.
Each pair produced byte-identical objects. The original column predates the
instruction-selection changes as well.

| Compiler input | Original cppgm | Before shared allocation | With shared allocation | Reduction from allocation alone |
| --- | ---: | ---: | ---: | ---: |
| `aarch64/vector.cpp` | 2.465 B | 1.446 B | 1.280 B | 11.5% |
| `opt/loop_vectorizer.cpp` | 12.690 B | 7.746 B | 7.121 B | 8.1% |
| `driver/host_environment.cpp` | 4.528 B | 2.683 B | 2.418 B | 9.9% |

The PA39 pressure fixture keeps twelve loaded integers live across a call that
overwrites their source, and rotates three values at a loop backedge. The Linux
frame fell from 208 to 192 bytes and static SP-relative memory instructions from
40 to 36. On Darwin the frame also fell from 208 to 192 bytes and SP-relative
memory instructions from 42 to 38. The x86-64 and Wasm backends produced byte-identical
objects for all five public inputs at both O0 and O3 (20 comparisons).

On the x86-hosted cross compile of `opt/loop_vectorizer.cpp`, the candidate
used 6.4% less user CPU time and 0.4% more peak RSS across four paired blocks.
A/A calibration differed by 2.0% in user CPU time. Both builds produced
deterministic output. This measures compiler cost on one translation unit.

## Generated programs

The five public programs reached **0.84× Clang throughput** under QEMU,
up from 0.58× in the original campaign. A direct paired comparison of the
old and new cppgm executables gave **1.39×** throughput across the five.
Both figures are geometric means. The table reports CPU-time ratios from
paired blocks on a fixed host CPU per campaign. Instruction counts come from
separate untimed executions. Every run checked the expected guest output.
The range shows the individual block estimates for the comparison with Clang.

| Workload | Throughput vs Clang | Paired range | Throughput vs old cppgm | Old cppgm instructions (M) | Current cppgm (M) | Clang (M) |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| Prolangs-C++/primes | 1.00× | 0.98–1.03× | 1.14× | 2,232.9 | 1,351.7 | 703.0 |
| Stanford/Bubblesort | 0.86× | 0.76–1.14× | 1.46× | 643.4 | 171.1 | 88.6 |
| Stanford/FloatMM | 0.91× | 0.79–0.94× | 1.14× | 4,300.8 | 2,382.5 | 1,923.0 |
| Stanford/Puzzle | 0.61× | 0.58–0.64× | 1.90× | 2,455.5 | 837.1 | 407.8 |
| Stanford/Treesort | 0.85× | 0.83–0.87× | 1.42× | 469.0 | 199.6 | 155.4 |
| calls | 0.91× | 0.74–0.95× | 1.35× | 172.0 | 91.8 | 61.3 |
| lookup | 0.78× | 0.72–0.81× | 1.31× | 647.8 | 356.1 | 113.6 |
| memory | 0.87× | 0.67–0.95× | 0.95× | 62.2 | 47.4 | 36.8 |
| vectors | 0.99× | 0.91–1.13× | 1.09× | 218.1 | 192.9 | 192.9 |

The initial timing for the short memory workload varied substantially between blocks.
Repeating it with 16 executions per position and six paired blocks gave
**0.999×** previous throughput (individual blocks 0.69–1.31×).
The repeat put the median near parity despite a lower guest instruction count.

The NEON `mix` and `scale` kernels each compile to two arithmetic instructions
and a return. The complete vector workload executes exactly 192,938,048 guest
instructions with either compiler. Use the block ranges when interpreting the
short program timings. Hardware throughput and cache effects need native Arm
measurements.

## Instructions in the self-built compiler

In `opt::map_instruction_blocks`, the original hot block had 41 instructions,
including 20 register copies. The new hot block has eight instructions,
followed on the loop backedge by a move and an unconditional branch. QEMU
executed this eight-instruction block 1,633,260 times while rebuilding
`loop_vectorizer.cpp`. The corresponding Clang block has seven instructions.

```asm
mov  w22, w23
ldr  x24, [x20]
str  w12, [x24, x22, lsl #2]
ldr  x24, [x21]
add  x22, x24, x22, lsl #6
ldr  w22, [x22, #8]
cmn  w22, #1
b.eq exit
```

The remaining spill cost is visible in Stanford Puzzle. One loop increments
a value, stores its 32-bit conversion in a stack slot, and immediately
reloads it for a comparison. QEMU reached this block 52,555,600 times.
The sequence gives a concrete test case for x86's loop-weighted register
assignment and for forwarding a just-produced value to its next use on Arm.

```asm
add x28, x27, #1
mov w9, w28
str x9, [sp, #0x58]
ldr x10, [sp, #0x58]
cmp w10, w14
b.gt exit
```

Reproduce the full comparison with the paired rebuild and guest profiling
commands. The final ELF SHA-256 was `5ce319c4418711ac5cf01a301c27d04283cca9b8d9dedd3cae54634f323ff6c1`.
[Reproduction commands](../../benchmarks/aarch64/README.md)
