# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.742297 | 1.931931 | 2.603417 | 0.003430 | 0.003803 | 0.003590 |
| constrained_ops.test | RUN | 0.839597 | 1.997862 | 2.894862 | 0.003497 | 0.003558 | 0.003846 |
| cpp-next_bug.test | RUN | 0.882845 | 2.157852 | 2.988047 | 0.003337 | 0.003623 | 0.003783 |
| deep_copy.test | RUN | 0.723144 | 1.954540 | 2.558517 | 0.003363 | 0.003525 | 0.003756 |
| display_expr.test | RUN | 0.894905 | 2.356731 | 3.119793 | 0.003311 | 0.003495 | 0.003540 |
| deduce_domain.test | RUN | 0.698950 | 1.678893 | 2.180399 | 0.003357 | 0.003371 | 0.003790 |
| env_var.test | RUN | 0.945315 | 3.933054 | 3.650054 | 0.004402 | 0.004329 | 0.004853 |
| examples.test | RUN | 0.910782 | 2.603922 | 3.442594 | 0.003017 | 0.003338 | 0.003833 |
| external_transforms.test | RUN | 0.880100 | 2.312513 | 3.095193 | 0.003228 | 0.003376 | 0.004005 |
| lambda.test | RUN | 0.849807 | 2.241579 | 3.175137 | 0.003358 | 0.003446 | 0.003860 |
| make_expr.test | RUN | 0.856973 | 3.681203 | 3.232046 | 0.004445 | 0.005360 | 0.005211 |
| matches.test | RUN | 0.768617 | 1.879889 | 2.731457 | 0.003384 | 0.003585 | 0.003517 |
| flatten.test | RUN | 1.448180 | 5.286945 | 6.410581 | 0.003749 | 0.004250 | 0.003529 |
| switch.test | RUN | 0.743703 | 1.874054 | 2.662031 | 0.003523 | 0.003739 | 0.003953 |
| toy_spirit.test | RUN | 0.842382 | 2.381661 | 3.239818 | 0.003655 | 0.003912 | 0.003784 |
| toy_spirit2.test | RUN | 0.904299 | 2.504680 | 3.489472 | 0.003469 | 0.003481 | 0.003732 |
| make.test | RUN | 0.732921 | 2.392626 | 2.595473 | 0.004102 | 0.004413 | 0.003657 |
| mem_ptr.test | RUN | 0.951540 | 3.905367 | 3.662092 | 0.004486 | 0.004688 | 0.004771 |
| mpl.test | RUN | 0.856457 | 2.008162 | 2.839344 | 0.003219 | 0.003880 | 0.003883 |
| noinvoke.test | RUN | 0.746325 | 1.719427 | 2.351260 | 0.003504 | 0.003452 | 0.003728 |
| pack_expansion.test | RUN | 0.888764 | 2.459125 | 3.055700 | 0.002771 | 0.003716 | 0.003996 |
| protect.test | RUN | 0.635678 | 1.579793 | 1.628711 | 0.002765 | 0.002750 | 0.002644 |
| bug2407.test | COMPILE | 0.487608 | 1.244735 | 1.467187 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.981× | 0.975×, 0.986× | 1.009× |
| clang | 0.966× | 0.973×, 0.958× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 9 | 0.002067s | 0.002091s | 0.001996s | byte equality observed |
| constrained_ops.test | 9 | 0.001972s | 0.001974s | 0.001949s | byte equality observed |
| cpp-next_bug.test | 10 | 0.002031s | 0.001961s | 0.001939s | byte equality observed |
| deduce_domain.test | 9 | 0.002078s | 0.002000s | 0.001984s | byte equality observed |
| deep_copy.test | 9 | 0.002071s | 0.001995s | 0.001999s | byte equality observed |
| display_expr.test | 9 | 0.002071s | 0.002054s | 0.001979s | byte equality observed |
| env_var.test | 8 | 0.002432s | 0.002393s | 0.002318s | byte equality observed |
| examples.test | 9 | 0.002116s | 0.002092s | 0.002101s | byte equality observed |
| external_transforms.test | 9 | 0.002090s | 0.002100s | 0.002007s | byte equality observed |
| flatten.test | 9 | 0.002110s | 0.002118s | 0.002124s | byte equality observed |
| lambda.test | 10 | 0.002112s | 0.002047s | 0.001965s | byte equality observed |
| make.test | 9 | 0.002194s | 0.002174s | 0.002190s | byte equality observed |
| make_expr.test | 8 | 0.002494s | 0.002470s | 0.002458s | byte equality observed |
| matches.test | 10 | 0.002020s | 0.002000s | 0.001935s | byte equality observed |
| mem_ptr.test | 8 | 0.002314s | 0.002378s | 0.002300s | byte equality observed |
| mpl.test | 10 | 0.002083s | 0.002061s | 0.002044s | byte equality observed |
| noinvoke.test | 9 | 0.002034s | 0.001959s | 0.001948s | byte equality observed |
| pack_expansion.test | 9 | 0.002146s | 0.002144s | 0.002073s | byte equality observed |
| protect.test | 9 | 0.002131s | 0.002025s | 0.002032s | byte equality observed |
| switch.test | 9 | 0.002033s | 0.001984s | 0.001950s | byte equality observed |
| toy_spirit.test | 9 | 0.002156s | 0.002145s | 0.002036s | byte equality observed |
| toy_spirit2.test | 9 | 0.002107s | 0.002009s | 0.002021s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
