# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.240568 | 3.690244 | 4.275073 | 0.001387 | 0.001406 | 0.001209 |
| qi_repo_confix.test | RUN | 1.287424 | 4.905650 | 4.692030 | 0.001262 | 0.001512 | 0.001239 |
| qi_repo_distinct.test | RUN | 0.924759 | 2.570905 | 2.882424 | 0.001254 | 0.001416 | 0.001327 |
| qi_repo_subrule.test | RUN | 2.929436 | 11.983962 | 13.662354 | 0.001008 | 0.001032 | 0.001508 |
| qi_repo_keywords.test | RUN | 2.946751 | 12.181838 | 12.728989 | 0.001111 | 0.001177 | 0.000943 |
| qi_repo_seek.test | RUN | 1.047195 | 4.019213 | 3.442725 | 0.001246 | 0.001328 | 0.001185 |
| karma_repo_confix.test | RUN | 0.953390 | 3.991918 | 3.440552 | 0.001436 | 0.001465 | 0.001220 |
| karma_repo_subrule.test | RUN | 1.664311 | 7.545852 | 6.329203 | 0.000983 | 0.001095 | 0.000892 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.987×, 0.996× | 1.002× |
| clang | 0.988× | 0.992×, 0.984× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000843s | 0.000828s | 0.000811s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000855s | 0.000842s | 0.000840s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000819s | 0.000808s | 0.000807s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000858s | 0.000860s | 0.000857s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000797s | 0.000804s | 0.000802s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000949s | 0.000895s | 0.000905s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000816s | 0.000833s | 0.000809s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000876s | 0.000863s | 0.000867s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
