# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.282864 | 0.647017 | 0.809489 | 0.000431 | 0.000438 | 0.000939 |
| test_uuid.test | RUN | 0.177245 | 0.534403 | 0.587740 | 0.000929 | 0.001019 | 0.000861 |
| test_uuid_no_simd.test | RUN | 0.177253 | 0.527291 | 0.550102 | 0.000974 | 0.000997 | 0.000916 |
| test_uuid_2.test | RUN | 0.125406 | 0.396972 | 0.406762 | 0.000966 | 0.001018 | 0.000904 |
| test_uuid_3.test | RUN | 0.101003 | 0.268328 | 0.318153 | 0.000939 | 0.001043 | 0.000847 |
| test_alignment.test | RUN | 0.093635 | 0.247904 | 0.278593 | 0.001186 | 0.001017 | 0.000894 |
| test_alignment_2.test | RUN | 0.094412 | 0.237158 | 0.276444 | 0.000933 | 0.001006 | 0.000957 |
| test_attribute_packed.test | RUN | 0.094967 | 0.243953 | 0.286335 | 0.000882 | 0.000914 | 0.000998 |
| test_pragma_pack.test | RUN | 0.094409 | 0.251234 | 0.288331 | 0.000966 | 0.001054 | 0.000945 |
| test_data.test | RUN | 0.118094 | 0.453639 | 0.417778 | 0.000955 | 0.001044 | 0.001028 |
| test_comparison.test | RUN | 0.165299 | 0.522344 | 0.569788 | 0.000899 | 0.001001 | 0.000965 |
| test_comparison_no_simd.test | RUN | 0.162427 | 0.586701 | 0.505077 | 0.001073 | 0.001159 | 0.001022 |
| test_io.test | RUN | 0.224218 | 1.025810 | 0.874515 | 0.001025 | 0.001078 | 0.000990 |
| test_io_no_simd.test | RUN | 0.216994 | 1.024871 | 0.820962 | 0.001012 | 0.001109 | 0.001015 |
| test_io_2.test | RUN | 0.174263 | 1.067001 | 0.610836 | 0.001040 | 0.001196 | 0.001123 |
| test_io_2_no_simd.test | RUN | 0.154571 | 1.000357 | 0.560481 | 0.001149 | 0.001182 | 0.001037 |
| test_to_chars.test | RUN | 0.156188 | 0.665560 | 0.558492 | 0.001108 | 0.001074 | 0.000985 |
| test_to_chars_no_simd.test | RUN | 0.154164 | 0.660002 | 0.542672 | 0.001092 | 0.001107 | 0.000949 |
| test_to_chars_2.test | RUN | 0.194509 | 1.236198 | 0.679769 | 0.000980 | 0.001010 | 0.000937 |
| test_to_chars_2_no_simd.test | RUN | 0.200253 | 1.325418 | 0.629039 | 0.000905 | 0.001097 | 0.000940 |
| test_to_chars_3.test | RUN | 0.123601 | 0.433623 | 0.411106 | 0.000912 | 0.001046 | 0.000843 |
| test_from_chars.test | RUN | 0.146483 | 0.629553 | 0.454403 | 0.000933 | 0.000972 | 0.000895 |
| test_from_chars_no_simd.test | RUN | 0.128279 | 0.486612 | 0.385734 | 0.000940 | 0.001021 | 0.001008 |
| test_from_chars_2.test | RUN | 0.142857 | 0.595757 | 0.448807 | 0.000951 | 0.001091 | 0.000918 |
| test_from_chars_2_no_simd.test | RUN | 0.124466 | 0.441447 | 0.370112 | 0.000954 | 0.000989 | 0.000872 |
| test_uuid_from_string.test | RUN | 0.169136 | 0.642580 | 0.556344 | 0.000911 | 0.001047 | 0.000976 |
| test_uuid_from_string_2.test | RUN | 0.151032 | 0.588026 | 0.461863 | 0.001130 | 0.001191 | 0.001220 |
| test_uuid_from_string_3.test | RUN | 0.151011 | 0.594470 | 0.480665 | 0.001040 | 0.001172 | 0.000991 |
| test_uuid_clock.test | RUN | 0.086870 | 0.230812 | 0.271015 | 0.000864 | 0.000979 | 0.000957 |
| test_nil_generator.test | RUN | 0.103954 | 0.269706 | 0.320994 | 0.000996 | 0.000964 | 0.000977 |
| test_string_generator.test | RUN | 0.139409 | 0.463027 | 0.460622 | 0.001047 | 0.001016 | 0.001013 |
| test_string_generator_2.test | RUN | 0.173872 | 0.650214 | 0.508670 | 0.001044 | 0.001097 | 0.000997 |
| test_random_generator.test | RUN | 0.228446 | 1.253245 | 0.764883 | 0.003160 | 0.003183 | 0.003132 |
| test_random_generator_2.test | RUN | 0.166354 | 0.478733 | 0.507900 | 0.000949 | 0.001015 | 0.000873 |
| test_name_generator.test | RUN | 0.149184 | 1.586356 | 0.574058 | 0.000998 | 0.001252 | 0.001160 |
| test_namespaces.test | RUN | 0.119435 | 0.348345 | 0.367291 | 0.001026 | 0.001066 | 0.000973 |
| test_name_generator_md5.test | RUN | 0.155515 | 0.783890 | 0.549131 | 0.000975 | 0.001128 | 0.000973 |
| test_name_generator_sha1.test | RUN | 0.148013 | 2.347726 | 0.539086 | 0.001034 | 0.001094 | 0.000912 |
| test_time_generator.test | RUN | 0.154785 | 0.477992 | 0.494454 | 0.000945 | 0.001313 | 0.000950 |
| test_time_generator_v1.test | RUN | 0.174756 | 0.526668 | 0.570305 | 0.001303 | 0.001556 | 0.001431 |
| test_time_generator_v1_2.test | RUN | 0.171665 | 0.500340 | 0.531954 | 0.001290 | 0.001298 | 0.001201 |
| test_time_generator_v1_3.test | RUN | 0.191134 | 0.518161 | 0.585201 | 0.005526 | 0.010349 | 0.003816 |
| test_time_generator_v6.test | RUN | 0.175580 | 0.529274 | 0.554765 | 0.001363 | 0.001534 | 0.001465 |
| test_time_generator_v6_2.test | RUN | 0.173140 | 0.491527 | 0.534463 | 0.001226 | 0.001355 | 0.001275 |
| test_time_generator_v6_3.test | RUN | 0.191537 | 0.523765 | 0.578265 | 0.006844 | 0.004580 | 0.005512 |
| test_time_generator_v7.test | RUN | 0.168424 | 0.530026 | 0.539597 | 0.001163 | 0.001569 | 0.001226 |
| test_time_generator_v7_2.test | RUN | 0.158753 | 0.477703 | 0.498696 | 0.001057 | 0.001336 | 0.000967 |
| test_time_generator_v7_3.test | RUN | 0.157689 | 0.586937 | 0.501433 | 0.002086 | 0.002302 | 0.002088 |
| test_serialization.test | RUN | 0.282074 | 0.920540 | 0.938967 | 0.000987 | 0.001200 | 0.001027 |
| test_tagging.test | RUN | 0.162898 | 0.563802 | 0.503063 | 0.001096 | 0.000973 | 0.001040 |
| test_uuid_class.test | RUN | 0.170721 | 0.489220 | 0.536719 | 0.000996 | 0.001083 | 0.000935 |
| test_uuid_in_map.test | RUN | 0.185017 | 0.570540 | 0.587873 | 0.000901 | 0.000992 | 0.000873 |
| test_hash.test | RUN | 0.178898 | 0.511173 | 0.532899 | 0.001060 | 0.001073 | 0.000933 |
| test_hash_value.test | RUN | 0.133407 | 0.368304 | 0.400720 | 0.003848 | 0.003962 | 0.003738 |
| test_std_unordered.test | RUN | 0.177617 | 0.577985 | 0.546871 | 0.001029 | 0.000969 | 0.000922 |
| test_boost_unordered.test | RUN | 0.255442 | 0.746422 | 0.708120 | 0.000996 | 0.000991 | 0.000989 |
| test_detail_md5.test | RUN | 0.114621 | 0.366296 | 0.389788 | 0.001025 | 0.001015 | 0.001019 |
| test_detail_sha1.test | RUN | 0.110222 | 0.462573 | 0.371576 | 0.006535 | 0.007358 | 0.006464 |
| test_detail_endian.test | RUN | 0.084444 | 0.260701 | 0.269319 | 0.000957 | 0.001061 | 0.000911 |
| test_detail_chacha20.test | RUN | 0.093693 | 0.325074 | 0.279106 | 0.000869 | 0.000954 | 0.001051 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.080452 | 0.179351 | 0.225358 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.083381 | 0.178733 | 0.222318 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.139888 | 0.356622 | 0.390536 | 0.000901 | 0.000878 | 0.000893 |
| test_bench_random.test | RUN | 0.156319 | 0.472547 | 0.517855 | 0.012088 | 0.012299 | 0.012065 |
| test_entropy_error.test | RUN | 0.076911 | 0.211731 | 0.236685 | 0.001015 | 0.001026 | 0.001169 |
| test_detail_random_provider.test | RUN | 0.150337 | 0.365503 | 0.444555 | 0.000983 | 0.001019 | 0.000927 |
| test_constants.test | RUN | 0.121745 | 0.348320 | 0.367658 | 0.000998 | 0.001013 | 0.000934 |
| test_uuid_cx.test | COMPILE | 0.064889 | 0.152308 | 0.177738 | — | — | — |
| test_uuid_cx2.test | RUN | 0.125285 | 0.391879 | 0.407301 | 0.000990 | 0.000901 | 0.000887 |
| test_uuid_cx3.test | RUN | 0.108537 | 0.305988 | 0.356533 | 0.000933 | 0.001038 | 0.000911 |
| test_uuid_cx3_no_simd.test | RUN | 0.102084 | 0.286534 | 0.314300 | 0.000967 | 0.000970 | 0.000847 |
| test_hash_value_cx.test | RUN | 0.104925 | 0.276011 | 0.320325 | 0.000936 | 0.000898 | 0.000893 |
| test_string_generator_cx.test | RUN | 0.122318 | 0.344673 | 0.370395 | 0.000972 | 0.000959 | 0.000928 |
| test_string_generator_cx2.test | RUN | 0.154916 | 0.430267 | 0.431273 | 0.001004 | 0.000920 | 0.000898 |
| test_constants_cx.test | RUN | 0.099003 | 0.234545 | 0.285729 | 0.001059 | 0.000854 | 0.000855 |
| test_from_chars_cx.test | RUN | 0.134841 | 0.457034 | 0.395181 | 0.000920 | 0.001203 | 0.000882 |
| test_from_chars_cx2.test | RUN | 0.137436 | 0.565057 | 0.442678 | 0.000936 | 0.000991 | 0.000941 |
| test_to_chars_cx.test | RUN | 0.136700 | 0.527967 | 0.470696 | 0.000977 | 0.001161 | 0.001086 |
| test_uuid_from_string_cx.test | RUN | 0.145683 | 0.532131 | 0.459089 | 0.000862 | 0.000841 | 0.000798 |
| quick.test | RUN | 0.151916 | 0.418393 | 0.444945 | 0.000838 | 0.001033 | 0.000869 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997×† | 0.961×, 1.032× | 1.026× |
| clang | 0.990×† | 0.974×, 1.006× | 0.939× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000898s | 0.000898s | 0.000901s | byte equality observed |
| test_alignment.test | 10 | 0.000892s | 0.000896s | 0.000903s | byte equality observed |
| test_alignment_2.test | 10 | 0.000903s | 0.000898s | 0.000903s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000904s | 0.000905s | 0.000901s | byte equality observed |
| test_bench_random.test | 2 | 0.012146s | 0.012141s | 0.012164s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000966s | 0.000967s | 0.000974s | byte equality observed |
| test_comparison.test | 10 | 0.000933s | 0.000942s | 0.000932s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000947s | 0.000940s | 0.000942s | byte equality observed |
| test_constants.test | 10 | 0.000912s | 0.000923s | 0.000917s | byte equality observed |
| test_constants_cx.test | 10 | 0.000883s | 0.000887s | 0.000889s | byte equality observed |
| test_data.test | 10 | 0.000903s | 0.000907s | 0.000910s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000908s | 0.000897s | 0.000902s | byte equality observed |
| test_detail_endian.test | 10 | 0.000910s | 0.000915s | 0.000903s | byte equality observed |
| test_detail_md5.test | 10 | 0.000937s | 0.000942s | 0.000927s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000938s | 0.000944s | 0.000937s | byte equality observed |
| test_detail_sha1.test | 3 | 0.006810s | 0.007351s | 0.006542s | byte equality observed |
| test_entropy_error.test | 10 | 0.000922s | 0.000921s | 0.000917s | byte equality observed |
| test_from_chars.test | 10 | 0.000907s | 0.000919s | 0.000913s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000916s | 0.000912s | 0.000926s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000912s | 0.000910s | 0.000908s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000908s | 0.000906s | 0.000904s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000910s | 0.000915s | 0.000920s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000915s | 0.000904s | 0.000917s | byte equality observed |
| test_hash.test | 10 | 0.000924s | 0.000910s | 0.000930s | byte equality observed |
| test_hash_value.test | 5 | 0.003822s | 0.003787s | 0.003741s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000899s | 0.000894s | 0.000908s | byte equality observed |
| test_include1.test | 10 | 0.000420s | 0.000412s | 0.000877s | byte equality observed |
| test_io.test | 10 | 0.000976s | 0.000979s | 0.000971s | byte equality observed |
| test_io_2.test | 10 | 0.001020s | 0.001040s | 0.001012s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001033s | 0.001042s | 0.001031s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000987s | 0.000986s | 0.000982s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000915s | 0.000910s | 0.000896s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000945s | 0.000948s | 0.000931s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000942s | 0.000947s | 0.000933s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000957s | 0.000969s | 0.000951s | byte equality observed |
| test_namespaces.test | 10 | 0.000913s | 0.000921s | 0.000919s | byte equality observed |
| test_nil_generator.test | 10 | 0.000906s | 0.000909s | 0.000906s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000904s | 0.000904s | 0.000906s | byte equality observed |
| test_random_generator.test | 6 | 0.003115s | 0.003103s | 0.003114s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000927s | 0.000916s | 0.000907s | byte equality observed |
| test_serialization.test | 10 | 0.001016s | 0.001019s | 0.001015s | byte equality observed |
| test_std_unordered.test | 10 | 0.000990s | 0.000994s | 0.000983s | byte equality observed |
| test_string_generator.test | 10 | 0.001010s | 0.001000s | 0.000995s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000935s | 0.000949s | 0.000927s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000918s | 0.000918s | 0.000901s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000928s | 0.000914s | 0.000917s | byte equality observed |
| test_tagging.test | 10 | 0.000937s | 0.000939s | 0.000928s | byte equality observed |
| test_time_generator.test | 10 | 0.000943s | 0.000941s | 0.000945s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001321s | 0.001425s | 0.001456s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001157s | 0.001198s | 0.001218s | byte equality observed |
| test_time_generator_v1_3.test | 2 | 0.017409s | 0.016440s | 0.015894s | byte equality observed |
| test_time_generator_v6.test | 9 | 0.001335s | 0.001422s | 0.001444s | byte equality observed |
| test_time_generator_v6_2.test | 7 | 0.001167s | 0.001209s | 0.001204s | byte equality observed |
| test_time_generator_v6_3.test | 2 | 0.017034s | 0.015815s | 0.016255s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001152s | 0.001223s | 0.001203s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000982s | 0.000985s | 0.000972s | byte equality observed |
| test_time_generator_v7_3.test | 6 | 0.002063s | 0.002058s | 0.002053s | byte equality observed |
| test_to_chars.test | 10 | 0.000978s | 0.000981s | 0.000965s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000944s | 0.000934s | 0.000948s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000944s | 0.000946s | 0.000934s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000922s | 0.000924s | 0.000925s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000929s | 0.000938s | 0.000919s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000983s | 0.000976s | 0.000979s | byte equality observed |
| test_uuid.test | 10 | 0.000904s | 0.000909s | 0.000903s | byte equality observed |
| test_uuid_2.test | 10 | 0.000923s | 0.000914s | 0.000913s | byte equality observed |
| test_uuid_3.test | 10 | 0.000905s | 0.000907s | 0.000905s | byte equality observed |
| test_uuid_class.test | 10 | 0.000933s | 0.000936s | 0.000924s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000906s | 0.000903s | 0.000900s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000917s | 0.000908s | 0.000915s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000901s | 0.000903s | 0.000908s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000910s | 0.000909s | 0.000899s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000928s | 0.000933s | 0.000925s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001118s | 0.001109s | 0.001146s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000995s | 0.000985s | 0.000992s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000926s | 0.000914s | 0.000906s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000924s | 0.000920s | 0.000915s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000911s | 0.000913s | 0.000900s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
