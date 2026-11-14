# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.413943 | 0.961316 | 1.472896 | 0.000698 | 0.000774 | 0.001820 |
| test_uuid.test | RUN | 0.269062 | 0.756962 | 1.003320 | 0.001822 | 0.001808 | 0.001795 |
| test_uuid_no_simd.test | RUN | 0.244058 | 0.726450 | 0.896675 | 0.001946 | 0.001776 | 0.001399 |
| test_uuid_2.test | RUN | 0.183241 | 0.566713 | 0.677477 | 0.001632 | 0.001706 | 0.001260 |
| test_uuid_3.test | RUN | 0.151779 | 0.379711 | 0.518191 | 0.001901 | 0.001788 | 0.001627 |
| test_alignment.test | RUN | 0.140957 | 0.351049 | 0.478242 | 0.001757 | 0.001523 | 0.001738 |
| test_alignment_2.test | RUN | 0.141251 | 0.350958 | 0.509697 | 0.001616 | 0.001510 | 0.001337 |
| test_attribute_packed.test | RUN | 0.151486 | 0.360440 | 0.496535 | 0.001780 | 0.001893 | 0.001308 |
| test_pragma_pack.test | RUN | 0.138186 | 0.353293 | 0.492023 | 0.001778 | 0.001842 | 0.001682 |
| test_data.test | RUN | 0.175294 | 0.641142 | 0.690018 | 0.001821 | 0.001632 | 0.001744 |
| test_comparison.test | RUN | 0.235568 | 0.743817 | 0.950661 | 0.001820 | 0.001819 | 0.001676 |
| test_comparison_no_simd.test | RUN | 0.219430 | 0.841120 | 0.867283 | 0.001802 | 0.001701 | 0.001676 |
| test_io.test | RUN | 0.310499 | 1.384838 | 1.330088 | 0.001906 | 0.001888 | 0.001926 |
| test_io_no_simd.test | RUN | 0.272729 | 1.355072 | 1.293612 | 0.001600 | 0.001815 | 0.001815 |
| test_io_2.test | RUN | 0.234313 | 1.409514 | 0.944456 | 0.001678 | 0.001766 | 0.001713 |
| test_io_2_no_simd.test | RUN | 0.210010 | 1.334762 | 0.899245 | 0.001835 | 0.001879 | 0.001884 |
| test_to_chars.test | RUN | 0.214264 | 0.897653 | 0.914684 | 0.001872 | 0.002004 | 0.001897 |
| test_to_chars_no_simd.test | RUN | 0.195390 | 0.918897 | 0.847050 | 0.001888 | 0.001806 | 0.001799 |
| test_to_chars_2.test | RUN | 0.246605 | 1.645950 | 1.055812 | 0.001850 | 0.001899 | 0.001675 |
| test_to_chars_2_no_simd.test | RUN | 0.229670 | 1.751714 | 0.965888 | 0.001578 | 0.001774 | 0.001783 |
| test_to_chars_3.test | RUN | 0.173047 | 0.604628 | 0.637111 | 0.001775 | 0.001882 | 0.001704 |
| test_from_chars.test | RUN | 0.203134 | 0.859057 | 0.747730 | 0.001764 | 0.001627 | 0.001527 |
| test_from_chars_no_simd.test | RUN | 0.178112 | 0.675649 | 0.622952 | 0.001570 | 0.001700 | 0.001664 |
| test_from_chars_2.test | RUN | 0.197977 | 0.803990 | 0.735732 | 0.001543 | 0.001542 | 0.001853 |
| test_from_chars_2_no_simd.test | RUN | 0.173895 | 0.622189 | 0.607414 | 0.001738 | 0.001567 | 0.001783 |
| test_uuid_from_string.test | RUN | 0.231124 | 0.890295 | 0.865932 | 0.001759 | 0.001832 | 0.001714 |
| test_uuid_from_string_2.test | RUN | 0.202794 | 0.812289 | 0.762667 | 0.001876 | 0.002040 | 0.001806 |
| test_uuid_from_string_3.test | RUN | 0.205792 | 0.790593 | 0.789629 | 0.001525 | 0.001836 | 0.001905 |
| test_uuid_clock.test | RUN | 0.131000 | 0.331159 | 0.479650 | 0.001544 | 0.001848 | 0.001227 |
| test_nil_generator.test | RUN | 0.153510 | 0.402821 | 0.539198 | 0.001704 | 0.001897 | 0.001752 |
| test_string_generator.test | RUN | 0.194868 | 0.637680 | 0.763942 | 0.001936 | 0.002072 | 0.001459 |
| test_string_generator_2.test | RUN | 0.242935 | 0.925392 | 0.847991 | 0.001680 | 0.001792 | 0.001616 |
| test_random_generator.test | RUN | 0.327702 | 1.725522 | 1.239574 | 0.002523 | 0.002746 | 0.002620 |
| test_random_generator_2.test | RUN | 0.240431 | 0.692040 | 0.871259 | 0.001574 | 0.001838 | 0.001615 |
| test_name_generator.test | RUN | 0.210706 | 2.321208 | 0.924448 | 0.001809 | 0.001874 | 0.001557 |
| test_namespaces.test | RUN | 0.173181 | 0.504312 | 0.584671 | 0.001643 | 0.001864 | 0.001613 |
| test_name_generator_md5.test | RUN | 0.219539 | 1.072874 | 0.877355 | 0.001671 | 0.001960 | 0.001876 |
| test_name_generator_sha1.test | RUN | 0.204786 | 3.268992 | 0.872526 | 0.001740 | 0.001825 | 0.001716 |
| test_time_generator.test | RUN | 0.222882 | 0.692939 | 0.807764 | 0.001610 | 0.001899 | 0.001748 |
| test_time_generator_v1.test | RUN | 0.248586 | 0.732232 | 0.977670 | 0.002054 | 0.002248 | 0.002392 |
| test_time_generator_v1_2.test | RUN | 0.254084 | 0.705385 | 0.895165 | 0.002086 | 0.002193 | 0.002150 |
| test_time_generator_v1_3.test | RUN | 0.275449 | 0.723481 | 1.006763 | 0.004353 | 0.005053 | 0.004518 |
| test_time_generator_v6.test | RUN | 0.252985 | 0.746488 | 0.973493 | 0.002106 | 0.002486 | 0.002178 |
| test_time_generator_v6_2.test | RUN | 0.256360 | 0.685800 | 0.892514 | 0.001786 | 0.002118 | 0.002103 |
| test_time_generator_v6_3.test | RUN | 0.273862 | 0.746985 | 1.017552 | 0.004963 | 0.004580 | 0.004817 |
| test_time_generator_v7.test | RUN | 0.241124 | 0.725568 | 0.921422 | 0.001640 | 0.002062 | 0.001817 |
| test_time_generator_v7_2.test | RUN | 0.228590 | 0.648037 | 0.824534 | 0.001872 | 0.001896 | 0.001687 |
| test_time_generator_v7_3.test | RUN | 0.226559 | 0.834367 | 0.871346 | 0.002481 | 0.002558 | 0.002528 |
| test_serialization.test | RUN | 0.430348 | 1.244733 | 1.472858 | 0.002023 | 0.001707 | 0.001958 |
| test_tagging.test | RUN | 0.238064 | 0.798029 | 0.834903 | 0.001780 | 0.001660 | 0.001903 |
| test_uuid_class.test | RUN | 0.240329 | 0.720172 | 0.944238 | 0.001570 | 0.001714 | 0.001702 |
| test_uuid_in_map.test | RUN | 0.270364 | 0.823938 | 1.035894 | 0.001625 | 0.001725 | 0.001755 |
| test_hash.test | RUN | 0.270654 | 0.738467 | 0.934316 | 0.001850 | 0.001780 | 0.001874 |
| test_hash_value.test | RUN | 0.194647 | 0.518152 | 0.662653 | 0.004968 | 0.004935 | 0.004778 |
| test_std_unordered.test | RUN | 0.253659 | 0.836751 | 0.944418 | 0.001883 | 0.001901 | 0.001899 |
| test_boost_unordered.test | RUN | 0.358798 | 1.067037 | 1.214099 | 0.001561 | 0.001795 | 0.001731 |
| test_detail_md5.test | RUN | 0.169762 | 0.522363 | 0.633756 | 0.001704 | 0.001670 | 0.001788 |
| test_detail_sha1.test | RUN | 0.157667 | 0.684017 | 0.575584 | 0.009258 | 0.008988 | 0.008374 |
| test_detail_endian.test | RUN | 0.121114 | 0.384502 | 0.425774 | 0.001536 | 0.001768 | 0.001821 |
| test_detail_chacha20.test | RUN | 0.134403 | 0.472559 | 0.452963 | 0.001585 | 0.001623 | 0.001677 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.118134 | 0.282629 | 0.347122 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.123222 | 0.276259 | 0.362483 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.198446 | 0.536204 | 0.675434 | 0.001788 | 0.001928 | 0.001426 |
| test_bench_random.test | RUN | 0.232001 | 0.680081 | 0.883810 | 0.005781 | 0.005906 | 0.005458 |
| test_entropy_error.test | RUN | 0.117784 | 0.318931 | 0.402521 | 0.001718 | 0.001907 | 0.001625 |
| test_detail_random_provider.test | RUN | 0.227184 | 0.536054 | 0.801608 | 0.001416 | 0.001460 | 0.001413 |
| test_constants.test | RUN | 0.173947 | 0.484667 | 0.634461 | 0.001624 | 0.001768 | 0.001761 |
| test_uuid_cx.test | COMPILE | 0.099827 | 0.235395 | 0.337850 | — | — | — |
| test_uuid_cx2.test | RUN | 0.177920 | 0.558777 | 0.688103 | 0.001742 | 0.001894 | 0.001772 |
| test_uuid_cx3.test | RUN | 0.160269 | 0.424986 | 0.621449 | 0.001763 | 0.001564 | 0.001706 |
| test_uuid_cx3_no_simd.test | RUN | 0.141340 | 0.415302 | 0.509191 | 0.001616 | 0.001634 | 0.001658 |
| test_hash_value_cx.test | RUN | 0.153189 | 0.405335 | 0.558845 | 0.001517 | 0.001878 | 0.001601 |
| test_string_generator_cx.test | RUN | 0.175246 | 0.486183 | 0.608189 | 0.001768 | 0.001592 | 0.001788 |
| test_string_generator_cx2.test | RUN | 0.215581 | 0.588661 | 0.693879 | 0.001490 | 0.001816 | 0.001690 |
| test_constants_cx.test | RUN | 0.147065 | 0.344637 | 0.522909 | 0.001774 | 0.001807 | 0.001545 |
| test_from_chars_cx.test | RUN | 0.184916 | 0.650589 | 0.670626 | 0.001768 | 0.001839 | 0.001728 |
| test_from_chars_cx2.test | RUN | 0.192623 | 0.804172 | 0.717849 | 0.001775 | 0.001744 | 0.001746 |
| test_to_chars_cx.test | RUN | 0.193990 | 0.746309 | 0.787084 | 0.001715 | 0.001423 | 0.001694 |
| test_uuid_from_string_cx.test | RUN | 0.201559 | 0.739748 | 0.665530 | 0.001335 | 0.001331 | 0.001347 |
| quick.test | RUN | 0.218284 | 0.595851 | 0.739141 | 0.001295 | 0.001281 | 0.001280 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.000×, 1.002× | 1.000× |
| clang | 0.997× | 1.002×, 0.992× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001140s | 0.001151s | 0.001151s | byte equality observed |
| test_alignment.test | 10 | 0.001139s | 0.001161s | 0.001151s | byte equality observed |
| test_alignment_2.test | 10 | 0.001140s | 0.001131s | 0.001144s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001165s | 0.001152s | 0.001127s | byte equality observed |
| test_bench_random.test | 4 | 0.005184s | 0.005184s | 0.005143s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001215s | 0.001229s | 0.001179s | byte equality observed |
| test_comparison.test | 10 | 0.001190s | 0.001217s | 0.001178s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001202s | 0.001186s | 0.001192s | byte equality observed |
| test_constants.test | 10 | 0.001179s | 0.001179s | 0.001163s | byte equality observed |
| test_constants_cx.test | 10 | 0.001127s | 0.001146s | 0.001138s | byte equality observed |
| test_data.test | 10 | 0.001167s | 0.001157s | 0.001127s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001150s | 0.001153s | 0.001147s | byte equality observed |
| test_detail_endian.test | 10 | 0.001141s | 0.001167s | 0.001156s | byte equality observed |
| test_detail_md5.test | 10 | 0.001164s | 0.001174s | 0.001155s | byte equality observed |
| test_detail_random_provider.test | 9 | 0.001160s | 0.001155s | 0.001144s | byte equality observed |
| test_detail_sha1.test | 3 | 0.008303s | 0.008478s | 0.007645s | byte equality observed |
| test_entropy_error.test | 10 | 0.001133s | 0.001162s | 0.001130s | byte equality observed |
| test_from_chars.test | 10 | 0.001151s | 0.001122s | 0.001133s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001159s | 0.001145s | 0.001130s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001172s | 0.001159s | 0.001161s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001157s | 0.001154s | 0.001147s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001142s | 0.001149s | 0.001139s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001151s | 0.001152s | 0.001132s | byte equality observed |
| test_hash.test | 10 | 0.001184s | 0.001159s | 0.001157s | byte equality observed |
| test_hash_value.test | 6 | 0.004185s | 0.004144s | 0.004046s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001134s | 0.001121s | 0.001139s | byte equality observed |
| test_include1.test | 10 | 0.000492s | 0.000505s | 0.001118s | byte equality observed |
| test_io.test | 10 | 0.001214s | 0.001222s | 0.001226s | byte equality observed |
| test_io_2.test | 10 | 0.001292s | 0.001286s | 0.001263s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001291s | 0.001301s | 0.001280s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001257s | 0.001221s | 0.001209s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001173s | 0.001152s | 0.001115s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001186s | 0.001193s | 0.001184s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001180s | 0.001175s | 0.001172s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001205s | 0.001223s | 0.001176s | byte equality observed |
| test_namespaces.test | 10 | 0.001159s | 0.001161s | 0.001115s | byte equality observed |
| test_nil_generator.test | 10 | 0.001141s | 0.001159s | 0.001148s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001143s | 0.001158s | 0.001116s | byte equality observed |
| test_random_generator.test | 10 | 0.002027s | 0.001992s | 0.001988s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001171s | 0.001172s | 0.001167s | byte equality observed |
| test_serialization.test | 10 | 0.001275s | 0.001288s | 0.001261s | byte equality observed |
| test_std_unordered.test | 10 | 0.001223s | 0.001195s | 0.001216s | byte equality observed |
| test_string_generator.test | 10 | 0.001274s | 0.001272s | 0.001248s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001167s | 0.001162s | 0.001181s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001154s | 0.001173s | 0.001146s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001168s | 0.001171s | 0.001152s | byte equality observed |
| test_tagging.test | 10 | 0.001161s | 0.001170s | 0.001146s | byte equality observed |
| test_time_generator.test | 10 | 0.001178s | 0.001174s | 0.001155s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001597s | 0.001674s | 0.001709s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001426s | 0.001445s | 0.001448s | byte equality observed |
| test_time_generator_v1_3.test | 6 | 0.003605s | 0.003537s | 0.003610s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001604s | 0.001669s | 0.001697s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001405s | 0.001437s | 0.001458s | byte equality observed |
| test_time_generator_v6_3.test | 6 | 0.003559s | 0.003532s | 0.003595s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001426s | 0.001446s | 0.001464s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001223s | 0.001232s | 0.001208s | byte equality observed |
| test_time_generator_v7_3.test | 10 | 0.001829s | 0.001814s | 0.001771s | byte equality observed |
| test_to_chars.test | 10 | 0.001240s | 0.001226s | 0.001206s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001191s | 0.001187s | 0.001189s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001193s | 0.001207s | 0.001180s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001176s | 0.001153s | 0.001143s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001175s | 0.001174s | 0.001162s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001241s | 0.001232s | 0.001205s | byte equality observed |
| test_uuid.test | 10 | 0.001162s | 0.001132s | 0.001142s | byte equality observed |
| test_uuid_2.test | 10 | 0.001170s | 0.001143s | 0.001130s | byte equality observed |
| test_uuid_3.test | 10 | 0.001153s | 0.001169s | 0.001137s | byte equality observed |
| test_uuid_class.test | 10 | 0.001180s | 0.001166s | 0.001166s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001154s | 0.001146s | 0.001158s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001174s | 0.001164s | 0.001141s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001153s | 0.001164s | 0.001129s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001164s | 0.001151s | 0.001138s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001191s | 0.001178s | 0.001160s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001431s | 0.001422s | 0.001434s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001267s | 0.001253s | 0.001249s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001151s | 0.001173s | 0.001139s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001179s | 0.001149s | 0.001167s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001156s | 0.001159s | 0.001142s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
