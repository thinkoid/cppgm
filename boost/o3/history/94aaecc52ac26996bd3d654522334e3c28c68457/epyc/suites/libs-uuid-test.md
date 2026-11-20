# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.552230 | 1.304176 | 2.276209 | 0.000866 | 0.000886 | 0.002002 |
| test_uuid.test | RUN | 0.370887 | 1.048620 | 1.573721 | 0.002052 | 0.002148 | 0.002126 |
| test_uuid_no_simd.test | RUN | 0.337498 | 1.027265 | 1.382190 | 0.002080 | 0.001866 | 0.002110 |
| test_uuid_2.test | RUN | 0.255397 | 0.732285 | 1.034111 | 0.001986 | 0.001811 | 0.001732 |
| test_uuid_3.test | RUN | 0.201755 | 0.550318 | 0.821987 | 0.001986 | 0.002015 | 0.001681 |
| test_alignment.test | RUN | 0.201272 | 0.474729 | 0.723597 | 0.002054 | 0.001768 | 0.002094 |
| test_alignment_2.test | RUN | 0.187281 | 0.478440 | 0.776700 | 0.001807 | 0.001798 | 0.001749 |
| test_attribute_packed.test | RUN | 0.191257 | 0.476754 | 0.758415 | 0.002073 | 0.002106 | 0.001968 |
| test_pragma_pack.test | RUN | 0.190572 | 0.475433 | 0.726092 | 0.002022 | 0.002182 | 0.001758 |
| test_data.test | RUN | 0.225716 | 0.871459 | 1.044458 | 0.002289 | 0.002139 | 0.002117 |
| test_comparison.test | RUN | 0.316967 | 1.009599 | 1.471095 | 0.002250 | 0.002184 | 0.001778 |
| test_comparison_no_simd.test | RUN | 0.317910 | 1.136941 | 1.306548 | 0.001742 | 0.001945 | 0.002157 |
| test_io.test | RUN | 0.425290 | 1.856685 | 2.029555 | 0.002265 | 0.002080 | 0.002308 |
| test_io_no_simd.test | RUN | 0.409411 | 1.796075 | 1.937544 | 0.001894 | 0.001927 | 0.002182 |
| test_io_2.test | RUN | 0.324222 | 1.913441 | 1.448636 | 0.002334 | 0.002331 | 0.001927 |
| test_io_2_no_simd.test | RUN | 0.297276 | 1.790829 | 1.328550 | 0.002128 | 0.002048 | 0.002030 |
| test_to_chars.test | RUN | 0.290078 | 1.198183 | 1.354747 | 0.002290 | 0.002282 | 0.002172 |
| test_to_chars_no_simd.test | RUN | 0.284839 | 1.222166 | 1.320288 | 0.002012 | 0.002137 | 0.002184 |
| test_to_chars_2.test | RUN | 0.349663 | 2.179056 | 1.606545 | 0.002115 | 0.002041 | 0.001918 |
| test_to_chars_2_no_simd.test | RUN | 0.351293 | 2.350910 | 1.425341 | 0.002036 | 0.001814 | 0.002082 |
| test_to_chars_3.test | RUN | 0.246028 | 0.797536 | 1.032581 | 0.002262 | 0.001976 | 0.001710 |
| test_from_chars.test | RUN | 0.279694 | 1.141896 | 1.114590 | 0.001900 | 0.001868 | 0.002030 |
| test_from_chars_no_simd.test | RUN | 0.244748 | 0.906913 | 0.957094 | 0.001794 | 0.001999 | 0.001827 |
| test_from_chars_2.test | RUN | 0.264670 | 1.085942 | 1.129573 | 0.001541 | 0.001874 | 0.002181 |
| test_from_chars_2_no_simd.test | RUN | 0.235960 | 0.828411 | 0.872013 | 0.001905 | 0.001754 | 0.002131 |
| test_uuid_from_string.test | RUN | 0.307719 | 1.181191 | 1.359684 | 0.001678 | 0.001982 | 0.001745 |
| test_uuid_from_string_2.test | RUN | 0.271757 | 1.085981 | 1.112012 | 0.002288 | 0.001924 | 0.002710 |
| test_uuid_from_string_3.test | RUN | 0.275103 | 1.072634 | 1.195464 | 0.001910 | 0.001998 | 0.001853 |
| test_uuid_clock.test | RUN | 0.172274 | 0.460353 | 0.733620 | 0.001810 | 0.002006 | 0.001829 |
| test_nil_generator.test | RUN | 0.207220 | 0.533285 | 0.868875 | 0.002080 | 0.001988 | 0.002179 |
| test_string_generator.test | RUN | 0.262316 | 0.852004 | 1.121090 | 0.002144 | 0.002374 | 0.002280 |
| test_string_generator_2.test | RUN | 0.320847 | 1.233191 | 1.278010 | 0.001814 | 0.001982 | 0.002128 |
| test_random_generator.test | RUN | 0.431100 | 2.351280 | 1.895945 | 0.003183 | 0.003598 | 0.003462 |
| test_random_generator_2.test | RUN | 0.307048 | 0.920877 | 1.352211 | 0.001777 | 0.002056 | 0.001697 |
| test_name_generator.test | RUN | 0.280284 | 3.040561 | 1.372433 | 0.001653 | 0.002026 | 0.002224 |
| test_namespaces.test | RUN | 0.229249 | 0.651553 | 0.955175 | 0.001893 | 0.002046 | 0.001921 |
| test_name_generator_md5.test | RUN | 0.285496 | 1.420172 | 1.344186 | 0.002058 | 0.002002 | 0.002118 |
| test_name_generator_sha1.test | RUN | 0.275845 | 4.442842 | 1.284033 | 0.001950 | 0.002250 | 0.002114 |
| test_time_generator.test | RUN | 0.305517 | 0.908590 | 1.282121 | 0.001907 | 0.002211 | 0.002278 |
| test_time_generator_v1.test | RUN | 0.333844 | 0.963544 | 1.454854 | 0.002523 | 0.002638 | 0.002913 |
| test_time_generator_v1_2.test | RUN | 0.329229 | 0.942443 | 1.368568 | 0.002194 | 0.002476 | 0.002540 |
| test_time_generator_v1_3.test | RUN | 0.361196 | 0.990218 | 1.508051 | 0.004573 | 0.006460 | 0.006223 |
| test_time_generator_v6.test | RUN | 0.334521 | 1.014655 | 1.444313 | 0.002599 | 0.002600 | 0.002806 |
| test_time_generator_v6_2.test | RUN | 0.331883 | 0.938275 | 1.409544 | 0.002286 | 0.002370 | 0.002575 |
| test_time_generator_v6_3.test | RUN | 0.363718 | 0.993573 | 1.550652 | 0.004570 | 0.005022 | 0.005932 |
| test_time_generator_v7.test | RUN | 0.320210 | 1.015348 | 1.399477 | 0.002341 | 0.002252 | 0.002270 |
| test_time_generator_v7_2.test | RUN | 0.301348 | 0.867762 | 1.285381 | 0.001664 | 0.002178 | 0.002242 |
| test_time_generator_v7_3.test | RUN | 0.311279 | 1.121457 | 1.324569 | 0.002875 | 0.003216 | 0.003226 |
| test_serialization.test | RUN | 0.571536 | 1.698067 | 2.266922 | 0.002179 | 0.001928 | 0.002452 |
| test_tagging.test | RUN | 0.314826 | 1.089604 | 1.365915 | 0.001832 | 0.002124 | 0.002115 |
| test_uuid_class.test | RUN | 0.320183 | 0.951618 | 1.412730 | 0.001807 | 0.001810 | 0.002028 |
| test_uuid_in_map.test | RUN | 0.361678 | 1.104147 | 1.472852 | 0.001936 | 0.002142 | 0.002060 |
| test_hash.test | RUN | 0.361229 | 0.974479 | 1.367990 | 0.002081 | 0.001940 | 0.002167 |
| test_hash_value.test | RUN | 0.262531 | 0.683586 | 1.062629 | 0.006241 | 0.005982 | 0.005996 |
| test_std_unordered.test | RUN | 0.331733 | 1.122125 | 1.442379 | 0.002056 | 0.002232 | 0.002209 |
| test_boost_unordered.test | RUN | 0.478297 | 1.455434 | 1.789711 | 0.001978 | 0.001918 | 0.002176 |
| test_detail_md5.test | RUN | 0.217765 | 0.715315 | 1.007591 | 0.001937 | 0.001880 | 0.001786 |
| test_detail_sha1.test | RUN | 0.203734 | 0.892777 | 0.913287 | 0.012822 | 0.011114 | 0.011565 |
| test_detail_endian.test | RUN | 0.154767 | 0.523751 | 0.671156 | 0.001851 | 0.001976 | 0.002134 |
| test_detail_chacha20.test | RUN | 0.179658 | 0.629324 | 0.672266 | 0.001847 | 0.001777 | 0.002053 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.163030 | 0.375081 | 0.579743 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.150440 | 0.364757 | 0.562208 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.278177 | 0.711032 | 1.051686 | 0.002106 | 0.001929 | 0.002078 |
| test_bench_random.test | RUN | 0.305385 | 0.921374 | 1.309078 | 0.008940 | 0.008891 | 0.008903 |
| test_entropy_error.test | RUN | 0.147451 | 0.428627 | 0.628844 | 0.001922 | 0.001990 | 0.001852 |
| test_detail_random_provider.test | RUN | 0.290379 | 0.717875 | 1.241000 | 0.002140 | 0.001942 | 0.001860 |
| test_constants.test | RUN | 0.236343 | 0.648792 | 0.951122 | 0.002029 | 0.002150 | 0.001763 |
| test_uuid_cx.test | COMPILE | 0.135641 | 0.325062 | 0.481649 | — | — | — |
| test_uuid_cx2.test | RUN | 0.241837 | 0.747650 | 1.024541 | 0.001998 | 0.001892 | 0.002104 |
| test_uuid_cx3.test | RUN | 0.219677 | 0.576297 | 0.916038 | 0.001854 | 0.001938 | 0.002069 |
| test_uuid_cx3_no_simd.test | RUN | 0.203130 | 0.562414 | 0.829357 | 0.001822 | 0.001859 | 0.001854 |
| test_hash_value_cx.test | RUN | 0.207498 | 0.532046 | 0.857574 | 0.001950 | 0.002080 | 0.001994 |
| test_string_generator_cx.test | RUN | 0.233770 | 0.656219 | 0.907782 | 0.002228 | 0.001780 | 0.002164 |
| test_string_generator_cx2.test | RUN | 0.292594 | 0.801406 | 1.043038 | 0.002060 | 0.001966 | 0.002196 |
| test_constants_cx.test | RUN | 0.204263 | 0.483975 | 0.803638 | 0.001803 | 0.001847 | 0.001962 |
| test_from_chars_cx.test | RUN | 0.249667 | 0.904155 | 1.033684 | 0.001821 | 0.002093 | 0.002080 |
| test_from_chars_cx2.test | RUN | 0.260834 | 1.072128 | 1.032072 | 0.001916 | 0.001848 | 0.002062 |
| test_to_chars_cx.test | RUN | 0.258749 | 0.990201 | 1.184135 | 0.001995 | 0.002001 | 0.001325 |
| test_uuid_from_string_cx.test | RUN | 0.270287 | 1.009360 | 1.151296 | 0.001838 | 0.001450 | 0.001561 |
| quick.test | RUN | 0.296365 | 0.751280 | 0.906760 | 0.001581 | 0.001552 | 0.001536 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.996×, 0.991× | 0.991× |
| clang | 0.997× | 1.008×, 0.985× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001497s | 0.001435s | 0.001477s | byte equality observed |
| test_alignment.test | 10 | 0.001445s | 0.001445s | 0.001452s | byte equality observed |
| test_alignment_2.test | 10 | 0.001498s | 0.001480s | 0.001445s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001422s | 0.001410s | 0.001438s | byte equality observed |
| test_bench_random.test | 3 | 0.008335s | 0.008182s | 0.008365s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001497s | 0.001510s | 0.001525s | byte equality observed |
| test_comparison.test | 10 | 0.001450s | 0.001484s | 0.001514s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001516s | 0.001530s | 0.001540s | byte equality observed |
| test_constants.test | 10 | 0.001513s | 0.001464s | 0.001498s | byte equality observed |
| test_constants_cx.test | 10 | 0.001476s | 0.001435s | 0.001485s | byte equality observed |
| test_data.test | 10 | 0.001479s | 0.001486s | 0.001495s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001493s | 0.001477s | 0.001485s | byte equality observed |
| test_detail_endian.test | 10 | 0.001474s | 0.001434s | 0.001514s | byte equality observed |
| test_detail_md5.test | 10 | 0.001542s | 0.001492s | 0.001471s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001532s | 0.001464s | 0.001514s | byte equality observed |
| test_detail_sha1.test | 3 | 0.011572s | 0.010373s | 0.010815s | byte equality observed |
| test_entropy_error.test | 10 | 0.001441s | 0.001416s | 0.001478s | byte equality observed |
| test_from_chars.test | 10 | 0.001460s | 0.001419s | 0.001444s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001492s | 0.001400s | 0.001478s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001481s | 0.001469s | 0.001488s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001478s | 0.001456s | 0.001467s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001477s | 0.001479s | 0.001524s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001490s | 0.001470s | 0.001534s | byte equality observed |
| test_hash.test | 10 | 0.001510s | 0.001444s | 0.001525s | byte equality observed |
| test_hash_value.test | 5 | 0.005560s | 0.005366s | 0.005466s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001470s | 0.001447s | 0.001478s | byte equality observed |
| test_include1.test | 10 | 0.000636s | 0.000643s | 0.001413s | byte equality observed |
| test_io.test | 10 | 0.001567s | 0.001553s | 0.001587s | byte equality observed |
| test_io_2.test | 10 | 0.001646s | 0.001625s | 0.001684s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001674s | 0.001661s | 0.001702s | byte equality observed |
| test_io_no_simd.test | 8 | 0.001557s | 0.001611s | 0.001591s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001510s | 0.001464s | 0.001484s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001535s | 0.001541s | 0.001550s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001559s | 0.001526s | 0.001541s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001556s | 0.001578s | 0.001525s | byte equality observed |
| test_namespaces.test | 10 | 0.001500s | 0.001473s | 0.001466s | byte equality observed |
| test_nil_generator.test | 10 | 0.001485s | 0.001450s | 0.001513s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001443s | 0.001418s | 0.001495s | byte equality observed |
| test_random_generator.test | 7 | 0.002880s | 0.002834s | 0.002847s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001516s | 0.001495s | 0.001466s | byte equality observed |
| test_serialization.test | 10 | 0.001612s | 0.001634s | 0.001611s | byte equality observed |
| test_std_unordered.test | 10 | 0.001598s | 0.001573s | 0.001566s | byte equality observed |
| test_string_generator.test | 10 | 0.001669s | 0.001644s | 0.001649s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001510s | 0.001514s | 0.001525s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001490s | 0.001478s | 0.001501s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001483s | 0.001497s | 0.001516s | byte equality observed |
| test_tagging.test | 10 | 0.001518s | 0.001522s | 0.001521s | byte equality observed |
| test_time_generator.test | 10 | 0.001504s | 0.001464s | 0.001541s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.002062s | 0.002151s | 0.002204s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001835s | 0.001838s | 0.001907s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004641s | 0.004729s | 0.004764s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.002060s | 0.002156s | 0.002174s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001828s | 0.001807s | 0.001896s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004721s | 0.004727s | 0.004707s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001825s | 0.001836s | 0.001872s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001583s | 0.001574s | 0.001563s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002550s | 0.002559s | 0.002552s | byte equality observed |
| test_to_chars.test | 10 | 0.001586s | 0.001560s | 0.001588s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001513s | 0.001499s | 0.001516s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001547s | 0.001528s | 0.001570s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001506s | 0.001523s | 0.001514s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001520s | 0.001498s | 0.001550s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001604s | 0.001590s | 0.001592s | byte equality observed |
| test_uuid.test | 10 | 0.001490s | 0.001497s | 0.001504s | byte equality observed |
| test_uuid_2.test | 10 | 0.001520s | 0.001538s | 0.001536s | byte equality observed |
| test_uuid_3.test | 10 | 0.001501s | 0.001490s | 0.001501s | byte equality observed |
| test_uuid_class.test | 10 | 0.001477s | 0.001496s | 0.001500s | byte equality observed |
| test_uuid_clock.test | 9 | 0.001520s | 0.001474s | 0.001509s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001501s | 0.001482s | 0.001551s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001499s | 0.001475s | 0.001531s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001491s | 0.001481s | 0.001498s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001531s | 0.001475s | 0.001532s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001926s | 0.001858s | 0.001970s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001634s | 0.001590s | 0.001660s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001476s | 0.001478s | 0.001511s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001527s | 0.001528s | 0.001547s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001480s | 0.001466s | 0.001531s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
