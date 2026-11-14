# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.406194 | 0.953278 | 1.459310 | 0.000751 | 0.000778 | 0.001736 |
| test_uuid.test | RUN | 0.268993 | 0.757997 | 1.009645 | 0.001810 | 0.001832 | 0.001850 |
| test_uuid_no_simd.test | RUN | 0.236949 | 0.746107 | 0.888979 | 0.001746 | 0.001793 | 0.001409 |
| test_uuid_2.test | RUN | 0.184460 | 0.548124 | 0.631346 | 0.001636 | 0.001768 | 0.001526 |
| test_uuid_3.test | RUN | 0.156914 | 0.380291 | 0.545232 | 0.001606 | 0.001806 | 0.001435 |
| test_alignment.test | RUN | 0.140025 | 0.335124 | 0.476819 | 0.001699 | 0.001408 | 0.001729 |
| test_alignment_2.test | RUN | 0.145475 | 0.347011 | 0.466354 | 0.001667 | 0.001742 | 0.001807 |
| test_attribute_packed.test | RUN | 0.140839 | 0.339808 | 0.506245 | 0.001655 | 0.001867 | 0.001469 |
| test_pragma_pack.test | RUN | 0.136215 | 0.346838 | 0.509888 | 0.001744 | 0.001790 | 0.001272 |
| test_data.test | RUN | 0.176817 | 0.611394 | 0.675742 | 0.001771 | 0.001718 | 0.001678 |
| test_comparison.test | RUN | 0.237019 | 0.731428 | 0.887066 | 0.001790 | 0.001791 | 0.001594 |
| test_comparison_no_simd.test | RUN | 0.219228 | 0.834206 | 0.855981 | 0.001665 | 0.001722 | 0.001393 |
| test_io.test | RUN | 0.304763 | 1.356396 | 1.380173 | 0.001858 | 0.001931 | 0.001877 |
| test_io_no_simd.test | RUN | 0.266588 | 1.340536 | 1.265548 | 0.001579 | 0.001644 | 0.001873 |
| test_io_2.test | RUN | 0.236357 | 1.399583 | 0.927218 | 0.001736 | 0.001672 | 0.001627 |
| test_io_2_no_simd.test | RUN | 0.208066 | 1.316324 | 0.885589 | 0.001388 | 0.001961 | 0.001730 |
| test_to_chars.test | RUN | 0.211696 | 0.881275 | 0.886395 | 0.001772 | 0.001968 | 0.001659 |
| test_to_chars_no_simd.test | RUN | 0.194605 | 0.896735 | 0.837453 | 0.001869 | 0.001792 | 0.001776 |
| test_to_chars_2.test | RUN | 0.248840 | 1.604760 | 1.039461 | 0.001697 | 0.001631 | 0.001756 |
| test_to_chars_2_no_simd.test | RUN | 0.230444 | 1.724350 | 0.949765 | 0.001270 | 0.001476 | 0.001765 |
| test_to_chars_3.test | RUN | 0.171500 | 0.584861 | 0.620127 | 0.001368 | 0.001808 | 0.001346 |
| test_from_chars.test | RUN | 0.199230 | 0.843682 | 0.752537 | 0.001734 | 0.001703 | 0.001498 |
| test_from_chars_no_simd.test | RUN | 0.176319 | 0.660544 | 0.619997 | 0.001615 | 0.001713 | 0.001632 |
| test_from_chars_2.test | RUN | 0.191010 | 0.783822 | 0.737252 | 0.001687 | 0.001590 | 0.001555 |
| test_from_chars_2_no_simd.test | RUN | 0.174931 | 0.604625 | 0.606975 | 0.001638 | 0.001640 | 0.001676 |
| test_uuid_from_string.test | RUN | 0.227889 | 0.857766 | 0.862521 | 0.001566 | 0.001548 | 0.001499 |
| test_uuid_from_string_2.test | RUN | 0.199785 | 0.781009 | 0.740750 | 0.001852 | 0.002164 | 0.001786 |
| test_uuid_from_string_3.test | RUN | 0.203792 | 0.785516 | 0.770950 | 0.001494 | 0.001850 | 0.001858 |
| test_uuid_clock.test | RUN | 0.127089 | 0.320575 | 0.471973 | 0.001288 | 0.001825 | 0.001629 |
| test_nil_generator.test | RUN | 0.151627 | 0.377563 | 0.565056 | 0.001665 | 0.001763 | 0.001778 |
| test_string_generator.test | RUN | 0.190743 | 0.635368 | 0.738883 | 0.001595 | 0.001986 | 0.002146 |
| test_string_generator_2.test | RUN | 0.232926 | 0.868681 | 0.829502 | 0.001546 | 0.001761 | 0.002949 |
| test_random_generator.test | RUN | 0.313733 | 1.708548 | 1.275342 | 0.002381 | 0.002608 | 0.002598 |
| test_random_generator_2.test | RUN | 0.231721 | 0.657628 | 0.888976 | 0.001534 | 0.001749 | 0.001584 |
| test_name_generator.test | RUN | 0.204236 | 2.125539 | 0.940214 | 0.001584 | 0.001887 | 0.001600 |
| test_namespaces.test | RUN | 0.168323 | 0.481432 | 0.589931 | 0.001371 | 0.001753 | 0.001649 |
| test_name_generator_md5.test | RUN | 0.208437 | 1.038380 | 0.864896 | 0.001698 | 0.001814 | 0.001714 |
| test_name_generator_sha1.test | RUN | 0.202987 | 3.243346 | 0.865922 | 0.001664 | 0.001660 | 0.001582 |
| test_time_generator.test | RUN | 0.221318 | 0.587773 | 0.813286 | 0.001593 | 0.001807 | 0.001672 |
| test_time_generator_v1.test | RUN | 0.245845 | 0.739172 | 0.939779 | 0.001994 | 0.002220 | 0.002285 |
| test_time_generator_v1_2.test | RUN | 0.240657 | 0.673677 | 0.882772 | 0.001944 | 0.002101 | 0.002092 |
| test_time_generator_v1_3.test | RUN | 0.264840 | 0.726647 | 0.971234 | 0.004534 | 0.004507 | 0.004624 |
| test_time_generator_v6.test | RUN | 0.247926 | 0.732852 | 0.930472 | 0.001974 | 0.002385 | 0.002229 |
| test_time_generator_v6_2.test | RUN | 0.242043 | 0.692927 | 0.902544 | 0.001778 | 0.002038 | 0.001986 |
| test_time_generator_v6_3.test | RUN | 0.273832 | 0.729691 | 0.973900 | 0.004270 | 0.004128 | 0.004626 |
| test_time_generator_v7.test | RUN | 0.234391 | 0.730531 | 0.925231 | 0.001724 | 0.001864 | 0.001804 |
| test_time_generator_v7_2.test | RUN | 0.220117 | 0.631591 | 0.861282 | 0.001740 | 0.001844 | 0.001578 |
| test_time_generator_v7_3.test | RUN | 0.224848 | 0.818303 | 0.826422 | 0.002130 | 0.002396 | 0.002255 |
| test_serialization.test | RUN | 0.412222 | 1.232130 | 1.482564 | 0.001886 | 0.001291 | 0.001849 |
| test_tagging.test | RUN | 0.226658 | 0.776395 | 0.883782 | 0.001544 | 0.001304 | 0.001482 |
| test_uuid_class.test | RUN | 0.233793 | 0.688574 | 0.919025 | 0.001535 | 0.001742 | 0.001752 |
| test_uuid_in_map.test | RUN | 0.264288 | 0.799191 | 0.962733 | 0.001264 | 0.001770 | 0.001787 |
| test_hash.test | RUN | 0.262152 | 0.649772 | 0.909045 | 0.001667 | 0.001368 | 0.001699 |
| test_hash_value.test | RUN | 0.185933 | 0.498932 | 0.678023 | 0.004816 | 0.004749 | 0.004789 |
| test_std_unordered.test | RUN | 0.247118 | 0.799369 | 0.951336 | 0.001654 | 0.001421 | 0.001569 |
| test_boost_unordered.test | RUN | 0.345546 | 1.010597 | 1.145710 | 0.001724 | 0.001748 | 0.001546 |
| test_detail_md5.test | RUN | 0.164049 | 0.486755 | 0.642642 | 0.001342 | 0.001788 | 0.001692 |
| test_detail_sha1.test | RUN | 0.153671 | 0.632819 | 0.593235 | 0.008646 | 0.009115 | 0.008085 |
| test_detail_endian.test | RUN | 0.119869 | 0.364297 | 0.466137 | 0.001673 | 0.001725 | 0.001708 |
| test_detail_chacha20.test | RUN | 0.129775 | 0.444263 | 0.454833 | 0.001540 | 0.001676 | 0.001703 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.118908 | 0.261882 | 0.363440 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.117017 | 0.266560 | 0.369426 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.194919 | 0.512716 | 0.667721 | 0.001832 | 0.001701 | 0.001577 |
| test_bench_random.test | RUN | 0.223027 | 0.660980 | 0.873862 | 0.005744 | 0.005536 | 0.005721 |
| test_entropy_error.test | RUN | 0.110827 | 0.298362 | 0.413183 | 0.001602 | 0.001771 | 0.001398 |
| test_detail_random_provider.test | RUN | 0.216269 | 0.525396 | 0.750218 | 0.001730 | 0.001926 | 0.001814 |
| test_constants.test | RUN | 0.169147 | 0.472540 | 0.591702 | 0.001535 | 0.001757 | 0.001631 |
| test_uuid_cx.test | COMPILE | 0.101336 | 0.231987 | 0.322489 | — | — | — |
| test_uuid_cx2.test | RUN | 0.172663 | 0.535452 | 0.621257 | 0.001633 | 0.001778 | 0.001643 |
| test_uuid_cx3.test | RUN | 0.152309 | 0.424138 | 0.601177 | 0.001725 | 0.001606 | 0.001420 |
| test_uuid_cx3_no_simd.test | RUN | 0.140336 | 0.402693 | 0.499087 | 0.001833 | 0.001515 | 0.001781 |
| test_hash_value_cx.test | RUN | 0.148813 | 0.391047 | 0.541165 | 0.001574 | 0.001851 | 0.001688 |
| test_string_generator_cx.test | RUN | 0.172327 | 0.471031 | 0.600369 | 0.001576 | 0.001666 | 0.001748 |
| test_string_generator_cx2.test | RUN | 0.212932 | 0.581801 | 0.666155 | 0.001524 | 0.001892 | 0.001634 |
| test_constants_cx.test | RUN | 0.144006 | 0.337691 | 0.510210 | 0.001519 | 0.001597 | 0.001661 |
| test_from_chars_cx.test | RUN | 0.182994 | 0.637861 | 0.688182 | 0.001538 | 0.001760 | 0.001708 |
| test_from_chars_cx2.test | RUN | 0.189282 | 0.781972 | 0.756355 | 0.001848 | 0.001716 | 0.001728 |
| test_to_chars_cx.test | RUN | 0.188128 | 0.713552 | 0.787317 | 0.001710 | 0.001862 | 0.001800 |
| test_uuid_from_string_cx.test | RUN | 0.197342 | 0.708976 | 0.689290 | 0.001119 | 0.001279 | 0.001242 |
| quick.test | RUN | 0.219970 | 0.552035 | 0.686685 | 0.001270 | 0.001231 | 0.001231 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.001×, 1.000× | 1.002× |
| clang | 1.005× | 1.006×, 1.005× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001148s | 0.001143s | 0.001141s | byte equality observed |
| test_alignment.test | 10 | 0.001121s | 0.001130s | 0.001148s | byte equality observed |
| test_alignment_2.test | 10 | 0.001145s | 0.001140s | 0.001176s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001156s | 0.001177s | 0.001135s | byte equality observed |
| test_bench_random.test | 4 | 0.005175s | 0.005131s | 0.005165s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001178s | 0.001220s | 0.001208s | byte equality observed |
| test_comparison.test | 10 | 0.001194s | 0.001174s | 0.001180s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001178s | 0.001175s | 0.001167s | byte equality observed |
| test_constants.test | 10 | 0.001164s | 0.001128s | 0.001159s | byte equality observed |
| test_constants_cx.test | 10 | 0.001126s | 0.001147s | 0.001147s | byte equality observed |
| test_data.test | 10 | 0.001169s | 0.001159s | 0.001143s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001145s | 0.001137s | 0.001170s | byte equality observed |
| test_detail_endian.test | 10 | 0.001141s | 0.001146s | 0.001157s | byte equality observed |
| test_detail_md5.test | 10 | 0.001200s | 0.001156s | 0.001179s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001161s | 0.001148s | 0.001165s | byte equality observed |
| test_detail_sha1.test | 3 | 0.008281s | 0.008419s | 0.007532s | byte equality observed |
| test_entropy_error.test | 10 | 0.001146s | 0.001119s | 0.001135s | byte equality observed |
| test_from_chars.test | 10 | 0.001131s | 0.001126s | 0.001152s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001149s | 0.001130s | 0.001156s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001148s | 0.001146s | 0.001168s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001151s | 0.001145s | 0.001142s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001151s | 0.001166s | 0.001141s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001150s | 0.001121s | 0.001181s | byte equality observed |
| test_hash.test | 10 | 0.001155s | 0.001163s | 0.001185s | byte equality observed |
| test_hash_value.test | 5 | 0.004213s | 0.004067s | 0.004157s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001142s | 0.001126s | 0.001134s | byte equality observed |
| test_include1.test | 10 | 0.000501s | 0.000496s | 0.001107s | byte equality observed |
| test_io.test | 10 | 0.001217s | 0.001233s | 0.001240s | byte equality observed |
| test_io_2.test | 10 | 0.001290s | 0.001301s | 0.001295s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001296s | 0.001303s | 0.001294s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001209s | 0.001213s | 0.001251s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001154s | 0.001148s | 0.001169s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001176s | 0.001197s | 0.001177s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001165s | 0.001169s | 0.001171s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001194s | 0.001201s | 0.001214s | byte equality observed |
| test_namespaces.test | 10 | 0.001167s | 0.001148s | 0.001150s | byte equality observed |
| test_nil_generator.test | 10 | 0.001155s | 0.001154s | 0.001136s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001150s | 0.001145s | 0.001167s | byte equality observed |
| test_random_generator.test | 9 | 0.001991s | 0.001979s | 0.002022s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001151s | 0.001163s | 0.001175s | byte equality observed |
| test_serialization.test | 10 | 0.001279s | 0.001251s | 0.001253s | byte equality observed |
| test_std_unordered.test | 10 | 0.001240s | 0.001215s | 0.001263s | byte equality observed |
| test_string_generator.test | 10 | 0.001273s | 0.001261s | 0.001261s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001159s | 0.001169s | 0.001166s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001153s | 0.001140s | 0.001158s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001158s | 0.001145s | 0.001167s | byte equality observed |
| test_tagging.test | 10 | 0.001153s | 0.001153s | 0.001157s | byte equality observed |
| test_time_generator.test | 10 | 0.001162s | 0.001183s | 0.001165s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001579s | 0.001656s | 0.001692s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001426s | 0.001425s | 0.001474s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.003566s | 0.003417s | 0.003537s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001562s | 0.001671s | 0.001706s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001420s | 0.001423s | 0.001480s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.003602s | 0.003566s | 0.003624s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001444s | 0.001439s | 0.001479s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001223s | 0.001229s | 0.001233s | byte equality observed |
| test_time_generator_v7_3.test | 9 | 0.001812s | 0.001810s | 0.001827s | byte equality observed |
| test_to_chars.test | 10 | 0.001241s | 0.001228s | 0.001249s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001173s | 0.001179s | 0.001162s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001190s | 0.001161s | 0.001188s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001155s | 0.001166s | 0.001160s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001182s | 0.001162s | 0.001167s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001241s | 0.001238s | 0.001237s | byte equality observed |
| test_uuid.test | 10 | 0.001139s | 0.001157s | 0.001157s | byte equality observed |
| test_uuid_2.test | 10 | 0.001173s | 0.001128s | 0.001141s | byte equality observed |
| test_uuid_3.test | 10 | 0.001143s | 0.001144s | 0.001142s | byte equality observed |
| test_uuid_class.test | 10 | 0.001156s | 0.001156s | 0.001185s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001147s | 0.001158s | 0.001154s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001159s | 0.001152s | 0.001160s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001150s | 0.001145s | 0.001142s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001147s | 0.001139s | 0.001160s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001170s | 0.001158s | 0.001187s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001421s | 0.001425s | 0.001484s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001226s | 0.001262s | 0.001251s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001157s | 0.001146s | 0.001152s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001162s | 0.001168s | 0.001148s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001145s | 0.001107s | 0.001138s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
