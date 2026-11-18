# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.590728 | 2.456371 | 2.033759 | 0.003263 | 0.003015 | 0.002966 |
| test_increment.test | RUN | 0.570072 | 1.856906 | 1.764706 | 0.003244 | 0.002871 | 0.002874 |
| test_add.test | RUN | 0.701975 | 2.982212 | 2.585321 | 0.003466 | 0.003112 | 0.002950 |
| test_add_assign.test | RUN | 0.731596 | 3.225776 | 2.756621 | 0.003083 | 0.003144 | 0.003003 |
| test_callable.test | RUN | 1.224922 | 5.453865 | 5.898055 | 0.004513 | 0.004514 | 0.004190 |
| test_reference.test | RUN | 0.554411 | 2.243284 | 1.868687 | 0.002977 | 0.003053 | 0.003080 |
| test_construct.test | RUN | 2.738106 | 25.745631 | 17.856661 | 0.006279 | 0.006478 | 0.005498 |
| test_relaxed.test | RUN | 0.540633 | 1.604125 | 1.647924 | 0.002686 | 0.002895 | 0.002836 |
| test_assign.test | RUN | 7.017152 | 81.419190 | 60.934281 | 0.009564 | 0.005380 | 0.006045 |
| test_construct_ref.test | RUN | 0.695593 | 4.011364 | 2.707658 | 0.003796 | 0.003732 | 0.003423 |
| test_construct_cref.test | RUN | 0.796884 | 3.630991 | 3.362167 | 0.004013 | 0.003957 | 0.003755 |
| test_any_cast.test | RUN | 0.668034 | 3.793428 | 2.660604 | 0.003399 | 0.003510 | 0.003550 |
| test_binding_of.test | RUN | 0.531835 | 1.443710 | 1.564597 | 0.002715 | 0.003195 | 0.002832 |
| test_typeid_of.test | RUN | 0.578892 | 2.127817 | 1.779566 | 0.003073 | 0.002961 | 0.002894 |
| test_nested.test | RUN | 0.601137 | 2.044152 | 2.010293 | 0.003045 | 0.002959 | 0.002877 |
| test_less.test | RUN | 0.796751 | 3.996486 | 3.355033 | 0.003764 | 0.003719 | 0.003433 |
| test_equal.test | RUN | 0.756002 | 3.834376 | 2.715056 | 0.003622 | 0.003365 | 0.003210 |
| test_negate.test | RUN | 0.530235 | 1.573032 | 1.610273 | 0.002874 | 0.002992 | 0.002736 |
| test_dereference.test | RUN | 0.598693 | 2.016403 | 1.859564 | 0.003142 | 0.002960 | 0.002861 |
| test_subscript.test | RUN | 0.614100 | 2.284475 | 1.806417 | 0.003083 | 0.003161 | 0.002955 |
| test_forward_iterator.test | RUN | 0.727058 | 2.587137 | 2.424567 | 0.002892 | 0.003215 | 0.002959 |
| test_tuple.test | RUN | 0.643859 | 2.621607 | 2.025437 | 0.003052 | 0.003096 | 0.002925 |
| test_stream.test | RUN | 0.842063 | 4.167290 | 3.293853 | 0.003973 | 0.003824 | 0.003772 |
| test_deduced.test | RUN | 0.536258 | 1.471921 | 1.600929 | 0.002775 | 0.002710 | 0.002706 |
| test_same_type.test | RUN | 0.592524 | 1.995299 | 1.843031 | 0.003049 | 0.002930 | 0.002764 |
| test_member.test | RUN | 0.822497 | 4.074950 | 3.190612 | 0.004247 | 0.004220 | 0.003949 |
| test_null.test | RUN | 0.542250 | 1.999008 | 1.679168 | 0.003312 | 0.003207 | 0.002923 |
| test_free.test | RUN | 0.687605 | 3.361043 | 2.197373 | 0.003295 | 0.003742 | 0.003265 |
| test_is_empty.test | RUN | 0.525962 | 1.663760 | 1.558785 | 0.002668 | 0.002927 | 0.002724 |
| test_dynamic_any_cast.test | RUN | 1.009034 | 4.814991 | 4.587366 | 0.003913 | 0.004062 | 0.003977 |
| test_limits.test | RUN | 0.870309 | 3.289396 | 2.955514 | 0.003015 | 0.003131 | 0.002938 |
| test_param.test | COMPILE | 0.342945 | 0.942296 | 1.009718 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.344390 | 0.712802 | 0.870861 | — | — | — |
| test_sfinae.test | COMPILE | 0.343205 | 0.738279 | 0.919101 | — | — | — |
| test_interface_order.test | COMPILE | 0.332715 | 0.722349 | 0.814496 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.040652 | 0.065516 | 0.072240 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.323752 | 0.695289 | 0.768286 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.329999 | 0.703904 | 0.809824 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.327832 | 0.696890 | 0.821106 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.322560 | 0.695596 | 0.756660 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.320317 | 0.682339 | 0.827297 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.313273 | 0.690977 | 0.760677 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.324919 | 0.699692 | 0.823040 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.339944 | 0.720375 | 0.868315 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.322576 | 0.686077 | 0.754940 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.325840 | 0.689921 | 0.818649 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.324668 | 0.671981 | 0.815630 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.321468 | 0.696063 | 0.775499 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.329670 | 0.728227 | 0.849432 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.334192 | 0.714002 | 0.855263 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.334331 | 0.729499 | 0.808377 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.327332 | 0.706227 | 0.791816 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.327080 | 0.693690 | 0.847064 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.329151 | 0.709441 | 0.836202 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.331612 | 0.718365 | 0.855793 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.329528 | 0.693835 | 0.859065 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.326458 | 0.706222 | 0.811065 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.304288 | 0.718344 | 0.841961 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.326797 | 0.673866 | 0.712674 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.322587 | 0.492297 | 0.662473 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.978× | 0.994×, 0.962× | 1.047× |
| clang | 0.991× | 0.987×, 0.995× | 1.018× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 8 | 0.001807s | 0.001774s | 0.002160s | byte equality observed |
| test_add_assign.test | 9 | 0.001843s | 0.001752s | 0.002106s | byte equality observed |
| test_any_cast.test | 9 | 0.002069s | 0.001957s | 0.002421s | byte equality observed |
| test_assign.test | 4 | 0.005590s | 0.004797s | 0.006722s | byte equality observed |
| test_binding.test | 10 | 0.001979s | 0.001933s | 0.002038s | byte equality observed |
| test_binding_of.test | 10 | 0.001934s | 0.001807s | 0.001955s | byte equality observed |
| test_callable.test | 8 | 0.002772s | 0.002693s | 0.002831s | byte equality observed |
| test_construct.test | 6 | 0.003753s | 0.003594s | 0.003667s | byte equality observed |
| test_construct_cref.test | 8 | 0.002713s | 0.002665s | 0.002641s | byte equality observed |
| test_construct_ref.test | 8 | 0.002476s | 0.002440s | 0.002407s | byte equality observed |
| test_deduced.test | 9 | 0.002068s | 0.001988s | 0.001986s | byte equality observed |
| test_dereference.test | 10 | 0.002099s | 0.002068s | 0.002055s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002726s | 0.002654s | 0.002592s | byte equality observed |
| test_equal.test | 9 | 0.002390s | 0.002315s | 0.002251s | byte equality observed |
| test_forward_iterator.test | 9 | 0.002097s | 0.002099s | 0.002031s | byte equality observed |
| test_free.test | 9 | 0.002379s | 0.002303s | 0.002307s | byte equality observed |
| test_increment.test | 9 | 0.002040s | 0.002034s | 0.002003s | byte equality observed |
| test_is_empty.test | 10 | 0.002042s | 0.002001s | 0.002016s | byte equality observed |
| test_less.test | 8 | 0.002536s | 0.002435s | 0.002461s | byte equality observed |
| test_limits.test | 9 | 0.002200s | 0.002129s | 0.002091s | byte equality observed |
| test_member.test | 7 | 0.002746s | 0.002659s | 0.002689s | byte equality observed |
| test_negate.test | 10 | 0.002033s | 0.001940s | 0.001965s | byte equality observed |
| test_nested.test | 10 | 0.002078s | 0.001997s | 0.001990s | byte equality observed |
| test_null.test | 10 | 0.002072s | 0.002087s | 0.002047s | byte equality observed |
| test_reference.test | 10 | 0.002140s | 0.002053s | 0.002029s | byte equality observed |
| test_relaxed.test | 10 | 0.002079s | 0.002021s | 0.001948s | byte equality observed |
| test_same_type.test | 10 | 0.002110s | 0.002043s | 0.002034s | byte equality observed |
| test_stream.test | 8 | 0.002580s | 0.002592s | 0.002530s | byte equality observed |
| test_subscript.test | 9 | 0.002133s | 0.002122s | 0.002028s | byte equality observed |
| test_tuple.test | 10 | 0.002157s | 0.002130s | 0.002104s | byte equality observed |
| test_typeid_of.test | 9 | 0.002141s | 0.002126s | 0.002031s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
