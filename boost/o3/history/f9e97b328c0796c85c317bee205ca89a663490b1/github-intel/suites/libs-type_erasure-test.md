# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.552106 | 2.315696 | 1.913794 | 0.002807 | 0.002667 | 0.002548 |
| test_increment.test | RUN | 0.555607 | 1.752433 | 1.672632 | 0.002704 | 0.002659 | 0.002507 |
| test_add.test | RUN | 0.683630 | 2.833406 | 2.494234 | 0.002657 | 0.002875 | 0.002667 |
| test_add_assign.test | RUN | 0.695945 | 3.043955 | 2.581453 | 0.002693 | 0.002865 | 0.002754 |
| test_callable.test | RUN | 1.180367 | 5.148877 | 5.587097 | 0.003951 | 0.004220 | 0.004192 |
| test_reference.test | RUN | 0.534660 | 2.091142 | 1.778150 | 0.002642 | 0.002809 | 0.002749 |
| test_construct.test | RUN | 2.751744 | 22.892277 | 16.808680 | 0.005573 | 0.005118 | 0.005024 |
| test_relaxed.test | RUN | 0.522282 | 1.503609 | 1.586853 | 0.002765 | 0.002608 | 0.002547 |
| test_assign.test | RUN | 6.462969 | 72.773610 | 54.189206 | 0.008794 | 0.004953 | 0.005509 |
| test_construct_ref.test | RUN | 0.651587 | 3.741675 | 2.548851 | 0.003352 | 0.003384 | 0.003303 |
| test_construct_cref.test | RUN | 0.748460 | 3.472297 | 3.225952 | 0.003587 | 0.003684 | 0.003722 |
| test_any_cast.test | RUN | 0.646820 | 3.635757 | 2.470372 | 0.003306 | 0.003281 | 0.003334 |
| test_binding_of.test | RUN | 0.489974 | 1.403253 | 1.437388 | 0.002578 | 0.002720 | 0.002551 |
| test_typeid_of.test | RUN | 0.533670 | 2.007123 | 1.658228 | 0.002886 | 0.002701 | 0.002641 |
| test_nested.test | RUN | 0.600000 | 1.947337 | 1.884761 | 0.002476 | 0.002804 | 0.002472 |
| test_less.test | RUN | 0.769687 | 3.809840 | 3.140740 | 0.003307 | 0.003600 | 0.003152 |
| test_equal.test | RUN | 0.705452 | 3.679273 | 2.592113 | 0.002996 | 0.003089 | 0.002915 |
| test_negate.test | RUN | 0.513741 | 1.454724 | 1.522678 | 0.002338 | 0.002537 | 0.002406 |
| test_dereference.test | RUN | 0.559297 | 1.905263 | 1.806647 | 0.002580 | 0.002784 | 0.002432 |
| test_subscript.test | RUN | 0.580589 | 2.133851 | 1.901525 | 0.002884 | 0.002731 | 0.002582 |
| test_forward_iterator.test | RUN | 0.674432 | 2.435936 | 2.134724 | 0.002475 | 0.002936 | 0.002600 |
| test_tuple.test | RUN | 0.601992 | 2.422085 | 1.992816 | 0.002561 | 0.002781 | 0.002646 |
| test_stream.test | RUN | 0.790251 | 3.924514 | 2.991186 | 0.003450 | 0.003477 | 0.003294 |
| test_deduced.test | RUN | 0.500257 | 1.417208 | 1.489052 | 0.002522 | 0.002621 | 0.002362 |
| test_same_type.test | RUN | 0.565274 | 2.012741 | 1.798327 | 0.002458 | 0.002853 | 0.002406 |
| test_member.test | RUN | 0.732586 | 3.887477 | 2.790731 | 0.004080 | 0.003855 | 0.003674 |
| test_null.test | RUN | 0.520788 | 1.837970 | 1.578721 | 0.002663 | 0.002711 | 0.002490 |
| test_free.test | RUN | 0.622427 | 3.194544 | 2.228968 | 0.003009 | 0.003211 | 0.002926 |
| test_is_empty.test | RUN | 0.488053 | 1.553568 | 1.482224 | 0.002609 | 0.002576 | 0.002387 |
| test_dynamic_any_cast.test | RUN | 0.935471 | 4.608126 | 4.123649 | 0.003326 | 0.003520 | 0.003393 |
| test_limits.test | RUN | 0.844857 | 3.183282 | 2.949308 | 0.002655 | 0.002864 | 0.002567 |
| test_param.test | COMPILE | 0.346671 | 0.880686 | 0.958791 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.322345 | 0.683948 | 0.826098 | — | — | — |
| test_sfinae.test | COMPILE | 0.326099 | 0.680024 | 0.855277 | — | — | — |
| test_interface_order.test | COMPILE | 0.312675 | 0.644203 | 0.813624 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.035791 | 0.063325 | 0.071438 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.306709 | 0.654022 | 0.773161 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.306211 | 0.666598 | 0.760496 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.304837 | 0.663515 | 0.768806 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.304397 | 0.651609 | 0.786196 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.306163 | 0.656447 | 0.714103 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.301730 | 0.645198 | 0.754003 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.306953 | 0.668378 | 0.761178 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.320028 | 0.685303 | 0.776626 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.302874 | 0.643242 | 0.755133 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.296506 | 0.659074 | 0.781933 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.303045 | 0.644540 | 0.720546 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.308694 | 0.667098 | 0.771317 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.314579 | 0.684864 | 0.808736 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.308049 | 0.698846 | 0.787702 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.311993 | 0.692002 | 0.805909 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.306681 | 0.650258 | 0.764531 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.316329 | 0.665706 | 0.749475 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.313324 | 0.662676 | 0.804084 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.314359 | 0.671118 | 0.819093 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.312576 | 0.676816 | 0.751470 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.326389 | 0.673217 | 0.806362 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.324445 | 0.662125 | 0.811529 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.306846 | 0.657014 | 0.746532 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.278281 | 0.649553 | 0.597669 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.977× | 0.986×, 0.968× | 0.994× |
| clang | 0.966× | 0.962×, 0.970× | 1.017× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 4 | 0.001760s | 0.001743s | 0.001686s | byte equality observed |
| test_add_assign.test | 10 | 0.001648s | 0.001643s | 0.001650s | byte equality observed |
| test_any_cast.test | 4 | 0.001930s | 0.001957s | 0.001800s | byte equality observed |
| test_assign.test | 4 | 0.005114s | 0.004279s | 0.004923s | byte equality observed |
| test_binding.test | 9 | 0.001592s | 0.001562s | 0.001555s | byte equality observed |
| test_binding_of.test | 10 | 0.001553s | 0.001531s | 0.001473s | byte equality observed |
| test_callable.test | 8 | 0.002201s | 0.002136s | 0.002106s | byte equality observed |
| test_construct.test | 7 | 0.002824s | 0.002809s | 0.002674s | byte equality observed |
| test_construct_cref.test | 9 | 0.002032s | 0.002027s | 0.002011s | byte equality observed |
| test_construct_ref.test | 9 | 0.001897s | 0.001866s | 0.001881s | byte equality observed |
| test_deduced.test | 10 | 0.001566s | 0.001551s | 0.001499s | byte equality observed |
| test_dereference.test | 10 | 0.001601s | 0.001560s | 0.001581s | byte equality observed |
| test_dynamic_any_cast.test | 9 | 0.002033s | 0.002058s | 0.001968s | byte equality observed |
| test_equal.test | 10 | 0.001816s | 0.001802s | 0.001732s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001590s | 0.001661s | 0.001511s | byte equality observed |
| test_free.test | 9 | 0.001793s | 0.001792s | 0.001752s | byte equality observed |
| test_increment.test | 10 | 0.001596s | 0.001594s | 0.001536s | byte equality observed |
| test_is_empty.test | 10 | 0.001601s | 0.001557s | 0.001541s | byte equality observed |
| test_less.test | 9 | 0.001947s | 0.001994s | 0.001838s | byte equality observed |
| test_limits.test | 10 | 0.001690s | 0.001682s | 0.001582s | byte equality observed |
| test_member.test | 8 | 0.002069s | 0.002071s | 0.002016s | byte equality observed |
| test_negate.test | 10 | 0.001580s | 0.001536s | 0.001479s | byte equality observed |
| test_nested.test | 10 | 0.001591s | 0.001565s | 0.001541s | byte equality observed |
| test_null.test | 10 | 0.001604s | 0.001673s | 0.001532s | byte equality observed |
| test_reference.test | 10 | 0.001669s | 0.001612s | 0.001605s | byte equality observed |
| test_relaxed.test | 10 | 0.001593s | 0.001605s | 0.001532s | byte equality observed |
| test_same_type.test | 10 | 0.001634s | 0.001569s | 0.001604s | byte equality observed |
| test_stream.test | 9 | 0.002010s | 0.001983s | 0.001959s | byte equality observed |
| test_subscript.test | 10 | 0.001652s | 0.001611s | 0.001573s | byte equality observed |
| test_tuple.test | 10 | 0.001679s | 0.001615s | 0.001622s | byte equality observed |
| test_typeid_of.test | 9 | 0.001651s | 0.001647s | 0.001590s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
