# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.696604 | 2.784235 | 2.799559 | 0.004185 | 0.003794 | 0.004010 |
| test_increment.test | RUN | 0.660286 | 2.114731 | 2.442022 | 0.003951 | 0.003766 | 0.003813 |
| test_add.test | RUN | 0.835993 | 3.267259 | 3.481922 | 0.004012 | 0.004632 | 0.004460 |
| test_add_assign.test | RUN | 0.924555 | 3.552767 | 3.690781 | 0.004520 | 0.004392 | 0.004192 |
| test_callable.test | RUN | 1.410983 | 5.966841 | 7.707798 | 0.006647 | 0.007430 | 0.007438 |
| test_reference.test | RUN | 0.694412 | 2.442381 | 2.556576 | 0.003730 | 0.004456 | 0.004173 |
| test_construct.test | RUN | 3.119254 | 27.937455 | 21.925820 | 0.009722 | 0.009185 | 0.008614 |
| test_relaxed.test | RUN | 0.654765 | 1.789748 | 2.247106 | 0.003736 | 0.003657 | 0.003581 |
| test_assign.test | RUN | 7.539474 | 86.715845 | 70.291377 | 0.014279 | 0.008005 | 0.008683 |
| test_construct_ref.test | RUN | 0.808872 | 4.376174 | 3.543999 | 0.005555 | 0.004763 | 0.005814 |
| test_construct_cref.test | RUN | 0.917504 | 3.945191 | 4.506552 | 0.006284 | 0.006651 | 0.007372 |
| test_any_cast.test | RUN | 0.794686 | 4.282032 | 3.540667 | 0.005022 | 0.004833 | 0.005361 |
| test_binding_of.test | RUN | 0.651813 | 1.650903 | 2.185699 | 0.003446 | 0.003731 | 0.003399 |
| test_typeid_of.test | RUN | 0.707305 | 2.331857 | 2.446025 | 0.004172 | 0.003961 | 0.004498 |
| test_nested.test | RUN | 0.725238 | 2.288762 | 2.673438 | 0.003996 | 0.003216 | 0.003878 |
| test_less.test | RUN | 0.956693 | 4.505825 | 4.279876 | 0.005395 | 0.005357 | 0.005758 |
| test_equal.test | RUN | 0.890087 | 4.254850 | 3.725556 | 0.005076 | 0.004788 | 0.005334 |
| test_negate.test | RUN | 0.636510 | 1.748969 | 2.172065 | 0.003735 | 0.003593 | 0.003807 |
| test_dereference.test | RUN | 0.702392 | 2.105774 | 2.620443 | 0.004072 | 0.003639 | 0.004166 |
| test_subscript.test | RUN | 0.737126 | 2.386912 | 2.456300 | 0.003970 | 0.003819 | 0.003889 |
| test_forward_iterator.test | RUN | 0.858654 | 2.873383 | 3.298888 | 0.003877 | 0.003740 | 0.003976 |
| test_tuple.test | RUN | 0.767918 | 2.886648 | 2.900568 | 0.004033 | 0.003793 | 0.003844 |
| test_stream.test | RUN | 0.984418 | 4.392271 | 4.005645 | 0.005750 | 0.005529 | 0.005902 |
| test_deduced.test | RUN | 0.641948 | 1.535865 | 2.220401 | 0.003392 | 0.003211 | 0.003374 |
| test_same_type.test | RUN | 0.732853 | 2.223681 | 2.669695 | 0.003770 | 0.003780 | 0.004155 |
| test_member.test | RUN | 0.923268 | 4.353107 | 4.289598 | 0.005988 | 0.006168 | 0.006014 |
| test_null.test | RUN | 0.654688 | 2.217970 | 1.991836 | 0.003916 | 0.003902 | 0.003586 |
| test_free.test | RUN | 0.798860 | 3.803098 | 3.241924 | 0.004767 | 0.004853 | 0.004560 |
| test_is_empty.test | RUN | 0.621946 | 1.864816 | 2.017842 | 0.004048 | 0.003573 | 0.003812 |
| test_dynamic_any_cast.test | RUN | 1.177305 | 5.120179 | 5.775999 | 0.005481 | 0.006735 | 0.005498 |
| test_limits.test | RUN | 1.071773 | 3.691497 | 4.307246 | 0.003882 | 0.004213 | 0.004223 |
| test_param.test | COMPILE | 0.439759 | 1.112697 | 1.312628 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.427552 | 0.820383 | 1.159446 | — | — | — |
| test_sfinae.test | COMPILE | 0.423693 | 0.804697 | 1.127827 | — | — | — |
| test_interface_order.test | COMPILE | 0.406584 | 0.817616 | 1.218101 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.051220 | 0.075709 | 0.095149 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.396743 | 0.743016 | 1.178188 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.406900 | 0.795211 | 1.228444 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.390789 | 0.703628 | 1.200202 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.400740 | 0.803919 | 1.078776 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.388604 | 0.806232 | 1.066540 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.377625 | 0.731491 | 1.172026 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.400440 | 0.807670 | 1.220151 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.425170 | 0.838357 | 1.098963 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.389066 | 0.758011 | 1.194875 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.385547 | 0.794502 | 1.202729 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.415271 | 0.803264 | 1.138353 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.400934 | 0.772490 | 1.216854 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.408341 | 0.851042 | 1.247274 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.406909 | 0.856995 | 1.061667 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.423390 | 0.798165 | 1.248058 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.411016 | 0.814089 | 1.160144 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.402291 | 0.844834 | 1.067070 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.411260 | 0.760444 | 1.261827 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.408981 | 0.825837 | 1.235232 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.402085 | 0.854151 | 1.080780 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.403920 | 0.779009 | 1.266010 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.408819 | 0.819742 | 1.255829 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.385960 | 0.790336 | 1.058616 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.261874 | 0.632770 | 0.704965 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.964× | 0.964×, 0.964× | 0.992× |
| clang | 0.957× | 0.962×, 0.953× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 7 | 0.002898s | 0.002879s | 0.002806s | byte equality observed |
| test_add_assign.test | 8 | 0.002815s | 0.002852s | 0.002786s | byte equality observed |
| test_any_cast.test | 7 | 0.003344s | 0.003252s | 0.003251s | byte equality observed |
| test_assign.test | 3 | 0.010082s | 0.008466s | 0.009187s | byte equality observed |
| test_binding.test | 9 | 0.002694s | 0.002641s | 0.002607s | byte equality observed |
| test_binding_of.test | 9 | 0.002521s | 0.002407s | 0.002443s | byte equality observed |
| test_callable.test | 6 | 0.004404s | 0.004262s | 0.004049s | byte equality observed |
| test_construct.test | 5 | 0.005594s | 0.005376s | 0.005392s | byte equality observed |
| test_construct_cref.test | 6 | 0.003972s | 0.003896s | 0.003756s | byte equality observed |
| test_construct_ref.test | 7 | 0.003490s | 0.003497s | 0.003350s | byte equality observed |
| test_deduced.test | 9 | 0.002553s | 0.002481s | 0.002481s | byte equality observed |
| test_dereference.test | 8 | 0.002704s | 0.002655s | 0.002571s | byte equality observed |
| test_dynamic_any_cast.test | 6 | 0.003830s | 0.003776s | 0.003801s | byte equality observed |
| test_equal.test | 7 | 0.003246s | 0.003234s | 0.003174s | byte equality observed |
| test_forward_iterator.test | 8 | 0.002723s | 0.002742s | 0.002579s | byte equality observed |
| test_free.test | 7 | 0.003239s | 0.003203s | 0.003188s | byte equality observed |
| test_increment.test | 9 | 0.002665s | 0.002570s | 0.002541s | byte equality observed |
| test_is_empty.test | 8 | 0.002642s | 0.002630s | 0.002477s | byte equality observed |
| test_less.test | 7 | 0.003517s | 0.003440s | 0.003430s | byte equality observed |
| test_limits.test | 8 | 0.002899s | 0.002829s | 0.002741s | byte equality observed |
| test_member.test | 6 | 0.004071s | 0.003876s | 0.003887s | byte equality observed |
| test_negate.test | 9 | 0.002562s | 0.002517s | 0.002468s | byte equality observed |
| test_nested.test | 9 | 0.002626s | 0.002592s | 0.002521s | byte equality observed |
| test_null.test | 8 | 0.002753s | 0.002633s | 0.002564s | byte equality observed |
| test_reference.test | 8 | 0.002786s | 0.002752s | 0.002716s | byte equality observed |
| test_relaxed.test | 9 | 0.002561s | 0.002534s | 0.002558s | byte equality observed |
| test_same_type.test | 9 | 0.002746s | 0.002695s | 0.002630s | byte equality observed |
| test_stream.test | 6 | 0.003774s | 0.003679s | 0.003593s | byte equality observed |
| test_subscript.test | 8 | 0.002842s | 0.002713s | 0.002746s | byte equality observed |
| test_tuple.test | 8 | 0.002838s | 0.002771s | 0.002776s | byte equality observed |
| test_typeid_of.test | 7 | 0.002841s | 0.002736s | 0.002750s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
