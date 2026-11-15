# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.970709 | 5.551846 | 7.807740 | 0.002074 | 0.001966 | 0.002026 |
| qi_repo_confix.test | RUN | 2.080466 | 7.251221 | 8.273228 | 0.002171 | 0.002348 | 0.002214 |
| qi_repo_distinct.test | RUN | 1.508659 | 3.907964 | 5.392492 | 0.002118 | 0.002224 | 0.001798 |
| qi_repo_subrule.test | RUN | 4.627803 | 18.323415 | 21.178007 | 0.001722 | 0.002485 | 0.002278 |
| qi_repo_keywords.test | RUN | 4.490952 | 17.446630 | 19.142940 | 0.001732 | 0.001768 | 0.001724 |
| qi_repo_seek.test | RUN | 1.751275 | 6.048586 | 6.393243 | 0.001934 | 0.002163 | 0.001807 |
| karma_repo_confix.test | RUN | 1.585576 | 6.006959 | 6.240228 | 0.002098 | 0.002050 | 0.001942 |
| karma_repo_subrule.test | RUN | 2.603457 | 9.157519 | 12.290253 | 0.001728 | 0.001611 | 0.001513 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.985× | 0.981×, 0.989× | 0.999× |
| clang | 0.983× | 0.981×, 0.986× | 0.986× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001550s | 0.001554s | 0.001525s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001572s | 0.001526s | 0.001568s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001526s | 0.001513s | 0.001479s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001707s | 0.001687s | 0.001717s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001503s | 0.001474s | 0.001451s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001705s | 0.001672s | 0.001694s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001534s | 0.001529s | 0.001513s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001609s | 0.001559s | 0.001591s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
