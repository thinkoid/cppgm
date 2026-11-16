# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.582814 | 1.309615 | 2.271093 | 0.000822 | 0.000885 | 0.002033 |
| test_uuid.test | RUN | 0.345667 | 1.035371 | 1.560368 | 0.002006 | 0.002075 | 0.002087 |
| test_uuid_no_simd.test | RUN | 0.345887 | 1.000987 | 1.345510 | 0.001838 | 0.002118 | 0.001872 |
| test_uuid_2.test | RUN | 0.246779 | 0.770149 | 1.005813 | 0.001834 | 0.001972 | 0.001718 |
| test_uuid_3.test | RUN | 0.204404 | 0.522987 | 0.802076 | 0.001896 | 0.002116 | 0.001989 |
| test_alignment.test | RUN | 0.198689 | 0.470152 | 0.745507 | 0.001917 | 0.002076 | 0.001944 |
| test_alignment_2.test | RUN | 0.194678 | 0.492223 | 0.737216 | 0.001872 | 0.001792 | 0.002174 |
| test_attribute_packed.test | RUN | 0.194739 | 0.481199 | 0.784755 | 0.001858 | 0.002152 | 0.002005 |
| test_pragma_pack.test | RUN | 0.202745 | 0.472156 | 0.782396 | 0.001942 | 0.002123 | 0.001973 |
| test_data.test | RUN | 0.229470 | 0.870201 | 1.034972 | 0.001958 | 0.001946 | 0.001981 |
| test_comparison.test | RUN | 0.329897 | 1.024853 | 1.471545 | 0.002060 | 0.002170 | 0.001931 |
| test_comparison_no_simd.test | RUN | 0.309650 | 1.153379 | 1.241695 | 0.001964 | 0.001788 | 0.002042 |
| test_io.test | RUN | 0.427784 | 1.888268 | 2.090149 | 0.002208 | 0.002193 | 0.002209 |
| test_io_no_simd.test | RUN | 0.392982 | 1.798854 | 1.926834 | 0.001956 | 0.002050 | 0.002103 |
| test_io_2.test | RUN | 0.314905 | 1.885977 | 1.458378 | 0.001981 | 0.002002 | 0.002410 |
| test_io_2_no_simd.test | RUN | 0.281950 | 1.804183 | 1.277643 | 0.002232 | 0.002097 | 0.002280 |
| test_to_chars.test | RUN | 0.289800 | 1.197541 | 1.292743 | 0.002111 | 0.002253 | 0.002155 |
| test_to_chars_no_simd.test | RUN | 0.279663 | 1.224937 | 1.257351 | 0.001855 | 0.002086 | 0.002105 |
| test_to_chars_2.test | RUN | 0.337868 | 2.209266 | 1.626445 | 0.001762 | 0.001918 | 0.001969 |
| test_to_chars_2_no_simd.test | RUN | 0.355302 | 2.363218 | 1.422561 | 0.002072 | 0.001861 | 0.002010 |
| test_to_chars_3.test | RUN | 0.239075 | 0.802965 | 0.998904 | 0.001888 | 0.002064 | 0.001658 |
| test_from_chars.test | RUN | 0.277274 | 1.144991 | 1.121680 | 0.001866 | 0.002086 | 0.002112 |
| test_from_chars_no_simd.test | RUN | 0.250050 | 0.912621 | 0.921357 | 0.001858 | 0.001838 | 0.002058 |
| test_from_chars_2.test | RUN | 0.265949 | 1.087771 | 1.136634 | 0.001685 | 0.001956 | 0.002103 |
| test_from_chars_2_no_simd.test | RUN | 0.233294 | 0.829682 | 0.901130 | 0.001893 | 0.002178 | 0.001459 |
| test_uuid_from_string.test | RUN | 0.314200 | 1.179133 | 1.323006 | 0.001756 | 0.002058 | 0.001788 |
| test_uuid_from_string_2.test | RUN | 0.273679 | 1.069383 | 1.174070 | 0.002000 | 0.002489 | 0.002678 |
| test_uuid_from_string_3.test | RUN | 0.277974 | 1.090507 | 1.178099 | 0.001944 | 0.001888 | 0.002240 |
| test_uuid_clock.test | RUN | 0.175901 | 0.448025 | 0.717489 | 0.001737 | 0.002130 | 0.001774 |
| test_nil_generator.test | RUN | 0.205162 | 0.531504 | 0.838972 | 0.001895 | 0.002098 | 0.002069 |
| test_string_generator.test | RUN | 0.263648 | 0.868168 | 1.142794 | 0.001952 | 0.002347 | 0.002278 |
| test_string_generator_2.test | RUN | 0.323639 | 1.236317 | 1.269400 | 0.001676 | 0.001956 | 0.002000 |
| test_random_generator.test | RUN | 0.433132 | 2.362820 | 1.923344 | 0.003240 | 0.003469 | 0.003498 |
| test_random_generator_2.test | RUN | 0.323013 | 0.925210 | 1.312787 | 0.001715 | 0.002144 | 0.002126 |
| test_name_generator.test | RUN | 0.281694 | 3.089174 | 1.382320 | 0.001712 | 0.002196 | 0.001938 |
| test_namespaces.test | RUN | 0.232988 | 0.652456 | 0.955800 | 0.001797 | 0.002018 | 0.001827 |
| test_name_generator_md5.test | RUN | 0.287407 | 1.423367 | 1.323162 | 0.002042 | 0.001986 | 0.002084 |
| test_name_generator_sha1.test | RUN | 0.275867 | 4.515091 | 1.258830 | 0.001992 | 0.002326 | 0.002146 |
| test_time_generator.test | RUN | 0.306499 | 0.923258 | 1.351908 | 0.001962 | 0.002188 | 0.002102 |
| test_time_generator_v1.test | RUN | 0.335785 | 1.009340 | 1.471046 | 0.002446 | 0.002714 | 0.002865 |
| test_time_generator_v1_2.test | RUN | 0.339151 | 0.952670 | 1.382977 | 0.002246 | 0.002500 | 0.002514 |
| test_time_generator_v1_3.test | RUN | 0.363550 | 0.985265 | 1.559000 | 0.005324 | 0.005204 | 0.005730 |
| test_time_generator_v6.test | RUN | 0.331911 | 1.002207 | 1.459194 | 0.002428 | 0.002775 | 0.002680 |
| test_time_generator_v6_2.test | RUN | 0.334119 | 0.934270 | 1.398935 | 0.002210 | 0.002562 | 0.002426 |
| test_time_generator_v6_3.test | RUN | 0.367328 | 1.001317 | 1.552899 | 0.004457 | 0.005703 | 0.005548 |
| test_time_generator_v7.test | RUN | 0.319002 | 0.987531 | 1.409800 | 0.002074 | 0.002468 | 0.002374 |
| test_time_generator_v7_2.test | RUN | 0.298427 | 0.883687 | 1.300040 | 0.001660 | 0.002115 | 0.002094 |
| test_time_generator_v7_3.test | RUN | 0.304780 | 1.112920 | 1.349206 | 0.002697 | 0.003255 | 0.002908 |
| test_serialization.test | RUN | 0.558038 | 1.716966 | 2.247049 | 0.002344 | 0.002037 | 0.002338 |
| test_tagging.test | RUN | 0.311651 | 1.094763 | 1.326398 | 0.001886 | 0.002041 | 0.002041 |
| test_uuid_class.test | RUN | 0.330275 | 0.959949 | 1.359879 | 0.001827 | 0.001728 | 0.002058 |
| test_uuid_in_map.test | RUN | 0.361921 | 1.115600 | 1.545162 | 0.001694 | 0.001958 | 0.002110 |
| test_hash.test | RUN | 0.367997 | 1.001784 | 1.418806 | 0.002340 | 0.002199 | 0.002060 |
| test_hash_value.test | RUN | 0.251703 | 0.695759 | 1.040133 | 0.006027 | 0.006013 | 0.006069 |
| test_std_unordered.test | RUN | 0.338095 | 1.129373 | 1.409669 | 0.002034 | 0.002110 | 0.002217 |
| test_boost_unordered.test | RUN | 0.500164 | 1.429047 | 1.843428 | 0.001932 | 0.002047 | 0.002047 |
| test_detail_md5.test | RUN | 0.225258 | 0.700071 | 1.009047 | 0.001818 | 0.001734 | 0.002099 |
| test_detail_sha1.test | RUN | 0.212127 | 0.892972 | 0.895111 | 0.012801 | 0.010934 | 0.011900 |
| test_detail_endian.test | RUN | 0.159502 | 0.501270 | 0.669871 | 0.001789 | 0.002139 | 0.002052 |
| test_detail_chacha20.test | RUN | 0.178531 | 0.635672 | 0.689298 | 0.001752 | 0.001814 | 0.002040 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.163185 | 0.357894 | 0.563806 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.158467 | 0.368043 | 0.592289 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.277947 | 0.704337 | 1.041633 | 0.002032 | 0.001950 | 0.001711 |
| test_bench_random.test | RUN | 0.305557 | 0.917859 | 1.366226 | 0.008846 | 0.008920 | 0.008655 |
| test_entropy_error.test | RUN | 0.154896 | 0.427970 | 0.637123 | 0.001883 | 0.002004 | 0.001983 |
| test_detail_random_provider.test | RUN | 0.294498 | 0.719173 | 1.202788 | 0.001718 | 0.002146 | 0.002153 |
| test_constants.test | RUN | 0.231623 | 0.648178 | 0.906623 | 0.001904 | 0.002088 | 0.001665 |
| test_uuid_cx.test | COMPILE | 0.130084 | 0.325036 | 0.480120 | — | — | — |
| test_uuid_cx2.test | RUN | 0.247171 | 0.765213 | 1.009203 | 0.001845 | 0.001817 | 0.002028 |
| test_uuid_cx3.test | RUN | 0.209316 | 0.590414 | 0.949331 | 0.001857 | 0.002046 | 0.001750 |
| test_uuid_cx3_no_simd.test | RUN | 0.201601 | 0.561670 | 0.779148 | 0.001630 | 0.001815 | 0.002064 |
| test_hash_value_cx.test | RUN | 0.200767 | 0.535249 | 0.865112 | 0.001530 | 0.002134 | 0.002006 |
| test_string_generator_cx.test | RUN | 0.236108 | 0.656148 | 0.938666 | 0.001940 | 0.002108 | 0.002044 |
| test_string_generator_cx2.test | RUN | 0.287270 | 0.808847 | 1.060172 | 0.001768 | 0.001963 | 0.001942 |
| test_constants_cx.test | RUN | 0.198741 | 0.491844 | 0.807040 | 0.001972 | 0.001908 | 0.001845 |
| test_from_chars_cx.test | RUN | 0.244609 | 0.898031 | 1.031836 | 0.001770 | 0.002147 | 0.001929 |
| test_from_chars_cx2.test | RUN | 0.259049 | 1.101444 | 1.095137 | 0.001969 | 0.001687 | 0.001924 |
| test_to_chars_cx.test | RUN | 0.257435 | 1.006194 | 1.148657 | 0.001731 | 0.002020 | 0.001822 |
| test_uuid_from_string_cx.test | RUN | 0.267220 | 1.026275 | 1.139620 | 0.001516 | 0.001582 | 0.001388 |
| quick.test | RUN | 0.294363 | 0.807629 | 1.078899 | 0.001444 | 0.001702 | 0.001490 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.991×, 0.989× | 1.003× |
| clang | 0.998× | 0.994×, 1.003× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001446s | 0.001444s | 0.001475s | byte equality observed |
| test_alignment.test | 10 | 0.001462s | 0.001481s | 0.001432s | byte equality observed |
| test_alignment_2.test | 10 | 0.001434s | 0.001483s | 0.001421s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001451s | 0.001402s | 0.001411s | byte equality observed |
| test_bench_random.test | 3 | 0.008294s | 0.008195s | 0.008320s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001520s | 0.001509s | 0.001541s | byte equality observed |
| test_comparison.test | 10 | 0.001482s | 0.001468s | 0.001469s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001521s | 0.001514s | 0.001488s | byte equality observed |
| test_constants.test | 10 | 0.001476s | 0.001485s | 0.001479s | byte equality observed |
| test_constants_cx.test | 10 | 0.001474s | 0.001448s | 0.001462s | byte equality observed |
| test_data.test | 10 | 0.001451s | 0.001492s | 0.001492s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001483s | 0.001491s | 0.001474s | byte equality observed |
| test_detail_endian.test | 10 | 0.001476s | 0.001453s | 0.001474s | byte equality observed |
| test_detail_md5.test | 10 | 0.001494s | 0.001515s | 0.001460s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001493s | 0.001490s | 0.001471s | byte equality observed |
| test_detail_sha1.test | 3 | 0.011530s | 0.010185s | 0.010623s | byte equality observed |
| test_entropy_error.test | 7 | 0.001456s | 0.001441s | 0.001410s | byte equality observed |
| test_from_chars.test | 10 | 0.001423s | 0.001440s | 0.001422s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001428s | 0.001462s | 0.001475s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001457s | 0.001501s | 0.001477s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001450s | 0.001512s | 0.001475s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001493s | 0.001489s | 0.001456s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001485s | 0.001471s | 0.001482s | byte equality observed |
| test_hash.test | 10 | 0.001514s | 0.001499s | 0.001486s | byte equality observed |
| test_hash_value.test | 5 | 0.005589s | 0.005332s | 0.005347s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001460s | 0.001484s | 0.001478s | byte equality observed |
| test_include1.test | 10 | 0.000632s | 0.000626s | 0.001434s | byte equality observed |
| test_io.test | 9 | 0.001561s | 0.001573s | 0.001535s | byte equality observed |
| test_io_2.test | 10 | 0.001663s | 0.001640s | 0.001626s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001687s | 0.001663s | 0.001665s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001565s | 0.001558s | 0.001544s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001518s | 0.001511s | 0.001492s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001516s | 0.001520s | 0.001503s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001543s | 0.001516s | 0.001523s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001548s | 0.001558s | 0.001552s | byte equality observed |
| test_namespaces.test | 10 | 0.001477s | 0.001477s | 0.001451s | byte equality observed |
| test_nil_generator.test | 10 | 0.001443s | 0.001443s | 0.001473s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001454s | 0.001458s | 0.001446s | byte equality observed |
| test_random_generator.test | 7 | 0.002914s | 0.002884s | 0.002896s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001494s | 0.001488s | 0.001475s | byte equality observed |
| test_serialization.test | 10 | 0.001617s | 0.001640s | 0.001609s | byte equality observed |
| test_std_unordered.test | 10 | 0.001576s | 0.001568s | 0.001574s | byte equality observed |
| test_string_generator.test | 10 | 0.001642s | 0.001616s | 0.001665s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001536s | 0.001516s | 0.001516s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001505s | 0.001501s | 0.001445s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001506s | 0.001501s | 0.001494s | byte equality observed |
| test_tagging.test | 10 | 0.001485s | 0.001490s | 0.001481s | byte equality observed |
| test_time_generator.test | 10 | 0.001524s | 0.001484s | 0.001502s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.002027s | 0.002115s | 0.002123s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001806s | 0.001839s | 0.001873s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004587s | 0.004545s | 0.004722s | byte equality observed |
| test_time_generator_v6.test | 8 | 0.002057s | 0.002068s | 0.002222s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001835s | 0.001827s | 0.001842s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004653s | 0.004451s | 0.004720s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001817s | 0.001852s | 0.001828s | byte equality observed |
| test_time_generator_v7_2.test | 8 | 0.001531s | 0.001534s | 0.001539s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002524s | 0.002517s | 0.002495s | byte equality observed |
| test_to_chars.test | 10 | 0.001577s | 0.001589s | 0.001585s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001497s | 0.001522s | 0.001503s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001512s | 0.001513s | 0.001495s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001511s | 0.001481s | 0.001493s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001502s | 0.001494s | 0.001444s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001581s | 0.001561s | 0.001602s | byte equality observed |
| test_uuid.test | 10 | 0.001478s | 0.001476s | 0.001483s | byte equality observed |
| test_uuid_2.test | 10 | 0.001482s | 0.001518s | 0.001490s | byte equality observed |
| test_uuid_3.test | 10 | 0.001493s | 0.001465s | 0.001479s | byte equality observed |
| test_uuid_class.test | 10 | 0.001513s | 0.001493s | 0.001530s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001503s | 0.001499s | 0.001450s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001506s | 0.001488s | 0.001472s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001490s | 0.001518s | 0.001459s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001487s | 0.001499s | 0.001468s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001457s | 0.001545s | 0.001499s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001877s | 0.001847s | 0.001912s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001662s | 0.001629s | 0.001656s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001501s | 0.001466s | 0.001468s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001496s | 0.001513s | 0.001512s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001490s | 0.001520s | 0.001471s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
