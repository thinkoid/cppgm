# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.954913 | 5.516071 | 7.734197 | 0.002019 | 0.002178 | 0.002031 |
| qi_repo_confix.test | RUN | 2.020342 | 7.258852 | 8.131299 | 0.002130 | 0.002358 | 0.002182 |
| qi_repo_distinct.test | RUN | 1.478098 | 3.892149 | 5.367308 | 0.002006 | 0.002174 | 0.002038 |
| qi_repo_subrule.test | RUN | 4.583775 | 18.245036 | 22.896857 | 0.002198 | 0.002141 | 0.001720 |
| qi_repo_keywords.test | RUN | 4.122856 | 17.055840 | 18.579180 | 0.001673 | 0.001619 | 0.001674 |
| qi_repo_seek.test | RUN | 1.692862 | 6.037446 | 6.243813 | 0.001886 | 0.002074 | 0.001828 |
| karma_repo_confix.test | RUN | 1.566568 | 6.077848 | 6.139982 | 0.002136 | 0.002178 | 0.001874 |
| karma_repo_subrule.test | RUN | 2.375680 | 9.426670 | 12.397075 | 0.001696 | 0.001438 | 0.001536 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.018×, 0.980× | 0.993× |
| clang | 0.990× | 0.997×, 0.983× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001540s | 0.001589s | 0.001538s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001574s | 0.001583s | 0.001563s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001494s | 0.001526s | 0.001486s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001730s | 0.001725s | 0.001741s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001519s | 0.001531s | 0.001517s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001767s | 0.001682s | 0.001664s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001501s | 0.001534s | 0.001486s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001616s | 0.001571s | 0.001591s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
