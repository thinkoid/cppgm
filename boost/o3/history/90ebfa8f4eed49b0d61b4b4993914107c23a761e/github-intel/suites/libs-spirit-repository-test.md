# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.672404 | 4.970515 | 5.856493 | 0.001715 | 0.001733 | 0.001586 |
| qi_repo_confix.test | RUN | 1.725554 | 6.547466 | 6.300840 | 0.001696 | 0.001820 | 0.001672 |
| qi_repo_distinct.test | RUN | 1.247694 | 3.460118 | 3.974306 | 0.002030 | 0.001753 | 0.001689 |
| qi_repo_subrule.test | RUN | 3.885267 | 16.956013 | 18.179506 | 0.001378 | 0.001744 | 0.001799 |
| qi_repo_keywords.test | RUN | 3.942027 | 16.168427 | 16.731427 | 0.001444 | 0.001254 | 0.001221 |
| qi_repo_seek.test | RUN | 1.406019 | 5.345086 | 4.673731 | 0.001467 | 0.001824 | 0.001602 |
| karma_repo_confix.test | RUN | 1.326826 | 5.341303 | 4.691831 | 0.001577 | 0.001845 | 0.001646 |
| karma_repo_subrule.test | RUN | 2.188162 | 8.158138 | 8.238645 | 0.001255 | 0.001228 | 0.001166 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.051×† | 1.009×, 1.092× | 1.019× |
| clang | 1.097×† | 1.056×, 1.137× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001075s | 0.001122s | 0.001258s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001117s | 0.001135s | 0.001279s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001064s | 0.001063s | 0.001212s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001131s | 0.001184s | 0.001320s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001050s | 0.001038s | 0.001197s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001216s | 0.001207s | 0.001377s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001058s | 0.001071s | 0.001189s | byte equality observed |
| qi_repo_subrule.test | 8 | 0.001151s | 0.001196s | 0.001293s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
