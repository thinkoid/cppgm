# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.414150 | 0.966306 | 1.455153 | 0.000742 | 0.000700 | 0.001609 |
| test_uuid.test | RUN | 0.270016 | 0.798804 | 1.024737 | 0.001815 | 0.001817 | 0.001764 |
| test_uuid_no_simd.test | RUN | 0.253338 | 0.736742 | 0.943363 | 0.001838 | 0.001506 | 0.001696 |
| test_uuid_2.test | RUN | 0.183351 | 0.567858 | 0.676673 | 0.001631 | 0.001622 | 0.001652 |
| test_uuid_3.test | RUN | 0.155727 | 0.407525 | 0.513731 | 0.001910 | 0.001858 | 0.001569 |
| test_alignment.test | RUN | 0.139425 | 0.354056 | 0.481725 | 0.001826 | 0.001794 | 0.001814 |
| test_alignment_2.test | RUN | 0.140724 | 0.346853 | 0.470273 | 0.001627 | 0.001601 | 0.001700 |
| test_attribute_packed.test | RUN | 0.147295 | 0.342535 | 0.508964 | 0.001729 | 0.001789 | 0.001714 |
| test_pragma_pack.test | RUN | 0.140874 | 0.348644 | 0.508188 | 0.001550 | 0.001826 | 0.001569 |
| test_data.test | RUN | 0.178534 | 0.637909 | 0.658906 | 0.001946 | 0.001788 | 0.001860 |
| test_comparison.test | RUN | 0.228754 | 0.726790 | 0.955328 | 0.001783 | 0.001865 | 0.001568 |
| test_comparison_no_simd.test | RUN | 0.233203 | 0.819918 | 0.863844 | 0.001756 | 0.001553 | 0.001558 |
| test_io.test | RUN | 0.320033 | 1.384216 | 1.336678 | 0.001915 | 0.001790 | 0.001956 |
| test_io_no_simd.test | RUN | 0.295411 | 1.351206 | 1.295925 | 0.001670 | 0.001924 | 0.001999 |
| test_io_2.test | RUN | 0.239424 | 1.401518 | 0.992422 | 0.001742 | 0.001862 | 0.001742 |
| test_io_2_no_simd.test | RUN | 0.211314 | 1.320032 | 0.847681 | 0.001955 | 0.001926 | 0.001920 |
| test_to_chars.test | RUN | 0.210990 | 0.886220 | 0.899505 | 0.001834 | 0.001924 | 0.001879 |
| test_to_chars_no_simd.test | RUN | 0.212949 | 0.902675 | 0.846057 | 0.001819 | 0.001763 | 0.001832 |
| test_to_chars_2.test | RUN | 0.259878 | 1.624814 | 1.060249 | 0.001379 | 0.001652 | 0.001668 |
| test_to_chars_2_no_simd.test | RUN | 0.259564 | 1.728173 | 0.971430 | 0.001475 | 0.001659 | 0.001764 |
| test_to_chars_3.test | RUN | 0.179822 | 0.597627 | 0.622339 | 0.001632 | 0.001556 | 0.001628 |
| test_from_chars.test | RUN | 0.199664 | 0.833053 | 0.743055 | 0.001811 | 0.001745 | 0.001787 |
| test_from_chars_no_simd.test | RUN | 0.178153 | 0.681241 | 0.610478 | 0.001576 | 0.001753 | 0.001595 |
| test_from_chars_2.test | RUN | 0.194139 | 0.790335 | 0.711421 | 0.001403 | 0.001577 | 0.001863 |
| test_from_chars_2_no_simd.test | RUN | 0.171896 | 0.613070 | 0.590642 | 0.001519 | 0.001628 | 0.001870 |
| test_uuid_from_string.test | RUN | 0.230790 | 0.876836 | 0.876367 | 0.001623 | 0.001740 | 0.001608 |
| test_uuid_from_string_2.test | RUN | 0.204746 | 0.808310 | 0.756899 | 0.001902 | 0.002118 | 0.001736 |
| test_uuid_from_string_3.test | RUN | 0.206551 | 0.794175 | 0.782425 | 0.001630 | 0.001955 | 0.001822 |
| test_uuid_clock.test | RUN | 0.126699 | 0.339621 | 0.475441 | 0.001369 | 0.001754 | 0.001623 |
| test_nil_generator.test | RUN | 0.147765 | 0.392105 | 0.529231 | 0.001669 | 0.001732 | 0.001722 |
| test_string_generator.test | RUN | 0.193226 | 0.643397 | 0.763385 | 0.001718 | 0.001954 | 0.001611 |
| test_string_generator_2.test | RUN | 0.237763 | 0.913798 | 0.837535 | 0.001451 | 0.001577 | 0.001834 |
| test_random_generator.test | RUN | 0.322860 | 1.731374 | 1.237153 | 0.002385 | 0.002672 | 0.002670 |
| test_random_generator_2.test | RUN | 0.234424 | 0.693343 | 0.875498 | 0.001636 | 0.001760 | 0.001519 |
| test_name_generator.test | RUN | 0.207869 | 2.242971 | 0.925161 | 0.001522 | 0.001658 | 0.001549 |
| test_namespaces.test | RUN | 0.170687 | 0.484972 | 0.601716 | 0.001469 | 0.001778 | 0.001692 |
| test_name_generator_md5.test | RUN | 0.211079 | 1.044929 | 0.870669 | 0.001800 | 0.001875 | 0.001764 |
| test_name_generator_sha1.test | RUN | 0.203709 | 3.236035 | 0.869180 | 0.001792 | 0.001764 | 0.001563 |
| test_time_generator.test | RUN | 0.225166 | 0.668522 | 0.850449 | 0.001535 | 0.001899 | 0.001743 |
| test_time_generator_v1.test | RUN | 0.244582 | 0.718576 | 0.917766 | 0.002044 | 0.002363 | 0.002274 |
| test_time_generator_v1_2.test | RUN | 0.243988 | 0.696567 | 0.881209 | 0.001996 | 0.002190 | 0.002100 |
| test_time_generator_v1_3.test | RUN | 0.267980 | 0.735977 | 1.011204 | 0.004793 | 0.003874 | 0.004428 |
| test_time_generator_v6.test | RUN | 0.248859 | 0.748763 | 0.968140 | 0.001988 | 0.002433 | 0.002044 |
| test_time_generator_v6_2.test | RUN | 0.245271 | 0.694117 | 0.876815 | 0.001867 | 0.002138 | 0.001896 |
| test_time_generator_v6_3.test | RUN | 0.271991 | 0.729110 | 0.998403 | 0.004765 | 0.004848 | 0.004785 |
| test_time_generator_v7.test | RUN | 0.236516 | 0.723767 | 0.929046 | 0.001708 | 0.002184 | 0.001786 |
| test_time_generator_v7_2.test | RUN | 0.222130 | 0.652948 | 0.861103 | 0.001815 | 0.001966 | 0.001509 |
| test_time_generator_v7_3.test | RUN | 0.228607 | 0.825516 | 0.830512 | 0.002475 | 0.002504 | 0.002062 |
| test_serialization.test | RUN | 0.413870 | 1.249361 | 1.508595 | 0.001908 | 0.001828 | 0.001892 |
| test_tagging.test | RUN | 0.227565 | 0.783068 | 0.889663 | 0.001695 | 0.001816 | 0.001579 |
| test_uuid_class.test | RUN | 0.237194 | 0.694875 | 0.932923 | 0.001598 | 0.001522 | 0.001641 |
| test_uuid_in_map.test | RUN | 0.262389 | 0.805548 | 0.968982 | 0.001634 | 0.001791 | 0.001809 |
| test_hash.test | RUN | 0.262390 | 0.726536 | 0.917541 | 0.001716 | 0.001691 | 0.001792 |
| test_hash_value.test | RUN | 0.188630 | 0.504834 | 0.696765 | 0.004868 | 0.004825 | 0.004808 |
| test_std_unordered.test | RUN | 0.244318 | 0.802234 | 0.929719 | 0.001531 | 0.001963 | 0.001879 |
| test_boost_unordered.test | RUN | 0.350328 | 1.045574 | 1.165136 | 0.001602 | 0.001830 | 0.001694 |
| test_detail_md5.test | RUN | 0.160874 | 0.501017 | 0.688332 | 0.001745 | 0.001842 | 0.001664 |
| test_detail_sha1.test | RUN | 0.150748 | 0.636402 | 0.596442 | 0.009548 | 0.009266 | 0.008812 |
| test_detail_endian.test | RUN | 0.118409 | 0.368958 | 0.446818 | 0.001656 | 0.001680 | 0.001778 |
| test_detail_chacha20.test | RUN | 0.130795 | 0.450129 | 0.443278 | 0.001548 | 0.001855 | 0.001780 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.117621 | 0.263607 | 0.369536 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.118915 | 0.263989 | 0.342437 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.198946 | 0.515080 | 0.689929 | 0.001776 | 0.001838 | 0.001832 |
| test_bench_random.test | RUN | 0.222143 | 0.667600 | 0.880145 | 0.005674 | 0.005877 | 0.005864 |
| test_entropy_error.test | RUN | 0.110532 | 0.295739 | 0.415669 | 0.001550 | 0.001838 | 0.001599 |
| test_detail_random_provider.test | RUN | 0.219563 | 0.522887 | 0.768282 | 0.001764 | 0.001658 | 0.001641 |
| test_constants.test | RUN | 0.173075 | 0.480514 | 0.601906 | 0.001579 | 0.001952 | 0.001762 |
| test_uuid_cx.test | COMPILE | 0.098556 | 0.227111 | 0.333489 | — | — | — |
| test_uuid_cx2.test | RUN | 0.178437 | 0.553789 | 0.654594 | 0.001628 | 0.001755 | 0.001833 |
| test_uuid_cx3.test | RUN | 0.154851 | 0.428360 | 0.581829 | 0.001612 | 0.001797 | 0.001726 |
| test_uuid_cx3_no_simd.test | RUN | 0.146731 | 0.403328 | 0.530886 | 0.001668 | 0.001676 | 0.001744 |
| test_hash_value_cx.test | RUN | 0.148751 | 0.395664 | 0.542868 | 0.001562 | 0.001853 | 0.001691 |
| test_string_generator_cx.test | RUN | 0.174572 | 0.487201 | 0.616356 | 0.001596 | 0.001726 | 0.001919 |
| test_string_generator_cx2.test | RUN | 0.215237 | 0.597115 | 0.693639 | 0.001594 | 0.001824 | 0.001658 |
| test_constants_cx.test | RUN | 0.145656 | 0.342764 | 0.525102 | 0.001576 | 0.001504 | 0.001650 |
| test_from_chars_cx.test | RUN | 0.184467 | 0.660142 | 0.702918 | 0.001549 | 0.001890 | 0.001866 |
| test_from_chars_cx2.test | RUN | 0.191869 | 0.789631 | 0.738569 | 0.001769 | 0.001662 | 0.001818 |
| test_to_chars_cx.test | RUN | 0.191273 | 0.724415 | 0.788180 | 0.001685 | 0.001779 | 0.001225 |
| test_uuid_from_string_cx.test | RUN | 0.197501 | 0.719820 | 0.703256 | 0.001394 | 0.001331 | 0.001326 |
| quick.test | RUN | 0.214349 | 0.569926 | 0.744491 | 0.001302 | 0.001364 | 0.001278 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.008×, 0.994× | 0.990× |
| clang | 0.996× | 0.997×, 0.994× | 1.030× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001165s | 0.001143s | 0.001145s | byte equality observed |
| test_alignment.test | 10 | 0.001157s | 0.001145s | 0.001141s | byte equality observed |
| test_alignment_2.test | 10 | 0.001162s | 0.001143s | 0.001150s | byte equality observed |
| test_attribute_packed.test | 7 | 0.001159s | 0.001161s | 0.001158s | byte equality observed |
| test_bench_random.test | 4 | 0.005202s | 0.005139s | 0.005171s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001236s | 0.001205s | 0.001223s | byte equality observed |
| test_comparison.test | 10 | 0.001204s | 0.001187s | 0.001204s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001206s | 0.001191s | 0.001178s | byte equality observed |
| test_constants.test | 9 | 0.001183s | 0.001148s | 0.001117s | byte equality observed |
| test_constants_cx.test | 10 | 0.001146s | 0.001103s | 0.001151s | byte equality observed |
| test_data.test | 10 | 0.001155s | 0.001134s | 0.001149s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001154s | 0.001150s | 0.001161s | byte equality observed |
| test_detail_endian.test | 10 | 0.001148s | 0.001163s | 0.001151s | byte equality observed |
| test_detail_md5.test | 10 | 0.001180s | 0.001175s | 0.001160s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001164s | 0.001160s | 0.001151s | byte equality observed |
| test_detail_sha1.test | 3 | 0.008215s | 0.008467s | 0.007668s | byte equality observed |
| test_entropy_error.test | 10 | 0.001154s | 0.001129s | 0.001135s | byte equality observed |
| test_from_chars.test | 10 | 0.001133s | 0.001150s | 0.001145s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001162s | 0.001141s | 0.001131s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001169s | 0.001179s | 0.001172s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001148s | 0.001158s | 0.001168s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001169s | 0.001157s | 0.001148s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001159s | 0.001150s | 0.001153s | byte equality observed |
| test_hash.test | 10 | 0.001196s | 0.001184s | 0.001160s | byte equality observed |
| test_hash_value.test | 5 | 0.004247s | 0.004098s | 0.004027s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001161s | 0.001151s | 0.001142s | byte equality observed |
| test_include1.test | 10 | 0.000503s | 0.000504s | 0.001149s | byte equality observed |
| test_io.test | 10 | 0.001245s | 0.001242s | 0.001234s | byte equality observed |
| test_io_2.test | 10 | 0.001276s | 0.001300s | 0.001293s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001305s | 0.001332s | 0.001290s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001244s | 0.001249s | 0.001240s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001165s | 0.001149s | 0.001177s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001196s | 0.001190s | 0.001203s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001166s | 0.001194s | 0.001166s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001196s | 0.001206s | 0.001189s | byte equality observed |
| test_namespaces.test | 10 | 0.001174s | 0.001162s | 0.001143s | byte equality observed |
| test_nil_generator.test | 10 | 0.001154s | 0.001144s | 0.001158s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001157s | 0.001143s | 0.001159s | byte equality observed |
| test_random_generator.test | 10 | 0.002019s | 0.001988s | 0.001994s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001185s | 0.001143s | 0.001158s | byte equality observed |
| test_serialization.test | 10 | 0.001276s | 0.001257s | 0.001277s | byte equality observed |
| test_std_unordered.test | 10 | 0.001235s | 0.001207s | 0.001231s | byte equality observed |
| test_string_generator.test | 10 | 0.001263s | 0.001254s | 0.001282s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001203s | 0.001184s | 0.001197s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001188s | 0.001149s | 0.001169s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001170s | 0.001170s | 0.001185s | byte equality observed |
| test_tagging.test | 10 | 0.001173s | 0.001156s | 0.001143s | byte equality observed |
| test_time_generator.test | 10 | 0.001187s | 0.001173s | 0.001191s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001581s | 0.001699s | 0.001731s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001416s | 0.001446s | 0.001456s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.003540s | 0.003630s | 0.003841s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001594s | 0.001697s | 0.001728s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001439s | 0.001452s | 0.001472s | byte equality observed |
| test_time_generator_v6_3.test | 6 | 0.003581s | 0.003674s | 0.003637s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001422s | 0.001457s | 0.001508s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001236s | 0.001247s | 0.001223s | byte equality observed |
| test_time_generator_v7_3.test | 10 | 0.001833s | 0.001778s | 0.001785s | byte equality observed |
| test_to_chars.test | 10 | 0.001249s | 0.001205s | 0.001249s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001202s | 0.001194s | 0.001128s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001179s | 0.001188s | 0.001160s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001177s | 0.001189s | 0.001151s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001166s | 0.001186s | 0.001146s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001243s | 0.001257s | 0.001201s | byte equality observed |
| test_uuid.test | 10 | 0.001155s | 0.001171s | 0.001160s | byte equality observed |
| test_uuid_2.test | 10 | 0.001164s | 0.001173s | 0.001192s | byte equality observed |
| test_uuid_3.test | 10 | 0.001155s | 0.001168s | 0.001158s | byte equality observed |
| test_uuid_class.test | 10 | 0.001185s | 0.001171s | 0.001166s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001159s | 0.001145s | 0.001162s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001187s | 0.001165s | 0.001173s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001171s | 0.001149s | 0.001197s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001172s | 0.001159s | 0.001159s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001198s | 0.001175s | 0.001149s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001434s | 0.001445s | 0.001483s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001248s | 0.001256s | 0.001293s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001167s | 0.001172s | 0.001181s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001169s | 0.001154s | 0.001165s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001162s | 0.001159s | 0.001170s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
