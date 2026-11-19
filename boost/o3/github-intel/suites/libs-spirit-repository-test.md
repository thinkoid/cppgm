# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.251644 | 3.781669 | 4.295157 | 0.001486 | 0.001408 | 0.001215 |
| qi_repo_confix.test | RUN | 1.313531 | 4.931385 | 4.670432 | 0.001374 | 0.001552 | 0.001344 |
| qi_repo_distinct.test | RUN | 0.940646 | 2.589385 | 2.874783 | 0.001380 | 0.001455 | 0.001260 |
| qi_repo_subrule.test | RUN | 2.967283 | 13.304734 | 13.782344 | 0.001031 | 0.001598 | 0.001313 |
| qi_repo_keywords.test | RUN | 2.975814 | 11.327582 | 10.938203 | 0.001089 | 0.001106 | 0.001016 |
| qi_repo_seek.test | RUN | 1.048527 | 4.087287 | 3.470321 | 0.001284 | 0.001363 | 0.001298 |
| karma_repo_confix.test | RUN | 0.963678 | 4.060459 | 3.461324 | 0.001287 | 0.001592 | 0.001177 |
| karma_repo_subrule.test | RUN | 1.690726 | 7.960833 | 8.248845 | 0.001022 | 0.001003 | 0.000964 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.989×, 0.991× | 1.013× |
| clang | 1.001× | 1.000×, 1.003× | 0.981× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000824s | 0.000846s | 0.000850s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000856s | 0.000854s | 0.000872s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000821s | 0.000854s | 0.000836s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000866s | 0.000864s | 0.000880s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000832s | 0.000829s | 0.000790s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000956s | 0.000911s | 0.000932s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000817s | 0.000809s | 0.000815s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000881s | 0.000863s | 0.000879s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
