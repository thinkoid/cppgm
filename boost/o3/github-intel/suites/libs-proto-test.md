# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.458097 | 1.172069 | 1.306813 | 0.002339 | 0.002270 | 0.001894 |
| constrained_ops.test | RUN | 0.525758 | 1.274162 | 1.448576 | 0.001980 | 0.002066 | 0.001965 |
| cpp-next_bug.test | RUN | 0.533553 | 1.375205 | 1.509161 | 0.001852 | 0.001960 | 0.001938 |
| deep_copy.test | RUN | 0.456926 | 1.199459 | 1.348127 | 0.002056 | 0.001959 | 0.001901 |
| display_expr.test | RUN | 0.566709 | 1.508599 | 1.602674 | 0.002317 | 0.001964 | 0.001982 |
| deduce_domain.test | RUN | 0.428924 | 1.067213 | 1.233559 | 0.002036 | 0.002234 | 0.002011 |
| env_var.test | RUN | 0.599290 | 2.624589 | 1.931133 | 0.002235 | 0.002364 | 0.002193 |
| examples.test | RUN | 0.560253 | 1.677944 | 1.802888 | 0.002072 | 0.001959 | 0.001915 |
| external_transforms.test | RUN | 0.556871 | 1.432810 | 1.639196 | 0.002497 | 0.002096 | 0.001807 |
| lambda.test | RUN | 0.542644 | 1.458785 | 1.626035 | 0.002268 | 0.002094 | 0.001782 |
| make_expr.test | RUN | 0.544362 | 2.435686 | 1.745619 | 0.002414 | 0.002592 | 0.002482 |
| matches.test | RUN | 0.479010 | 1.186988 | 1.418830 | 0.002184 | 0.002170 | 0.001913 |
| flatten.test | RUN | 0.936387 | 3.548345 | 3.513074 | 0.002218 | 0.002186 | 0.001844 |
| switch.test | RUN | 0.465407 | 1.213403 | 1.322323 | 0.002098 | 0.002175 | 0.001978 |
| toy_spirit.test | RUN | 0.535068 | 1.528839 | 1.727009 | 0.002158 | 0.002113 | 0.002007 |
| toy_spirit2.test | RUN | 0.584370 | 1.617572 | 1.824110 | 0.002100 | 0.002300 | 0.002028 |
| make.test | RUN | 0.444646 | 1.580798 | 1.329157 | 0.002497 | 0.002317 | 0.002344 |
| mem_ptr.test | RUN | 0.609221 | 2.527101 | 1.983264 | 0.002320 | 0.002467 | 0.002304 |
| mpl.test | RUN | 0.521302 | 1.272701 | 1.478112 | 0.002049 | 0.002328 | 0.002023 |
| noinvoke.test | RUN | 0.443301 | 1.051542 | 1.223166 | 0.002152 | 0.002155 | 0.002135 |
| pack_expansion.test | RUN | 0.548344 | 1.558840 | 1.623317 | 0.001568 | 0.002329 | 0.002127 |
| protect.test | RUN | 0.371434 | 0.996673 | 0.928583 | 0.001797 | 0.001517 | 0.001498 |
| bug2407.test | COMPILE | 0.370386 | 0.768312 | 0.883189 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.983×, 0.996× | 0.991× |
| clang | 0.973× | 0.978×, 0.968× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001295s | 0.001265s | 0.001243s | byte equality observed |
| constrained_ops.test | 10 | 0.001272s | 0.001260s | 0.001249s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001267s | 0.001248s | 0.001214s | byte equality observed |
| deduce_domain.test | 10 | 0.001233s | 0.001261s | 0.001198s | byte equality observed |
| deep_copy.test | 10 | 0.001276s | 0.001237s | 0.001224s | byte equality observed |
| display_expr.test | 10 | 0.001266s | 0.001254s | 0.001227s | byte equality observed |
| env_var.test | 10 | 0.001380s | 0.001364s | 0.001314s | byte equality observed |
| examples.test | 10 | 0.001291s | 0.001245s | 0.001224s | byte equality observed |
| external_transforms.test | 10 | 0.001249s | 0.001268s | 0.001237s | byte equality observed |
| flatten.test | 10 | 0.001291s | 0.001271s | 0.001283s | byte equality observed |
| lambda.test | 10 | 0.001248s | 0.001232s | 0.001255s | byte equality observed |
| make.test | 10 | 0.001307s | 0.001331s | 0.001274s | byte equality observed |
| make_expr.test | 10 | 0.001385s | 0.001388s | 0.001368s | byte equality observed |
| matches.test | 10 | 0.001274s | 0.001290s | 0.001246s | byte equality observed |
| mem_ptr.test | 10 | 0.001372s | 0.001329s | 0.001332s | byte equality observed |
| mpl.test | 10 | 0.001276s | 0.001281s | 0.001198s | byte equality observed |
| noinvoke.test | 10 | 0.001251s | 0.001235s | 0.001206s | byte equality observed |
| pack_expansion.test | 10 | 0.001276s | 0.001271s | 0.001239s | byte equality observed |
| protect.test | 10 | 0.001267s | 0.001280s | 0.001231s | byte equality observed |
| switch.test | 10 | 0.001245s | 0.001257s | 0.001210s | byte equality observed |
| toy_spirit.test | 10 | 0.001262s | 0.001226s | 0.001231s | byte equality observed |
| toy_spirit2.test | 10 | 0.001257s | 0.001228s | 0.001249s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
