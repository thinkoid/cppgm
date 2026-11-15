# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.303460 | 3.695225 | 4.474883 | 0.001445 | 0.001434 | 0.001351 |
| qi_repo_confix.test | RUN | 1.362681 | 4.864719 | 4.779806 | 0.001296 | 0.001522 | 0.001536 |
| qi_repo_distinct.test | RUN | 0.973483 | 2.559835 | 3.045192 | 0.001535 | 0.001348 | 0.001469 |
| qi_repo_subrule.test | RUN | 3.268221 | 13.199411 | 12.476334 | 0.001511 | 0.001506 | 0.001008 |
| qi_repo_keywords.test | RUN | 2.988404 | 11.221051 | 12.452917 | 0.001196 | 0.001056 | 0.001038 |
| qi_repo_seek.test | RUN | 1.089177 | 4.015753 | 3.535281 | 0.001294 | 0.001671 | 0.001284 |
| karma_repo_confix.test | RUN | 0.988105 | 3.942192 | 3.537659 | 0.001520 | 0.001382 | 0.001462 |
| karma_repo_subrule.test | RUN | 1.840775 | 7.887238 | 7.583943 | 0.001021 | 0.001016 | 0.000987 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 0.991×, 1.017× | 1.008× |
| clang | 0.964× | 0.956×, 0.972× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000813s | 0.000818s | 0.000798s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000854s | 0.000863s | 0.000850s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000821s | 0.000841s | 0.000787s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000861s | 0.000848s | 0.000852s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000819s | 0.000820s | 0.000785s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000919s | 0.000908s | 0.000901s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000822s | 0.000795s | 0.000804s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000873s | 0.000848s | 0.000859s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
