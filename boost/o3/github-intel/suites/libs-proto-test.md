# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.435756 | 1.207909 | 1.309337 | 0.002144 | 0.002307 | 0.002003 |
| constrained_ops.test | RUN | 0.493535 | 1.292473 | 1.465064 | 0.001988 | 0.002112 | 0.001909 |
| cpp-next_bug.test | RUN | 0.504898 | 1.389170 | 1.530066 | 0.001907 | 0.002186 | 0.002129 |
| deep_copy.test | RUN | 0.435922 | 1.222589 | 1.345884 | 0.001569 | 0.002279 | 0.002018 |
| display_expr.test | RUN | 0.513685 | 1.552931 | 1.640418 | 0.002253 | 0.002063 | 0.001965 |
| deduce_domain.test | RUN | 0.411217 | 1.052536 | 1.169934 | 0.001992 | 0.002216 | 0.001910 |
| env_var.test | RUN | 0.556879 | 2.659627 | 1.937558 | 0.002033 | 0.002404 | 0.002349 |
| examples.test | RUN | 0.534760 | 1.716778 | 1.813395 | 0.001937 | 0.002139 | 0.002008 |
| external_transforms.test | RUN | 0.525005 | 1.436793 | 1.615640 | 0.002130 | 0.002255 | 0.002070 |
| lambda.test | RUN | 0.505822 | 1.482868 | 1.606407 | 0.001936 | 0.002273 | 0.001922 |
| make_expr.test | RUN | 0.515499 | 2.448773 | 1.750663 | 0.002256 | 0.002582 | 0.002393 |
| matches.test | RUN | 0.453515 | 1.210251 | 1.401526 | 0.001787 | 0.002370 | 0.001958 |
| flatten.test | RUN | 0.861297 | 3.609788 | 3.496672 | 0.001969 | 0.002332 | 0.002029 |
| switch.test | RUN | 0.442254 | 1.201575 | 1.316702 | 0.002140 | 0.002262 | 0.001943 |
| toy_spirit.test | RUN | 0.503498 | 1.539250 | 1.713424 | 0.001803 | 0.002431 | 0.002214 |
| toy_spirit2.test | RUN | 0.538961 | 1.651476 | 1.847992 | 0.001931 | 0.002101 | 0.001844 |
| make.test | RUN | 0.426659 | 1.549358 | 1.320684 | 0.002227 | 0.002331 | 0.002160 |
| mem_ptr.test | RUN | 0.579137 | 2.588524 | 1.926482 | 0.002227 | 0.002683 | 0.002207 |
| mpl.test | RUN | 0.492264 | 1.257295 | 1.449234 | 0.001811 | 0.002391 | 0.001962 |
| noinvoke.test | RUN | 0.419182 | 1.079816 | 1.189487 | 0.001946 | 0.002164 | 0.002068 |
| pack_expansion.test | RUN | 0.525109 | 1.602326 | 1.482949 | 0.001634 | 0.001625 | 0.002120 |
| protect.test | RUN | 0.374725 | 1.045500 | 1.001511 | 0.001510 | 0.001626 | 0.001489 |
| bug2407.test | COMPILE | 0.324834 | 0.753684 | 0.823250 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.995×, 0.989× | 1.003× |
| clang | 0.967× | 0.967×, 0.967× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001282s | 0.001272s | 0.001223s | byte equality observed |
| constrained_ops.test | 10 | 0.001262s | 0.001262s | 0.001251s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001273s | 0.001227s | 0.001208s | byte equality observed |
| deduce_domain.test | 10 | 0.001247s | 0.001251s | 0.001229s | byte equality observed |
| deep_copy.test | 10 | 0.001261s | 0.001228s | 0.001205s | byte equality observed |
| display_expr.test | 10 | 0.001301s | 0.001265s | 0.001226s | byte equality observed |
| env_var.test | 10 | 0.001358s | 0.001339s | 0.001304s | byte equality observed |
| examples.test | 10 | 0.001244s | 0.001267s | 0.001269s | byte equality observed |
| external_transforms.test | 10 | 0.001273s | 0.001258s | 0.001225s | byte equality observed |
| flatten.test | 10 | 0.001280s | 0.001279s | 0.001197s | byte equality observed |
| lambda.test | 10 | 0.001238s | 0.001211s | 0.001221s | byte equality observed |
| make.test | 10 | 0.001293s | 0.001278s | 0.001247s | byte equality observed |
| make_expr.test | 10 | 0.001378s | 0.001364s | 0.001337s | byte equality observed |
| matches.test | 10 | 0.001253s | 0.001277s | 0.001226s | byte equality observed |
| mem_ptr.test | 10 | 0.001329s | 0.001357s | 0.001311s | byte equality observed |
| mpl.test | 10 | 0.001279s | 0.001230s | 0.001171s | byte equality observed |
| noinvoke.test | 10 | 0.001207s | 0.001213s | 0.001189s | byte equality observed |
| pack_expansion.test | 10 | 0.001257s | 0.001244s | 0.001214s | byte equality observed |
| protect.test | 10 | 0.001254s | 0.001256s | 0.001228s | byte equality observed |
| switch.test | 10 | 0.001261s | 0.001231s | 0.001216s | byte equality observed |
| toy_spirit.test | 10 | 0.001247s | 0.001232s | 0.001230s | byte equality observed |
| toy_spirit2.test | 10 | 0.001251s | 0.001245s | 0.001228s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
