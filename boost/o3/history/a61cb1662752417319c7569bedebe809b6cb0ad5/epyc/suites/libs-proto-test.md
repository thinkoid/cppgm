# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.567034 | 1.412522 | 1.711441 | 0.003084 | 0.003201 | 0.003099 |
| constrained_ops.test | RUN | 0.683604 | 1.496371 | 1.903314 | 0.002970 | 0.003270 | 0.003104 |
| cpp-next_bug.test | RUN | 0.699165 | 1.639863 | 2.006836 | 0.003072 | 0.002999 | 0.003104 |
| deep_copy.test | RUN | 0.611037 | 1.395006 | 1.695313 | 0.002811 | 0.003017 | 0.003167 |
| display_expr.test | RUN | 0.655452 | 1.734398 | 2.056281 | 0.002943 | 0.002943 | 0.003278 |
| deduce_domain.test | RUN | 0.542701 | 1.221534 | 1.578293 | 0.002866 | 0.002826 | 0.003113 |
| env_var.test | RUN | 0.704481 | 2.938597 | 2.361932 | 0.003730 | 0.003514 | 0.003801 |
| examples.test | RUN | 0.685225 | 1.894024 | 2.295671 | 0.002937 | 0.002911 | 0.003022 |
| external_transforms.test | RUN | 0.662162 | 1.687168 | 2.059147 | 0.003059 | 0.002886 | 0.002937 |
| lambda.test | RUN | 0.651459 | 1.658695 | 2.120070 | 0.002871 | 0.003072 | 0.002813 |
| make_expr.test | RUN | 0.657695 | 2.718033 | 2.235925 | 0.003688 | 0.004430 | 0.004068 |
| matches.test | RUN | 0.584730 | 1.380594 | 1.809052 | 0.003059 | 0.002974 | 0.002748 |
| flatten.test | RUN | 1.118905 | 3.984695 | 4.412028 | 0.003291 | 0.003240 | 0.003096 |
| switch.test | RUN | 0.576026 | 1.383464 | 1.689317 | 0.003154 | 0.003126 | 0.003152 |
| toy_spirit.test | RUN | 0.643307 | 1.822715 | 2.164523 | 0.003038 | 0.003231 | 0.003151 |
| toy_spirit2.test | RUN | 0.716623 | 1.877123 | 2.338935 | 0.003166 | 0.003020 | 0.002820 |
| make.test | RUN | 0.578186 | 1.728049 | 1.668440 | 0.003449 | 0.003449 | 0.003413 |
| mem_ptr.test | RUN | 0.729794 | 2.945895 | 2.421613 | 0.003452 | 0.003734 | 0.003655 |
| mpl.test | RUN | 0.663116 | 1.506468 | 1.871950 | 0.002594 | 0.003162 | 0.002966 |
| noinvoke.test | RUN | 0.541801 | 1.195283 | 1.566520 | 0.002779 | 0.003039 | 0.003186 |
| pack_expansion.test | RUN | 0.658617 | 1.818333 | 1.842242 | 0.003184 | 0.002513 | 0.002423 |
| protect.test | RUN | 0.430332 | 1.311098 | 1.284511 | 0.002459 | 0.002460 | 0.002372 |
| bug2407.test | COMPILE | 0.469105 | 0.925167 | 1.054678 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.064× | 1.063×, 1.066× | 0.996× |
| clang | 0.927×† | 0.843×, 1.012× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001713s | 0.001826s | 0.001701s | byte equality observed |
| constrained_ops.test | 10 | 0.001706s | 0.001806s | 0.001686s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001725s | 0.001776s | 0.001624s | byte equality observed |
| deduce_domain.test | 9 | 0.001712s | 0.001792s | 0.001673s | byte equality observed |
| deep_copy.test | 10 | 0.001705s | 0.001750s | 0.001631s | byte equality observed |
| display_expr.test | 7 | 0.001737s | 0.001782s | 0.001675s | byte equality observed |
| env_var.test | 10 | 0.001997s | 0.002101s | 0.001961s | byte equality observed |
| examples.test | 10 | 0.001711s | 0.001828s | 0.001682s | byte equality observed |
| external_transforms.test | 10 | 0.001710s | 0.001872s | 0.001671s | byte equality observed |
| flatten.test | 10 | 0.001740s | 0.001898s | 0.001726s | byte equality observed |
| lambda.test | 10 | 0.001687s | 0.001783s | 0.001682s | byte equality observed |
| make.test | 10 | 0.001880s | 0.001974s | 0.001798s | byte equality observed |
| make_expr.test | 9 | 0.002097s | 0.002194s | 0.002038s | byte equality observed |
| matches.test | 9 | 0.001697s | 0.001759s | 0.001653s | byte equality observed |
| mem_ptr.test | 9 | 0.001974s | 0.002136s | 0.001944s | byte equality observed |
| mpl.test | 10 | 0.001681s | 0.001776s | 0.001635s | byte equality observed |
| noinvoke.test | 10 | 0.001689s | 0.001821s | 0.001637s | byte equality observed |
| pack_expansion.test | 10 | 0.001769s | 0.001863s | 0.001696s | byte equality observed |
| protect.test | 10 | 0.001799s | 0.001897s | 0.001728s | byte equality observed |
| switch.test | 10 | 0.001664s | 0.001783s | 0.001673s | byte equality observed |
| toy_spirit.test | 10 | 0.001742s | 0.001787s | 0.001767s | byte equality observed |
| toy_spirit2.test | 10 | 0.001695s | 0.001767s | 0.001746s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
