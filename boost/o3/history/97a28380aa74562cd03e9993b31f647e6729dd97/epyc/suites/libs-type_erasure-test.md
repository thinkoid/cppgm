# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.420897 | 1.495560 | 1.233157 | 0.002941 | 0.002755 | 0.002984 |
| test_increment.test | RUN | 0.408027 | 1.129512 | 1.071188 | 0.002633 | 0.002907 | 0.002554 |
| test_add.test | RUN | 0.516258 | 1.779942 | 1.615958 | 0.003175 | 0.003172 | 0.003227 |
| test_add_assign.test | RUN | 0.556836 | 1.901159 | 1.684334 | 0.003330 | 0.003202 | 0.003051 |
| test_callable.test | RUN | 0.847623 | 3.472267 | 3.912503 | 0.004892 | 0.005194 | 0.005065 |
| test_reference.test | RUN | 0.413528 | 1.379278 | 1.201947 | 0.002837 | 0.003251 | 0.002971 |
| test_construct.test | RUN | 1.853133 | 18.306409 | 11.846024 | 0.006068 | 0.005956 | 0.006197 |
| test_relaxed.test | RUN | 0.379558 | 0.970263 | 1.027457 | 0.002900 | 0.002814 | 0.002767 |
| test_assign.test | RUN | 4.435731 | 55.898141 | 39.388043 | 0.009099 | 0.005882 | 0.006372 |
| test_construct_ref.test | RUN | 0.498551 | 2.388910 | 1.720333 | 0.004063 | 0.003527 | 0.003815 |
| test_construct_cref.test | RUN | 0.568997 | 2.178483 | 2.281180 | 0.004670 | 0.004134 | 0.004488 |
| test_any_cast.test | RUN | 0.453439 | 2.261326 | 1.725557 | 0.003792 | 0.003634 | 0.003994 |
| test_binding_of.test | RUN | 0.369384 | 0.868387 | 1.064659 | 0.002613 | 0.002680 | 0.002672 |
| test_typeid_of.test | RUN | 0.410156 | 1.362483 | 1.137919 | 0.003016 | 0.003117 | 0.003109 |
| test_nested.test | RUN | 0.438020 | 1.198844 | 1.273803 | 0.002884 | 0.003823 | 0.002914 |
| test_less.test | RUN | 0.556553 | 2.512406 | 2.225131 | 0.003224 | 0.003885 | 0.003778 |
| test_equal.test | RUN | 0.542512 | 2.325871 | 1.761002 | 0.003296 | 0.003674 | 0.003619 |
| test_negate.test | RUN | 0.384584 | 0.966303 | 1.002354 | 0.002831 | 0.002750 | 0.002688 |
| test_dereference.test | RUN | 0.439599 | 1.262404 | 1.232166 | 0.003208 | 0.003107 | 0.002870 |
| test_subscript.test | RUN | 0.470111 | 1.423076 | 1.116745 | 0.003216 | 0.003152 | 0.002678 |
| test_forward_iterator.test | RUN | 0.532168 | 1.611299 | 1.529657 | 0.002822 | 0.002944 | 0.002968 |
| test_tuple.test | RUN | 0.473429 | 1.590559 | 1.205006 | 0.002912 | 0.003154 | 0.002904 |
| test_stream.test | RUN | 0.637610 | 2.779185 | 2.123779 | 0.004129 | 0.004187 | 0.004134 |
| test_deduced.test | RUN | 0.415865 | 1.009455 | 0.934020 | 0.002780 | 0.002867 | 0.002661 |
| test_same_type.test | RUN | 0.429832 | 1.293737 | 1.228895 | 0.002971 | 0.003054 | 0.002920 |
| test_member.test | RUN | 0.557973 | 2.570392 | 1.826058 | 0.004190 | 0.004700 | 0.004614 |
| test_null.test | RUN | 0.380675 | 1.221957 | 1.043724 | 0.002915 | 0.003034 | 0.002923 |
| test_free.test | RUN | 0.464660 | 2.098549 | 1.517602 | 0.003359 | 0.003836 | 0.003569 |
| test_is_empty.test | RUN | 0.360570 | 1.044531 | 0.992338 | 0.002677 | 0.002930 | 0.002818 |
| test_dynamic_any_cast.test | RUN | 0.691605 | 3.160920 | 2.971269 | 0.004564 | 0.004200 | 0.004403 |
| test_limits.test | RUN | 0.628978 | 2.071000 | 2.059757 | 0.003243 | 0.002741 | 0.002610 |
| test_param.test | COMPILE | 0.250631 | 0.609658 | 0.616909 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.234449 | 0.475288 | 0.538138 | — | — | — |
| test_sfinae.test | COMPILE | 0.249009 | 0.460677 | 0.544885 | — | — | — |
| test_interface_order.test | COMPILE | 0.247547 | 0.422756 | 0.564158 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.030276 | 0.045564 | 0.052588 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.244492 | 0.432065 | 0.480163 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.241753 | 0.428285 | 0.534593 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.237841 | 0.433875 | 0.480854 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.246463 | 0.431086 | 0.528434 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.233263 | 0.435009 | 0.466600 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.226041 | 0.428684 | 0.485732 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.231906 | 0.428741 | 0.511504 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.246514 | 0.460492 | 0.535542 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.232294 | 0.419648 | 0.444027 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.231569 | 0.423517 | 0.504750 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.229202 | 0.405553 | 0.480933 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.235234 | 0.440071 | 0.500413 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.235727 | 0.451013 | 0.523365 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.238268 | 0.428810 | 0.479211 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.235159 | 0.461441 | 0.521780 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.242544 | 0.454539 | 0.494689 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.230729 | 0.448196 | 0.501351 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.229898 | 0.464697 | 0.531029 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.228836 | 0.451929 | 0.538151 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.232478 | 0.438976 | 0.486666 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.225274 | 0.443494 | 0.519822 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.224022 | 0.440093 | 0.528797 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.223236 | 0.443977 | 0.509659 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.213412 | 0.398695 | 0.388293 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.979× | 0.958×, 1.000× | 0.999× |
| clang | 0.985× | 0.974×, 0.997× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001688s | 0.001615s | 0.001687s | byte equality observed |
| test_add_assign.test | 10 | 0.001676s | 0.001610s | 0.001679s | byte equality observed |
| test_any_cast.test | 10 | 0.001918s | 0.001836s | 0.001909s | byte equality observed |
| test_assign.test | 4 | 0.004690s | 0.004168s | 0.004695s | byte equality observed |
| test_binding.test | 10 | 0.001560s | 0.001510s | 0.001579s | byte equality observed |
| test_binding_of.test | 10 | 0.001473s | 0.001414s | 0.001444s | byte equality observed |
| test_callable.test | 8 | 0.002413s | 0.002362s | 0.002464s | byte equality observed |
| test_construct.test | 6 | 0.003186s | 0.003008s | 0.003144s | byte equality observed |
| test_construct_cref.test | 8 | 0.002200s | 0.002146s | 0.002246s | byte equality observed |
| test_construct_ref.test | 9 | 0.001978s | 0.001890s | 0.002009s | byte equality observed |
| test_deduced.test | 10 | 0.001453s | 0.001438s | 0.001451s | byte equality observed |
| test_dereference.test | 10 | 0.001597s | 0.001496s | 0.001588s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002164s | 0.002131s | 0.002209s | byte equality observed |
| test_equal.test | 10 | 0.001834s | 0.001780s | 0.001830s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001584s | 0.001519s | 0.001560s | byte equality observed |
| test_free.test | 10 | 0.001836s | 0.001772s | 0.001850s | byte equality observed |
| test_increment.test | 10 | 0.001516s | 0.001464s | 0.001514s | byte equality observed |
| test_is_empty.test | 10 | 0.001510s | 0.001472s | 0.001500s | byte equality observed |
| test_less.test | 9 | 0.001990s | 0.001940s | 0.001957s | byte equality observed |
| test_limits.test | 10 | 0.001632s | 0.001589s | 0.001632s | byte equality observed |
| test_member.test | 9 | 0.002254s | 0.002178s | 0.002272s | byte equality observed |
| test_negate.test | 10 | 0.001449s | 0.001413s | 0.001449s | byte equality observed |
| test_nested.test | 10 | 0.001537s | 0.001481s | 0.001487s | byte equality observed |
| test_null.test | 10 | 0.001550s | 0.001522s | 0.001498s | byte equality observed |
| test_reference.test | 10 | 0.001605s | 0.001577s | 0.001602s | byte equality observed |
| test_relaxed.test | 10 | 0.001517s | 0.001469s | 0.001494s | byte equality observed |
| test_same_type.test | 10 | 0.001564s | 0.001517s | 0.001561s | byte equality observed |
| test_stream.test | 9 | 0.002109s | 0.002051s | 0.002136s | byte equality observed |
| test_subscript.test | 10 | 0.001616s | 0.001545s | 0.001595s | byte equality observed |
| test_tuple.test | 10 | 0.001637s | 0.001561s | 0.001565s | byte equality observed |
| test_typeid_of.test | 10 | 0.001629s | 0.001595s | 0.001628s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
