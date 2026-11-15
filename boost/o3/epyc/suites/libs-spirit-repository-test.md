# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.207988 | 3.304210 | 3.659724 | 0.001731 | 0.001815 | 0.001763 |
| qi_repo_confix.test | RUN | 1.243663 | 4.336510 | 4.015639 | 0.001464 | 0.001882 | 0.001955 |
| qi_repo_distinct.test | RUN | 0.913932 | 2.279031 | 2.442601 | 0.001718 | 0.001682 | 0.001496 |
| qi_repo_subrule.test | RUN | 2.968439 | 10.876093 | 12.002426 | 0.001804 | 0.001504 | 0.001672 |
| qi_repo_keywords.test | RUN | 2.889446 | 11.003115 | 11.332405 | 0.001648 | 0.001487 | 0.001317 |
| qi_repo_seek.test | RUN | 0.983146 | 3.540849 | 2.945856 | 0.001449 | 0.001800 | 0.001594 |
| karma_repo_confix.test | RUN | 0.896103 | 3.521469 | 2.940303 | 0.001916 | 0.001811 | 0.001792 |
| karma_repo_subrule.test | RUN | 1.684046 | 6.404404 | 5.752884 | 0.001410 | 0.001362 | 0.001348 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.956×† | 0.988×, 0.925× | 1.027× |
| clang | 1.121×† | 1.269×, 0.972× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000920s | 0.000930s | 0.000894s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000940s | 0.000894s | 0.000950s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000896s | 0.000865s | 0.000873s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000972s | 0.000990s | 0.000993s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000867s | 0.000877s | 0.000920s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001005s | 0.000995s | 0.001004s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000890s | 0.000913s | 0.000885s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000940s | 0.000929s | 0.000957s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
