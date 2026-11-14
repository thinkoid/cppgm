# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.446075 | 0.975825 | 1.480330 | 0.000698 | 0.000768 | 0.001789 |
| test_uuid.test | RUN | 0.261580 | 0.815086 | 1.013000 | 0.001812 | 0.002039 | 0.001930 |
| test_uuid_no_simd.test | RUN | 0.246405 | 0.759111 | 0.903389 | 0.001692 | 0.001577 | 0.001460 |
| test_uuid_2.test | RUN | 0.197249 | 0.573014 | 0.680606 | 0.001779 | 0.001680 | 0.001543 |
| test_uuid_3.test | RUN | 0.155625 | 0.427667 | 0.517399 | 0.001781 | 0.001930 | 0.001489 |
| test_alignment.test | RUN | 0.143410 | 0.369492 | 0.481128 | 0.001850 | 0.001899 | 0.001798 |
| test_alignment_2.test | RUN | 0.141015 | 0.362040 | 0.471320 | 0.001802 | 0.001702 | 0.001690 |
| test_attribute_packed.test | RUN | 0.150503 | 0.356894 | 0.513764 | 0.001668 | 0.001935 | 0.001473 |
| test_pragma_pack.test | RUN | 0.143547 | 0.360154 | 0.518528 | 0.001521 | 0.001715 | 0.001454 |
| test_data.test | RUN | 0.164601 | 0.650407 | 0.681907 | 0.001778 | 0.001887 | 0.001901 |
| test_comparison.test | RUN | 0.255855 | 0.764021 | 0.907893 | 0.001786 | 0.001940 | 0.001398 |
| test_comparison_no_simd.test | RUN | 0.216190 | 0.844306 | 0.857525 | 0.001864 | 0.001629 | 0.001504 |
| test_io.test | RUN | 0.308698 | 1.465295 | 1.392442 | 0.001704 | 0.002197 | 0.001900 |
| test_io_no_simd.test | RUN | 0.280408 | 1.440003 | 1.261369 | 0.001786 | 0.001928 | 0.002096 |
| test_io_2.test | RUN | 0.234200 | 1.459758 | 0.954015 | 0.001683 | 0.001878 | 0.002010 |
| test_io_2_no_simd.test | RUN | 0.217170 | 1.381022 | 0.895090 | 0.001798 | 0.001774 | 0.001881 |
| test_to_chars.test | RUN | 0.200906 | 0.934261 | 0.898287 | 0.001916 | 0.002058 | 0.001897 |
| test_to_chars_no_simd.test | RUN | 0.196848 | 0.935679 | 0.850081 | 0.001714 | 0.001958 | 0.001920 |
| test_to_chars_2.test | RUN | 0.258482 | 1.694266 | 1.067525 | 0.001824 | 0.001927 | 0.001232 |
| test_to_chars_2_no_simd.test | RUN | 0.218494 | 1.801895 | 0.970615 | 0.001847 | 0.001725 | 0.001849 |
| test_to_chars_3.test | RUN | 0.181059 | 0.636952 | 0.635689 | 0.001764 | 0.001686 | 0.001501 |
| test_from_chars.test | RUN | 0.207876 | 0.876784 | 0.731519 | 0.001846 | 0.001943 | 0.001572 |
| test_from_chars_no_simd.test | RUN | 0.183325 | 0.704606 | 0.642370 | 0.001613 | 0.001300 | 0.001763 |
| test_from_chars_2.test | RUN | 0.204154 | 0.798879 | 0.748068 | 0.001795 | 0.001838 | 0.001615 |
| test_from_chars_2_no_simd.test | RUN | 0.175896 | 0.626121 | 0.583004 | 0.001578 | 0.001566 | 0.001850 |
| test_uuid_from_string.test | RUN | 0.235831 | 0.906734 | 0.889213 | 0.001548 | 0.001646 | 0.001588 |
| test_uuid_from_string_2.test | RUN | 0.211767 | 0.838762 | 0.760047 | 0.001823 | 0.002144 | 0.001914 |
| test_uuid_from_string_3.test | RUN | 0.209050 | 0.807978 | 0.766506 | 0.001698 | 0.001976 | 0.001894 |
| test_uuid_clock.test | RUN | 0.131333 | 0.341838 | 0.484863 | 0.001727 | 0.001797 | 0.001470 |
| test_nil_generator.test | RUN | 0.155073 | 0.393808 | 0.557160 | 0.001903 | 0.001757 | 0.001847 |
| test_string_generator.test | RUN | 0.201394 | 0.648289 | 0.757685 | 0.001928 | 0.002126 | 0.001816 |
| test_string_generator_2.test | RUN | 0.245766 | 0.930465 | 0.830591 | 0.001616 | 0.001558 | 0.001793 |
| test_random_generator.test | RUN | 0.329829 | 1.765189 | 1.249606 | 0.002688 | 0.002698 | 0.002691 |
| test_random_generator_2.test | RUN | 0.241760 | 0.703337 | 0.842125 | 0.001734 | 0.001910 | 0.001783 |
| test_name_generator.test | RUN | 0.211798 | 2.304567 | 0.929599 | 0.001818 | 0.001905 | 0.001620 |
| test_namespaces.test | RUN | 0.176890 | 0.496572 | 0.634653 | 0.001546 | 0.001922 | 0.001734 |
| test_name_generator_md5.test | RUN | 0.215798 | 1.067883 | 0.832010 | 0.001792 | 0.001943 | 0.001813 |
| test_name_generator_sha1.test | RUN | 0.213208 | 3.318398 | 0.869171 | 0.001811 | 0.002042 | 0.001646 |
| test_time_generator.test | RUN | 0.240042 | 0.692154 | 0.821118 | 0.001550 | 0.001930 | 0.001813 |
| test_time_generator_v1.test | RUN | 0.262977 | 0.758563 | 0.933944 | 0.002067 | 0.002452 | 0.002467 |
| test_time_generator_v1_2.test | RUN | 0.253404 | 0.719608 | 0.894509 | 0.002185 | 0.002282 | 0.002228 |
| test_time_generator_v1_3.test | RUN | 0.285252 | 0.756195 | 0.990273 | 0.004476 | 0.004339 | 0.005117 |
| test_time_generator_v6.test | RUN | 0.259422 | 0.756228 | 0.922397 | 0.002092 | 0.002409 | 0.002045 |
| test_time_generator_v6_2.test | RUN | 0.252980 | 0.725109 | 0.910766 | 0.001687 | 0.002308 | 0.002080 |
| test_time_generator_v6_3.test | RUN | 0.281812 | 0.750064 | 0.973910 | 0.004180 | 0.004898 | 0.005077 |
| test_time_generator_v7.test | RUN | 0.246591 | 0.763767 | 0.933101 | 0.001956 | 0.002140 | 0.002104 |
| test_time_generator_v7_2.test | RUN | 0.231062 | 0.686291 | 0.866764 | 0.001692 | 0.002050 | 0.001526 |
| test_time_generator_v7_3.test | RUN | 0.229841 | 0.861763 | 0.823398 | 0.002298 | 0.002635 | 0.002409 |
| test_serialization.test | RUN | 0.439404 | 1.310051 | 1.524222 | 0.001983 | 0.001966 | 0.002044 |
| test_tagging.test | RUN | 0.236148 | 0.813588 | 0.896151 | 0.001812 | 0.001812 | 0.001846 |
| test_uuid_class.test | RUN | 0.246787 | 0.741215 | 0.882137 | 0.001503 | 0.001375 | 0.001639 |
| test_uuid_in_map.test | RUN | 0.268097 | 0.827982 | 1.016970 | 0.001603 | 0.001839 | 0.001834 |
| test_hash.test | RUN | 0.273770 | 0.760853 | 0.929725 | 0.001759 | 0.001675 | 0.001824 |
| test_hash_value.test | RUN | 0.194514 | 0.509827 | 0.701838 | 0.004602 | 0.005052 | 0.004719 |
| test_std_unordered.test | RUN | 0.250858 | 0.841876 | 0.917852 | 0.001826 | 0.001945 | 0.001884 |
| test_boost_unordered.test | RUN | 0.357478 | 1.087475 | 1.233406 | 0.001660 | 0.001839 | 0.001558 |
| test_detail_md5.test | RUN | 0.170223 | 0.523170 | 0.661182 | 0.001624 | 0.001902 | 0.001938 |
| test_detail_sha1.test | RUN | 0.155542 | 0.667483 | 0.629571 | 0.009163 | 0.009470 | 0.008141 |
| test_detail_endian.test | RUN | 0.124192 | 0.398035 | 0.441816 | 0.001555 | 0.001854 | 0.001559 |
| test_detail_chacha20.test | RUN | 0.132741 | 0.477681 | 0.484884 | 0.001768 | 0.001842 | 0.001739 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.118369 | 0.287120 | 0.356869 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.130266 | 0.268854 | 0.383943 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.211962 | 0.527868 | 0.698392 | 0.001762 | 0.001955 | 0.001820 |
| test_bench_random.test | RUN | 0.229550 | 0.709791 | 0.853855 | 0.005578 | 0.006048 | 0.005720 |
| test_entropy_error.test | RUN | 0.112114 | 0.328278 | 0.404004 | 0.001401 | 0.001946 | 0.001626 |
| test_detail_random_provider.test | RUN | 0.227317 | 0.546906 | 0.763229 | 0.001816 | 0.001757 | 0.001557 |
| test_constants.test | RUN | 0.174607 | 0.505153 | 0.585458 | 0.001682 | 0.001854 | 0.001359 |
| test_uuid_cx.test | COMPILE | 0.101512 | 0.243609 | 0.316459 | — | — | — |
| test_uuid_cx2.test | RUN | 0.184170 | 0.562738 | 0.649672 | 0.001625 | 0.001627 | 0.001765 |
| test_uuid_cx3.test | RUN | 0.159712 | 0.460252 | 0.623253 | 0.001684 | 0.001872 | 0.001550 |
| test_uuid_cx3_no_simd.test | RUN | 0.144434 | 0.429796 | 0.509915 | 0.001559 | 0.001690 | 0.001783 |
| test_hash_value_cx.test | RUN | 0.158042 | 0.420564 | 0.559140 | 0.001570 | 0.001811 | 0.001568 |
| test_string_generator_cx.test | RUN | 0.177588 | 0.498777 | 0.604281 | 0.001850 | 0.001849 | 0.001743 |
| test_string_generator_cx2.test | RUN | 0.225614 | 0.623737 | 0.696535 | 0.001454 | 0.001954 | 0.001943 |
| test_constants_cx.test | RUN | 0.151515 | 0.350424 | 0.526530 | 0.001329 | 0.001816 | 0.001556 |
| test_from_chars_cx.test | RUN | 0.191184 | 0.669099 | 0.675602 | 0.001388 | 0.001988 | 0.001630 |
| test_from_chars_cx2.test | RUN | 0.193750 | 0.842554 | 0.739414 | 0.001800 | 0.001832 | 0.001866 |
| test_to_chars_cx.test | RUN | 0.192484 | 0.774231 | 0.732845 | 0.001609 | 0.001962 | 0.001826 |
| test_uuid_from_string_cx.test | RUN | 0.198723 | 0.766483 | 0.742128 | 0.001190 | 0.001386 | 0.001343 |
| quick.test | RUN | 0.224728 | 0.651791 | 0.752868 | 0.001268 | 0.001412 | 0.001336 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.019×, 0.985× | 1.012× |
| clang | 0.996× | 1.003×, 0.989× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001129s | 0.001157s | 0.001133s | byte equality observed |
| test_alignment.test | 10 | 0.001140s | 0.001130s | 0.001169s | byte equality observed |
| test_alignment_2.test | 10 | 0.001124s | 0.001159s | 0.001146s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001151s | 0.001167s | 0.001158s | byte equality observed |
| test_bench_random.test | 4 | 0.005188s | 0.005179s | 0.005138s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001221s | 0.001215s | 0.001170s | byte equality observed |
| test_comparison.test | 10 | 0.001175s | 0.001200s | 0.001195s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001171s | 0.001211s | 0.001203s | byte equality observed |
| test_constants.test | 10 | 0.001163s | 0.001165s | 0.001143s | byte equality observed |
| test_constants_cx.test | 10 | 0.001155s | 0.001137s | 0.001122s | byte equality observed |
| test_data.test | 10 | 0.001145s | 0.001140s | 0.001155s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001160s | 0.001171s | 0.001137s | byte equality observed |
| test_detail_endian.test | 10 | 0.001151s | 0.001132s | 0.001159s | byte equality observed |
| test_detail_md5.test | 10 | 0.001182s | 0.001168s | 0.001174s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001159s | 0.001163s | 0.001137s | byte equality observed |
| test_detail_sha1.test | 3 | 0.007963s | 0.008456s | 0.006696s | byte equality observed |
| test_entropy_error.test | 10 | 0.001161s | 0.001140s | 0.001128s | byte equality observed |
| test_from_chars.test | 10 | 0.001138s | 0.001125s | 0.001143s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001130s | 0.001141s | 0.001148s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001165s | 0.001158s | 0.001172s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001163s | 0.001166s | 0.001139s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001157s | 0.001168s | 0.001149s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001161s | 0.001174s | 0.001169s | byte equality observed |
| test_hash.test | 10 | 0.001154s | 0.001131s | 0.001195s | byte equality observed |
| test_hash_value.test | 6 | 0.004191s | 0.004089s | 0.004087s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001154s | 0.001143s | 0.001162s | byte equality observed |
| test_include1.test | 10 | 0.000510s | 0.000482s | 0.001129s | byte equality observed |
| test_io.test | 10 | 0.001233s | 0.001246s | 0.001238s | byte equality observed |
| test_io_2.test | 10 | 0.001292s | 0.001277s | 0.001298s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001275s | 0.001345s | 0.001304s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001213s | 0.001261s | 0.001242s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001172s | 0.001128s | 0.001171s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001195s | 0.001166s | 0.001192s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001191s | 0.001171s | 0.001155s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001186s | 0.001202s | 0.001210s | byte equality observed |
| test_namespaces.test | 10 | 0.001151s | 0.001167s | 0.001149s | byte equality observed |
| test_nil_generator.test | 10 | 0.001146s | 0.001161s | 0.001141s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001178s | 0.001153s | 0.001129s | byte equality observed |
| test_random_generator.test | 9 | 0.002036s | 0.002002s | 0.002025s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001170s | 0.001167s | 0.001122s | byte equality observed |
| test_serialization.test | 10 | 0.001283s | 0.001266s | 0.001306s | byte equality observed |
| test_std_unordered.test | 10 | 0.001253s | 0.001189s | 0.001242s | byte equality observed |
| test_string_generator.test | 10 | 0.001285s | 0.001221s | 0.001244s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001200s | 0.001152s | 0.001194s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001184s | 0.001172s | 0.001186s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001169s | 0.001151s | 0.001166s | byte equality observed |
| test_tagging.test | 10 | 0.001163s | 0.001184s | 0.001198s | byte equality observed |
| test_time_generator.test | 7 | 0.001194s | 0.001148s | 0.001198s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001599s | 0.001693s | 0.001713s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001412s | 0.001462s | 0.001483s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.003658s | 0.003645s | 0.003828s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001600s | 0.001696s | 0.001700s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001422s | 0.001477s | 0.001457s | byte equality observed |
| test_time_generator_v6_3.test | 6 | 0.003715s | 0.003621s | 0.003639s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001390s | 0.001426s | 0.001401s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001227s | 0.001204s | 0.001262s | byte equality observed |
| test_time_generator_v7_3.test | 10 | 0.001795s | 0.001797s | 0.001812s | byte equality observed |
| test_to_chars.test | 10 | 0.001245s | 0.001206s | 0.001234s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001185s | 0.001174s | 0.001216s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001194s | 0.001165s | 0.001193s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001175s | 0.001147s | 0.001170s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001167s | 0.001135s | 0.001151s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001246s | 0.001235s | 0.001242s | byte equality observed |
| test_uuid.test | 10 | 0.001152s | 0.001167s | 0.001169s | byte equality observed |
| test_uuid_2.test | 10 | 0.001172s | 0.001170s | 0.001167s | byte equality observed |
| test_uuid_3.test | 10 | 0.001148s | 0.001134s | 0.001165s | byte equality observed |
| test_uuid_class.test | 10 | 0.001174s | 0.001174s | 0.001178s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001165s | 0.001163s | 0.001169s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001158s | 0.001184s | 0.001163s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001135s | 0.001149s | 0.001167s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001122s | 0.001144s | 0.001131s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001162s | 0.001186s | 0.001167s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001428s | 0.001444s | 0.001448s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001268s | 0.001236s | 0.001239s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001134s | 0.001154s | 0.001162s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001161s | 0.001163s | 0.001177s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001159s | 0.001191s | 0.001174s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
