# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.226329 | 3.590221 | 3.881053 | 0.001819 | 0.001846 | 0.001701 |
| qi_repo_confix.test | RUN | 1.244673 | 4.576457 | 4.252686 | 0.001744 | 0.002064 | 0.001855 |
| qi_repo_distinct.test | RUN | 0.906732 | 2.455580 | 2.557792 | 0.001830 | 0.001835 | 0.001658 |
| qi_repo_subrule.test | RUN | 2.975485 | 13.291415 | 11.585719 | 0.001978 | 0.002056 | 0.001477 |
| qi_repo_keywords.test | RUN | 2.590600 | 12.340030 | 11.345079 | 0.001562 | 0.001567 | 0.001342 |
| qi_repo_seek.test | RUN | 0.996479 | 3.660091 | 3.084613 | 0.001836 | 0.001876 | 0.001574 |
| karma_repo_confix.test | RUN | 0.933889 | 3.734579 | 3.070667 | 0.001692 | 0.002011 | 0.001715 |
| karma_repo_subrule.test | RUN | 1.676405 | 6.872740 | 6.534511 | 0.001292 | 0.001647 | 0.001478 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.970×† | 0.992×, 0.947× | 1.054× |
| clang | 0.974× | 0.956×, 0.993× | 1.050× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000940s | 0.000946s | 0.000929s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000979s | 0.000935s | 0.000951s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000916s | 0.000870s | 0.000884s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001044s | 0.001017s | 0.001016s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000924s | 0.000884s | 0.000907s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001059s | 0.001002s | 0.001005s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000918s | 0.000874s | 0.000909s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000982s | 0.000964s | 0.000972s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
