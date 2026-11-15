# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.564832 | 1.303192 | 2.338794 | 0.000859 | 0.000882 | 0.002088 |
| test_uuid.test | RUN | 0.378320 | 1.089629 | 1.600508 | 0.002119 | 0.002082 | 0.002216 |
| test_uuid_no_simd.test | RUN | 0.342288 | 1.013059 | 1.360373 | 0.002067 | 0.001708 | 0.001842 |
| test_uuid_2.test | RUN | 0.263726 | 0.761191 | 1.024175 | 0.001929 | 0.002044 | 0.002010 |
| test_uuid_3.test | RUN | 0.205602 | 0.566373 | 0.879306 | 0.002031 | 0.002154 | 0.001882 |
| test_alignment.test | RUN | 0.189375 | 0.482613 | 0.741521 | 0.001925 | 0.001685 | 0.002108 |
| test_alignment_2.test | RUN | 0.196598 | 0.469885 | 0.768929 | 0.002103 | 0.001816 | 0.002000 |
| test_attribute_packed.test | RUN | 0.206297 | 0.488987 | 0.787294 | 0.002001 | 0.002180 | 0.001494 |
| test_pragma_pack.test | RUN | 0.194659 | 0.494191 | 0.747157 | 0.001791 | 0.002036 | 0.002172 |
| test_data.test | RUN | 0.230294 | 0.867785 | 1.063805 | 0.001994 | 0.002084 | 0.002074 |
| test_comparison.test | RUN | 0.349240 | 1.030941 | 1.418647 | 0.001950 | 0.002020 | 0.001972 |
| test_comparison_no_simd.test | RUN | 0.318805 | 1.173672 | 1.358597 | 0.002001 | 0.001844 | 0.001753 |
| test_io.test | RUN | 0.412041 | 1.885505 | 2.112876 | 0.002151 | 0.002158 | 0.002346 |
| test_io_no_simd.test | RUN | 0.403117 | 1.849664 | 1.980909 | 0.002101 | 0.002146 | 0.002072 |
| test_io_2.test | RUN | 0.319958 | 1.943518 | 1.525608 | 0.001970 | 0.002384 | 0.002153 |
| test_io_2_no_simd.test | RUN | 0.286538 | 1.828057 | 1.279026 | 0.002276 | 0.002178 | 0.002418 |
| test_to_chars.test | RUN | 0.293049 | 1.224414 | 1.381542 | 0.002090 | 0.002296 | 0.002204 |
| test_to_chars_no_simd.test | RUN | 0.289172 | 1.244576 | 1.307587 | 0.001900 | 0.002147 | 0.002192 |
| test_to_chars_2.test | RUN | 0.345872 | 2.227269 | 1.584853 | 0.001962 | 0.002007 | 0.001939 |
| test_to_chars_2_no_simd.test | RUN | 0.356149 | 2.386654 | 1.477959 | 0.001716 | 0.001938 | 0.002154 |
| test_to_chars_3.test | RUN | 0.235691 | 0.824493 | 0.977430 | 0.002082 | 0.002111 | 0.001664 |
| test_from_chars.test | RUN | 0.271823 | 1.156288 | 1.083201 | 0.001780 | 0.001952 | 0.002254 |
| test_from_chars_no_simd.test | RUN | 0.246562 | 0.932210 | 0.963270 | 0.001759 | 0.001870 | 0.002056 |
| test_from_chars_2.test | RUN | 0.262150 | 1.109744 | 1.158542 | 0.001607 | 0.002149 | 0.002144 |
| test_from_chars_2_no_simd.test | RUN | 0.235032 | 0.841450 | 0.892119 | 0.001928 | 0.002025 | 0.001798 |
| test_uuid_from_string.test | RUN | 0.316155 | 1.197064 | 1.348317 | 0.001828 | 0.002172 | 0.001934 |
| test_uuid_from_string_2.test | RUN | 0.279116 | 1.093002 | 1.149903 | 0.002410 | 0.002610 | 0.002626 |
| test_uuid_from_string_3.test | RUN | 0.281524 | 1.076535 | 1.182363 | 0.002186 | 0.002222 | 0.002432 |
| test_uuid_clock.test | RUN | 0.175040 | 0.461796 | 0.724424 | 0.001918 | 0.002154 | 0.002029 |
| test_nil_generator.test | RUN | 0.207380 | 0.547167 | 0.880074 | 0.001910 | 0.001874 | 0.001898 |
| test_string_generator.test | RUN | 0.263249 | 0.875382 | 1.150005 | 0.002139 | 0.002364 | 0.002402 |
| test_string_generator_2.test | RUN | 0.323547 | 1.253583 | 1.259351 | 0.002058 | 0.002094 | 0.002171 |
| test_random_generator.test | RUN | 0.439020 | 2.389371 | 1.971524 | 0.003226 | 0.003519 | 0.003538 |
| test_random_generator_2.test | RUN | 0.325203 | 0.935327 | 1.337955 | 0.001860 | 0.002196 | 0.002170 |
| test_name_generator.test | RUN | 0.282830 | 3.101181 | 1.420753 | 0.001862 | 0.002064 | 0.001789 |
| test_namespaces.test | RUN | 0.229161 | 0.658749 | 0.969470 | 0.001893 | 0.002114 | 0.002026 |
| test_name_generator_md5.test | RUN | 0.290664 | 1.485533 | 1.298716 | 0.001817 | 0.002086 | 0.002133 |
| test_name_generator_sha1.test | RUN | 0.283395 | 4.615984 | 1.319719 | 0.001898 | 0.002014 | 0.002108 |
| test_time_generator.test | RUN | 0.310448 | 0.918670 | 1.333902 | 0.001981 | 0.002210 | 0.002176 |
| test_time_generator_v1.test | RUN | 0.341821 | 1.005518 | 1.446158 | 0.002588 | 0.002818 | 0.002806 |
| test_time_generator_v1_2.test | RUN | 0.337052 | 0.930156 | 1.416984 | 0.002352 | 0.002574 | 0.002590 |
| test_time_generator_v1_3.test | RUN | 0.366583 | 0.992801 | 1.563955 | 0.005891 | 0.005868 | 0.005741 |
| test_time_generator_v6.test | RUN | 0.351128 | 1.009639 | 1.472336 | 0.002431 | 0.002673 | 0.002927 |
| test_time_generator_v6_2.test | RUN | 0.347061 | 0.958730 | 1.421429 | 0.002388 | 0.002506 | 0.002378 |
| test_time_generator_v6_3.test | RUN | 0.370600 | 1.018801 | 1.569141 | 0.005739 | 0.005288 | 0.005706 |
| test_time_generator_v7.test | RUN | 0.329903 | 1.012379 | 1.431778 | 0.002180 | 0.002452 | 0.002240 |
| test_time_generator_v7_2.test | RUN | 0.309848 | 0.906577 | 1.304173 | 0.001647 | 0.002078 | 0.002000 |
| test_time_generator_v7_3.test | RUN | 0.313655 | 1.137321 | 1.389861 | 0.002918 | 0.003220 | 0.003233 |
| test_serialization.test | RUN | 0.575099 | 1.712145 | 2.321223 | 0.002235 | 0.002040 | 0.002264 |
| test_tagging.test | RUN | 0.319536 | 1.100127 | 1.367323 | 0.001960 | 0.002042 | 0.001962 |
| test_uuid_class.test | RUN | 0.339035 | 0.959170 | 1.454173 | 0.001856 | 0.001729 | 0.002177 |
| test_uuid_in_map.test | RUN | 0.376114 | 1.124899 | 1.526906 | 0.001693 | 0.002138 | 0.002159 |
| test_hash.test | RUN | 0.368633 | 1.015468 | 1.464379 | 0.001940 | 0.001876 | 0.002152 |
| test_hash_value.test | RUN | 0.260716 | 0.690906 | 1.080330 | 0.006078 | 0.006281 | 0.005958 |
| test_std_unordered.test | RUN | 0.347167 | 1.109117 | 1.454697 | 0.002144 | 0.002022 | 0.002167 |
| test_boost_unordered.test | RUN | 0.489609 | 1.466577 | 1.868658 | 0.001831 | 0.001825 | 0.002040 |
| test_detail_md5.test | RUN | 0.228623 | 0.730916 | 1.030913 | 0.001798 | 0.001798 | 0.002184 |
| test_detail_sha1.test | RUN | 0.209657 | 0.892855 | 0.922911 | 0.012686 | 0.011459 | 0.011885 |
| test_detail_endian.test | RUN | 0.161180 | 0.529058 | 0.655019 | 0.001800 | 0.001990 | 0.002160 |
| test_detail_chacha20.test | RUN | 0.182074 | 0.641493 | 0.719535 | 0.001744 | 0.001847 | 0.002074 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.167666 | 0.378595 | 0.573654 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.158988 | 0.357716 | 0.580581 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.272944 | 0.708411 | 1.077582 | 0.002003 | 0.001925 | 0.001757 |
| test_bench_random.test | RUN | 0.306294 | 0.925985 | 1.358642 | 0.009389 | 0.009036 | 0.008896 |
| test_entropy_error.test | RUN | 0.156132 | 0.414340 | 0.634753 | 0.001803 | 0.001959 | 0.002108 |
| test_detail_random_provider.test | RUN | 0.302538 | 0.732937 | 1.220599 | 0.001902 | 0.002025 | 0.001706 |
| test_constants.test | RUN | 0.228377 | 0.666059 | 0.917043 | 0.001727 | 0.001980 | 0.001881 |
| test_uuid_cx.test | COMPILE | 0.132807 | 0.328018 | 0.488550 | — | — | — |
| test_uuid_cx2.test | RUN | 0.245705 | 0.769877 | 1.025548 | 0.001826 | 0.001836 | 0.002208 |
| test_uuid_cx3.test | RUN | 0.209287 | 0.596969 | 0.937160 | 0.001793 | 0.001878 | 0.001935 |
| test_uuid_cx3_no_simd.test | RUN | 0.200407 | 0.563778 | 0.848295 | 0.001859 | 0.002094 | 0.001844 |
| test_hash_value_cx.test | RUN | 0.200203 | 0.552190 | 0.829141 | 0.001601 | 0.001922 | 0.001610 |
| test_string_generator_cx.test | RUN | 0.237451 | 0.667515 | 0.941307 | 0.001902 | 0.002063 | 0.002101 |
| test_string_generator_cx2.test | RUN | 0.293411 | 0.809949 | 1.090582 | 0.001918 | 0.002148 | 0.001658 |
| test_constants_cx.test | RUN | 0.197223 | 0.462767 | 0.826931 | 0.001854 | 0.001946 | 0.001809 |
| test_from_chars_cx.test | RUN | 0.249317 | 0.907154 | 1.007517 | 0.001879 | 0.002073 | 0.001940 |
| test_from_chars_cx2.test | RUN | 0.259158 | 1.097057 | 1.097814 | 0.001911 | 0.001819 | 0.001888 |
| test_to_chars_cx.test | RUN | 0.263551 | 1.008169 | 1.210756 | 0.001746 | 0.001942 | 0.001376 |
| test_uuid_from_string_cx.test | RUN | 0.275089 | 1.016918 | 1.152444 | 0.001730 | 0.001529 | 0.001373 |
| quick.test | RUN | 0.293721 | 0.772191 | 1.067289 | 0.001602 | 0.001438 | 0.001350 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.993×, 0.992× | 1.003× |
| clang | 1.004× | 1.000×, 1.008× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001492s | 0.001465s | 0.001464s | byte equality observed |
| test_alignment.test | 10 | 0.001476s | 0.001448s | 0.001484s | byte equality observed |
| test_alignment_2.test | 10 | 0.001464s | 0.001472s | 0.001416s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001438s | 0.001482s | 0.001420s | byte equality observed |
| test_bench_random.test | 3 | 0.008302s | 0.008352s | 0.008303s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001505s | 0.001487s | 0.001514s | byte equality observed |
| test_comparison.test | 10 | 0.001463s | 0.001508s | 0.001469s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001509s | 0.001544s | 0.001553s | byte equality observed |
| test_constants.test | 10 | 0.001482s | 0.001493s | 0.001515s | byte equality observed |
| test_constants_cx.test | 10 | 0.001456s | 0.001487s | 0.001491s | byte equality observed |
| test_data.test | 10 | 0.001467s | 0.001521s | 0.001463s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001493s | 0.001487s | 0.001475s | byte equality observed |
| test_detail_endian.test | 10 | 0.001477s | 0.001495s | 0.001502s | byte equality observed |
| test_detail_md5.test | 10 | 0.001501s | 0.001514s | 0.001497s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001489s | 0.001511s | 0.001525s | byte equality observed |
| test_detail_sha1.test | 3 | 0.011619s | 0.010488s | 0.011065s | byte equality observed |
| test_entropy_error.test | 10 | 0.001463s | 0.001419s | 0.001455s | byte equality observed |
| test_from_chars.test | 10 | 0.001439s | 0.001444s | 0.001449s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001450s | 0.001439s | 0.001448s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001469s | 0.001461s | 0.001488s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001503s | 0.001484s | 0.001505s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001479s | 0.001496s | 0.001480s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001491s | 0.001504s | 0.001493s | byte equality observed |
| test_hash.test | 10 | 0.001492s | 0.001480s | 0.001509s | byte equality observed |
| test_hash_value.test | 5 | 0.005478s | 0.005380s | 0.005329s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001474s | 0.001456s | 0.001437s | byte equality observed |
| test_include1.test | 10 | 0.000636s | 0.000636s | 0.001459s | byte equality observed |
| test_io.test | 10 | 0.001576s | 0.001615s | 0.001578s | byte equality observed |
| test_io_2.test | 8 | 0.001669s | 0.001637s | 0.001647s | byte equality observed |
| test_io_2_no_simd.test | 8 | 0.001694s | 0.001699s | 0.001663s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001573s | 0.001587s | 0.001618s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001504s | 0.001481s | 0.001509s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001530s | 0.001520s | 0.001504s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001517s | 0.001548s | 0.001518s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001563s | 0.001570s | 0.001526s | byte equality observed |
| test_namespaces.test | 10 | 0.001496s | 0.001465s | 0.001469s | byte equality observed |
| test_nil_generator.test | 10 | 0.001496s | 0.001499s | 0.001474s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001496s | 0.001497s | 0.001501s | byte equality observed |
| test_random_generator.test | 7 | 0.002921s | 0.002869s | 0.002933s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001487s | 0.001471s | 0.001504s | byte equality observed |
| test_serialization.test | 10 | 0.001624s | 0.001643s | 0.001569s | byte equality observed |
| test_std_unordered.test | 10 | 0.001606s | 0.001598s | 0.001628s | byte equality observed |
| test_string_generator.test | 10 | 0.001657s | 0.001684s | 0.001642s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001528s | 0.001570s | 0.001505s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001492s | 0.001496s | 0.001507s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001494s | 0.001478s | 0.001527s | byte equality observed |
| test_tagging.test | 10 | 0.001508s | 0.001503s | 0.001489s | byte equality observed |
| test_time_generator.test | 9 | 0.001516s | 0.001526s | 0.001503s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.002086s | 0.002165s | 0.002196s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001792s | 0.001832s | 0.001915s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004618s | 0.004581s | 0.004519s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.002049s | 0.002158s | 0.002175s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001860s | 0.001829s | 0.001890s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004645s | 0.004668s | 0.004580s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001818s | 0.001828s | 0.001848s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001570s | 0.001568s | 0.001577s | byte equality observed |
| test_time_generator_v7_3.test | 7 | 0.002516s | 0.002528s | 0.002572s | byte equality observed |
| test_to_chars.test | 10 | 0.001639s | 0.001600s | 0.001575s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001536s | 0.001534s | 0.001532s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001546s | 0.001546s | 0.001501s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001527s | 0.001512s | 0.001477s | byte equality observed |
| test_to_chars_cx.test | 9 | 0.001543s | 0.001559s | 0.001528s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001602s | 0.001611s | 0.001595s | byte equality observed |
| test_uuid.test | 10 | 0.001494s | 0.001508s | 0.001492s | byte equality observed |
| test_uuid_2.test | 10 | 0.001520s | 0.001467s | 0.001550s | byte equality observed |
| test_uuid_3.test | 10 | 0.001482s | 0.001474s | 0.001475s | byte equality observed |
| test_uuid_class.test | 10 | 0.001526s | 0.001505s | 0.001546s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001496s | 0.001470s | 0.001508s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001510s | 0.001517s | 0.001533s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001492s | 0.001485s | 0.001517s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001484s | 0.001479s | 0.001525s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001528s | 0.001532s | 0.001543s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001893s | 0.001897s | 0.001929s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001632s | 0.001583s | 0.001705s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001494s | 0.001500s | 0.001517s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001530s | 0.001485s | 0.001542s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001474s | 0.001519s | 0.001514s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
