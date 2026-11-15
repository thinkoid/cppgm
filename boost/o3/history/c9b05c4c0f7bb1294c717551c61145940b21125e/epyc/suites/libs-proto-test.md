# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.750644 | 1.887521 | 2.543477 | 0.003536 | 0.003956 | 0.003570 |
| constrained_ops.test | RUN | 0.834614 | 2.063324 | 2.788464 | 0.003498 | 0.003801 | 0.003795 |
| cpp-next_bug.test | RUN | 0.850143 | 2.138894 | 2.915245 | 0.003313 | 0.003762 | 0.003711 |
| deep_copy.test | RUN | 0.714232 | 1.897736 | 2.510153 | 0.003531 | 0.003579 | 0.003761 |
| display_expr.test | RUN | 0.861887 | 2.342770 | 2.917862 | 0.003305 | 0.003362 | 0.003785 |
| deduce_domain.test | RUN | 0.694042 | 1.615132 | 2.223326 | 0.003585 | 0.003090 | 0.003776 |
| env_var.test | RUN | 0.947654 | 3.988806 | 3.608687 | 0.003960 | 0.004199 | 0.004173 |
| examples.test | RUN | 0.902619 | 2.622263 | 3.286362 | 0.003572 | 0.003452 | 0.003489 |
| external_transforms.test | RUN | 0.880604 | 2.192803 | 3.063476 | 0.003460 | 0.003430 | 0.003372 |
| lambda.test | RUN | 0.848841 | 2.263245 | 3.104337 | 0.003236 | 0.003278 | 0.003807 |
| make_expr.test | RUN | 0.845628 | 3.629219 | 3.198569 | 0.004438 | 0.004636 | 0.005121 |
| matches.test | RUN | 0.766410 | 1.858182 | 2.663219 | 0.003341 | 0.003724 | 0.003693 |
| flatten.test | RUN | 1.434696 | 5.168683 | 6.391144 | 0.003804 | 0.003685 | 0.003571 |
| switch.test | RUN | 0.738581 | 1.858104 | 2.502605 | 0.003841 | 0.003573 | 0.003810 |
| toy_spirit.test | RUN | 0.842023 | 2.408476 | 3.171595 | 0.003454 | 0.003401 | 0.003399 |
| toy_spirit2.test | RUN | 0.915592 | 2.559684 | 3.394616 | 0.003472 | 0.003745 | 0.003308 |
| make.test | RUN | 0.748406 | 2.385787 | 2.496408 | 0.004250 | 0.003890 | 0.004334 |
| mem_ptr.test | RUN | 0.967021 | 3.853171 | 3.589332 | 0.004177 | 0.004250 | 0.004730 |
| mpl.test | RUN | 0.832196 | 2.018823 | 2.763986 | 0.003371 | 0.003773 | 0.003513 |
| noinvoke.test | RUN | 0.712203 | 1.581920 | 2.245718 | 0.003635 | 0.003313 | 0.003427 |
| pack_expansion.test | RUN | 0.874131 | 2.478963 | 3.041295 | 0.002715 | 0.003568 | 0.003990 |
| protect.test | RUN | 0.632895 | 1.719651 | 1.387647 | 0.002626 | 0.002575 | 0.002496 |
| bug2407.test | COMPILE | 0.462816 | 1.119434 | 1.521785 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.986×, 0.979× | 0.999× |
| clang | 0.973× | 0.984×, 0.963× | 1.024× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 9 | 0.002070s | 0.002039s | 0.002000s | byte equality observed |
| constrained_ops.test | 9 | 0.002047s | 0.001946s | 0.002054s | byte equality observed |
| cpp-next_bug.test | 9 | 0.002036s | 0.001940s | 0.002010s | byte equality observed |
| deduce_domain.test | 9 | 0.002029s | 0.001913s | 0.001978s | byte equality observed |
| deep_copy.test | 9 | 0.002063s | 0.001976s | 0.001977s | byte equality observed |
| display_expr.test | 9 | 0.002011s | 0.001932s | 0.001952s | byte equality observed |
| env_var.test | 8 | 0.002370s | 0.002337s | 0.002293s | byte equality observed |
| examples.test | 9 | 0.002016s | 0.002013s | 0.001930s | byte equality observed |
| external_transforms.test | 9 | 0.002002s | 0.002004s | 0.001984s | byte equality observed |
| flatten.test | 9 | 0.002080s | 0.002107s | 0.002112s | byte equality observed |
| lambda.test | 8 | 0.002069s | 0.001991s | 0.001916s | byte equality observed |
| make.test | 9 | 0.002243s | 0.002164s | 0.002110s | byte equality observed |
| make_expr.test | 8 | 0.002441s | 0.002487s | 0.002393s | byte equality observed |
| matches.test | 9 | 0.001994s | 0.001897s | 0.001942s | byte equality observed |
| mem_ptr.test | 8 | 0.002374s | 0.002327s | 0.002235s | byte equality observed |
| mpl.test | 8 | 0.001981s | 0.001930s | 0.002048s | byte equality observed |
| noinvoke.test | 9 | 0.001984s | 0.002036s | 0.001969s | byte equality observed |
| pack_expansion.test | 9 | 0.002153s | 0.002076s | 0.002017s | byte equality observed |
| protect.test | 9 | 0.002102s | 0.002102s | 0.002093s | byte equality observed |
| switch.test | 9 | 0.002003s | 0.002011s | 0.001942s | byte equality observed |
| toy_spirit.test | 10 | 0.002007s | 0.002014s | 0.001933s | byte equality observed |
| toy_spirit2.test | 8 | 0.002017s | 0.002008s | 0.001959s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
