# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 2.021355 | 5.622916 | 7.863512 | 0.002098 | 0.002070 | 0.002142 |
| qi_repo_confix.test | RUN | 2.080506 | 7.338024 | 8.369398 | 0.002296 | 0.002424 | 0.002298 |
| qi_repo_distinct.test | RUN | 1.491393 | 3.968280 | 5.458922 | 0.002221 | 0.002132 | 0.002133 |
| qi_repo_subrule.test | RUN | 4.763651 | 18.712790 | 20.282574 | 0.002230 | 0.002235 | 0.001601 |
| qi_repo_keywords.test | RUN | 4.359365 | 16.564213 | 20.377484 | 0.001804 | 0.001724 | 0.001635 |
| qi_repo_seek.test | RUN | 1.734047 | 6.267811 | 6.440962 | 0.001939 | 0.002208 | 0.002076 |
| karma_repo_confix.test | RUN | 1.599974 | 6.209801 | 6.234456 | 0.002254 | 0.002175 | 0.002101 |
| karma_repo_subrule.test | RUN | 2.523679 | 10.870676 | 12.241141 | 0.001590 | 0.001640 | 0.001625 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.999×, 0.983× | 0.995× |
| clang | 0.991× | 0.989×, 0.994× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001499s | 0.001562s | 0.001491s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001589s | 0.001559s | 0.001498s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001493s | 0.001532s | 0.001513s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001749s | 0.001736s | 0.001689s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001485s | 0.001509s | 0.001481s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001718s | 0.001666s | 0.001598s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001516s | 0.001500s | 0.001494s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001579s | 0.001610s | 0.001568s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
