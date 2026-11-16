# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.424767 | 1.742369 | 1.509042 | 0.002238 | 0.002106 | 0.002093 |
| test_increment.test | RUN | 0.417911 | 1.334592 | 1.263551 | 0.002084 | 0.002036 | 0.002056 |
| test_add.test | RUN | 0.520447 | 2.164198 | 1.949547 | 0.002249 | 0.002016 | 0.002422 |
| test_add_assign.test | RUN | 0.538033 | 2.322093 | 2.026890 | 0.002370 | 0.002204 | 0.002062 |
| test_callable.test | RUN | 0.909600 | 3.986905 | 4.401420 | 0.003063 | 0.003135 | 0.002905 |
| test_reference.test | RUN | 0.411078 | 1.623868 | 1.333975 | 0.002075 | 0.002338 | 0.002075 |
| test_construct.test | RUN | 2.029305 | 18.916088 | 13.570097 | 0.004118 | 0.004103 | 0.004100 |
| test_relaxed.test | RUN | 0.404444 | 1.126589 | 1.195025 | 0.001930 | 0.002311 | 0.001993 |
| test_assign.test | RUN | 5.273269 | 64.707154 | 46.803422 | 0.006240 | 0.004048 | 0.004252 |
| test_construct_ref.test | RUN | 0.499390 | 2.799868 | 1.936736 | 0.002831 | 0.002719 | 0.002567 |
| test_construct_cref.test | RUN | 0.592116 | 2.639186 | 2.553954 | 0.002781 | 0.003096 | 0.002902 |
| test_any_cast.test | RUN | 0.498689 | 2.755763 | 1.904389 | 0.002899 | 0.002564 | 0.002663 |
| test_binding_of.test | RUN | 0.375453 | 1.042440 | 1.122208 | 0.001968 | 0.001961 | 0.001930 |
| test_typeid_of.test | RUN | 0.416854 | 1.453905 | 1.326883 | 0.002651 | 0.002077 | 0.002339 |
| test_nested.test | RUN | 0.448551 | 1.496381 | 1.487057 | 0.002244 | 0.002252 | 0.002148 |
| test_less.test | RUN | 0.613712 | 2.892515 | 2.473217 | 0.002675 | 0.002721 | 0.002708 |
| test_equal.test | RUN | 0.547761 | 2.821214 | 2.020444 | 0.002542 | 0.002630 | 0.002451 |
| test_negate.test | RUN | 0.405851 | 1.107542 | 1.173334 | 0.002154 | 0.002128 | 0.002152 |
| test_dereference.test | RUN | 0.427117 | 1.483135 | 1.311125 | 0.002307 | 0.002266 | 0.001995 |
| test_subscript.test | RUN | 0.452477 | 1.642702 | 1.459534 | 0.002565 | 0.002162 | 0.002175 |
| test_forward_iterator.test | RUN | 0.555072 | 1.832087 | 1.617697 | 0.002320 | 0.002256 | 0.002225 |
| test_tuple.test | RUN | 0.461451 | 1.880862 | 1.533177 | 0.002198 | 0.002495 | 0.002319 |
| test_stream.test | RUN | 0.619425 | 3.083330 | 2.454270 | 0.002905 | 0.002654 | 0.002768 |
| test_deduced.test | RUN | 0.413279 | 1.099718 | 1.121864 | 0.002099 | 0.002245 | 0.002057 |
| test_same_type.test | RUN | 0.438254 | 1.499855 | 1.432911 | 0.002231 | 0.002191 | 0.002171 |
| test_member.test | RUN | 0.577746 | 2.996891 | 2.244011 | 0.003145 | 0.002641 | 0.002773 |
| test_null.test | RUN | 0.427497 | 1.441760 | 1.229885 | 0.002266 | 0.002312 | 0.002022 |
| test_free.test | RUN | 0.500720 | 2.430698 | 1.745063 | 0.002596 | 0.002559 | 0.002348 |
| test_is_empty.test | RUN | 0.372562 | 1.197889 | 1.121564 | 0.002115 | 0.002179 | 0.002241 |
| test_dynamic_any_cast.test | RUN | 0.736349 | 3.628206 | 3.401887 | 0.002623 | 0.002712 | 0.002794 |
| test_limits.test | RUN | 0.657738 | 2.495141 | 2.316972 | 0.001814 | 0.002432 | 0.002343 |
| test_param.test | COMPILE | 0.260034 | 0.668331 | 0.713758 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.249759 | 0.513313 | 0.618212 | — | — | — |
| test_sfinae.test | COMPILE | 0.246571 | 0.514779 | 0.642201 | — | — | — |
| test_interface_order.test | COMPILE | 0.245866 | 0.498764 | 0.639811 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028934 | 0.047352 | 0.052836 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.238181 | 0.498376 | 0.593464 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.238601 | 0.494039 | 0.573157 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.235531 | 0.489454 | 0.590844 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.236657 | 0.489722 | 0.606440 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.232984 | 0.488952 | 0.568926 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.225641 | 0.481079 | 0.581153 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.230248 | 0.495155 | 0.591367 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.246790 | 0.512892 | 0.613391 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.236942 | 0.484190 | 0.573173 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.236943 | 0.490911 | 0.576919 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.228387 | 0.464012 | 0.588313 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.228643 | 0.488873 | 0.597473 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.236929 | 0.525042 | 0.610235 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.236024 | 0.527169 | 0.607359 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.238629 | 0.531247 | 0.616812 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.227565 | 0.499482 | 0.563420 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.238797 | 0.502066 | 0.619980 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.236597 | 0.500214 | 0.627333 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.236780 | 0.507478 | 0.628362 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.234967 | 0.512596 | 0.619394 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.241752 | 0.496113 | 0.618941 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.239915 | 0.510719 | 0.590758 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.197533 | 0.503487 | 0.606000 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.182708 | 0.378322 | 0.516238 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.967× | 0.968×, 0.966× | 1.000× |
| clang | 0.959× | 0.959×, 0.959× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001381s | 0.001332s | 0.001318s | byte equality observed |
| test_add_assign.test | 10 | 0.001368s | 0.001330s | 0.001335s | byte equality observed |
| test_any_cast.test | 10 | 0.001475s | 0.001428s | 0.001437s | byte equality observed |
| test_assign.test | 5 | 0.003906s | 0.003244s | 0.003661s | byte equality observed |
| test_binding.test | 10 | 0.001285s | 0.001288s | 0.001235s | byte equality observed |
| test_binding_of.test | 10 | 0.001251s | 0.001248s | 0.001221s | byte equality observed |
| test_callable.test | 10 | 0.001732s | 0.001689s | 0.001647s | byte equality observed |
| test_construct.test | 8 | 0.002218s | 0.002176s | 0.002123s | byte equality observed |
| test_construct_cref.test | 10 | 0.001589s | 0.001566s | 0.001556s | byte equality observed |
| test_construct_ref.test | 10 | 0.001459s | 0.001487s | 0.001410s | byte equality observed |
| test_deduced.test | 10 | 0.001268s | 0.001226s | 0.001200s | byte equality observed |
| test_dereference.test | 10 | 0.001286s | 0.001251s | 0.001256s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001605s | 0.001592s | 0.001569s | byte equality observed |
| test_equal.test | 10 | 0.001464s | 0.001392s | 0.001356s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001341s | 0.001266s | 0.001261s | byte equality observed |
| test_free.test | 10 | 0.001421s | 0.001364s | 0.001344s | byte equality observed |
| test_increment.test | 10 | 0.001291s | 0.001285s | 0.001248s | byte equality observed |
| test_is_empty.test | 10 | 0.001264s | 0.001249s | 0.001230s | byte equality observed |
| test_less.test | 10 | 0.001483s | 0.001497s | 0.001427s | byte equality observed |
| test_limits.test | 10 | 0.001388s | 0.001311s | 0.001300s | byte equality observed |
| test_member.test | 10 | 0.001602s | 0.001591s | 0.001545s | byte equality observed |
| test_negate.test | 9 | 0.001274s | 0.001250s | 0.001231s | byte equality observed |
| test_nested.test | 10 | 0.001288s | 0.001239s | 0.001238s | byte equality observed |
| test_null.test | 10 | 0.001307s | 0.001261s | 0.001242s | byte equality observed |
| test_reference.test | 10 | 0.001326s | 0.001294s | 0.001254s | byte equality observed |
| test_relaxed.test | 10 | 0.001291s | 0.001257s | 0.001233s | byte equality observed |
| test_same_type.test | 10 | 0.001290s | 0.001277s | 0.001249s | byte equality observed |
| test_stream.test | 8 | 0.001549s | 0.001528s | 0.001507s | byte equality observed |
| test_subscript.test | 10 | 0.001345s | 0.001285s | 0.001281s | byte equality observed |
| test_tuple.test | 10 | 0.001308s | 0.001280s | 0.001264s | byte equality observed |
| test_typeid_of.test | 10 | 0.001339s | 0.001334s | 0.001269s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
