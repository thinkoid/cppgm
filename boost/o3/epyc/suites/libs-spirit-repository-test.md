# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.952848 | 5.516892 | 7.657071 | 0.002094 | 0.002006 | 0.002082 |
| qi_repo_confix.test | RUN | 2.019034 | 7.181112 | 8.255240 | 0.002159 | 0.002728 | 0.002290 |
| qi_repo_distinct.test | RUN | 1.483123 | 3.869726 | 5.339604 | 0.002208 | 0.002125 | 0.002261 |
| qi_repo_subrule.test | RUN | 4.525605 | 18.517356 | 22.518264 | 0.001644 | 0.002359 | 0.001899 |
| qi_repo_keywords.test | RUN | 4.357851 | 16.001577 | 17.869729 | 0.001775 | 0.001655 | 0.001650 |
| qi_repo_seek.test | RUN | 1.704416 | 6.051219 | 6.290151 | 0.002126 | 0.002222 | 0.001730 |
| karma_repo_confix.test | RUN | 1.523401 | 5.971103 | 5.946687 | 0.001888 | 0.002158 | 0.002078 |
| karma_repo_subrule.test | RUN | 2.466259 | 10.732665 | 12.618178 | 0.001728 | 0.001515 | 0.001578 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.985×, 0.988× | 0.978× |
| clang | 0.991× | 0.994×, 0.989× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001535s | 0.001506s | 0.001516s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001583s | 0.001559s | 0.001573s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001503s | 0.001486s | 0.001498s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001716s | 0.001722s | 0.001689s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001522s | 0.001507s | 0.001463s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001705s | 0.001650s | 0.001683s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001510s | 0.001517s | 0.001488s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001603s | 0.001542s | 0.001561s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
