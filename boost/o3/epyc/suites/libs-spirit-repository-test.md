# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.170551 | 3.107617 | 3.595188 | 0.001771 | 0.001649 | 0.001612 |
| qi_repo_confix.test | RUN | 1.206299 | 4.036322 | 3.890397 | 0.001641 | 0.001837 | 0.001714 |
| qi_repo_distinct.test | RUN | 0.873799 | 2.173601 | 2.402477 | 0.001742 | 0.002662 | 0.001634 |
| qi_repo_subrule.test | RUN | 2.825328 | 11.031933 | 11.553531 | 0.001562 | 0.001736 | 0.001854 |
| qi_repo_keywords.test | RUN | 2.805393 | 10.489366 | 10.969293 | 0.001372 | 0.001271 | 0.001268 |
| qi_repo_seek.test | RUN | 0.993448 | 3.295431 | 2.984472 | 0.001784 | 0.001815 | 0.001673 |
| karma_repo_confix.test | RUN | 0.890223 | 3.334068 | 3.017632 | 0.001760 | 0.001545 | 0.001646 |
| karma_repo_subrule.test | RUN | 1.597493 | 5.668768 | 5.219452 | 0.001269 | 0.001317 | 0.001248 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003×† | 0.964×, 1.041× | 0.992× |
| clang | 1.007× | 1.003×, 1.011× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000907s | 0.000885s | 0.000948s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000927s | 0.000897s | 0.000938s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000866s | 0.000889s | 0.000895s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001006s | 0.000994s | 0.001029s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000896s | 0.000890s | 0.000912s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001017s | 0.000981s | 0.001034s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000885s | 0.000865s | 0.000902s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000929s | 0.000918s | 0.000965s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
