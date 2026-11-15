# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.239870 | 3.527992 | 4.152467 | 0.001236 | 0.001218 | 0.001093 |
| qi_repo_confix.test | RUN | 1.268089 | 4.765764 | 4.603861 | 0.001262 | 0.001412 | 0.001140 |
| qi_repo_distinct.test | RUN | 0.922347 | 2.487913 | 2.826705 | 0.001321 | 0.001370 | 0.001205 |
| qi_repo_subrule.test | RUN | 3.019033 | 12.541376 | 13.195808 | 0.001374 | 0.001423 | 0.001211 |
| qi_repo_keywords.test | RUN | 2.931858 | 11.761610 | 10.565678 | 0.001010 | 0.000948 | 0.000932 |
| qi_repo_seek.test | RUN | 1.016636 | 3.962535 | 3.356191 | 0.001270 | 0.001334 | 0.001145 |
| karma_repo_confix.test | RUN | 0.929849 | 3.867907 | 3.409862 | 0.001227 | 0.001305 | 0.001172 |
| karma_repo_subrule.test | RUN | 1.508084 | 6.132056 | 7.739303 | 0.000884 | 0.000974 | 0.000861 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.990×, 0.993× | 1.015× |
| clang | 0.994× | 0.996×, 0.992× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000834s | 0.000838s | 0.000833s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000853s | 0.000876s | 0.000888s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000812s | 0.000847s | 0.000801s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000864s | 0.000862s | 0.000842s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000810s | 0.000788s | 0.000804s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000943s | 0.000892s | 0.000924s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000836s | 0.000820s | 0.000821s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000885s | 0.000887s | 0.000872s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
