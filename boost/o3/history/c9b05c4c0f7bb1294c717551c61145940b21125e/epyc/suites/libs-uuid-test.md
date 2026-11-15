# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.592421 | 1.317190 | 2.290485 | 0.000843 | 0.000839 | 0.002112 |
| test_uuid.test | RUN | 0.351033 | 1.045808 | 1.507939 | 0.002046 | 0.002012 | 0.002070 |
| test_uuid_no_simd.test | RUN | 0.338563 | 1.001266 | 1.386708 | 0.002264 | 0.001830 | 0.002028 |
| test_uuid_2.test | RUN | 0.259897 | 0.769062 | 1.013779 | 0.001828 | 0.002100 | 0.001888 |
| test_uuid_3.test | RUN | 0.204878 | 0.524048 | 0.780055 | 0.001826 | 0.002186 | 0.001825 |
| test_alignment.test | RUN | 0.199748 | 0.469336 | 0.744075 | 0.001832 | 0.001907 | 0.002006 |
| test_alignment_2.test | RUN | 0.165332 | 0.492068 | 0.759711 | 0.001849 | 0.001752 | 0.001951 |
| test_attribute_packed.test | RUN | 0.206075 | 0.488745 | 0.736095 | 0.001853 | 0.002140 | 0.001647 |
| test_pragma_pack.test | RUN | 0.170658 | 0.480523 | 0.744327 | 0.001933 | 0.002163 | 0.001669 |
| test_data.test | RUN | 0.242423 | 0.873881 | 1.049544 | 0.001957 | 0.002008 | 0.002124 |
| test_comparison.test | RUN | 0.279416 | 1.009610 | 1.395312 | 0.001878 | 0.002108 | 0.001712 |
| test_comparison_no_simd.test | RUN | 0.326556 | 1.132090 | 1.317167 | 0.001870 | 0.002112 | 0.001892 |
| test_io.test | RUN | 0.401907 | 1.868749 | 2.068869 | 0.002232 | 0.002153 | 0.001563 |
| test_io_no_simd.test | RUN | 0.399394 | 1.847563 | 1.887866 | 0.001881 | 0.001969 | 0.001592 |
| test_io_2.test | RUN | 0.314275 | 1.916246 | 1.471031 | 0.001897 | 0.001871 | 0.001834 |
| test_io_2_no_simd.test | RUN | 0.283326 | 1.774108 | 1.351956 | 0.002276 | 0.002183 | 0.002006 |
| test_to_chars.test | RUN | 0.291285 | 1.202916 | 1.328898 | 0.002174 | 0.002256 | 0.002128 |
| test_to_chars_no_simd.test | RUN | 0.287177 | 1.227714 | 1.331253 | 0.001964 | 0.002009 | 0.002164 |
| test_to_chars_2.test | RUN | 0.338731 | 2.179209 | 1.607982 | 0.001879 | 0.001911 | 0.001681 |
| test_to_chars_2_no_simd.test | RUN | 0.350809 | 2.373254 | 1.388783 | 0.001908 | 0.001764 | 0.002063 |
| test_to_chars_3.test | RUN | 0.241731 | 0.804943 | 0.985200 | 0.001915 | 0.001933 | 0.001686 |
| test_from_chars.test | RUN | 0.274175 | 1.142710 | 1.133923 | 0.001810 | 0.001881 | 0.002038 |
| test_from_chars_no_simd.test | RUN | 0.243078 | 0.907599 | 0.943499 | 0.001958 | 0.001972 | 0.001832 |
| test_from_chars_2.test | RUN | 0.266116 | 1.090184 | 1.064645 | 0.001675 | 0.001870 | 0.002034 |
| test_from_chars_2_no_simd.test | RUN | 0.238905 | 0.831148 | 0.886109 | 0.001836 | 0.002036 | 0.002131 |
| test_uuid_from_string.test | RUN | 0.315720 | 1.182671 | 1.340661 | 0.001862 | 0.002025 | 0.001896 |
| test_uuid_from_string_2.test | RUN | 0.277150 | 1.074430 | 1.116183 | 0.002382 | 0.002521 | 0.002222 |
| test_uuid_from_string_3.test | RUN | 0.279325 | 1.071139 | 1.192781 | 0.002006 | 0.002118 | 0.002301 |
| test_uuid_clock.test | RUN | 0.173712 | 0.442882 | 0.709079 | 0.001726 | 0.002120 | 0.001932 |
| test_nil_generator.test | RUN | 0.206801 | 0.552770 | 0.818119 | 0.002040 | 0.001700 | 0.002092 |
| test_string_generator.test | RUN | 0.261275 | 0.869041 | 1.125895 | 0.001876 | 0.002086 | 0.002162 |
| test_string_generator_2.test | RUN | 0.323393 | 1.227039 | 1.250526 | 0.002154 | 0.001981 | 0.002066 |
| test_random_generator.test | RUN | 0.451316 | 2.343239 | 1.879182 | 0.003181 | 0.003468 | 0.003438 |
| test_random_generator_2.test | RUN | 0.322083 | 0.901878 | 1.330558 | 0.001957 | 0.002130 | 0.002039 |
| test_name_generator.test | RUN | 0.280331 | 3.016156 | 1.383746 | 0.001781 | 0.002152 | 0.002106 |
| test_namespaces.test | RUN | 0.230834 | 0.650584 | 0.884329 | 0.001731 | 0.002210 | 0.001722 |
| test_name_generator_md5.test | RUN | 0.292618 | 1.447429 | 1.303527 | 0.001970 | 0.002156 | 0.002263 |
| test_name_generator_sha1.test | RUN | 0.276504 | 4.466495 | 1.314000 | 0.001857 | 0.002068 | 0.002115 |
| test_time_generator.test | RUN | 0.298660 | 0.905484 | 1.321940 | 0.001835 | 0.002191 | 0.002022 |
| test_time_generator_v1.test | RUN | 0.338306 | 1.006152 | 1.353046 | 0.002563 | 0.002782 | 0.002826 |
| test_time_generator_v1_2.test | RUN | 0.341048 | 0.945967 | 1.356854 | 0.002303 | 0.002494 | 0.002563 |
| test_time_generator_v1_3.test | RUN | 0.361148 | 0.990993 | 1.556171 | 0.005566 | 0.005364 | 0.005803 |
| test_time_generator_v6.test | RUN | 0.337163 | 0.999258 | 1.470049 | 0.002477 | 0.002826 | 0.002329 |
| test_time_generator_v6_2.test | RUN | 0.334850 | 0.947246 | 1.377426 | 0.002354 | 0.002608 | 0.002400 |
| test_time_generator_v6_3.test | RUN | 0.365389 | 0.986666 | 1.526244 | 0.004609 | 0.006125 | 0.005517 |
| test_time_generator_v7.test | RUN | 0.326256 | 1.003374 | 1.361745 | 0.002032 | 0.002298 | 0.002301 |
| test_time_generator_v7_2.test | RUN | 0.300953 | 0.909571 | 1.322270 | 0.002012 | 0.002258 | 0.002090 |
| test_time_generator_v7_3.test | RUN | 0.324785 | 1.125705 | 1.340448 | 0.003004 | 0.003097 | 0.003139 |
| test_serialization.test | RUN | 0.566305 | 1.679955 | 2.269340 | 0.002256 | 0.002052 | 0.002246 |
| test_tagging.test | RUN | 0.313482 | 1.071877 | 1.352125 | 0.001899 | 0.001670 | 0.001932 |
| test_uuid_class.test | RUN | 0.324263 | 0.958185 | 1.410533 | 0.001776 | 0.002019 | 0.001977 |
| test_uuid_in_map.test | RUN | 0.368974 | 1.079503 | 1.508766 | 0.002053 | 0.002224 | 0.001727 |
| test_hash.test | RUN | 0.363605 | 1.009853 | 1.433625 | 0.002065 | 0.001970 | 0.002105 |
| test_hash_value.test | RUN | 0.263347 | 0.694187 | 1.027487 | 0.006180 | 0.006187 | 0.006066 |
| test_std_unordered.test | RUN | 0.333260 | 1.086546 | 1.393631 | 0.002236 | 0.002054 | 0.002163 |
| test_boost_unordered.test | RUN | 0.473355 | 1.437608 | 1.766661 | 0.001836 | 0.001867 | 0.002132 |
| test_detail_md5.test | RUN | 0.217244 | 0.717161 | 1.042102 | 0.002010 | 0.001875 | 0.001922 |
| test_detail_sha1.test | RUN | 0.212468 | 0.867829 | 0.902172 | 0.012612 | 0.011290 | 0.012053 |
| test_detail_endian.test | RUN | 0.162499 | 0.509970 | 0.670772 | 0.001849 | 0.001798 | 0.001814 |
| test_detail_chacha20.test | RUN | 0.176753 | 0.627886 | 0.657970 | 0.002028 | 0.002114 | 0.001772 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.159627 | 0.380871 | 0.559742 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.157994 | 0.347172 | 0.599376 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.273156 | 0.698733 | 1.037289 | 0.001974 | 0.002165 | 0.002128 |
| test_bench_random.test | RUN | 0.294675 | 0.909952 | 1.372926 | 0.008779 | 0.008914 | 0.008799 |
| test_entropy_error.test | RUN | 0.156366 | 0.404241 | 0.627866 | 0.001948 | 0.002264 | 0.001756 |
| test_detail_random_provider.test | RUN | 0.301710 | 0.721996 | 1.150512 | 0.001916 | 0.002080 | 0.002032 |
| test_constants.test | RUN | 0.228552 | 0.649491 | 0.911300 | 0.001622 | 0.002204 | 0.001867 |
| test_uuid_cx.test | COMPILE | 0.134545 | 0.322913 | 0.507405 | — | — | — |
| test_uuid_cx2.test | RUN | 0.242148 | 0.731175 | 1.011720 | 0.001890 | 0.002188 | 0.002116 |
| test_uuid_cx3.test | RUN | 0.211420 | 0.580103 | 0.918466 | 0.001727 | 0.001951 | 0.001668 |
| test_uuid_cx3_no_simd.test | RUN | 0.194857 | 0.557257 | 0.799912 | 0.002020 | 0.001764 | 0.001834 |
| test_hash_value_cx.test | RUN | 0.201381 | 0.540157 | 0.806958 | 0.001583 | 0.001958 | 0.002002 |
| test_string_generator_cx.test | RUN | 0.233924 | 0.656188 | 0.930507 | 0.001898 | 0.002038 | 0.002093 |
| test_string_generator_cx2.test | RUN | 0.287194 | 0.783067 | 1.053950 | 0.001892 | 0.002000 | 0.002248 |
| test_constants_cx.test | RUN | 0.193613 | 0.463651 | 0.802840 | 0.001902 | 0.001891 | 0.001973 |
| test_from_chars_cx.test | RUN | 0.248623 | 0.903003 | 1.026199 | 0.001849 | 0.002052 | 0.001936 |
| test_from_chars_cx2.test | RUN | 0.259613 | 1.078726 | 1.087117 | 0.001950 | 0.002130 | 0.001969 |
| test_to_chars_cx.test | RUN | 0.258901 | 0.992292 | 1.184409 | 0.002060 | 0.001759 | 0.001910 |
| test_uuid_from_string_cx.test | RUN | 0.267495 | 1.012347 | 1.045244 | 0.001518 | 0.001528 | 0.001397 |
| quick.test | RUN | 0.287813 | 0.736358 | 1.008434 | 0.001494 | 0.001450 | 0.001226 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.995×, 0.994× | 0.996× |
| clang | 0.996× | 1.000×, 0.991× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001484s | 0.001463s | 0.001446s | byte equality observed |
| test_alignment.test | 10 | 0.001460s | 0.001460s | 0.001436s | byte equality observed |
| test_alignment_2.test | 10 | 0.001430s | 0.001432s | 0.001403s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001430s | 0.001414s | 0.001399s | byte equality observed |
| test_bench_random.test | 3 | 0.008293s | 0.008270s | 0.008210s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001487s | 0.001508s | 0.001501s | byte equality observed |
| test_comparison.test | 10 | 0.001478s | 0.001490s | 0.001491s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001506s | 0.001516s | 0.001502s | byte equality observed |
| test_constants.test | 10 | 0.001500s | 0.001485s | 0.001493s | byte equality observed |
| test_constants_cx.test | 9 | 0.001440s | 0.001496s | 0.001452s | byte equality observed |
| test_data.test | 10 | 0.001457s | 0.001469s | 0.001481s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001484s | 0.001481s | 0.001432s | byte equality observed |
| test_detail_endian.test | 10 | 0.001480s | 0.001479s | 0.001470s | byte equality observed |
| test_detail_md5.test | 10 | 0.001474s | 0.001515s | 0.001492s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001463s | 0.001463s | 0.001478s | byte equality observed |
| test_detail_sha1.test | 3 | 0.011236s | 0.010027s | 0.010314s | byte equality observed |
| test_entropy_error.test | 10 | 0.001423s | 0.001391s | 0.001427s | byte equality observed |
| test_from_chars.test | 10 | 0.001428s | 0.001439s | 0.001434s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001424s | 0.001435s | 0.001451s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001484s | 0.001449s | 0.001478s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001483s | 0.001469s | 0.001485s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001463s | 0.001465s | 0.001487s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001483s | 0.001428s | 0.001472s | byte equality observed |
| test_hash.test | 10 | 0.001491s | 0.001517s | 0.001438s | byte equality observed |
| test_hash_value.test | 5 | 0.005567s | 0.005406s | 0.005295s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001436s | 0.001441s | 0.001444s | byte equality observed |
| test_include1.test | 10 | 0.000633s | 0.000622s | 0.001431s | byte equality observed |
| test_io.test | 10 | 0.001560s | 0.001545s | 0.001521s | byte equality observed |
| test_io_2.test | 10 | 0.001663s | 0.001676s | 0.001648s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001651s | 0.001648s | 0.001643s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001544s | 0.001574s | 0.001544s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001468s | 0.001456s | 0.001456s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001521s | 0.001535s | 0.001502s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001546s | 0.001514s | 0.001522s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001544s | 0.001556s | 0.001481s | byte equality observed |
| test_namespaces.test | 10 | 0.001482s | 0.001469s | 0.001440s | byte equality observed |
| test_nil_generator.test | 10 | 0.001439s | 0.001467s | 0.001457s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001425s | 0.001453s | 0.001441s | byte equality observed |
| test_random_generator.test | 7 | 0.002902s | 0.002871s | 0.002881s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001480s | 0.001524s | 0.001448s | byte equality observed |
| test_serialization.test | 10 | 0.001627s | 0.001628s | 0.001585s | byte equality observed |
| test_std_unordered.test | 10 | 0.001552s | 0.001591s | 0.001576s | byte equality observed |
| test_string_generator.test | 10 | 0.001637s | 0.001603s | 0.001620s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001516s | 0.001489s | 0.001483s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001491s | 0.001501s | 0.001495s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001506s | 0.001494s | 0.001473s | byte equality observed |
| test_tagging.test | 10 | 0.001506s | 0.001473s | 0.001512s | byte equality observed |
| test_time_generator.test | 10 | 0.001506s | 0.001513s | 0.001474s | byte equality observed |
| test_time_generator_v1.test | 9 | 0.002020s | 0.002152s | 0.002195s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001811s | 0.001771s | 0.001809s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004616s | 0.004622s | 0.004749s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.002028s | 0.002128s | 0.002192s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001801s | 0.001796s | 0.001852s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004664s | 0.004604s | 0.004717s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001802s | 0.001839s | 0.001852s | byte equality observed |
| test_time_generator_v7_2.test | 9 | 0.001556s | 0.001560s | 0.001563s | byte equality observed |
| test_time_generator_v7_3.test | 7 | 0.002521s | 0.002465s | 0.002514s | byte equality observed |
| test_to_chars.test | 10 | 0.001584s | 0.001545s | 0.001555s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001490s | 0.001522s | 0.001521s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001524s | 0.001513s | 0.001491s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001520s | 0.001516s | 0.001510s | byte equality observed |
| test_to_chars_cx.test | 9 | 0.001458s | 0.001506s | 0.001480s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001563s | 0.001574s | 0.001582s | byte equality observed |
| test_uuid.test | 10 | 0.001462s | 0.001484s | 0.001472s | byte equality observed |
| test_uuid_2.test | 10 | 0.001461s | 0.001495s | 0.001460s | byte equality observed |
| test_uuid_3.test | 10 | 0.001471s | 0.001507s | 0.001488s | byte equality observed |
| test_uuid_class.test | 10 | 0.001499s | 0.001520s | 0.001520s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001468s | 0.001453s | 0.001448s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001491s | 0.001519s | 0.001483s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001493s | 0.001457s | 0.001493s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001462s | 0.001493s | 0.001483s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001522s | 0.001483s | 0.001472s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001894s | 0.001881s | 0.001934s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001627s | 0.001586s | 0.001610s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001483s | 0.001463s | 0.001473s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001481s | 0.001509s | 0.001518s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001475s | 0.001473s | 0.001488s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
