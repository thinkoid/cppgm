# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.217910 | 3.714490 | 4.227969 | 0.001211 | 0.001348 | 0.001149 |
| qi_repo_confix.test | RUN | 1.276530 | 4.955419 | 4.623569 | 0.001333 | 0.001697 | 0.001199 |
| qi_repo_distinct.test | RUN | 0.916917 | 2.598596 | 2.886880 | 0.001258 | 0.001625 | 0.001139 |
| qi_repo_subrule.test | RUN | 2.881886 | 12.023138 | 13.542788 | 0.000994 | 0.001149 | 0.001402 |
| qi_repo_keywords.test | RUN | 2.877713 | 12.206428 | 10.807958 | 0.001037 | 0.001095 | 0.000990 |
| qi_repo_seek.test | RUN | 1.019860 | 4.026643 | 3.435050 | 0.001221 | 0.001524 | 0.001302 |
| karma_repo_confix.test | RUN | 0.935592 | 3.983426 | 3.415345 | 0.001204 | 0.001387 | 0.001353 |
| karma_repo_subrule.test | RUN | 1.601826 | 7.577920 | 8.042005 | 0.000922 | 0.001074 | 0.000910 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.980× | 0.984×, 0.975× | 1.048× |
| clang | 0.972× | 0.960×, 0.984× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000843s | 0.000817s | 0.000837s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000858s | 0.000843s | 0.000852s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000822s | 0.000810s | 0.000820s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000870s | 0.000872s | 0.000838s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000809s | 0.000813s | 0.000784s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000943s | 0.000889s | 0.000899s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000823s | 0.000796s | 0.000803s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000878s | 0.000844s | 0.000865s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
