# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.591706 | 1.537675 | 1.692080 | 0.002575 | 0.002485 | 0.002292 |
| constrained_ops.test | RUN | 0.650775 | 1.661219 | 1.922959 | 0.002357 | 0.002232 | 0.002269 |
| cpp-next_bug.test | RUN | 0.676782 | 1.783831 | 1.970726 | 0.002446 | 0.002598 | 0.001873 |
| deep_copy.test | RUN | 0.564241 | 1.573193 | 1.736555 | 0.002236 | 0.002466 | 0.002377 |
| display_expr.test | RUN | 0.691711 | 1.937658 | 2.066850 | 0.002390 | 0.002566 | 0.002395 |
| deduce_domain.test | RUN | 0.545282 | 1.361549 | 1.529715 | 0.002388 | 0.002508 | 0.002178 |
| env_var.test | RUN | 0.740433 | 3.327786 | 2.484657 | 0.002713 | 0.002711 | 0.002682 |
| examples.test | RUN | 0.705526 | 2.139033 | 2.320407 | 0.002314 | 0.002384 | 0.002201 |
| external_transforms.test | RUN | 0.685598 | 1.887008 | 2.070420 | 0.002482 | 0.002387 | 0.002358 |
| lambda.test | RUN | 0.679809 | 1.906620 | 2.066087 | 0.002489 | 0.002425 | 0.002323 |
| make_expr.test | RUN | 0.685854 | 3.092406 | 2.239926 | 0.002801 | 0.003144 | 0.003060 |
| matches.test | RUN | 0.594226 | 1.550922 | 1.809284 | 0.002567 | 0.002484 | 0.001997 |
| flatten.test | RUN | 1.129639 | 4.371885 | 4.390210 | 0.002680 | 0.002651 | 0.002281 |
| switch.test | RUN | 0.587575 | 1.538653 | 1.713479 | 0.002482 | 0.002643 | 0.002253 |
| toy_spirit.test | RUN | 0.664987 | 1.961900 | 2.205524 | 0.002543 | 0.002586 | 0.002223 |
| toy_spirit2.test | RUN | 0.716053 | 2.015437 | 2.343896 | 0.002384 | 0.002583 | 0.002325 |
| make.test | RUN | 0.586410 | 1.969216 | 1.694124 | 0.002778 | 0.002779 | 0.002600 |
| mem_ptr.test | RUN | 0.747115 | 3.255464 | 2.504835 | 0.002857 | 0.002900 | 0.002844 |
| mpl.test | RUN | 0.655819 | 1.644430 | 1.882717 | 0.002413 | 0.002612 | 0.002088 |
| noinvoke.test | RUN | 0.563784 | 1.377407 | 1.515628 | 0.002451 | 0.002474 | 0.002361 |
| pack_expansion.test | RUN | 0.603152 | 1.991119 | 1.872649 | 0.001840 | 0.001724 | 0.001793 |
| protect.test | RUN | 0.530074 | 1.417228 | 1.234784 | 0.001836 | 0.001911 | 0.001702 |
| bug2407.test | COMPILE | 0.494970 | 0.998791 | 1.056311 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.013×, 0.982× | 0.980× |
| clang | 0.964× | 0.958×, 0.969× | 0.963× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 9 | 0.001566s | 0.001576s | 0.001501s | byte equality observed |
| constrained_ops.test | 10 | 0.001515s | 0.001569s | 0.001488s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001553s | 0.001532s | 0.001453s | byte equality observed |
| deduce_domain.test | 10 | 0.001562s | 0.001487s | 0.001492s | byte equality observed |
| deep_copy.test | 10 | 0.001550s | 0.001571s | 0.001486s | byte equality observed |
| display_expr.test | 10 | 0.001554s | 0.001528s | 0.001479s | byte equality observed |
| env_var.test | 10 | 0.001727s | 0.001702s | 0.001694s | byte equality observed |
| examples.test | 10 | 0.001565s | 0.001512s | 0.001487s | byte equality observed |
| external_transforms.test | 10 | 0.001562s | 0.001526s | 0.001497s | byte equality observed |
| flatten.test | 10 | 0.001585s | 0.001552s | 0.001529s | byte equality observed |
| lambda.test | 10 | 0.001532s | 0.001529s | 0.001488s | byte equality observed |
| make.test | 10 | 0.001605s | 0.001620s | 0.001603s | byte equality observed |
| make_expr.test | 8 | 0.001766s | 0.001813s | 0.001719s | byte equality observed |
| matches.test | 10 | 0.001593s | 0.001533s | 0.001496s | byte equality observed |
| mem_ptr.test | 9 | 0.001683s | 0.001720s | 0.001673s | byte equality observed |
| mpl.test | 10 | 0.001554s | 0.001530s | 0.001479s | byte equality observed |
| noinvoke.test | 10 | 0.001526s | 0.001573s | 0.001525s | byte equality observed |
| pack_expansion.test | 10 | 0.001571s | 0.001595s | 0.001528s | byte equality observed |
| protect.test | 10 | 0.001610s | 0.001571s | 0.001515s | byte equality observed |
| switch.test | 10 | 0.001580s | 0.001569s | 0.001505s | byte equality observed |
| toy_spirit.test | 10 | 0.001590s | 0.001590s | 0.001487s | byte equality observed |
| toy_spirit2.test | 10 | 0.001566s | 0.001608s | 0.001503s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
