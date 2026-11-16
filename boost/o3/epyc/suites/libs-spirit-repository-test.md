# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.442360 | 4.223099 | 5.217670 | 0.001856 | 0.001868 | 0.001728 |
| qi_repo_confix.test | RUN | 1.515695 | 5.546192 | 5.705549 | 0.001997 | 0.002118 | 0.001928 |
| qi_repo_distinct.test | RUN | 1.103530 | 2.920911 | 3.579853 | 0.001837 | 0.001706 | 0.001798 |
| qi_repo_subrule.test | RUN | 3.433866 | 14.108006 | 16.184121 | 0.001522 | 0.001988 | 0.001912 |
| qi_repo_keywords.test | RUN | 3.285965 | 13.388539 | 14.920720 | 0.001511 | 0.001288 | 0.001396 |
| qi_repo_seek.test | RUN | 1.215727 | 4.401517 | 4.278592 | 0.001716 | 0.001814 | 0.001744 |
| karma_repo_confix.test | RUN | 1.155838 | 4.331736 | 4.211469 | 0.001656 | 0.001987 | 0.001689 |
| karma_repo_subrule.test | RUN | 1.918450 | 7.397823 | 7.438641 | 0.001416 | 0.001330 | 0.001333 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991×† | 0.992×, 0.989× | 0.914× |
| clang | 0.965×† | 1.052×, 0.878× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001076s | 0.001023s | 0.001124s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001122s | 0.001103s | 0.001121s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001016s | 0.001001s | 0.001083s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001160s | 0.001167s | 0.001261s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001011s | 0.001012s | 0.001115s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001179s | 0.001138s | 0.001230s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001080s | 0.001024s | 0.001115s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001106s | 0.001062s | 0.001151s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
