# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.360840 | 1.423143 | 1.172089 | 0.001993 | 0.001912 | 0.001741 |
| test_increment.test | RUN | 0.347555 | 1.133773 | 1.004803 | 0.001797 | 0.001975 | 0.001755 |
| test_add.test | RUN | 0.439973 | 1.759271 | 1.497578 | 0.002077 | 0.002122 | 0.001884 |
| test_add_assign.test | RUN | 0.457431 | 1.866024 | 1.573115 | 0.002108 | 0.001944 | 0.001957 |
| test_callable.test | RUN | 0.758380 | 3.267071 | 3.416255 | 0.002661 | 0.002751 | 0.002491 |
| test_reference.test | RUN | 0.367318 | 1.313554 | 1.099307 | 0.001848 | 0.001978 | 0.001827 |
| test_construct.test | RUN | 1.739929 | 13.865254 | 10.205489 | 0.003394 | 0.003308 | 0.003433 |
| test_relaxed.test | RUN | 0.335445 | 0.980784 | 0.928144 | 0.001758 | 0.001741 | 0.001784 |
| test_assign.test | RUN | 4.459337 | 55.666380 | 39.138259 | 0.005452 | 0.004915 | 0.005325 |
| test_construct_ref.test | RUN | 0.455395 | 2.339344 | 1.525231 | 0.002306 | 0.002271 | 0.002212 |
| test_construct_cref.test | RUN | 0.500221 | 2.146230 | 1.937467 | 0.002484 | 0.002493 | 0.002392 |
| test_any_cast.test | RUN | 0.415991 | 2.281551 | 1.471462 | 0.002363 | 0.002047 | 0.002221 |
| test_binding_of.test | RUN | 0.325185 | 0.873211 | 0.879241 | 0.001766 | 0.001734 | 0.001654 |
| test_typeid_of.test | RUN | 0.346079 | 1.245926 | 1.056121 | 0.002047 | 0.001863 | 0.001891 |
| test_nested.test | RUN | 0.381320 | 1.233676 | 1.152632 | 0.001804 | 0.001693 | 0.001662 |
| test_less.test | RUN | 0.504142 | 2.396833 | 1.907597 | 0.002273 | 0.002299 | 0.002032 |
| test_equal.test | RUN | 0.457551 | 2.316249 | 1.628076 | 0.002183 | 0.002118 | 0.002060 |
| test_negate.test | RUN | 0.326631 | 0.914141 | 0.965868 | 0.001755 | 0.001667 | 0.001478 |
| test_dereference.test | RUN | 0.363759 | 1.246015 | 1.094945 | 0.001813 | 0.001695 | 0.001724 |
| test_subscript.test | RUN | 0.388923 | 1.400074 | 1.133843 | 0.001841 | 0.002125 | 0.001715 |
| test_forward_iterator.test | RUN | 0.448563 | 1.538469 | 1.370260 | 0.001863 | 0.001768 | 0.001782 |
| test_tuple.test | RUN | 0.398662 | 1.523131 | 1.185204 | 0.001832 | 0.001783 | 0.001930 |
| test_stream.test | RUN | 0.520442 | 2.552866 | 1.966191 | 0.002415 | 0.002324 | 0.002148 |
| test_deduced.test | RUN | 0.333944 | 0.925282 | 0.897869 | 0.001775 | 0.001618 | 0.001614 |
| test_same_type.test | RUN | 0.381084 | 1.249313 | 1.095026 | 0.001776 | 0.002076 | 0.001877 |
| test_member.test | RUN | 0.493481 | 2.439660 | 1.863083 | 0.002447 | 0.002635 | 0.002337 |
| test_null.test | RUN | 0.338125 | 1.182408 | 0.983364 | 0.001655 | 0.001947 | 0.001687 |
| test_free.test | RUN | 0.418706 | 2.026099 | 1.360769 | 0.001962 | 0.002124 | 0.001883 |
| test_is_empty.test | RUN | 0.324537 | 0.982862 | 0.890473 | 0.001645 | 0.001886 | 0.001526 |
| test_dynamic_any_cast.test | RUN | 0.638751 | 2.934409 | 2.685262 | 0.002459 | 0.002524 | 0.002230 |
| test_limits.test | RUN | 0.566479 | 1.984544 | 1.794603 | 0.001823 | 0.001999 | 0.002011 |
| test_param.test | COMPILE | 0.225972 | 0.568378 | 0.602220 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.214983 | 0.429717 | 0.492151 | — | — | — |
| test_sfinae.test | COMPILE | 0.219145 | 0.431124 | 0.510952 | — | — | — |
| test_interface_order.test | COMPILE | 0.209850 | 0.424917 | 0.509452 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.024782 | 0.040568 | 0.041536 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.206219 | 0.410732 | 0.456112 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.204630 | 0.415465 | 0.460811 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.199870 | 0.408244 | 0.482935 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.198939 | 0.409765 | 0.469184 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.200754 | 0.417639 | 0.453975 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.198549 | 0.401731 | 0.444619 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.200140 | 0.412232 | 0.453860 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.211765 | 0.441448 | 0.496097 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.198288 | 0.407842 | 0.448804 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.202418 | 0.408885 | 0.466794 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.202012 | 0.405873 | 0.454068 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.199090 | 0.415235 | 0.459150 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.200795 | 0.435476 | 0.470933 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.204069 | 0.438115 | 0.484349 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.204653 | 0.434906 | 0.479817 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.197986 | 0.413794 | 0.448235 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.201975 | 0.418153 | 0.481182 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.201482 | 0.421895 | 0.476689 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.201303 | 0.423009 | 0.472991 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.201527 | 0.426402 | 0.493924 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.202334 | 0.418408 | 0.472776 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.202145 | 0.415707 | 0.472418 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.200892 | 0.414519 | 0.468939 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.199674 | 0.414236 | 0.469967 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968× | 0.968×, 0.968× | 0.999× |
| clang | 0.962× | 0.964×, 0.961× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001613s | 0.001581s | 0.001546s | byte equality observed |
| test_add_assign.test | 10 | 0.001626s | 0.001589s | 0.001560s | byte equality observed |
| test_any_cast.test | 10 | 0.001818s | 0.001775s | 0.001743s | byte equality observed |
| test_assign.test | 4 | 0.004881s | 0.004144s | 0.004767s | byte equality observed |
| test_binding.test | 10 | 0.001562s | 0.001537s | 0.001512s | byte equality observed |
| test_binding_of.test | 10 | 0.001488s | 0.001471s | 0.001435s | byte equality observed |
| test_callable.test | 8 | 0.002144s | 0.002078s | 0.002047s | byte equality observed |
| test_construct.test | 7 | 0.002742s | 0.002685s | 0.002646s | byte equality observed |
| test_construct_cref.test | 10 | 0.001982s | 0.001956s | 0.001924s | byte equality observed |
| test_construct_ref.test | 10 | 0.001829s | 0.001789s | 0.001764s | byte equality observed |
| test_deduced.test | 10 | 0.001490s | 0.001468s | 0.001436s | byte equality observed |
| test_dereference.test | 10 | 0.001557s | 0.001537s | 0.001504s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001980s | 0.001942s | 0.001914s | byte equality observed |
| test_equal.test | 10 | 0.001740s | 0.001711s | 0.001669s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001565s | 0.001529s | 0.001496s | byte equality observed |
| test_free.test | 10 | 0.001724s | 0.001691s | 0.001670s | byte equality observed |
| test_increment.test | 10 | 0.001521s | 0.001497s | 0.001463s | byte equality observed |
| test_is_empty.test | 10 | 0.001533s | 0.001494s | 0.001477s | byte equality observed |
| test_less.test | 9 | 0.001844s | 0.001798s | 0.001755s | byte equality observed |
| test_limits.test | 10 | 0.001623s | 0.001586s | 0.001563s | byte equality observed |
| test_member.test | 9 | 0.001983s | 0.001957s | 0.001928s | byte equality observed |
| test_negate.test | 10 | 0.001486s | 0.001468s | 0.001436s | byte equality observed |
| test_nested.test | 10 | 0.001526s | 0.001511s | 0.001465s | byte equality observed |
| test_null.test | 10 | 0.001556s | 0.001522s | 0.001482s | byte equality observed |
| test_reference.test | 10 | 0.001590s | 0.001547s | 0.001518s | byte equality observed |
| test_relaxed.test | 10 | 0.001528s | 0.001475s | 0.001465s | byte equality observed |
| test_same_type.test | 10 | 0.001550s | 0.001531s | 0.001487s | byte equality observed |
| test_stream.test | 10 | 0.001887s | 0.001856s | 0.001825s | byte equality observed |
| test_subscript.test | 10 | 0.001573s | 0.001542s | 0.001520s | byte equality observed |
| test_tuple.test | 10 | 0.001588s | 0.001538s | 0.001538s | byte equality observed |
| test_typeid_of.test | 10 | 0.001583s | 0.001542s | 0.001513s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
