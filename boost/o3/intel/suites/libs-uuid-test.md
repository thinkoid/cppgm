# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.278889 | 0.641940 | 0.817960 | 0.000444 | 0.000527 | 0.000914 |
| test_uuid.test | RUN | 0.173697 | 0.547829 | 0.585866 | 0.001014 | 0.001053 | 0.000882 |
| test_uuid_no_simd.test | RUN | 0.172070 | 0.527241 | 0.535567 | 0.000978 | 0.001094 | 0.000969 |
| test_uuid_2.test | RUN | 0.124334 | 0.399224 | 0.390644 | 0.001092 | 0.001068 | 0.000949 |
| test_uuid_3.test | RUN | 0.102708 | 0.270858 | 0.306122 | 0.001118 | 0.001089 | 0.000992 |
| test_alignment.test | RUN | 0.093919 | 0.241600 | 0.294451 | 0.001058 | 0.001121 | 0.000919 |
| test_alignment_2.test | RUN | 0.094346 | 0.239245 | 0.276845 | 0.001035 | 0.001065 | 0.000969 |
| test_attribute_packed.test | RUN | 0.093318 | 0.253256 | 0.286697 | 0.001050 | 0.001130 | 0.001049 |
| test_pragma_pack.test | RUN | 0.094581 | 0.244624 | 0.278209 | 0.001046 | 0.001068 | 0.000974 |
| test_data.test | RUN | 0.114552 | 0.454480 | 0.411142 | 0.001015 | 0.001202 | 0.000993 |
| test_comparison.test | RUN | 0.164143 | 0.529396 | 0.568042 | 0.001029 | 0.001151 | 0.001293 |
| test_comparison_no_simd.test | RUN | 0.162149 | 0.591591 | 0.503440 | 0.001078 | 0.001298 | 0.001193 |
| test_io.test | RUN | 0.222311 | 1.041304 | 0.858516 | 0.001211 | 0.001305 | 0.001061 |
| test_io_no_simd.test | RUN | 0.215601 | 1.015460 | 0.829083 | 0.001132 | 0.001085 | 0.001020 |
| test_io_2.test | RUN | 0.170815 | 1.079045 | 0.601945 | 0.001255 | 0.001265 | 0.001090 |
| test_io_2_no_simd.test | RUN | 0.153628 | 1.016977 | 0.567810 | 0.001228 | 0.001138 | 0.001151 |
| test_to_chars.test | RUN | 0.155256 | 0.672794 | 0.554929 | 0.001116 | 0.001116 | 0.001077 |
| test_to_chars_no_simd.test | RUN | 0.152032 | 0.669951 | 0.538403 | 0.001012 | 0.001145 | 0.001070 |
| test_to_chars_2.test | RUN | 0.189759 | 1.242114 | 0.676139 | 0.001041 | 0.001149 | 0.000987 |
| test_to_chars_2_no_simd.test | RUN | 0.199618 | 1.310289 | 0.622539 | 0.001103 | 0.001111 | 0.000955 |
| test_to_chars_3.test | RUN | 0.122310 | 0.429892 | 0.408230 | 0.001042 | 0.001186 | 0.000922 |
| test_from_chars.test | RUN | 0.144351 | 0.619163 | 0.451401 | 0.001058 | 0.000998 | 0.001029 |
| test_from_chars_no_simd.test | RUN | 0.126392 | 0.491617 | 0.390785 | 0.001070 | 0.001068 | 0.000938 |
| test_from_chars_2.test | RUN | 0.143696 | 0.590783 | 0.441859 | 0.001026 | 0.001099 | 0.000883 |
| test_from_chars_2_no_simd.test | RUN | 0.127302 | 0.453295 | 0.362700 | 0.000944 | 0.000990 | 0.001006 |
| test_uuid_from_string.test | RUN | 0.167794 | 0.651751 | 0.555594 | 0.001015 | 0.001075 | 0.001093 |
| test_uuid_from_string_2.test | RUN | 0.146514 | 0.589794 | 0.460956 | 0.001175 | 0.001319 | 0.001309 |
| test_uuid_from_string_3.test | RUN | 0.152384 | 0.592706 | 0.475602 | 0.001082 | 0.001246 | 0.001179 |
| test_uuid_clock.test | RUN | 0.086600 | 0.235877 | 0.269956 | 0.000973 | 0.001050 | 0.001052 |
| test_nil_generator.test | RUN | 0.102225 | 0.277885 | 0.315148 | 0.000964 | 0.001135 | 0.001125 |
| test_string_generator.test | RUN | 0.139354 | 0.469862 | 0.453980 | 0.001130 | 0.001148 | 0.001190 |
| test_string_generator_2.test | RUN | 0.175091 | 0.654709 | 0.507465 | 0.001102 | 0.001101 | 0.001031 |
| test_random_generator.test | RUN | 0.225866 | 1.255647 | 0.762522 | 0.004092 | 0.004201 | 0.004062 |
| test_random_generator_2.test | RUN | 0.168695 | 0.480261 | 0.502444 | 0.001043 | 0.000996 | 0.001102 |
| test_name_generator.test | RUN | 0.151503 | 1.630761 | 0.560707 | 0.001048 | 0.001151 | 0.001061 |
| test_namespaces.test | RUN | 0.118592 | 0.353769 | 0.361065 | 0.001159 | 0.001090 | 0.001147 |
| test_name_generator_md5.test | RUN | 0.151118 | 0.796826 | 0.556133 | 0.001106 | 0.001157 | 0.001157 |
| test_name_generator_sha1.test | RUN | 0.146652 | 2.333133 | 0.537970 | 0.001115 | 0.001195 | 0.001109 |
| test_time_generator.test | RUN | 0.154847 | 0.478150 | 0.499703 | 0.001054 | 0.001348 | 0.001062 |
| test_time_generator_v1.test | RUN | 0.172685 | 0.533079 | 0.552508 | 0.001445 | 0.001570 | 0.001615 |
| test_time_generator_v1_2.test | RUN | 0.170891 | 0.494839 | 0.524690 | 0.001394 | 0.001403 | 0.001370 |
| test_time_generator_v1_3.test | RUN | 0.191946 | 0.519615 | 0.589121 | 0.003988 | 0.010353 | 0.004212 |
| test_time_generator_v6.test | RUN | 0.172774 | 0.528247 | 0.560909 | 0.001469 | 0.001695 | 0.001552 |
| test_time_generator_v6_2.test | RUN | 0.169316 | 0.523687 | 0.535223 | 0.001217 | 0.001465 | 0.001307 |
| test_time_generator_v6_3.test | RUN | 0.187610 | 0.537978 | 0.583936 | 0.013934 | 0.002598 | 0.012151 |
| test_time_generator_v7.test | RUN | 0.169642 | 0.530589 | 0.545911 | 0.001426 | 0.001405 | 0.001312 |
| test_time_generator_v7_2.test | RUN | 0.155676 | 0.462828 | 0.483035 | 0.001118 | 0.001186 | 0.001121 |
| test_time_generator_v7_3.test | RUN | 0.157321 | 0.587972 | 0.503917 | 0.002595 | 0.002689 | 0.002826 |
| test_serialization.test | RUN | 0.288086 | 0.935096 | 0.922255 | 0.001182 | 0.001173 | 0.001210 |
| test_tagging.test | RUN | 0.157805 | 0.554998 | 0.499079 | 0.001073 | 0.001054 | 0.001125 |
| test_uuid_class.test | RUN | 0.164862 | 0.494407 | 0.544674 | 0.001032 | 0.001064 | 0.001031 |
| test_uuid_in_map.test | RUN | 0.181691 | 0.569815 | 0.576176 | 0.001011 | 0.001069 | 0.000977 |
| test_hash.test | RUN | 0.175370 | 0.503845 | 0.533298 | 0.001036 | 0.001087 | 0.000992 |
| test_hash_value.test | RUN | 0.130806 | 0.358367 | 0.403785 | 0.003973 | 0.003901 | 0.003779 |
| test_std_unordered.test | RUN | 0.168735 | 0.583170 | 0.546550 | 0.001018 | 0.001220 | 0.001048 |
| test_boost_unordered.test | RUN | 0.243858 | 0.752308 | 0.706410 | 0.000999 | 0.001175 | 0.001079 |
| test_detail_md5.test | RUN | 0.112399 | 0.371735 | 0.400023 | 0.001069 | 0.001108 | 0.000971 |
| test_detail_sha1.test | RUN | 0.103279 | 0.456566 | 0.363693 | 0.006258 | 0.007858 | 0.006641 |
| test_detail_endian.test | RUN | 0.080554 | 0.262801 | 0.265167 | 0.001007 | 0.001006 | 0.000960 |
| test_detail_chacha20.test | RUN | 0.090735 | 0.328550 | 0.279501 | 0.000976 | 0.001048 | 0.001054 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.079060 | 0.183361 | 0.222063 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.079761 | 0.182081 | 0.222533 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.135988 | 0.362863 | 0.391252 | 0.001013 | 0.001090 | 0.000953 |
| test_bench_random.test | RUN | 0.151035 | 0.473818 | 0.515123 | 0.016755 | 0.016662 | 0.016655 |
| test_entropy_error.test | RUN | 0.075798 | 0.213113 | 0.234394 | 0.001018 | 0.001137 | 0.001033 |
| test_detail_random_provider.test | RUN | 0.146727 | 0.365526 | 0.451530 | 0.001057 | 0.001176 | 0.001051 |
| test_constants.test | RUN | 0.117952 | 0.351784 | 0.364681 | 0.001098 | 0.001097 | 0.001068 |
| test_uuid_cx.test | COMPILE | 0.065026 | 0.154933 | 0.179086 | — | — | — |
| test_uuid_cx2.test | RUN | 0.124848 | 0.397936 | 0.397997 | 0.000955 | 0.000993 | 0.001074 |
| test_uuid_cx3.test | RUN | 0.107655 | 0.307321 | 0.360988 | 0.001075 | 0.001107 | 0.001000 |
| test_uuid_cx3_no_simd.test | RUN | 0.100125 | 0.284551 | 0.318702 | 0.001007 | 0.001071 | 0.000991 |
| test_hash_value_cx.test | RUN | 0.100947 | 0.271432 | 0.314956 | 0.000975 | 0.001071 | 0.000986 |
| test_string_generator_cx.test | RUN | 0.117229 | 0.348950 | 0.365658 | 0.001038 | 0.001108 | 0.000985 |
| test_string_generator_cx2.test | RUN | 0.153806 | 0.430619 | 0.428524 | 0.001050 | 0.001045 | 0.001047 |
| test_constants_cx.test | RUN | 0.096710 | 0.233195 | 0.289726 | 0.000912 | 0.000955 | 0.000944 |
| test_from_chars_cx.test | RUN | 0.130727 | 0.455523 | 0.397452 | 0.001099 | 0.001071 | 0.001005 |
| test_from_chars_cx2.test | RUN | 0.137152 | 0.564487 | 0.437067 | 0.000998 | 0.000997 | 0.000963 |
| test_to_chars_cx.test | RUN | 0.135468 | 0.527145 | 0.469893 | 0.001046 | 0.001105 | 0.001021 |
| test_uuid_from_string_cx.test | RUN | 0.144355 | 0.536397 | 0.456904 | 0.001005 | 0.001036 | 0.001049 |
| quick.test | RUN | 0.147133 | 0.418671 | 0.451627 | 0.001001 | 0.000977 | 0.001002 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.014×† | 0.987×, 1.041× | 1.023× |
| clang | 0.999× | 1.015×, 0.982× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000945s | 0.000942s | 0.000937s | byte equality observed |
| test_alignment.test | 10 | 0.000935s | 0.000949s | 0.000944s | byte equality observed |
| test_alignment_2.test | 10 | 0.000937s | 0.000935s | 0.000946s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000935s | 0.000943s | 0.000947s | byte equality observed |
| test_bench_random.test | 2 | 0.016622s | 0.016650s | 0.016600s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001021s | 0.001008s | 0.001007s | byte equality observed |
| test_comparison.test | 10 | 0.000977s | 0.000978s | 0.000970s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000977s | 0.000967s | 0.000974s | byte equality observed |
| test_constants.test | 10 | 0.000955s | 0.000949s | 0.000943s | byte equality observed |
| test_constants_cx.test | 10 | 0.000925s | 0.000914s | 0.000922s | byte equality observed |
| test_data.test | 10 | 0.000942s | 0.000937s | 0.000942s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000939s | 0.000939s | 0.000942s | byte equality observed |
| test_detail_endian.test | 10 | 0.000949s | 0.000945s | 0.000935s | byte equality observed |
| test_detail_md5.test | 10 | 0.000975s | 0.000975s | 0.000963s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000989s | 0.000976s | 0.000985s | byte equality observed |
| test_detail_sha1.test | 3 | 0.006259s | 0.007662s | 0.006788s | byte equality observed |
| test_entropy_error.test | 10 | 0.000961s | 0.000959s | 0.000946s | byte equality observed |
| test_from_chars.test | 10 | 0.000951s | 0.000961s | 0.000943s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000956s | 0.000954s | 0.000955s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000947s | 0.000949s | 0.000954s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000952s | 0.000953s | 0.000943s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000946s | 0.000946s | 0.000961s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000948s | 0.000946s | 0.000961s | byte equality observed |
| test_hash.test | 10 | 0.000968s | 0.000959s | 0.000955s | byte equality observed |
| test_hash_value.test | 5 | 0.003820s | 0.003795s | 0.003760s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000934s | 0.000947s | 0.000942s | byte equality observed |
| test_include1.test | 10 | 0.000455s | 0.000449s | 0.000919s | byte equality observed |
| test_io.test | 10 | 0.001016s | 0.001015s | 0.001021s | byte equality observed |
| test_io_2.test | 10 | 0.001056s | 0.001053s | 0.001058s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001061s | 0.001081s | 0.001058s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001014s | 0.001020s | 0.001019s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000958s | 0.000941s | 0.000940s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000978s | 0.000978s | 0.000969s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000980s | 0.000979s | 0.000965s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000995s | 0.001000s | 0.000985s | byte equality observed |
| test_namespaces.test | 10 | 0.000964s | 0.000953s | 0.000954s | byte equality observed |
| test_nil_generator.test | 10 | 0.000936s | 0.000943s | 0.000938s | byte equality observed |
| test_pragma_pack.test | 8 | 0.000941s | 0.000933s | 0.000935s | byte equality observed |
| test_random_generator.test | 5 | 0.004003s | 0.004001s | 0.003999s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000970s | 0.000954s | 0.000962s | byte equality observed |
| test_serialization.test | 10 | 0.001056s | 0.001047s | 0.001045s | byte equality observed |
| test_std_unordered.test | 10 | 0.001034s | 0.001029s | 0.001032s | byte equality observed |
| test_string_generator.test | 10 | 0.001052s | 0.001031s | 0.001051s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000977s | 0.000976s | 0.000963s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000960s | 0.000954s | 0.000945s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000962s | 0.000954s | 0.000941s | byte equality observed |
| test_tagging.test | 10 | 0.000974s | 0.000968s | 0.000955s | byte equality observed |
| test_time_generator.test | 10 | 0.000985s | 0.000973s | 0.000976s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001364s | 0.001475s | 0.001473s | byte equality observed |
| test_time_generator_v1_2.test | 7 | 0.001194s | 0.001238s | 0.001248s | byte equality observed |
| test_time_generator_v1_3.test | 1 | 0.019271s | 0.018951s | 0.022689s | byte equality observed |
| test_time_generator_v6.test | 7 | 0.001380s | 0.001461s | 0.001505s | byte equality observed |
| test_time_generator_v6_2.test | 9 | 0.001200s | 0.001245s | 0.001246s | byte equality observed |
| test_time_generator_v6_3.test | 2 | 0.019485s | 0.017211s | 0.018051s | byte equality observed |
| test_time_generator_v7.test | 7 | 0.001190s | 0.001246s | 0.001238s | byte equality observed |
| test_time_generator_v7_2.test | 7 | 0.001028s | 0.001033s | 0.001033s | byte equality observed |
| test_time_generator_v7_3.test | 7 | 0.002534s | 0.002515s | 0.002543s | byte equality observed |
| test_to_chars.test | 10 | 0.001019s | 0.001021s | 0.001020s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000977s | 0.000972s | 0.000979s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000981s | 0.000983s | 0.000970s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000960s | 0.000952s | 0.000951s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000965s | 0.000946s | 0.000952s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001010s | 0.001003s | 0.001003s | byte equality observed |
| test_uuid.test | 10 | 0.000945s | 0.000945s | 0.000960s | byte equality observed |
| test_uuid_2.test | 10 | 0.000961s | 0.000950s | 0.000955s | byte equality observed |
| test_uuid_3.test | 10 | 0.000946s | 0.000937s | 0.000948s | byte equality observed |
| test_uuid_class.test | 10 | 0.000972s | 0.000965s | 0.000970s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000952s | 0.000946s | 0.000949s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000968s | 0.000946s | 0.000944s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000944s | 0.000947s | 0.000951s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000944s | 0.000954s | 0.000953s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000969s | 0.000957s | 0.000951s | byte equality observed |
| test_uuid_from_string_2.test | 9 | 0.001147s | 0.001156s | 0.001170s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001029s | 0.001027s | 0.001032s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000959s | 0.000949s | 0.000956s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000958s | 0.000962s | 0.000963s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000945s | 0.000944s | 0.000950s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
