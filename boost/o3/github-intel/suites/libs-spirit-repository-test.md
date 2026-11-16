# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.311466 | 3.660517 | 4.317093 | 0.001526 | 0.001560 | 0.001138 |
| qi_repo_confix.test | RUN | 1.358006 | 4.825936 | 4.679022 | 0.001302 | 0.001423 | 0.001258 |
| qi_repo_distinct.test | RUN | 0.965469 | 2.558723 | 2.977255 | 0.001490 | 0.001395 | 0.001273 |
| qi_repo_subrule.test | RUN | 3.241730 | 13.021592 | 13.972149 | 0.001600 | 0.001418 | 0.001347 |
| qi_repo_keywords.test | RUN | 3.053117 | 11.982629 | 12.571440 | 0.001101 | 0.001056 | 0.000969 |
| qi_repo_seek.test | RUN | 1.093739 | 3.972901 | 3.525616 | 0.001166 | 0.001461 | 0.001275 |
| karma_repo_confix.test | RUN | 1.035408 | 3.939357 | 3.490183 | 0.001303 | 0.001382 | 0.001378 |
| karma_repo_subrule.test | RUN | 1.742758 | 6.577141 | 6.599674 | 0.001058 | 0.000967 | 0.000936 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.992×, 0.985× | 0.992× |
| clang | 0.991× | 0.977×, 1.005× | 1.014× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000844s | 0.000860s | 0.000859s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000881s | 0.000874s | 0.000865s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000838s | 0.000812s | 0.000847s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000873s | 0.000846s | 0.000857s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000816s | 0.000808s | 0.000802s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000925s | 0.000912s | 0.000896s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000820s | 0.000853s | 0.000837s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000886s | 0.000868s | 0.000874s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
