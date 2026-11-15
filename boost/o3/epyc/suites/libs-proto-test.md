# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.426368 | 1.039880 | 1.131730 | 0.002783 | 0.002667 | 0.002707 |
| constrained_ops.test | RUN | 0.520337 | 1.066243 | 1.247759 | 0.002118 | 0.002676 | 0.002790 |
| cpp-next_bug.test | RUN | 0.510148 | 1.167369 | 1.287563 | 0.002246 | 0.002465 | 0.002785 |
| deep_copy.test | RUN | 0.430388 | 1.070764 | 1.154607 | 0.002422 | 0.002319 | 0.002529 |
| display_expr.test | RUN | 0.514054 | 1.274253 | 1.359244 | 0.002543 | 0.002197 | 0.002214 |
| deduce_domain.test | RUN | 0.410408 | 0.904313 | 1.015113 | 0.002506 | 0.002484 | 0.002332 |
| env_var.test | RUN | 0.540585 | 2.187162 | 1.641292 | 0.003139 | 0.003068 | 0.003105 |
| examples.test | RUN | 0.529137 | 1.408211 | 1.541730 | 0.002480 | 0.002342 | 0.002659 |
| external_transforms.test | RUN | 0.503035 | 1.240941 | 1.384323 | 0.002765 | 0.002067 | 0.002412 |
| lambda.test | RUN | 0.498463 | 1.302483 | 1.379447 | 0.002514 | 0.002456 | 0.002292 |
| make_expr.test | RUN | 0.500521 | 2.041871 | 1.492326 | 0.003227 | 0.003425 | 0.003334 |
| matches.test | RUN | 0.450645 | 1.077438 | 1.223105 | 0.002623 | 0.002665 | 0.002606 |
| flatten.test | RUN | 0.851736 | 2.972363 | 2.978413 | 0.002968 | 0.002803 | 0.002755 |
| switch.test | RUN | 0.434221 | 0.994813 | 1.109001 | 0.002747 | 0.002840 | 0.002306 |
| toy_spirit.test | RUN | 0.506060 | 1.291020 | 1.465354 | 0.002815 | 0.002682 | 0.002733 |
| toy_spirit2.test | RUN | 0.529311 | 1.361485 | 1.600203 | 0.002524 | 0.002673 | 0.002346 |
| make.test | RUN | 0.437938 | 1.280985 | 1.112920 | 0.003051 | 0.002945 | 0.002907 |
| mem_ptr.test | RUN | 0.555213 | 2.111595 | 1.630815 | 0.002972 | 0.003248 | 0.003117 |
| mpl.test | RUN | 0.494621 | 1.097632 | 1.232731 | 0.002541 | 0.002699 | 0.002630 |
| noinvoke.test | RUN | 0.420873 | 0.879124 | 1.019626 | 0.002796 | 0.002674 | 0.002695 |
| pack_expansion.test | RUN | 0.502435 | 1.311008 | 1.273276 | 0.002198 | 0.002713 | 0.002069 |
| protect.test | RUN | 0.389463 | 0.880714 | 0.900667 | 0.002274 | 0.001981 | 0.001966 |
| bug2407.test | COMPILE | 0.314401 | 0.610809 | 0.720443 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.991×, 0.981× | 1.040× |
| clang | 0.990× | 1.005×, 0.974× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001507s | 0.001458s | 0.001499s | byte equality observed |
| constrained_ops.test | 10 | 0.001494s | 0.001398s | 0.001464s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001462s | 0.001397s | 0.001470s | byte equality observed |
| deduce_domain.test | 10 | 0.001464s | 0.001401s | 0.001447s | byte equality observed |
| deep_copy.test | 10 | 0.001464s | 0.001397s | 0.001457s | byte equality observed |
| display_expr.test | 10 | 0.001457s | 0.001412s | 0.001445s | byte equality observed |
| env_var.test | 10 | 0.001703s | 0.001625s | 0.001688s | byte equality observed |
| examples.test | 10 | 0.001495s | 0.001444s | 0.001493s | byte equality observed |
| external_transforms.test | 10 | 0.001491s | 0.001481s | 0.001489s | byte equality observed |
| flatten.test | 10 | 0.001486s | 0.001460s | 0.001494s | byte equality observed |
| lambda.test | 10 | 0.001458s | 0.001458s | 0.001462s | byte equality observed |
| make.test | 10 | 0.001582s | 0.001545s | 0.001596s | byte equality observed |
| make_expr.test | 10 | 0.001783s | 0.001763s | 0.001770s | byte equality observed |
| matches.test | 10 | 0.001450s | 0.001443s | 0.001514s | byte equality observed |
| mem_ptr.test | 10 | 0.001673s | 0.001655s | 0.001721s | byte equality observed |
| mpl.test | 10 | 0.001451s | 0.001403s | 0.001481s | byte equality observed |
| noinvoke.test | 10 | 0.001468s | 0.001389s | 0.001471s | byte equality observed |
| pack_expansion.test | 10 | 0.001496s | 0.001455s | 0.001466s | byte equality observed |
| protect.test | 10 | 0.001481s | 0.001450s | 0.001473s | byte equality observed |
| switch.test | 10 | 0.001445s | 0.001401s | 0.001435s | byte equality observed |
| toy_spirit.test | 10 | 0.001429s | 0.001380s | 0.001451s | byte equality observed |
| toy_spirit2.test | 10 | 0.001431s | 0.001401s | 0.001458s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
