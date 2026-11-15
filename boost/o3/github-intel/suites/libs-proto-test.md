# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.466389 | 1.191692 | 1.323757 | 0.002556 | 0.002360 | 0.002063 |
| constrained_ops.test | RUN | 0.530818 | 1.286008 | 1.481607 | 0.002160 | 0.002261 | 0.001952 |
| cpp-next_bug.test | RUN | 0.553342 | 1.381727 | 1.543334 | 0.001939 | 0.001994 | 0.002009 |
| deep_copy.test | RUN | 0.456626 | 1.215761 | 1.384624 | 0.002030 | 0.002292 | 0.002094 |
| display_expr.test | RUN | 0.557487 | 1.541779 | 1.658947 | 0.002614 | 0.002480 | 0.002317 |
| deduce_domain.test | RUN | 0.438577 | 1.046353 | 1.191544 | 0.002082 | 0.001978 | 0.002040 |
| env_var.test | RUN | 0.605951 | 2.650092 | 1.947868 | 0.002360 | 0.002578 | 0.002316 |
| examples.test | RUN | 0.575176 | 1.698862 | 1.839783 | 0.002018 | 0.002263 | 0.002113 |
| external_transforms.test | RUN | 0.553451 | 1.423484 | 1.627147 | 0.002308 | 0.002122 | 0.002218 |
| lambda.test | RUN | 0.542841 | 1.490560 | 1.660095 | 0.002195 | 0.001691 | 0.002022 |
| make_expr.test | RUN | 0.550366 | 2.456189 | 1.750638 | 0.002559 | 0.002710 | 0.002587 |
| matches.test | RUN | 0.492915 | 1.206738 | 1.436146 | 0.002204 | 0.002449 | 0.002243 |
| flatten.test | RUN | 0.952109 | 3.567772 | 3.616262 | 0.002366 | 0.002250 | 0.002136 |
| switch.test | RUN | 0.472301 | 1.219352 | 1.344631 | 0.002212 | 0.002159 | 0.002187 |
| toy_spirit.test | RUN | 0.541844 | 1.553511 | 1.751344 | 0.002327 | 0.002396 | 0.002243 |
| toy_spirit2.test | RUN | 0.594927 | 1.634322 | 1.887356 | 0.002111 | 0.001899 | 0.001911 |
| make.test | RUN | 0.456479 | 1.540733 | 1.341765 | 0.002446 | 0.002251 | 0.002254 |
| mem_ptr.test | RUN | 0.623323 | 2.537369 | 1.965479 | 0.002201 | 0.002457 | 0.002552 |
| mpl.test | RUN | 0.527561 | 1.280029 | 1.484325 | 0.002222 | 0.002218 | 0.002156 |
| noinvoke.test | RUN | 0.451035 | 1.038597 | 1.231693 | 0.002216 | 0.002128 | 0.002120 |
| pack_expansion.test | RUN | 0.553490 | 1.577953 | 1.522839 | 0.001730 | 0.002443 | 0.002356 |
| protect.test | RUN | 0.339949 | 1.042913 | 0.988263 | 0.001611 | 0.001596 | 0.001572 |
| bug2407.test | COMPILE | 0.402370 | 0.705750 | 0.878854 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.983×, 0.989× | 0.996× |
| clang | 0.969× | 0.975×, 0.963× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001265s | 0.001241s | 0.001233s | byte equality observed |
| constrained_ops.test | 10 | 0.001274s | 0.001236s | 0.001205s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001235s | 0.001234s | 0.001217s | byte equality observed |
| deduce_domain.test | 10 | 0.001240s | 0.001242s | 0.001227s | byte equality observed |
| deep_copy.test | 10 | 0.001237s | 0.001251s | 0.001204s | byte equality observed |
| display_expr.test | 10 | 0.001264s | 0.001243s | 0.001234s | byte equality observed |
| env_var.test | 10 | 0.001342s | 0.001329s | 0.001293s | byte equality observed |
| examples.test | 10 | 0.001282s | 0.001282s | 0.001243s | byte equality observed |
| external_transforms.test | 10 | 0.001267s | 0.001231s | 0.001229s | byte equality observed |
| flatten.test | 10 | 0.001271s | 0.001248s | 0.001228s | byte equality observed |
| lambda.test | 10 | 0.001228s | 0.001233s | 0.001185s | byte equality observed |
| make.test | 10 | 0.001302s | 0.001264s | 0.001254s | byte equality observed |
| make_expr.test | 10 | 0.001364s | 0.001383s | 0.001331s | byte equality observed |
| matches.test | 10 | 0.001279s | 0.001255s | 0.001244s | byte equality observed |
| mem_ptr.test | 10 | 0.001333s | 0.001338s | 0.001308s | byte equality observed |
| mpl.test | 10 | 0.001274s | 0.001202s | 0.001237s | byte equality observed |
| noinvoke.test | 10 | 0.001241s | 0.001216s | 0.001244s | byte equality observed |
| pack_expansion.test | 10 | 0.001256s | 0.001222s | 0.001241s | byte equality observed |
| protect.test | 10 | 0.001264s | 0.001230s | 0.001232s | byte equality observed |
| switch.test | 10 | 0.001254s | 0.001221s | 0.001187s | byte equality observed |
| toy_spirit.test | 10 | 0.001236s | 0.001191s | 0.001215s | byte equality observed |
| toy_spirit2.test | 10 | 0.001247s | 0.001230s | 0.001213s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
