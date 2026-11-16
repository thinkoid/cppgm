# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.338290 | 0.791981 | 1.080666 | 0.000472 | 0.000459 | 0.001267 |
| test_uuid.test | RUN | 0.210719 | 0.662871 | 0.785714 | 0.001258 | 0.001222 | 0.001225 |
| test_uuid_no_simd.test | RUN | 0.212349 | 0.639568 | 0.698044 | 0.001345 | 0.001229 | 0.001245 |
| test_uuid_2.test | RUN | 0.148983 | 0.479713 | 0.520514 | 0.001166 | 0.001384 | 0.001064 |
| test_uuid_3.test | RUN | 0.122482 | 0.335540 | 0.414506 | 0.001137 | 0.001185 | 0.001383 |
| test_alignment.test | RUN | 0.108046 | 0.299321 | 0.376029 | 0.001308 | 0.001229 | 0.001232 |
| test_alignment_2.test | RUN | 0.111297 | 0.292983 | 0.372954 | 0.001146 | 0.001234 | 0.001300 |
| test_attribute_packed.test | RUN | 0.113583 | 0.300965 | 0.368008 | 0.001104 | 0.001224 | 0.001095 |
| test_pragma_pack.test | RUN | 0.114487 | 0.300230 | 0.367329 | 0.001158 | 0.001313 | 0.001087 |
| test_data.test | RUN | 0.136227 | 0.551404 | 0.534700 | 0.001115 | 0.001268 | 0.001241 |
| test_comparison.test | RUN | 0.187756 | 0.639155 | 0.711235 | 0.001136 | 0.001400 | 0.001232 |
| test_comparison_no_simd.test | RUN | 0.190988 | 0.729364 | 0.670228 | 0.001255 | 0.001278 | 0.001202 |
| test_io.test | RUN | 0.253661 | 1.245721 | 1.114754 | 0.001251 | 0.001417 | 0.001496 |
| test_io_no_simd.test | RUN | 0.250099 | 1.225348 | 1.049812 | 0.001224 | 0.001292 | 0.001363 |
| test_io_2.test | RUN | 0.200752 | 1.270807 | 0.772374 | 0.001332 | 0.001431 | 0.001339 |
| test_io_2_no_simd.test | RUN | 0.181201 | 1.204542 | 0.707899 | 0.001541 | 0.001228 | 0.001410 |
| test_to_chars.test | RUN | 0.187731 | 0.799065 | 0.718789 | 0.001304 | 0.001344 | 0.001394 |
| test_to_chars_no_simd.test | RUN | 0.180691 | 0.815515 | 0.702827 | 0.001293 | 0.001488 | 0.001391 |
| test_to_chars_2.test | RUN | 0.227946 | 1.473231 | 0.856542 | 0.001201 | 0.001200 | 0.001296 |
| test_to_chars_2_no_simd.test | RUN | 0.234754 | 1.574782 | 0.786193 | 0.001182 | 0.001354 | 0.001238 |
| test_to_chars_3.test | RUN | 0.151772 | 0.515795 | 0.529263 | 0.001174 | 0.001299 | 0.001219 |
| test_from_chars.test | RUN | 0.177975 | 0.745114 | 0.592913 | 0.001346 | 0.001199 | 0.001220 |
| test_from_chars_no_simd.test | RUN | 0.150259 | 0.594327 | 0.493629 | 0.001352 | 0.001183 | 0.001196 |
| test_from_chars_2.test | RUN | 0.165828 | 0.699903 | 0.578159 | 0.001124 | 0.001179 | 0.001016 |
| test_from_chars_2_no_simd.test | RUN | 0.149131 | 0.530578 | 0.474964 | 0.001153 | 0.001237 | 0.001153 |
| test_uuid_from_string.test | RUN | 0.200636 | 0.768908 | 0.709852 | 0.001206 | 0.001198 | 0.001229 |
| test_uuid_from_string_2.test | RUN | 0.173225 | 0.700212 | 0.601787 | 0.001449 | 0.001482 | 0.001476 |
| test_uuid_from_string_3.test | RUN | 0.174646 | 0.700395 | 0.616897 | 0.001243 | 0.001164 | 0.001422 |
| test_uuid_clock.test | RUN | 0.102606 | 0.282268 | 0.359058 | 0.000976 | 0.001406 | 0.001179 |
| test_nil_generator.test | RUN | 0.119883 | 0.334122 | 0.427573 | 0.001274 | 0.001161 | 0.001278 |
| test_string_generator.test | RUN | 0.160248 | 0.562695 | 0.589165 | 0.001292 | 0.001337 | 0.001238 |
| test_string_generator_2.test | RUN | 0.201467 | 0.785937 | 0.652683 | 0.001134 | 0.001207 | 0.001200 |
| test_random_generator.test | RUN | 0.266234 | 1.516289 | 0.999268 | 0.004148 | 0.004261 | 0.004252 |
| test_random_generator_2.test | RUN | 0.195571 | 0.584977 | 0.667379 | 0.001281 | 0.001306 | 0.001203 |
| test_name_generator.test | RUN | 0.176261 | 1.980367 | 0.728573 | 0.001184 | 0.001371 | 0.001122 |
| test_namespaces.test | RUN | 0.146108 | 0.413979 | 0.480136 | 0.001143 | 0.001226 | 0.001168 |
| test_name_generator_md5.test | RUN | 0.183670 | 0.939943 | 0.709244 | 0.001274 | 0.001371 | 0.001384 |
| test_name_generator_sha1.test | RUN | 0.174948 | 2.919416 | 0.695965 | 0.001250 | 0.001320 | 0.001310 |
| test_time_generator.test | RUN | 0.183099 | 0.572596 | 0.663448 | 0.001327 | 0.001451 | 0.001299 |
| test_time_generator_v1.test | RUN | 0.206336 | 0.637867 | 0.739360 | 0.001626 | 0.001740 | 0.001858 |
| test_time_generator_v1_2.test | RUN | 0.202676 | 0.604895 | 0.693306 | 0.001426 | 0.001530 | 0.001511 |
| test_time_generator_v1_3.test | RUN | 0.220977 | 0.632150 | 0.765895 | 0.003798 | 0.003544 | 0.004110 |
| test_time_generator_v6.test | RUN | 0.208700 | 0.631078 | 0.734655 | 0.001428 | 0.001687 | 0.001835 |
| test_time_generator_v6_2.test | RUN | 0.199244 | 0.607422 | 0.701429 | 0.001406 | 0.001689 | 0.001592 |
| test_time_generator_v6_3.test | RUN | 0.225370 | 0.629986 | 0.784106 | 0.004426 | 0.004872 | 0.004087 |
| test_time_generator_v7.test | RUN | 0.197290 | 0.632049 | 0.708525 | 0.001444 | 0.001467 | 0.001670 |
| test_time_generator_v7_2.test | RUN | 0.182641 | 0.557405 | 0.649232 | 0.001243 | 0.001277 | 0.001339 |
| test_time_generator_v7_3.test | RUN | 0.186793 | 0.718097 | 0.668286 | 0.002759 | 0.002799 | 0.002659 |
| test_serialization.test | RUN | 0.337801 | 1.076500 | 1.229123 | 0.001312 | 0.001753 | 0.001316 |
| test_tagging.test | RUN | 0.185012 | 0.686230 | 0.651498 | 0.001221 | 0.001346 | 0.001225 |
| test_uuid_class.test | RUN | 0.194835 | 0.601739 | 0.694454 | 0.001278 | 0.001416 | 0.001289 |
| test_uuid_in_map.test | RUN | 0.216432 | 0.705121 | 0.758720 | 0.001231 | 0.001369 | 0.001162 |
| test_hash.test | RUN | 0.217945 | 0.626928 | 0.695378 | 0.001149 | 0.001299 | 0.001169 |
| test_hash_value.test | RUN | 0.154811 | 0.445220 | 0.511971 | 0.004242 | 0.003892 | 0.004148 |
| test_std_unordered.test | RUN | 0.206869 | 0.711467 | 0.715498 | 0.001346 | 0.001506 | 0.001380 |
| test_boost_unordered.test | RUN | 0.295909 | 0.924273 | 0.926611 | 0.001147 | 0.001443 | 0.001072 |
| test_detail_md5.test | RUN | 0.133081 | 0.446584 | 0.503860 | 0.001164 | 0.001280 | 0.001218 |
| test_detail_sha1.test | RUN | 0.129911 | 0.564697 | 0.464935 | 0.007954 | 0.008437 | 0.007054 |
| test_detail_endian.test | RUN | 0.098217 | 0.316157 | 0.345673 | 0.001242 | 0.001375 | 0.001224 |
| test_detail_chacha20.test | RUN | 0.112320 | 0.400814 | 0.360121 | 0.001255 | 0.001192 | 0.001166 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.094322 | 0.217325 | 0.279088 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.096263 | 0.221731 | 0.272485 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.161767 | 0.442923 | 0.509184 | 0.001321 | 0.001368 | 0.001120 |
| test_bench_random.test | RUN | 0.185150 | 0.586904 | 0.674023 | 0.016174 | 0.016548 | 0.016232 |
| test_entropy_error.test | RUN | 0.095312 | 0.263048 | 0.306233 | 0.000918 | 0.001386 | 0.001061 |
| test_detail_random_provider.test | RUN | 0.179584 | 0.457173 | 0.576179 | 0.001108 | 0.001356 | 0.001259 |
| test_constants.test | RUN | 0.144196 | 0.434349 | 0.465667 | 0.001108 | 0.001360 | 0.001079 |
| test_uuid_cx.test | COMPILE | 0.079036 | 0.187596 | 0.234215 | — | — | — |
| test_uuid_cx2.test | RUN | 0.150045 | 0.484605 | 0.503112 | 0.001270 | 0.001352 | 0.001175 |
| test_uuid_cx3.test | RUN | 0.129240 | 0.376876 | 0.468079 | 0.001245 | 0.001415 | 0.001144 |
| test_uuid_cx3_no_simd.test | RUN | 0.121359 | 0.353482 | 0.400396 | 0.000970 | 0.001286 | 0.001078 |
| test_hash_value_cx.test | RUN | 0.123913 | 0.335714 | 0.411883 | 0.001077 | 0.001296 | 0.000995 |
| test_string_generator_cx.test | RUN | 0.145087 | 0.428884 | 0.468485 | 0.001210 | 0.001229 | 0.001412 |
| test_string_generator_cx2.test | RUN | 0.179647 | 0.522182 | 0.549867 | 0.001193 | 0.001343 | 0.001139 |
| test_constants_cx.test | RUN | 0.116291 | 0.286321 | 0.384470 | 0.001252 | 0.001486 | 0.001141 |
| test_from_chars_cx.test | RUN | 0.159107 | 0.567394 | 0.504839 | 0.001073 | 0.001365 | 0.001151 |
| test_from_chars_cx2.test | RUN | 0.159219 | 0.699860 | 0.564572 | 0.001186 | 0.001402 | 0.001395 |
| test_to_chars_cx.test | RUN | 0.160270 | 0.654433 | 0.620137 | 0.001185 | 0.001368 | 0.001335 |
| test_uuid_from_string_cx.test | RUN | 0.170213 | 0.647999 | 0.573699 | 0.000837 | 0.000972 | 0.000844 |
| quick.test | RUN | 0.175313 | 0.496451 | 0.529172 | 0.000820 | 0.000917 | 0.000843 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.000×, 1.004× | 0.996× |
| clang | 1.004× | 1.010×, 0.998× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000795s | 0.000812s | 0.000790s | byte equality observed |
| test_alignment.test | 10 | 0.000793s | 0.000775s | 0.000820s | byte equality observed |
| test_alignment_2.test | 10 | 0.000791s | 0.000788s | 0.000785s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000746s | 0.000743s | 0.000746s | byte equality observed |
| test_bench_random.test | 2 | 0.015880s | 0.015839s | 0.015823s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000786s | 0.000789s | 0.000781s | byte equality observed |
| test_comparison.test | 10 | 0.000755s | 0.000756s | 0.000740s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000815s | 0.000786s | 0.000792s | byte equality observed |
| test_constants.test | 10 | 0.000815s | 0.000779s | 0.000778s | byte equality observed |
| test_constants_cx.test | 10 | 0.000765s | 0.000773s | 0.000773s | byte equality observed |
| test_data.test | 10 | 0.000792s | 0.000800s | 0.000780s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000796s | 0.000808s | 0.000785s | byte equality observed |
| test_detail_endian.test | 10 | 0.000810s | 0.000788s | 0.000788s | byte equality observed |
| test_detail_md5.test | 10 | 0.000848s | 0.000797s | 0.000826s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000821s | 0.000797s | 0.000797s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005354s | 0.006384s | 0.005610s | byte equality observed |
| test_entropy_error.test | 10 | 0.000751s | 0.000742s | 0.000734s | byte equality observed |
| test_from_chars.test | 10 | 0.000744s | 0.000745s | 0.000746s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000813s | 0.000802s | 0.000794s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000798s | 0.000783s | 0.000780s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000811s | 0.000790s | 0.000806s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000833s | 0.000807s | 0.000824s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000822s | 0.000822s | 0.000811s | byte equality observed |
| test_hash.test | 10 | 0.000823s | 0.000828s | 0.000811s | byte equality observed |
| test_hash_value.test | 6 | 0.003233s | 0.003232s | 0.003110s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000753s | 0.000742s | 0.000753s | byte equality observed |
| test_include1.test | 10 | 0.000352s | 0.000343s | 0.000724s | byte equality observed |
| test_io.test | 10 | 0.000827s | 0.000856s | 0.000838s | byte equality observed |
| test_io_2.test | 10 | 0.000896s | 0.000912s | 0.000885s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000894s | 0.000915s | 0.000855s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000843s | 0.000884s | 0.000815s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000817s | 0.000831s | 0.000781s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000799s | 0.000817s | 0.000790s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000823s | 0.000824s | 0.000810s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000838s | 0.000840s | 0.000832s | byte equality observed |
| test_namespaces.test | 10 | 0.000795s | 0.000816s | 0.000821s | byte equality observed |
| test_nil_generator.test | 10 | 0.000786s | 0.000825s | 0.000787s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000759s | 0.000741s | 0.000755s | byte equality observed |
| test_random_generator.test | 5 | 0.003725s | 0.003713s | 0.003748s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000769s | 0.000740s | 0.000740s | byte equality observed |
| test_serialization.test | 10 | 0.000860s | 0.000864s | 0.000861s | byte equality observed |
| test_std_unordered.test | 10 | 0.000866s | 0.000871s | 0.000872s | byte equality observed |
| test_string_generator.test | 10 | 0.000859s | 0.000870s | 0.000855s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000804s | 0.000823s | 0.000791s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000807s | 0.000818s | 0.000807s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000802s | 0.000810s | 0.000823s | byte equality observed |
| test_tagging.test | 10 | 0.000810s | 0.000827s | 0.000831s | byte equality observed |
| test_time_generator.test | 10 | 0.000826s | 0.000803s | 0.000844s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001115s | 0.001205s | 0.001214s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001005s | 0.001024s | 0.001047s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004522s | 0.004089s | 0.004312s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001145s | 0.001214s | 0.001229s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001010s | 0.001047s | 0.001054s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004575s | 0.004175s | 0.004669s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000996s | 0.001029s | 0.001036s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000859s | 0.000848s | 0.000861s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002297s | 0.002308s | 0.002296s | byte equality observed |
| test_to_chars.test | 10 | 0.000810s | 0.000814s | 0.000811s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000788s | 0.000789s | 0.000785s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000818s | 0.000809s | 0.000812s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000804s | 0.000784s | 0.000799s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000804s | 0.000818s | 0.000806s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000834s | 0.000845s | 0.000833s | byte equality observed |
| test_uuid.test | 10 | 0.000804s | 0.000823s | 0.000794s | byte equality observed |
| test_uuid_2.test | 10 | 0.000810s | 0.000816s | 0.000795s | byte equality observed |
| test_uuid_3.test | 10 | 0.000794s | 0.000813s | 0.000834s | byte equality observed |
| test_uuid_class.test | 10 | 0.000833s | 0.000822s | 0.000787s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000786s | 0.000819s | 0.000789s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000793s | 0.000823s | 0.000780s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000787s | 0.000802s | 0.000778s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000792s | 0.000799s | 0.000794s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000811s | 0.000823s | 0.000804s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000963s | 0.000953s | 0.000978s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000847s | 0.000877s | 0.000850s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000802s | 0.000780s | 0.000795s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000818s | 0.000802s | 0.000793s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000813s | 0.000802s | 0.000808s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43801643681).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
