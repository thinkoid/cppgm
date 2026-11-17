# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.606866 | 1.398331 | 2.333757 | 0.001031 | 0.000917 | 0.002058 |
| test_uuid.test | RUN | 0.357210 | 1.098542 | 1.567817 | 0.002110 | 0.002196 | 0.002193 |
| test_uuid_no_simd.test | RUN | 0.343301 | 1.092619 | 1.410548 | 0.001600 | 0.002068 | 0.001954 |
| test_uuid_2.test | RUN | 0.263705 | 0.773412 | 1.045429 | 0.002228 | 0.002072 | 0.001701 |
| test_uuid_3.test | RUN | 0.205728 | 0.540162 | 0.828234 | 0.002020 | 0.002202 | 0.002132 |
| test_alignment.test | RUN | 0.193124 | 0.483614 | 0.763974 | 0.002112 | 0.002302 | 0.002187 |
| test_alignment_2.test | RUN | 0.202893 | 0.500712 | 0.788088 | 0.002030 | 0.002164 | 0.001870 |
| test_attribute_packed.test | RUN | 0.192060 | 0.497769 | 0.792403 | 0.001865 | 0.002200 | 0.001707 |
| test_pragma_pack.test | RUN | 0.208371 | 0.483645 | 0.757474 | 0.002070 | 0.002068 | 0.001798 |
| test_data.test | RUN | 0.232745 | 0.920321 | 1.081245 | 0.002033 | 0.002058 | 0.002046 |
| test_comparison.test | RUN | 0.324200 | 1.054993 | 1.425159 | 0.002076 | 0.002172 | 0.001726 |
| test_comparison_no_simd.test | RUN | 0.330092 | 1.206241 | 1.341649 | 0.002140 | 0.001926 | 0.001738 |
| test_io.test | RUN | 0.426317 | 1.931183 | 2.074655 | 0.002231 | 0.002154 | 0.002196 |
| test_io_no_simd.test | RUN | 0.406589 | 1.871352 | 1.996924 | 0.002163 | 0.002128 | 0.002320 |
| test_io_2.test | RUN | 0.318049 | 1.942002 | 1.496270 | 0.002184 | 0.002064 | 0.002225 |
| test_io_2_no_simd.test | RUN | 0.286570 | 1.830649 | 1.307124 | 0.002101 | 0.002361 | 0.002186 |
| test_to_chars.test | RUN | 0.303764 | 1.212450 | 1.376292 | 0.002194 | 0.002438 | 0.002286 |
| test_to_chars_no_simd.test | RUN | 0.288744 | 1.268117 | 1.283404 | 0.002234 | 0.001921 | 0.001996 |
| test_to_chars_2.test | RUN | 0.348940 | 2.210171 | 1.612624 | 0.002093 | 0.002012 | 0.001972 |
| test_to_chars_2_no_simd.test | RUN | 0.352152 | 2.349783 | 1.434485 | 0.001792 | 0.001939 | 0.002150 |
| test_to_chars_3.test | RUN | 0.241033 | 0.827577 | 1.019252 | 0.001924 | 0.001923 | 0.001860 |
| test_from_chars.test | RUN | 0.279234 | 1.159865 | 1.140549 | 0.001766 | 0.002280 | 0.002038 |
| test_from_chars_no_simd.test | RUN | 0.248569 | 0.927304 | 0.982163 | 0.001706 | 0.001724 | 0.001779 |
| test_from_chars_2.test | RUN | 0.271446 | 1.117232 | 1.147763 | 0.002000 | 0.002006 | 0.001982 |
| test_from_chars_2_no_simd.test | RUN | 0.243118 | 0.851675 | 0.883748 | 0.001860 | 0.002107 | 0.002001 |
| test_uuid_from_string.test | RUN | 0.323266 | 1.205497 | 1.367650 | 0.001826 | 0.002002 | 0.001990 |
| test_uuid_from_string_2.test | RUN | 0.286559 | 1.109309 | 1.172601 | 0.002002 | 0.002549 | 0.002581 |
| test_uuid_from_string_3.test | RUN | 0.286667 | 1.114086 | 1.208353 | 0.002034 | 0.002169 | 0.002237 |
| test_uuid_clock.test | RUN | 0.182504 | 0.468897 | 0.726079 | 0.001759 | 0.002072 | 0.001861 |
| test_nil_generator.test | RUN | 0.208037 | 0.553976 | 0.874855 | 0.002042 | 0.001878 | 0.001881 |
| test_string_generator.test | RUN | 0.265641 | 0.917599 | 1.117216 | 0.002232 | 0.002266 | 0.002263 |
| test_string_generator_2.test | RUN | 0.326662 | 1.243074 | 1.259806 | 0.001812 | 0.002000 | 0.002116 |
| test_random_generator.test | RUN | 0.442901 | 2.440052 | 1.927807 | 0.003244 | 0.003508 | 0.003535 |
| test_random_generator_2.test | RUN | 0.329928 | 0.929419 | 1.323712 | 0.001885 | 0.002262 | 0.002178 |
| test_name_generator.test | RUN | 0.283121 | 3.206431 | 1.385566 | 0.001865 | 0.002081 | 0.002067 |
| test_namespaces.test | RUN | 0.234611 | 0.666838 | 0.950136 | 0.001609 | 0.002187 | 0.001644 |
| test_name_generator_md5.test | RUN | 0.290471 | 1.469308 | 1.297206 | 0.002124 | 0.002183 | 0.001957 |
| test_name_generator_sha1.test | RUN | 0.282835 | 4.658366 | 1.283180 | 0.001994 | 0.002391 | 0.001942 |
| test_time_generator.test | RUN | 0.312785 | 0.955580 | 1.343947 | 0.001802 | 0.002398 | 0.002006 |
| test_time_generator_v1.test | RUN | 0.348284 | 1.051517 | 1.470011 | 0.002383 | 0.002754 | 0.002865 |
| test_time_generator_v1_2.test | RUN | 0.342879 | 1.000441 | 1.392359 | 0.002351 | 0.002736 | 0.002575 |
| test_time_generator_v1_3.test | RUN | 0.378472 | 1.039427 | 1.565872 | 0.005296 | 0.006122 | 0.006010 |
| test_time_generator_v6.test | RUN | 0.342859 | 1.077316 | 1.511105 | 0.002482 | 0.002684 | 0.002643 |
| test_time_generator_v6_2.test | RUN | 0.341105 | 0.986119 | 1.453113 | 0.002305 | 0.002513 | 0.002538 |
| test_time_generator_v6_3.test | RUN | 0.378895 | 1.038152 | 1.544477 | 0.006022 | 0.005390 | 0.005677 |
| test_time_generator_v7.test | RUN | 0.334266 | 1.053342 | 1.440301 | 0.001902 | 0.002398 | 0.002536 |
| test_time_generator_v7_2.test | RUN | 0.316629 | 0.924700 | 1.365387 | 0.002193 | 0.002326 | 0.002040 |
| test_time_generator_v7_3.test | RUN | 0.322481 | 1.177799 | 1.352229 | 0.003104 | 0.003318 | 0.002952 |
| test_serialization.test | RUN | 0.563475 | 1.785431 | 2.314292 | 0.002242 | 0.001929 | 0.002232 |
| test_tagging.test | RUN | 0.315087 | 1.126757 | 1.407076 | 0.001870 | 0.001849 | 0.001998 |
| test_uuid_class.test | RUN | 0.331531 | 0.996877 | 1.463167 | 0.001959 | 0.001803 | 0.002306 |
| test_uuid_in_map.test | RUN | 0.365960 | 1.116851 | 1.539533 | 0.001751 | 0.002228 | 0.002165 |
| test_hash.test | RUN | 0.365624 | 1.035042 | 1.448018 | 0.002068 | 0.002283 | 0.002033 |
| test_hash_value.test | RUN | 0.258296 | 0.723829 | 1.032651 | 0.006315 | 0.006214 | 0.006247 |
| test_std_unordered.test | RUN | 0.339768 | 1.156196 | 1.495106 | 0.002151 | 0.002368 | 0.001944 |
| test_boost_unordered.test | RUN | 0.481312 | 1.498727 | 1.907221 | 0.001952 | 0.001863 | 0.002068 |
| test_detail_md5.test | RUN | 0.227795 | 0.712993 | 1.003543 | 0.002068 | 0.002202 | 0.002242 |
| test_detail_sha1.test | RUN | 0.212404 | 0.914874 | 0.903198 | 0.012733 | 0.011375 | 0.012220 |
| test_detail_endian.test | RUN | 0.171468 | 0.530242 | 0.656946 | 0.001902 | 0.002234 | 0.001714 |
| test_detail_chacha20.test | RUN | 0.176637 | 0.656306 | 0.689212 | 0.001828 | 0.001731 | 0.001690 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.166320 | 0.375587 | 0.607588 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.166796 | 0.389378 | 0.600567 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.277745 | 0.736399 | 1.116274 | 0.002132 | 0.002067 | 0.002136 |
| test_bench_random.test | RUN | 0.311213 | 0.963120 | 1.410600 | 0.008977 | 0.008966 | 0.009046 |
| test_entropy_error.test | RUN | 0.156135 | 0.451633 | 0.617773 | 0.001880 | 0.001918 | 0.002123 |
| test_detail_random_provider.test | RUN | 0.302959 | 0.744495 | 1.274646 | 0.001759 | 0.001866 | 0.002230 |
| test_constants.test | RUN | 0.236944 | 0.687832 | 0.887222 | 0.002146 | 0.002125 | 0.001866 |
| test_uuid_cx.test | COMPILE | 0.136166 | 0.343101 | 0.524682 | — | — | — |
| test_uuid_cx2.test | RUN | 0.246587 | 0.755665 | 1.013176 | 0.001996 | 0.002096 | 0.002012 |
| test_uuid_cx3.test | RUN | 0.217397 | 0.617429 | 0.942067 | 0.001923 | 0.001932 | 0.001930 |
| test_uuid_cx3_no_simd.test | RUN | 0.200763 | 0.591039 | 0.801855 | 0.001928 | 0.001980 | 0.002135 |
| test_hash_value_cx.test | RUN | 0.205333 | 0.539154 | 0.852602 | 0.001676 | 0.002232 | 0.001894 |
| test_string_generator_cx.test | RUN | 0.239504 | 0.681033 | 0.941428 | 0.002012 | 0.001974 | 0.002134 |
| test_string_generator_cx2.test | RUN | 0.288532 | 0.844066 | 1.093554 | 0.001771 | 0.002352 | 0.002051 |
| test_constants_cx.test | RUN | 0.194729 | 0.502462 | 0.805198 | 0.002012 | 0.002000 | 0.001943 |
| test_from_chars_cx.test | RUN | 0.249193 | 0.930849 | 1.033140 | 0.001918 | 0.002268 | 0.002106 |
| test_from_chars_cx2.test | RUN | 0.264472 | 1.121476 | 1.114756 | 0.002223 | 0.001551 | 0.002264 |
| test_to_chars_cx.test | RUN | 0.260406 | 1.027003 | 1.219491 | 0.002016 | 0.002036 | 0.001516 |
| test_uuid_from_string_cx.test | RUN | 0.274069 | 1.051475 | 1.139528 | 0.001540 | 0.001624 | 0.001475 |
| quick.test | RUN | 0.293472 | 0.803332 | 1.117875 | 0.001632 | 0.001660 | 0.001410 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.990×, 0.997× | 1.005× |
| clang | 0.990× | 0.986×, 0.994× | 1.017× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 9 | 0.001495s | 0.001504s | 0.001441s | byte equality observed |
| test_alignment.test | 10 | 0.001437s | 0.001507s | 0.001472s | byte equality observed |
| test_alignment_2.test | 10 | 0.001433s | 0.001459s | 0.001432s | byte equality observed |
| test_attribute_packed.test | 9 | 0.001437s | 0.001453s | 0.001427s | byte equality observed |
| test_bench_random.test | 3 | 0.008282s | 0.008244s | 0.008280s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001483s | 0.001508s | 0.001513s | byte equality observed |
| test_comparison.test | 10 | 0.001501s | 0.001499s | 0.001518s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001523s | 0.001558s | 0.001529s | byte equality observed |
| test_constants.test | 10 | 0.001501s | 0.001505s | 0.001478s | byte equality observed |
| test_constants_cx.test | 10 | 0.001471s | 0.001466s | 0.001453s | byte equality observed |
| test_data.test | 10 | 0.001491s | 0.001475s | 0.001477s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001459s | 0.001522s | 0.001443s | byte equality observed |
| test_detail_endian.test | 10 | 0.001463s | 0.001474s | 0.001449s | byte equality observed |
| test_detail_md5.test | 10 | 0.001508s | 0.001517s | 0.001487s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001487s | 0.001489s | 0.001465s | byte equality observed |
| test_detail_sha1.test | 3 | 0.011455s | 0.010328s | 0.010581s | byte equality observed |
| test_entropy_error.test | 10 | 0.001482s | 0.001466s | 0.001445s | byte equality observed |
| test_from_chars.test | 10 | 0.001462s | 0.001444s | 0.001447s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001501s | 0.001456s | 0.001471s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001472s | 0.001513s | 0.001501s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001481s | 0.001508s | 0.001492s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001473s | 0.001486s | 0.001491s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001501s | 0.001505s | 0.001488s | byte equality observed |
| test_hash.test | 10 | 0.001534s | 0.001521s | 0.001506s | byte equality observed |
| test_hash_value.test | 5 | 0.005548s | 0.005471s | 0.005348s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001483s | 0.001490s | 0.001432s | byte equality observed |
| test_include1.test | 10 | 0.000646s | 0.000644s | 0.001413s | byte equality observed |
| test_io.test | 10 | 0.001554s | 0.001597s | 0.001558s | byte equality observed |
| test_io_2.test | 8 | 0.001693s | 0.001688s | 0.001598s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001660s | 0.001734s | 0.001692s | byte equality observed |
| test_io_no_simd.test | 8 | 0.001592s | 0.001598s | 0.001587s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001501s | 0.001488s | 0.001492s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001558s | 0.001556s | 0.001504s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001565s | 0.001575s | 0.001502s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001553s | 0.001603s | 0.001529s | byte equality observed |
| test_namespaces.test | 10 | 0.001490s | 0.001496s | 0.001432s | byte equality observed |
| test_nil_generator.test | 10 | 0.001474s | 0.001448s | 0.001467s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001489s | 0.001475s | 0.001450s | byte equality observed |
| test_random_generator.test | 7 | 0.002898s | 0.002897s | 0.002867s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001538s | 0.001507s | 0.001438s | byte equality observed |
| test_serialization.test | 10 | 0.001635s | 0.001642s | 0.001578s | byte equality observed |
| test_std_unordered.test | 10 | 0.001584s | 0.001592s | 0.001558s | byte equality observed |
| test_string_generator.test | 10 | 0.001649s | 0.001665s | 0.001610s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001506s | 0.001596s | 0.001490s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001488s | 0.001533s | 0.001445s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001501s | 0.001535s | 0.001456s | byte equality observed |
| test_tagging.test | 10 | 0.001512s | 0.001493s | 0.001471s | byte equality observed |
| test_time_generator.test | 10 | 0.001510s | 0.001537s | 0.001504s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.002077s | 0.002159s | 0.002146s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001850s | 0.001876s | 0.001822s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004689s | 0.004644s | 0.004680s | byte equality observed |
| test_time_generator_v6.test | 9 | 0.002049s | 0.002204s | 0.002170s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001846s | 0.001840s | 0.001855s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004773s | 0.004579s | 0.004651s | byte equality observed |
| test_time_generator_v7.test | 9 | 0.001822s | 0.001883s | 0.001822s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001601s | 0.001606s | 0.001532s | byte equality observed |
| test_time_generator_v7_3.test | 5 | 0.002532s | 0.002556s | 0.002495s | byte equality observed |
| test_to_chars.test | 10 | 0.001619s | 0.001590s | 0.001534s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001520s | 0.001572s | 0.001514s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001531s | 0.001560s | 0.001488s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001515s | 0.001531s | 0.001477s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001519s | 0.001500s | 0.001449s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001615s | 0.001641s | 0.001561s | byte equality observed |
| test_uuid.test | 10 | 0.001507s | 0.001495s | 0.001488s | byte equality observed |
| test_uuid_2.test | 10 | 0.001517s | 0.001531s | 0.001440s | byte equality observed |
| test_uuid_3.test | 10 | 0.001472s | 0.001476s | 0.001458s | byte equality observed |
| test_uuid_class.test | 10 | 0.001508s | 0.001532s | 0.001466s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001488s | 0.001490s | 0.001468s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001510s | 0.001547s | 0.001449s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001487s | 0.001491s | 0.001460s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001500s | 0.001489s | 0.001452s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001533s | 0.001498s | 0.001504s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001902s | 0.001937s | 0.001923s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001622s | 0.001622s | 0.001570s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001503s | 0.001508s | 0.001513s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001534s | 0.001547s | 0.001503s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001477s | 0.001517s | 0.001464s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
