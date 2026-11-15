# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.681252 | 2.789024 | 2.744697 | 0.005238 | 0.004362 | 0.003851 |
| test_increment.test | RUN | 0.687201 | 2.094738 | 2.387536 | 0.003721 | 0.003832 | 0.003999 |
| test_add.test | RUN | 0.813388 | 3.294903 | 3.551530 | 0.004164 | 0.004678 | 0.004106 |
| test_add_assign.test | RUN | 0.904549 | 3.573003 | 3.613908 | 0.004266 | 0.004028 | 0.004763 |
| test_callable.test | RUN | 1.294150 | 6.029312 | 7.796688 | 0.006362 | 0.007865 | 0.007880 |
| test_reference.test | RUN | 0.736516 | 2.461612 | 2.547817 | 0.004478 | 0.004037 | 0.004294 |
| test_construct.test | RUN | 3.272267 | 28.740308 | 22.235354 | 0.008318 | 0.008717 | 0.010074 |
| test_relaxed.test | RUN | 0.645389 | 1.793770 | 2.293501 | 0.003873 | 0.004192 | 0.003870 |
| test_assign.test | RUN | 7.494991 | 87.391557 | 70.979960 | 0.014398 | 0.008016 | 0.008629 |
| test_construct_ref.test | RUN | 0.838647 | 4.273924 | 3.664344 | 0.005331 | 0.004868 | 0.005957 |
| test_construct_cref.test | RUN | 0.962516 | 4.128317 | 4.514603 | 0.006603 | 0.006812 | 0.006704 |
| test_any_cast.test | RUN | 0.770344 | 4.033086 | 3.583966 | 0.005008 | 0.005099 | 0.004615 |
| test_binding_of.test | RUN | 0.631950 | 1.669968 | 2.217495 | 0.003742 | 0.003762 | 0.003232 |
| test_typeid_of.test | RUN | 0.680878 | 2.281619 | 2.573003 | 0.004094 | 0.003826 | 0.004614 |
| test_nested.test | RUN | 0.748999 | 2.308158 | 2.825420 | 0.003681 | 0.004112 | 0.004252 |
| test_less.test | RUN | 0.951574 | 4.456151 | 4.422147 | 0.004890 | 0.005611 | 0.005583 |
| test_equal.test | RUN | 0.888453 | 4.270536 | 3.725866 | 0.004907 | 0.005431 | 0.005849 |
| test_negate.test | RUN | 0.633178 | 1.740139 | 2.220229 | 0.003517 | 0.003988 | 0.003642 |
| test_dereference.test | RUN | 0.697984 | 2.347376 | 2.543586 | 0.004115 | 0.004019 | 0.003620 |
| test_subscript.test | RUN | 0.709445 | 2.605270 | 2.704085 | 0.003819 | 0.004464 | 0.004429 |
| test_forward_iterator.test | RUN | 0.852686 | 2.907112 | 2.933956 | 0.003809 | 0.003781 | 0.003744 |
| test_tuple.test | RUN | 0.753046 | 2.852264 | 2.888575 | 0.003945 | 0.003847 | 0.004234 |
| test_stream.test | RUN | 0.976933 | 4.558873 | 4.413921 | 0.005718 | 0.005504 | 0.005635 |
| test_deduced.test | RUN | 0.632767 | 1.552621 | 2.037158 | 0.003778 | 0.003428 | 0.003363 |
| test_same_type.test | RUN | 0.706286 | 2.286449 | 2.704815 | 0.003712 | 0.003709 | 0.003509 |
| test_member.test | RUN | 0.914256 | 4.494277 | 3.805956 | 0.005879 | 0.006534 | 0.005877 |
| test_null.test | RUN | 0.656641 | 2.099657 | 2.325717 | 0.003704 | 0.003932 | 0.003947 |
| test_free.test | RUN | 0.779613 | 3.712979 | 3.176500 | 0.005100 | 0.005015 | 0.005401 |
| test_is_empty.test | RUN | 0.615411 | 1.816488 | 2.131263 | 0.003786 | 0.003702 | 0.003922 |
| test_dynamic_any_cast.test | RUN | 1.163979 | 5.007322 | 5.454792 | 0.005880 | 0.006010 | 0.006156 |
| test_limits.test | RUN | 1.092849 | 3.728103 | 4.373392 | 0.003852 | 0.004008 | 0.003943 |
| test_param.test | COMPILE | 0.426761 | 1.084205 | 1.468635 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.424001 | 0.853073 | 1.249105 | — | — | — |
| test_sfinae.test | COMPILE | 0.420748 | 0.879807 | 1.296333 | — | — | — |
| test_interface_order.test | COMPILE | 0.411579 | 0.812644 | 1.295782 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.050052 | 0.076566 | 0.085066 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.412582 | 0.802561 | 1.097739 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.403004 | 0.828490 | 1.228021 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.399307 | 0.806341 | 1.210154 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.391297 | 0.736058 | 1.043235 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.396765 | 0.825635 | 1.189476 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.384234 | 0.787446 | 1.180598 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.403459 | 0.808382 | 1.098416 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.415258 | 0.786489 | 1.271517 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.398398 | 0.780984 | 1.163941 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.394457 | 0.790686 | 1.061903 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.401125 | 0.769708 | 1.183796 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.390140 | 0.823194 | 1.226979 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.399997 | 0.846022 | 1.155939 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.400569 | 0.812631 | 1.259765 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.402732 | 0.842261 | 1.259850 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.393190 | 0.747264 | 1.001261 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.401898 | 0.840605 | 1.137806 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.399622 | 0.767097 | 1.167442 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.410675 | 0.816149 | 1.264911 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.404261 | 0.841974 | 1.254978 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.409864 | 0.838668 | 1.087424 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.403528 | 0.833189 | 1.268878 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.346262 | 0.807461 | 1.067807 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.270608 | 0.533821 | 0.799531 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.967× | 0.956×, 0.979× | 0.981× |
| clang | 0.953× | 0.962×, 0.943× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 8 | 0.002951s | 0.002814s | 0.002763s | byte equality observed |
| test_add_assign.test | 8 | 0.002935s | 0.002825s | 0.002795s | byte equality observed |
| test_any_cast.test | 7 | 0.003400s | 0.003266s | 0.003279s | byte equality observed |
| test_assign.test | 3 | 0.010110s | 0.008653s | 0.009682s | byte equality observed |
| test_binding.test | 8 | 0.002773s | 0.002659s | 0.002601s | byte equality observed |
| test_binding_of.test | 8 | 0.002595s | 0.002491s | 0.002463s | byte equality observed |
| test_callable.test | 6 | 0.004444s | 0.004248s | 0.004186s | byte equality observed |
| test_construct.test | 5 | 0.005685s | 0.005597s | 0.005462s | byte equality observed |
| test_construct_cref.test | 6 | 0.003946s | 0.003920s | 0.003839s | byte equality observed |
| test_construct_ref.test | 7 | 0.003521s | 0.003334s | 0.003416s | byte equality observed |
| test_deduced.test | 8 | 0.002591s | 0.002510s | 0.002449s | byte equality observed |
| test_dereference.test | 8 | 0.002726s | 0.002692s | 0.002646s | byte equality observed |
| test_dynamic_any_cast.test | 6 | 0.003929s | 0.003812s | 0.003838s | byte equality observed |
| test_equal.test | 7 | 0.003285s | 0.003176s | 0.003214s | byte equality observed |
| test_forward_iterator.test | 8 | 0.002760s | 0.002689s | 0.002640s | byte equality observed |
| test_free.test | 7 | 0.003220s | 0.003150s | 0.003108s | byte equality observed |
| test_increment.test | 8 | 0.002650s | 0.002526s | 0.002574s | byte equality observed |
| test_is_empty.test | 8 | 0.002721s | 0.002638s | 0.002575s | byte equality observed |
| test_less.test | 7 | 0.003512s | 0.003383s | 0.003429s | byte equality observed |
| test_limits.test | 8 | 0.002917s | 0.002792s | 0.002764s | byte equality observed |
| test_member.test | 6 | 0.004053s | 0.004079s | 0.003848s | byte equality observed |
| test_negate.test | 9 | 0.002605s | 0.002512s | 0.002505s | byte equality observed |
| test_nested.test | 7 | 0.002680s | 0.002607s | 0.002514s | byte equality observed |
| test_null.test | 8 | 0.002719s | 0.002586s | 0.002597s | byte equality observed |
| test_reference.test | 8 | 0.002819s | 0.002761s | 0.002772s | byte equality observed |
| test_relaxed.test | 8 | 0.002654s | 0.002613s | 0.002464s | byte equality observed |
| test_same_type.test | 8 | 0.002768s | 0.002658s | 0.002709s | byte equality observed |
| test_stream.test | 6 | 0.003777s | 0.003701s | 0.003618s | byte equality observed |
| test_subscript.test | 8 | 0.002863s | 0.002786s | 0.002630s | byte equality observed |
| test_tuple.test | 8 | 0.002798s | 0.002729s | 0.002795s | byte equality observed |
| test_typeid_of.test | 7 | 0.002843s | 0.002749s | 0.002739s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
