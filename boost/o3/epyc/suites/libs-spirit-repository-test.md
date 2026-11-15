# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.949933 | 5.488679 | 7.598207 | 0.001884 | 0.002069 | 0.002083 |
| qi_repo_confix.test | RUN | 2.011001 | 7.101640 | 8.158936 | 0.002064 | 0.002246 | 0.002279 |
| qi_repo_distinct.test | RUN | 1.469326 | 3.835472 | 5.308250 | 0.001914 | 0.002241 | 0.002144 |
| qi_repo_subrule.test | RUN | 4.734863 | 17.926747 | 22.415632 | 0.002222 | 0.002246 | 0.002116 |
| qi_repo_keywords.test | RUN | 4.332514 | 15.915670 | 19.773511 | 0.001632 | 0.001623 | 0.001470 |
| qi_repo_seek.test | RUN | 1.641547 | 6.172304 | 6.150313 | 0.001956 | 0.002044 | 0.002004 |
| karma_repo_confix.test | RUN | 1.496359 | 5.918796 | 6.067593 | 0.002068 | 0.002206 | 0.002118 |
| karma_repo_subrule.test | RUN | 2.480802 | 10.607322 | 10.582409 | 0.001465 | 0.001536 | 0.001502 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 1.007×, 0.985× | 1.001× |
| clang | 0.986× | 0.995×, 0.976× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001520s | 0.001506s | 0.001500s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001557s | 0.001545s | 0.001558s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001485s | 0.001459s | 0.001470s | byte equality observed |
| qi_repo_confix.test | 9 | 0.001659s | 0.001731s | 0.001667s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001482s | 0.001452s | 0.001460s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001689s | 0.001637s | 0.001645s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001481s | 0.001484s | 0.001463s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001573s | 0.001563s | 0.001537s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
