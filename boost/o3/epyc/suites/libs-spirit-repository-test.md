# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.862095 | 5.201862 | 6.588845 | 0.002018 | 0.001992 | 0.002118 |
| qi_repo_confix.test | RUN | 1.987535 | 6.828542 | 7.148593 | 0.002142 | 0.002298 | 0.002362 |
| qi_repo_distinct.test | RUN | 1.412552 | 3.644481 | 4.542475 | 0.002086 | 0.002182 | 0.001872 |
| qi_repo_subrule.test | RUN | 4.438623 | 15.869375 | 20.052715 | 0.001849 | 0.001738 | 0.002286 |
| qi_repo_keywords.test | RUN | 4.303123 | 16.122933 | 18.728794 | 0.001820 | 0.001770 | 0.001640 |
| qi_repo_seek.test | RUN | 1.587219 | 5.635663 | 5.376555 | 0.002060 | 0.002309 | 0.002126 |
| karma_repo_confix.test | RUN | 1.484823 | 5.483363 | 5.336509 | 0.001990 | 0.002172 | 0.002152 |
| karma_repo_subrule.test | RUN | 2.496169 | 9.989924 | 8.992952 | 0.001870 | 0.001620 | 0.001648 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.991×, 0.993× | 0.997× |
| clang | 0.998× | 1.002×, 0.994× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001522s | 0.001574s | 0.001532s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001573s | 0.001561s | 0.001567s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001496s | 0.001489s | 0.001474s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001734s | 0.001683s | 0.001714s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001495s | 0.001523s | 0.001500s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001708s | 0.001662s | 0.001684s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001510s | 0.001527s | 0.001472s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001599s | 0.001583s | 0.001618s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
