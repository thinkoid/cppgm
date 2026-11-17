# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.759390 | 1.997147 | 2.607361 | 0.003823 | 0.004040 | 0.003775 |
| constrained_ops.test | RUN | 0.842573 | 2.050093 | 2.918997 | 0.003371 | 0.003882 | 0.003836 |
| cpp-next_bug.test | RUN | 0.863148 | 2.256610 | 3.023225 | 0.003345 | 0.003692 | 0.003283 |
| deep_copy.test | RUN | 0.740562 | 1.935038 | 2.577213 | 0.003395 | 0.003675 | 0.003826 |
| display_expr.test | RUN | 0.893949 | 2.435726 | 2.916424 | 0.003687 | 0.003253 | 0.003885 |
| deduce_domain.test | RUN | 0.704337 | 1.716254 | 2.363279 | 0.003406 | 0.002703 | 0.003345 |
| env_var.test | RUN | 0.925747 | 4.118913 | 3.732071 | 0.004803 | 0.003934 | 0.004638 |
| examples.test | RUN | 0.920767 | 2.615833 | 3.476899 | 0.003552 | 0.003259 | 0.003886 |
| external_transforms.test | RUN | 0.868543 | 2.311826 | 3.110071 | 0.003581 | 0.003550 | 0.003841 |
| lambda.test | RUN | 0.870310 | 2.309672 | 3.117844 | 0.003523 | 0.003755 | 0.003827 |
| make_expr.test | RUN | 0.886529 | 3.754012 | 3.313849 | 0.004833 | 0.004724 | 0.005421 |
| matches.test | RUN | 0.767548 | 1.899033 | 2.727586 | 0.003580 | 0.003526 | 0.003123 |
| flatten.test | RUN | 1.436979 | 5.352836 | 6.586752 | 0.003794 | 0.004180 | 0.003944 |
| switch.test | RUN | 0.754215 | 1.901057 | 2.577094 | 0.003412 | 0.003562 | 0.003614 |
| toy_spirit.test | RUN | 0.867887 | 2.466299 | 3.282093 | 0.003670 | 0.004062 | 0.003840 |
| toy_spirit2.test | RUN | 0.921768 | 2.504081 | 3.510455 | 0.003814 | 0.003888 | 0.003373 |
| make.test | RUN | 0.729797 | 2.406780 | 2.563734 | 0.004200 | 0.004561 | 0.004245 |
| mem_ptr.test | RUN | 0.946532 | 3.932151 | 3.669790 | 0.004272 | 0.004403 | 0.004175 |
| mpl.test | RUN | 0.843177 | 2.015280 | 2.784583 | 0.003653 | 0.003447 | 0.003253 |
| noinvoke.test | RUN | 0.712688 | 1.715009 | 2.322627 | 0.003643 | 0.003739 | 0.004022 |
| pack_expansion.test | RUN | 0.880736 | 2.555897 | 3.092282 | 0.003660 | 0.002893 | 0.003979 |
| protect.test | RUN | 0.491876 | 1.939013 | 1.699300 | 0.002798 | 0.002698 | 0.002692 |
| bug2407.test | COMPILE | 0.650576 | 1.095339 | 1.319227 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.007×, 0.997× | 0.979× |
| clang | 0.964× | 0.956×, 0.972× | 1.022× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.002035s | 0.002087s | 0.002002s | byte equality observed |
| constrained_ops.test | 8 | 0.002020s | 0.002123s | 0.001926s | byte equality observed |
| cpp-next_bug.test | 9 | 0.002070s | 0.002109s | 0.001906s | byte equality observed |
| deduce_domain.test | 9 | 0.002016s | 0.002023s | 0.001896s | byte equality observed |
| deep_copy.test | 9 | 0.002023s | 0.002084s | 0.001874s | byte equality observed |
| display_expr.test | 8 | 0.002026s | 0.002067s | 0.001892s | byte equality observed |
| env_var.test | 8 | 0.002320s | 0.002369s | 0.002271s | byte equality observed |
| examples.test | 9 | 0.002068s | 0.002016s | 0.001975s | byte equality observed |
| external_transforms.test | 7 | 0.002055s | 0.002168s | 0.001987s | byte equality observed |
| flatten.test | 9 | 0.002141s | 0.002090s | 0.002074s | byte equality observed |
| lambda.test | 9 | 0.001994s | 0.002062s | 0.002044s | byte equality observed |
| make.test | 8 | 0.002187s | 0.002237s | 0.002086s | byte equality observed |
| make_expr.test | 8 | 0.002456s | 0.002455s | 0.002403s | byte equality observed |
| matches.test | 9 | 0.002007s | 0.002051s | 0.001924s | byte equality observed |
| mem_ptr.test | 8 | 0.002357s | 0.002329s | 0.002260s | byte equality observed |
| mpl.test | 9 | 0.002049s | 0.002048s | 0.001916s | byte equality observed |
| noinvoke.test | 9 | 0.002065s | 0.002030s | 0.001916s | byte equality observed |
| pack_expansion.test | 9 | 0.002074s | 0.002098s | 0.001993s | byte equality observed |
| protect.test | 9 | 0.002093s | 0.002129s | 0.001963s | byte equality observed |
| switch.test | 9 | 0.001996s | 0.002029s | 0.001914s | byte equality observed |
| toy_spirit.test | 9 | 0.002071s | 0.002012s | 0.001989s | byte equality observed |
| toy_spirit2.test | 8 | 0.002042s | 0.002006s | 0.001969s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
