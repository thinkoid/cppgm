# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.479143 | 4.171249 | 5.203618 | 0.001650 | 0.001878 | 0.001684 |
| qi_repo_confix.test | RUN | 1.505431 | 5.469815 | 5.572591 | 0.001754 | 0.002122 | 0.001877 |
| qi_repo_distinct.test | RUN | 1.109952 | 2.893127 | 3.569222 | 0.001854 | 0.001902 | 0.001784 |
| qi_repo_subrule.test | RUN | 3.532709 | 13.083810 | 14.390351 | 0.001882 | 0.001986 | 0.001678 |
| qi_repo_keywords.test | RUN | 3.047805 | 13.509596 | 13.699492 | 0.001584 | 0.001511 | 0.001373 |
| qi_repo_seek.test | RUN | 1.249655 | 4.449684 | 4.181880 | 0.001663 | 0.001906 | 0.001675 |
| karma_repo_confix.test | RUN | 1.154945 | 4.457952 | 4.139508 | 0.001826 | 0.001913 | 0.001734 |
| karma_repo_subrule.test | RUN | 1.927500 | 8.393688 | 8.612777 | 0.001358 | 0.001370 | 0.001258 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002×† | 1.001×, 1.003× | 0.924× |
| clang | 0.982× | 0.979×, 0.985× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001030s | 0.001031s | 0.001004s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001074s | 0.001059s | 0.001030s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001004s | 0.001020s | 0.001008s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001164s | 0.001123s | 0.001157s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001007s | 0.000995s | 0.000993s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001152s | 0.001120s | 0.001129s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000985s | 0.001040s | 0.000974s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001070s | 0.001044s | 0.001052s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
