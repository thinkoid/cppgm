# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.382008 | 1.503360 | 1.366392 | 0.003045 | 0.002946 | 0.003116 |
| test_increment.test | RUN | 0.448849 | 1.138941 | 1.201553 | 0.002797 | 0.002871 | 0.002902 |
| test_add.test | RUN | 0.533608 | 1.802641 | 1.768897 | 0.003282 | 0.003166 | 0.003286 |
| test_add_assign.test | RUN | 0.543459 | 1.930513 | 1.851465 | 0.003278 | 0.003150 | 0.003222 |
| test_callable.test | RUN | 0.876931 | 3.509141 | 4.151416 | 0.004989 | 0.004846 | 0.005380 |
| test_reference.test | RUN | 0.416994 | 1.371257 | 1.241041 | 0.002802 | 0.003176 | 0.003252 |
| test_construct.test | RUN | 1.855789 | 18.581829 | 12.371518 | 0.006450 | 0.005999 | 0.006600 |
| test_relaxed.test | RUN | 0.404393 | 0.983776 | 1.098361 | 0.002797 | 0.002786 | 0.002921 |
| test_assign.test | RUN | 4.419028 | 55.856977 | 45.282983 | 0.009223 | 0.006180 | 0.006719 |
| test_construct_ref.test | RUN | 0.491986 | 2.331130 | 1.855996 | 0.004005 | 0.003640 | 0.004072 |
| test_construct_cref.test | RUN | 0.564321 | 2.223201 | 2.307626 | 0.004439 | 0.004379 | 0.004588 |
| test_any_cast.test | RUN | 0.458050 | 2.321633 | 1.764552 | 0.003681 | 0.003711 | 0.003837 |
| test_binding_of.test | RUN | 0.370348 | 0.941676 | 1.001388 | 0.002933 | 0.002551 | 0.002828 |
| test_typeid_of.test | RUN | 0.391888 | 1.220453 | 1.160129 | 0.003042 | 0.002995 | 0.003081 |
| test_nested.test | RUN | 0.446701 | 1.296574 | 1.390242 | 0.002959 | 0.002908 | 0.002961 |
| test_less.test | RUN | 0.562376 | 2.490815 | 2.246959 | 0.003620 | 0.003971 | 0.003999 |
| test_equal.test | RUN | 0.518157 | 2.345343 | 1.891692 | 0.003435 | 0.003760 | 0.003748 |
| test_negate.test | RUN | 0.379682 | 0.975660 | 1.043895 | 0.002531 | 0.002570 | 0.002741 |
| test_dereference.test | RUN | 0.434278 | 1.219231 | 1.303587 | 0.003174 | 0.002847 | 0.002988 |
| test_subscript.test | RUN | 0.448543 | 1.344280 | 1.321702 | 0.003181 | 0.003122 | 0.002935 |
| test_forward_iterator.test | RUN | 0.528451 | 1.599263 | 1.476536 | 0.003208 | 0.002934 | 0.003061 |
| test_tuple.test | RUN | 0.505348 | 1.625033 | 1.374407 | 0.003330 | 0.003164 | 0.003158 |
| test_stream.test | RUN | 0.632341 | 2.744946 | 2.162003 | 0.004205 | 0.004129 | 0.003986 |
| test_deduced.test | RUN | 0.421298 | 1.001678 | 1.072271 | 0.003082 | 0.002949 | 0.002631 |
| test_same_type.test | RUN | 0.467168 | 1.304671 | 1.288865 | 0.003111 | 0.002686 | 0.002966 |
| test_member.test | RUN | 0.572505 | 2.599156 | 2.227304 | 0.004478 | 0.004524 | 0.004991 |
| test_null.test | RUN | 0.416372 | 1.250154 | 1.133921 | 0.002886 | 0.002958 | 0.002886 |
| test_free.test | RUN | 0.492924 | 2.037143 | 1.431266 | 0.003812 | 0.003589 | 0.003574 |
| test_is_empty.test | RUN | 0.392027 | 1.034650 | 1.111476 | 0.002733 | 0.002836 | 0.002939 |
| test_dynamic_any_cast.test | RUN | 0.724009 | 3.114382 | 2.863988 | 0.004058 | 0.004328 | 0.004213 |
| test_limits.test | RUN | 0.671541 | 2.152201 | 2.148397 | 0.003125 | 0.003169 | 0.003389 |
| test_param.test | COMPILE | 0.262895 | 0.564402 | 0.682962 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.253550 | 0.435856 | 0.600653 | — | — | — |
| test_sfinae.test | COMPILE | 0.250770 | 0.441441 | 0.630292 | — | — | — |
| test_interface_order.test | COMPILE | 0.244737 | 0.427187 | 0.591548 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.032276 | 0.045722 | 0.055737 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.226352 | 0.425103 | 0.560373 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.229955 | 0.438519 | 0.519872 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.225364 | 0.429692 | 0.542412 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.223568 | 0.431310 | 0.549661 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.236547 | 0.431341 | 0.504779 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.229286 | 0.431808 | 0.553230 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.238178 | 0.430116 | 0.583938 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.250155 | 0.441198 | 0.591104 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.232996 | 0.426639 | 0.491731 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.233537 | 0.421429 | 0.518565 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.234712 | 0.416000 | 0.548470 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.231798 | 0.431455 | 0.516208 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.227434 | 0.413238 | 0.547122 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.227120 | 0.445768 | 0.568121 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.227377 | 0.458048 | 0.575193 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.225316 | 0.411424 | 0.474805 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.227398 | 0.435680 | 0.571488 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.230671 | 0.427703 | 0.576871 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.229969 | 0.446473 | 0.505157 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.227666 | 0.440204 | 0.573270 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.244278 | 0.431682 | 0.568870 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.242054 | 0.440157 | 0.496277 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.240021 | 0.351850 | 0.526603 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.236659 | 0.378305 | 0.474082 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.951× | 0.953×, 0.949× | 1.031× |
| clang | 0.930×† | 0.957×, 0.902× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001790s | 0.001732s | 0.001640s | byte equality observed |
| test_add_assign.test | 10 | 0.001796s | 0.001676s | 0.001645s | byte equality observed |
| test_any_cast.test | 10 | 0.002103s | 0.001918s | 0.001884s | byte equality observed |
| test_assign.test | 4 | 0.005244s | 0.004372s | 0.004621s | byte equality observed |
| test_binding.test | 10 | 0.001709s | 0.001603s | 0.001569s | byte equality observed |
| test_binding_of.test | 10 | 0.001593s | 0.001497s | 0.001450s | byte equality observed |
| test_callable.test | 8 | 0.002656s | 0.002492s | 0.002454s | byte equality observed |
| test_construct.test | 6 | 0.003501s | 0.003261s | 0.003175s | byte equality observed |
| test_construct_cref.test | 8 | 0.002416s | 0.002280s | 0.002251s | byte equality observed |
| test_construct_ref.test | 9 | 0.002161s | 0.002033s | 0.002003s | byte equality observed |
| test_deduced.test | 10 | 0.001584s | 0.001512s | 0.001496s | byte equality observed |
| test_dereference.test | 10 | 0.001696s | 0.001577s | 0.001601s | byte equality observed |
| test_dynamic_any_cast.test | 9 | 0.002342s | 0.002222s | 0.002254s | byte equality observed |
| test_equal.test | 10 | 0.001974s | 0.001883s | 0.001857s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001668s | 0.001614s | 0.001593s | byte equality observed |
| test_free.test | 10 | 0.001972s | 0.001865s | 0.001879s | byte equality observed |
| test_increment.test | 10 | 0.001655s | 0.001545s | 0.001519s | byte equality observed |
| test_is_empty.test | 10 | 0.001676s | 0.001543s | 0.001540s | byte equality observed |
| test_less.test | 9 | 0.002176s | 0.002030s | 0.001987s | byte equality observed |
| test_limits.test | 10 | 0.001796s | 0.001675s | 0.001638s | byte equality observed |
| test_member.test | 9 | 0.002388s | 0.002302s | 0.002261s | byte equality observed |
| test_negate.test | 10 | 0.001558s | 0.001472s | 0.001430s | byte equality observed |
| test_nested.test | 10 | 0.001630s | 0.001510s | 0.001465s | byte equality observed |
| test_null.test | 10 | 0.001662s | 0.001553s | 0.001543s | byte equality observed |
| test_reference.test | 10 | 0.001677s | 0.001660s | 0.001582s | byte equality observed |
| test_relaxed.test | 10 | 0.001583s | 0.001540s | 0.001509s | byte equality observed |
| test_same_type.test | 10 | 0.001631s | 0.001599s | 0.001567s | byte equality observed |
| test_stream.test | 8 | 0.002216s | 0.002156s | 0.002073s | byte equality observed |
| test_subscript.test | 10 | 0.001683s | 0.001684s | 0.001605s | byte equality observed |
| test_tuple.test | 10 | 0.001713s | 0.001636s | 0.001612s | byte equality observed |
| test_typeid_of.test | 10 | 0.001694s | 0.001649s | 0.001620s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
