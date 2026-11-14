# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.529513 | 2.065723 | 1.872638 | 0.003681 | 0.003499 | 0.003298 |
| test_increment.test | RUN | 0.501623 | 1.546606 | 1.600811 | 0.003280 | 0.003264 | 0.003205 |
| test_add.test | RUN | 0.688305 | 2.427204 | 2.414403 | 0.003566 | 0.003531 | 0.003444 |
| test_add_assign.test | RUN | 0.661116 | 2.620398 | 2.491402 | 0.004193 | 0.003627 | 0.003609 |
| test_callable.test | RUN | 1.082157 | 4.570893 | 5.426649 | 0.005702 | 0.006177 | 0.006022 |
| test_reference.test | RUN | 0.557051 | 1.813483 | 1.726997 | 0.003252 | 0.003643 | 0.003474 |
| test_construct.test | RUN | 2.394415 | 23.038793 | 15.553786 | 0.007761 | 0.006765 | 0.007960 |
| test_relaxed.test | RUN | 0.501599 | 1.324439 | 1.508790 | 0.003417 | 0.003341 | 0.003133 |
| test_assign.test | RUN | 5.236892 | 71.538095 | 53.568315 | 0.010546 | 0.007010 | 0.007207 |
| test_construct_ref.test | RUN | 0.634009 | 3.151282 | 2.415979 | 0.004540 | 0.004622 | 0.004503 |
| test_construct_cref.test | RUN | 0.687766 | 2.974993 | 3.055349 | 0.004990 | 0.005417 | 0.005601 |
| test_any_cast.test | RUN | 0.590009 | 3.120890 | 2.448838 | 0.004408 | 0.004360 | 0.004182 |
| test_binding_of.test | RUN | 0.478573 | 1.250280 | 1.458029 | 0.003023 | 0.003230 | 0.003100 |
| test_typeid_of.test | RUN | 0.514739 | 1.746451 | 1.655992 | 0.003393 | 0.003110 | 0.003506 |
| test_nested.test | RUN | 0.564676 | 1.715562 | 1.837658 | 0.003180 | 0.003092 | 0.003230 |
| test_less.test | RUN | 0.716437 | 3.322449 | 2.985161 | 0.004480 | 0.005657 | 0.004832 |
| test_equal.test | RUN | 0.661137 | 3.131318 | 2.499333 | 0.004060 | 0.004097 | 0.004150 |
| test_negate.test | RUN | 0.492085 | 1.305548 | 1.488376 | 0.002846 | 0.003273 | 0.002832 |
| test_dereference.test | RUN | 0.535915 | 1.711533 | 1.708257 | 0.003247 | 0.003461 | 0.003209 |
| test_subscript.test | RUN | 0.557141 | 1.921047 | 1.590541 | 0.003535 | 0.003202 | 0.003000 |
| test_forward_iterator.test | RUN | 0.647187 | 2.041924 | 2.207251 | 0.003502 | 0.003680 | 0.003221 |
| test_tuple.test | RUN | 0.591203 | 2.028208 | 1.931619 | 0.003463 | 0.003365 | 0.003565 |
| test_stream.test | RUN | 0.722075 | 3.264960 | 2.725511 | 0.004492 | 0.004381 | 0.004243 |
| test_deduced.test | RUN | 0.500318 | 1.192631 | 1.480164 | 0.002920 | 0.003225 | 0.002799 |
| test_same_type.test | RUN | 0.551335 | 1.594763 | 1.841173 | 0.003086 | 0.003074 | 0.003344 |
| test_member.test | RUN | 0.713729 | 3.281163 | 2.923020 | 0.004798 | 0.004973 | 0.004633 |
| test_null.test | RUN | 0.493553 | 1.577249 | 1.338200 | 0.003302 | 0.003578 | 0.003081 |
| test_free.test | RUN | 0.597689 | 2.737831 | 2.199050 | 0.003881 | 0.003792 | 0.004055 |
| test_is_empty.test | RUN | 0.472199 | 1.393977 | 1.311531 | 0.003212 | 0.003102 | 0.003056 |
| test_dynamic_any_cast.test | RUN | 0.907967 | 4.023820 | 4.125015 | 0.004820 | 0.005264 | 0.005247 |
| test_limits.test | RUN | 0.830121 | 2.820490 | 2.955450 | 0.003236 | 0.003694 | 0.003548 |
| test_param.test | COMPILE | 0.326717 | 0.739773 | 0.856324 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.320238 | 0.563891 | 0.770451 | — | — | — |
| test_sfinae.test | COMPILE | 0.329750 | 0.578568 | 0.819178 | — | — | — |
| test_interface_order.test | COMPILE | 0.321680 | 0.609973 | 0.723812 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.039832 | 0.059341 | 0.072010 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.297774 | 0.571798 | 0.754137 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.306835 | 0.595882 | 0.680751 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.301487 | 0.565278 | 0.792614 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.310467 | 0.592693 | 0.799060 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.300494 | 0.596408 | 0.676610 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.296253 | 0.541982 | 0.761558 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.303562 | 0.594022 | 0.788265 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.319646 | 0.617923 | 0.774949 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.300964 | 0.497553 | 0.765351 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.303550 | 0.583024 | 0.790964 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.295301 | 0.589405 | 0.670508 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.299733 | 0.544964 | 0.793903 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.305145 | 0.627900 | 0.735795 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.302631 | 0.612987 | 0.831352 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.304383 | 0.573867 | 0.820081 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.303476 | 0.587876 | 0.674394 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.302379 | 0.591270 | 0.834126 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.305519 | 0.586624 | 0.813390 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.303617 | 0.599144 | 0.789499 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.307437 | 0.606867 | 0.832126 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.307321 | 0.566175 | 0.698697 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.296457 | 0.601426 | 0.816250 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.284410 | 0.587537 | 0.757111 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.268375 | 0.490427 | 0.602592 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.011×† | 1.107×, 0.914× | 1.029× |
| clang | 0.925×† | 0.896×, 0.953× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.002005s | 0.002099s | 0.001946s | byte equality observed |
| test_add_assign.test | 9 | 0.002016s | 0.002064s | 0.001966s | byte equality observed |
| test_any_cast.test | 8 | 0.002314s | 0.002301s | 0.002213s | byte equality observed |
| test_assign.test | 4 | 0.006126s | 0.005612s | 0.005362s | byte equality observed |
| test_binding.test | 10 | 0.001899s | 0.001963s | 0.001865s | byte equality observed |
| test_binding_of.test | 10 | 0.001783s | 0.001759s | 0.001758s | byte equality observed |
| test_callable.test | 6 | 0.002966s | 0.002880s | 0.002925s | byte equality observed |
| test_construct.test | 5 | 0.003861s | 0.003751s | 0.003639s | byte equality observed |
| test_construct_cref.test | 7 | 0.002702s | 0.002821s | 0.002559s | byte equality observed |
| test_construct_ref.test | 8 | 0.002424s | 0.002499s | 0.002322s | byte equality observed |
| test_deduced.test | 9 | 0.001782s | 0.001836s | 0.001717s | byte equality observed |
| test_dereference.test | 10 | 0.001894s | 0.001953s | 0.001781s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002661s | 0.002758s | 0.002628s | byte equality observed |
| test_equal.test | 9 | 0.002272s | 0.002307s | 0.002145s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001868s | 0.001943s | 0.001791s | byte equality observed |
| test_free.test | 9 | 0.002255s | 0.002300s | 0.002180s | byte equality observed |
| test_increment.test | 10 | 0.001832s | 0.001829s | 0.001749s | byte equality observed |
| test_is_empty.test | 10 | 0.001890s | 0.001860s | 0.001734s | byte equality observed |
| test_less.test | 8 | 0.002409s | 0.002494s | 0.002343s | byte equality observed |
| test_limits.test | 9 | 0.002036s | 0.002087s | 0.001866s | byte equality observed |
| test_member.test | 7 | 0.002766s | 0.002804s | 0.002659s | byte equality observed |
| test_negate.test | 9 | 0.001802s | 0.001826s | 0.001657s | byte equality observed |
| test_nested.test | 10 | 0.001891s | 0.001881s | 0.001732s | byte equality observed |
| test_null.test | 10 | 0.001896s | 0.001929s | 0.001810s | byte equality observed |
| test_reference.test | 8 | 0.002001s | 0.001994s | 0.001859s | byte equality observed |
| test_relaxed.test | 10 | 0.001793s | 0.001841s | 0.001709s | byte equality observed |
| test_same_type.test | 10 | 0.001891s | 0.001954s | 0.001856s | byte equality observed |
| test_stream.test | 8 | 0.002580s | 0.002663s | 0.002527s | byte equality observed |
| test_subscript.test | 10 | 0.001957s | 0.001982s | 0.001923s | byte equality observed |
| test_tuple.test | 10 | 0.001990s | 0.001980s | 0.001861s | byte equality observed |
| test_typeid_of.test | 8 | 0.001948s | 0.001977s | 0.001938s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
