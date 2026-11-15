# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.666640 | 2.553117 | 2.377763 | 0.003805 | 0.003857 | 0.003904 |
| test_increment.test | RUN | 0.643011 | 1.953682 | 2.071274 | 0.003903 | 0.003889 | 0.003923 |
| test_add.test | RUN | 0.863276 | 3.061933 | 3.028466 | 0.004173 | 0.004071 | 0.004377 |
| test_add_assign.test | RUN | 0.817049 | 3.297350 | 3.130077 | 0.004610 | 0.004556 | 0.004266 |
| test_callable.test | RUN | 1.354936 | 5.648635 | 6.715125 | 0.007428 | 0.007593 | 0.007230 |
| test_reference.test | RUN | 0.692917 | 2.316505 | 2.135413 | 0.004163 | 0.004546 | 0.004288 |
| test_construct.test | RUN | 3.039692 | 27.021443 | 19.608466 | 0.009573 | 0.008841 | 0.009621 |
| test_relaxed.test | RUN | 0.602583 | 1.632446 | 1.919060 | 0.003953 | 0.003673 | 0.003821 |
| test_assign.test | RUN | 6.997839 | 84.423557 | 64.679976 | 0.013249 | 0.008748 | 0.009108 |
| test_construct_ref.test | RUN | 0.794420 | 4.094701 | 3.097129 | 0.005503 | 0.005174 | 0.005787 |
| test_construct_cref.test | RUN | 0.910902 | 3.707222 | 3.833798 | 0.006289 | 0.006776 | 0.006593 |
| test_any_cast.test | RUN | 0.744741 | 3.865482 | 2.970289 | 0.005410 | 0.005279 | 0.004824 |
| test_binding_of.test | RUN | 0.587865 | 1.570751 | 1.796380 | 0.003708 | 0.003597 | 0.003447 |
| test_typeid_of.test | RUN | 0.644810 | 2.033374 | 2.090466 | 0.004205 | 0.004436 | 0.004256 |
| test_nested.test | RUN | 0.716391 | 2.141202 | 2.393440 | 0.004027 | 0.003847 | 0.003829 |
| test_less.test | RUN | 0.918916 | 4.130436 | 3.683338 | 0.005759 | 0.005533 | 0.005048 |
| test_equal.test | RUN | 0.830574 | 3.931191 | 3.237268 | 0.005041 | 0.004998 | 0.005144 |
| test_negate.test | RUN | 0.624995 | 1.524269 | 1.838526 | 0.003786 | 0.003716 | 0.003762 |
| test_dereference.test | RUN | 0.675906 | 2.160660 | 2.157909 | 0.004275 | 0.003973 | 0.003795 |
| test_subscript.test | RUN | 0.697920 | 2.391999 | 2.302134 | 0.004279 | 0.004086 | 0.004298 |
| test_forward_iterator.test | RUN | 0.824595 | 2.700237 | 2.363552 | 0.004152 | 0.003801 | 0.004035 |
| test_tuple.test | RUN | 0.706839 | 2.723882 | 2.456317 | 0.004299 | 0.003969 | 0.004016 |
| test_stream.test | RUN | 0.940274 | 4.343859 | 3.730370 | 0.005612 | 0.005831 | 0.005346 |
| test_deduced.test | RUN | 0.617014 | 1.453406 | 1.702614 | 0.003626 | 0.003893 | 0.003694 |
| test_same_type.test | RUN | 0.684029 | 2.182187 | 2.328094 | 0.004170 | 0.003837 | 0.004037 |
| test_member.test | RUN | 0.884982 | 4.255561 | 3.734649 | 0.007091 | 0.006370 | 0.006727 |
| test_null.test | RUN | 0.620413 | 1.995236 | 1.726029 | 0.003859 | 0.003859 | 0.003816 |
| test_free.test | RUN | 0.762259 | 3.501669 | 2.794902 | 0.005924 | 0.005093 | 0.004584 |
| test_is_empty.test | RUN | 0.603843 | 1.682129 | 1.715752 | 0.004071 | 0.003807 | 0.003886 |
| test_dynamic_any_cast.test | RUN | 1.109952 | 4.997811 | 4.787454 | 0.006042 | 0.006122 | 0.005707 |
| test_limits.test | RUN | 1.056277 | 3.506392 | 3.721244 | 0.004346 | 0.004577 | 0.004572 |
| test_param.test | COMPILE | 0.417445 | 0.927059 | 1.252948 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.406233 | 0.753103 | 1.052864 | — | — | — |
| test_sfinae.test | COMPILE | 0.403774 | 0.760748 | 1.102269 | — | — | — |
| test_interface_order.test | COMPILE | 0.390051 | 0.746506 | 1.057201 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.053072 | 0.078654 | 0.086035 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.378036 | 0.699768 | 1.019806 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.375982 | 0.752703 | 0.876919 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.373371 | 0.661001 | 1.002503 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.377267 | 0.731468 | 1.021771 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.372220 | 0.759304 | 0.941840 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.361389 | 0.679912 | 0.975430 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.374330 | 0.738831 | 0.993656 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.393851 | 0.784248 | 0.921611 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.371299 | 0.692577 | 0.983047 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.367821 | 0.718856 | 1.003858 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.377097 | 0.736241 | 0.903226 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.379966 | 0.729020 | 1.011302 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.381759 | 0.770091 | 1.040569 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.377726 | 0.795562 | 1.000692 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.383990 | 0.755257 | 1.045491 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.378547 | 0.747699 | 0.996669 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.379404 | 0.770979 | 0.900156 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.378820 | 0.713000 | 1.044926 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.390878 | 0.754218 | 1.061650 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.384068 | 0.770474 | 0.908843 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.382308 | 0.720839 | 1.041768 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.384779 | 0.755309 | 0.905261 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.364437 | 0.706670 | 1.053261 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.307089 | 0.708155 | 0.734472 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.964× | 0.961×, 0.967× | 1.010× |
| clang | 0.968× | 0.964×, 0.972× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 7 | 0.002959s | 0.002863s | 0.002862s | byte equality observed |
| test_add_assign.test | 7 | 0.002963s | 0.002914s | 0.002889s | byte equality observed |
| test_any_cast.test | 6 | 0.003442s | 0.003333s | 0.003335s | byte equality observed |
| test_assign.test | 3 | 0.009897s | 0.008308s | 0.008855s | byte equality observed |
| test_binding.test | 8 | 0.002751s | 0.002726s | 0.002691s | byte equality observed |
| test_binding_of.test | 8 | 0.002582s | 0.002520s | 0.002489s | byte equality observed |
| test_callable.test | 5 | 0.004425s | 0.004429s | 0.004314s | byte equality observed |
| test_construct.test | 4 | 0.005801s | 0.005723s | 0.005610s | byte equality observed |
| test_construct_cref.test | 6 | 0.004057s | 0.003942s | 0.003935s | byte equality observed |
| test_construct_ref.test | 7 | 0.003558s | 0.003479s | 0.003471s | byte equality observed |
| test_deduced.test | 8 | 0.002580s | 0.002522s | 0.002505s | byte equality observed |
| test_dereference.test | 8 | 0.002795s | 0.002710s | 0.002662s | byte equality observed |
| test_dynamic_any_cast.test | 6 | 0.003963s | 0.003943s | 0.003903s | byte equality observed |
| test_equal.test | 7 | 0.003320s | 0.003215s | 0.003215s | byte equality observed |
| test_forward_iterator.test | 8 | 0.002801s | 0.002732s | 0.002741s | byte equality observed |
| test_free.test | 7 | 0.003266s | 0.003221s | 0.003244s | byte equality observed |
| test_increment.test | 8 | 0.002679s | 0.002625s | 0.002571s | byte equality observed |
| test_is_empty.test | 8 | 0.002703s | 0.002626s | 0.002566s | byte equality observed |
| test_less.test | 6 | 0.003518s | 0.003568s | 0.003507s | byte equality observed |
| test_limits.test | 7 | 0.002919s | 0.002860s | 0.002847s | byte equality observed |
| test_member.test | 5 | 0.004077s | 0.004087s | 0.004002s | byte equality observed |
| test_negate.test | 8 | 0.002576s | 0.002558s | 0.002491s | byte equality observed |
| test_nested.test | 8 | 0.002693s | 0.002585s | 0.002607s | byte equality observed |
| test_null.test | 8 | 0.002785s | 0.002739s | 0.002709s | byte equality observed |
| test_reference.test | 8 | 0.002859s | 0.002854s | 0.002759s | byte equality observed |
| test_relaxed.test | 8 | 0.002641s | 0.002588s | 0.002590s | byte equality observed |
| test_same_type.test | 8 | 0.002787s | 0.002708s | 0.002703s | byte equality observed |
| test_stream.test | 6 | 0.003819s | 0.003706s | 0.003718s | byte equality observed |
| test_subscript.test | 8 | 0.002862s | 0.002819s | 0.002771s | byte equality observed |
| test_tuple.test | 8 | 0.002864s | 0.002830s | 0.002788s | byte equality observed |
| test_typeid_of.test | 8 | 0.002848s | 0.002830s | 0.002774s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
