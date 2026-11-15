# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.433555 | 1.160818 | 1.287722 | 0.001869 | 0.001930 | 0.001662 |
| constrained_ops.test | RUN | 0.494479 | 1.249922 | 1.459228 | 0.001675 | 0.001924 | 0.001763 |
| cpp-next_bug.test | RUN | 0.506403 | 1.332734 | 1.506885 | 0.001788 | 0.001987 | 0.001721 |
| deep_copy.test | RUN | 0.427443 | 1.184515 | 1.303327 | 0.001946 | 0.001918 | 0.001758 |
| display_expr.test | RUN | 0.519424 | 1.488483 | 1.590584 | 0.001828 | 0.001962 | 0.001736 |
| deduce_domain.test | RUN | 0.403003 | 1.014139 | 1.172460 | 0.002113 | 0.001965 | 0.001639 |
| env_var.test | RUN | 0.565547 | 2.567079 | 1.914589 | 0.002030 | 0.002265 | 0.001993 |
| examples.test | RUN | 0.532838 | 1.641808 | 1.780625 | 0.001906 | 0.001718 | 0.001778 |
| external_transforms.test | RUN | 0.530237 | 1.383067 | 1.575227 | 0.001987 | 0.001751 | 0.001764 |
| lambda.test | RUN | 0.504908 | 1.419457 | 1.563639 | 0.001949 | 0.001872 | 0.001818 |
| make_expr.test | RUN | 0.513029 | 2.374247 | 1.712437 | 0.002165 | 0.002470 | 0.002114 |
| matches.test | RUN | 0.453232 | 1.171253 | 1.363741 | 0.001964 | 0.001985 | 0.001895 |
| flatten.test | RUN | 0.877448 | 3.432650 | 3.402625 | 0.001866 | 0.002162 | 0.001768 |
| switch.test | RUN | 0.447335 | 1.166169 | 1.288169 | 0.001983 | 0.002051 | 0.001751 |
| toy_spirit.test | RUN | 0.499389 | 1.476895 | 1.688633 | 0.001748 | 0.001998 | 0.001867 |
| toy_spirit2.test | RUN | 0.542904 | 1.575316 | 1.748971 | 0.001829 | 0.001956 | 0.001774 |
| make.test | RUN | 0.422887 | 1.496465 | 1.266781 | 0.002092 | 0.002269 | 0.001720 |
| mem_ptr.test | RUN | 0.564067 | 2.479475 | 1.960468 | 0.002116 | 0.002291 | 0.001918 |
| mpl.test | RUN | 0.493497 | 1.225542 | 1.407258 | 0.001752 | 0.002004 | 0.001883 |
| noinvoke.test | RUN | 0.417402 | 1.059324 | 1.171497 | 0.001827 | 0.002096 | 0.001744 |
| pack_expansion.test | RUN | 0.458430 | 1.497107 | 1.583834 | 0.001450 | 0.001403 | 0.001924 |
| protect.test | RUN | 0.393101 | 1.007132 | 0.967720 | 0.001391 | 0.001421 | 0.001272 |
| bug2407.test | COMPILE | 0.350074 | 0.707823 | 0.709181 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.984× | 0.980×, 0.988× | 1.002× |
| clang | 0.974× | 0.977×, 0.972× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001268s | 0.001236s | 0.001206s | byte equality observed |
| constrained_ops.test | 10 | 0.001248s | 0.001258s | 0.001227s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001237s | 0.001231s | 0.001210s | byte equality observed |
| deduce_domain.test | 10 | 0.001248s | 0.001254s | 0.001204s | byte equality observed |
| deep_copy.test | 10 | 0.001224s | 0.001229s | 0.001198s | byte equality observed |
| display_expr.test | 10 | 0.001253s | 0.001216s | 0.001224s | byte equality observed |
| env_var.test | 10 | 0.001360s | 0.001364s | 0.001314s | byte equality observed |
| examples.test | 10 | 0.001268s | 0.001265s | 0.001272s | byte equality observed |
| external_transforms.test | 10 | 0.001246s | 0.001249s | 0.001205s | byte equality observed |
| flatten.test | 10 | 0.001290s | 0.001247s | 0.001227s | byte equality observed |
| lambda.test | 10 | 0.001228s | 0.001234s | 0.001223s | byte equality observed |
| make.test | 10 | 0.001300s | 0.001296s | 0.001276s | byte equality observed |
| make_expr.test | 10 | 0.001377s | 0.001362s | 0.001336s | byte equality observed |
| matches.test | 10 | 0.001260s | 0.001252s | 0.001215s | byte equality observed |
| mem_ptr.test | 10 | 0.001339s | 0.001347s | 0.001292s | byte equality observed |
| mpl.test | 10 | 0.001260s | 0.001230s | 0.001251s | byte equality observed |
| noinvoke.test | 10 | 0.001216s | 0.001209s | 0.001171s | byte equality observed |
| pack_expansion.test | 10 | 0.001265s | 0.001260s | 0.001218s | byte equality observed |
| protect.test | 10 | 0.001256s | 0.001265s | 0.001224s | byte equality observed |
| switch.test | 10 | 0.001271s | 0.001215s | 0.001201s | byte equality observed |
| toy_spirit.test | 10 | 0.001249s | 0.001241s | 0.001209s | byte equality observed |
| toy_spirit2.test | 10 | 0.001263s | 0.001221s | 0.001221s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
