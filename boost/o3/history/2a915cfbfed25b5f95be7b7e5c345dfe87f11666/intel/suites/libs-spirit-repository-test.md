# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.043758 | 2.901534 | 3.228215 | 0.001045 | 0.001101 | 0.001185 |
| qi_repo_confix.test | RUN | 1.093161 | 3.859180 | 3.544172 | 0.001043 | 0.001137 | 0.001237 |
| qi_repo_distinct.test | RUN | 0.794502 | 2.028974 | 2.200005 | 0.001039 | 0.001052 | 0.000992 |
| qi_repo_subrule.test | RUN | 2.547570 | 9.786842 | 10.179782 | 0.001115 | 0.001337 | 0.001149 |
| qi_repo_keywords.test | RUN | 2.869729 | 10.329544 | 10.307622 | 0.001106 | 0.001192 | 0.001044 |
| qi_repo_seek.test | RUN | 0.874704 | 3.135612 | 2.617170 | 0.001169 | 0.001040 | 0.000999 |
| karma_repo_confix.test | RUN | 0.804147 | 3.157096 | 2.669584 | 0.000983 | 0.000999 | 0.001147 |
| karma_repo_subrule.test | RUN | 1.864361 | 6.921098 | 6.953448 | 0.001253 | 0.001052 | 0.001245 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.992×, 0.990× | 1.006× |
| clang | 0.989× | 0.991×, 0.987× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000947s | 0.000949s | 0.000939s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000986s | 0.000978s | 0.000977s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000934s | 0.000928s | 0.000917s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000997s | 0.000987s | 0.000983s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000926s | 0.000914s | 0.000916s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001070s | 0.001054s | 0.001047s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000928s | 0.000937s | 0.000921s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001014s | 0.000991s | 0.001010s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
