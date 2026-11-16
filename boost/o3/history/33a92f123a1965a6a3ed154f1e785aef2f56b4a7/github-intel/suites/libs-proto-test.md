# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.441376 | 1.166772 | 1.301819 | 0.002189 | 0.002246 | 0.002013 |
| constrained_ops.test | RUN | 0.502662 | 1.255790 | 1.554076 | 0.001923 | 0.002138 | 0.002001 |
| cpp-next_bug.test | RUN | 0.512454 | 1.348597 | 1.540013 | 0.001663 | 0.001965 | 0.001988 |
| deep_copy.test | RUN | 0.431412 | 1.201565 | 1.282308 | 0.001938 | 0.002198 | 0.002253 |
| display_expr.test | RUN | 0.527210 | 1.479469 | 1.615725 | 0.002146 | 0.002091 | 0.001917 |
| deduce_domain.test | RUN | 0.413669 | 1.042667 | 1.217793 | 0.002131 | 0.002059 | 0.001964 |
| env_var.test | RUN | 0.566819 | 2.612543 | 1.951888 | 0.002112 | 0.002384 | 0.002455 |
| examples.test | RUN | 0.542634 | 1.649957 | 1.816275 | 0.001896 | 0.002231 | 0.001997 |
| external_transforms.test | RUN | 0.531164 | 1.427524 | 1.608545 | 0.002124 | 0.002060 | 0.001970 |
| lambda.test | RUN | 0.517345 | 1.467670 | 1.637848 | 0.002009 | 0.002017 | 0.002135 |
| make_expr.test | RUN | 0.523806 | 2.423783 | 1.762350 | 0.002287 | 0.002401 | 0.002466 |
| matches.test | RUN | 0.466362 | 1.186586 | 1.421792 | 0.001978 | 0.002100 | 0.002109 |
| flatten.test | RUN | 0.880957 | 3.500280 | 3.523356 | 0.001974 | 0.002122 | 0.002063 |
| switch.test | RUN | 0.453640 | 1.183555 | 1.344589 | 0.002024 | 0.002185 | 0.002067 |
| toy_spirit.test | RUN | 0.518376 | 1.502041 | 1.723942 | 0.001850 | 0.002158 | 0.002112 |
| toy_spirit2.test | RUN | 0.562037 | 1.601801 | 1.838659 | 0.002046 | 0.002161 | 0.002164 |
| make.test | RUN | 0.434310 | 1.519236 | 1.348254 | 0.002377 | 0.002448 | 0.002413 |
| mem_ptr.test | RUN | 0.587509 | 2.534700 | 1.980328 | 0.002196 | 0.002469 | 0.002337 |
| mpl.test | RUN | 0.506495 | 1.229787 | 1.449082 | 0.001827 | 0.002180 | 0.002010 |
| noinvoke.test | RUN | 0.430110 | 1.050989 | 1.211017 | 0.001949 | 0.002022 | 0.001996 |
| pack_expansion.test | RUN | 0.521200 | 1.526408 | 1.606026 | 0.001550 | 0.001610 | 0.002152 |
| protect.test | RUN | 0.411342 | 1.061835 | 0.991440 | 0.001517 | 0.001540 | 0.001463 |
| bug2407.test | COMPILE | 0.319020 | 0.732142 | 0.732433 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.991×, 0.991× | 1.004× |
| clang | 0.974× | 0.974×, 0.973× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001267s | 0.001244s | 0.001219s | byte equality observed |
| constrained_ops.test | 10 | 0.001230s | 0.001238s | 0.001215s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001226s | 0.001234s | 0.001206s | byte equality observed |
| deduce_domain.test | 10 | 0.001227s | 0.001218s | 0.001193s | byte equality observed |
| deep_copy.test | 10 | 0.001221s | 0.001199s | 0.001195s | byte equality observed |
| display_expr.test | 10 | 0.001233s | 0.001219s | 0.001186s | byte equality observed |
| env_var.test | 10 | 0.001338s | 0.001339s | 0.001302s | byte equality observed |
| examples.test | 10 | 0.001259s | 0.001269s | 0.001241s | byte equality observed |
| external_transforms.test | 10 | 0.001246s | 0.001220s | 0.001215s | byte equality observed |
| flatten.test | 10 | 0.001255s | 0.001252s | 0.001245s | byte equality observed |
| lambda.test | 10 | 0.001234s | 0.001242s | 0.001176s | byte equality observed |
| make.test | 10 | 0.001301s | 0.001281s | 0.001240s | byte equality observed |
| make_expr.test | 10 | 0.001378s | 0.001366s | 0.001328s | byte equality observed |
| matches.test | 10 | 0.001279s | 0.001237s | 0.001208s | byte equality observed |
| mem_ptr.test | 10 | 0.001324s | 0.001311s | 0.001281s | byte equality observed |
| mpl.test | 10 | 0.001243s | 0.001220s | 0.001202s | byte equality observed |
| noinvoke.test | 10 | 0.001212s | 0.001187s | 0.001205s | byte equality observed |
| pack_expansion.test | 10 | 0.001243s | 0.001236s | 0.001198s | byte equality observed |
| protect.test | 10 | 0.001248s | 0.001238s | 0.001222s | byte equality observed |
| switch.test | 10 | 0.001231s | 0.001240s | 0.001204s | byte equality observed |
| toy_spirit.test | 10 | 0.001226s | 0.001244s | 0.001218s | byte equality observed |
| toy_spirit2.test | 10 | 0.001223s | 0.001231s | 0.001223s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
