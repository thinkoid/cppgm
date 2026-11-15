# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.590921 | 1.309551 | 2.319500 | 0.000711 | 0.000864 | 0.001956 |
| test_uuid.test | RUN | 0.351565 | 1.075271 | 1.624257 | 0.002000 | 0.002076 | 0.002046 |
| test_uuid_no_simd.test | RUN | 0.347231 | 1.013808 | 1.397812 | 0.002025 | 0.001918 | 0.002324 |
| test_uuid_2.test | RUN | 0.244304 | 0.762450 | 1.032228 | 0.001908 | 0.001998 | 0.001733 |
| test_uuid_3.test | RUN | 0.202572 | 0.565976 | 0.868585 | 0.001937 | 0.001967 | 0.001697 |
| test_alignment.test | RUN | 0.188387 | 0.488584 | 0.758221 | 0.002070 | 0.001936 | 0.002022 |
| test_alignment_2.test | RUN | 0.204063 | 0.483152 | 0.769575 | 0.001984 | 0.001764 | 0.001960 |
| test_attribute_packed.test | RUN | 0.189723 | 0.491323 | 0.792720 | 0.001742 | 0.002170 | 0.001746 |
| test_pragma_pack.test | RUN | 0.189581 | 0.494380 | 0.739501 | 0.001838 | 0.001953 | 0.002057 |
| test_data.test | RUN | 0.239920 | 0.883226 | 1.098956 | 0.001691 | 0.001728 | 0.002011 |
| test_comparison.test | RUN | 0.311863 | 1.014889 | 1.423408 | 0.002062 | 0.002213 | 0.001745 |
| test_comparison_no_simd.test | RUN | 0.313992 | 1.165931 | 1.331636 | 0.001938 | 0.001678 | 0.002117 |
| test_io.test | RUN | 0.409234 | 1.916932 | 2.094093 | 0.002166 | 0.002106 | 0.002102 |
| test_io_no_simd.test | RUN | 0.372823 | 1.838069 | 1.829166 | 0.002006 | 0.002066 | 0.002134 |
| test_io_2.test | RUN | 0.314572 | 1.923631 | 1.451455 | 0.001960 | 0.002254 | 0.002199 |
| test_io_2_no_simd.test | RUN | 0.280997 | 1.849942 | 1.365960 | 0.002276 | 0.002242 | 0.002253 |
| test_to_chars.test | RUN | 0.290575 | 1.235608 | 1.379014 | 0.002152 | 0.002316 | 0.002178 |
| test_to_chars_no_simd.test | RUN | 0.265624 | 1.266448 | 1.344539 | 0.002005 | 0.002230 | 0.002170 |
| test_to_chars_2.test | RUN | 0.334180 | 2.263931 | 1.548101 | 0.002029 | 0.002004 | 0.001966 |
| test_to_chars_2_no_simd.test | RUN | 0.314168 | 2.420392 | 1.429355 | 0.001958 | 0.002272 | 0.001844 |
| test_to_chars_3.test | RUN | 0.239724 | 0.827370 | 1.033813 | 0.002070 | 0.002156 | 0.001857 |
| test_from_chars.test | RUN | 0.274918 | 1.174154 | 1.177930 | 0.001822 | 0.001940 | 0.001892 |
| test_from_chars_no_simd.test | RUN | 0.242933 | 0.945342 | 0.951371 | 0.001798 | 0.002352 | 0.001880 |
| test_from_chars_2.test | RUN | 0.268542 | 1.118543 | 1.144596 | 0.002028 | 0.001949 | 0.002078 |
| test_from_chars_2_no_simd.test | RUN | 0.237921 | 0.835989 | 0.946518 | 0.001771 | 0.002198 | 0.002002 |
| test_uuid_from_string.test | RUN | 0.305290 | 1.185998 | 1.350520 | 0.001931 | 0.001930 | 0.001704 |
| test_uuid_from_string_2.test | RUN | 0.270722 | 1.103528 | 1.134354 | 0.002275 | 0.002290 | 0.002481 |
| test_uuid_from_string_3.test | RUN | 0.279340 | 1.076949 | 1.192000 | 0.002018 | 0.002290 | 0.001882 |
| test_uuid_clock.test | RUN | 0.175601 | 0.466571 | 0.735031 | 0.001759 | 0.002040 | 0.001860 |
| test_nil_generator.test | RUN | 0.206132 | 0.536698 | 0.869932 | 0.001986 | 0.002156 | 0.002012 |
| test_string_generator.test | RUN | 0.267294 | 0.890832 | 1.141636 | 0.002170 | 0.002129 | 0.002258 |
| test_string_generator_2.test | RUN | 0.323575 | 1.230641 | 1.296003 | 0.001823 | 0.001916 | 0.002076 |
| test_random_generator.test | RUN | 0.433550 | 2.385953 | 1.927462 | 0.003417 | 0.003460 | 0.003462 |
| test_random_generator_2.test | RUN | 0.325178 | 0.919368 | 1.370199 | 0.001769 | 0.002098 | 0.001932 |
| test_name_generator.test | RUN | 0.282376 | 3.041576 | 1.355054 | 0.001946 | 0.002115 | 0.001971 |
| test_namespaces.test | RUN | 0.224931 | 0.658117 | 0.941589 | 0.001960 | 0.002094 | 0.001510 |
| test_name_generator_md5.test | RUN | 0.290757 | 1.436899 | 1.305807 | 0.002132 | 0.002236 | 0.002098 |
| test_name_generator_sha1.test | RUN | 0.280924 | 4.517601 | 1.309982 | 0.002071 | 0.002180 | 0.002098 |
| test_time_generator.test | RUN | 0.307386 | 0.927767 | 1.291685 | 0.001803 | 0.002112 | 0.002042 |
| test_time_generator_v1.test | RUN | 0.347083 | 0.985469 | 1.478312 | 0.002738 | 0.002964 | 0.002859 |
| test_time_generator_v1_2.test | RUN | 0.344045 | 0.967695 | 1.350448 | 0.002454 | 0.002566 | 0.002484 |
| test_time_generator_v1_3.test | RUN | 0.371256 | 1.003123 | 1.586665 | 0.005660 | 0.005561 | 0.005875 |
| test_time_generator_v6.test | RUN | 0.345304 | 1.034637 | 1.508728 | 0.002361 | 0.002655 | 0.002827 |
| test_time_generator_v6_2.test | RUN | 0.335566 | 0.964871 | 1.379812 | 0.002241 | 0.002418 | 0.002497 |
| test_time_generator_v6_3.test | RUN | 0.378668 | 1.010253 | 1.538452 | 0.006003 | 0.005354 | 0.006135 |
| test_time_generator_v7.test | RUN | 0.338315 | 1.005541 | 1.429096 | 0.002071 | 0.002344 | 0.002204 |
| test_time_generator_v7_2.test | RUN | 0.318810 | 0.890502 | 1.334271 | 0.002070 | 0.002315 | 0.001818 |
| test_time_generator_v7_3.test | RUN | 0.299585 | 1.136174 | 1.297264 | 0.002971 | 0.003279 | 0.003169 |
| test_serialization.test | RUN | 0.562212 | 1.723585 | 2.229866 | 0.002283 | 0.001958 | 0.002180 |
| test_tagging.test | RUN | 0.312687 | 1.088940 | 1.342168 | 0.001877 | 0.001880 | 0.001973 |
| test_uuid_class.test | RUN | 0.321518 | 0.973638 | 1.413032 | 0.001871 | 0.001665 | 0.001854 |
| test_uuid_in_map.test | RUN | 0.359767 | 1.099058 | 1.564666 | 0.001999 | 0.002245 | 0.002146 |
| test_hash.test | RUN | 0.357445 | 1.015701 | 1.462953 | 0.002030 | 0.001968 | 0.002174 |
| test_hash_value.test | RUN | 0.256274 | 0.676436 | 1.035899 | 0.005901 | 0.006165 | 0.006027 |
| test_std_unordered.test | RUN | 0.341952 | 1.105290 | 1.419328 | 0.002104 | 0.002240 | 0.002288 |
| test_boost_unordered.test | RUN | 0.474233 | 1.454070 | 1.801692 | 0.001943 | 0.001860 | 0.002040 |
| test_detail_md5.test | RUN | 0.227441 | 0.730629 | 1.017686 | 0.001882 | 0.002000 | 0.002623 |
| test_detail_sha1.test | RUN | 0.217403 | 0.886994 | 0.958161 | 0.012375 | 0.011302 | 0.011504 |
| test_detail_endian.test | RUN | 0.167277 | 0.530928 | 0.673148 | 0.001937 | 0.001986 | 0.001785 |
| test_detail_chacha20.test | RUN | 0.179402 | 0.639137 | 0.660382 | 0.001932 | 0.002295 | 0.002118 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.158848 | 0.379392 | 0.628384 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.163163 | 0.360630 | 0.635622 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.272080 | 0.719193 | 1.053235 | 0.001998 | 0.002144 | 0.002070 |
| test_bench_random.test | RUN | 0.307942 | 0.933259 | 1.389874 | 0.008620 | 0.008641 | 0.008953 |
| test_entropy_error.test | RUN | 0.148774 | 0.412469 | 0.615351 | 0.001861 | 0.002018 | 0.002124 |
| test_detail_random_provider.test | RUN | 0.298270 | 0.733106 | 1.214258 | 0.002098 | 0.002120 | 0.002039 |
| test_constants.test | RUN | 0.238022 | 0.662679 | 0.939088 | 0.002258 | 0.002260 | 0.001936 |
| test_uuid_cx.test | COMPILE | 0.132119 | 0.332327 | 0.510929 | — | — | — |
| test_uuid_cx2.test | RUN | 0.246098 | 0.757934 | 1.026965 | 0.002020 | 0.002218 | 0.002093 |
| test_uuid_cx3.test | RUN | 0.216088 | 0.590042 | 0.948047 | 0.001910 | 0.001912 | 0.001626 |
| test_uuid_cx3_no_simd.test | RUN | 0.196470 | 0.558399 | 0.817692 | 0.001705 | 0.002068 | 0.001650 |
| test_hash_value_cx.test | RUN | 0.205649 | 0.536140 | 0.816169 | 0.001848 | 0.002172 | 0.002041 |
| test_string_generator_cx.test | RUN | 0.237887 | 0.667686 | 0.918559 | 0.001964 | 0.002256 | 0.002188 |
| test_string_generator_cx2.test | RUN | 0.289047 | 0.822211 | 1.097822 | 0.001885 | 0.002210 | 0.002021 |
| test_constants_cx.test | RUN | 0.201641 | 0.480741 | 0.803375 | 0.001674 | 0.001906 | 0.002023 |
| test_from_chars_cx.test | RUN | 0.242979 | 0.915575 | 0.987811 | 0.002074 | 0.002206 | 0.001845 |
| test_from_chars_cx2.test | RUN | 0.259052 | 1.103892 | 1.124506 | 0.001902 | 0.001973 | 0.002284 |
| test_to_chars_cx.test | RUN | 0.262549 | 1.002563 | 1.177412 | 0.001558 | 0.002058 | 0.001570 |
| test_uuid_from_string_cx.test | RUN | 0.271584 | 0.978270 | 1.095606 | 0.001516 | 0.001438 | 0.001573 |
| quick.test | RUN | 0.295345 | 0.754567 | 1.149057 | 0.001556 | 0.001422 | 0.001496 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.999×, 0.986× | 1.001× |
| clang | 0.996× | 0.997×, 0.995× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001497s | 0.001490s | 0.001489s | byte equality observed |
| test_alignment.test | 10 | 0.001487s | 0.001496s | 0.001494s | byte equality observed |
| test_alignment_2.test | 10 | 0.001495s | 0.001448s | 0.001436s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001438s | 0.001431s | 0.001445s | byte equality observed |
| test_bench_random.test | 3 | 0.008344s | 0.008391s | 0.008326s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001508s | 0.001543s | 0.001537s | byte equality observed |
| test_comparison.test | 10 | 0.001525s | 0.001463s | 0.001530s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001573s | 0.001527s | 0.001566s | byte equality observed |
| test_constants.test | 10 | 0.001504s | 0.001470s | 0.001484s | byte equality observed |
| test_constants_cx.test | 10 | 0.001474s | 0.001461s | 0.001487s | byte equality observed |
| test_data.test | 10 | 0.001479s | 0.001500s | 0.001506s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001487s | 0.001499s | 0.001471s | byte equality observed |
| test_detail_endian.test | 10 | 0.001499s | 0.001469s | 0.001533s | byte equality observed |
| test_detail_md5.test | 9 | 0.001528s | 0.001522s | 0.001490s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001503s | 0.001510s | 0.001455s | byte equality observed |
| test_detail_sha1.test | 3 | 0.011588s | 0.010212s | 0.010936s | byte equality observed |
| test_entropy_error.test | 10 | 0.001463s | 0.001460s | 0.001430s | byte equality observed |
| test_from_chars.test | 10 | 0.001451s | 0.001424s | 0.001434s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001478s | 0.001461s | 0.001464s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001469s | 0.001480s | 0.001469s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001498s | 0.001516s | 0.001472s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001509s | 0.001506s | 0.001488s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001489s | 0.001493s | 0.001504s | byte equality observed |
| test_hash.test | 10 | 0.001507s | 0.001512s | 0.001511s | byte equality observed |
| test_hash_value.test | 5 | 0.005677s | 0.005354s | 0.005417s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001470s | 0.001459s | 0.001460s | byte equality observed |
| test_include1.test | 10 | 0.000648s | 0.000631s | 0.001443s | byte equality observed |
| test_io.test | 10 | 0.001594s | 0.001594s | 0.001571s | byte equality observed |
| test_io_2.test | 10 | 0.001703s | 0.001649s | 0.001644s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001705s | 0.001678s | 0.001706s | byte equality observed |
| test_io_no_simd.test | 7 | 0.001568s | 0.001597s | 0.001603s | byte equality observed |
| test_msvc_simd_bug981648.test | 9 | 0.001525s | 0.001510s | 0.001511s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001548s | 0.001552s | 0.001544s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001543s | 0.001514s | 0.001533s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001566s | 0.001578s | 0.001538s | byte equality observed |
| test_namespaces.test | 10 | 0.001495s | 0.001525s | 0.001477s | byte equality observed |
| test_nil_generator.test | 10 | 0.001462s | 0.001490s | 0.001495s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001489s | 0.001458s | 0.001454s | byte equality observed |
| test_random_generator.test | 7 | 0.002953s | 0.002908s | 0.002912s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001537s | 0.001504s | 0.001494s | byte equality observed |
| test_serialization.test | 9 | 0.001642s | 0.001673s | 0.001598s | byte equality observed |
| test_std_unordered.test | 10 | 0.001608s | 0.001567s | 0.001578s | byte equality observed |
| test_string_generator.test | 10 | 0.001699s | 0.001653s | 0.001623s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001530s | 0.001545s | 0.001519s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001505s | 0.001515s | 0.001513s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001558s | 0.001501s | 0.001504s | byte equality observed |
| test_tagging.test | 10 | 0.001538s | 0.001527s | 0.001497s | byte equality observed |
| test_time_generator.test | 10 | 0.001528s | 0.001507s | 0.001519s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.002075s | 0.002184s | 0.002185s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001821s | 0.001898s | 0.001864s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004809s | 0.004625s | 0.004663s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.002061s | 0.002194s | 0.002209s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001846s | 0.001921s | 0.001875s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004572s | 0.004836s | 0.004772s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001851s | 0.001866s | 0.001853s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001587s | 0.001567s | 0.001598s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002557s | 0.002545s | 0.002555s | byte equality observed |
| test_to_chars.test | 10 | 0.001594s | 0.001588s | 0.001586s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001505s | 0.001540s | 0.001545s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001526s | 0.001520s | 0.001511s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001505s | 0.001535s | 0.001466s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001531s | 0.001509s | 0.001507s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001612s | 0.001656s | 0.001584s | byte equality observed |
| test_uuid.test | 9 | 0.001505s | 0.001539s | 0.001521s | byte equality observed |
| test_uuid_2.test | 10 | 0.001514s | 0.001534s | 0.001477s | byte equality observed |
| test_uuid_3.test | 10 | 0.001473s | 0.001519s | 0.001468s | byte equality observed |
| test_uuid_class.test | 10 | 0.001548s | 0.001558s | 0.001522s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001505s | 0.001474s | 0.001516s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001494s | 0.001515s | 0.001505s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001513s | 0.001510s | 0.001526s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001493s | 0.001502s | 0.001496s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001555s | 0.001507s | 0.001526s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001896s | 0.001960s | 0.001932s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001632s | 0.001649s | 0.001652s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001501s | 0.001509s | 0.001506s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001501s | 0.001514s | 0.001536s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001515s | 0.001532s | 0.001507s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
