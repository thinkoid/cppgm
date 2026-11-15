# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.558181 | 4.637637 | 5.528681 | 0.001591 | 0.001423 | 0.001485 |
| qi_repo_confix.test | RUN | 1.605191 | 6.169274 | 5.972614 | 0.001531 | 0.001720 | 0.001564 |
| qi_repo_distinct.test | RUN | 1.167329 | 3.265625 | 3.756609 | 0.001392 | 0.001492 | 0.001510 |
| qi_repo_subrule.test | RUN | 3.776026 | 14.501768 | 17.104150 | 0.001202 | 0.001175 | 0.001520 |
| qi_repo_keywords.test | RUN | 3.433716 | 14.612674 | 13.400665 | 0.001240 | 0.001228 | 0.001150 |
| qi_repo_seek.test | RUN | 1.292844 | 5.085337 | 4.411932 | 0.001446 | 0.001570 | 0.001420 |
| karma_repo_confix.test | RUN | 1.204632 | 5.056872 | 4.403734 | 0.001532 | 0.001681 | 0.001429 |
| karma_repo_subrule.test | RUN | 1.912110 | 8.784659 | 9.929430 | 0.001100 | 0.001183 | 0.000970 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.984×, 1.002× | 0.993× |
| clang | 0.993× | 0.996×, 0.991× | 0.975× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001013s | 0.001002s | 0.001024s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001040s | 0.001047s | 0.001025s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001001s | 0.001007s | 0.000995s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001085s | 0.001073s | 0.001058s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000983s | 0.000969s | 0.000950s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001142s | 0.001133s | 0.001104s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000989s | 0.000993s | 0.000981s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001066s | 0.001051s | 0.001092s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
