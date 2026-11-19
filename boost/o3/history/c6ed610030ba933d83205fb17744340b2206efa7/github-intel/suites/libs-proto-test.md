# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.433470 | 1.204903 | 1.317488 | 0.002290 | 0.002241 | 0.001825 |
| constrained_ops.test | RUN | 0.488907 | 1.287489 | 1.463817 | 0.001934 | 0.002200 | 0.002146 |
| cpp-next_bug.test | RUN | 0.500272 | 1.385791 | 1.536990 | 0.001771 | 0.002030 | 0.001838 |
| deep_copy.test | RUN | 0.429807 | 1.229163 | 1.363998 | 0.001942 | 0.002452 | 0.001783 |
| display_expr.test | RUN | 0.517392 | 1.545620 | 1.607758 | 0.002184 | 0.002232 | 0.001872 |
| deduce_domain.test | RUN | 0.402615 | 1.056731 | 1.223298 | 0.001811 | 0.002189 | 0.001974 |
| env_var.test | RUN | 0.559461 | 2.684202 | 1.917986 | 0.002153 | 0.002719 | 0.002210 |
| examples.test | RUN | 0.529263 | 1.714255 | 1.807715 | 0.002033 | 0.002496 | 0.001795 |
| external_transforms.test | RUN | 0.522862 | 1.429776 | 1.619925 | 0.001990 | 0.002158 | 0.002196 |
| lambda.test | RUN | 0.501763 | 1.509026 | 1.639544 | 0.001956 | 0.002286 | 0.001824 |
| make_expr.test | RUN | 0.506940 | 2.479280 | 1.735952 | 0.002214 | 0.002695 | 0.002290 |
| matches.test | RUN | 0.451365 | 1.208074 | 1.444102 | 0.001772 | 0.002303 | 0.001960 |
| flatten.test | RUN | 0.852883 | 3.697303 | 3.537438 | 0.001968 | 0.002327 | 0.002026 |
| switch.test | RUN | 0.441377 | 1.211943 | 1.338914 | 0.002168 | 0.002268 | 0.001693 |
| toy_spirit.test | RUN | 0.493680 | 1.582165 | 1.728897 | 0.001851 | 0.002295 | 0.001910 |
| toy_spirit2.test | RUN | 0.545824 | 1.646879 | 1.871123 | 0.001901 | 0.002152 | 0.002010 |
| make.test | RUN | 0.421621 | 1.547336 | 1.323382 | 0.001867 | 0.002649 | 0.002241 |
| mem_ptr.test | RUN | 0.572300 | 2.600147 | 1.930932 | 0.002290 | 0.002711 | 0.002209 |
| mpl.test | RUN | 0.488099 | 1.262200 | 1.462761 | 0.001800 | 0.002114 | 0.002117 |
| noinvoke.test | RUN | 0.411833 | 1.088580 | 1.225225 | 0.001823 | 0.002353 | 0.002037 |
| pack_expansion.test | RUN | 0.446286 | 1.592084 | 1.528789 | 0.001483 | 0.001692 | 0.002015 |
| protect.test | RUN | 0.395461 | 1.033892 | 1.030177 | 0.001501 | 0.001612 | 0.001443 |
| bug2407.test | COMPILE | 0.374625 | 0.734160 | 0.852867 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.988×, 0.983× | 0.990× |
| clang | 0.971× | 0.967×, 0.975× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001264s | 0.001265s | 0.001243s | byte equality observed |
| constrained_ops.test | 10 | 0.001276s | 0.001212s | 0.001206s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001256s | 0.001225s | 0.001199s | byte equality observed |
| deduce_domain.test | 10 | 0.001263s | 0.001234s | 0.001198s | byte equality observed |
| deep_copy.test | 10 | 0.001252s | 0.001211s | 0.001195s | byte equality observed |
| display_expr.test | 10 | 0.001253s | 0.001231s | 0.001218s | byte equality observed |
| env_var.test | 10 | 0.001355s | 0.001323s | 0.001319s | byte equality observed |
| examples.test | 10 | 0.001295s | 0.001270s | 0.001265s | byte equality observed |
| external_transforms.test | 10 | 0.001293s | 0.001245s | 0.001226s | byte equality observed |
| flatten.test | 10 | 0.001277s | 0.001244s | 0.001249s | byte equality observed |
| lambda.test | 10 | 0.001269s | 0.001260s | 0.001183s | byte equality observed |
| make.test | 10 | 0.001317s | 0.001310s | 0.001244s | byte equality observed |
| make_expr.test | 10 | 0.001375s | 0.001371s | 0.001333s | byte equality observed |
| matches.test | 10 | 0.001282s | 0.001233s | 0.001265s | byte equality observed |
| mem_ptr.test | 10 | 0.001344s | 0.001343s | 0.001344s | byte equality observed |
| mpl.test | 10 | 0.001275s | 0.001250s | 0.001226s | byte equality observed |
| noinvoke.test | 10 | 0.001208s | 0.001214s | 0.001235s | byte equality observed |
| pack_expansion.test | 10 | 0.001266s | 0.001256s | 0.001233s | byte equality observed |
| protect.test | 10 | 0.001263s | 0.001280s | 0.001240s | byte equality observed |
| switch.test | 10 | 0.001248s | 0.001198s | 0.001225s | byte equality observed |
| toy_spirit.test | 10 | 0.001237s | 0.001213s | 0.001215s | byte equality observed |
| toy_spirit2.test | 10 | 0.001248s | 0.001218s | 0.001197s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
