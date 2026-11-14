# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.437554 | 1.799210 | 1.327728 | 0.003005 | 0.003257 | 0.003153 |
| test_increment.test | RUN | 0.414788 | 1.355865 | 1.172977 | 0.003116 | 0.003260 | 0.002906 |
| test_add.test | RUN | 0.521987 | 2.101122 | 1.732242 | 0.003529 | 0.003306 | 0.003096 |
| test_add_assign.test | RUN | 0.576499 | 2.289114 | 1.814456 | 0.003434 | 0.003685 | 0.003389 |
| test_callable.test | RUN | 0.884647 | 4.054446 | 4.114129 | 0.005409 | 0.005580 | 0.005296 |
| test_reference.test | RUN | 0.434034 | 1.582402 | 1.242337 | 0.003349 | 0.003189 | 0.003245 |
| test_construct.test | RUN | 1.934749 | 23.771251 | 12.291902 | 0.006941 | 0.006658 | 0.006624 |
| test_relaxed.test | RUN | 0.407689 | 1.169486 | 1.090697 | 0.003064 | 0.003189 | 0.002833 |
| test_assign.test | RUN | 4.388975 | 77.569573 | 43.745919 | 0.014696 | 0.006676 | 0.006857 |
| test_construct_ref.test | RUN | 0.500873 | 2.670035 | 1.819006 | 0.004172 | 0.004393 | 0.004151 |
| test_construct_cref.test | RUN | 0.579653 | 2.564764 | 2.246313 | 0.004691 | 0.004953 | 0.004467 |
| test_any_cast.test | RUN | 0.475012 | 2.672418 | 1.794098 | 0.003918 | 0.004031 | 0.003964 |
| test_binding_of.test | RUN | 0.389626 | 1.063689 | 1.052294 | 0.002885 | 0.003108 | 0.002850 |
| test_typeid_of.test | RUN | 0.421369 | 1.536395 | 1.199274 | 0.003195 | 0.003228 | 0.003247 |
| test_nested.test | RUN | 0.462604 | 1.470663 | 1.339618 | 0.003054 | 0.003138 | 0.002894 |
| test_less.test | RUN | 0.597561 | 2.986102 | 2.242462 | 0.003881 | 0.004174 | 0.003944 |
| test_equal.test | RUN | 0.536824 | 2.738600 | 1.775608 | 0.003808 | 0.004134 | 0.003640 |
| test_negate.test | RUN | 0.397164 | 1.110483 | 1.028357 | 0.003087 | 0.003243 | 0.002734 |
| test_dereference.test | RUN | 0.463157 | 1.459700 | 1.266939 | 0.003314 | 0.003199 | 0.003113 |
| test_subscript.test | RUN | 0.491856 | 1.611967 | 1.204516 | 0.003357 | 0.003351 | 0.002880 |
| test_forward_iterator.test | RUN | 0.547361 | 1.731791 | 1.611658 | 0.003255 | 0.003336 | 0.003252 |
| test_tuple.test | RUN | 0.474028 | 1.775664 | 1.266189 | 0.003325 | 0.003381 | 0.003131 |
| test_stream.test | RUN | 0.638704 | 2.994815 | 2.171714 | 0.003998 | 0.004350 | 0.004208 |
| test_deduced.test | RUN | 0.401600 | 1.015647 | 1.062632 | 0.002894 | 0.003090 | 0.002760 |
| test_same_type.test | RUN | 0.478710 | 1.417812 | 1.322846 | 0.003236 | 0.003162 | 0.002853 |
| test_member.test | RUN | 0.592839 | 2.857561 | 2.194378 | 0.004750 | 0.004833 | 0.004512 |
| test_null.test | RUN | 0.404231 | 1.318603 | 1.115252 | 0.002935 | 0.003141 | 0.003104 |
| test_free.test | RUN | 0.495474 | 2.227313 | 1.428355 | 0.003611 | 0.003729 | 0.003407 |
| test_is_empty.test | RUN | 0.401916 | 1.142734 | 1.091109 | 0.003213 | 0.003102 | 0.002915 |
| test_dynamic_any_cast.test | RUN | 0.743453 | 3.592431 | 3.237830 | 0.004788 | 0.004513 | 0.004119 |
| test_limits.test | RUN | 0.692219 | 2.434609 | 1.950968 | 0.003166 | 0.003412 | 0.003126 |
| test_param.test | COMPILE | 0.259065 | 0.622460 | 0.696904 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.256249 | 0.496797 | 0.599761 | — | — | — |
| test_sfinae.test | COMPILE | 0.261108 | 0.536553 | 0.649650 | — | — | — |
| test_interface_order.test | COMPILE | 0.259972 | 0.481937 | 0.565781 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.031699 | 0.053064 | 0.054604 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.244037 | 0.499671 | 0.574059 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.240175 | 0.482431 | 0.537671 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.236077 | 0.479222 | 0.536869 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.238351 | 0.470334 | 0.538739 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.237545 | 0.485778 | 0.531158 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.234237 | 0.477135 | 0.546088 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.240905 | 0.482960 | 0.562567 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.254515 | 0.503088 | 0.541905 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.233825 | 0.472778 | 0.535217 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.240701 | 0.479456 | 0.544990 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.237909 | 0.482183 | 0.488400 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.243866 | 0.493258 | 0.533937 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.246835 | 0.504629 | 0.506125 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.254503 | 0.518244 | 0.537999 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.242839 | 0.518812 | 0.503077 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.238663 | 0.475639 | 0.529717 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.243783 | 0.538609 | 0.555799 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.244592 | 0.512563 | 0.547273 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.242436 | 0.548210 | 0.576444 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.244657 | 0.499242 | 0.572777 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.246597 | 0.495730 | 0.512694 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.238565 | 0.481880 | 0.554053 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.238328 | 0.486635 | 0.526107 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.193525 | 0.468257 | 0.412854 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.941× | 0.962×, 0.920× | 1.019× |
| clang | 0.951× | 0.935×, 0.968× | 1.047× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001774s | 0.001658s | 0.001659s | byte equality observed |
| test_add_assign.test | 10 | 0.001734s | 0.001674s | 0.001681s | byte equality observed |
| test_any_cast.test | 9 | 0.002000s | 0.001853s | 0.001901s | byte equality observed |
| test_assign.test | 4 | 0.004946s | 0.004244s | 0.004604s | byte equality observed |
| test_binding.test | 10 | 0.001620s | 0.001557s | 0.001548s | byte equality observed |
| test_binding_of.test | 8 | 0.001536s | 0.001483s | 0.001435s | byte equality observed |
| test_callable.test | 6 | 0.002555s | 0.002433s | 0.002370s | byte equality observed |
| test_construct.test | 6 | 0.003296s | 0.003103s | 0.003083s | byte equality observed |
| test_construct_cref.test | 8 | 0.002312s | 0.002272s | 0.002154s | byte equality observed |
| test_construct_ref.test | 8 | 0.002055s | 0.002045s | 0.001909s | byte equality observed |
| test_deduced.test | 10 | 0.001525s | 0.001464s | 0.001446s | byte equality observed |
| test_dereference.test | 10 | 0.001635s | 0.001573s | 0.001524s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002240s | 0.002165s | 0.002164s | byte equality observed |
| test_equal.test | 8 | 0.001892s | 0.001841s | 0.001807s | byte equality observed |
| test_forward_iterator.test | 8 | 0.001609s | 0.001578s | 0.001555s | byte equality observed |
| test_free.test | 5 | 0.001924s | 0.001827s | 0.001750s | byte equality observed |
| test_increment.test | 7 | 0.001585s | 0.001515s | 0.001459s | byte equality observed |
| test_is_empty.test | 7 | 0.001575s | 0.001491s | 0.001457s | byte equality observed |
| test_less.test | 6 | 0.002128s | 0.002020s | 0.001938s | byte equality observed |
| test_limits.test | 7 | 0.001713s | 0.001629s | 0.001597s | byte equality observed |
| test_member.test | 6 | 0.002358s | 0.002266s | 0.002231s | byte equality observed |
| test_negate.test | 10 | 0.001551s | 0.001439s | 0.001422s | byte equality observed |
| test_nested.test | 10 | 0.001616s | 0.001573s | 0.001473s | byte equality observed |
| test_null.test | 8 | 0.001602s | 0.001545s | 0.001575s | byte equality observed |
| test_reference.test | 9 | 0.001668s | 0.001602s | 0.001616s | byte equality observed |
| test_relaxed.test | 10 | 0.001538s | 0.001476s | 0.001487s | byte equality observed |
| test_same_type.test | 10 | 0.001641s | 0.001564s | 0.001526s | byte equality observed |
| test_stream.test | 9 | 0.002222s | 0.002123s | 0.002062s | byte equality observed |
| test_subscript.test | 10 | 0.001712s | 0.001616s | 0.001587s | byte equality observed |
| test_tuple.test | 10 | 0.001688s | 0.001601s | 0.001575s | byte equality observed |
| test_typeid_of.test | 10 | 0.001712s | 0.001617s | 0.001595s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
