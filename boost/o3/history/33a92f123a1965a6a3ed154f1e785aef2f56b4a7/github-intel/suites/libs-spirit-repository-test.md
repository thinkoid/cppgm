# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.244099 | 3.650517 | 4.306113 | 0.001402 | 0.001285 | 0.001358 |
| qi_repo_confix.test | RUN | 1.292038 | 4.756772 | 4.645567 | 0.001280 | 0.001503 | 0.001252 |
| qi_repo_distinct.test | RUN | 0.926893 | 2.531965 | 2.907196 | 0.001260 | 0.001186 | 0.001186 |
| qi_repo_subrule.test | RUN | 3.089173 | 12.906917 | 13.772380 | 0.001336 | 0.001366 | 0.001387 |
| qi_repo_keywords.test | RUN | 3.039831 | 11.939034 | 13.024158 | 0.001075 | 0.000995 | 0.001019 |
| qi_repo_seek.test | RUN | 1.041910 | 3.917529 | 3.443372 | 0.001217 | 0.001328 | 0.001191 |
| karma_repo_confix.test | RUN | 0.945571 | 3.875936 | 3.450282 | 0.001411 | 0.001354 | 0.001362 |
| karma_repo_subrule.test | RUN | 1.587577 | 6.692937 | 6.297662 | 0.000975 | 0.000881 | 0.000987 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.981× | 0.981×, 0.980× | 1.009× |
| clang | 0.977× | 0.979×, 0.976× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000850s | 0.000841s | 0.000814s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000858s | 0.000838s | 0.000822s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000801s | 0.000788s | 0.000824s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000859s | 0.000839s | 0.000839s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000808s | 0.000786s | 0.000802s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000923s | 0.000911s | 0.000879s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000813s | 0.000801s | 0.000792s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000864s | 0.000862s | 0.000858s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
