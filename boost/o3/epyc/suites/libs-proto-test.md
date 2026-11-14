# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.578308 | 1.429328 | 1.711053 | 0.003137 | 0.003237 | 0.002965 |
| constrained_ops.test | RUN | 0.676756 | 1.519377 | 1.892986 | 0.003113 | 0.003147 | 0.003069 |
| cpp-next_bug.test | RUN | 0.686971 | 1.602965 | 1.990048 | 0.002973 | 0.002896 | 0.003258 |
| deep_copy.test | RUN | 0.587814 | 1.494112 | 1.688639 | 0.003097 | 0.003221 | 0.003244 |
| display_expr.test | RUN | 0.707319 | 1.813152 | 2.024993 | 0.003322 | 0.002960 | 0.003000 |
| deduce_domain.test | RUN | 0.585123 | 1.274496 | 1.553864 | 0.003431 | 0.002931 | 0.003073 |
| env_var.test | RUN | 0.740609 | 2.976479 | 2.341530 | 0.003783 | 0.003677 | 0.003922 |
| examples.test | RUN | 0.716771 | 1.987833 | 2.302757 | 0.003128 | 0.002863 | 0.002999 |
| external_transforms.test | RUN | 0.696579 | 1.741003 | 2.036206 | 0.003087 | 0.003118 | 0.003159 |
| lambda.test | RUN | 0.686723 | 1.730651 | 2.113253 | 0.003153 | 0.003131 | 0.003009 |
| make_expr.test | RUN | 0.672620 | 2.804521 | 2.185030 | 0.003719 | 0.004128 | 0.004063 |
| matches.test | RUN | 0.606252 | 1.415403 | 1.822352 | 0.003118 | 0.003040 | 0.002979 |
| flatten.test | RUN | 1.158442 | 4.134735 | 4.466430 | 0.003293 | 0.003423 | 0.003247 |
| switch.test | RUN | 0.616940 | 1.443893 | 1.725903 | 0.003024 | 0.003209 | 0.003140 |
| toy_spirit.test | RUN | 0.654053 | 1.790691 | 2.190394 | 0.003145 | 0.003212 | 0.003110 |
| toy_spirit2.test | RUN | 0.733454 | 1.938820 | 2.336435 | 0.002972 | 0.003345 | 0.003080 |
| make.test | RUN | 0.579054 | 1.783149 | 1.681591 | 0.003403 | 0.003690 | 0.003447 |
| mem_ptr.test | RUN | 0.755197 | 2.975890 | 2.450398 | 0.003683 | 0.004049 | 0.003827 |
| mpl.test | RUN | 0.650558 | 1.496068 | 1.829032 | 0.002974 | 0.003268 | 0.002705 |
| noinvoke.test | RUN | 0.552352 | 1.276804 | 1.545748 | 0.003209 | 0.003306 | 0.003099 |
| pack_expansion.test | RUN | 0.567993 | 1.876257 | 1.903585 | 0.002656 | 0.002534 | 0.002462 |
| protect.test | RUN | 0.525300 | 1.231725 | 1.326723 | 0.002499 | 0.002534 | 0.002404 |
| bug2407.test | COMPILE | 0.492397 | 0.964204 | 1.096835 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.967× | 0.980×, 0.955× | 1.003× |
| clang | 0.988×† | 0.974×, 1.003× | 1.083× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001724s | 0.001666s | 0.001643s | byte equality observed |
| constrained_ops.test | 10 | 0.001690s | 0.001644s | 0.001647s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001686s | 0.001646s | 0.001643s | byte equality observed |
| deduce_domain.test | 10 | 0.001689s | 0.001639s | 0.001676s | byte equality observed |
| deep_copy.test | 9 | 0.001668s | 0.001652s | 0.001676s | byte equality observed |
| display_expr.test | 10 | 0.001708s | 0.001665s | 0.001646s | byte equality observed |
| env_var.test | 10 | 0.001999s | 0.001920s | 0.001945s | byte equality observed |
| examples.test | 10 | 0.001737s | 0.001657s | 0.001718s | byte equality observed |
| external_transforms.test | 10 | 0.001742s | 0.001692s | 0.001694s | byte equality observed |
| flatten.test | 10 | 0.001824s | 0.001725s | 0.001739s | byte equality observed |
| lambda.test | 10 | 0.001680s | 0.001667s | 0.001706s | byte equality observed |
| make.test | 10 | 0.001869s | 0.001826s | 0.001812s | byte equality observed |
| make_expr.test | 9 | 0.002091s | 0.002083s | 0.002039s | byte equality observed |
| matches.test | 10 | 0.001717s | 0.001636s | 0.001657s | byte equality observed |
| mem_ptr.test | 9 | 0.002055s | 0.001905s | 0.001959s | byte equality observed |
| mpl.test | 10 | 0.001677s | 0.001645s | 0.001684s | byte equality observed |
| noinvoke.test | 10 | 0.001765s | 0.001647s | 0.001709s | byte equality observed |
| pack_expansion.test | 10 | 0.001744s | 0.001692s | 0.001744s | byte equality observed |
| protect.test | 10 | 0.001740s | 0.001725s | 0.001730s | byte equality observed |
| switch.test | 10 | 0.001689s | 0.001650s | 0.001708s | byte equality observed |
| toy_spirit.test | 6 | 0.001684s | 0.001669s | 0.001714s | byte equality observed |
| toy_spirit2.test | 9 | 0.001716s | 0.001705s | 0.001672s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
