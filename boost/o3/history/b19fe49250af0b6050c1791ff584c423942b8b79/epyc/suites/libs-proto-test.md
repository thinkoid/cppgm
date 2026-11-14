# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.551591 | 1.451998 | 1.703001 | 0.003026 | 0.003396 | 0.003030 |
| constrained_ops.test | RUN | 0.626812 | 1.557175 | 1.904755 | 0.002976 | 0.003184 | 0.003120 |
| cpp-next_bug.test | RUN | 0.631945 | 1.640533 | 1.937450 | 0.002791 | 0.003215 | 0.003099 |
| deep_copy.test | RUN | 0.531791 | 1.426973 | 1.647344 | 0.002549 | 0.002731 | 0.003024 |
| display_expr.test | RUN | 0.659108 | 1.826037 | 1.977178 | 0.003073 | 0.002926 | 0.003081 |
| deduce_domain.test | RUN | 0.527637 | 1.231369 | 1.462802 | 0.002903 | 0.003148 | 0.002663 |
| env_var.test | RUN | 0.690373 | 3.015777 | 2.376903 | 0.003451 | 0.003572 | 0.003750 |
| examples.test | RUN | 0.665864 | 2.014091 | 2.211426 | 0.002836 | 0.002501 | 0.003335 |
| external_transforms.test | RUN | 0.664710 | 1.675699 | 2.068091 | 0.002870 | 0.002691 | 0.003052 |
| lambda.test | RUN | 0.626722 | 1.740985 | 2.024983 | 0.002775 | 0.003070 | 0.002631 |
| make_expr.test | RUN | 0.632422 | 2.801230 | 2.171622 | 0.003699 | 0.004105 | 0.004098 |
| matches.test | RUN | 0.578482 | 1.400045 | 1.761122 | 0.003040 | 0.003198 | 0.003049 |
| flatten.test | RUN | 1.081224 | 4.086351 | 4.305256 | 0.003199 | 0.003160 | 0.003074 |
| switch.test | RUN | 0.547339 | 1.407780 | 1.703719 | 0.003016 | 0.003048 | 0.003046 |
| toy_spirit.test | RUN | 0.614250 | 1.794154 | 2.106512 | 0.003052 | 0.003082 | 0.003268 |
| toy_spirit2.test | RUN | 0.697282 | 1.870100 | 2.218694 | 0.002910 | 0.002877 | 0.003014 |
| make.test | RUN | 0.540021 | 1.755443 | 1.646891 | 0.004679 | 0.003425 | 0.003397 |
| mem_ptr.test | RUN | 0.712681 | 2.848283 | 2.427833 | 0.003675 | 0.003876 | 0.003702 |
| mpl.test | RUN | 0.637679 | 1.494335 | 1.816692 | 0.002828 | 0.003117 | 0.002690 |
| noinvoke.test | RUN | 0.549816 | 1.217302 | 1.517977 | 0.002999 | 0.003277 | 0.003152 |
| pack_expansion.test | RUN | 0.643031 | 1.830124 | 1.985012 | 0.003282 | 0.003133 | 0.003291 |
| protect.test | RUN | 0.410753 | 1.249723 | 1.167121 | 0.002222 | 0.002527 | 0.002246 |
| bug2407.test | COMPILE | 0.466329 | 0.877283 | 0.909400 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.982× | 0.994×, 0.970× | 0.993× |
| clang | 0.980× | 0.983×, 0.978× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 9 | 0.001715s | 0.001686s | 0.001629s | byte equality observed |
| constrained_ops.test | 10 | 0.001721s | 0.001660s | 0.001634s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001685s | 0.001678s | 0.001623s | byte equality observed |
| deduce_domain.test | 9 | 0.001684s | 0.001658s | 0.001609s | byte equality observed |
| deep_copy.test | 10 | 0.001667s | 0.001649s | 0.001654s | byte equality observed |
| display_expr.test | 10 | 0.001690s | 0.001620s | 0.001634s | byte equality observed |
| env_var.test | 9 | 0.001968s | 0.001928s | 0.001932s | byte equality observed |
| examples.test | 9 | 0.001691s | 0.001684s | 0.001662s | byte equality observed |
| external_transforms.test | 10 | 0.001683s | 0.001679s | 0.001738s | byte equality observed |
| flatten.test | 10 | 0.001740s | 0.001709s | 0.001711s | byte equality observed |
| lambda.test | 10 | 0.001724s | 0.001648s | 0.001661s | byte equality observed |
| make.test | 10 | 0.001851s | 0.001820s | 0.001867s | byte equality observed |
| make_expr.test | 8 | 0.002080s | 0.002037s | 0.002061s | byte equality observed |
| matches.test | 10 | 0.001669s | 0.001630s | 0.001661s | byte equality observed |
| mem_ptr.test | 9 | 0.001994s | 0.001910s | 0.001940s | byte equality observed |
| mpl.test | 10 | 0.001653s | 0.001660s | 0.001661s | byte equality observed |
| noinvoke.test | 10 | 0.001714s | 0.001638s | 0.001673s | byte equality observed |
| pack_expansion.test | 9 | 0.001741s | 0.001689s | 0.001706s | byte equality observed |
| protect.test | 10 | 0.001725s | 0.001688s | 0.001758s | byte equality observed |
| switch.test | 10 | 0.001690s | 0.001620s | 0.001648s | byte equality observed |
| toy_spirit.test | 10 | 0.001640s | 0.001597s | 0.001650s | byte equality observed |
| toy_spirit2.test | 10 | 0.001691s | 0.001627s | 0.001650s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
