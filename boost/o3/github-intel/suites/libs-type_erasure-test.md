# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.433282 | 1.824427 | 1.509623 | 0.002452 | 0.002195 | 0.002302 |
| test_increment.test | RUN | 0.420633 | 1.364155 | 1.300778 | 0.002340 | 0.002359 | 0.002132 |
| test_add.test | RUN | 0.533734 | 2.226982 | 1.969367 | 0.002115 | 0.002345 | 0.001857 |
| test_add_assign.test | RUN | 0.574454 | 2.360603 | 2.067035 | 0.002312 | 0.002398 | 0.002332 |
| test_callable.test | RUN | 0.937186 | 4.109367 | 4.493486 | 0.003266 | 0.003387 | 0.002941 |
| test_reference.test | RUN | 0.441607 | 1.652701 | 1.349892 | 0.002480 | 0.002315 | 0.002102 |
| test_construct.test | RUN | 2.148741 | 19.806438 | 13.778211 | 0.004273 | 0.004021 | 0.004342 |
| test_relaxed.test | RUN | 0.411985 | 1.159432 | 1.223992 | 0.002110 | 0.002390 | 0.002104 |
| test_assign.test | RUN | 5.583741 | 64.728568 | 48.217077 | 0.006416 | 0.003960 | 0.004434 |
| test_construct_ref.test | RUN | 0.525755 | 2.875327 | 1.955357 | 0.002730 | 0.002714 | 0.002577 |
| test_construct_cref.test | RUN | 0.615206 | 2.705563 | 2.546579 | 0.003181 | 0.002994 | 0.002756 |
| test_any_cast.test | RUN | 0.503047 | 2.801111 | 1.934871 | 0.002660 | 0.002739 | 0.002670 |
| test_binding_of.test | RUN | 0.400561 | 1.073206 | 1.135350 | 0.002045 | 0.002178 | 0.002204 |
| test_typeid_of.test | RUN | 0.426248 | 1.564003 | 1.352233 | 0.002462 | 0.002320 | 0.002612 |
| test_nested.test | RUN | 0.479065 | 1.512070 | 1.515760 | 0.002821 | 0.002266 | 0.002097 |
| test_less.test | RUN | 0.603965 | 2.973029 | 2.506648 | 0.002956 | 0.002761 | 0.002676 |
| test_equal.test | RUN | 0.569245 | 2.857030 | 2.054684 | 0.002563 | 0.002492 | 0.002662 |
| test_negate.test | RUN | 0.425732 | 1.142135 | 1.194539 | 0.002607 | 0.002192 | 0.002099 |
| test_dereference.test | RUN | 0.444959 | 1.514310 | 1.339580 | 0.002398 | 0.002183 | 0.002068 |
| test_subscript.test | RUN | 0.465352 | 1.694283 | 1.513290 | 0.002270 | 0.002330 | 0.002371 |
| test_forward_iterator.test | RUN | 0.567818 | 1.903241 | 1.667540 | 0.003084 | 0.002435 | 0.002155 |
| test_tuple.test | RUN | 0.475491 | 1.930679 | 1.579042 | 0.002401 | 0.002418 | 0.002349 |
| test_stream.test | RUN | 0.630716 | 3.166112 | 2.534496 | 0.002631 | 0.002816 | 0.002490 |
| test_deduced.test | RUN | 0.423569 | 1.113431 | 1.150880 | 0.002014 | 0.002223 | 0.002171 |
| test_same_type.test | RUN | 0.453231 | 1.542651 | 1.471799 | 0.002375 | 0.002101 | 0.002122 |
| test_member.test | RUN | 0.645706 | 2.986737 | 2.282825 | 0.003460 | 0.003012 | 0.002842 |
| test_null.test | RUN | 0.405232 | 1.459860 | 1.255619 | 0.002315 | 0.002405 | 0.002273 |
| test_free.test | RUN | 0.510785 | 2.481861 | 1.805603 | 0.002463 | 0.002701 | 0.002585 |
| test_is_empty.test | RUN | 0.419016 | 1.236077 | 1.186935 | 0.002546 | 0.002083 | 0.002283 |
| test_dynamic_any_cast.test | RUN | 0.769691 | 3.728465 | 3.392228 | 0.002753 | 0.002971 | 0.002770 |
| test_limits.test | RUN | 0.694127 | 2.521346 | 2.393044 | 0.002363 | 0.002342 | 0.002312 |
| test_param.test | COMPILE | 0.263265 | 0.670873 | 0.746755 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.261766 | 0.510226 | 0.659743 | — | — | — |
| test_sfinae.test | COMPILE | 0.261673 | 0.526330 | 0.665533 | — | — | — |
| test_interface_order.test | COMPILE | 0.250942 | 0.522226 | 0.654132 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028150 | 0.050839 | 0.054857 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.240748 | 0.505102 | 0.611382 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.247175 | 0.505559 | 0.590838 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.243117 | 0.504776 | 0.618541 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.241385 | 0.496840 | 0.619748 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.242614 | 0.506573 | 0.581921 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.239484 | 0.496032 | 0.595888 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.241091 | 0.507010 | 0.605312 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.254933 | 0.521189 | 0.607901 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.238480 | 0.491636 | 0.597991 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.243146 | 0.480112 | 0.605869 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.242207 | 0.498566 | 0.601124 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.238323 | 0.486270 | 0.621732 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.246552 | 0.533634 | 0.629183 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.249222 | 0.540265 | 0.599003 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.243951 | 0.537804 | 0.637601 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.243558 | 0.513063 | 0.588764 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.240488 | 0.515141 | 0.614863 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.248527 | 0.510192 | 0.635528 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.247008 | 0.513865 | 0.629512 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.243862 | 0.519325 | 0.603384 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.247058 | 0.510507 | 0.637242 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.228098 | 0.508299 | 0.632505 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.208845 | 0.347122 | 0.618397 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.181217 | 0.465325 | 0.531305 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.971× | 0.967×, 0.974× | 1.006× |
| clang | 0.961× | 0.964×, 0.959× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001414s | 0.001366s | 0.001350s | byte equality observed |
| test_add_assign.test | 10 | 0.001391s | 0.001340s | 0.001338s | byte equality observed |
| test_any_cast.test | 10 | 0.001506s | 0.001458s | 0.001452s | byte equality observed |
| test_assign.test | 5 | 0.003883s | 0.003293s | 0.003748s | byte equality observed |
| test_binding.test | 10 | 0.001309s | 0.001267s | 0.001247s | byte equality observed |
| test_binding_of.test | 10 | 0.001288s | 0.001231s | 0.001230s | byte equality observed |
| test_callable.test | 10 | 0.001730s | 0.001738s | 0.001690s | byte equality observed |
| test_construct.test | 8 | 0.002225s | 0.002178s | 0.002172s | byte equality observed |
| test_construct_cref.test | 10 | 0.001642s | 0.001611s | 0.001570s | byte equality observed |
| test_construct_ref.test | 10 | 0.001524s | 0.001470s | 0.001475s | byte equality observed |
| test_deduced.test | 10 | 0.001305s | 0.001281s | 0.001226s | byte equality observed |
| test_dereference.test | 10 | 0.001310s | 0.001297s | 0.001267s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001654s | 0.001627s | 0.001574s | byte equality observed |
| test_equal.test | 10 | 0.001457s | 0.001434s | 0.001424s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001321s | 0.001309s | 0.001269s | byte equality observed |
| test_free.test | 10 | 0.001440s | 0.001428s | 0.001363s | byte equality observed |
| test_increment.test | 10 | 0.001312s | 0.001293s | 0.001279s | byte equality observed |
| test_is_empty.test | 10 | 0.001300s | 0.001239s | 0.001223s | byte equality observed |
| test_less.test | 10 | 0.001509s | 0.001526s | 0.001459s | byte equality observed |
| test_limits.test | 10 | 0.001402s | 0.001344s | 0.001318s | byte equality observed |
| test_member.test | 10 | 0.001645s | 0.001584s | 0.001589s | byte equality observed |
| test_negate.test | 10 | 0.001277s | 0.001271s | 0.001220s | byte equality observed |
| test_nested.test | 10 | 0.001266s | 0.001290s | 0.001249s | byte equality observed |
| test_null.test | 10 | 0.001311s | 0.001278s | 0.001283s | byte equality observed |
| test_reference.test | 10 | 0.001335s | 0.001317s | 0.001275s | byte equality observed |
| test_relaxed.test | 10 | 0.001324s | 0.001277s | 0.001245s | byte equality observed |
| test_same_type.test | 10 | 0.001309s | 0.001298s | 0.001278s | byte equality observed |
| test_stream.test | 10 | 0.001573s | 0.001535s | 0.001534s | byte equality observed |
| test_subscript.test | 10 | 0.001356s | 0.001340s | 0.001290s | byte equality observed |
| test_tuple.test | 10 | 0.001329s | 0.001334s | 0.001282s | byte equality observed |
| test_typeid_of.test | 10 | 0.001343s | 0.001328s | 0.001314s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
