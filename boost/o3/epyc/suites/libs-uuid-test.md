# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.426590 | 0.976987 | 1.477611 | 0.000806 | 0.000769 | 0.001908 |
| test_uuid.test | RUN | 0.278073 | 0.804488 | 1.060109 | 0.002002 | 0.001854 | 0.001938 |
| test_uuid_no_simd.test | RUN | 0.258189 | 0.757478 | 0.916385 | 0.001985 | 0.001489 | 0.001492 |
| test_uuid_2.test | RUN | 0.200986 | 0.572082 | 0.677950 | 0.001938 | 0.001460 | 0.001591 |
| test_uuid_3.test | RUN | 0.159815 | 0.417781 | 0.576434 | 0.001909 | 0.001868 | 0.001467 |
| test_alignment.test | RUN | 0.148148 | 0.357372 | 0.484882 | 0.001950 | 0.001713 | 0.001818 |
| test_alignment_2.test | RUN | 0.160372 | 0.346323 | 0.524083 | 0.001764 | 0.001672 | 0.001414 |
| test_attribute_packed.test | RUN | 0.148921 | 0.352138 | 0.485217 | 0.002116 | 0.001918 | 0.001508 |
| test_pragma_pack.test | RUN | 0.159200 | 0.355638 | 0.526619 | 0.002006 | 0.001912 | 0.001477 |
| test_data.test | RUN | 0.182152 | 0.662693 | 0.699477 | 0.001922 | 0.001878 | 0.001830 |
| test_comparison.test | RUN | 0.254342 | 0.752965 | 0.987534 | 0.002077 | 0.001850 | 0.001633 |
| test_comparison_no_simd.test | RUN | 0.251460 | 0.854321 | 0.814537 | 0.001660 | 0.001776 | 0.001676 |
| test_io.test | RUN | 0.327065 | 1.418798 | 1.422654 | 0.002028 | 0.002067 | 0.002024 |
| test_io_no_simd.test | RUN | 0.284577 | 1.426797 | 1.301852 | 0.001773 | 0.001794 | 0.001861 |
| test_io_2.test | RUN | 0.245807 | 1.424791 | 0.977813 | 0.002066 | 0.001728 | 0.001790 |
| test_io_2_no_simd.test | RUN | 0.219796 | 1.380511 | 0.915271 | 0.001713 | 0.002107 | 0.002024 |
| test_to_chars.test | RUN | 0.225495 | 0.923547 | 0.903282 | 0.001950 | 0.002016 | 0.001985 |
| test_to_chars_no_simd.test | RUN | 0.203888 | 0.926912 | 0.906757 | 0.001927 | 0.001810 | 0.001924 |
| test_to_chars_2.test | RUN | 0.263844 | 1.658685 | 1.089852 | 0.001848 | 0.001800 | 0.001705 |
| test_to_chars_2_no_simd.test | RUN | 0.245085 | 1.759814 | 0.988210 | 0.001720 | 0.001724 | 0.001662 |
| test_to_chars_3.test | RUN | 0.186489 | 0.618624 | 0.693018 | 0.001513 | 0.001709 | 0.001522 |
| test_from_chars.test | RUN | 0.215722 | 0.860207 | 0.752651 | 0.001908 | 0.001935 | 0.001485 |
| test_from_chars_no_simd.test | RUN | 0.191840 | 0.688746 | 0.635610 | 0.001774 | 0.001588 | 0.001462 |
| test_from_chars_2.test | RUN | 0.209067 | 0.821105 | 0.735652 | 0.001694 | 0.001852 | 0.001807 |
| test_from_chars_2_no_simd.test | RUN | 0.188590 | 0.613882 | 0.615716 | 0.001584 | 0.001790 | 0.001682 |
| test_uuid_from_string.test | RUN | 0.251275 | 0.898373 | 0.913339 | 0.001917 | 0.001951 | 0.001798 |
| test_uuid_from_string_2.test | RUN | 0.213907 | 0.807781 | 0.785182 | 0.001941 | 0.002178 | 0.002124 |
| test_uuid_from_string_3.test | RUN | 0.221896 | 0.821537 | 0.767225 | 0.001770 | 0.001882 | 0.001474 |
| test_uuid_clock.test | RUN | 0.147104 | 0.331380 | 0.486348 | 0.001692 | 0.001906 | 0.001676 |
| test_nil_generator.test | RUN | 0.161868 | 0.394718 | 0.562203 | 0.001822 | 0.001850 | 0.001901 |
| test_string_generator.test | RUN | 0.202100 | 0.666335 | 0.775414 | 0.001962 | 0.001976 | 0.001934 |
| test_string_generator_2.test | RUN | 0.252016 | 0.898489 | 0.852319 | 0.001725 | 0.001731 | 0.001832 |
| test_random_generator.test | RUN | 0.344375 | 1.781912 | 1.316436 | 0.002477 | 0.002652 | 0.002580 |
| test_random_generator_2.test | RUN | 0.249579 | 0.679573 | 0.846519 | 0.001348 | 0.001948 | 0.002002 |
| test_name_generator.test | RUN | 0.217255 | 2.398014 | 0.932479 | 0.001956 | 0.001976 | 0.001884 |
| test_namespaces.test | RUN | 0.179125 | 0.484889 | 0.645460 | 0.001847 | 0.001873 | 0.001734 |
| test_name_generator_md5.test | RUN | 0.223030 | 1.079692 | 0.894856 | 0.001967 | 0.001944 | 0.001914 |
| test_name_generator_sha1.test | RUN | 0.216918 | 3.458108 | 0.918390 | 0.001688 | 0.002036 | 0.001906 |
| test_time_generator.test | RUN | 0.239169 | 0.687719 | 0.871738 | 0.001653 | 0.001781 | 0.001610 |
| test_time_generator_v1.test | RUN | 0.270324 | 0.761755 | 0.903743 | 0.002186 | 0.002418 | 0.002460 |
| test_time_generator_v1_2.test | RUN | 0.269063 | 0.696126 | 0.886395 | 0.002179 | 0.002244 | 0.002096 |
| test_time_generator_v1_3.test | RUN | 0.289246 | 0.753336 | 1.027734 | 0.003799 | 0.004941 | 0.003903 |
| test_time_generator_v6.test | RUN | 0.267456 | 0.748560 | 0.999778 | 0.002158 | 0.002459 | 0.002096 |
| test_time_generator_v6_2.test | RUN | 0.263433 | 0.722266 | 0.917782 | 0.001848 | 0.002236 | 0.002246 |
| test_time_generator_v6_3.test | RUN | 0.312148 | 0.752897 | 1.028907 | 0.004689 | 0.004509 | 0.004168 |
| test_time_generator_v7.test | RUN | 0.258202 | 0.757699 | 0.953172 | 0.002215 | 0.002212 | 0.001811 |
| test_time_generator_v7_2.test | RUN | 0.251510 | 0.675436 | 0.895576 | 0.001890 | 0.001924 | 0.001664 |
| test_time_generator_v7_3.test | RUN | 0.238255 | 0.843432 | 0.854463 | 0.002411 | 0.002621 | 0.002376 |
| test_serialization.test | RUN | 0.460241 | 1.282020 | 1.529899 | 0.002191 | 0.001770 | 0.002067 |
| test_tagging.test | RUN | 0.254285 | 0.802990 | 0.903047 | 0.001934 | 0.001832 | 0.001693 |
| test_uuid_class.test | RUN | 0.259742 | 0.720459 | 0.945105 | 0.001739 | 0.001573 | 0.001592 |
| test_uuid_in_map.test | RUN | 0.292098 | 0.820578 | 0.987750 | 0.001720 | 0.002013 | 0.001915 |
| test_hash.test | RUN | 0.301492 | 0.746395 | 0.935850 | 0.001920 | 0.001720 | 0.001808 |
| test_hash_value.test | RUN | 0.209444 | 0.516418 | 0.715309 | 0.004654 | 0.004835 | 0.004865 |
| test_std_unordered.test | RUN | 0.281064 | 0.834383 | 0.941923 | 0.001837 | 0.001858 | 0.001569 |
| test_boost_unordered.test | RUN | 0.391860 | 1.086905 | 1.172514 | 0.001862 | 0.001615 | 0.001822 |
| test_detail_md5.test | RUN | 0.175757 | 0.532909 | 0.695714 | 0.001665 | 0.001878 | 0.001804 |
| test_detail_sha1.test | RUN | 0.169301 | 0.673868 | 0.596730 | 0.010083 | 0.009275 | 0.008642 |
| test_detail_endian.test | RUN | 0.131274 | 0.396500 | 0.461992 | 0.001790 | 0.001895 | 0.001727 |
| test_detail_chacha20.test | RUN | 0.151770 | 0.470761 | 0.417864 | 0.001836 | 0.001554 | 0.001683 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.137570 | 0.264907 | 0.379054 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.132123 | 0.269300 | 0.390681 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.228910 | 0.528435 | 0.689019 | 0.001870 | 0.001867 | 0.001812 |
| test_bench_random.test | RUN | 0.261640 | 0.695189 | 0.904724 | 0.006295 | 0.005962 | 0.005704 |
| test_entropy_error.test | RUN | 0.129932 | 0.304298 | 0.414043 | 0.001974 | 0.001858 | 0.001640 |
| test_detail_random_provider.test | RUN | 0.245286 | 0.534995 | 0.778679 | 0.001857 | 0.001840 | 0.001675 |
| test_constants.test | RUN | 0.192846 | 0.505887 | 0.604618 | 0.001689 | 0.001811 | 0.001478 |
| test_uuid_cx.test | COMPILE | 0.112354 | 0.224822 | 0.333247 | — | — | — |
| test_uuid_cx2.test | RUN | 0.204123 | 0.554681 | 0.669585 | 0.002338 | 0.001555 | 0.001896 |
| test_uuid_cx3.test | RUN | 0.182996 | 0.441434 | 0.593677 | 0.001896 | 0.001626 | 0.001581 |
| test_uuid_cx3_no_simd.test | RUN | 0.160250 | 0.416633 | 0.538793 | 0.001970 | 0.001620 | 0.001387 |
| test_hash_value_cx.test | RUN | 0.180138 | 0.401781 | 0.555276 | 0.002030 | 0.001790 | 0.001416 |
| test_string_generator_cx.test | RUN | 0.193410 | 0.491505 | 0.609335 | 0.001998 | 0.001540 | 0.001854 |
| test_string_generator_cx2.test | RUN | 0.230426 | 0.606927 | 0.730286 | 0.001696 | 0.001780 | 0.001892 |
| test_constants_cx.test | RUN | 0.165507 | 0.342705 | 0.501595 | 0.002065 | 0.001475 | 0.001822 |
| test_from_chars_cx.test | RUN | 0.205692 | 0.667178 | 0.693765 | 0.002025 | 0.001898 | 0.001498 |
| test_from_chars_cx2.test | RUN | 0.215746 | 0.808426 | 0.699723 | 0.001974 | 0.001834 | 0.001896 |
| test_to_chars_cx.test | RUN | 0.209942 | 0.739047 | 0.787579 | 0.001718 | 0.001676 | 0.001398 |
| test_uuid_from_string_cx.test | RUN | 0.220707 | 0.753050 | 0.668352 | 0.001598 | 0.001413 | 0.001259 |
| quick.test | RUN | 0.249336 | 0.579241 | 0.706445 | 0.001553 | 0.001356 | 0.001257 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.999×, 1.000× | 1.010× |
| clang | 1.007× | 1.009×, 1.005× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001170s | 0.001146s | 0.001147s | byte equality observed |
| test_alignment.test | 10 | 0.001152s | 0.001145s | 0.001150s | byte equality observed |
| test_alignment_2.test | 10 | 0.001156s | 0.001167s | 0.001152s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001154s | 0.001137s | 0.001161s | byte equality observed |
| test_bench_random.test | 4 | 0.005171s | 0.005147s | 0.005156s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001226s | 0.001194s | 0.001223s | byte equality observed |
| test_comparison.test | 10 | 0.001164s | 0.001192s | 0.001203s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001197s | 0.001182s | 0.001209s | byte equality observed |
| test_constants.test | 10 | 0.001175s | 0.001172s | 0.001179s | byte equality observed |
| test_constants_cx.test | 10 | 0.001147s | 0.001146s | 0.001143s | byte equality observed |
| test_data.test | 10 | 0.001148s | 0.001161s | 0.001143s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001149s | 0.001156s | 0.001173s | byte equality observed |
| test_detail_endian.test | 10 | 0.001149s | 0.001128s | 0.001165s | byte equality observed |
| test_detail_md5.test | 10 | 0.001176s | 0.001172s | 0.001154s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001154s | 0.001146s | 0.001147s | byte equality observed |
| test_detail_sha1.test | 3 | 0.008356s | 0.008467s | 0.007316s | byte equality observed |
| test_entropy_error.test | 10 | 0.001152s | 0.001110s | 0.001121s | byte equality observed |
| test_from_chars.test | 10 | 0.001136s | 0.001086s | 0.001154s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001128s | 0.001099s | 0.001153s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001144s | 0.001123s | 0.001161s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001160s | 0.001134s | 0.001148s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001134s | 0.001132s | 0.001161s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001159s | 0.001155s | 0.001161s | byte equality observed |
| test_hash.test | 10 | 0.001180s | 0.001135s | 0.001170s | byte equality observed |
| test_hash_value.test | 5 | 0.004171s | 0.004072s | 0.004085s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001151s | 0.001121s | 0.001133s | byte equality observed |
| test_include1.test | 10 | 0.000508s | 0.000518s | 0.001143s | byte equality observed |
| test_io.test | 10 | 0.001241s | 0.001230s | 0.001231s | byte equality observed |
| test_io_2.test | 10 | 0.001295s | 0.001275s | 0.001310s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001313s | 0.001296s | 0.001302s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001227s | 0.001241s | 0.001233s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001152s | 0.001151s | 0.001149s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001192s | 0.001200s | 0.001190s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001194s | 0.001186s | 0.001204s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001188s | 0.001209s | 0.001205s | byte equality observed |
| test_namespaces.test | 10 | 0.001165s | 0.001147s | 0.001159s | byte equality observed |
| test_nil_generator.test | 8 | 0.001132s | 0.001169s | 0.001156s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001130s | 0.001151s | 0.001161s | byte equality observed |
| test_random_generator.test | 10 | 0.001998s | 0.001976s | 0.001977s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001163s | 0.001186s | 0.001152s | byte equality observed |
| test_serialization.test | 10 | 0.001253s | 0.001266s | 0.001271s | byte equality observed |
| test_std_unordered.test | 10 | 0.001247s | 0.001223s | 0.001231s | byte equality observed |
| test_string_generator.test | 10 | 0.001260s | 0.001280s | 0.001254s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001187s | 0.001178s | 0.001198s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001169s | 0.001172s | 0.001181s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001175s | 0.001172s | 0.001132s | byte equality observed |
| test_tagging.test | 10 | 0.001158s | 0.001172s | 0.001187s | byte equality observed |
| test_time_generator.test | 10 | 0.001170s | 0.001177s | 0.001202s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001597s | 0.001696s | 0.001722s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001424s | 0.001444s | 0.001451s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.003518s | 0.003537s | 0.003786s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001580s | 0.001676s | 0.001740s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001421s | 0.001486s | 0.001470s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.003651s | 0.003605s | 0.003678s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001433s | 0.001481s | 0.001532s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001260s | 0.001253s | 0.001249s | byte equality observed |
| test_time_generator_v7_3.test | 10 | 0.001829s | 0.001816s | 0.001822s | byte equality observed |
| test_to_chars.test | 10 | 0.001250s | 0.001216s | 0.001225s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001200s | 0.001205s | 0.001189s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001194s | 0.001213s | 0.001176s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001178s | 0.001169s | 0.001197s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001160s | 0.001193s | 0.001166s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001247s | 0.001230s | 0.001222s | byte equality observed |
| test_uuid.test | 10 | 0.001157s | 0.001168s | 0.001177s | byte equality observed |
| test_uuid_2.test | 10 | 0.001143s | 0.001162s | 0.001154s | byte equality observed |
| test_uuid_3.test | 10 | 0.001145s | 0.001176s | 0.001184s | byte equality observed |
| test_uuid_class.test | 10 | 0.001174s | 0.001171s | 0.001200s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001146s | 0.001153s | 0.001154s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001154s | 0.001194s | 0.001158s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001137s | 0.001169s | 0.001168s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001161s | 0.001166s | 0.001134s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001189s | 0.001177s | 0.001173s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001442s | 0.001443s | 0.001466s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001248s | 0.001252s | 0.001261s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001168s | 0.001204s | 0.001133s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001164s | 0.001174s | 0.001154s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001149s | 0.001191s | 0.001148s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
