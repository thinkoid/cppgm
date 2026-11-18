# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.640386 | 1.638597 | 1.792880 | 0.002949 | 0.002637 | 0.002668 |
| constrained_ops.test | RUN | 0.720256 | 1.778530 | 2.113007 | 0.002504 | 0.002766 | 0.002699 |
| cpp-next_bug.test | RUN | 0.715297 | 1.892490 | 2.125762 | 0.002761 | 0.003183 | 0.002598 |
| deep_copy.test | RUN | 0.621536 | 1.650908 | 1.789937 | 0.002658 | 0.002571 | 0.002486 |
| display_expr.test | RUN | 0.735597 | 2.101981 | 2.223878 | 0.002884 | 0.002579 | 0.002661 |
| deduce_domain.test | RUN | 0.577914 | 1.432448 | 1.654153 | 0.002666 | 0.002836 | 0.002265 |
| env_var.test | RUN | 0.774980 | 3.549489 | 2.641192 | 0.002986 | 0.003026 | 0.003080 |
| examples.test | RUN | 0.741207 | 2.295617 | 2.480747 | 0.002792 | 0.002693 | 0.002762 |
| external_transforms.test | RUN | 0.731735 | 1.953869 | 2.235733 | 0.003117 | 0.002617 | 0.002688 |
| lambda.test | RUN | 0.709131 | 1.982310 | 2.228934 | 0.002822 | 0.002822 | 0.002827 |
| make_expr.test | RUN | 0.713322 | 3.307124 | 2.365409 | 0.003150 | 0.003434 | 0.003287 |
| matches.test | RUN | 0.630173 | 1.635074 | 1.958191 | 0.002588 | 0.003037 | 0.002578 |
| flatten.test | RUN | 1.187322 | 4.590044 | 4.793129 | 0.002818 | 0.003097 | 0.002737 |
| switch.test | RUN | 0.625239 | 1.636700 | 1.811584 | 0.003044 | 0.002691 | 0.002605 |
| toy_spirit.test | RUN | 0.699032 | 2.065022 | 2.351885 | 0.002953 | 0.002828 | 0.002815 |
| toy_spirit2.test | RUN | 0.763007 | 2.166510 | 2.528821 | 0.002753 | 0.002747 | 0.002529 |
| make.test | RUN | 0.600146 | 2.102993 | 1.798215 | 0.003067 | 0.003046 | 0.002829 |
| mem_ptr.test | RUN | 0.792519 | 3.444500 | 2.656961 | 0.003240 | 0.003159 | 0.002873 |
| mpl.test | RUN | 0.696950 | 1.718030 | 2.008359 | 0.002548 | 0.002953 | 0.002857 |
| noinvoke.test | RUN | 0.574086 | 1.469056 | 1.644117 | 0.002661 | 0.002996 | 0.002828 |
| pack_expansion.test | RUN | 0.604763 | 2.160916 | 2.166386 | 0.002132 | 0.003000 | 0.002745 |
| protect.test | RUN | 0.530223 | 1.574572 | 1.246221 | 0.002074 | 0.001966 | 0.001942 |
| bug2407.test | COMPILE | 0.512954 | 0.881847 | 1.239303 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 1.007×, 0.988× | 1.004× |
| clang | 0.977× | 0.981×, 0.974× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001653s | 0.001654s | 0.001668s | byte equality observed |
| constrained_ops.test | 10 | 0.001641s | 0.001641s | 0.001668s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001634s | 0.001631s | 0.001567s | byte equality observed |
| deduce_domain.test | 10 | 0.001594s | 0.001609s | 0.001613s | byte equality observed |
| deep_copy.test | 10 | 0.001611s | 0.001601s | 0.001560s | byte equality observed |
| display_expr.test | 10 | 0.001602s | 0.001610s | 0.001593s | byte equality observed |
| env_var.test | 10 | 0.001847s | 0.001827s | 0.001786s | byte equality observed |
| examples.test | 10 | 0.001632s | 0.001634s | 0.001632s | byte equality observed |
| external_transforms.test | 10 | 0.001629s | 0.001661s | 0.001664s | byte equality observed |
| flatten.test | 10 | 0.001657s | 0.001660s | 0.001607s | byte equality observed |
| lambda.test | 9 | 0.001598s | 0.001585s | 0.001567s | byte equality observed |
| make.test | 10 | 0.001740s | 0.001760s | 0.001694s | byte equality observed |
| make_expr.test | 10 | 0.001895s | 0.001833s | 0.001822s | byte equality observed |
| matches.test | 10 | 0.001612s | 0.001627s | 0.001575s | byte equality observed |
| mem_ptr.test | 8 | 0.001809s | 0.001766s | 0.001842s | byte equality observed |
| mpl.test | 10 | 0.001627s | 0.001700s | 0.001589s | byte equality observed |
| noinvoke.test | 9 | 0.001630s | 0.001665s | 0.001566s | byte equality observed |
| pack_expansion.test | 10 | 0.001671s | 0.001667s | 0.001608s | byte equality observed |
| protect.test | 10 | 0.001670s | 0.001648s | 0.001574s | byte equality observed |
| switch.test | 10 | 0.001639s | 0.001594s | 0.001562s | byte equality observed |
| toy_spirit.test | 10 | 0.001619s | 0.001587s | 0.001563s | byte equality observed |
| toy_spirit2.test | 10 | 0.001700s | 0.001670s | 0.001593s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
