# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.701857 | 2.869508 | 2.873526 | 0.004486 | 0.004364 | 0.003906 |
| test_increment.test | RUN | 0.683105 | 2.126007 | 2.458062 | 0.004076 | 0.003724 | 0.003703 |
| test_add.test | RUN | 0.905972 | 3.373329 | 3.643600 | 0.004487 | 0.004523 | 0.004531 |
| test_add_assign.test | RUN | 0.885794 | 3.641048 | 3.710289 | 0.004255 | 0.004551 | 0.004689 |
| test_callable.test | RUN | 1.482732 | 6.104110 | 7.880902 | 0.007182 | 0.007967 | 0.008160 |
| test_reference.test | RUN | 0.682924 | 2.529741 | 2.609148 | 0.003964 | 0.004514 | 0.004453 |
| test_construct.test | RUN | 3.086834 | 29.931881 | 23.010588 | 0.010169 | 0.008862 | 0.010501 |
| test_relaxed.test | RUN | 0.687000 | 1.774832 | 2.380019 | 0.003757 | 0.004078 | 0.003721 |
| test_assign.test | RUN | 7.587203 | 97.010068 | 76.673218 | 0.013851 | 0.008440 | 0.008644 |
| test_construct_ref.test | RUN | 0.845904 | 4.582768 | 3.568719 | 0.005561 | 0.004840 | 0.005885 |
| test_construct_cref.test | RUN | 0.939818 | 4.043148 | 4.562340 | 0.006149 | 0.006793 | 0.006391 |
| test_any_cast.test | RUN | 0.786463 | 4.084024 | 3.651824 | 0.005404 | 0.005214 | 0.005780 |
| test_binding_of.test | RUN | 0.634257 | 1.716745 | 2.266240 | 0.003445 | 0.003620 | 0.003773 |
| test_typeid_of.test | RUN | 0.723353 | 2.379987 | 2.530886 | 0.004440 | 0.004271 | 0.004550 |
| test_nested.test | RUN | 0.736199 | 2.392463 | 2.698398 | 0.003766 | 0.004004 | 0.003961 |
| test_less.test | RUN | 0.951626 | 4.524250 | 4.702096 | 0.005390 | 0.005695 | 0.005920 |
| test_equal.test | RUN | 0.901506 | 4.175344 | 3.726993 | 0.005235 | 0.004847 | 0.005058 |
| test_negate.test | RUN | 0.659945 | 1.702392 | 2.383065 | 0.003668 | 0.003270 | 0.003280 |
| test_dereference.test | RUN | 0.737590 | 2.167609 | 2.596799 | 0.004028 | 0.003933 | 0.003808 |
| test_subscript.test | RUN | 0.761884 | 2.381866 | 2.412350 | 0.004206 | 0.004019 | 0.003767 |
| test_forward_iterator.test | RUN | 0.857558 | 2.820975 | 3.370954 | 0.003878 | 0.003848 | 0.003869 |
| test_tuple.test | RUN | 0.751643 | 2.698629 | 2.992943 | 0.004329 | 0.003826 | 0.004231 |
| test_stream.test | RUN | 0.983158 | 4.519149 | 4.152254 | 0.005691 | 0.005231 | 0.005827 |
| test_deduced.test | RUN | 0.640384 | 1.589746 | 2.226811 | 0.003557 | 0.003559 | 0.003952 |
| test_same_type.test | RUN | 0.731865 | 2.190710 | 2.697822 | 0.004138 | 0.003643 | 0.003346 |
| test_member.test | RUN | 0.968412 | 4.418526 | 4.432006 | 0.006289 | 0.005750 | 0.007231 |
| test_null.test | RUN | 0.672702 | 2.233963 | 2.424861 | 0.003665 | 0.003593 | 0.004037 |
| test_free.test | RUN | 0.790738 | 3.878261 | 2.837390 | 0.004833 | 0.004445 | 0.005045 |
| test_is_empty.test | RUN | 0.625330 | 1.910609 | 2.243258 | 0.004122 | 0.003601 | 0.003355 |
| test_dynamic_any_cast.test | RUN | 1.205452 | 5.350190 | 6.043738 | 0.005907 | 0.006135 | 0.005593 |
| test_limits.test | RUN | 1.115036 | 3.772487 | 4.404846 | 0.003780 | 0.004401 | 0.004646 |
| test_param.test | COMPILE | 0.469102 | 1.070809 | 1.312184 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.430079 | 0.794934 | 1.134242 | — | — | — |
| test_sfinae.test | COMPILE | 0.434849 | 0.803328 | 1.254246 | — | — | — |
| test_interface_order.test | COMPILE | 0.418136 | 0.846228 | 1.300607 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.051553 | 0.081273 | 0.094355 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.410934 | 0.819579 | 1.259036 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.411040 | 0.844125 | 1.068915 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.401218 | 0.830978 | 1.235773 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.404561 | 0.825646 | 1.255134 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.399403 | 0.773804 | 1.044839 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.384952 | 0.801069 | 1.198466 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.410345 | 0.846923 | 1.240402 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.435189 | 0.799312 | 1.202651 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.400914 | 0.784342 | 1.209031 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.399058 | 0.835698 | 1.218397 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.409860 | 0.714733 | 1.049955 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.396517 | 0.814538 | 1.254610 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.404024 | 0.802691 | 1.283439 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.403709 | 0.894808 | 1.157694 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.404764 | 0.882543 | 1.284541 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.400615 | 0.778270 | 1.204091 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.398520 | 0.862845 | 1.096642 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.397405 | 0.836217 | 1.260266 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.407164 | 0.812960 | 1.214363 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.408038 | 0.853066 | 1.293305 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.413166 | 0.806138 | 1.283313 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.409105 | 0.843763 | 1.073022 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.394700 | 0.785153 | 1.287674 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.262605 | 0.599406 | 0.829561 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.956× | 0.964×, 0.949× | 0.981× |
| clang | 0.962× | 0.963×, 0.960× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 8 | 0.002934s | 0.002868s | 0.002806s | byte equality observed |
| test_add_assign.test | 8 | 0.002910s | 0.002876s | 0.002785s | byte equality observed |
| test_any_cast.test | 7 | 0.003434s | 0.003229s | 0.003251s | byte equality observed |
| test_assign.test | 3 | 0.010104s | 0.008497s | 0.009118s | byte equality observed |
| test_binding.test | 9 | 0.002717s | 0.002729s | 0.002618s | byte equality observed |
| test_binding_of.test | 9 | 0.002572s | 0.002545s | 0.002452s | byte equality observed |
| test_callable.test | 6 | 0.004360s | 0.004329s | 0.004235s | byte equality observed |
| test_construct.test | 5 | 0.005704s | 0.005581s | 0.005459s | byte equality observed |
| test_construct_cref.test | 6 | 0.004037s | 0.003801s | 0.003794s | byte equality observed |
| test_construct_ref.test | 7 | 0.003495s | 0.003472s | 0.003443s | byte equality observed |
| test_deduced.test | 9 | 0.002570s | 0.002527s | 0.002429s | byte equality observed |
| test_dereference.test | 8 | 0.002758s | 0.002642s | 0.002643s | byte equality observed |
| test_dynamic_any_cast.test | 6 | 0.003936s | 0.003737s | 0.003728s | byte equality observed |
| test_equal.test | 7 | 0.003265s | 0.003204s | 0.003121s | byte equality observed |
| test_forward_iterator.test | 8 | 0.002791s | 0.002680s | 0.002637s | byte equality observed |
| test_free.test | 7 | 0.003260s | 0.003195s | 0.003108s | byte equality observed |
| test_increment.test | 8 | 0.002658s | 0.002652s | 0.002527s | byte equality observed |
| test_is_empty.test | 9 | 0.002653s | 0.002576s | 0.002508s | byte equality observed |
| test_less.test | 6 | 0.003546s | 0.003574s | 0.003392s | byte equality observed |
| test_limits.test | 7 | 0.002883s | 0.002912s | 0.002791s | byte equality observed |
| test_member.test | 6 | 0.004018s | 0.004006s | 0.003881s | byte equality observed |
| test_negate.test | 8 | 0.002569s | 0.002471s | 0.002503s | byte equality observed |
| test_nested.test | 9 | 0.002645s | 0.002598s | 0.002551s | byte equality observed |
| test_null.test | 8 | 0.002744s | 0.002653s | 0.002568s | byte equality observed |
| test_reference.test | 9 | 0.002833s | 0.002786s | 0.002676s | byte equality observed |
| test_relaxed.test | 9 | 0.002649s | 0.002575s | 0.002519s | byte equality observed |
| test_same_type.test | 8 | 0.002762s | 0.002757s | 0.002649s | byte equality observed |
| test_stream.test | 7 | 0.003715s | 0.003726s | 0.003608s | byte equality observed |
| test_subscript.test | 8 | 0.002836s | 0.002781s | 0.002688s | byte equality observed |
| test_tuple.test | 8 | 0.002817s | 0.002811s | 0.002773s | byte equality observed |
| test_typeid_of.test | 7 | 0.002838s | 0.002790s | 0.002677s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
