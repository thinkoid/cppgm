# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.551398 | 4.170370 | 5.302764 | 0.001914 | 0.001882 | 0.001824 |
| qi_repo_confix.test | RUN | 1.573410 | 5.495783 | 5.738028 | 0.001917 | 0.002022 | 0.001978 |
| qi_repo_distinct.test | RUN | 1.151072 | 2.909414 | 3.646607 | 0.001936 | 0.001936 | 0.001773 |
| qi_repo_subrule.test | RUN | 3.603433 | 13.472667 | 16.495498 | 0.001562 | 0.001469 | 0.001950 |
| qi_repo_keywords.test | RUN | 3.263333 | 13.283401 | 15.412919 | 0.001625 | 0.001518 | 0.001471 |
| qi_repo_seek.test | RUN | 1.291641 | 4.519469 | 4.355705 | 0.001869 | 0.002008 | 0.001870 |
| karma_repo_confix.test | RUN | 1.164234 | 4.289526 | 4.262363 | 0.001869 | 0.002087 | 0.001846 |
| karma_repo_subrule.test | RUN | 2.074315 | 8.466461 | 7.428127 | 0.001455 | 0.001392 | 0.001748 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.024×† | 1.062×, 0.985× | 0.948× |
| clang | 0.983× | 0.987×, 0.979× | 0.968× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001189s | 0.001209s | 0.001185s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001227s | 0.001225s | 0.001216s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001163s | 0.001178s | 0.001154s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001336s | 0.001360s | 0.001295s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001186s | 0.001152s | 0.001159s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001310s | 0.001304s | 0.001311s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001169s | 0.001197s | 0.001170s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001249s | 0.001215s | 0.001244s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
