# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.677111 | 2.767468 | 2.802283 | 0.004101 | 0.004140 | 0.003989 |
| test_increment.test | RUN | 0.697408 | 2.067635 | 2.425781 | 0.003643 | 0.003761 | 0.003846 |
| test_add.test | RUN | 0.849721 | 3.273117 | 3.531799 | 0.004118 | 0.004481 | 0.004383 |
| test_add_assign.test | RUN | 0.869218 | 3.519674 | 3.722791 | 0.004126 | 0.004653 | 0.004283 |
| test_callable.test | RUN | 1.415757 | 5.897717 | 7.716618 | 0.006771 | 0.007570 | 0.007513 |
| test_reference.test | RUN | 0.680188 | 2.462893 | 2.561295 | 0.003891 | 0.004284 | 0.004133 |
| test_construct.test | RUN | 3.030790 | 28.095312 | 22.173436 | 0.009292 | 0.008873 | 0.009847 |
| test_relaxed.test | RUN | 0.641386 | 1.733620 | 2.301831 | 0.003468 | 0.003883 | 0.003816 |
| test_assign.test | RUN | 7.455586 | 87.857462 | 71.281836 | 0.013607 | 0.007901 | 0.008503 |
| test_construct_ref.test | RUN | 0.805088 | 4.454599 | 3.620321 | 0.005313 | 0.004705 | 0.005666 |
| test_construct_cref.test | RUN | 0.919672 | 3.950516 | 4.414008 | 0.005985 | 0.006579 | 0.006744 |
| test_any_cast.test | RUN | 0.771317 | 4.092728 | 3.417669 | 0.005383 | 0.004968 | 0.005043 |
| test_binding_of.test | RUN | 0.671333 | 1.691193 | 2.075590 | 0.003581 | 0.003974 | 0.003892 |
| test_typeid_of.test | RUN | 0.667275 | 2.167041 | 2.407549 | 0.004377 | 0.004104 | 0.004315 |
| test_nested.test | RUN | 0.713726 | 2.253652 | 2.786149 | 0.003762 | 0.003703 | 0.004137 |
| test_less.test | RUN | 0.935494 | 4.436213 | 4.506760 | 0.005482 | 0.005218 | 0.005317 |
| test_equal.test | RUN | 0.845759 | 4.118328 | 3.750092 | 0.004959 | 0.004468 | 0.005087 |
| test_negate.test | RUN | 0.617931 | 1.664005 | 2.139281 | 0.003784 | 0.003784 | 0.003771 |
| test_dereference.test | RUN | 0.687113 | 2.278372 | 2.666875 | 0.004035 | 0.004007 | 0.004182 |
| test_subscript.test | RUN | 0.712529 | 2.625264 | 2.518891 | 0.004090 | 0.004474 | 0.003829 |
| test_forward_iterator.test | RUN | 0.831571 | 2.811095 | 3.043984 | 0.003998 | 0.003775 | 0.003834 |
| test_tuple.test | RUN | 0.724115 | 2.869162 | 2.935542 | 0.004032 | 0.003713 | 0.004166 |
| test_stream.test | RUN | 0.957842 | 4.346740 | 4.272064 | 0.006125 | 0.005930 | 0.005871 |
| test_deduced.test | RUN | 0.642021 | 1.607524 | 2.236055 | 0.003726 | 0.003432 | 0.003236 |
| test_same_type.test | RUN | 0.688503 | 2.247702 | 2.424495 | 0.003897 | 0.004210 | 0.003158 |
| test_member.test | RUN | 0.904235 | 4.354345 | 4.271236 | 0.005975 | 0.006203 | 0.007162 |
| test_null.test | RUN | 0.633307 | 2.231689 | 2.368020 | 0.004114 | 0.004435 | 0.003932 |
| test_free.test | RUN | 0.789663 | 3.829984 | 2.861672 | 0.004718 | 0.004798 | 0.004987 |
| test_is_empty.test | RUN | 0.615697 | 1.872689 | 2.003576 | 0.004095 | 0.003603 | 0.003537 |
| test_dynamic_any_cast.test | RUN | 1.148255 | 5.328512 | 6.065989 | 0.006202 | 0.005706 | 0.006392 |
| test_limits.test | RUN | 1.059245 | 3.751027 | 4.316035 | 0.004285 | 0.003964 | 0.004382 |
| test_param.test | COMPILE | 0.420915 | 0.990870 | 1.326468 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.417893 | 0.785717 | 1.204987 | — | — | — |
| test_sfinae.test | COMPILE | 0.415313 | 0.829878 | 1.138495 | — | — | — |
| test_interface_order.test | COMPILE | 0.406487 | 0.804135 | 1.107106 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.049677 | 0.072185 | 0.095516 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.403812 | 0.769791 | 1.173499 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.410625 | 0.798298 | 1.240045 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.411709 | 0.707690 | 1.050208 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.386938 | 0.803633 | 1.207049 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.392921 | 0.823773 | 1.209811 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.387073 | 0.715983 | 1.089051 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.407982 | 0.805244 | 1.212211 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.408570 | 0.863579 | 1.283890 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.395872 | 0.729842 | 1.013803 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.405395 | 0.781906 | 1.203577 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.415754 | 0.804715 | 1.066661 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.391590 | 0.796233 | 1.213150 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.412762 | 0.847235 | 1.244068 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.403453 | 0.868607 | 1.157885 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.420583 | 0.811390 | 1.258208 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.397209 | 0.794443 | 1.020844 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.408070 | 0.802102 | 1.193953 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.414012 | 0.821753 | 1.222267 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.421958 | 0.839735 | 1.265291 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.403360 | 0.753014 | 1.080525 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.411105 | 0.831492 | 1.260489 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.410536 | 0.851975 | 1.255153 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.368587 | 0.766389 | 1.073579 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.293439 | 0.657640 | 1.058605 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968× | 0.964×, 0.971× | 1.005× |
| clang | 0.964× | 0.964×, 0.965× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 6 | 0.002914s | 0.002887s | 0.002881s | byte equality observed |
| test_add_assign.test | 6 | 0.002891s | 0.002848s | 0.002909s | byte equality observed |
| test_any_cast.test | 7 | 0.003373s | 0.003184s | 0.003254s | byte equality observed |
| test_assign.test | 3 | 0.010119s | 0.008320s | 0.009162s | byte equality observed |
| test_binding.test | 9 | 0.002712s | 0.002677s | 0.002677s | byte equality observed |
| test_binding_of.test | 9 | 0.002526s | 0.002481s | 0.002468s | byte equality observed |
| test_callable.test | 6 | 0.004309s | 0.004288s | 0.004260s | byte equality observed |
| test_construct.test | 5 | 0.005659s | 0.005611s | 0.005556s | byte equality observed |
| test_construct_cref.test | 7 | 0.003897s | 0.003797s | 0.003883s | byte equality observed |
| test_construct_ref.test | 7 | 0.003487s | 0.003364s | 0.003458s | byte equality observed |
| test_deduced.test | 9 | 0.002566s | 0.002500s | 0.002507s | byte equality observed |
| test_dereference.test | 8 | 0.002729s | 0.002641s | 0.002699s | byte equality observed |
| test_dynamic_any_cast.test | 6 | 0.003943s | 0.003867s | 0.003854s | byte equality observed |
| test_equal.test | 7 | 0.003244s | 0.003164s | 0.003136s | byte equality observed |
| test_forward_iterator.test | 8 | 0.002707s | 0.002609s | 0.002663s | byte equality observed |
| test_free.test | 7 | 0.003245s | 0.003123s | 0.003232s | byte equality observed |
| test_increment.test | 8 | 0.002637s | 0.002591s | 0.002543s | byte equality observed |
| test_is_empty.test | 9 | 0.002683s | 0.002497s | 0.002559s | byte equality observed |
| test_less.test | 7 | 0.003541s | 0.003435s | 0.003387s | byte equality observed |
| test_limits.test | 8 | 0.002880s | 0.002833s | 0.002814s | byte equality observed |
| test_member.test | 6 | 0.004016s | 0.004014s | 0.003969s | byte equality observed |
| test_negate.test | 8 | 0.002543s | 0.002470s | 0.002485s | byte equality observed |
| test_nested.test | 9 | 0.002674s | 0.002533s | 0.002579s | byte equality observed |
| test_null.test | 8 | 0.002757s | 0.002636s | 0.002652s | byte equality observed |
| test_reference.test | 8 | 0.002814s | 0.002801s | 0.002725s | byte equality observed |
| test_relaxed.test | 9 | 0.002595s | 0.002494s | 0.002537s | byte equality observed |
| test_same_type.test | 9 | 0.002743s | 0.002656s | 0.002717s | byte equality observed |
| test_stream.test | 7 | 0.003773s | 0.003654s | 0.003610s | byte equality observed |
| test_subscript.test | 8 | 0.002825s | 0.002742s | 0.002763s | byte equality observed |
| test_tuple.test | 8 | 0.002902s | 0.002790s | 0.002853s | byte equality observed |
| test_typeid_of.test | 8 | 0.002860s | 0.002778s | 0.002809s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
