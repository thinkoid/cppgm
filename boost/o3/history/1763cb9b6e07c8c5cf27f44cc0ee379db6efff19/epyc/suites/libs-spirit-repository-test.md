# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.881268 | 5.192527 | 6.661234 | 0.002062 | 0.002136 | 0.002202 |
| qi_repo_confix.test | RUN | 1.925370 | 6.694761 | 7.264111 | 0.002105 | 0.002416 | 0.002298 |
| qi_repo_distinct.test | RUN | 1.414729 | 3.636543 | 4.580001 | 0.002295 | 0.002151 | 0.002257 |
| qi_repo_subrule.test | RUN | 4.463184 | 15.954412 | 20.168303 | 0.002343 | 0.001812 | 0.002392 |
| qi_repo_keywords.test | RUN | 4.142737 | 16.254731 | 18.950374 | 0.001852 | 0.001825 | 0.001650 |
| qi_repo_seek.test | RUN | 1.602329 | 5.651347 | 5.504763 | 0.002038 | 0.002244 | 0.001938 |
| karma_repo_confix.test | RUN | 1.459838 | 5.500797 | 5.437732 | 0.002426 | 0.002184 | 0.001994 |
| karma_repo_subrule.test | RUN | 2.431927 | 10.142773 | 9.502242 | 0.001696 | 0.001650 | 0.001634 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.006×, 0.994× | 1.005× |
| clang | 0.998× | 1.008×, 0.989× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001531s | 0.001581s | 0.001592s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001579s | 0.001574s | 0.001581s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001526s | 0.001519s | 0.001484s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001753s | 0.001737s | 0.001722s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001526s | 0.001508s | 0.001541s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001709s | 0.001684s | 0.001724s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001521s | 0.001537s | 0.001514s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001604s | 0.001554s | 0.001592s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
