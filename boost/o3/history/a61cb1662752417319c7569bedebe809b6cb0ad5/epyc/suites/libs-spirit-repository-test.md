# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.508742 | 4.167885 | 5.232012 | 0.001622 | 0.001883 | 0.001690 |
| qi_repo_confix.test | RUN | 1.518284 | 5.391713 | 5.620639 | 0.001831 | 0.001874 | 0.001826 |
| qi_repo_distinct.test | RUN | 1.117379 | 2.934550 | 3.564747 | 0.002402 | 0.001798 | 0.001736 |
| qi_repo_subrule.test | RUN | 3.617204 | 14.167758 | 15.970073 | 0.001898 | 0.001994 | 0.001569 |
| qi_repo_keywords.test | RUN | 3.131800 | 12.441063 | 12.791004 | 0.001617 | 0.001532 | 0.001409 |
| qi_repo_seek.test | RUN | 1.231816 | 4.491169 | 4.275977 | 0.001550 | 0.001824 | 0.001798 |
| karma_repo_confix.test | RUN | 1.153579 | 4.350245 | 4.195247 | 0.001848 | 0.001853 | 0.001720 |
| karma_repo_subrule.test | RUN | 1.969405 | 8.461971 | 9.312116 | 0.001410 | 0.001366 | 0.001322 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.061×† | 1.050×, 1.072× | 1.079× |
| clang | 0.989×† | 0.917×, 1.061× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001089s | 0.001129s | 0.001197s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001063s | 0.001142s | 0.001205s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001065s | 0.001110s | 0.001161s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001157s | 0.001209s | 0.001345s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001040s | 0.001077s | 0.001118s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001156s | 0.001184s | 0.001278s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001049s | 0.001063s | 0.001127s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001083s | 0.001135s | 0.001207s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
