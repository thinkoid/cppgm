# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.448422 | 1.187237 | 1.297620 | 0.002397 | 0.002236 | 0.001956 |
| constrained_ops.test | RUN | 0.514075 | 1.273555 | 1.468487 | 0.002110 | 0.002220 | 0.001914 |
| cpp-next_bug.test | RUN | 0.525229 | 1.375242 | 1.503678 | 0.001876 | 0.001887 | 0.001799 |
| deep_copy.test | RUN | 0.444320 | 1.232381 | 1.331686 | 0.001787 | 0.002217 | 0.002044 |
| display_expr.test | RUN | 0.528023 | 1.494094 | 1.612700 | 0.002151 | 0.002154 | 0.002149 |
| deduce_domain.test | RUN | 0.422437 | 1.063805 | 1.190872 | 0.002000 | 0.001720 | 0.001611 |
| env_var.test | RUN | 0.574493 | 2.676512 | 1.934001 | 0.002261 | 0.002546 | 0.002214 |
| examples.test | RUN | 0.566236 | 1.684353 | 1.763662 | 0.002095 | 0.002177 | 0.001931 |
| external_transforms.test | RUN | 0.546030 | 1.426336 | 1.604591 | 0.002196 | 0.002000 | 0.001909 |
| lambda.test | RUN | 0.525740 | 1.487893 | 1.631084 | 0.001529 | 0.002416 | 0.001820 |
| make_expr.test | RUN | 0.530668 | 2.475819 | 1.746171 | 0.002262 | 0.002679 | 0.002311 |
| matches.test | RUN | 0.477792 | 1.227434 | 1.387955 | 0.002017 | 0.002177 | 0.001968 |
| flatten.test | RUN | 0.908594 | 3.634104 | 3.420031 | 0.002324 | 0.002462 | 0.001884 |
| switch.test | RUN | 0.452415 | 1.200832 | 1.327247 | 0.001871 | 0.002520 | 0.001990 |
| toy_spirit.test | RUN | 0.530059 | 1.548037 | 1.722714 | 0.002075 | 0.002730 | 0.001885 |
| toy_spirit2.test | RUN | 0.568069 | 1.647600 | 1.831333 | 0.002088 | 0.002159 | 0.001959 |
| make.test | RUN | 0.473157 | 1.564792 | 1.327170 | 0.002301 | 0.002496 | 0.002076 |
| mem_ptr.test | RUN | 0.578686 | 2.599781 | 1.931967 | 0.002342 | 0.002465 | 0.002050 |
| mpl.test | RUN | 0.509171 | 1.271352 | 1.457798 | 0.001970 | 0.001716 | 0.001816 |
| noinvoke.test | RUN | 0.429258 | 1.095567 | 1.160487 | 0.002284 | 0.002325 | 0.001745 |
| pack_expansion.test | RUN | 0.484291 | 1.553254 | 1.579704 | 0.001626 | 0.001623 | 0.001924 |
| protect.test | RUN | 0.423735 | 1.027510 | 0.794944 | 0.001645 | 0.001647 | 0.001395 |
| bug2407.test | COMPILE | 0.403461 | 0.731090 | 0.849318 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.986×, 0.993× | 0.990× |
| clang | 0.974× | 0.974×, 0.973× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001268s | 0.001249s | 0.001240s | byte equality observed |
| constrained_ops.test | 10 | 0.001277s | 0.001245s | 0.001229s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001251s | 0.001221s | 0.001237s | byte equality observed |
| deduce_domain.test | 10 | 0.001225s | 0.001230s | 0.001236s | byte equality observed |
| deep_copy.test | 10 | 0.001252s | 0.001234s | 0.001226s | byte equality observed |
| display_expr.test | 10 | 0.001254s | 0.001205s | 0.001230s | byte equality observed |
| env_var.test | 10 | 0.001355s | 0.001364s | 0.001310s | byte equality observed |
| examples.test | 10 | 0.001275s | 0.001262s | 0.001209s | byte equality observed |
| external_transforms.test | 10 | 0.001257s | 0.001249s | 0.001240s | byte equality observed |
| flatten.test | 10 | 0.001282s | 0.001268s | 0.001218s | byte equality observed |
| lambda.test | 10 | 0.001234s | 0.001220s | 0.001215s | byte equality observed |
| make.test | 10 | 0.001306s | 0.001306s | 0.001283s | byte equality observed |
| make_expr.test | 10 | 0.001385s | 0.001388s | 0.001349s | byte equality observed |
| matches.test | 10 | 0.001257s | 0.001245s | 0.001218s | byte equality observed |
| mem_ptr.test | 10 | 0.001351s | 0.001332s | 0.001298s | byte equality observed |
| mpl.test | 10 | 0.001265s | 0.001243s | 0.001184s | byte equality observed |
| noinvoke.test | 10 | 0.001221s | 0.001246s | 0.001249s | byte equality observed |
| pack_expansion.test | 10 | 0.001277s | 0.001241s | 0.001246s | byte equality observed |
| protect.test | 10 | 0.001237s | 0.001259s | 0.001256s | byte equality observed |
| switch.test | 10 | 0.001243s | 0.001205s | 0.001243s | byte equality observed |
| toy_spirit.test | 10 | 0.001217s | 0.001238s | 0.001205s | byte equality observed |
| toy_spirit2.test | 10 | 0.001247s | 0.001204s | 0.001175s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
