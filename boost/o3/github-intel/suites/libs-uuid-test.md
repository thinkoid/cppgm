# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.346522 | 0.796109 | 1.089564 | 0.000547 | 0.000520 | 0.001190 |
| test_uuid.test | RUN | 0.224181 | 0.666492 | 0.775639 | 0.001244 | 0.001380 | 0.001354 |
| test_uuid_no_simd.test | RUN | 0.222137 | 0.652842 | 0.714448 | 0.001369 | 0.001252 | 0.001183 |
| test_uuid_2.test | RUN | 0.155034 | 0.480317 | 0.516992 | 0.001310 | 0.001359 | 0.001183 |
| test_uuid_3.test | RUN | 0.132397 | 0.333331 | 0.421883 | 0.001281 | 0.001320 | 0.001140 |
| test_alignment.test | RUN | 0.117236 | 0.305423 | 0.370931 | 0.001488 | 0.001170 | 0.001200 |
| test_alignment_2.test | RUN | 0.115445 | 0.287572 | 0.382417 | 0.001254 | 0.001231 | 0.001300 |
| test_attribute_packed.test | RUN | 0.120271 | 0.301445 | 0.375548 | 0.001414 | 0.001270 | 0.001147 |
| test_pragma_pack.test | RUN | 0.119157 | 0.303459 | 0.376928 | 0.001384 | 0.001301 | 0.001112 |
| test_data.test | RUN | 0.143889 | 0.567931 | 0.543366 | 0.001286 | 0.001140 | 0.001153 |
| test_comparison.test | RUN | 0.205569 | 0.648787 | 0.738107 | 0.001534 | 0.001274 | 0.001276 |
| test_comparison_no_simd.test | RUN | 0.205691 | 0.737094 | 0.662845 | 0.001250 | 0.001200 | 0.001388 |
| test_io.test | RUN | 0.273218 | 1.259591 | 1.121997 | 0.001503 | 0.001405 | 0.001410 |
| test_io_no_simd.test | RUN | 0.258070 | 1.253063 | 1.058302 | 0.001274 | 0.001261 | 0.001372 |
| test_io_2.test | RUN | 0.208286 | 1.298162 | 0.784487 | 0.001300 | 0.001440 | 0.001260 |
| test_io_2_no_simd.test | RUN | 0.189873 | 1.230038 | 0.712882 | 0.001374 | 0.001516 | 0.001472 |
| test_to_chars.test | RUN | 0.196630 | 0.818262 | 0.724762 | 0.001458 | 0.001324 | 0.001388 |
| test_to_chars_no_simd.test | RUN | 0.185111 | 0.826644 | 0.705749 | 0.001579 | 0.001426 | 0.001283 |
| test_to_chars_2.test | RUN | 0.234646 | 1.502436 | 0.865940 | 0.001231 | 0.001417 | 0.001364 |
| test_to_chars_2_no_simd.test | RUN | 0.239464 | 1.582739 | 0.800817 | 0.001207 | 0.001434 | 0.001383 |
| test_to_chars_3.test | RUN | 0.153011 | 0.520268 | 0.524903 | 0.001198 | 0.001405 | 0.001017 |
| test_from_chars.test | RUN | 0.177430 | 0.752781 | 0.603645 | 0.001264 | 0.001122 | 0.001338 |
| test_from_chars_no_simd.test | RUN | 0.154763 | 0.599174 | 0.500597 | 0.001252 | 0.001252 | 0.001320 |
| test_from_chars_2.test | RUN | 0.173263 | 0.700803 | 0.587770 | 0.001195 | 0.001279 | 0.001373 |
| test_from_chars_2_no_simd.test | RUN | 0.149280 | 0.528721 | 0.483512 | 0.001200 | 0.001264 | 0.001139 |
| test_uuid_from_string.test | RUN | 0.204362 | 0.781891 | 0.715011 | 0.001159 | 0.001211 | 0.001227 |
| test_uuid_from_string_2.test | RUN | 0.179266 | 0.704623 | 0.598742 | 0.001548 | 0.001596 | 0.001624 |
| test_uuid_from_string_3.test | RUN | 0.181859 | 0.704054 | 0.619917 | 0.001262 | 0.001290 | 0.001337 |
| test_uuid_clock.test | RUN | 0.105462 | 0.284081 | 0.368165 | 0.001157 | 0.001235 | 0.001139 |
| test_nil_generator.test | RUN | 0.127045 | 0.333211 | 0.431568 | 0.001383 | 0.001323 | 0.001187 |
| test_string_generator.test | RUN | 0.169517 | 0.569016 | 0.590814 | 0.001429 | 0.001499 | 0.001414 |
| test_string_generator_2.test | RUN | 0.208457 | 0.788159 | 0.669588 | 0.001366 | 0.001214 | 0.001238 |
| test_random_generator.test | RUN | 0.287977 | 1.528848 | 1.018868 | 0.004053 | 0.004285 | 0.004260 |
| test_random_generator_2.test | RUN | 0.200937 | 0.585036 | 0.675831 | 0.001160 | 0.001425 | 0.001254 |
| test_name_generator.test | RUN | 0.181464 | 2.019298 | 0.732260 | 0.001129 | 0.001454 | 0.001282 |
| test_namespaces.test | RUN | 0.147040 | 0.420707 | 0.489263 | 0.001157 | 0.001153 | 0.001213 |
| test_name_generator_md5.test | RUN | 0.187094 | 0.948047 | 0.699516 | 0.001284 | 0.001498 | 0.001289 |
| test_name_generator_sha1.test | RUN | 0.179367 | 2.967588 | 0.707149 | 0.001233 | 0.001409 | 0.001252 |
| test_time_generator.test | RUN | 0.189380 | 0.586978 | 0.666826 | 0.001178 | 0.001406 | 0.001295 |
| test_time_generator_v1.test | RUN | 0.216523 | 0.653965 | 0.729084 | 0.001636 | 0.001816 | 0.001724 |
| test_time_generator_v1_2.test | RUN | 0.209779 | 0.613016 | 0.707838 | 0.001566 | 0.001625 | 0.001663 |
| test_time_generator_v1_3.test | RUN | 0.231107 | 0.634002 | 0.781865 | 0.002998 | 0.004134 | 0.003648 |
| test_time_generator_v6.test | RUN | 0.212699 | 0.646881 | 0.734050 | 0.001806 | 0.001740 | 0.001738 |
| test_time_generator_v6_2.test | RUN | 0.212456 | 0.620522 | 0.699074 | 0.001397 | 0.001637 | 0.001596 |
| test_time_generator_v6_3.test | RUN | 0.231220 | 0.636374 | 0.791541 | 0.004000 | 0.004401 | 0.003788 |
| test_time_generator_v7.test | RUN | 0.205387 | 0.639505 | 0.716922 | 0.001310 | 0.001531 | 0.001524 |
| test_time_generator_v7_2.test | RUN | 0.190735 | 0.562297 | 0.660319 | 0.001313 | 0.001532 | 0.001286 |
| test_time_generator_v7_3.test | RUN | 0.189685 | 0.726358 | 0.658713 | 0.002736 | 0.002865 | 0.002614 |
| test_serialization.test | RUN | 0.347821 | 1.110328 | 1.232804 | 0.001507 | 0.001232 | 0.001410 |
| test_tagging.test | RUN | 0.196475 | 0.671282 | 0.671155 | 0.001478 | 0.001182 | 0.001361 |
| test_uuid_class.test | RUN | 0.201661 | 0.603275 | 0.711475 | 0.001438 | 0.001068 | 0.001312 |
| test_uuid_in_map.test | RUN | 0.224735 | 0.695444 | 0.775268 | 0.001268 | 0.001230 | 0.001470 |
| test_hash.test | RUN | 0.220104 | 0.620674 | 0.712459 | 0.001300 | 0.001357 | 0.001350 |
| test_hash_value.test | RUN | 0.158225 | 0.430447 | 0.530122 | 0.003959 | 0.004228 | 0.004304 |
| test_std_unordered.test | RUN | 0.212049 | 0.703205 | 0.728469 | 0.001413 | 0.001515 | 0.001308 |
| test_boost_unordered.test | RUN | 0.299469 | 0.916272 | 0.950978 | 0.001228 | 0.001294 | 0.001274 |
| test_detail_md5.test | RUN | 0.135872 | 0.441454 | 0.515098 | 0.001200 | 0.001344 | 0.001267 |
| test_detail_sha1.test | RUN | 0.133354 | 0.565834 | 0.474280 | 0.008242 | 0.008383 | 0.007122 |
| test_detail_endian.test | RUN | 0.102818 | 0.323966 | 0.360759 | 0.001211 | 0.001333 | 0.001227 |
| test_detail_chacha20.test | RUN | 0.115947 | 0.403813 | 0.362330 | 0.001383 | 0.001347 | 0.001054 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.099377 | 0.224166 | 0.284225 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.099527 | 0.221074 | 0.284943 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.168412 | 0.443199 | 0.516619 | 0.001315 | 0.001193 | 0.001207 |
| test_bench_random.test | RUN | 0.186845 | 0.585556 | 0.692822 | 0.016734 | 0.016488 | 0.016427 |
| test_entropy_error.test | RUN | 0.094925 | 0.263884 | 0.316416 | 0.001266 | 0.001216 | 0.001267 |
| test_detail_random_provider.test | RUN | 0.181972 | 0.458242 | 0.592577 | 0.001354 | 0.001302 | 0.001208 |
| test_constants.test | RUN | 0.145627 | 0.427656 | 0.474131 | 0.001231 | 0.001394 | 0.001200 |
| test_uuid_cx.test | COMPILE | 0.084426 | 0.185913 | 0.234251 | — | — | — |
| test_uuid_cx2.test | RUN | 0.155355 | 0.483688 | 0.528404 | 0.001323 | 0.001227 | 0.001233 |
| test_uuid_cx3.test | RUN | 0.135924 | 0.375504 | 0.471007 | 0.001189 | 0.001337 | 0.001068 |
| test_uuid_cx3_no_simd.test | RUN | 0.122575 | 0.352352 | 0.416871 | 0.001144 | 0.001162 | 0.001267 |
| test_hash_value_cx.test | RUN | 0.124110 | 0.338301 | 0.411279 | 0.001031 | 0.001327 | 0.001114 |
| test_string_generator_cx.test | RUN | 0.148475 | 0.422149 | 0.480077 | 0.001298 | 0.001230 | 0.001162 |
| test_string_generator_cx2.test | RUN | 0.187237 | 0.517786 | 0.557413 | 0.001356 | 0.001306 | 0.001222 |
| test_constants_cx.test | RUN | 0.123735 | 0.284825 | 0.384930 | 0.001228 | 0.001287 | 0.001169 |
| test_from_chars_cx.test | RUN | 0.157559 | 0.565387 | 0.517285 | 0.001185 | 0.001427 | 0.001103 |
| test_from_chars_cx2.test | RUN | 0.168750 | 0.695198 | 0.588318 | 0.001378 | 0.001461 | 0.001334 |
| test_to_chars_cx.test | RUN | 0.163945 | 0.650331 | 0.624318 | 0.001392 | 0.001415 | 0.000931 |
| test_uuid_from_string_cx.test | RUN | 0.173537 | 0.652382 | 0.610790 | 0.000970 | 0.000895 | 0.000985 |
| quick.test | RUN | 0.177515 | 0.501349 | 0.605146 | 0.000865 | 0.000913 | 0.000974 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.014× | 1.013×, 1.014× | 0.998× |
| clang | 1.007× | 1.008×, 1.006× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000802s | 0.000790s | 0.000801s | byte equality observed |
| test_alignment.test | 10 | 0.000813s | 0.000815s | 0.000793s | byte equality observed |
| test_alignment_2.test | 10 | 0.000824s | 0.000832s | 0.000808s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000747s | 0.000760s | 0.000783s | byte equality observed |
| test_bench_random.test | 2 | 0.015989s | 0.016059s | 0.016021s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000797s | 0.000805s | 0.000806s | byte equality observed |
| test_comparison.test | 10 | 0.000762s | 0.000759s | 0.000760s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000828s | 0.000837s | 0.000796s | byte equality observed |
| test_constants.test | 10 | 0.000819s | 0.000825s | 0.000823s | byte equality observed |
| test_constants_cx.test | 10 | 0.000812s | 0.000795s | 0.000813s | byte equality observed |
| test_data.test | 10 | 0.000793s | 0.000831s | 0.000835s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000814s | 0.000831s | 0.000829s | byte equality observed |
| test_detail_endian.test | 10 | 0.000819s | 0.000822s | 0.000811s | byte equality observed |
| test_detail_md5.test | 10 | 0.000846s | 0.000822s | 0.000830s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000834s | 0.000826s | 0.000815s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005419s | 0.006424s | 0.005684s | byte equality observed |
| test_entropy_error.test | 10 | 0.000749s | 0.000759s | 0.000763s | byte equality observed |
| test_from_chars.test | 10 | 0.000760s | 0.000764s | 0.000776s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000830s | 0.000791s | 0.000835s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000803s | 0.000815s | 0.000830s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000825s | 0.000833s | 0.000817s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000843s | 0.000847s | 0.000803s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000814s | 0.000847s | 0.000803s | byte equality observed |
| test_hash.test | 10 | 0.000810s | 0.000834s | 0.000827s | byte equality observed |
| test_hash_value.test | 6 | 0.003225s | 0.003238s | 0.003150s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000769s | 0.000762s | 0.000770s | byte equality observed |
| test_include1.test | 10 | 0.000347s | 0.000349s | 0.000739s | byte equality observed |
| test_io.test | 10 | 0.000858s | 0.000866s | 0.000865s | byte equality observed |
| test_io_2.test | 10 | 0.000876s | 0.000900s | 0.000917s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000887s | 0.000926s | 0.000924s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000854s | 0.000870s | 0.000870s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000813s | 0.000818s | 0.000837s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000845s | 0.000821s | 0.000853s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000836s | 0.000813s | 0.000864s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000837s | 0.000870s | 0.000864s | byte equality observed |
| test_namespaces.test | 10 | 0.000839s | 0.000809s | 0.000838s | byte equality observed |
| test_nil_generator.test | 10 | 0.000827s | 0.000823s | 0.000821s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000767s | 0.000773s | 0.000781s | byte equality observed |
| test_random_generator.test | 5 | 0.003789s | 0.003783s | 0.003772s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000767s | 0.000739s | 0.000749s | byte equality observed |
| test_serialization.test | 10 | 0.000876s | 0.000904s | 0.000887s | byte equality observed |
| test_std_unordered.test | 10 | 0.000881s | 0.000871s | 0.000893s | byte equality observed |
| test_string_generator.test | 10 | 0.000877s | 0.000886s | 0.000877s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000818s | 0.000836s | 0.000830s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000814s | 0.000795s | 0.000807s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000815s | 0.000815s | 0.000831s | byte equality observed |
| test_tagging.test | 10 | 0.000869s | 0.000829s | 0.000844s | byte equality observed |
| test_time_generator.test | 10 | 0.000839s | 0.000815s | 0.000871s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001131s | 0.001213s | 0.001249s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001009s | 0.001037s | 0.001051s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004494s | 0.004334s | 0.004381s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001169s | 0.001256s | 0.001265s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001033s | 0.001051s | 0.001034s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004771s | 0.004566s | 0.004692s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000982s | 0.001047s | 0.001034s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000886s | 0.000863s | 0.000856s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002334s | 0.002332s | 0.002348s | byte equality observed |
| test_to_chars.test | 10 | 0.000825s | 0.000825s | 0.000819s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000803s | 0.000815s | 0.000799s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000872s | 0.000817s | 0.000857s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000847s | 0.000818s | 0.000839s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000837s | 0.000801s | 0.000841s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000873s | 0.000845s | 0.000876s | byte equality observed |
| test_uuid.test | 10 | 0.000797s | 0.000813s | 0.000813s | byte equality observed |
| test_uuid_2.test | 10 | 0.000827s | 0.000840s | 0.000798s | byte equality observed |
| test_uuid_3.test | 10 | 0.000784s | 0.000816s | 0.000820s | byte equality observed |
| test_uuid_class.test | 10 | 0.000831s | 0.000858s | 0.000851s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000810s | 0.000799s | 0.000813s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000833s | 0.000788s | 0.000815s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000820s | 0.000843s | 0.000821s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000823s | 0.000804s | 0.000828s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000827s | 0.000835s | 0.000811s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000971s | 0.000984s | 0.001003s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000882s | 0.000867s | 0.000862s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000835s | 0.000828s | 0.000802s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000842s | 0.000825s | 0.000806s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000835s | 0.000818s | 0.000836s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
