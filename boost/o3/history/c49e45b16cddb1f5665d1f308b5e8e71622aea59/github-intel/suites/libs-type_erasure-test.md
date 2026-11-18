# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.421199 | 1.801553 | 1.468697 | 0.002396 | 0.002251 | 0.002174 |
| test_increment.test | RUN | 0.409678 | 1.346433 | 1.288899 | 0.002428 | 0.002152 | 0.001931 |
| test_add.test | RUN | 0.539274 | 2.175745 | 1.917086 | 0.002301 | 0.002274 | 0.002128 |
| test_add_assign.test | RUN | 0.539734 | 2.362109 | 1.985219 | 0.002508 | 0.002366 | 0.002101 |
| test_callable.test | RUN | 0.902859 | 4.058243 | 4.362578 | 0.003216 | 0.003455 | 0.002963 |
| test_reference.test | RUN | 0.436968 | 1.640129 | 1.372943 | 0.002129 | 0.002453 | 0.002100 |
| test_construct.test | RUN | 2.099995 | 19.716234 | 13.295536 | 0.004179 | 0.004053 | 0.004100 |
| test_relaxed.test | RUN | 0.413155 | 1.137449 | 1.208139 | 0.002280 | 0.002233 | 0.002060 |
| test_assign.test | RUN | 5.494311 | 63.193714 | 46.736074 | 0.006721 | 0.003988 | 0.004405 |
| test_construct_ref.test | RUN | 0.541956 | 2.907469 | 1.999735 | 0.002737 | 0.002702 | 0.002478 |
| test_construct_cref.test | RUN | 0.593591 | 2.619711 | 2.444112 | 0.003006 | 0.003124 | 0.002889 |
| test_any_cast.test | RUN | 0.509531 | 2.789599 | 1.935116 | 0.002726 | 0.002720 | 0.002579 |
| test_binding_of.test | RUN | 0.385518 | 1.068215 | 1.142502 | 0.002036 | 0.002171 | 0.001980 |
| test_typeid_of.test | RUN | 0.422085 | 1.488908 | 1.277379 | 0.002500 | 0.002214 | 0.002007 |
| test_nested.test | RUN | 0.463487 | 1.535070 | 1.484142 | 0.002452 | 0.002300 | 0.002017 |
| test_less.test | RUN | 0.629570 | 2.990233 | 2.411002 | 0.003161 | 0.002867 | 0.002493 |
| test_equal.test | RUN | 0.555316 | 2.898968 | 2.014670 | 0.002809 | 0.002396 | 0.002217 |
| test_negate.test | RUN | 0.403066 | 1.133905 | 1.217404 | 0.002186 | 0.002216 | 0.001937 |
| test_dereference.test | RUN | 0.454831 | 1.482559 | 1.392808 | 0.002232 | 0.002380 | 0.002122 |
| test_subscript.test | RUN | 0.449095 | 1.668330 | 1.486569 | 0.002408 | 0.002212 | 0.002171 |
| test_forward_iterator.test | RUN | 0.549806 | 1.865543 | 1.809913 | 0.002557 | 0.002280 | 0.002018 |
| test_tuple.test | RUN | 0.496546 | 1.905193 | 1.565500 | 0.002823 | 0.002614 | 0.002157 |
| test_stream.test | RUN | 0.625016 | 3.110547 | 2.339968 | 0.003219 | 0.002414 | 0.002574 |
| test_deduced.test | RUN | 0.400214 | 1.085850 | 1.156254 | 0.002256 | 0.002524 | 0.001907 |
| test_same_type.test | RUN | 0.469846 | 1.506452 | 1.429134 | 0.002800 | 0.002100 | 0.002096 |
| test_member.test | RUN | 0.587309 | 3.021420 | 2.350011 | 0.003031 | 0.002944 | 0.002894 |
| test_null.test | RUN | 0.400987 | 1.444837 | 1.167488 | 0.002324 | 0.002140 | 0.002051 |
| test_free.test | RUN | 0.525063 | 2.465109 | 1.745525 | 0.002747 | 0.002427 | 0.002299 |
| test_is_empty.test | RUN | 0.380344 | 1.215932 | 1.102608 | 0.002206 | 0.002154 | 0.001875 |
| test_dynamic_any_cast.test | RUN | 0.755608 | 3.604860 | 3.353980 | 0.003098 | 0.002735 | 0.002866 |
| test_limits.test | RUN | 0.679218 | 2.500615 | 2.312548 | 0.002438 | 0.002190 | 0.002254 |
| test_param.test | COMPILE | 0.261723 | 0.681720 | 0.691678 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.247088 | 0.513584 | 0.623662 | — | — | — |
| test_sfinae.test | COMPILE | 0.258437 | 0.522899 | 0.660154 | — | — | — |
| test_interface_order.test | COMPILE | 0.248955 | 0.506994 | 0.607526 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028447 | 0.047812 | 0.054972 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.245867 | 0.498589 | 0.598804 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.243903 | 0.491218 | 0.576113 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.235357 | 0.496730 | 0.588551 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.237034 | 0.485417 | 0.597410 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.239490 | 0.491371 | 0.567681 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.227624 | 0.485025 | 0.575205 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.237095 | 0.494592 | 0.600804 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.251364 | 0.491869 | 0.630584 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.240318 | 0.482079 | 0.579428 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.237681 | 0.483409 | 0.594660 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.236974 | 0.482814 | 0.561771 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.233740 | 0.494649 | 0.592859 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.239838 | 0.513396 | 0.615113 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.238980 | 0.524518 | 0.604455 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.238765 | 0.523398 | 0.610439 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.234951 | 0.496998 | 0.584795 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.242538 | 0.508165 | 0.593311 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.239393 | 0.505439 | 0.618273 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.239598 | 0.509309 | 0.626667 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.241392 | 0.506995 | 0.636018 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.244834 | 0.505752 | 0.614969 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.244264 | 0.507613 | 0.618709 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.182147 | 0.499658 | 0.588784 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.186491 | 0.335840 | 0.407013 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.963× | 0.968×, 0.959× | 0.993× |
| clang | 0.967× | 0.969×, 0.966× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001368s | 0.001343s | 0.001309s | byte equality observed |
| test_add_assign.test | 10 | 0.001400s | 0.001361s | 0.001313s | byte equality observed |
| test_any_cast.test | 10 | 0.001483s | 0.001434s | 0.001430s | byte equality observed |
| test_assign.test | 5 | 0.003913s | 0.003312s | 0.003668s | byte equality observed |
| test_binding.test | 10 | 0.001307s | 0.001267s | 0.001268s | byte equality observed |
| test_binding_of.test | 10 | 0.001273s | 0.001239s | 0.001214s | byte equality observed |
| test_callable.test | 10 | 0.001720s | 0.001672s | 0.001681s | byte equality observed |
| test_construct.test | 8 | 0.002236s | 0.002176s | 0.002129s | byte equality observed |
| test_construct_cref.test | 10 | 0.001609s | 0.001597s | 0.001548s | byte equality observed |
| test_construct_ref.test | 10 | 0.001496s | 0.001488s | 0.001427s | byte equality observed |
| test_deduced.test | 10 | 0.001274s | 0.001265s | 0.001248s | byte equality observed |
| test_dereference.test | 10 | 0.001319s | 0.001263s | 0.001260s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001634s | 0.001607s | 0.001563s | byte equality observed |
| test_equal.test | 10 | 0.001451s | 0.001458s | 0.001434s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001331s | 0.001299s | 0.001267s | byte equality observed |
| test_free.test | 10 | 0.001432s | 0.001410s | 0.001368s | byte equality observed |
| test_increment.test | 10 | 0.001298s | 0.001285s | 0.001260s | byte equality observed |
| test_is_empty.test | 10 | 0.001283s | 0.001237s | 0.001229s | byte equality observed |
| test_less.test | 10 | 0.001510s | 0.001503s | 0.001462s | byte equality observed |
| test_limits.test | 10 | 0.001374s | 0.001353s | 0.001334s | byte equality observed |
| test_member.test | 9 | 0.001645s | 0.001600s | 0.001568s | byte equality observed |
| test_negate.test | 10 | 0.001252s | 0.001236s | 0.001213s | byte equality observed |
| test_nested.test | 10 | 0.001268s | 0.001251s | 0.001233s | byte equality observed |
| test_null.test | 10 | 0.001296s | 0.001261s | 0.001251s | byte equality observed |
| test_reference.test | 10 | 0.001299s | 0.001291s | 0.001265s | byte equality observed |
| test_relaxed.test | 10 | 0.001295s | 0.001244s | 0.001249s | byte equality observed |
| test_same_type.test | 10 | 0.001305s | 0.001279s | 0.001271s | byte equality observed |
| test_stream.test | 10 | 0.001580s | 0.001541s | 0.001496s | byte equality observed |
| test_subscript.test | 10 | 0.001350s | 0.001308s | 0.001309s | byte equality observed |
| test_tuple.test | 10 | 0.001320s | 0.001277s | 0.001282s | byte equality observed |
| test_typeid_of.test | 10 | 0.001333s | 0.001305s | 0.001295s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
