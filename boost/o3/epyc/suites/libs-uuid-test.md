# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.594705 | 1.308183 | 2.300222 | 0.000700 | 0.000842 | 0.002216 |
| test_uuid.test | RUN | 0.348309 | 1.068093 | 1.582435 | 0.002000 | 0.002193 | 0.002272 |
| test_uuid_no_simd.test | RUN | 0.357470 | 0.994842 | 1.431251 | 0.002024 | 0.002087 | 0.002126 |
| test_uuid_2.test | RUN | 0.243562 | 0.752937 | 0.977926 | 0.001954 | 0.002036 | 0.001782 |
| test_uuid_3.test | RUN | 0.203642 | 0.543730 | 0.851691 | 0.001907 | 0.002209 | 0.001803 |
| test_alignment.test | RUN | 0.202564 | 0.476583 | 0.728894 | 0.001878 | 0.002018 | 0.002058 |
| test_alignment_2.test | RUN | 0.191587 | 0.498532 | 0.762031 | 0.001624 | 0.002120 | 0.001549 |
| test_attribute_packed.test | RUN | 0.195387 | 0.472304 | 0.731199 | 0.001844 | 0.002128 | 0.001816 |
| test_pragma_pack.test | RUN | 0.185177 | 0.475496 | 0.750192 | 0.002123 | 0.002120 | 0.001928 |
| test_data.test | RUN | 0.228184 | 0.859194 | 1.043531 | 0.001861 | 0.002118 | 0.002105 |
| test_comparison.test | RUN | 0.333388 | 1.012559 | 1.458363 | 0.002021 | 0.002118 | 0.001919 |
| test_comparison_no_simd.test | RUN | 0.331582 | 1.163601 | 1.246225 | 0.002103 | 0.001932 | 0.002116 |
| test_io.test | RUN | 0.402663 | 1.838287 | 2.085962 | 0.002256 | 0.002158 | 0.002118 |
| test_io_no_simd.test | RUN | 0.392146 | 1.810690 | 1.940752 | 0.001922 | 0.001987 | 0.002338 |
| test_io_2.test | RUN | 0.314072 | 1.901626 | 1.477151 | 0.002200 | 0.001949 | 0.002370 |
| test_io_2_no_simd.test | RUN | 0.281381 | 1.809105 | 1.275306 | 0.001852 | 0.002147 | 0.002344 |
| test_to_chars.test | RUN | 0.286901 | 1.187326 | 1.330381 | 0.002133 | 0.002103 | 0.002262 |
| test_to_chars_no_simd.test | RUN | 0.277551 | 1.231822 | 1.290292 | 0.001844 | 0.001976 | 0.002105 |
| test_to_chars_2.test | RUN | 0.335079 | 2.189910 | 1.564042 | 0.001956 | 0.001952 | 0.001876 |
| test_to_chars_2_no_simd.test | RUN | 0.354341 | 2.369274 | 1.430713 | 0.001960 | 0.002066 | 0.002044 |
| test_to_chars_3.test | RUN | 0.241630 | 0.804424 | 1.003359 | 0.001829 | 0.002079 | 0.001638 |
| test_from_chars.test | RUN | 0.274833 | 1.145908 | 1.127909 | 0.001759 | 0.001876 | 0.002238 |
| test_from_chars_no_simd.test | RUN | 0.248509 | 0.924620 | 0.955545 | 0.001757 | 0.001703 | 0.002187 |
| test_from_chars_2.test | RUN | 0.269173 | 1.091420 | 1.120343 | 0.001800 | 0.002036 | 0.002148 |
| test_from_chars_2_no_simd.test | RUN | 0.228442 | 0.831060 | 0.867841 | 0.001629 | 0.001980 | 0.001647 |
| test_uuid_from_string.test | RUN | 0.315909 | 1.191569 | 1.358688 | 0.001610 | 0.002022 | 0.001799 |
| test_uuid_from_string_2.test | RUN | 0.272751 | 1.068483 | 1.145988 | 0.002418 | 0.002608 | 0.002541 |
| test_uuid_from_string_3.test | RUN | 0.278813 | 1.076894 | 1.136783 | 0.001826 | 0.002226 | 0.002164 |
| test_uuid_clock.test | RUN | 0.172770 | 0.450005 | 0.736406 | 0.001620 | 0.001944 | 0.002220 |
| test_nil_generator.test | RUN | 0.202089 | 0.545124 | 0.844975 | 0.001989 | 0.002104 | 0.002138 |
| test_string_generator.test | RUN | 0.264370 | 0.865528 | 1.148647 | 0.002202 | 0.002517 | 0.002394 |
| test_string_generator_2.test | RUN | 0.316949 | 1.209732 | 1.277970 | 0.001877 | 0.002306 | 0.002175 |
| test_random_generator.test | RUN | 0.427691 | 2.364259 | 1.945107 | 0.003318 | 0.003508 | 0.003619 |
| test_random_generator_2.test | RUN | 0.315759 | 0.941467 | 1.313509 | 0.001973 | 0.002182 | 0.001806 |
| test_name_generator.test | RUN | 0.285012 | 3.087924 | 1.389115 | 0.001694 | 0.002048 | 0.001796 |
| test_namespaces.test | RUN | 0.235069 | 0.665485 | 0.961733 | 0.001515 | 0.002352 | 0.001893 |
| test_name_generator_md5.test | RUN | 0.281417 | 1.477529 | 1.334805 | 0.002075 | 0.002072 | 0.001877 |
| test_name_generator_sha1.test | RUN | 0.275497 | 4.510452 | 1.286211 | 0.001862 | 0.001951 | 0.002186 |
| test_time_generator.test | RUN | 0.298668 | 0.911353 | 1.338998 | 0.001811 | 0.002168 | 0.002132 |
| test_time_generator_v1.test | RUN | 0.338540 | 0.990757 | 1.435388 | 0.002434 | 0.002900 | 0.002786 |
| test_time_generator_v1_2.test | RUN | 0.334850 | 0.933003 | 1.334084 | 0.002482 | 0.002715 | 0.002586 |
| test_time_generator_v1_3.test | RUN | 0.368450 | 0.987401 | 1.524002 | 0.005967 | 0.005058 | 0.006092 |
| test_time_generator_v6.test | RUN | 0.345023 | 1.009634 | 1.409836 | 0.002150 | 0.002689 | 0.002724 |
| test_time_generator_v6_2.test | RUN | 0.327808 | 0.939950 | 1.356658 | 0.001868 | 0.002638 | 0.002399 |
| test_time_generator_v6_3.test | RUN | 0.371508 | 0.993262 | 1.533496 | 0.004394 | 0.005662 | 0.005685 |
| test_time_generator_v7.test | RUN | 0.313862 | 0.999364 | 1.385976 | 0.001962 | 0.002332 | 0.002068 |
| test_time_generator_v7_2.test | RUN | 0.305953 | 0.898507 | 1.311034 | 0.001761 | 0.002362 | 0.001963 |
| test_time_generator_v7_3.test | RUN | 0.296897 | 1.135574 | 1.296702 | 0.002941 | 0.003337 | 0.003020 |
| test_serialization.test | RUN | 0.564761 | 1.696531 | 2.228631 | 0.002228 | 0.001887 | 0.002380 |
| test_tagging.test | RUN | 0.305512 | 1.084911 | 1.407085 | 0.002050 | 0.002110 | 0.001863 |
| test_uuid_class.test | RUN | 0.318227 | 0.960371 | 1.406510 | 0.001953 | 0.001799 | 0.001733 |
| test_uuid_in_map.test | RUN | 0.365347 | 1.108405 | 1.563342 | 0.001823 | 0.002192 | 0.002287 |
| test_hash.test | RUN | 0.368171 | 1.004866 | 1.460666 | 0.001956 | 0.001912 | 0.002072 |
| test_hash_value.test | RUN | 0.255776 | 0.667307 | 1.101429 | 0.006004 | 0.006156 | 0.005974 |
| test_std_unordered.test | RUN | 0.335468 | 1.095586 | 1.370512 | 0.001918 | 0.002301 | 0.002290 |
| test_boost_unordered.test | RUN | 0.460836 | 1.438477 | 1.854017 | 0.001866 | 0.002018 | 0.002304 |
| test_detail_md5.test | RUN | 0.220677 | 0.719896 | 1.046461 | 0.001764 | 0.002084 | 0.002268 |
| test_detail_sha1.test | RUN | 0.218618 | 0.871362 | 0.900347 | 0.011992 | 0.011453 | 0.011361 |
| test_detail_endian.test | RUN | 0.169634 | 0.507849 | 0.672670 | 0.002066 | 0.002022 | 0.001736 |
| test_detail_chacha20.test | RUN | 0.177741 | 0.628455 | 0.708507 | 0.001964 | 0.002134 | 0.002238 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.159508 | 0.379636 | 0.573577 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.163656 | 0.355975 | 0.623283 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.270172 | 0.711764 | 1.082212 | 0.001998 | 0.002160 | 0.002101 |
| test_bench_random.test | RUN | 0.303856 | 0.914424 | 1.351754 | 0.009204 | 0.008835 | 0.009065 |
| test_entropy_error.test | RUN | 0.152767 | 0.430017 | 0.626939 | 0.001778 | 0.002220 | 0.002359 |
| test_detail_random_provider.test | RUN | 0.292324 | 0.715787 | 1.207269 | 0.001872 | 0.001904 | 0.001926 |
| test_constants.test | RUN | 0.231310 | 0.649899 | 0.925231 | 0.001473 | 0.001996 | 0.002380 |
| test_uuid_cx.test | COMPILE | 0.133409 | 0.318437 | 0.493245 | — | — | — |
| test_uuid_cx2.test | RUN | 0.243934 | 0.777243 | 1.003523 | 0.001910 | 0.001968 | 0.002134 |
| test_uuid_cx3.test | RUN | 0.210909 | 0.599538 | 0.953542 | 0.001928 | 0.002014 | 0.001659 |
| test_uuid_cx3_no_simd.test | RUN | 0.196756 | 0.540498 | 0.840451 | 0.001668 | 0.001874 | 0.001425 |
| test_hash_value_cx.test | RUN | 0.200136 | 0.541612 | 0.815959 | 0.001600 | 0.002226 | 0.002054 |
| test_string_generator_cx.test | RUN | 0.235417 | 0.657506 | 0.926024 | 0.002053 | 0.002028 | 0.002138 |
| test_string_generator_cx2.test | RUN | 0.280309 | 0.806501 | 1.071985 | 0.001829 | 0.002078 | 0.001736 |
| test_constants_cx.test | RUN | 0.193689 | 0.481186 | 0.822367 | 0.001850 | 0.001764 | 0.002004 |
| test_from_chars_cx.test | RUN | 0.242778 | 0.890104 | 1.034560 | 0.001717 | 0.002332 | 0.002086 |
| test_from_chars_cx2.test | RUN | 0.255370 | 1.078426 | 1.151615 | 0.002018 | 0.001375 | 0.002130 |
| test_to_chars_cx.test | RUN | 0.257324 | 0.995344 | 1.172440 | 0.001453 | 0.001965 | 0.001602 |
| test_uuid_from_string_cx.test | RUN | 0.267241 | 0.992140 | 1.193575 | 0.001545 | 0.001501 | 0.001644 |
| quick.test | RUN | 0.287194 | 0.769900 | 1.204509 | 0.001342 | 0.001571 | 0.001510 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.987×, 0.996× | 0.989× |
| clang | 0.994× | 1.000×, 0.989× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001480s | 0.001461s | 0.001468s | byte equality observed |
| test_alignment.test | 10 | 0.001485s | 0.001459s | 0.001488s | byte equality observed |
| test_alignment_2.test | 10 | 0.001464s | 0.001461s | 0.001494s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001409s | 0.001418s | 0.001407s | byte equality observed |
| test_bench_random.test | 3 | 0.008409s | 0.008558s | 0.008435s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001493s | 0.001491s | 0.001475s | byte equality observed |
| test_comparison.test | 10 | 0.001504s | 0.001479s | 0.001479s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001561s | 0.001526s | 0.001543s | byte equality observed |
| test_constants.test | 10 | 0.001516s | 0.001530s | 0.001485s | byte equality observed |
| test_constants_cx.test | 10 | 0.001465s | 0.001437s | 0.001440s | byte equality observed |
| test_data.test | 10 | 0.001511s | 0.001515s | 0.001517s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001505s | 0.001471s | 0.001492s | byte equality observed |
| test_detail_endian.test | 10 | 0.001488s | 0.001464s | 0.001481s | byte equality observed |
| test_detail_md5.test | 10 | 0.001509s | 0.001564s | 0.001527s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001504s | 0.001503s | 0.001498s | byte equality observed |
| test_detail_sha1.test | 3 | 0.011416s | 0.010275s | 0.010716s | byte equality observed |
| test_entropy_error.test | 10 | 0.001471s | 0.001452s | 0.001459s | byte equality observed |
| test_from_chars.test | 10 | 0.001431s | 0.001437s | 0.001447s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001462s | 0.001410s | 0.001494s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001493s | 0.001503s | 0.001523s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001486s | 0.001476s | 0.001481s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001492s | 0.001501s | 0.001480s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001473s | 0.001495s | 0.001501s | byte equality observed |
| test_hash.test | 8 | 0.001512s | 0.001466s | 0.001499s | byte equality observed |
| test_hash_value.test | 4 | 0.005692s | 0.005575s | 0.005376s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001479s | 0.001476s | 0.001490s | byte equality observed |
| test_include1.test | 10 | 0.000644s | 0.000642s | 0.001454s | byte equality observed |
| test_io.test | 10 | 0.001566s | 0.001579s | 0.001589s | byte equality observed |
| test_io_2.test | 10 | 0.001674s | 0.001614s | 0.001654s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001708s | 0.001673s | 0.001684s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001602s | 0.001594s | 0.001571s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001521s | 0.001512s | 0.001482s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001548s | 0.001557s | 0.001529s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001547s | 0.001539s | 0.001529s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001581s | 0.001552s | 0.001531s | byte equality observed |
| test_namespaces.test | 10 | 0.001508s | 0.001515s | 0.001479s | byte equality observed |
| test_nil_generator.test | 10 | 0.001498s | 0.001479s | 0.001470s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001457s | 0.001470s | 0.001461s | byte equality observed |
| test_random_generator.test | 7 | 0.002975s | 0.002917s | 0.002945s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001502s | 0.001500s | 0.001469s | byte equality observed |
| test_serialization.test | 10 | 0.001625s | 0.001620s | 0.001662s | byte equality observed |
| test_std_unordered.test | 10 | 0.001614s | 0.001581s | 0.001564s | byte equality observed |
| test_string_generator.test | 10 | 0.001629s | 0.001658s | 0.001618s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001552s | 0.001548s | 0.001507s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001525s | 0.001496s | 0.001496s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001528s | 0.001485s | 0.001500s | byte equality observed |
| test_tagging.test | 10 | 0.001500s | 0.001473s | 0.001500s | byte equality observed |
| test_time_generator.test | 10 | 0.001538s | 0.001481s | 0.001500s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.002061s | 0.002144s | 0.002210s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001829s | 0.001843s | 0.001888s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004774s | 0.004696s | 0.004714s | byte equality observed |
| test_time_generator_v6.test | 9 | 0.002075s | 0.002159s | 0.002142s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001848s | 0.001852s | 0.001890s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004736s | 0.004665s | 0.004565s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001803s | 0.001855s | 0.001878s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001595s | 0.001605s | 0.001570s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002558s | 0.002526s | 0.002523s | byte equality observed |
| test_to_chars.test | 10 | 0.001610s | 0.001587s | 0.001537s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001510s | 0.001524s | 0.001532s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001532s | 0.001547s | 0.001559s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001507s | 0.001520s | 0.001530s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001529s | 0.001495s | 0.001511s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001605s | 0.001570s | 0.001595s | byte equality observed |
| test_uuid.test | 10 | 0.001496s | 0.001496s | 0.001510s | byte equality observed |
| test_uuid_2.test | 10 | 0.001517s | 0.001530s | 0.001514s | byte equality observed |
| test_uuid_3.test | 10 | 0.001499s | 0.001473s | 0.001488s | byte equality observed |
| test_uuid_class.test | 10 | 0.001543s | 0.001526s | 0.001578s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001509s | 0.001505s | 0.001506s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001533s | 0.001505s | 0.001478s | byte equality observed |
| test_uuid_cx3.test | 9 | 0.001495s | 0.001504s | 0.001470s | byte equality observed |
| test_uuid_cx3_no_simd.test | 7 | 0.001513s | 0.001513s | 0.001492s | byte equality observed |
| test_uuid_from_string.test | 7 | 0.001519s | 0.001501s | 0.001517s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001938s | 0.001878s | 0.001936s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001605s | 0.001621s | 0.001651s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001502s | 0.001481s | 0.001492s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001520s | 0.001499s | 0.001518s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001511s | 0.001484s | 0.001531s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
