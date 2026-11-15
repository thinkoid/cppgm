# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.698830 | 2.799785 | 2.811661 | 0.003605 | 0.003982 | 0.003990 |
| test_increment.test | RUN | 0.706262 | 2.111563 | 2.466413 | 0.003509 | 0.003652 | 0.003979 |
| test_add.test | RUN | 0.843931 | 3.358199 | 3.594973 | 0.003931 | 0.004654 | 0.004097 |
| test_add_assign.test | RUN | 0.858647 | 3.554831 | 3.713983 | 0.003986 | 0.004713 | 0.004428 |
| test_callable.test | RUN | 1.456834 | 6.095925 | 7.829975 | 0.007246 | 0.007880 | 0.007925 |
| test_reference.test | RUN | 0.691863 | 2.509531 | 2.642905 | 0.004241 | 0.004403 | 0.004642 |
| test_construct.test | RUN | 3.235151 | 29.343204 | 21.877001 | 0.009200 | 0.009788 | 0.009677 |
| test_relaxed.test | RUN | 0.702149 | 1.772013 | 2.306446 | 0.003617 | 0.003602 | 0.003763 |
| test_assign.test | RUN | 7.486743 | 87.808048 | 70.534076 | 0.015634 | 0.008564 | 0.008713 |
| test_construct_ref.test | RUN | 0.815260 | 4.383455 | 3.601560 | 0.005733 | 0.005547 | 0.005619 |
| test_construct_cref.test | RUN | 0.894622 | 4.033165 | 4.600617 | 0.006387 | 0.006800 | 0.006724 |
| test_any_cast.test | RUN | 0.837193 | 4.152423 | 3.504017 | 0.005592 | 0.005112 | 0.004713 |
| test_binding_of.test | RUN | 0.621898 | 1.604886 | 2.220650 | 0.003987 | 0.003748 | 0.003712 |
| test_typeid_of.test | RUN | 0.690453 | 2.377536 | 2.461896 | 0.004006 | 0.004107 | 0.004063 |
| test_nested.test | RUN | 0.739712 | 2.239802 | 2.825185 | 0.003795 | 0.003762 | 0.003944 |
| test_less.test | RUN | 0.938006 | 4.545314 | 4.336245 | 0.004889 | 0.005924 | 0.005885 |
| test_equal.test | RUN | 0.905199 | 4.194009 | 3.686422 | 0.005015 | 0.004871 | 0.004523 |
| test_negate.test | RUN | 0.645834 | 1.687501 | 2.354721 | 0.003858 | 0.003507 | 0.003359 |
| test_dereference.test | RUN | 0.737546 | 2.081649 | 2.545938 | 0.003853 | 0.003574 | 0.003643 |
| test_subscript.test | RUN | 0.740944 | 2.393835 | 2.383750 | 0.004122 | 0.003624 | 0.003692 |
| test_forward_iterator.test | RUN | 0.885925 | 2.795311 | 3.311501 | 0.003813 | 0.003859 | 0.004044 |
| test_tuple.test | RUN | 0.774984 | 2.803544 | 2.913675 | 0.004095 | 0.003728 | 0.003861 |
| test_stream.test | RUN | 0.971008 | 4.672462 | 4.077978 | 0.005596 | 0.005744 | 0.006404 |
| test_deduced.test | RUN | 0.645239 | 1.602491 | 2.231067 | 0.003655 | 0.003769 | 0.003264 |
| test_same_type.test | RUN | 0.715816 | 2.336807 | 2.695202 | 0.004174 | 0.003744 | 0.003999 |
| test_member.test | RUN | 0.953417 | 4.594684 | 4.310191 | 0.006553 | 0.006462 | 0.006631 |
| test_null.test | RUN | 0.645663 | 2.289726 | 2.055236 | 0.004656 | 0.004067 | 0.003526 |
| test_free.test | RUN | 0.810991 | 3.622627 | 3.288627 | 0.005225 | 0.004813 | 0.004654 |
| test_is_empty.test | RUN | 0.619527 | 1.867510 | 2.034838 | 0.004135 | 0.003813 | 0.003603 |
| test_dynamic_any_cast.test | RUN | 1.154448 | 5.262641 | 6.030964 | 0.005570 | 0.005936 | 0.006614 |
| test_limits.test | RUN | 1.078741 | 3.761366 | 4.329537 | 0.004099 | 0.004516 | 0.003788 |
| test_param.test | COMPILE | 0.441087 | 1.006809 | 1.355767 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.419426 | 0.807654 | 1.235118 | — | — | — |
| test_sfinae.test | COMPILE | 0.434227 | 0.845785 | 1.149185 | — | — | — |
| test_interface_order.test | COMPILE | 0.412408 | 0.815942 | 1.225659 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.052746 | 0.080983 | 0.089224 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.399508 | 0.813330 | 1.092395 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.406380 | 0.822201 | 1.154989 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.401309 | 0.797697 | 1.222080 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.397010 | 0.705229 | 1.125387 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.398161 | 0.831125 | 1.268744 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.382147 | 0.740372 | 1.188360 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.401564 | 0.809684 | 1.119587 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.419847 | 0.848736 | 1.279555 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.394951 | 0.794430 | 1.078933 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.390387 | 0.772583 | 1.162723 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.400482 | 0.823383 | 1.192311 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.392502 | 0.814904 | 1.220075 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.397781 | 0.832370 | 1.177680 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.398759 | 0.868271 | 1.255288 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.404416 | 0.870328 | 1.102604 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.390831 | 0.784904 | 1.187405 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.401839 | 0.858731 | 1.261937 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.404372 | 0.772825 | 1.091175 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.410736 | 0.842903 | 1.247985 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.399917 | 0.858541 | 1.120162 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.405318 | 0.777926 | 1.270749 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.407854 | 0.835449 | 1.246791 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.373149 | 0.700835 | 1.148015 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.259731 | 0.677010 | 0.758460 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.971× | 0.979×, 0.962× | 0.985× |
| clang | 0.966× | 0.977×, 0.954× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 8 | 0.002923s | 0.002866s | 0.002856s | byte equality observed |
| test_add_assign.test | 8 | 0.002948s | 0.002855s | 0.002847s | byte equality observed |
| test_any_cast.test | 7 | 0.003412s | 0.003403s | 0.003335s | byte equality observed |
| test_assign.test | 3 | 0.010201s | 0.008504s | 0.009426s | byte equality observed |
| test_binding.test | 9 | 0.002729s | 0.002662s | 0.002689s | byte equality observed |
| test_binding_of.test | 8 | 0.002590s | 0.002532s | 0.002389s | byte equality observed |
| test_callable.test | 6 | 0.004312s | 0.004377s | 0.004333s | byte equality observed |
| test_construct.test | 5 | 0.005656s | 0.005600s | 0.005616s | byte equality observed |
| test_construct_cref.test | 6 | 0.003978s | 0.003904s | 0.003910s | byte equality observed |
| test_construct_ref.test | 7 | 0.003590s | 0.003447s | 0.003505s | byte equality observed |
| test_deduced.test | 8 | 0.002590s | 0.002555s | 0.002465s | byte equality observed |
| test_dereference.test | 8 | 0.002742s | 0.002714s | 0.002628s | byte equality observed |
| test_dynamic_any_cast.test | 6 | 0.003923s | 0.003908s | 0.003826s | byte equality observed |
| test_equal.test | 7 | 0.003265s | 0.003201s | 0.003210s | byte equality observed |
| test_forward_iterator.test | 8 | 0.002743s | 0.002701s | 0.002670s | byte equality observed |
| test_free.test | 7 | 0.003276s | 0.003210s | 0.003211s | byte equality observed |
| test_increment.test | 8 | 0.002681s | 0.002621s | 0.002558s | byte equality observed |
| test_is_empty.test | 8 | 0.002663s | 0.002633s | 0.002579s | byte equality observed |
| test_less.test | 7 | 0.003556s | 0.003549s | 0.003445s | byte equality observed |
| test_limits.test | 8 | 0.002928s | 0.002809s | 0.002844s | byte equality observed |
| test_member.test | 6 | 0.004058s | 0.004024s | 0.003900s | byte equality observed |
| test_negate.test | 9 | 0.002547s | 0.002480s | 0.002567s | byte equality observed |
| test_nested.test | 9 | 0.002686s | 0.002628s | 0.002509s | byte equality observed |
| test_null.test | 8 | 0.002753s | 0.002678s | 0.002643s | byte equality observed |
| test_reference.test | 8 | 0.002841s | 0.002761s | 0.002769s | byte equality observed |
| test_relaxed.test | 9 | 0.002641s | 0.002572s | 0.002548s | byte equality observed |
| test_same_type.test | 8 | 0.002769s | 0.002766s | 0.002692s | byte equality observed |
| test_stream.test | 6 | 0.003810s | 0.003680s | 0.003665s | byte equality observed |
| test_subscript.test | 8 | 0.002849s | 0.002774s | 0.002756s | byte equality observed |
| test_tuple.test | 8 | 0.002836s | 0.002803s | 0.002828s | byte equality observed |
| test_typeid_of.test | 7 | 0.002883s | 0.002812s | 0.002744s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
