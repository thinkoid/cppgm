# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.436643 | 1.639517 | 1.319216 | 0.003352 | 0.003077 | 0.002700 |
| test_increment.test | RUN | 0.458437 | 1.177375 | 1.075503 | 0.003204 | 0.002996 | 0.002732 |
| test_add.test | RUN | 0.557903 | 1.867187 | 1.698370 | 0.003132 | 0.003370 | 0.003376 |
| test_add_assign.test | RUN | 0.566367 | 2.043006 | 1.757081 | 0.003384 | 0.003363 | 0.002886 |
| test_callable.test | RUN | 0.943768 | 3.700988 | 3.841274 | 0.004891 | 0.005023 | 0.004753 |
| test_reference.test | RUN | 0.437857 | 1.454895 | 1.214227 | 0.002719 | 0.003254 | 0.003072 |
| test_construct.test | RUN | 1.908771 | 20.636794 | 11.850993 | 0.006413 | 0.006344 | 0.006186 |
| test_relaxed.test | RUN | 0.406994 | 1.101149 | 1.011833 | 0.002898 | 0.002919 | 0.002712 |
| test_assign.test | RUN | 4.520562 | 64.267816 | 42.454162 | 0.008827 | 0.006085 | 0.006247 |
| test_construct_ref.test | RUN | 0.498308 | 2.453275 | 1.684548 | 0.004136 | 0.004102 | 0.004227 |
| test_construct_cref.test | RUN | 0.557422 | 2.364124 | 2.339793 | 0.004475 | 0.004711 | 0.004538 |
| test_any_cast.test | RUN | 0.467674 | 2.471988 | 1.713500 | 0.003670 | 0.003995 | 0.003917 |
| test_binding_of.test | RUN | 0.374642 | 1.024272 | 0.989000 | 0.003039 | 0.002936 | 0.002866 |
| test_typeid_of.test | RUN | 0.431622 | 1.383169 | 1.145790 | 0.003153 | 0.003059 | 0.002998 |
| test_nested.test | RUN | 0.481457 | 1.463086 | 1.342329 | 0.003231 | 0.003118 | 0.002828 |
| test_less.test | RUN | 0.628169 | 2.644308 | 2.161430 | 0.004190 | 0.004193 | 0.003743 |
| test_equal.test | RUN | 0.549523 | 2.498699 | 1.741474 | 0.003980 | 0.003717 | 0.003601 |
| test_negate.test | RUN | 0.408242 | 1.035846 | 1.032554 | 0.002667 | 0.003033 | 0.002710 |
| test_dereference.test | RUN | 0.441307 | 1.322185 | 1.241166 | 0.002991 | 0.003024 | 0.003045 |
| test_subscript.test | RUN | 0.483371 | 1.428881 | 1.311316 | 0.003411 | 0.003212 | 0.002963 |
| test_forward_iterator.test | RUN | 0.558169 | 1.645818 | 1.476138 | 0.003255 | 0.003287 | 0.002633 |
| test_tuple.test | RUN | 0.473340 | 1.618886 | 1.226945 | 0.003187 | 0.003177 | 0.002899 |
| test_stream.test | RUN | 0.595759 | 2.740841 | 2.218084 | 0.004492 | 0.003932 | 0.003970 |
| test_deduced.test | RUN | 0.395762 | 0.973732 | 1.070647 | 0.002654 | 0.002790 | 0.002730 |
| test_same_type.test | RUN | 0.439983 | 1.337709 | 1.200369 | 0.002983 | 0.003191 | 0.002766 |
| test_member.test | RUN | 0.574301 | 2.633648 | 1.845695 | 0.004964 | 0.004650 | 0.004018 |
| test_null.test | RUN | 0.386756 | 1.222807 | 1.062876 | 0.003204 | 0.003234 | 0.002919 |
| test_free.test | RUN | 0.508627 | 2.119535 | 1.553653 | 0.003628 | 0.003602 | 0.003461 |
| test_is_empty.test | RUN | 0.387193 | 1.118879 | 1.034958 | 0.002958 | 0.003024 | 0.003130 |
| test_dynamic_any_cast.test | RUN | 0.758863 | 3.391362 | 3.003227 | 0.004428 | 0.004278 | 0.004008 |
| test_limits.test | RUN | 0.697448 | 2.360197 | 2.183077 | 0.003128 | 0.002944 | 0.003192 |
| test_param.test | COMPILE | 0.256966 | 0.604485 | 0.696071 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.261331 | 0.479096 | 0.613444 | — | — | — |
| test_sfinae.test | COMPILE | 0.272414 | 0.481740 | 0.608647 | — | — | — |
| test_interface_order.test | COMPILE | 0.265215 | 0.466708 | 0.621432 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.033306 | 0.047684 | 0.052960 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.248567 | 0.445068 | 0.516412 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.252567 | 0.478620 | 0.521554 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.250119 | 0.482437 | 0.515703 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.256273 | 0.459051 | 0.463001 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.249052 | 0.465284 | 0.517279 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.244254 | 0.461278 | 0.496218 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.255038 | 0.468678 | 0.469067 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.272778 | 0.487258 | 0.561544 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.259341 | 0.468778 | 0.511728 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.253540 | 0.468587 | 0.502596 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.254612 | 0.466608 | 0.524299 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.255202 | 0.488882 | 0.462645 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.238563 | 0.495360 | 0.538762 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.244124 | 0.489725 | 0.486977 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.241067 | 0.494480 | 0.550272 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.239265 | 0.462251 | 0.499628 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.236536 | 0.471191 | 0.481933 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.232562 | 0.486285 | 0.547749 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.244514 | 0.448983 | 0.543717 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.241433 | 0.458622 | 0.513846 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.236241 | 0.469970 | 0.553387 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.235248 | 0.434786 | 0.496651 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.216594 | 0.476097 | 0.576197 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.214262 | 0.447498 | 0.515665 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.938×† | 0.903×, 0.973× | 1.008× |
| clang | 0.959× | 0.974×, 0.944× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001665s | 0.001612s | 0.001659s | byte equality observed |
| test_add_assign.test | 10 | 0.001649s | 0.001609s | 0.001616s | byte equality observed |
| test_any_cast.test | 9 | 0.001861s | 0.001822s | 0.001839s | byte equality observed |
| test_assign.test | 4 | 0.004696s | 0.004058s | 0.004472s | byte equality observed |
| test_binding.test | 10 | 0.001536s | 0.001514s | 0.001507s | byte equality observed |
| test_binding_of.test | 10 | 0.001496s | 0.001399s | 0.001386s | byte equality observed |
| test_callable.test | 8 | 0.002419s | 0.002367s | 0.002329s | byte equality observed |
| test_construct.test | 6 | 0.003236s | 0.003006s | 0.003076s | byte equality observed |
| test_construct_cref.test | 8 | 0.002182s | 0.002150s | 0.002114s | byte equality observed |
| test_construct_ref.test | 9 | 0.001953s | 0.001924s | 0.001903s | byte equality observed |
| test_deduced.test | 10 | 0.001471s | 0.001454s | 0.001399s | byte equality observed |
| test_dereference.test | 10 | 0.001540s | 0.001505s | 0.001533s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002168s | 0.002150s | 0.002127s | byte equality observed |
| test_equal.test | 9 | 0.001816s | 0.001770s | 0.001701s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001600s | 0.001506s | 0.001472s | byte equality observed |
| test_free.test | 9 | 0.001830s | 0.001800s | 0.001727s | byte equality observed |
| test_increment.test | 10 | 0.001523s | 0.001467s | 0.001414s | byte equality observed |
| test_is_empty.test | 10 | 0.001517s | 0.001458s | 0.001419s | byte equality observed |
| test_less.test | 9 | 0.001957s | 0.001902s | 0.001901s | byte equality observed |
| test_limits.test | 10 | 0.001623s | 0.001591s | 0.001553s | byte equality observed |
| test_member.test | 8 | 0.002255s | 0.002203s | 0.002151s | byte equality observed |
| test_negate.test | 10 | 0.001448s | 0.001432s | 0.001393s | byte equality observed |
| test_nested.test | 10 | 0.001495s | 0.001425s | 0.001422s | byte equality observed |
| test_null.test | 8 | 0.001530s | 0.001505s | 0.001490s | byte equality observed |
| test_reference.test | 10 | 0.001582s | 0.001553s | 0.001510s | byte equality observed |
| test_relaxed.test | 10 | 0.001492s | 0.001437s | 0.001402s | byte equality observed |
| test_same_type.test | 10 | 0.001552s | 0.001522s | 0.001461s | byte equality observed |
| test_stream.test | 9 | 0.002089s | 0.002037s | 0.001987s | byte equality observed |
| test_subscript.test | 10 | 0.001587s | 0.001566s | 0.001530s | byte equality observed |
| test_tuple.test | 10 | 0.001636s | 0.001547s | 0.001564s | byte equality observed |
| test_typeid_of.test | 10 | 0.001589s | 0.001558s | 0.001579s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
