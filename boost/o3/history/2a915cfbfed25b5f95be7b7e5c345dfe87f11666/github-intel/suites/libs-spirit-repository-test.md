# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.273592 | 3.745492 | 4.229361 | 0.001294 | 0.001424 | 0.001282 |
| qi_repo_confix.test | RUN | 1.328587 | 4.924186 | 4.675731 | 0.001255 | 0.001552 | 0.001177 |
| qi_repo_distinct.test | RUN | 0.952920 | 2.594397 | 2.883565 | 0.001350 | 0.001600 | 0.001110 |
| qi_repo_subrule.test | RUN | 3.048575 | 12.125768 | 13.534013 | 0.001003 | 0.001087 | 0.001284 |
| qi_repo_keywords.test | RUN | 3.029330 | 12.232442 | 10.869826 | 0.001164 | 0.001099 | 0.000945 |
| qi_repo_seek.test | RUN | 1.070748 | 3.966822 | 3.376040 | 0.001232 | 0.001582 | 0.001103 |
| karma_repo_confix.test | RUN | 0.976114 | 3.975698 | 3.470514 | 0.001352 | 0.001354 | 0.001170 |
| karma_repo_subrule.test | RUN | 1.707550 | 7.553941 | 7.967767 | 0.001020 | 0.001094 | 0.000891 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.996×, 0.975× | 1.011× |
| clang | 0.994× | 0.992×, 0.996× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000820s | 0.000858s | 0.000814s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000860s | 0.000835s | 0.000852s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000803s | 0.000827s | 0.000831s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000879s | 0.000870s | 0.000884s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000830s | 0.000783s | 0.000800s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000927s | 0.000900s | 0.000898s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000821s | 0.000815s | 0.000812s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000879s | 0.000866s | 0.000870s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
