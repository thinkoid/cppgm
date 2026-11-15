# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.183026 | 3.076779 | 3.913819 | 0.003598 | 0.001608 | 0.001764 |
| qi_repo_confix.test | RUN | 1.206082 | 4.063456 | 4.262100 | 0.001514 | 0.001861 | 0.001851 |
| qi_repo_distinct.test | RUN | 0.852627 | 2.183492 | 2.628092 | 0.001648 | 0.001664 | 0.001721 |
| qi_repo_subrule.test | RUN | 2.842558 | 10.325773 | 12.573279 | 0.001762 | 0.001379 | 0.001846 |
| qi_repo_keywords.test | RUN | 2.518595 | 10.214019 | 10.208338 | 0.001348 | 0.001425 | 0.001431 |
| qi_repo_seek.test | RUN | 0.911288 | 3.304686 | 3.169371 | 0.001431 | 0.001687 | 0.001686 |
| karma_repo_confix.test | RUN | 0.831637 | 3.274693 | 3.186995 | 0.001621 | 0.001624 | 0.001711 |
| karma_repo_subrule.test | RUN | 1.410842 | 5.943800 | 7.186835 | 0.001234 | 0.001192 | 0.001167 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.984×, 0.981× | 1.026× |
| clang | 0.965×† | 1.010×, 0.920× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000973s | 0.000947s | 0.000934s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000964s | 0.000959s | 0.000952s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000923s | 0.000896s | 0.000892s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001026s | 0.001037s | 0.001032s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000907s | 0.000909s | 0.000892s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001073s | 0.001010s | 0.001009s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000944s | 0.000919s | 0.000933s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000998s | 0.000965s | 0.000969s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
