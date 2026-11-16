# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.364751 | 1.445616 | 1.142688 | 0.002110 | 0.001971 | 0.002008 |
| test_increment.test | RUN | 0.353660 | 1.108988 | 0.988506 | 0.001849 | 0.002041 | 0.001760 |
| test_add.test | RUN | 0.443541 | 1.843472 | 1.514609 | 0.002017 | 0.002136 | 0.002199 |
| test_add_assign.test | RUN | 0.457571 | 1.896537 | 1.617270 | 0.002005 | 0.002174 | 0.002147 |
| test_callable.test | RUN | 0.792606 | 3.488080 | 3.461849 | 0.002737 | 0.002993 | 0.002719 |
| test_reference.test | RUN | 0.356331 | 1.339639 | 1.103811 | 0.002021 | 0.002117 | 0.002092 |
| test_construct.test | RUN | 1.766122 | 15.464219 | 10.608544 | 0.003454 | 0.003527 | 0.003383 |
| test_relaxed.test | RUN | 0.329115 | 0.971251 | 0.959760 | 0.002078 | 0.001847 | 0.001874 |
| test_assign.test | RUN | 4.722319 | 63.523011 | 45.678348 | 0.005742 | 0.005012 | 0.005338 |
| test_construct_ref.test | RUN | 0.433565 | 2.367217 | 1.549446 | 0.002395 | 0.002490 | 0.002415 |
| test_construct_cref.test | RUN | 0.504036 | 2.176388 | 2.033644 | 0.002558 | 0.002647 | 0.002385 |
| test_any_cast.test | RUN | 0.435757 | 2.264495 | 1.500068 | 0.002421 | 0.002083 | 0.002120 |
| test_binding_of.test | RUN | 0.326139 | 0.868632 | 0.861664 | 0.001969 | 0.001734 | 0.001798 |
| test_typeid_of.test | RUN | 0.351521 | 1.282038 | 1.058392 | 0.001870 | 0.001896 | 0.001789 |
| test_nested.test | RUN | 0.381845 | 1.231798 | 1.210462 | 0.002001 | 0.001856 | 0.001589 |
| test_less.test | RUN | 0.507287 | 2.429370 | 1.910158 | 0.002452 | 0.002310 | 0.002121 |
| test_equal.test | RUN | 0.464340 | 2.343726 | 1.638268 | 0.002276 | 0.002228 | 0.001977 |
| test_negate.test | RUN | 0.326294 | 0.941519 | 0.921884 | 0.001860 | 0.001901 | 0.001632 |
| test_dereference.test | RUN | 0.366867 | 1.215611 | 1.118984 | 0.001869 | 0.001812 | 0.001810 |
| test_subscript.test | RUN | 0.397341 | 1.358422 | 1.185687 | 0.002057 | 0.002001 | 0.001784 |
| test_forward_iterator.test | RUN | 0.462843 | 1.564843 | 1.388741 | 0.002062 | 0.001911 | 0.001982 |
| test_tuple.test | RUN | 0.394981 | 1.606456 | 1.225818 | 0.002054 | 0.001900 | 0.002001 |
| test_stream.test | RUN | 0.522485 | 2.585232 | 1.980963 | 0.002413 | 0.002316 | 0.002285 |
| test_deduced.test | RUN | 0.346283 | 0.920548 | 0.909593 | 0.001828 | 0.001733 | 0.001604 |
| test_same_type.test | RUN | 0.377359 | 1.261219 | 1.127629 | 0.001908 | 0.001981 | 0.002152 |
| test_member.test | RUN | 0.494217 | 2.475645 | 1.865391 | 0.002469 | 0.002571 | 0.002585 |
| test_null.test | RUN | 0.337162 | 1.181870 | 0.967365 | 0.001839 | 0.001888 | 0.001840 |
| test_free.test | RUN | 0.438734 | 2.068258 | 1.371105 | 0.002038 | 0.002224 | 0.002145 |
| test_is_empty.test | RUN | 0.330406 | 1.030591 | 0.890968 | 0.001760 | 0.001891 | 0.001744 |
| test_dynamic_any_cast.test | RUN | 0.650715 | 3.040079 | 2.708073 | 0.002504 | 0.002514 | 0.002444 |
| test_limits.test | RUN | 0.570039 | 2.024203 | 1.785379 | 0.001962 | 0.001948 | 0.002075 |
| test_param.test | COMPILE | 0.224189 | 0.558388 | 0.582616 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.211427 | 0.420568 | 0.492896 | — | — | — |
| test_sfinae.test | COMPILE | 0.219224 | 0.433736 | 0.540830 | — | — | — |
| test_interface_order.test | COMPILE | 0.210221 | 0.419714 | 0.520522 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.025647 | 0.040378 | 0.046047 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.202624 | 0.428170 | 0.501791 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.204279 | 0.423311 | 0.485221 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.203212 | 0.410849 | 0.471648 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.203358 | 0.417599 | 0.459907 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.202617 | 0.412376 | 0.466804 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.192824 | 0.406330 | 0.453275 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.200836 | 0.410662 | 0.464123 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.211938 | 0.436362 | 0.499209 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.200024 | 0.415126 | 0.464451 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.202513 | 0.416759 | 0.479569 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.202731 | 0.408820 | 0.462935 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.204477 | 0.414735 | 0.474828 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.205088 | 0.435794 | 0.501919 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.204183 | 0.442831 | 0.480829 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.201959 | 0.445070 | 0.485537 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.197445 | 0.417109 | 0.464563 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.202506 | 0.421799 | 0.479361 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.202783 | 0.419585 | 0.480771 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.202866 | 0.424680 | 0.478319 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.203061 | 0.423022 | 0.478365 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.201613 | 0.425959 | 0.476061 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.202193 | 0.419969 | 0.476639 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.202400 | 0.416203 | 0.472167 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.201616 | 0.418301 | 0.473809 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.967× | 0.965×, 0.969× | 1.001× |
| clang | 0.965× | 0.968×, 0.961× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001672s | 0.001614s | 0.001596s | byte equality observed |
| test_add_assign.test | 9 | 0.001681s | 0.001626s | 0.001606s | byte equality observed |
| test_any_cast.test | 9 | 0.001856s | 0.001814s | 0.001785s | byte equality observed |
| test_assign.test | 4 | 0.004719s | 0.004001s | 0.004579s | byte equality observed |
| test_binding.test | 10 | 0.001620s | 0.001562s | 0.001548s | byte equality observed |
| test_binding_of.test | 10 | 0.001530s | 0.001506s | 0.001490s | byte equality observed |
| test_callable.test | 9 | 0.002143s | 0.002106s | 0.002089s | byte equality observed |
| test_construct.test | 7 | 0.002758s | 0.002671s | 0.002676s | byte equality observed |
| test_construct_cref.test | 8 | 0.002030s | 0.001987s | 0.001959s | byte equality observed |
| test_construct_ref.test | 9 | 0.001846s | 0.001826s | 0.001787s | byte equality observed |
| test_deduced.test | 9 | 0.001522s | 0.001497s | 0.001470s | byte equality observed |
| test_dereference.test | 10 | 0.001597s | 0.001534s | 0.001525s | byte equality observed |
| test_dynamic_any_cast.test | 9 | 0.002002s | 0.001984s | 0.001951s | byte equality observed |
| test_equal.test | 9 | 0.001762s | 0.001744s | 0.001700s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001593s | 0.001562s | 0.001523s | byte equality observed |
| test_free.test | 9 | 0.001759s | 0.001739s | 0.001687s | byte equality observed |
| test_increment.test | 10 | 0.001556s | 0.001525s | 0.001496s | byte equality observed |
| test_is_empty.test | 10 | 0.001549s | 0.001517s | 0.001496s | byte equality observed |
| test_less.test | 9 | 0.001869s | 0.001820s | 0.001814s | byte equality observed |
| test_limits.test | 10 | 0.001653s | 0.001633s | 0.001593s | byte equality observed |
| test_member.test | 9 | 0.002010s | 0.001986s | 0.001950s | byte equality observed |
| test_negate.test | 10 | 0.001528s | 0.001506s | 0.001475s | byte equality observed |
| test_nested.test | 10 | 0.001561s | 0.001517s | 0.001501s | byte equality observed |
| test_null.test | 10 | 0.001592s | 0.001551s | 0.001525s | byte equality observed |
| test_reference.test | 10 | 0.001617s | 0.001587s | 0.001549s | byte equality observed |
| test_relaxed.test | 10 | 0.001573s | 0.001517s | 0.001507s | byte equality observed |
| test_same_type.test | 10 | 0.001590s | 0.001551s | 0.001516s | byte equality observed |
| test_stream.test | 9 | 0.001928s | 0.001902s | 0.001861s | byte equality observed |
| test_subscript.test | 10 | 0.001611s | 0.001581s | 0.001556s | byte equality observed |
| test_tuple.test | 10 | 0.001616s | 0.001575s | 0.001556s | byte equality observed |
| test_typeid_of.test | 10 | 0.001602s | 0.001570s | 0.001546s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
