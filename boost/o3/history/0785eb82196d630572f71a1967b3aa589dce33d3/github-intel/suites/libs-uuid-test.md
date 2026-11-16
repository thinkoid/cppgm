# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.332049 | 0.810720 | 1.076933 | 0.000511 | 0.000583 | 0.001136 |
| test_uuid.test | RUN | 0.216289 | 0.669955 | 0.767426 | 0.001264 | 0.001442 | 0.001181 |
| test_uuid_no_simd.test | RUN | 0.212340 | 0.656468 | 0.687823 | 0.001350 | 0.001267 | 0.001105 |
| test_uuid_2.test | RUN | 0.151963 | 0.496069 | 0.512284 | 0.001164 | 0.001221 | 0.001095 |
| test_uuid_3.test | RUN | 0.126946 | 0.339742 | 0.409319 | 0.001265 | 0.001459 | 0.000996 |
| test_alignment.test | RUN | 0.113068 | 0.309103 | 0.362060 | 0.001312 | 0.001298 | 0.001200 |
| test_alignment_2.test | RUN | 0.118376 | 0.292950 | 0.362039 | 0.001217 | 0.001093 | 0.001177 |
| test_attribute_packed.test | RUN | 0.122514 | 0.309137 | 0.370989 | 0.001282 | 0.001344 | 0.001026 |
| test_pragma_pack.test | RUN | 0.119573 | 0.306289 | 0.370182 | 0.001239 | 0.001531 | 0.001074 |
| test_data.test | RUN | 0.143437 | 0.559552 | 0.531372 | 0.001312 | 0.001323 | 0.001311 |
| test_comparison.test | RUN | 0.207719 | 0.649351 | 0.709706 | 0.001386 | 0.001588 | 0.001219 |
| test_comparison_no_simd.test | RUN | 0.198514 | 0.751057 | 0.659034 | 0.001277 | 0.001430 | 0.001250 |
| test_io.test | RUN | 0.266071 | 1.272194 | 1.107276 | 0.001371 | 0.001638 | 0.001209 |
| test_io_no_simd.test | RUN | 0.253262 | 1.270517 | 1.044930 | 0.001346 | 0.001555 | 0.001347 |
| test_io_2.test | RUN | 0.204300 | 1.319977 | 0.768187 | 0.000974 | 0.001579 | 0.001230 |
| test_io_2_no_simd.test | RUN | 0.183532 | 1.233220 | 0.698576 | 0.001338 | 0.001484 | 0.001240 |
| test_to_chars.test | RUN | 0.186025 | 0.827394 | 0.708381 | 0.001353 | 0.001371 | 0.001382 |
| test_to_chars_no_simd.test | RUN | 0.178717 | 0.831657 | 0.692063 | 0.001500 | 0.001458 | 0.001373 |
| test_to_chars_2.test | RUN | 0.226010 | 1.521919 | 0.856042 | 0.001339 | 0.001492 | 0.001244 |
| test_to_chars_2_no_simd.test | RUN | 0.232938 | 1.609694 | 0.777469 | 0.001133 | 0.001244 | 0.001206 |
| test_to_chars_3.test | RUN | 0.147168 | 0.527262 | 0.520837 | 0.001169 | 0.001415 | 0.001209 |
| test_from_chars.test | RUN | 0.177581 | 0.770818 | 0.590292 | 0.001244 | 0.001124 | 0.001255 |
| test_from_chars_no_simd.test | RUN | 0.151061 | 0.605272 | 0.488168 | 0.001365 | 0.001163 | 0.001111 |
| test_from_chars_2.test | RUN | 0.164685 | 0.718410 | 0.569693 | 0.001153 | 0.001206 | 0.001237 |
| test_from_chars_2_no_simd.test | RUN | 0.146417 | 0.540108 | 0.466326 | 0.001144 | 0.001477 | 0.001308 |
| test_uuid_from_string.test | RUN | 0.196429 | 0.796810 | 0.696133 | 0.001244 | 0.001350 | 0.001149 |
| test_uuid_from_string_2.test | RUN | 0.173939 | 0.721864 | 0.598667 | 0.001501 | 0.001758 | 0.001435 |
| test_uuid_from_string_3.test | RUN | 0.174973 | 0.722029 | 0.613405 | 0.001350 | 0.001279 | 0.001219 |
| test_uuid_clock.test | RUN | 0.101820 | 0.290828 | 0.361180 | 0.001247 | 0.001356 | 0.001331 |
| test_nil_generator.test | RUN | 0.122725 | 0.339893 | 0.423541 | 0.001222 | 0.001361 | 0.001226 |
| test_string_generator.test | RUN | 0.163423 | 0.571958 | 0.579276 | 0.001347 | 0.001418 | 0.001251 |
| test_string_generator_2.test | RUN | 0.202817 | 0.811652 | 0.651108 | 0.001162 | 0.001239 | 0.001154 |
| test_random_generator.test | RUN | 0.272367 | 1.546320 | 0.991215 | 0.004266 | 0.004647 | 0.004314 |
| test_random_generator_2.test | RUN | 0.196397 | 0.591648 | 0.675252 | 0.001055 | 0.001517 | 0.001160 |
| test_name_generator.test | RUN | 0.176388 | 2.050598 | 0.717990 | 0.001145 | 0.001656 | 0.001081 |
| test_namespaces.test | RUN | 0.139635 | 0.427529 | 0.482122 | 0.001272 | 0.001371 | 0.001102 |
| test_name_generator_md5.test | RUN | 0.178995 | 0.962938 | 0.703825 | 0.001342 | 0.001513 | 0.001206 |
| test_name_generator_sha1.test | RUN | 0.172412 | 3.006738 | 0.690968 | 0.001272 | 0.001372 | 0.001284 |
| test_time_generator.test | RUN | 0.186387 | 0.595333 | 0.648204 | 0.001268 | 0.001616 | 0.001148 |
| test_time_generator_v1.test | RUN | 0.203660 | 0.654077 | 0.723696 | 0.001529 | 0.001778 | 0.001643 |
| test_time_generator_v1_2.test | RUN | 0.201635 | 0.617680 | 0.683363 | 0.001499 | 0.001628 | 0.001476 |
| test_time_generator_v1_3.test | RUN | 0.221245 | 0.639124 | 0.763299 | 0.003913 | 0.004194 | 0.004363 |
| test_time_generator_v6.test | RUN | 0.206519 | 0.651228 | 0.730227 | 0.001509 | 0.001786 | 0.001828 |
| test_time_generator_v6_2.test | RUN | 0.202763 | 0.622998 | 0.698884 | 0.001418 | 0.001719 | 0.001398 |
| test_time_generator_v6_3.test | RUN | 0.225174 | 0.661900 | 0.771754 | 0.003598 | 0.005193 | 0.003761 |
| test_time_generator_v7.test | RUN | 0.200711 | 0.652858 | 0.698932 | 0.001558 | 0.001566 | 0.001341 |
| test_time_generator_v7_2.test | RUN | 0.184403 | 0.575366 | 0.652642 | 0.001288 | 0.001415 | 0.001312 |
| test_time_generator_v7_3.test | RUN | 0.187989 | 0.727470 | 0.663325 | 0.002636 | 0.002908 | 0.002558 |
| test_serialization.test | RUN | 0.337645 | 1.124524 | 1.210875 | 0.001393 | 0.001549 | 0.001295 |
| test_tagging.test | RUN | 0.188539 | 0.691201 | 0.654804 | 0.001471 | 0.001282 | 0.001410 |
| test_uuid_class.test | RUN | 0.197350 | 0.613887 | 0.696179 | 0.001103 | 0.001267 | 0.001113 |
| test_uuid_in_map.test | RUN | 0.220974 | 0.705208 | 0.759617 | 0.001188 | 0.001322 | 0.001128 |
| test_hash.test | RUN | 0.216300 | 0.634029 | 0.695275 | 0.001330 | 0.001537 | 0.001256 |
| test_hash_value.test | RUN | 0.162815 | 0.442959 | 0.510792 | 0.004274 | 0.004124 | 0.004026 |
| test_std_unordered.test | RUN | 0.204514 | 0.721445 | 0.701485 | 0.001383 | 0.001542 | 0.001313 |
| test_boost_unordered.test | RUN | 0.293792 | 0.929973 | 0.929875 | 0.001257 | 0.001171 | 0.001364 |
| test_detail_md5.test | RUN | 0.136508 | 0.452151 | 0.504948 | 0.001259 | 0.001446 | 0.001113 |
| test_detail_sha1.test | RUN | 0.126009 | 0.581070 | 0.463081 | 0.008125 | 0.007961 | 0.007131 |
| test_detail_endian.test | RUN | 0.099031 | 0.326199 | 0.348692 | 0.001203 | 0.001354 | 0.001208 |
| test_detail_chacha20.test | RUN | 0.109893 | 0.402583 | 0.354285 | 0.001205 | 0.001194 | 0.001130 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.095817 | 0.222813 | 0.276666 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.094512 | 0.224192 | 0.280702 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.162627 | 0.444793 | 0.506663 | 0.001290 | 0.001390 | 0.001133 |
| test_bench_random.test | RUN | 0.182250 | 0.591112 | 0.665838 | 0.016860 | 0.016997 | 0.016853 |
| test_entropy_error.test | RUN | 0.094021 | 0.265401 | 0.308035 | 0.001464 | 0.001537 | 0.001164 |
| test_detail_random_provider.test | RUN | 0.176183 | 0.460391 | 0.573557 | 0.001282 | 0.001392 | 0.001233 |
| test_constants.test | RUN | 0.140283 | 0.423975 | 0.468138 | 0.001362 | 0.001343 | 0.001079 |
| test_uuid_cx.test | COMPILE | 0.079873 | 0.193638 | 0.239748 | — | — | — |
| test_uuid_cx2.test | RUN | 0.149256 | 0.488280 | 0.527704 | 0.001168 | 0.001174 | 0.001152 |
| test_uuid_cx3.test | RUN | 0.126622 | 0.376673 | 0.471722 | 0.001321 | 0.001355 | 0.001058 |
| test_uuid_cx3_no_simd.test | RUN | 0.120522 | 0.358023 | 0.417233 | 0.001199 | 0.001217 | 0.001104 |
| test_hash_value_cx.test | RUN | 0.120747 | 0.336767 | 0.401914 | 0.001239 | 0.001397 | 0.001170 |
| test_string_generator_cx.test | RUN | 0.143193 | 0.425888 | 0.478641 | 0.001522 | 0.001326 | 0.001119 |
| test_string_generator_cx2.test | RUN | 0.179813 | 0.530308 | 0.545664 | 0.001332 | 0.001451 | 0.001107 |
| test_constants_cx.test | RUN | 0.115761 | 0.292498 | 0.380435 | 0.001130 | 0.001476 | 0.001120 |
| test_from_chars_cx.test | RUN | 0.155366 | 0.566319 | 0.510920 | 0.001127 | 0.001576 | 0.001110 |
| test_from_chars_cx2.test | RUN | 0.160602 | 0.707349 | 0.565499 | 0.001243 | 0.000917 | 0.001238 |
| test_to_chars_cx.test | RUN | 0.161686 | 0.655018 | 0.613679 | 0.000993 | 0.001382 | 0.000922 |
| test_uuid_from_string_cx.test | RUN | 0.171472 | 0.664498 | 0.555710 | 0.000926 | 0.000956 | 0.000881 |
| quick.test | RUN | 0.177185 | 0.503172 | 0.581264 | 0.000959 | 0.001082 | 0.000830 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.008×, 0.999× | 0.991× |
| clang | 0.997× | 0.997×, 0.998× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000803s | 0.000776s | 0.000831s | byte equality observed |
| test_alignment.test | 10 | 0.000820s | 0.000804s | 0.000802s | byte equality observed |
| test_alignment_2.test | 10 | 0.000820s | 0.000810s | 0.000817s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000759s | 0.000747s | 0.000743s | byte equality observed |
| test_bench_random.test | 2 | 0.016391s | 0.016367s | 0.016381s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000787s | 0.000804s | 0.000782s | byte equality observed |
| test_comparison.test | 10 | 0.000747s | 0.000753s | 0.000734s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000771s | 0.000803s | 0.000775s | byte equality observed |
| test_constants.test | 10 | 0.000822s | 0.000822s | 0.000798s | byte equality observed |
| test_constants_cx.test | 10 | 0.000786s | 0.000776s | 0.000794s | byte equality observed |
| test_data.test | 10 | 0.000818s | 0.000783s | 0.000785s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000824s | 0.000809s | 0.000792s | byte equality observed |
| test_detail_endian.test | 10 | 0.000822s | 0.000806s | 0.000815s | byte equality observed |
| test_detail_md5.test | 10 | 0.000841s | 0.000831s | 0.000845s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000823s | 0.000795s | 0.000819s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005387s | 0.006435s | 0.005734s | byte equality observed |
| test_entropy_error.test | 10 | 0.000739s | 0.000740s | 0.000746s | byte equality observed |
| test_from_chars.test | 10 | 0.000749s | 0.000737s | 0.000753s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000814s | 0.000809s | 0.000820s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000808s | 0.000847s | 0.000809s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000814s | 0.000803s | 0.000820s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000808s | 0.000787s | 0.000821s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000821s | 0.000790s | 0.000801s | byte equality observed |
| test_hash.test | 10 | 0.000819s | 0.000810s | 0.000825s | byte equality observed |
| test_hash_value.test | 6 | 0.003241s | 0.003190s | 0.003120s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000759s | 0.000757s | 0.000761s | byte equality observed |
| test_include1.test | 10 | 0.000356s | 0.000343s | 0.000755s | byte equality observed |
| test_io.test | 10 | 0.000864s | 0.000861s | 0.000851s | byte equality observed |
| test_io_2.test | 10 | 0.000899s | 0.000899s | 0.000873s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000908s | 0.000885s | 0.000874s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000876s | 0.000858s | 0.000844s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000819s | 0.000790s | 0.000786s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000846s | 0.000823s | 0.000826s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000834s | 0.000786s | 0.000822s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000852s | 0.000834s | 0.000831s | byte equality observed |
| test_namespaces.test | 10 | 0.000810s | 0.000809s | 0.000815s | byte equality observed |
| test_nil_generator.test | 10 | 0.000792s | 0.000793s | 0.000803s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000762s | 0.000750s | 0.000765s | byte equality observed |
| test_random_generator.test | 5 | 0.003827s | 0.003839s | 0.003832s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000775s | 0.000763s | 0.000744s | byte equality observed |
| test_serialization.test | 10 | 0.000884s | 0.000881s | 0.000861s | byte equality observed |
| test_std_unordered.test | 10 | 0.000861s | 0.000885s | 0.000836s | byte equality observed |
| test_string_generator.test | 10 | 0.000875s | 0.000881s | 0.000858s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000815s | 0.000811s | 0.000795s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000816s | 0.000836s | 0.000811s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000794s | 0.000832s | 0.000785s | byte equality observed |
| test_tagging.test | 10 | 0.000827s | 0.000831s | 0.000820s | byte equality observed |
| test_time_generator.test | 10 | 0.000822s | 0.000837s | 0.000851s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001141s | 0.001208s | 0.001237s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.000993s | 0.001032s | 0.001035s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004785s | 0.004410s | 0.004535s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001183s | 0.001259s | 0.001281s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001009s | 0.001065s | 0.001030s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004516s | 0.004272s | 0.004419s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000988s | 0.001044s | 0.001042s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000864s | 0.000864s | 0.000861s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002364s | 0.002365s | 0.002358s | byte equality observed |
| test_to_chars.test | 10 | 0.000819s | 0.000806s | 0.000805s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000796s | 0.000770s | 0.000774s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000868s | 0.000811s | 0.000824s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000828s | 0.000799s | 0.000842s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000825s | 0.000800s | 0.000834s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000854s | 0.000853s | 0.000850s | byte equality observed |
| test_uuid.test | 10 | 0.000803s | 0.000791s | 0.000792s | byte equality observed |
| test_uuid_2.test | 10 | 0.000819s | 0.000799s | 0.000797s | byte equality observed |
| test_uuid_3.test | 10 | 0.000789s | 0.000833s | 0.000784s | byte equality observed |
| test_uuid_class.test | 10 | 0.000849s | 0.000839s | 0.000820s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000776s | 0.000822s | 0.000782s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000811s | 0.000832s | 0.000801s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000805s | 0.000803s | 0.000796s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000825s | 0.000794s | 0.000786s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000821s | 0.000822s | 0.000800s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000954s | 0.000963s | 0.000983s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000894s | 0.000879s | 0.000842s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000810s | 0.000798s | 0.000781s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000815s | 0.000828s | 0.000801s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000804s | 0.000838s | 0.000799s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
