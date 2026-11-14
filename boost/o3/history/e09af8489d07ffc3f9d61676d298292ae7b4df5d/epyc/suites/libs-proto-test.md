# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.453424 | 1.130893 | 1.127530 | 0.002653 | 0.002960 | 0.002925 |
| constrained_ops.test | RUN | 0.514149 | 1.191091 | 1.375792 | 0.002966 | 0.003011 | 0.002496 |
| cpp-next_bug.test | RUN | 0.517490 | 1.339314 | 1.362889 | 0.002654 | 0.002897 | 0.002757 |
| deep_copy.test | RUN | 0.448232 | 1.088630 | 1.175557 | 0.002522 | 0.002345 | 0.002802 |
| display_expr.test | RUN | 0.536202 | 1.350250 | 1.530018 | 0.003022 | 0.002823 | 0.002478 |
| deduce_domain.test | RUN | 0.422490 | 0.978059 | 1.128363 | 0.002710 | 0.002692 | 0.002699 |
| env_var.test | RUN | 0.578953 | 2.330806 | 1.817061 | 0.003084 | 0.002903 | 0.003442 |
| examples.test | RUN | 0.550494 | 1.509533 | 1.660446 | 0.002763 | 0.002625 | 0.002479 |
| external_transforms.test | RUN | 0.525965 | 1.313960 | 1.469263 | 0.002609 | 0.002588 | 0.002711 |
| lambda.test | RUN | 0.506491 | 1.356371 | 1.489081 | 0.002603 | 0.002983 | 0.002320 |
| make_expr.test | RUN | 0.519344 | 2.164716 | 1.562041 | 0.003429 | 0.003828 | 0.003527 |
| matches.test | RUN | 0.469530 | 1.101953 | 1.283572 | 0.002948 | 0.002705 | 0.002943 |
| flatten.test | RUN | 0.948714 | 3.197624 | 3.223227 | 0.003066 | 0.003143 | 0.003036 |
| switch.test | RUN | 0.456335 | 1.129088 | 1.191041 | 0.003234 | 0.002960 | 0.002746 |
| toy_spirit.test | RUN | 0.565032 | 1.400235 | 1.606393 | 0.002853 | 0.003069 | 0.002978 |
| toy_spirit2.test | RUN | 0.599916 | 1.492845 | 1.666317 | 0.002660 | 0.003051 | 0.002768 |
| make.test | RUN | 0.459633 | 1.382304 | 1.158916 | 0.003375 | 0.003311 | 0.003134 |
| mem_ptr.test | RUN | 0.574238 | 2.352531 | 1.738568 | 0.003243 | 0.003607 | 0.003408 |
| mpl.test | RUN | 0.506359 | 1.156835 | 1.325889 | 0.002610 | 0.002986 | 0.002840 |
| noinvoke.test | RUN | 0.433639 | 0.994417 | 1.102912 | 0.002471 | 0.003020 | 0.002763 |
| pack_expansion.test | RUN | 0.476343 | 1.470994 | 1.443734 | 0.002491 | 0.002370 | 0.003045 |
| protect.test | RUN | 0.407173 | 1.126172 | 0.850509 | 0.002212 | 0.002330 | 0.002225 |
| bug2407.test | COMPILE | 0.376888 | 0.636067 | 0.793889 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.971× | 0.992×, 0.950× | 1.021× |
| clang | 0.999× | 0.975×, 1.022× | 1.024× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001498s | 0.001549s | 0.001482s | byte equality observed |
| constrained_ops.test | 10 | 0.001507s | 0.001549s | 0.001482s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001503s | 0.001465s | 0.001458s | byte equality observed |
| deduce_domain.test | 8 | 0.001499s | 0.001458s | 0.001457s | byte equality observed |
| deep_copy.test | 10 | 0.001503s | 0.001490s | 0.001443s | byte equality observed |
| display_expr.test | 10 | 0.001486s | 0.001475s | 0.001459s | byte equality observed |
| env_var.test | 10 | 0.001756s | 0.001761s | 0.001723s | byte equality observed |
| examples.test | 10 | 0.001535s | 0.001501s | 0.001501s | byte equality observed |
| external_transforms.test | 10 | 0.001563s | 0.001511s | 0.001489s | byte equality observed |
| flatten.test | 10 | 0.001546s | 0.001574s | 0.001515s | byte equality observed |
| lambda.test | 10 | 0.001512s | 0.001512s | 0.001475s | byte equality observed |
| make.test | 10 | 0.001642s | 0.001617s | 0.001640s | byte equality observed |
| make_expr.test | 10 | 0.001849s | 0.001827s | 0.001796s | byte equality observed |
| matches.test | 9 | 0.001510s | 0.001470s | 0.001465s | byte equality observed |
| mem_ptr.test | 10 | 0.001762s | 0.001761s | 0.001710s | byte equality observed |
| mpl.test | 10 | 0.001509s | 0.001516s | 0.001445s | byte equality observed |
| noinvoke.test | 10 | 0.001516s | 0.001473s | 0.001449s | byte equality observed |
| pack_expansion.test | 10 | 0.001565s | 0.001551s | 0.001496s | byte equality observed |
| protect.test | 10 | 0.001569s | 0.001531s | 0.001500s | byte equality observed |
| switch.test | 10 | 0.001523s | 0.001509s | 0.001430s | byte equality observed |
| toy_spirit.test | 10 | 0.001534s | 0.001508s | 0.001433s | byte equality observed |
| toy_spirit2.test | 10 | 0.001506s | 0.001530s | 0.001423s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
