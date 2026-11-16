# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.700391 | 2.793002 | 2.757433 | 0.003923 | 0.004345 | 0.003894 |
| test_increment.test | RUN | 0.663671 | 2.089435 | 2.417544 | 0.003878 | 0.003950 | 0.003829 |
| test_add.test | RUN | 0.841468 | 3.292226 | 3.573244 | 0.004216 | 0.004191 | 0.004218 |
| test_add_assign.test | RUN | 0.920340 | 3.545898 | 3.744713 | 0.003973 | 0.004416 | 0.004326 |
| test_callable.test | RUN | 1.478405 | 6.010022 | 7.772769 | 0.007049 | 0.007567 | 0.007517 |
| test_reference.test | RUN | 0.671921 | 2.483859 | 2.582641 | 0.003704 | 0.004317 | 0.004253 |
| test_construct.test | RUN | 2.995218 | 28.122314 | 22.281021 | 0.009234 | 0.008862 | 0.009773 |
| test_relaxed.test | RUN | 0.643428 | 1.782515 | 2.311549 | 0.003676 | 0.003775 | 0.003756 |
| test_assign.test | RUN | 7.410641 | 88.351337 | 70.671894 | 0.014424 | 0.007939 | 0.008406 |
| test_construct_ref.test | RUN | 0.816512 | 4.267095 | 3.602998 | 0.005615 | 0.005590 | 0.005841 |
| test_construct_cref.test | RUN | 0.909276 | 3.999213 | 4.641988 | 0.006413 | 0.005957 | 0.006810 |
| test_any_cast.test | RUN | 0.772500 | 4.228853 | 3.489168 | 0.005103 | 0.005102 | 0.004649 |
| test_binding_of.test | RUN | 0.669396 | 1.679329 | 2.239725 | 0.003575 | 0.003852 | 0.003138 |
| test_typeid_of.test | RUN | 0.686018 | 2.360105 | 2.446994 | 0.004266 | 0.003977 | 0.003911 |
| test_nested.test | RUN | 0.763305 | 2.284112 | 2.895507 | 0.003788 | 0.003831 | 0.003779 |
| test_less.test | RUN | 0.962386 | 4.468133 | 4.486506 | 0.005334 | 0.005353 | 0.005739 |
| test_equal.test | RUN | 0.895822 | 4.276018 | 3.726998 | 0.004778 | 0.005108 | 0.005054 |
| test_negate.test | RUN | 0.634130 | 1.736899 | 2.336169 | 0.003575 | 0.003550 | 0.003234 |
| test_dereference.test | RUN | 0.703663 | 2.297044 | 2.490032 | 0.003993 | 0.003945 | 0.003518 |
| test_subscript.test | RUN | 0.756237 | 2.576187 | 2.671149 | 0.004032 | 0.003980 | 0.004200 |
| test_forward_iterator.test | RUN | 0.891346 | 2.887296 | 3.078756 | 0.003791 | 0.004035 | 0.003879 |
| test_tuple.test | RUN | 0.796626 | 2.941796 | 2.927798 | 0.004041 | 0.003903 | 0.003692 |
| test_stream.test | RUN | 0.979571 | 4.628132 | 3.996558 | 0.005980 | 0.005925 | 0.005442 |
| test_deduced.test | RUN | 0.644322 | 1.794425 | 2.229324 | 0.003770 | 0.003668 | 0.003609 |
| test_same_type.test | RUN | 0.719756 | 2.277310 | 2.695093 | 0.003762 | 0.004102 | 0.003768 |
| test_member.test | RUN | 0.946921 | 4.572288 | 4.260729 | 0.005976 | 0.006563 | 0.007164 |
| test_null.test | RUN | 0.668794 | 2.087403 | 2.047911 | 0.003449 | 0.003649 | 0.003873 |
| test_free.test | RUN | 0.812511 | 3.647270 | 3.254852 | 0.005049 | 0.004336 | 0.005016 |
| test_is_empty.test | RUN | 0.612244 | 1.798196 | 2.022629 | 0.003859 | 0.003618 | 0.003545 |
| test_dynamic_any_cast.test | RUN | 1.177295 | 5.119653 | 5.453040 | 0.005629 | 0.005643 | 0.006631 |
| test_limits.test | RUN | 1.086752 | 3.686704 | 4.252098 | 0.003910 | 0.004112 | 0.004376 |
| test_param.test | COMPILE | 0.439619 | 1.094184 | 1.476097 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.421910 | 0.819630 | 1.311129 | — | — | — |
| test_sfinae.test | COMPILE | 0.419123 | 0.858832 | 1.277813 | — | — | — |
| test_interface_order.test | COMPILE | 0.403401 | 0.820276 | 1.246284 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.051592 | 0.069255 | 0.084164 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.394856 | 0.708335 | 1.128348 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.398891 | 0.787827 | 1.213288 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.406346 | 0.741622 | 1.207918 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.389821 | 0.797861 | 1.134011 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.389708 | 0.801208 | 1.152992 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.390054 | 0.750903 | 1.144889 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.411673 | 0.796348 | 1.188708 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.410521 | 0.834806 | 1.127126 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.391084 | 0.759049 | 1.173715 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.399336 | 0.787407 | 1.209255 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.397145 | 0.801602 | 1.125820 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.393422 | 0.773593 | 1.200078 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.396339 | 0.844903 | 1.240591 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.398616 | 0.859613 | 1.087415 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.404236 | 0.774585 | 1.265296 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.393895 | 0.802995 | 1.167951 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.394174 | 0.830701 | 1.069423 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.395859 | 0.770430 | 1.256559 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.403736 | 0.811115 | 1.078959 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.400078 | 0.839419 | 1.264680 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.401102 | 0.803787 | 1.220189 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.391082 | 0.815037 | 1.167254 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.359110 | 0.777324 | 1.257961 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.256716 | 0.616784 | 0.914145 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.964× | 0.964×, 0.965× | 0.998× |
| clang | 0.963× | 0.965×, 0.961× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 8 | 0.002892s | 0.002791s | 0.002818s | byte equality observed |
| test_add_assign.test | 8 | 0.002856s | 0.002765s | 0.002789s | byte equality observed |
| test_any_cast.test | 7 | 0.003370s | 0.003301s | 0.003222s | byte equality observed |
| test_assign.test | 3 | 0.010208s | 0.008293s | 0.009458s | byte equality observed |
| test_binding.test | 8 | 0.002726s | 0.002665s | 0.002536s | byte equality observed |
| test_binding_of.test | 9 | 0.002561s | 0.002494s | 0.002458s | byte equality observed |
| test_callable.test | 6 | 0.004314s | 0.004254s | 0.004161s | byte equality observed |
| test_construct.test | 5 | 0.005572s | 0.005546s | 0.005465s | byte equality observed |
| test_construct_cref.test | 6 | 0.003897s | 0.003836s | 0.003770s | byte equality observed |
| test_construct_ref.test | 6 | 0.003494s | 0.003528s | 0.003373s | byte equality observed |
| test_deduced.test | 9 | 0.002587s | 0.002476s | 0.002425s | byte equality observed |
| test_dereference.test | 8 | 0.002742s | 0.002659s | 0.002572s | byte equality observed |
| test_dynamic_any_cast.test | 6 | 0.003892s | 0.003831s | 0.003784s | byte equality observed |
| test_equal.test | 7 | 0.003173s | 0.003223s | 0.003110s | byte equality observed |
| test_forward_iterator.test | 9 | 0.002710s | 0.002563s | 0.002638s | byte equality observed |
| test_free.test | 7 | 0.003210s | 0.003126s | 0.003166s | byte equality observed |
| test_increment.test | 9 | 0.002585s | 0.002534s | 0.002617s | byte equality observed |
| test_is_empty.test | 8 | 0.002629s | 0.002553s | 0.002535s | byte equality observed |
| test_less.test | 7 | 0.003515s | 0.003465s | 0.003346s | byte equality observed |
| test_limits.test | 8 | 0.002811s | 0.002738s | 0.002767s | byte equality observed |
| test_member.test | 6 | 0.004054s | 0.003961s | 0.003875s | byte equality observed |
| test_negate.test | 8 | 0.002466s | 0.002468s | 0.002473s | byte equality observed |
| test_nested.test | 8 | 0.002617s | 0.002578s | 0.002530s | byte equality observed |
| test_null.test | 7 | 0.002760s | 0.002643s | 0.002631s | byte equality observed |
| test_reference.test | 8 | 0.002784s | 0.002743s | 0.002707s | byte equality observed |
| test_relaxed.test | 8 | 0.002626s | 0.002538s | 0.002533s | byte equality observed |
| test_same_type.test | 9 | 0.002705s | 0.002678s | 0.002638s | byte equality observed |
| test_stream.test | 7 | 0.003750s | 0.003626s | 0.003552s | byte equality observed |
| test_subscript.test | 8 | 0.002776s | 0.002730s | 0.002716s | byte equality observed |
| test_tuple.test | 8 | 0.002825s | 0.002791s | 0.002763s | byte equality observed |
| test_typeid_of.test | 8 | 0.002828s | 0.002732s | 0.002747s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
