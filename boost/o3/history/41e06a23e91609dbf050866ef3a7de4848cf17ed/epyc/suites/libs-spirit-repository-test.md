# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.981319 | 5.492550 | 7.651132 | 0.001991 | 0.001990 | 0.002024 |
| qi_repo_confix.test | RUN | 2.022252 | 7.139040 | 8.271125 | 0.001990 | 0.002384 | 0.002290 |
| qi_repo_distinct.test | RUN | 1.471963 | 3.868277 | 5.304259 | 0.002142 | 0.002124 | 0.002032 |
| qi_repo_subrule.test | RUN | 4.831440 | 18.475046 | 22.384901 | 0.002233 | 0.002275 | 0.001996 |
| qi_repo_keywords.test | RUN | 4.600792 | 17.316539 | 18.456359 | 0.001471 | 0.001680 | 0.001619 |
| qi_repo_seek.test | RUN | 1.637017 | 6.056170 | 6.233558 | 0.001830 | 0.001973 | 0.001996 |
| karma_repo_confix.test | RUN | 1.492391 | 5.959514 | 6.011872 | 0.001950 | 0.002016 | 0.002089 |
| karma_repo_subrule.test | RUN | 2.294283 | 9.082806 | 12.013694 | 0.001655 | 0.001523 | 0.001545 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.990×, 0.996× | 0.996× |
| clang | 0.998× | 0.989×, 1.008× | 0.983× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001524s | 0.001544s | 0.001514s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001536s | 0.001559s | 0.001554s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001501s | 0.001482s | 0.001494s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001693s | 0.001700s | 0.001689s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001500s | 0.001499s | 0.001453s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001701s | 0.001645s | 0.001654s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001478s | 0.001510s | 0.001480s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001593s | 0.001587s | 0.001588s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
