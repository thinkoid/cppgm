# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.723509 | 1.926777 | 2.567799 | 0.003481 | 0.003543 | 0.003717 |
| constrained_ops.test | RUN | 0.820844 | 1.981031 | 2.859705 | 0.003293 | 0.003542 | 0.003431 |
| cpp-next_bug.test | RUN | 0.818737 | 2.139118 | 2.894438 | 0.003423 | 0.003460 | 0.003280 |
| deep_copy.test | RUN | 0.719585 | 1.913668 | 2.452364 | 0.003093 | 0.003526 | 0.003837 |
| display_expr.test | RUN | 0.844529 | 2.316116 | 2.923128 | 0.003597 | 0.003635 | 0.003701 |
| deduce_domain.test | RUN | 0.679901 | 1.654707 | 2.278187 | 0.003313 | 0.003308 | 0.003556 |
| env_var.test | RUN | 0.912716 | 3.873798 | 3.593961 | 0.003970 | 0.004232 | 0.004842 |
| examples.test | RUN | 0.861778 | 2.561619 | 3.337661 | 0.003295 | 0.003274 | 0.003446 |
| external_transforms.test | RUN | 0.860837 | 2.286618 | 3.070111 | 0.003398 | 0.003498 | 0.003501 |
| lambda.test | RUN | 0.822068 | 2.254342 | 2.978688 | 0.003346 | 0.003795 | 0.003786 |
| make_expr.test | RUN | 0.835247 | 3.686740 | 3.245990 | 0.004242 | 0.005042 | 0.004961 |
| matches.test | RUN | 0.741144 | 1.872555 | 2.663601 | 0.003424 | 0.003687 | 0.003284 |
| flatten.test | RUN | 1.435733 | 5.183100 | 6.291131 | 0.003978 | 0.004153 | 0.003394 |
| switch.test | RUN | 0.738561 | 1.949123 | 2.538013 | 0.003713 | 0.003517 | 0.003743 |
| toy_spirit.test | RUN | 0.817603 | 2.349151 | 3.164702 | 0.003178 | 0.003854 | 0.003696 |
| toy_spirit2.test | RUN | 0.878506 | 2.500097 | 3.336307 | 0.003367 | 0.003741 | 0.003610 |
| make.test | RUN | 0.718105 | 2.342969 | 2.508604 | 0.004409 | 0.004488 | 0.003945 |
| mem_ptr.test | RUN | 0.921780 | 3.879403 | 3.593034 | 0.003139 | 0.004560 | 0.004973 |
| mpl.test | RUN | 0.826121 | 1.998502 | 2.734916 | 0.003105 | 0.003459 | 0.003074 |
| noinvoke.test | RUN | 0.692863 | 1.677481 | 2.297777 | 0.003525 | 0.003558 | 0.003756 |
| pack_expansion.test | RUN | 0.807977 | 2.308307 | 2.828344 | 0.002867 | 0.002760 | 0.002555 |
| protect.test | RUN | 0.588175 | 1.835120 | 1.631383 | 0.002871 | 0.002716 | 0.002610 |
| bug2407.test | COMPILE | 0.633513 | 1.204134 | 1.400173 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.975×, 0.992× | 0.988× |
| clang | 0.973× | 0.989×, 0.957× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 9 | 0.002040s | 0.002012s | 0.002042s | byte equality observed |
| constrained_ops.test | 9 | 0.002112s | 0.001976s | 0.002032s | byte equality observed |
| cpp-next_bug.test | 10 | 0.002028s | 0.001923s | 0.001980s | byte equality observed |
| deduce_domain.test | 9 | 0.002031s | 0.001932s | 0.002037s | byte equality observed |
| deep_copy.test | 10 | 0.002061s | 0.001931s | 0.002087s | byte equality observed |
| display_expr.test | 9 | 0.002061s | 0.001912s | 0.002020s | byte equality observed |
| env_var.test | 9 | 0.002351s | 0.002305s | 0.002368s | byte equality observed |
| examples.test | 9 | 0.002062s | 0.001966s | 0.002038s | byte equality observed |
| external_transforms.test | 9 | 0.002084s | 0.002026s | 0.002101s | byte equality observed |
| flatten.test | 9 | 0.002094s | 0.002050s | 0.002040s | byte equality observed |
| lambda.test | 9 | 0.002013s | 0.002008s | 0.002048s | byte equality observed |
| make.test | 8 | 0.002220s | 0.002163s | 0.002229s | byte equality observed |
| make_expr.test | 8 | 0.002461s | 0.002433s | 0.002445s | byte equality observed |
| matches.test | 9 | 0.002055s | 0.002008s | 0.001971s | byte equality observed |
| mem_ptr.test | 8 | 0.002333s | 0.002247s | 0.002315s | byte equality observed |
| mpl.test | 9 | 0.002012s | 0.002002s | 0.002032s | byte equality observed |
| noinvoke.test | 9 | 0.002007s | 0.001922s | 0.001960s | byte equality observed |
| pack_expansion.test | 8 | 0.002143s | 0.002045s | 0.002122s | byte equality observed |
| protect.test | 8 | 0.002069s | 0.002021s | 0.002058s | byte equality observed |
| switch.test | 9 | 0.001959s | 0.001959s | 0.002087s | byte equality observed |
| toy_spirit.test | 10 | 0.002116s | 0.002023s | 0.002011s | byte equality observed |
| toy_spirit2.test | 9 | 0.002038s | 0.001994s | 0.002048s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
