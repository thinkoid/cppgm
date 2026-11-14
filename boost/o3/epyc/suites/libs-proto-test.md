# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.584584 | 1.420552 | 1.720401 | 0.002998 | 0.003108 | 0.003108 |
| constrained_ops.test | RUN | 0.648285 | 1.423127 | 1.907702 | 0.002818 | 0.003276 | 0.003257 |
| cpp-next_bug.test | RUN | 0.644220 | 1.588630 | 1.995266 | 0.002669 | 0.003148 | 0.002985 |
| deep_copy.test | RUN | 0.557405 | 1.410119 | 1.667552 | 0.003159 | 0.003056 | 0.003000 |
| display_expr.test | RUN | 0.660314 | 1.738477 | 2.027737 | 0.002847 | 0.002963 | 0.003101 |
| deduce_domain.test | RUN | 0.525894 | 1.234772 | 1.486095 | 0.002634 | 0.002999 | 0.002756 |
| env_var.test | RUN | 0.695738 | 2.938611 | 2.396268 | 0.003374 | 0.003453 | 0.003808 |
| examples.test | RUN | 0.681540 | 1.963552 | 2.303837 | 0.003044 | 0.002831 | 0.002883 |
| external_transforms.test | RUN | 0.671239 | 1.727488 | 2.108047 | 0.003109 | 0.002600 | 0.003042 |
| lambda.test | RUN | 0.675405 | 1.720784 | 2.097006 | 0.002858 | 0.002871 | 0.003075 |
| make_expr.test | RUN | 0.659084 | 2.707748 | 2.252213 | 0.003658 | 0.004003 | 0.004034 |
| matches.test | RUN | 0.615188 | 1.396062 | 1.806800 | 0.003314 | 0.003137 | 0.003061 |
| flatten.test | RUN | 1.163398 | 4.094053 | 4.433578 | 0.003231 | 0.003177 | 0.002699 |
| switch.test | RUN | 0.586543 | 1.382692 | 1.744699 | 0.003083 | 0.003036 | 0.003086 |
| toy_spirit.test | RUN | 0.659136 | 1.824863 | 2.159845 | 0.003204 | 0.004066 | 0.003208 |
| toy_spirit2.test | RUN | 0.726432 | 1.902456 | 2.326314 | 0.003102 | 0.003095 | 0.003162 |
| make.test | RUN | 0.559596 | 1.819914 | 1.718251 | 0.003622 | 0.003506 | 0.003604 |
| mem_ptr.test | RUN | 0.735752 | 2.871349 | 2.459610 | 0.003696 | 0.003991 | 0.003967 |
| mpl.test | RUN | 0.653769 | 1.509287 | 1.855426 | 0.002860 | 0.003183 | 0.002855 |
| noinvoke.test | RUN | 0.561154 | 1.211816 | 1.552375 | 0.003723 | 0.003158 | 0.003346 |
| pack_expansion.test | RUN | 0.696870 | 1.737948 | 2.030388 | 0.002546 | 0.002581 | 0.003293 |
| protect.test | RUN | 0.442971 | 1.337942 | 1.203988 | 0.002518 | 0.002468 | 0.002358 |
| bug2407.test | COMPILE | 0.502619 | 0.934738 | 0.934054 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.984×† | 1.018×, 0.951× | 1.016× |
| clang | 1.014×† | 1.065×, 0.962× | 1.065× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001993s | 0.001998s | 0.001936s | byte equality observed |
| constrained_ops.test | 10 | 0.001970s | 0.001972s | 0.001942s | byte equality observed |
| cpp-next_bug.test | 8 | 0.001927s | 0.001990s | 0.001979s | byte equality observed |
| deduce_domain.test | 10 | 0.001968s | 0.001957s | 0.001970s | byte equality observed |
| deep_copy.test | 10 | 0.001903s | 0.001980s | 0.001830s | byte equality observed |
| display_expr.test | 10 | 0.001912s | 0.001951s | 0.001890s | byte equality observed |
| env_var.test | 9 | 0.002296s | 0.002289s | 0.002207s | byte equality observed |
| examples.test | 10 | 0.001967s | 0.001960s | 0.001918s | byte equality observed |
| external_transforms.test | 10 | 0.002017s | 0.002066s | 0.001966s | byte equality observed |
| flatten.test | 9 | 0.002010s | 0.002067s | 0.002049s | byte equality observed |
| lambda.test | 10 | 0.001961s | 0.002001s | 0.001907s | byte equality observed |
| make.test | 10 | 0.002090s | 0.002170s | 0.002143s | byte equality observed |
| make_expr.test | 9 | 0.002427s | 0.002402s | 0.002376s | byte equality observed |
| matches.test | 10 | 0.001970s | 0.001978s | 0.001942s | byte equality observed |
| mem_ptr.test | 9 | 0.002322s | 0.002286s | 0.002238s | byte equality observed |
| mpl.test | 10 | 0.001975s | 0.001976s | 0.001985s | byte equality observed |
| noinvoke.test | 10 | 0.001995s | 0.001949s | 0.001955s | byte equality observed |
| pack_expansion.test | 10 | 0.002026s | 0.002031s | 0.001808s | byte equality observed |
| protect.test | 9 | 0.002034s | 0.002034s | 0.001963s | byte equality observed |
| switch.test | 9 | 0.001863s | 0.001944s | 0.001925s | byte equality observed |
| toy_spirit.test | 10 | 0.001942s | 0.002020s | 0.001911s | byte equality observed |
| toy_spirit2.test | 10 | 0.001972s | 0.001928s | 0.001950s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
