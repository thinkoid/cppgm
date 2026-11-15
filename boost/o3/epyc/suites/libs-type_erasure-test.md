# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.692809 | 2.872872 | 2.850256 | 0.003940 | 0.003726 | 0.004319 |
| test_increment.test | RUN | 0.672840 | 2.123142 | 2.446051 | 0.003924 | 0.003717 | 0.004060 |
| test_add.test | RUN | 0.868741 | 3.386318 | 3.546269 | 0.003473 | 0.004382 | 0.004524 |
| test_add_assign.test | RUN | 0.948804 | 3.573429 | 3.747803 | 0.004661 | 0.004461 | 0.004631 |
| test_callable.test | RUN | 1.447690 | 6.025126 | 7.879122 | 0.006424 | 0.007726 | 0.007684 |
| test_reference.test | RUN | 0.706109 | 2.491616 | 2.531721 | 0.004136 | 0.004162 | 0.003983 |
| test_construct.test | RUN | 3.297215 | 28.361815 | 22.238798 | 0.010005 | 0.009309 | 0.008782 |
| test_relaxed.test | RUN | 0.683126 | 1.789833 | 2.320711 | 0.003745 | 0.003749 | 0.003724 |
| test_assign.test | RUN | 7.671666 | 88.670630 | 71.919731 | 0.013779 | 0.008415 | 0.008705 |
| test_construct_ref.test | RUN | 0.822969 | 4.327918 | 3.676455 | 0.005853 | 0.005160 | 0.005895 |
| test_construct_cref.test | RUN | 0.929894 | 4.037478 | 4.611660 | 0.006593 | 0.006738 | 0.006982 |
| test_any_cast.test | RUN | 0.812486 | 4.170919 | 3.521297 | 0.004939 | 0.005150 | 0.004655 |
| test_binding_of.test | RUN | 0.669785 | 1.720090 | 2.231814 | 0.003560 | 0.003830 | 0.003804 |
| test_typeid_of.test | RUN | 0.714740 | 2.195140 | 2.487757 | 0.004016 | 0.004258 | 0.004793 |
| test_nested.test | RUN | 0.747483 | 2.355462 | 2.743889 | 0.003808 | 0.003699 | 0.003701 |
| test_less.test | RUN | 0.952101 | 4.487958 | 4.546835 | 0.005707 | 0.005337 | 0.005856 |
| test_equal.test | RUN | 0.896624 | 4.312302 | 3.607585 | 0.004718 | 0.004057 | 0.005538 |
| test_negate.test | RUN | 0.657874 | 1.765818 | 2.353111 | 0.003723 | 0.003392 | 0.003206 |
| test_dereference.test | RUN | 0.730149 | 2.298648 | 2.552275 | 0.004077 | 0.003852 | 0.003938 |
| test_subscript.test | RUN | 0.753237 | 2.553431 | 2.378583 | 0.004220 | 0.004041 | 0.004482 |
| test_forward_iterator.test | RUN | 0.882665 | 2.851005 | 3.228238 | 0.003814 | 0.004087 | 0.003858 |
| test_tuple.test | RUN | 0.777576 | 2.854072 | 2.925688 | 0.004267 | 0.003561 | 0.004421 |
| test_stream.test | RUN | 0.990341 | 4.684082 | 4.527950 | 0.005656 | 0.005607 | 0.006523 |
| test_deduced.test | RUN | 0.651059 | 1.621162 | 2.265851 | 0.003569 | 0.003841 | 0.003245 |
| test_same_type.test | RUN | 0.746308 | 2.332369 | 2.465068 | 0.004061 | 0.003801 | 0.003757 |
| test_member.test | RUN | 0.914323 | 4.519351 | 4.201443 | 0.006440 | 0.005961 | 0.005870 |
| test_null.test | RUN | 0.658891 | 2.276745 | 2.039321 | 0.003727 | 0.004128 | 0.004089 |
| test_free.test | RUN | 0.821738 | 3.638667 | 3.384802 | 0.004974 | 0.004570 | 0.005125 |
| test_is_empty.test | RUN | 0.638412 | 1.823390 | 2.249112 | 0.003962 | 0.003646 | 0.004102 |
| test_dynamic_any_cast.test | RUN | 1.189991 | 5.038885 | 6.121709 | 0.005656 | 0.005478 | 0.006395 |
| test_limits.test | RUN | 1.087313 | 3.722025 | 3.895057 | 0.004231 | 0.004512 | 0.003670 |
| test_param.test | COMPILE | 0.444849 | 1.120889 | 1.490879 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.429563 | 0.850496 | 1.323271 | — | — | — |
| test_sfinae.test | COMPILE | 0.428524 | 0.859037 | 1.349475 | — | — | — |
| test_interface_order.test | COMPILE | 0.420186 | 0.831795 | 1.113464 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.051873 | 0.086062 | 0.096379 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.401331 | 0.797817 | 1.173646 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.400424 | 0.842336 | 1.062334 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.412184 | 0.817790 | 1.213882 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.401619 | 0.747410 | 1.239284 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.402004 | 0.819586 | 1.131415 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.386841 | 0.740801 | 1.191794 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.407821 | 0.814454 | 1.072344 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.421279 | 0.831465 | 1.271246 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.397934 | 0.786047 | 1.175178 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.395278 | 0.838679 | 1.117965 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.405271 | 0.809615 | 1.222711 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.399255 | 0.785221 | 1.165906 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.404133 | 0.852378 | 1.247862 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.400983 | 0.882743 | 1.278127 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.408858 | 0.787678 | 1.090636 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.399412 | 0.812193 | 1.154432 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.407247 | 0.850831 | 1.256620 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.412528 | 0.766831 | 1.082033 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.421301 | 0.826796 | 1.266266 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.410527 | 0.843348 | 1.294471 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.406200 | 0.818238 | 1.104226 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.388156 | 0.821749 | 1.275537 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.374410 | 0.817756 | 1.009366 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.294843 | 0.702431 | 1.022412 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.960× | 0.966×, 0.954× | 0.991× |
| clang | 0.958× | 0.949×, 0.967× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 7 | 0.002960s | 0.002843s | 0.002786s | byte equality observed |
| test_add_assign.test | 8 | 0.002919s | 0.002813s | 0.002816s | byte equality observed |
| test_any_cast.test | 7 | 0.003441s | 0.003373s | 0.003275s | byte equality observed |
| test_assign.test | 3 | 0.010414s | 0.008598s | 0.009677s | byte equality observed |
| test_binding.test | 9 | 0.002748s | 0.002626s | 0.002594s | byte equality observed |
| test_binding_of.test | 8 | 0.002566s | 0.002479s | 0.002381s | byte equality observed |
| test_callable.test | 6 | 0.004343s | 0.004339s | 0.004301s | byte equality observed |
| test_construct.test | 5 | 0.005791s | 0.005610s | 0.005407s | byte equality observed |
| test_construct_cref.test | 7 | 0.003942s | 0.003924s | 0.003882s | byte equality observed |
| test_construct_ref.test | 7 | 0.003571s | 0.003385s | 0.003342s | byte equality observed |
| test_deduced.test | 9 | 0.002550s | 0.002485s | 0.002459s | byte equality observed |
| test_dereference.test | 8 | 0.002719s | 0.002663s | 0.002623s | byte equality observed |
| test_dynamic_any_cast.test | 7 | 0.003885s | 0.003909s | 0.003767s | byte equality observed |
| test_equal.test | 7 | 0.003257s | 0.003183s | 0.003194s | byte equality observed |
| test_forward_iterator.test | 8 | 0.002754s | 0.002654s | 0.002650s | byte equality observed |
| test_free.test | 7 | 0.003309s | 0.003186s | 0.003176s | byte equality observed |
| test_increment.test | 9 | 0.002661s | 0.002616s | 0.002606s | byte equality observed |
| test_is_empty.test | 8 | 0.002653s | 0.002575s | 0.002520s | byte equality observed |
| test_less.test | 7 | 0.003608s | 0.003477s | 0.003453s | byte equality observed |
| test_limits.test | 8 | 0.002893s | 0.002782s | 0.002830s | byte equality observed |
| test_member.test | 6 | 0.004096s | 0.003900s | 0.003794s | byte equality observed |
| test_negate.test | 8 | 0.002552s | 0.002516s | 0.002470s | byte equality observed |
| test_nested.test | 9 | 0.002668s | 0.002577s | 0.002608s | byte equality observed |
| test_null.test | 6 | 0.002734s | 0.002710s | 0.002648s | byte equality observed |
| test_reference.test | 7 | 0.002797s | 0.002779s | 0.002774s | byte equality observed |
| test_relaxed.test | 8 | 0.002640s | 0.002580s | 0.002588s | byte equality observed |
| test_same_type.test | 8 | 0.002799s | 0.002731s | 0.002650s | byte equality observed |
| test_stream.test | 4 | 0.003815s | 0.003806s | 0.003709s | byte equality observed |
| test_subscript.test | 8 | 0.002873s | 0.002750s | 0.002721s | byte equality observed |
| test_tuple.test | 8 | 0.002904s | 0.002799s | 0.002733s | byte equality observed |
| test_typeid_of.test | 7 | 0.002898s | 0.002868s | 0.002749s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
