# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.467395 | 1.100048 | 1.474399 | 0.000724 | 0.000617 | 0.001620 |
| test_uuid.test | RUN | 0.291446 | 0.918267 | 1.070432 | 0.001642 | 0.001622 | 0.001566 |
| test_uuid_no_simd.test | RUN | 0.296918 | 0.886917 | 0.942322 | 0.001642 | 0.001432 | 0.001288 |
| test_uuid_2.test | RUN | 0.206907 | 0.662968 | 0.711120 | 0.001621 | 0.001927 | 0.001532 |
| test_uuid_3.test | RUN | 0.174065 | 0.462515 | 0.565405 | 0.001645 | 0.001634 | 0.001418 |
| test_alignment.test | RUN | 0.164428 | 0.415651 | 0.482852 | 0.001561 | 0.001502 | 0.001606 |
| test_alignment_2.test | RUN | 0.158495 | 0.399770 | 0.492401 | 0.001466 | 0.001432 | 0.001520 |
| test_attribute_packed.test | RUN | 0.162128 | 0.414291 | 0.509147 | 0.001733 | 0.001711 | 0.001356 |
| test_pragma_pack.test | RUN | 0.156277 | 0.410084 | 0.509180 | 0.001653 | 0.001698 | 0.001539 |
| test_data.test | RUN | 0.193722 | 0.754802 | 0.718688 | 0.001579 | 0.001609 | 0.001570 |
| test_comparison.test | RUN | 0.267527 | 0.883360 | 0.982582 | 0.001673 | 0.001836 | 0.001536 |
| test_comparison_no_simd.test | RUN | 0.267511 | 1.008761 | 0.911498 | 0.001629 | 0.001580 | 0.001536 |
| test_io.test | RUN | 0.365310 | 1.701317 | 1.537580 | 0.001704 | 0.001703 | 0.001698 |
| test_io_no_simd.test | RUN | 0.348270 | 1.669031 | 1.433364 | 0.001756 | 0.001631 | 0.001653 |
| test_io_2.test | RUN | 0.283539 | 1.756044 | 1.050468 | 0.001704 | 0.001820 | 0.001461 |
| test_io_2_no_simd.test | RUN | 0.254591 | 1.652151 | 0.962294 | 0.001842 | 0.002106 | 0.001738 |
| test_to_chars.test | RUN | 0.257826 | 1.109827 | 0.975793 | 0.001710 | 0.001732 | 0.001791 |
| test_to_chars_no_simd.test | RUN | 0.250356 | 1.119048 | 0.964313 | 0.001739 | 0.001718 | 0.001631 |
| test_to_chars_2.test | RUN | 0.312458 | 2.017613 | 1.180001 | 0.001590 | 0.001582 | 0.001610 |
| test_to_chars_2_no_simd.test | RUN | 0.324162 | 2.150203 | 1.076037 | 0.001598 | 0.001757 | 0.001520 |
| test_to_chars_3.test | RUN | 0.212896 | 0.699958 | 0.714002 | 0.001712 | 0.001630 | 0.001694 |
| test_from_chars.test | RUN | 0.249118 | 1.031246 | 0.807316 | 0.001914 | 0.001580 | 0.001662 |
| test_from_chars_no_simd.test | RUN | 0.212992 | 0.821736 | 0.668961 | 0.001532 | 0.001632 | 0.001510 |
| test_from_chars_2.test | RUN | 0.230868 | 0.956865 | 0.794918 | 0.001577 | 0.001584 | 0.001509 |
| test_from_chars_2_no_simd.test | RUN | 0.205569 | 0.727517 | 0.651830 | 0.001940 | 0.001609 | 0.001702 |
| test_uuid_from_string.test | RUN | 0.272463 | 1.066762 | 0.969320 | 0.001710 | 0.001598 | 0.001505 |
| test_uuid_from_string_2.test | RUN | 0.239307 | 0.967617 | 0.823321 | 0.001828 | 0.001960 | 0.002062 |
| test_uuid_from_string_3.test | RUN | 0.248234 | 0.968101 | 0.836986 | 0.001842 | 0.001715 | 0.001768 |
| test_uuid_clock.test | RUN | 0.145663 | 0.386760 | 0.495113 | 0.001658 | 0.001676 | 0.001495 |
| test_nil_generator.test | RUN | 0.172238 | 0.453137 | 0.570905 | 0.001784 | 0.001626 | 0.001570 |
| test_string_generator.test | RUN | 0.228273 | 0.779177 | 0.787677 | 0.001688 | 0.001670 | 0.001611 |
| test_string_generator_2.test | RUN | 0.280834 | 1.071096 | 0.893289 | 0.001588 | 0.001540 | 0.001718 |
| test_random_generator.test | RUN | 0.381858 | 2.108583 | 1.366324 | 0.003701 | 0.003989 | 0.003860 |
| test_random_generator_2.test | RUN | 0.276251 | 0.789293 | 0.922753 | 0.001721 | 0.001648 | 0.001677 |
| test_name_generator.test | RUN | 0.244545 | 2.726580 | 1.001260 | 0.001430 | 0.001512 | 0.001640 |
| test_namespaces.test | RUN | 0.202553 | 0.575366 | 0.643473 | 0.001598 | 0.001654 | 0.001664 |
| test_name_generator_md5.test | RUN | 0.250993 | 1.300162 | 0.958392 | 0.001674 | 0.001690 | 0.001714 |
| test_name_generator_sha1.test | RUN | 0.243597 | 4.059353 | 0.945500 | 0.001873 | 0.001700 | 0.001841 |
| test_time_generator.test | RUN | 0.259673 | 0.795462 | 0.885615 | 0.001573 | 0.001715 | 0.001720 |
| test_time_generator_v1.test | RUN | 0.284450 | 0.873137 | 0.991813 | 0.002191 | 0.002161 | 0.002174 |
| test_time_generator_v1_2.test | RUN | 0.284714 | 0.829446 | 0.945785 | 0.002036 | 0.002036 | 0.002035 |
| test_time_generator_v1_3.test | RUN | 0.305742 | 0.866100 | 1.035199 | 0.005760 | 0.005239 | 0.004610 |
| test_time_generator_v6.test | RUN | 0.285638 | 0.881215 | 0.993731 | 0.002040 | 0.002163 | 0.002216 |
| test_time_generator_v6_2.test | RUN | 0.288955 | 0.829854 | 0.942360 | 0.001774 | 0.002036 | 0.001796 |
| test_time_generator_v6_3.test | RUN | 0.316277 | 0.867641 | 1.050752 | 0.003990 | 0.005670 | 0.004257 |
| test_time_generator_v7.test | RUN | 0.283901 | 0.884678 | 0.961627 | 0.001758 | 0.001935 | 0.002007 |
| test_time_generator_v7_2.test | RUN | 0.254624 | 0.766042 | 0.877122 | 0.001523 | 0.001724 | 0.001577 |
| test_time_generator_v7_3.test | RUN | 0.251873 | 0.996525 | 0.905876 | 0.002777 | 0.002787 | 0.002643 |
| test_serialization.test | RUN | 0.461007 | 1.490240 | 1.652314 | 0.001830 | 0.001715 | 0.001753 |
| test_tagging.test | RUN | 0.265601 | 0.944951 | 0.920301 | 0.001620 | 0.001660 | 0.001465 |
| test_uuid_class.test | RUN | 0.273186 | 0.835826 | 0.948662 | 0.001641 | 0.001572 | 0.001556 |
| test_uuid_in_map.test | RUN | 0.296811 | 0.965897 | 1.050589 | 0.001463 | 0.001679 | 0.001699 |
| test_hash.test | RUN | 0.289662 | 0.862646 | 0.959842 | 0.001708 | 0.001615 | 0.001514 |
| test_hash_value.test | RUN | 0.215931 | 0.592674 | 0.714672 | 0.005569 | 0.005562 | 0.006009 |
| test_std_unordered.test | RUN | 0.279553 | 0.979843 | 0.972921 | 0.001696 | 0.001755 | 0.001732 |
| test_boost_unordered.test | RUN | 0.401754 | 1.255200 | 1.284824 | 0.001680 | 0.001592 | 0.001645 |
| test_detail_md5.test | RUN | 0.185972 | 0.615799 | 0.699286 | 0.001737 | 0.001706 | 0.001606 |
| test_detail_sha1.test | RUN | 0.172269 | 0.779849 | 0.654380 | 0.010766 | 0.010431 | 0.008973 |
| test_detail_endian.test | RUN | 0.132088 | 0.448518 | 0.471995 | 0.001547 | 0.001755 | 0.001462 |
| test_detail_chacha20.test | RUN | 0.148269 | 0.553753 | 0.474113 | 0.001646 | 0.001504 | 0.001652 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.132613 | 0.307049 | 0.371928 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.132033 | 0.305258 | 0.368751 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.225303 | 0.607658 | 0.688344 | 0.001610 | 0.001626 | 0.001607 |
| test_bench_random.test | RUN | 0.253053 | 0.799000 | 0.931843 | 0.012818 | 0.012729 | 0.012677 |
| test_entropy_error.test | RUN | 0.126538 | 0.352225 | 0.425008 | 0.001643 | 0.001740 | 0.001714 |
| test_detail_random_provider.test | RUN | 0.252603 | 0.623126 | 0.807421 | 0.001564 | 0.001562 | 0.001386 |
| test_constants.test | RUN | 0.197881 | 0.576031 | 0.651408 | 0.001164 | 0.001714 | 0.001491 |
| test_uuid_cx.test | COMPILE | 0.111331 | 0.265408 | 0.318430 | — | — | — |
| test_uuid_cx2.test | RUN | 0.207887 | 0.663088 | 0.693552 | 0.001923 | 0.001384 | 0.001608 |
| test_uuid_cx3.test | RUN | 0.178906 | 0.510263 | 0.640231 | 0.001147 | 0.001507 | 0.001398 |
| test_uuid_cx3_no_simd.test | RUN | 0.166640 | 0.486658 | 0.547260 | 0.001635 | 0.001509 | 0.001552 |
| test_hash_value_cx.test | RUN | 0.167017 | 0.453617 | 0.569644 | 0.001449 | 0.001625 | 0.001386 |
| test_string_generator_cx.test | RUN | 0.197402 | 0.570181 | 0.642896 | 0.001616 | 0.001489 | 0.001649 |
| test_string_generator_cx2.test | RUN | 0.253142 | 0.700462 | 0.770645 | 0.001444 | 0.001678 | 0.001480 |
| test_constants_cx.test | RUN | 0.159738 | 0.398609 | 0.514524 | 0.001662 | 0.001650 | 0.001580 |
| test_from_chars_cx.test | RUN | 0.218134 | 0.775444 | 0.727097 | 0.001636 | 0.001637 | 0.001439 |
| test_from_chars_cx2.test | RUN | 0.223875 | 0.958848 | 0.789163 | 0.001601 | 0.001551 | 0.001593 |
| test_to_chars_cx.test | RUN | 0.221246 | 0.883016 | 0.818094 | 0.001298 | 0.001415 | 0.001290 |
| test_uuid_from_string_cx.test | RUN | 0.232358 | 0.902463 | 0.808077 | 0.001416 | 0.001196 | 0.001186 |
| quick.test | RUN | 0.248016 | 0.667896 | 0.791415 | 0.001216 | 0.001113 | 0.001089 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.989×, 1.003× | 1.004× |
| clang | 0.995× | 0.996×, 0.994× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001190s | 0.001193s | 0.001177s | byte equality observed |
| test_alignment.test | 10 | 0.001188s | 0.001168s | 0.001181s | byte equality observed |
| test_alignment_2.test | 10 | 0.001198s | 0.001164s | 0.001153s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001155s | 0.001158s | 0.001159s | byte equality observed |
| test_bench_random.test | 2 | 0.012429s | 0.012394s | 0.012410s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001219s | 0.001219s | 0.001224s | byte equality observed |
| test_comparison.test | 10 | 0.001211s | 0.001208s | 0.001206s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001216s | 0.001214s | 0.001254s | byte equality observed |
| test_constants.test | 10 | 0.001218s | 0.001202s | 0.001210s | byte equality observed |
| test_constants_cx.test | 10 | 0.001183s | 0.001145s | 0.001166s | byte equality observed |
| test_data.test | 10 | 0.001206s | 0.001204s | 0.001182s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001218s | 0.001177s | 0.001192s | byte equality observed |
| test_detail_endian.test | 10 | 0.001229s | 0.001198s | 0.001188s | byte equality observed |
| test_detail_md5.test | 10 | 0.001234s | 0.001218s | 0.001227s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001261s | 0.001220s | 0.001247s | byte equality observed |
| test_detail_sha1.test | 3 | 0.009457s | 0.009625s | 0.008802s | byte equality observed |
| test_entropy_error.test | 10 | 0.001218s | 0.001175s | 0.001208s | byte equality observed |
| test_from_chars.test | 10 | 0.001193s | 0.001171s | 0.001212s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001213s | 0.001200s | 0.001229s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001210s | 0.001182s | 0.001221s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001200s | 0.001204s | 0.001195s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001197s | 0.001194s | 0.001205s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001202s | 0.001216s | 0.001201s | byte equality observed |
| test_hash.test | 10 | 0.001218s | 0.001240s | 0.001205s | byte equality observed |
| test_hash_value.test | 5 | 0.004997s | 0.004924s | 0.004809s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001184s | 0.001217s | 0.001204s | byte equality observed |
| test_include1.test | 10 | 0.000524s | 0.000535s | 0.001175s | byte equality observed |
| test_io.test | 10 | 0.001304s | 0.001283s | 0.001298s | byte equality observed |
| test_io_2.test | 10 | 0.001362s | 0.001390s | 0.001378s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001365s | 0.001378s | 0.001380s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001279s | 0.001284s | 0.001287s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001196s | 0.001201s | 0.001190s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001248s | 0.001229s | 0.001239s | byte equality observed |
| test_name_generator_md5.test | 9 | 0.001232s | 0.001222s | 0.001230s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001238s | 0.001258s | 0.001240s | byte equality observed |
| test_namespaces.test | 10 | 0.001196s | 0.001178s | 0.001143s | byte equality observed |
| test_nil_generator.test | 10 | 0.001175s | 0.001217s | 0.001174s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001173s | 0.001167s | 0.001184s | byte equality observed |
| test_random_generator.test | 6 | 0.003434s | 0.003478s | 0.003436s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001219s | 0.001200s | 0.001169s | byte equality observed |
| test_serialization.test | 10 | 0.001308s | 0.001327s | 0.001330s | byte equality observed |
| test_std_unordered.test | 10 | 0.001272s | 0.001298s | 0.001306s | byte equality observed |
| test_string_generator.test | 10 | 0.001324s | 0.001322s | 0.001320s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001243s | 0.001217s | 0.001210s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001230s | 0.001210s | 0.001181s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001230s | 0.001218s | 0.001206s | byte equality observed |
| test_tagging.test | 10 | 0.001229s | 0.001226s | 0.001236s | byte equality observed |
| test_time_generator.test | 10 | 0.001263s | 0.001216s | 0.001237s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001713s | 0.001801s | 0.001816s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001520s | 0.001539s | 0.001569s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004786s | 0.004685s | 0.004266s | byte equality observed |
| test_time_generator_v6.test | 9 | 0.001743s | 0.001815s | 0.001852s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001533s | 0.001513s | 0.001550s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004749s | 0.004360s | 0.004775s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001494s | 0.001526s | 0.001567s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001256s | 0.001275s | 0.001296s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002332s | 0.002353s | 0.002367s | byte equality observed |
| test_to_chars.test | 10 | 0.001265s | 0.001246s | 0.001251s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001212s | 0.001214s | 0.001238s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001227s | 0.001228s | 0.001207s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001233s | 0.001236s | 0.001204s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001222s | 0.001218s | 0.001192s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001280s | 0.001290s | 0.001312s | byte equality observed |
| test_uuid.test | 10 | 0.001205s | 0.001197s | 0.001221s | byte equality observed |
| test_uuid_2.test | 10 | 0.001214s | 0.001197s | 0.001219s | byte equality observed |
| test_uuid_3.test | 10 | 0.001201s | 0.001207s | 0.001214s | byte equality observed |
| test_uuid_class.test | 10 | 0.001234s | 0.001226s | 0.001218s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001209s | 0.001173s | 0.001195s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001209s | 0.001240s | 0.001193s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001197s | 0.001209s | 0.001204s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001194s | 0.001216s | 0.001203s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001220s | 0.001228s | 0.001212s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001527s | 0.001538s | 0.001569s | byte equality observed |
| test_uuid_from_string_3.test | 9 | 0.001321s | 0.001289s | 0.001332s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001207s | 0.001239s | 0.001225s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001218s | 0.001238s | 0.001207s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001197s | 0.001197s | 0.001189s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
