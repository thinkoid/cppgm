# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.522022 | 2.081278 | 1.908835 | 0.003175 | 0.003364 | 0.003641 |
| test_increment.test | RUN | 0.555320 | 1.529798 | 1.628690 | 0.003332 | 0.003222 | 0.003216 |
| test_add.test | RUN | 0.667952 | 2.448658 | 2.482693 | 0.003638 | 0.003557 | 0.003548 |
| test_add_assign.test | RUN | 0.681646 | 2.607069 | 2.590678 | 0.003673 | 0.003761 | 0.003609 |
| test_callable.test | RUN | 1.150217 | 4.634260 | 5.647421 | 0.005768 | 0.005976 | 0.005962 |
| test_reference.test | RUN | 0.531982 | 1.871568 | 1.760996 | 0.003193 | 0.003675 | 0.003655 |
| test_construct.test | RUN | 2.469208 | 23.959046 | 16.703556 | 0.007352 | 0.007687 | 0.007771 |
| test_relaxed.test | RUN | 0.518799 | 1.316308 | 1.613587 | 0.003391 | 0.003143 | 0.003255 |
| test_assign.test | RUN | 5.549690 | 84.293656 | 59.263775 | 0.010297 | 0.007205 | 0.007384 |
| test_construct_ref.test | RUN | 0.634417 | 3.236398 | 2.670807 | 0.004415 | 0.004101 | 0.004892 |
| test_construct_cref.test | RUN | 0.721534 | 2.964776 | 3.115742 | 0.005218 | 0.005091 | 0.005592 |
| test_any_cast.test | RUN | 0.640171 | 3.005658 | 2.542713 | 0.004513 | 0.003969 | 0.004694 |
| test_binding_of.test | RUN | 0.502271 | 1.147535 | 1.471146 | 0.003132 | 0.003156 | 0.003287 |
| test_typeid_of.test | RUN | 0.542836 | 1.731003 | 1.681401 | 0.003569 | 0.003627 | 0.003238 |
| test_nested.test | RUN | 0.597519 | 1.727943 | 1.921667 | 0.003374 | 0.003257 | 0.002919 |
| test_less.test | RUN | 0.763654 | 3.362017 | 3.116183 | 0.004721 | 0.004733 | 0.004177 |
| test_equal.test | RUN | 0.692517 | 3.089875 | 2.645184 | 0.004347 | 0.004043 | 0.004216 |
| test_negate.test | RUN | 0.504491 | 1.239237 | 1.482310 | 0.003193 | 0.002864 | 0.003265 |
| test_dereference.test | RUN | 0.544146 | 1.515914 | 1.672061 | 0.003637 | 0.003201 | 0.003208 |
| test_subscript.test | RUN | 0.582857 | 1.787248 | 1.888171 | 0.003587 | 0.003295 | 0.003684 |
| test_forward_iterator.test | RUN | 0.693947 | 2.025920 | 1.928526 | 0.003834 | 0.003459 | 0.003042 |
| test_tuple.test | RUN | 0.616343 | 1.995157 | 1.990035 | 0.003670 | 0.003701 | 0.003462 |
| test_stream.test | RUN | 0.799170 | 3.669650 | 3.133225 | 0.004531 | 0.005056 | 0.004899 |
| test_deduced.test | RUN | 0.538878 | 1.376490 | 1.384981 | 0.003042 | 0.002984 | 0.003229 |
| test_same_type.test | RUN | 0.553416 | 1.736951 | 1.740000 | 0.003469 | 0.003247 | 0.003313 |
| test_member.test | RUN | 0.733291 | 3.315569 | 2.949189 | 0.005382 | 0.005021 | 0.005135 |
| test_null.test | RUN | 0.500213 | 1.490976 | 1.438381 | 0.003369 | 0.003326 | 0.003479 |
| test_free.test | RUN | 0.647761 | 2.807539 | 2.032791 | 0.004203 | 0.004098 | 0.004258 |
| test_is_empty.test | RUN | 0.484628 | 1.366645 | 1.343913 | 0.002993 | 0.003288 | 0.002944 |
| test_dynamic_any_cast.test | RUN | 0.918485 | 4.190384 | 4.235743 | 0.005022 | 0.006354 | 0.005242 |
| test_limits.test | RUN | 0.821976 | 2.912806 | 3.021922 | 0.003501 | 0.003637 | 0.003577 |
| test_param.test | COMPILE | 0.330433 | 0.753484 | 0.842536 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.330697 | 0.582376 | 0.764817 | — | — | — |
| test_sfinae.test | COMPILE | 0.330401 | 0.618751 | 0.799997 | — | — | — |
| test_interface_order.test | COMPILE | 0.322750 | 0.639689 | 0.746062 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.040913 | 0.057536 | 0.072889 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.309773 | 0.552254 | 0.757822 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.312648 | 0.600452 | 0.750990 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.312260 | 0.596807 | 0.800550 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.308663 | 0.568152 | 0.802553 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.309942 | 0.603096 | 0.662656 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.313105 | 0.584976 | 0.775740 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.324006 | 0.577468 | 0.792192 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.334792 | 0.601433 | 0.708747 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.303606 | 0.599194 | 0.780022 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.301651 | 0.591284 | 0.796863 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.305709 | 0.620608 | 0.662748 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.307191 | 0.577509 | 0.814040 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.308567 | 0.640214 | 0.829777 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.301559 | 0.643513 | 0.708090 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.317638 | 0.635842 | 0.836786 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.300003 | 0.608091 | 0.771763 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.314301 | 0.579742 | 0.751484 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.312267 | 0.603907 | 0.827114 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.319418 | 0.613250 | 0.705744 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.324321 | 0.547596 | 0.843029 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.305151 | 0.621004 | 0.708241 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.303914 | 0.622461 | 0.834684 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.290320 | 0.538407 | 0.810271 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.282166 | 0.424690 | 0.597025 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.974×† | 0.983×, 0.965× | 0.943× |
| clang | 0.979× | 0.988×, 0.970× | 0.975× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.002313s | 0.002229s | 0.002295s | byte equality observed |
| test_add_assign.test | 9 | 0.002280s | 0.002200s | 0.002192s | byte equality observed |
| test_any_cast.test | 8 | 0.002672s | 0.002615s | 0.002595s | byte equality observed |
| test_assign.test | 4 | 0.007502s | 0.006519s | 0.007008s | byte equality observed |
| test_binding.test | 10 | 0.002162s | 0.002109s | 0.002059s | byte equality observed |
| test_binding_of.test | 10 | 0.002010s | 0.001990s | 0.001924s | byte equality observed |
| test_callable.test | 7 | 0.003438s | 0.003346s | 0.003349s | byte equality observed |
| test_construct.test | 5 | 0.004464s | 0.004398s | 0.004384s | byte equality observed |
| test_construct_cref.test | 6 | 0.003021s | 0.003019s | 0.003087s | byte equality observed |
| test_construct_ref.test | 6 | 0.002748s | 0.002690s | 0.002698s | byte equality observed |
| test_deduced.test | 10 | 0.002012s | 0.001964s | 0.001970s | byte equality observed |
| test_dereference.test | 7 | 0.002152s | 0.002114s | 0.002152s | byte equality observed |
| test_dynamic_any_cast.test | 7 | 0.003088s | 0.003023s | 0.003032s | byte equality observed |
| test_equal.test | 9 | 0.002536s | 0.002491s | 0.002521s | byte equality observed |
| test_forward_iterator.test | 10 | 0.002185s | 0.002115s | 0.002124s | byte equality observed |
| test_free.test | 8 | 0.002548s | 0.002527s | 0.002525s | byte equality observed |
| test_increment.test | 10 | 0.002080s | 0.002036s | 0.002032s | byte equality observed |
| test_is_empty.test | 10 | 0.002087s | 0.002029s | 0.002040s | byte equality observed |
| test_less.test | 8 | 0.002780s | 0.002691s | 0.002701s | byte equality observed |
| test_limits.test | 9 | 0.002252s | 0.002205s | 0.002240s | byte equality observed |
| test_member.test | 7 | 0.003157s | 0.003134s | 0.003098s | byte equality observed |
| test_negate.test | 10 | 0.002015s | 0.001970s | 0.001966s | byte equality observed |
| test_nested.test | 10 | 0.002078s | 0.002054s | 0.001993s | byte equality observed |
| test_null.test | 10 | 0.002183s | 0.002146s | 0.002082s | byte equality observed |
| test_reference.test | 10 | 0.002218s | 0.002214s | 0.002174s | byte equality observed |
| test_relaxed.test | 9 | 0.002044s | 0.002038s | 0.002023s | byte equality observed |
| test_same_type.test | 10 | 0.002164s | 0.002112s | 0.002113s | byte equality observed |
| test_stream.test | 8 | 0.002931s | 0.002957s | 0.002932s | byte equality observed |
| test_subscript.test | 10 | 0.002231s | 0.002172s | 0.002177s | byte equality observed |
| test_tuple.test | 10 | 0.002213s | 0.002154s | 0.002212s | byte equality observed |
| test_typeid_of.test | 9 | 0.002220s | 0.002231s | 0.002213s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
