# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.057325 | 2.955343 | 3.305376 | 0.001163 | 0.001201 | 0.001288 |
| qi_repo_confix.test | RUN | 1.101461 | 3.921140 | 3.632962 | 0.001230 | 0.001176 | 0.001181 |
| qi_repo_distinct.test | RUN | 0.800039 | 2.062737 | 2.229953 | 0.001172 | 0.001134 | 0.001066 |
| qi_repo_subrule.test | RUN | 2.568092 | 10.237423 | 10.707506 | 0.001460 | 0.001334 | 0.001151 |
| qi_repo_keywords.test | RUN | 2.874104 | 10.582976 | 10.774578 | 0.001334 | 0.001229 | 0.001152 |
| qi_repo_seek.test | RUN | 0.879682 | 3.187628 | 2.661511 | 0.001173 | 0.001112 | 0.001047 |
| karma_repo_confix.test | RUN | 0.802505 | 3.204126 | 2.733932 | 0.001047 | 0.001106 | 0.001117 |
| karma_repo_subrule.test | RUN | 1.876902 | 7.190758 | 7.212298 | 0.001176 | 0.001237 | 0.001245 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.988×, 0.994× | 1.002× |
| clang | 0.994× | 0.995×, 0.993× | 1.016× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000986s | 0.000999s | 0.000986s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001012s | 0.001002s | 0.001015s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000971s | 0.000962s | 0.000956s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001023s | 0.001025s | 0.001028s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000965s | 0.000964s | 0.000957s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001108s | 0.001092s | 0.001074s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000972s | 0.000965s | 0.000966s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001045s | 0.001035s | 0.001034s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
