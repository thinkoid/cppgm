# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.908057 | 5.545831 | 7.577486 | 0.002098 | 0.002099 | 0.002010 |
| qi_repo_confix.test | RUN | 1.984267 | 7.203720 | 8.135540 | 0.002071 | 0.002364 | 0.002262 |
| qi_repo_distinct.test | RUN | 1.461471 | 3.899845 | 5.301461 | 0.002059 | 0.002250 | 0.001990 |
| qi_repo_subrule.test | RUN | 4.600931 | 18.356391 | 22.357373 | 0.002228 | 0.002192 | 0.002344 |
| qi_repo_keywords.test | RUN | 4.216023 | 17.057591 | 20.577622 | 0.001756 | 0.001501 | 0.001576 |
| qi_repo_seek.test | RUN | 1.662354 | 6.005959 | 6.287489 | 0.002034 | 0.002138 | 0.002154 |
| karma_repo_confix.test | RUN | 1.543920 | 5.953578 | 6.003842 | 0.001925 | 0.002252 | 0.001962 |
| karma_repo_subrule.test | RUN | 2.461957 | 9.145709 | 9.691278 | 0.001520 | 0.001527 | 0.001568 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.993×, 1.002× | 0.995× |
| clang | 1.009× | 0.998×, 1.021× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001524s | 0.001557s | 0.001562s | byte equality observed |
| karma_repo_subrule.test | 8 | 0.001547s | 0.001556s | 0.001615s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001495s | 0.001508s | 0.001528s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001687s | 0.001651s | 0.001716s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001484s | 0.001452s | 0.001549s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001700s | 0.001643s | 0.001719s | byte equality observed |
| qi_repo_seek.test | 9 | 0.001458s | 0.001473s | 0.001494s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001596s | 0.001565s | 0.001626s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
