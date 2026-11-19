# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.231255 | 3.627995 | 4.277593 | 0.001300 | 0.001432 | 0.001168 |
| qi_repo_confix.test | RUN | 1.282844 | 4.845660 | 4.628116 | 0.001227 | 0.001383 | 0.001267 |
| qi_repo_distinct.test | RUN | 0.923514 | 2.525167 | 2.888607 | 0.001356 | 0.001284 | 0.001150 |
| qi_repo_subrule.test | RUN | 3.008894 | 12.984544 | 13.653705 | 0.001299 | 0.001579 | 0.001390 |
| qi_repo_keywords.test | RUN | 2.809823 | 11.057381 | 10.887652 | 0.001018 | 0.001090 | 0.001002 |
| qi_repo_seek.test | RUN | 1.031689 | 3.918419 | 3.430471 | 0.001201 | 0.001236 | 0.001169 |
| karma_repo_confix.test | RUN | 0.954364 | 3.933296 | 3.378699 | 0.001356 | 0.001469 | 0.001265 |
| karma_repo_subrule.test | RUN | 1.657238 | 7.775549 | 8.133086 | 0.000945 | 0.001026 | 0.000971 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.996×, 0.977× | 0.997× |
| clang | 0.989× | 0.990×, 0.987× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000826s | 0.000827s | 0.000817s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000842s | 0.000828s | 0.000852s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000787s | 0.000812s | 0.000811s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000863s | 0.000862s | 0.000841s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000814s | 0.000798s | 0.000801s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000947s | 0.000898s | 0.000890s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000826s | 0.000826s | 0.000815s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000872s | 0.000851s | 0.000866s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
