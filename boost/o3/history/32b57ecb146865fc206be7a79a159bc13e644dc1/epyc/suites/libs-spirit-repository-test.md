# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.170412 | 3.261317 | 3.898131 | 0.001612 | 0.001740 | 0.001751 |
| qi_repo_confix.test | RUN | 1.202657 | 4.276994 | 4.209035 | 0.001500 | 0.001954 | 0.001840 |
| qi_repo_distinct.test | RUN | 0.867454 | 2.280745 | 2.599222 | 0.002120 | 0.001745 | 0.001773 |
| qi_repo_subrule.test | RUN | 2.807148 | 11.598585 | 12.596940 | 0.001786 | 0.001808 | 0.001780 |
| qi_repo_keywords.test | RUN | 2.493105 | 10.866575 | 11.988341 | 0.001408 | 0.001360 | 0.001306 |
| qi_repo_seek.test | RUN | 0.945566 | 3.577993 | 3.237262 | 0.001370 | 0.001893 | 0.001747 |
| karma_repo_confix.test | RUN | 0.875195 | 3.656330 | 3.161275 | 0.001650 | 0.001902 | 0.001782 |
| karma_repo_subrule.test | RUN | 1.479614 | 6.276525 | 5.705416 | 0.001294 | 0.001222 | 0.001374 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968×† | 0.971×, 0.965× | 1.128× |
| clang | 0.969× | 0.956×, 0.983× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000935s | 0.000933s | 0.000920s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000974s | 0.000926s | 0.000948s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000919s | 0.000909s | 0.000895s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001040s | 0.001009s | 0.000990s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000927s | 0.000895s | 0.000874s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001060s | 0.001005s | 0.001013s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000920s | 0.000903s | 0.000870s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000980s | 0.000956s | 0.000937s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
