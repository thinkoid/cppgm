# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.516178 | 4.185799 | 5.435008 | 0.001748 | 0.001974 | 0.001859 |
| qi_repo_confix.test | RUN | 1.547137 | 5.633976 | 5.857160 | 0.001724 | 0.002070 | 0.002016 |
| qi_repo_distinct.test | RUN | 1.130718 | 2.937157 | 3.645022 | 0.001820 | 0.001967 | 0.001761 |
| qi_repo_subrule.test | RUN | 3.716303 | 14.907945 | 14.601624 | 0.001986 | 0.002118 | 0.001510 |
| qi_repo_keywords.test | RUN | 3.375568 | 14.217891 | 14.983204 | 0.001645 | 0.001577 | 0.001565 |
| qi_repo_seek.test | RUN | 1.281829 | 4.638806 | 4.370799 | 0.001713 | 0.001968 | 0.001917 |
| karma_repo_confix.test | RUN | 1.177137 | 4.560892 | 4.316924 | 0.001838 | 0.002024 | 0.001616 |
| karma_repo_subrule.test | RUN | 1.906652 | 7.889255 | 9.071994 | 0.001500 | 0.001551 | 0.001576 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.957×† | 0.998×, 0.916× | 1.034× |
| clang | 0.976×† | 0.987×, 0.965× | 1.070× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001091s | 0.001038s | 0.001107s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001178s | 0.001071s | 0.001163s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001062s | 0.001026s | 0.001032s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001266s | 0.001162s | 0.001251s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001094s | 0.001047s | 0.001088s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001249s | 0.001180s | 0.001204s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001105s | 0.001029s | 0.001071s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001168s | 0.001109s | 0.001110s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
