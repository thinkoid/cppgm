# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.544644 | 2.182652 | 1.901268 | 0.003553 | 0.003625 | 0.003264 |
| test_increment.test | RUN | 0.505232 | 1.624990 | 1.647010 | 0.003495 | 0.003504 | 0.003214 |
| test_add.test | RUN | 0.702240 | 2.604293 | 2.412920 | 0.003792 | 0.003920 | 0.003785 |
| test_add_assign.test | RUN | 0.660927 | 2.683217 | 2.536322 | 0.003651 | 0.003697 | 0.003768 |
| test_callable.test | RUN | 1.141724 | 4.849247 | 5.501721 | 0.005315 | 0.006057 | 0.005864 |
| test_reference.test | RUN | 0.575196 | 1.922055 | 1.705928 | 0.003489 | 0.003761 | 0.003628 |
| test_construct.test | RUN | 2.509705 | 25.724449 | 15.585470 | 0.007946 | 0.007613 | 0.006410 |
| test_relaxed.test | RUN | 0.498434 | 1.396740 | 1.521443 | 0.003301 | 0.003452 | 0.003162 |
| test_assign.test | RUN | 5.826621 | 85.762436 | 57.321145 | 0.010371 | 0.007116 | 0.007433 |
| test_construct_ref.test | RUN | 0.628382 | 3.280347 | 2.550982 | 0.004580 | 0.004622 | 0.004788 |
| test_construct_cref.test | RUN | 0.707005 | 3.170255 | 3.019352 | 0.004836 | 0.005295 | 0.005377 |
| test_any_cast.test | RUN | 0.612310 | 3.193834 | 2.498174 | 0.004313 | 0.004638 | 0.004381 |
| test_binding_of.test | RUN | 0.501411 | 1.242199 | 1.470634 | 0.003329 | 0.003185 | 0.003156 |
| test_typeid_of.test | RUN | 0.537454 | 1.884831 | 1.634378 | 0.003677 | 0.003225 | 0.003518 |
| test_nested.test | RUN | 0.597412 | 1.798855 | 1.960421 | 0.003332 | 0.003630 | 0.002799 |
| test_less.test | RUN | 0.752513 | 3.454083 | 3.025185 | 0.004741 | 0.004677 | 0.004659 |
| test_equal.test | RUN | 0.681282 | 3.375124 | 2.579356 | 0.003697 | 0.004469 | 0.004445 |
| test_negate.test | RUN | 0.506854 | 1.365799 | 1.500667 | 0.002864 | 0.003211 | 0.003294 |
| test_dereference.test | RUN | 0.565005 | 1.685981 | 1.820912 | 0.003639 | 0.003723 | 0.003413 |
| test_subscript.test | RUN | 0.574965 | 1.957877 | 1.913983 | 0.003460 | 0.003758 | 0.003777 |
| test_forward_iterator.test | RUN | 0.674804 | 2.293889 | 2.316907 | 0.003555 | 0.003595 | 0.003371 |
| test_tuple.test | RUN | 0.606005 | 2.253880 | 1.653501 | 0.003668 | 0.003779 | 0.003706 |
| test_stream.test | RUN | 0.761008 | 3.611597 | 2.903407 | 0.004714 | 0.004995 | 0.004244 |
| test_deduced.test | RUN | 0.507708 | 1.357444 | 1.485185 | 0.003297 | 0.003143 | 0.003141 |
| test_same_type.test | RUN | 0.564621 | 1.779217 | 1.845204 | 0.003567 | 0.003579 | 0.003457 |
| test_member.test | RUN | 0.738844 | 3.425121 | 3.075458 | 0.005301 | 0.005219 | 0.004918 |
| test_null.test | RUN | 0.528097 | 1.700108 | 1.328283 | 0.003597 | 0.003643 | 0.002982 |
| test_free.test | RUN | 0.619446 | 2.984552 | 2.283437 | 0.004030 | 0.003858 | 0.004394 |
| test_is_empty.test | RUN | 0.486534 | 1.532108 | 1.263468 | 0.003102 | 0.003382 | 0.002880 |
| test_dynamic_any_cast.test | RUN | 0.965270 | 4.234264 | 4.323012 | 0.004803 | 0.005306 | 0.004301 |
| test_limits.test | RUN | 0.881732 | 2.982102 | 3.058411 | 0.003327 | 0.003537 | 0.003560 |
| test_param.test | COMPILE | 0.364807 | 0.765372 | 0.889774 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.361817 | 0.574020 | 0.750767 | — | — | — |
| test_sfinae.test | COMPILE | 0.322142 | 0.610182 | 0.803851 | — | — | — |
| test_interface_order.test | COMPILE | 0.322079 | 0.608494 | 0.746917 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.040301 | 0.058345 | 0.070007 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.313405 | 0.570868 | 0.772347 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.308911 | 0.595664 | 0.739119 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.310430 | 0.605685 | 0.798502 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.314762 | 0.553777 | 0.799200 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.312967 | 0.612033 | 0.672236 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.302182 | 0.601671 | 0.771263 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.316878 | 0.575144 | 0.678621 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.327804 | 0.647252 | 0.854402 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.309584 | 0.600557 | 0.779240 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.315989 | 0.550617 | 0.669680 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.312300 | 0.598851 | 0.804440 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.322408 | 0.612997 | 0.682622 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.317351 | 0.616690 | 0.827768 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.320899 | 0.646198 | 0.839585 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.319260 | 0.658009 | 0.771076 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.320304 | 0.582497 | 0.784203 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.329340 | 0.626453 | 0.839497 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.319397 | 0.634506 | 0.702955 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.323086 | 0.585067 | 0.844792 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.330323 | 0.634873 | 0.851473 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.334932 | 0.635822 | 0.748129 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.325063 | 0.571376 | 0.835573 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.299848 | 0.624186 | 0.734469 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.250185 | 0.573055 | 0.709513 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.914× | 0.904×, 0.924× | 0.951× |
| clang | 0.926× | 0.906×, 0.946× | 1.030× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 8 | 0.002128s | 0.001965s | 0.002101s | byte equality observed |
| test_add_assign.test | 10 | 0.002224s | 0.001907s | 0.001935s | byte equality observed |
| test_any_cast.test | 8 | 0.002562s | 0.002175s | 0.002354s | byte equality observed |
| test_assign.test | 4 | 0.007382s | 0.005113s | 0.006098s | byte equality observed |
| test_binding.test | 10 | 0.002151s | 0.001774s | 0.001937s | byte equality observed |
| test_binding_of.test | 10 | 0.001920s | 0.001692s | 0.001798s | byte equality observed |
| test_callable.test | 7 | 0.003345s | 0.002859s | 0.003015s | byte equality observed |
| test_construct.test | 5 | 0.004311s | 0.003623s | 0.003940s | byte equality observed |
| test_construct_cref.test | 7 | 0.003072s | 0.002607s | 0.002714s | byte equality observed |
| test_construct_ref.test | 8 | 0.002738s | 0.002422s | 0.002392s | byte equality observed |
| test_deduced.test | 10 | 0.001988s | 0.001730s | 0.001830s | byte equality observed |
| test_dereference.test | 10 | 0.002142s | 0.001920s | 0.001904s | byte equality observed |
| test_dynamic_any_cast.test | 7 | 0.002980s | 0.002769s | 0.002561s | byte equality observed |
| test_equal.test | 9 | 0.002392s | 0.002309s | 0.002270s | byte equality observed |
| test_forward_iterator.test | 10 | 0.002113s | 0.001835s | 0.001927s | byte equality observed |
| test_free.test | 8 | 0.002536s | 0.002316s | 0.002322s | byte equality observed |
| test_increment.test | 9 | 0.002042s | 0.001854s | 0.001874s | byte equality observed |
| test_is_empty.test | 7 | 0.002054s | 0.001760s | 0.001811s | byte equality observed |
| test_less.test | 7 | 0.002693s | 0.002470s | 0.002494s | byte equality observed |
| test_limits.test | 9 | 0.002220s | 0.002007s | 0.002024s | byte equality observed |
| test_member.test | 7 | 0.003171s | 0.002760s | 0.002836s | byte equality observed |
| test_negate.test | 10 | 0.001963s | 0.001823s | 0.001831s | byte equality observed |
| test_nested.test | 10 | 0.002069s | 0.001903s | 0.001909s | byte equality observed |
| test_null.test | 9 | 0.002118s | 0.001919s | 0.001914s | byte equality observed |
| test_reference.test | 10 | 0.002183s | 0.002000s | 0.001998s | byte equality observed |
| test_relaxed.test | 10 | 0.002063s | 0.001790s | 0.001892s | byte equality observed |
| test_same_type.test | 10 | 0.002124s | 0.001980s | 0.001942s | byte equality observed |
| test_stream.test | 8 | 0.002911s | 0.002570s | 0.002631s | byte equality observed |
| test_subscript.test | 9 | 0.002204s | 0.001848s | 0.001950s | byte equality observed |
| test_tuple.test | 9 | 0.002165s | 0.002017s | 0.002008s | byte equality observed |
| test_typeid_of.test | 9 | 0.002245s | 0.001981s | 0.001982s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
