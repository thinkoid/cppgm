# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.548441 | 2.195689 | 1.874241 | 0.003457 | 0.003330 | 0.003303 |
| test_increment.test | RUN | 0.533052 | 1.615078 | 1.640885 | 0.003397 | 0.003479 | 0.003306 |
| test_add.test | RUN | 0.737121 | 2.570682 | 2.403631 | 0.003747 | 0.003905 | 0.003716 |
| test_add_assign.test | RUN | 0.696938 | 2.838591 | 2.484264 | 0.003899 | 0.003996 | 0.003685 |
| test_callable.test | RUN | 1.131635 | 4.865865 | 5.507206 | 0.005952 | 0.006247 | 0.005822 |
| test_reference.test | RUN | 0.549553 | 1.936496 | 1.724245 | 0.003482 | 0.003835 | 0.003542 |
| test_construct.test | RUN | 2.537660 | 26.374490 | 15.968319 | 0.007420 | 0.007530 | 0.006425 |
| test_relaxed.test | RUN | 0.538711 | 1.433718 | 1.541579 | 0.003560 | 0.003371 | 0.003125 |
| test_assign.test | RUN | 5.653084 | 87.323520 | 57.092092 | 0.010878 | 0.007291 | 0.007330 |
| test_construct_ref.test | RUN | 0.659502 | 3.374861 | 2.460584 | 0.004975 | 0.004190 | 0.004673 |
| test_construct_cref.test | RUN | 0.719262 | 3.213145 | 3.185710 | 0.005175 | 0.005752 | 0.005411 |
| test_any_cast.test | RUN | 0.630094 | 3.256548 | 2.368285 | 0.004381 | 0.004291 | 0.004320 |
| test_binding_of.test | RUN | 0.501290 | 1.318829 | 1.457403 | 0.003190 | 0.002929 | 0.003112 |
| test_typeid_of.test | RUN | 0.551055 | 1.741452 | 1.672980 | 0.003633 | 0.003771 | 0.003506 |
| test_nested.test | RUN | 0.593327 | 1.774702 | 1.839920 | 0.003549 | 0.003341 | 0.003324 |
| test_less.test | RUN | 0.747072 | 3.399930 | 3.137363 | 0.004483 | 0.004743 | 0.004794 |
| test_equal.test | RUN | 0.709354 | 3.323191 | 2.526207 | 0.004336 | 0.004099 | 0.004214 |
| test_negate.test | RUN | 0.531291 | 1.379879 | 1.473856 | 0.003141 | 0.003054 | 0.002831 |
| test_dereference.test | RUN | 0.567859 | 1.622359 | 1.746048 | 0.003224 | 0.003248 | 0.003535 |
| test_subscript.test | RUN | 0.592964 | 1.800097 | 1.781110 | 0.003632 | 0.003339 | 0.003107 |
| test_forward_iterator.test | RUN | 0.701920 | 2.051539 | 2.306837 | 0.003712 | 0.003302 | 0.003140 |
| test_tuple.test | RUN | 0.608393 | 1.987158 | 1.905356 | 0.003745 | 0.003271 | 0.003650 |
| test_stream.test | RUN | 0.775021 | 3.418170 | 2.740565 | 0.004952 | 0.004495 | 0.004927 |
| test_deduced.test | RUN | 0.520144 | 1.214881 | 1.459124 | 0.002950 | 0.002957 | 0.003219 |
| test_same_type.test | RUN | 0.582385 | 1.687102 | 1.767408 | 0.003565 | 0.003403 | 0.003382 |
| test_member.test | RUN | 0.739102 | 3.210091 | 2.629559 | 0.005140 | 0.005198 | 0.005544 |
| test_null.test | RUN | 0.523713 | 1.543781 | 1.568149 | 0.003574 | 0.003386 | 0.003335 |
| test_free.test | RUN | 0.656133 | 2.650021 | 2.207078 | 0.004151 | 0.004194 | 0.004396 |
| test_is_empty.test | RUN | 0.507895 | 1.464849 | 1.311376 | 0.003443 | 0.003434 | 0.003038 |
| test_dynamic_any_cast.test | RUN | 0.970231 | 4.316745 | 4.147699 | 0.004872 | 0.004934 | 0.004953 |
| test_limits.test | RUN | 0.862739 | 2.773297 | 2.951654 | 0.003151 | 0.003213 | 0.003305 |
| test_param.test | COMPILE | 0.348458 | 0.808747 | 0.887388 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.348002 | 0.659459 | 0.744962 | — | — | — |
| test_sfinae.test | COMPILE | 0.349912 | 0.648061 | 0.776753 | — | — | — |
| test_interface_order.test | COMPILE | 0.329138 | 0.627556 | 0.812413 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.040417 | 0.058898 | 0.064276 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.319444 | 0.574293 | 0.741609 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.318466 | 0.612553 | 0.800046 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.314694 | 0.614548 | 0.807092 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.314374 | 0.584919 | 0.667936 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.315380 | 0.604015 | 0.800088 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.309450 | 0.569340 | 0.661836 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.316770 | 0.554691 | 0.809598 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.334772 | 0.622995 | 0.700601 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.311656 | 0.594269 | 0.779417 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.311006 | 0.552913 | 0.814523 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.313432 | 0.605447 | 0.662479 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.313818 | 0.610512 | 0.809601 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.328379 | 0.581837 | 0.827923 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.325451 | 0.637704 | 0.772061 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.318516 | 0.635407 | 0.832370 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.316743 | 0.579122 | 0.776584 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.315463 | 0.624959 | 0.705545 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.317105 | 0.619143 | 0.821430 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.314868 | 0.602660 | 0.839223 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.316781 | 0.624337 | 0.714195 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.313865 | 0.625458 | 0.834028 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.312635 | 0.568946 | 0.827360 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.310639 | 0.627831 | 0.722705 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.300972 | 0.607013 | 0.538850 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.959×† | 0.964×, 0.954× | 0.920× |
| clang | 0.976×† | 1.058×, 0.894× | 1.090× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.002003s | 0.001937s | 0.002112s | byte equality observed |
| test_add_assign.test | 9 | 0.001970s | 0.001876s | 0.002040s | byte equality observed |
| test_any_cast.test | 8 | 0.002246s | 0.002132s | 0.002342s | byte equality observed |
| test_assign.test | 4 | 0.006081s | 0.005139s | 0.006018s | byte equality observed |
| test_binding.test | 10 | 0.001857s | 0.001763s | 0.001944s | byte equality observed |
| test_binding_of.test | 10 | 0.001702s | 0.001663s | 0.001785s | byte equality observed |
| test_callable.test | 7 | 0.002915s | 0.002801s | 0.003064s | byte equality observed |
| test_construct.test | 5 | 0.003797s | 0.003632s | 0.004022s | byte equality observed |
| test_construct_cref.test | 7 | 0.002662s | 0.002561s | 0.002767s | byte equality observed |
| test_construct_ref.test | 8 | 0.002389s | 0.002285s | 0.002384s | byte equality observed |
| test_deduced.test | 10 | 0.001697s | 0.001664s | 0.001769s | byte equality observed |
| test_dereference.test | 9 | 0.001840s | 0.001774s | 0.001924s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002620s | 0.002513s | 0.002618s | byte equality observed |
| test_equal.test | 8 | 0.002153s | 0.002082s | 0.002261s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001865s | 0.001777s | 0.001908s | byte equality observed |
| test_free.test | 8 | 0.002189s | 0.002109s | 0.002253s | byte equality observed |
| test_increment.test | 10 | 0.001784s | 0.001729s | 0.001845s | byte equality observed |
| test_is_empty.test | 10 | 0.001803s | 0.001719s | 0.001806s | byte equality observed |
| test_less.test | 8 | 0.002347s | 0.002335s | 0.002471s | byte equality observed |
| test_limits.test | 9 | 0.001924s | 0.001902s | 0.002005s | byte equality observed |
| test_member.test | 7 | 0.002687s | 0.002635s | 0.002694s | byte equality observed |
| test_negate.test | 10 | 0.001732s | 0.001663s | 0.001785s | byte equality observed |
| test_nested.test | 10 | 0.001796s | 0.001716s | 0.001891s | byte equality observed |
| test_null.test | 10 | 0.001807s | 0.001783s | 0.001877s | byte equality observed |
| test_reference.test | 10 | 0.001873s | 0.001851s | 0.001905s | byte equality observed |
| test_relaxed.test | 10 | 0.001799s | 0.001675s | 0.001727s | byte equality observed |
| test_same_type.test | 10 | 0.001829s | 0.001791s | 0.001954s | byte equality observed |
| test_stream.test | 7 | 0.002487s | 0.002416s | 0.002669s | byte equality observed |
| test_subscript.test | 10 | 0.001909s | 0.001809s | 0.002008s | byte equality observed |
| test_tuple.test | 9 | 0.001914s | 0.001821s | 0.001973s | byte equality observed |
| test_typeid_of.test | 10 | 0.001928s | 0.001858s | 0.002070s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
