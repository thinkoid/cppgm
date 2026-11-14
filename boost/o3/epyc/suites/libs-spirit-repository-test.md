# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.583694 | 4.365623 | 5.226893 | 0.001819 | 0.001955 | 0.001760 |
| qi_repo_confix.test | RUN | 1.614126 | 5.710296 | 5.607252 | 0.001784 | 0.002126 | 0.001971 |
| qi_repo_distinct.test | RUN | 1.156066 | 3.039576 | 3.573930 | 0.001860 | 0.001884 | 0.001763 |
| qi_repo_subrule.test | RUN | 3.888583 | 15.668745 | 14.741344 | 0.002032 | 0.002153 | 0.001997 |
| qi_repo_keywords.test | RUN | 3.528740 | 14.712520 | 14.016917 | 0.001658 | 0.001596 | 0.001427 |
| qi_repo_seek.test | RUN | 1.305909 | 4.800036 | 4.149534 | 0.001662 | 0.001816 | 0.001710 |
| karma_repo_confix.test | RUN | 1.213183 | 4.653510 | 4.101649 | 0.001786 | 0.001944 | 0.001888 |
| karma_repo_subrule.test | RUN | 1.982293 | 7.953632 | 8.793586 | 0.001502 | 0.001542 | 0.001321 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989×† | 0.992×, 0.986× | 0.933× |
| clang | 0.995×† | 1.051×, 0.940× | 1.077× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001025s | 0.001086s | 0.001023s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001055s | 0.001069s | 0.001148s | byte equality observed |
| qi_repo_advance.test | 9 | 0.001046s | 0.001017s | 0.001062s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001176s | 0.001150s | 0.001238s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001013s | 0.001005s | 0.001073s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001180s | 0.001118s | 0.001230s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001040s | 0.001015s | 0.001107s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001091s | 0.001079s | 0.001164s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
