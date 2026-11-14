# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.435671 | 0.949281 | 1.457738 | 0.000770 | 0.000741 | 0.001725 |
| test_uuid.test | RUN | 0.278949 | 0.777593 | 1.016165 | 0.001912 | 0.001922 | 0.001775 |
| test_uuid_no_simd.test | RUN | 0.246581 | 0.737595 | 0.896200 | 0.001758 | 0.001592 | 0.001598 |
| test_uuid_2.test | RUN | 0.189068 | 0.560017 | 0.675545 | 0.001578 | 0.001828 | 0.001493 |
| test_uuid_3.test | RUN | 0.159940 | 0.415271 | 0.512782 | 0.001892 | 0.001906 | 0.001624 |
| test_alignment.test | RUN | 0.142313 | 0.354323 | 0.475597 | 0.001783 | 0.001750 | 0.001690 |
| test_alignment_2.test | RUN | 0.151703 | 0.343417 | 0.469404 | 0.001634 | 0.001826 | 0.001748 |
| test_attribute_packed.test | RUN | 0.143946 | 0.355278 | 0.505049 | 0.001843 | 0.001730 | 0.001519 |
| test_pragma_pack.test | RUN | 0.143361 | 0.355893 | 0.500354 | 0.001772 | 0.001769 | 0.001233 |
| test_data.test | RUN | 0.178757 | 0.651965 | 0.680762 | 0.001821 | 0.001775 | 0.001704 |
| test_comparison.test | RUN | 0.237376 | 0.734572 | 0.916366 | 0.001890 | 0.001846 | 0.001553 |
| test_comparison_no_simd.test | RUN | 0.221492 | 0.858237 | 0.840467 | 0.001887 | 0.001647 | 0.001625 |
| test_io.test | RUN | 0.320068 | 1.416359 | 1.380196 | 0.002004 | 0.001920 | 0.001842 |
| test_io_no_simd.test | RUN | 0.277664 | 1.375751 | 1.287913 | 0.001645 | 0.001945 | 0.001532 |
| test_io_2.test | RUN | 0.237745 | 1.430779 | 0.952720 | 0.001854 | 0.001716 | 0.001946 |
| test_io_2_no_simd.test | RUN | 0.213711 | 1.350033 | 0.899185 | 0.001645 | 0.001821 | 0.001759 |
| test_to_chars.test | RUN | 0.220736 | 0.902026 | 0.906048 | 0.001928 | 0.002007 | 0.001822 |
| test_to_chars_no_simd.test | RUN | 0.199501 | 0.914246 | 0.859348 | 0.001949 | 0.001506 | 0.001861 |
| test_to_chars_2.test | RUN | 0.247954 | 1.635258 | 1.062513 | 0.001655 | 0.001615 | 0.001718 |
| test_to_chars_2_no_simd.test | RUN | 0.236631 | 1.723383 | 0.970650 | 0.001638 | 0.001674 | 0.001890 |
| test_to_chars_3.test | RUN | 0.184602 | 0.576939 | 0.668053 | 0.001848 | 0.001494 | 0.001423 |
| test_from_chars.test | RUN | 0.210073 | 0.835674 | 0.746301 | 0.001538 | 0.001776 | 0.001798 |
| test_from_chars_no_simd.test | RUN | 0.175402 | 0.669594 | 0.633333 | 0.001530 | 0.001517 | 0.001500 |
| test_from_chars_2.test | RUN | 0.193917 | 0.791300 | 0.748477 | 0.001559 | 0.001762 | 0.001496 |
| test_from_chars_2_no_simd.test | RUN | 0.175966 | 0.613719 | 0.579309 | 0.001723 | 0.001664 | 0.001644 |
| test_uuid_from_string.test | RUN | 0.236375 | 0.879483 | 0.902103 | 0.001536 | 0.001828 | 0.001748 |
| test_uuid_from_string_2.test | RUN | 0.205623 | 0.815299 | 0.782603 | 0.002074 | 0.001966 | 0.001808 |
| test_uuid_from_string_3.test | RUN | 0.208524 | 0.799329 | 0.766580 | 0.001641 | 0.002034 | 0.001645 |
| test_uuid_clock.test | RUN | 0.129469 | 0.352930 | 0.480091 | 0.001428 | 0.001891 | 0.001640 |
| test_nil_generator.test | RUN | 0.151218 | 0.396696 | 0.548481 | 0.001788 | 0.001679 | 0.001807 |
| test_string_generator.test | RUN | 0.192867 | 0.643708 | 0.757674 | 0.001926 | 0.002054 | 0.001897 |
| test_string_generator_2.test | RUN | 0.245413 | 0.914925 | 0.823139 | 0.001711 | 0.001930 | 0.001743 |
| test_random_generator.test | RUN | 0.325240 | 1.734806 | 1.263854 | 0.002558 | 0.002640 | 0.002729 |
| test_random_generator_2.test | RUN | 0.237110 | 0.694169 | 0.840942 | 0.001353 | 0.001827 | 0.001575 |
| test_name_generator.test | RUN | 0.213290 | 2.280094 | 0.912350 | 0.001859 | 0.001719 | 0.001683 |
| test_namespaces.test | RUN | 0.172057 | 0.499481 | 0.634283 | 0.001546 | 0.001834 | 0.001521 |
| test_name_generator_md5.test | RUN | 0.217287 | 1.057015 | 0.837220 | 0.001566 | 0.001922 | 0.001713 |
| test_name_generator_sha1.test | RUN | 0.201883 | 3.293042 | 0.877527 | 0.001638 | 0.001974 | 0.001730 |
| test_time_generator.test | RUN | 0.224667 | 0.672871 | 0.860084 | 0.001566 | 0.002020 | 0.001723 |
| test_time_generator_v1.test | RUN | 0.254842 | 0.753997 | 0.915101 | 0.002022 | 0.002389 | 0.002392 |
| test_time_generator_v1_2.test | RUN | 0.254226 | 0.709364 | 0.919122 | 0.002117 | 0.002235 | 0.002088 |
| test_time_generator_v1_3.test | RUN | 0.269530 | 0.731113 | 1.009904 | 0.004259 | 0.005258 | 0.004054 |
| test_time_generator_v6.test | RUN | 0.255187 | 0.750146 | 0.922451 | 0.002212 | 0.002460 | 0.002170 |
| test_time_generator_v6_2.test | RUN | 0.259170 | 0.706996 | 0.925696 | 0.001832 | 0.002144 | 0.002276 |
| test_time_generator_v6_3.test | RUN | 0.286095 | 0.746707 | 1.019014 | 0.004815 | 0.005262 | 0.005246 |
| test_time_generator_v7.test | RUN | 0.241359 | 0.740686 | 0.945821 | 0.002084 | 0.002212 | 0.002238 |
| test_time_generator_v7_2.test | RUN | 0.236250 | 0.641911 | 0.845379 | 0.001701 | 0.002070 | 0.001526 |
| test_time_generator_v7_3.test | RUN | 0.224555 | 0.821666 | 0.881001 | 0.002042 | 0.002692 | 0.002351 |
| test_serialization.test | RUN | 0.408869 | 1.259091 | 1.440912 | 0.002060 | 0.001788 | 0.002036 |
| test_tagging.test | RUN | 0.235182 | 0.803426 | 0.881982 | 0.001737 | 0.001960 | 0.001678 |
| test_uuid_class.test | RUN | 0.248468 | 0.711893 | 0.882206 | 0.001665 | 0.001584 | 0.001432 |
| test_uuid_in_map.test | RUN | 0.275800 | 0.821550 | 1.002819 | 0.001640 | 0.001983 | 0.001829 |
| test_hash.test | RUN | 0.283575 | 0.737292 | 0.918302 | 0.001870 | 0.001794 | 0.001866 |
| test_hash_value.test | RUN | 0.200915 | 0.499606 | 0.684535 | 0.004874 | 0.004985 | 0.004588 |
| test_std_unordered.test | RUN | 0.261889 | 0.822247 | 0.921991 | 0.001898 | 0.002020 | 0.002002 |
| test_boost_unordered.test | RUN | 0.361979 | 1.035996 | 1.215636 | 0.001777 | 0.001965 | 0.001762 |
| test_detail_md5.test | RUN | 0.165172 | 0.521734 | 0.649971 | 0.001808 | 0.001828 | 0.001894 |
| test_detail_sha1.test | RUN | 0.158727 | 0.660776 | 0.629112 | 0.009684 | 0.009120 | 0.008803 |
| test_detail_endian.test | RUN | 0.123334 | 0.387311 | 0.411863 | 0.001659 | 0.001473 | 0.001647 |
| test_detail_chacha20.test | RUN | 0.140828 | 0.467533 | 0.441376 | 0.001586 | 0.001700 | 0.001627 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.129284 | 0.263979 | 0.363010 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.124769 | 0.271136 | 0.387601 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.208004 | 0.534820 | 0.663710 | 0.001649 | 0.001770 | 0.001749 |
| test_bench_random.test | RUN | 0.242505 | 0.695710 | 0.877035 | 0.005825 | 0.005796 | 0.005691 |
| test_entropy_error.test | RUN | 0.117053 | 0.304674 | 0.406968 | 0.001668 | 0.001474 | 0.001519 |
| test_detail_random_provider.test | RUN | 0.230034 | 0.531988 | 0.785540 | 0.001578 | 0.001850 | 0.001568 |
| test_constants.test | RUN | 0.181350 | 0.488797 | 0.649720 | 0.001787 | 0.001984 | 0.001622 |
| test_uuid_cx.test | COMPILE | 0.106886 | 0.231281 | 0.334637 | — | — | — |
| test_uuid_cx2.test | RUN | 0.185797 | 0.565848 | 0.681443 | 0.001661 | 0.001593 | 0.001819 |
| test_uuid_cx3.test | RUN | 0.159420 | 0.433100 | 0.618467 | 0.001890 | 0.001522 | 0.001166 |
| test_uuid_cx3_no_simd.test | RUN | 0.144199 | 0.406271 | 0.549448 | 0.001659 | 0.001593 | 0.001574 |
| test_hash_value_cx.test | RUN | 0.153069 | 0.402446 | 0.516295 | 0.001448 | 0.001731 | 0.001632 |
| test_string_generator_cx.test | RUN | 0.182682 | 0.485333 | 0.599261 | 0.001588 | 0.001938 | 0.001744 |
| test_string_generator_cx2.test | RUN | 0.217361 | 0.607357 | 0.708482 | 0.001627 | 0.001692 | 0.001510 |
| test_constants_cx.test | RUN | 0.149293 | 0.347572 | 0.531179 | 0.001646 | 0.001518 | 0.001532 |
| test_from_chars_cx.test | RUN | 0.187700 | 0.660545 | 0.644683 | 0.001260 | 0.001757 | 0.001439 |
| test_from_chars_cx2.test | RUN | 0.198704 | 0.791621 | 0.712533 | 0.001781 | 0.001400 | 0.001787 |
| test_to_chars_cx.test | RUN | 0.199720 | 0.727903 | 0.738593 | 0.001792 | 0.001796 | 0.001303 |
| test_uuid_from_string_cx.test | RUN | 0.208791 | 0.730285 | 0.737769 | 0.001439 | 0.001341 | 0.001223 |
| quick.test | RUN | 0.230212 | 0.605638 | 0.767544 | 0.001366 | 0.001299 | 0.001201 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.984× | 0.970×, 0.998× | 1.006× |
| clang | 0.997× | 1.013×, 0.981× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001196s | 0.001179s | 0.001158s | byte equality observed |
| test_alignment.test | 10 | 0.001179s | 0.001184s | 0.001160s | byte equality observed |
| test_alignment_2.test | 10 | 0.001180s | 0.001168s | 0.001187s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001172s | 0.001155s | 0.001147s | byte equality observed |
| test_bench_random.test | 4 | 0.005225s | 0.005223s | 0.005184s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001246s | 0.001241s | 0.001211s | byte equality observed |
| test_comparison.test | 10 | 0.001208s | 0.001168s | 0.001184s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001213s | 0.001179s | 0.001213s | byte equality observed |
| test_constants.test | 10 | 0.001179s | 0.001171s | 0.001197s | byte equality observed |
| test_constants_cx.test | 10 | 0.001149s | 0.001143s | 0.001149s | byte equality observed |
| test_data.test | 10 | 0.001170s | 0.001160s | 0.001177s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001177s | 0.001167s | 0.001188s | byte equality observed |
| test_detail_endian.test | 10 | 0.001171s | 0.001151s | 0.001170s | byte equality observed |
| test_detail_md5.test | 10 | 0.001183s | 0.001197s | 0.001171s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001190s | 0.001175s | 0.001179s | byte equality observed |
| test_detail_sha1.test | 3 | 0.008266s | 0.008319s | 0.007467s | byte equality observed |
| test_entropy_error.test | 10 | 0.001153s | 0.001163s | 0.001150s | byte equality observed |
| test_from_chars.test | 10 | 0.001142s | 0.001156s | 0.001149s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001152s | 0.001144s | 0.001171s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001192s | 0.001170s | 0.001176s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001172s | 0.001210s | 0.001167s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001175s | 0.001179s | 0.001160s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001173s | 0.001185s | 0.001172s | byte equality observed |
| test_hash.test | 10 | 0.001195s | 0.001167s | 0.001171s | byte equality observed |
| test_hash_value.test | 6 | 0.004187s | 0.004117s | 0.004133s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001168s | 0.001157s | 0.001131s | byte equality observed |
| test_include1.test | 10 | 0.000515s | 0.000509s | 0.001147s | byte equality observed |
| test_io.test | 10 | 0.001239s | 0.001151s | 0.001227s | byte equality observed |
| test_io_2.test | 10 | 0.001312s | 0.001330s | 0.001321s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001297s | 0.001307s | 0.001328s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001254s | 0.001272s | 0.001250s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001180s | 0.001149s | 0.001176s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001205s | 0.001200s | 0.001186s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001197s | 0.001157s | 0.001193s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001217s | 0.001206s | 0.001201s | byte equality observed |
| test_namespaces.test | 10 | 0.001160s | 0.001166s | 0.001171s | byte equality observed |
| test_nil_generator.test | 10 | 0.001159s | 0.001135s | 0.001167s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001181s | 0.001183s | 0.001144s | byte equality observed |
| test_random_generator.test | 9 | 0.002029s | 0.002019s | 0.002012s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001199s | 0.001187s | 0.001150s | byte equality observed |
| test_serialization.test | 10 | 0.001311s | 0.001308s | 0.001263s | byte equality observed |
| test_std_unordered.test | 10 | 0.001254s | 0.001227s | 0.001237s | byte equality observed |
| test_string_generator.test | 10 | 0.001286s | 0.001257s | 0.001279s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001191s | 0.001190s | 0.001196s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001178s | 0.001192s | 0.001148s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001170s | 0.001177s | 0.001180s | byte equality observed |
| test_tagging.test | 10 | 0.001177s | 0.001161s | 0.001169s | byte equality observed |
| test_time_generator.test | 10 | 0.001181s | 0.001207s | 0.001168s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001600s | 0.001675s | 0.001703s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001445s | 0.001472s | 0.001422s | byte equality observed |
| test_time_generator_v1_3.test | 6 | 0.003752s | 0.003609s | 0.003698s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001609s | 0.001732s | 0.001743s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001459s | 0.001476s | 0.001497s | byte equality observed |
| test_time_generator_v6_3.test | 6 | 0.003778s | 0.003621s | 0.003792s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001451s | 0.001474s | 0.001466s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001263s | 0.001238s | 0.001256s | byte equality observed |
| test_time_generator_v7_3.test | 10 | 0.001855s | 0.001856s | 0.001858s | byte equality observed |
| test_to_chars.test | 10 | 0.001232s | 0.001250s | 0.001248s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001204s | 0.001229s | 0.001177s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001210s | 0.001196s | 0.001190s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001189s | 0.001191s | 0.001176s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001207s | 0.001191s | 0.001152s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001253s | 0.001251s | 0.001247s | byte equality observed |
| test_uuid.test | 10 | 0.001170s | 0.001189s | 0.001148s | byte equality observed |
| test_uuid_2.test | 10 | 0.001190s | 0.001172s | 0.001145s | byte equality observed |
| test_uuid_3.test | 10 | 0.001170s | 0.001127s | 0.001180s | byte equality observed |
| test_uuid_class.test | 10 | 0.001193s | 0.001175s | 0.001192s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001156s | 0.001145s | 0.001168s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001195s | 0.001186s | 0.001169s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001162s | 0.001155s | 0.001141s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001176s | 0.001167s | 0.001165s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001182s | 0.001184s | 0.001170s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001463s | 0.001468s | 0.001479s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001267s | 0.001241s | 0.001283s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001178s | 0.001155s | 0.001189s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001198s | 0.001157s | 0.001154s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001188s | 0.001166s | 0.001167s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
