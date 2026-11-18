# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.255529 | 3.662705 | 4.215353 | 0.001442 | 0.001345 | 0.001240 |
| qi_repo_confix.test | RUN | 1.342983 | 4.798857 | 4.644472 | 0.001476 | 0.001344 | 0.001151 |
| qi_repo_distinct.test | RUN | 0.925740 | 2.545338 | 2.877859 | 0.001442 | 0.001304 | 0.001197 |
| qi_repo_subrule.test | RUN | 3.097545 | 11.780997 | 13.439181 | 0.001528 | 0.001027 | 0.001294 |
| qi_repo_keywords.test | RUN | 2.930933 | 11.986821 | 10.774708 | 0.001199 | 0.001047 | 0.001005 |
| qi_repo_seek.test | RUN | 1.064535 | 3.978262 | 3.369171 | 0.001115 | 0.001331 | 0.001275 |
| karma_repo_confix.test | RUN | 0.972006 | 3.933357 | 3.439092 | 0.001344 | 0.001480 | 0.001245 |
| karma_repo_subrule.test | RUN | 1.712565 | 7.381299 | 7.976854 | 0.001002 | 0.000949 | 0.000893 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.997×, 0.996× | 1.014× |
| clang | 0.983× | 0.984×, 0.983× | 0.989× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000845s | 0.000847s | 0.000837s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000882s | 0.000855s | 0.000844s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000844s | 0.000824s | 0.000837s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000863s | 0.000906s | 0.000853s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000808s | 0.000829s | 0.000791s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000938s | 0.000931s | 0.000900s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000817s | 0.000822s | 0.000807s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000872s | 0.000864s | 0.000867s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
