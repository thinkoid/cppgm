# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.456947 | 1.195777 | 1.301259 | 0.002384 | 0.002028 | 0.001964 |
| constrained_ops.test | RUN | 0.509849 | 1.271000 | 1.540408 | 0.001788 | 0.002264 | 0.001821 |
| cpp-next_bug.test | RUN | 0.525492 | 1.369285 | 1.504116 | 0.001963 | 0.002117 | 0.001733 |
| deep_copy.test | RUN | 0.435870 | 1.204612 | 1.272595 | 0.002006 | 0.002016 | 0.001888 |
| display_expr.test | RUN | 0.533258 | 1.505000 | 1.607075 | 0.002117 | 0.002170 | 0.001846 |
| deduce_domain.test | RUN | 0.413121 | 1.056464 | 1.185250 | 0.002376 | 0.002081 | 0.001882 |
| env_var.test | RUN | 0.573668 | 2.639798 | 1.955055 | 0.002342 | 0.002406 | 0.002119 |
| examples.test | RUN | 0.549293 | 1.693510 | 1.772430 | 0.002155 | 0.002036 | 0.001733 |
| external_transforms.test | RUN | 0.538153 | 1.453518 | 1.604582 | 0.002185 | 0.002151 | 0.002182 |
| lambda.test | RUN | 0.521651 | 1.461648 | 1.642980 | 0.002111 | 0.002031 | 0.002058 |
| make_expr.test | RUN | 0.531027 | 2.453867 | 1.749470 | 0.002405 | 0.002723 | 0.002230 |
| matches.test | RUN | 0.463752 | 1.198530 | 1.413632 | 0.002202 | 0.001904 | 0.001845 |
| flatten.test | RUN | 0.901307 | 3.630131 | 3.444446 | 0.002270 | 0.002220 | 0.001970 |
| switch.test | RUN | 0.453102 | 1.201642 | 1.318888 | 0.002208 | 0.002250 | 0.001931 |
| toy_spirit.test | RUN | 0.509397 | 1.533797 | 1.715542 | 0.002491 | 0.002338 | 0.002020 |
| toy_spirit2.test | RUN | 0.550707 | 1.665032 | 1.834218 | 0.002235 | 0.002111 | 0.001950 |
| make.test | RUN | 0.441884 | 1.542427 | 1.328260 | 0.002420 | 0.002359 | 0.002166 |
| mem_ptr.test | RUN | 0.581531 | 2.599881 | 1.990586 | 0.002402 | 0.002635 | 0.002133 |
| mpl.test | RUN | 0.513065 | 1.284806 | 1.459174 | 0.002166 | 0.002252 | 0.001698 |
| noinvoke.test | RUN | 0.429290 | 1.052412 | 1.227323 | 0.002247 | 0.002142 | 0.001865 |
| pack_expansion.test | RUN | 0.530044 | 1.582344 | 1.586790 | 0.001589 | 0.002513 | 0.002080 |
| protect.test | RUN | 0.371849 | 0.975467 | 0.961352 | 0.001580 | 0.001540 | 0.001426 |
| bug2407.test | COMPILE | 0.340543 | 0.754044 | 0.774533 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.984× | 0.988×, 0.981× | 0.993× |
| clang | 0.974× | 0.965×, 0.982× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001303s | 0.001257s | 0.001212s | byte equality observed |
| constrained_ops.test | 10 | 0.001259s | 0.001235s | 0.001217s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001246s | 0.001224s | 0.001230s | byte equality observed |
| deduce_domain.test | 10 | 0.001268s | 0.001228s | 0.001221s | byte equality observed |
| deep_copy.test | 10 | 0.001262s | 0.001214s | 0.001214s | byte equality observed |
| display_expr.test | 10 | 0.001264s | 0.001254s | 0.001219s | byte equality observed |
| env_var.test | 10 | 0.001349s | 0.001327s | 0.001298s | byte equality observed |
| examples.test | 10 | 0.001275s | 0.001255s | 0.001273s | byte equality observed |
| external_transforms.test | 10 | 0.001254s | 0.001239s | 0.001235s | byte equality observed |
| flatten.test | 10 | 0.001299s | 0.001274s | 0.001240s | byte equality observed |
| lambda.test | 10 | 0.001269s | 0.001230s | 0.001183s | byte equality observed |
| make.test | 10 | 0.001290s | 0.001289s | 0.001251s | byte equality observed |
| make_expr.test | 10 | 0.001383s | 0.001407s | 0.001345s | byte equality observed |
| matches.test | 10 | 0.001266s | 0.001250s | 0.001244s | byte equality observed |
| mem_ptr.test | 10 | 0.001351s | 0.001324s | 0.001323s | byte equality observed |
| mpl.test | 10 | 0.001270s | 0.001293s | 0.001226s | byte equality observed |
| noinvoke.test | 10 | 0.001241s | 0.001229s | 0.001218s | byte equality observed |
| pack_expansion.test | 10 | 0.001249s | 0.001270s | 0.001241s | byte equality observed |
| protect.test | 10 | 0.001271s | 0.001245s | 0.001233s | byte equality observed |
| switch.test | 10 | 0.001260s | 0.001207s | 0.001227s | byte equality observed |
| toy_spirit.test | 10 | 0.001245s | 0.001224s | 0.001215s | byte equality observed |
| toy_spirit2.test | 10 | 0.001261s | 0.001226s | 0.001207s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
