# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.485876 | 4.196702 | 5.223285 | 0.001802 | 0.002093 | 0.001749 |
| qi_repo_confix.test | RUN | 1.529581 | 5.457340 | 5.638509 | 0.001810 | 0.001920 | 0.002078 |
| qi_repo_distinct.test | RUN | 1.124864 | 2.932627 | 3.587633 | 0.001842 | 0.001756 | 0.001762 |
| qi_repo_subrule.test | RUN | 3.516037 | 14.290214 | 14.187291 | 0.001560 | 0.002089 | 0.001447 |
| qi_repo_keywords.test | RUN | 3.195922 | 13.588781 | 14.487400 | 0.001620 | 0.001409 | 0.001440 |
| qi_repo_seek.test | RUN | 1.259352 | 4.515283 | 4.253611 | 0.001702 | 0.001808 | 0.001728 |
| karma_repo_confix.test | RUN | 1.154500 | 4.476603 | 4.308466 | 0.001808 | 0.001783 | 0.001774 |
| karma_repo_subrule.test | RUN | 2.001048 | 7.409286 | 8.749820 | 0.001374 | 0.001447 | 0.001258 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.027×† | 1.070×, 0.983× | 1.030× |
| clang | 0.990× | 0.994×, 0.986× | 1.033× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001081s | 0.001083s | 0.001078s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001106s | 0.001115s | 0.001084s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001032s | 0.001098s | 0.001017s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001175s | 0.001238s | 0.001181s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001032s | 0.001085s | 0.001021s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001165s | 0.001140s | 0.001145s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001050s | 0.001115s | 0.001077s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001100s | 0.001108s | 0.001082s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
