# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.336759 | 0.814145 | 1.120453 | 0.000508 | 0.000586 | 0.001217 |
| test_uuid.test | RUN | 0.208190 | 0.680457 | 0.792798 | 0.001273 | 0.001405 | 0.001350 |
| test_uuid_no_simd.test | RUN | 0.211847 | 0.648392 | 0.715715 | 0.001322 | 0.001150 | 0.001346 |
| test_uuid_2.test | RUN | 0.151329 | 0.494207 | 0.530940 | 0.001362 | 0.001354 | 0.001157 |
| test_uuid_3.test | RUN | 0.124894 | 0.344928 | 0.413232 | 0.001185 | 0.001377 | 0.001254 |
| test_alignment.test | RUN | 0.116352 | 0.303907 | 0.376012 | 0.001376 | 0.001169 | 0.001315 |
| test_alignment_2.test | RUN | 0.113806 | 0.292020 | 0.372078 | 0.001205 | 0.001165 | 0.001244 |
| test_attribute_packed.test | RUN | 0.114987 | 0.305276 | 0.383980 | 0.001224 | 0.001519 | 0.001303 |
| test_pragma_pack.test | RUN | 0.118945 | 0.308402 | 0.382721 | 0.001503 | 0.001448 | 0.001121 |
| test_data.test | RUN | 0.139685 | 0.568914 | 0.539606 | 0.000975 | 0.001393 | 0.001243 |
| test_comparison.test | RUN | 0.198366 | 0.653676 | 0.723664 | 0.001441 | 0.001412 | 0.001146 |
| test_comparison_no_simd.test | RUN | 0.191461 | 0.746308 | 0.671207 | 0.001199 | 0.001311 | 0.001252 |
| test_io.test | RUN | 0.259340 | 1.294115 | 1.141438 | 0.001442 | 0.001615 | 0.001482 |
| test_io_no_simd.test | RUN | 0.250564 | 1.256089 | 1.061319 | 0.001205 | 0.001393 | 0.001428 |
| test_io_2.test | RUN | 0.207971 | 1.324858 | 0.786074 | 0.001368 | 0.001492 | 0.001360 |
| test_io_2_no_simd.test | RUN | 0.182387 | 1.243630 | 0.717539 | 0.001520 | 0.001509 | 0.001481 |
| test_to_chars.test | RUN | 0.188050 | 0.841363 | 0.739248 | 0.001434 | 0.001519 | 0.001380 |
| test_to_chars_no_simd.test | RUN | 0.179166 | 0.837624 | 0.707852 | 0.001548 | 0.001530 | 0.001398 |
| test_to_chars_2.test | RUN | 0.232178 | 1.537839 | 0.866562 | 0.001433 | 0.001417 | 0.001439 |
| test_to_chars_2_no_simd.test | RUN | 0.232679 | 1.623769 | 0.796670 | 0.001346 | 0.001246 | 0.001466 |
| test_to_chars_3.test | RUN | 0.154275 | 0.536369 | 0.518602 | 0.001160 | 0.001460 | 0.001177 |
| test_from_chars.test | RUN | 0.176144 | 0.766469 | 0.591734 | 0.001352 | 0.001519 | 0.001200 |
| test_from_chars_no_simd.test | RUN | 0.149678 | 0.610086 | 0.494986 | 0.001150 | 0.001195 | 0.001293 |
| test_from_chars_2.test | RUN | 0.166716 | 0.714686 | 0.587012 | 0.001199 | 0.001208 | 0.001080 |
| test_from_chars_2_no_simd.test | RUN | 0.150200 | 0.536176 | 0.483292 | 0.001345 | 0.001561 | 0.001247 |
| test_uuid_from_string.test | RUN | 0.200016 | 0.790572 | 0.726929 | 0.001440 | 0.001351 | 0.001236 |
| test_uuid_from_string_2.test | RUN | 0.174244 | 0.718928 | 0.612345 | 0.001445 | 0.001884 | 0.001569 |
| test_uuid_from_string_3.test | RUN | 0.177068 | 0.723970 | 0.629937 | 0.001367 | 0.001552 | 0.001589 |
| test_uuid_clock.test | RUN | 0.104028 | 0.291883 | 0.367777 | 0.001397 | 0.001390 | 0.001208 |
| test_nil_generator.test | RUN | 0.124164 | 0.336450 | 0.436595 | 0.001239 | 0.001574 | 0.001431 |
| test_string_generator.test | RUN | 0.165038 | 0.579193 | 0.596433 | 0.001554 | 0.001581 | 0.001530 |
| test_string_generator_2.test | RUN | 0.204236 | 0.812954 | 0.673300 | 0.001364 | 0.001313 | 0.001326 |
| test_random_generator.test | RUN | 0.278129 | 1.571201 | 1.001101 | 0.004289 | 0.004433 | 0.004338 |
| test_random_generator_2.test | RUN | 0.198359 | 0.596368 | 0.690709 | 0.001321 | 0.001500 | 0.001172 |
| test_name_generator.test | RUN | 0.180222 | 2.046940 | 0.735247 | 0.001195 | 0.001572 | 0.001222 |
| test_namespaces.test | RUN | 0.142973 | 0.429158 | 0.487597 | 0.001161 | 0.001414 | 0.001236 |
| test_name_generator_md5.test | RUN | 0.186908 | 0.969153 | 0.704850 | 0.001248 | 0.001442 | 0.001432 |
| test_name_generator_sha1.test | RUN | 0.178412 | 2.997967 | 0.711905 | 0.001412 | 0.001403 | 0.001504 |
| test_time_generator.test | RUN | 0.191062 | 0.601128 | 0.672931 | 0.001289 | 0.001639 | 0.001263 |
| test_time_generator_v1.test | RUN | 0.206420 | 0.666130 | 0.734804 | 0.001697 | 0.001969 | 0.001910 |
| test_time_generator_v1_2.test | RUN | 0.206013 | 0.616215 | 0.697297 | 0.001452 | 0.001744 | 0.001589 |
| test_time_generator_v1_3.test | RUN | 0.227276 | 0.648339 | 0.780734 | 0.004639 | 0.003830 | 0.003545 |
| test_time_generator_v6.test | RUN | 0.207051 | 0.664106 | 0.740000 | 0.001770 | 0.001844 | 0.001693 |
| test_time_generator_v6_2.test | RUN | 0.202850 | 0.628200 | 0.705036 | 0.001456 | 0.001817 | 0.001585 |
| test_time_generator_v6_3.test | RUN | 0.224227 | 0.653239 | 0.781935 | 0.004013 | 0.003305 | 0.004662 |
| test_time_generator_v7.test | RUN | 0.199940 | 0.654040 | 0.706925 | 0.001427 | 0.001592 | 0.001551 |
| test_time_generator_v7_2.test | RUN | 0.183488 | 0.576349 | 0.659720 | 0.001305 | 0.001452 | 0.001287 |
| test_time_generator_v7_3.test | RUN | 0.185221 | 0.734013 | 0.667025 | 0.002677 | 0.003201 | 0.002612 |
| test_serialization.test | RUN | 0.344319 | 1.131076 | 1.231008 | 0.001421 | 0.001486 | 0.001404 |
| test_tagging.test | RUN | 0.187985 | 0.681261 | 0.655961 | 0.001371 | 0.001169 | 0.001260 |
| test_uuid_class.test | RUN | 0.194096 | 0.608229 | 0.699546 | 0.001196 | 0.001256 | 0.001140 |
| test_uuid_in_map.test | RUN | 0.216266 | 0.710933 | 0.772385 | 0.001059 | 0.001477 | 0.001286 |
| test_hash.test | RUN | 0.215310 | 0.635972 | 0.704140 | 0.001289 | 0.001348 | 0.001170 |
| test_hash_value.test | RUN | 0.153803 | 0.438654 | 0.520349 | 0.004185 | 0.004467 | 0.004043 |
| test_std_unordered.test | RUN | 0.206220 | 0.724077 | 0.720724 | 0.001273 | 0.001503 | 0.001269 |
| test_boost_unordered.test | RUN | 0.299061 | 0.927071 | 0.946307 | 0.001207 | 0.001105 | 0.001367 |
| test_detail_md5.test | RUN | 0.135008 | 0.446828 | 0.493669 | 0.001251 | 0.001440 | 0.001224 |
| test_detail_sha1.test | RUN | 0.131740 | 0.580098 | 0.480975 | 0.007162 | 0.008169 | 0.007297 |
| test_detail_endian.test | RUN | 0.097137 | 0.335637 | 0.339965 | 0.001269 | 0.001634 | 0.001303 |
| test_detail_chacha20.test | RUN | 0.107279 | 0.403313 | 0.355068 | 0.001163 | 0.001250 | 0.001359 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.094501 | 0.224266 | 0.283203 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.095949 | 0.224499 | 0.280765 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.161684 | 0.447855 | 0.518942 | 0.001327 | 0.001382 | 0.001283 |
| test_bench_random.test | RUN | 0.180390 | 0.601553 | 0.694187 | 0.016595 | 0.016610 | 0.016290 |
| test_entropy_error.test | RUN | 0.090840 | 0.268522 | 0.313320 | 0.001327 | 0.001425 | 0.001386 |
| test_detail_random_provider.test | RUN | 0.180635 | 0.456330 | 0.585873 | 0.001285 | 0.001489 | 0.001188 |
| test_constants.test | RUN | 0.140613 | 0.425215 | 0.476829 | 0.001102 | 0.001598 | 0.001107 |
| test_uuid_cx.test | COMPILE | 0.078821 | 0.192829 | 0.233824 | — | — | — |
| test_uuid_cx2.test | RUN | 0.149684 | 0.495363 | 0.527994 | 0.001349 | 0.001336 | 0.001429 |
| test_uuid_cx3.test | RUN | 0.132076 | 0.373339 | 0.469206 | 0.001241 | 0.001346 | 0.001191 |
| test_uuid_cx3_no_simd.test | RUN | 0.120944 | 0.357967 | 0.415047 | 0.001272 | 0.001308 | 0.001368 |
| test_hash_value_cx.test | RUN | 0.120041 | 0.336351 | 0.413490 | 0.001113 | 0.001407 | 0.001232 |
| test_string_generator_cx.test | RUN | 0.143600 | 0.431311 | 0.484989 | 0.001256 | 0.001284 | 0.001347 |
| test_string_generator_cx2.test | RUN | 0.184228 | 0.531307 | 0.565710 | 0.001208 | 0.001324 | 0.001047 |
| test_constants_cx.test | RUN | 0.114981 | 0.292435 | 0.384480 | 0.001436 | 0.001327 | 0.001156 |
| test_from_chars_cx.test | RUN | 0.154929 | 0.562843 | 0.524749 | 0.001334 | 0.001439 | 0.001199 |
| test_from_chars_cx2.test | RUN | 0.164952 | 0.701639 | 0.579810 | 0.001280 | 0.001270 | 0.001187 |
| test_to_chars_cx.test | RUN | 0.160901 | 0.652290 | 0.621667 | 0.001456 | 0.001373 | 0.000942 |
| test_uuid_from_string_cx.test | RUN | 0.171601 | 0.652926 | 0.606668 | 0.000862 | 0.001049 | 0.000914 |
| quick.test | RUN | 0.173069 | 0.500658 | 0.599743 | 0.000914 | 0.001036 | 0.000898 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.009× | 1.002×, 1.015× | 0.996× |
| clang | 1.004× | 0.995×, 1.013× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000814s | 0.000799s | 0.000811s | byte equality observed |
| test_alignment.test | 10 | 0.000786s | 0.000793s | 0.000799s | byte equality observed |
| test_alignment_2.test | 10 | 0.000810s | 0.000799s | 0.000787s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000743s | 0.000779s | 0.000804s | byte equality observed |
| test_bench_random.test | 2 | 0.015891s | 0.015880s | 0.015856s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000798s | 0.000795s | 0.000798s | byte equality observed |
| test_comparison.test | 10 | 0.000771s | 0.000747s | 0.000763s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000813s | 0.000785s | 0.000787s | byte equality observed |
| test_constants.test | 10 | 0.000810s | 0.000784s | 0.000812s | byte equality observed |
| test_constants_cx.test | 10 | 0.000817s | 0.000778s | 0.000800s | byte equality observed |
| test_data.test | 10 | 0.000805s | 0.000815s | 0.000807s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000778s | 0.000820s | 0.000811s | byte equality observed |
| test_detail_endian.test | 10 | 0.000800s | 0.000828s | 0.000805s | byte equality observed |
| test_detail_md5.test | 10 | 0.000826s | 0.000855s | 0.000801s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000850s | 0.000833s | 0.000786s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005356s | 0.006452s | 0.005683s | byte equality observed |
| test_entropy_error.test | 10 | 0.000766s | 0.000738s | 0.000747s | byte equality observed |
| test_from_chars.test | 10 | 0.000756s | 0.000721s | 0.000787s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000812s | 0.000808s | 0.000819s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000801s | 0.000841s | 0.000822s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000784s | 0.000806s | 0.000819s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000799s | 0.000809s | 0.000809s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000799s | 0.000814s | 0.000791s | byte equality observed |
| test_hash.test | 10 | 0.000811s | 0.000811s | 0.000807s | byte equality observed |
| test_hash_value.test | 6 | 0.003216s | 0.003201s | 0.003165s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000758s | 0.000762s | 0.000771s | byte equality observed |
| test_include1.test | 10 | 0.000351s | 0.000352s | 0.000748s | byte equality observed |
| test_io.test | 10 | 0.000853s | 0.000824s | 0.000859s | byte equality observed |
| test_io_2.test | 10 | 0.000892s | 0.000888s | 0.000909s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000914s | 0.000908s | 0.000921s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000870s | 0.000859s | 0.000863s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000796s | 0.000786s | 0.000812s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000835s | 0.000825s | 0.000821s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000859s | 0.000828s | 0.000808s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000854s | 0.000851s | 0.000817s | byte equality observed |
| test_namespaces.test | 10 | 0.000805s | 0.000803s | 0.000804s | byte equality observed |
| test_nil_generator.test | 10 | 0.000820s | 0.000788s | 0.000811s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000762s | 0.000756s | 0.000789s | byte equality observed |
| test_random_generator.test | 5 | 0.003734s | 0.003725s | 0.003754s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000775s | 0.000755s | 0.000750s | byte equality observed |
| test_serialization.test | 10 | 0.000886s | 0.000873s | 0.000874s | byte equality observed |
| test_std_unordered.test | 10 | 0.000887s | 0.000852s | 0.000851s | byte equality observed |
| test_string_generator.test | 10 | 0.000909s | 0.000890s | 0.000862s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000833s | 0.000804s | 0.000818s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000829s | 0.000806s | 0.000788s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000828s | 0.000816s | 0.000809s | byte equality observed |
| test_tagging.test | 10 | 0.000850s | 0.000828s | 0.000825s | byte equality observed |
| test_time_generator.test | 10 | 0.000849s | 0.000829s | 0.000829s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001153s | 0.001227s | 0.001245s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001009s | 0.001036s | 0.001038s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004396s | 0.004221s | 0.004594s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001183s | 0.001241s | 0.001267s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001006s | 0.001049s | 0.001051s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004443s | 0.004314s | 0.004266s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001016s | 0.001031s | 0.001049s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000859s | 0.000870s | 0.000877s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002308s | 0.002318s | 0.002339s | byte equality observed |
| test_to_chars.test | 10 | 0.000818s | 0.000818s | 0.000810s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000806s | 0.000792s | 0.000786s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000850s | 0.000833s | 0.000813s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000830s | 0.000846s | 0.000823s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000823s | 0.000815s | 0.000837s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000883s | 0.000866s | 0.000842s | byte equality observed |
| test_uuid.test | 10 | 0.000808s | 0.000842s | 0.000821s | byte equality observed |
| test_uuid_2.test | 10 | 0.000844s | 0.000850s | 0.000814s | byte equality observed |
| test_uuid_3.test | 10 | 0.000811s | 0.000836s | 0.000786s | byte equality observed |
| test_uuid_class.test | 10 | 0.000833s | 0.000838s | 0.000810s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000803s | 0.000840s | 0.000777s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000826s | 0.000805s | 0.000792s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000818s | 0.000781s | 0.000788s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000813s | 0.000803s | 0.000805s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000819s | 0.000815s | 0.000806s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000970s | 0.000971s | 0.000993s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000896s | 0.000895s | 0.000889s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000786s | 0.000827s | 0.000798s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000813s | 0.000822s | 0.000815s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000816s | 0.000816s | 0.000807s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
