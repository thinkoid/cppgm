# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.345157 | 0.787123 | 1.074410 | 0.000575 | 0.000482 | 0.001253 |
| test_uuid.test | RUN | 0.216198 | 0.661657 | 0.777110 | 0.001290 | 0.001276 | 0.001118 |
| test_uuid_no_simd.test | RUN | 0.215165 | 0.639009 | 0.701291 | 0.001306 | 0.001221 | 0.001046 |
| test_uuid_2.test | RUN | 0.155995 | 0.481347 | 0.521738 | 0.001336 | 0.001325 | 0.001043 |
| test_uuid_3.test | RUN | 0.127124 | 0.329093 | 0.400409 | 0.001456 | 0.001284 | 0.001088 |
| test_alignment.test | RUN | 0.117817 | 0.297662 | 0.367583 | 0.001414 | 0.001108 | 0.001132 |
| test_alignment_2.test | RUN | 0.117411 | 0.289567 | 0.374040 | 0.001160 | 0.001069 | 0.001210 |
| test_attribute_packed.test | RUN | 0.117866 | 0.300232 | 0.362015 | 0.001435 | 0.001262 | 0.001170 |
| test_pragma_pack.test | RUN | 0.118872 | 0.296522 | 0.373811 | 0.001328 | 0.001246 | 0.001126 |
| test_data.test | RUN | 0.141414 | 0.547129 | 0.527415 | 0.001326 | 0.001387 | 0.001124 |
| test_comparison.test | RUN | 0.200939 | 0.639223 | 0.728244 | 0.001368 | 0.001367 | 0.001261 |
| test_comparison_no_simd.test | RUN | 0.199504 | 0.732944 | 0.660797 | 0.001352 | 0.001418 | 0.001266 |
| test_io.test | RUN | 0.271593 | 1.233525 | 1.083212 | 0.001558 | 0.001389 | 0.001242 |
| test_io_no_simd.test | RUN | 0.266439 | 1.230745 | 1.047794 | 0.001282 | 0.001350 | 0.001182 |
| test_io_2.test | RUN | 0.207270 | 1.279234 | 0.773380 | 0.001353 | 0.001333 | 0.001320 |
| test_io_2_no_simd.test | RUN | 0.185467 | 1.220218 | 0.699403 | 0.001501 | 0.001595 | 0.001282 |
| test_to_chars.test | RUN | 0.191294 | 0.801556 | 0.710192 | 0.001495 | 0.001405 | 0.001121 |
| test_to_chars_no_simd.test | RUN | 0.187182 | 0.812183 | 0.699090 | 0.001376 | 0.001240 | 0.001144 |
| test_to_chars_2.test | RUN | 0.229851 | 1.489333 | 0.845675 | 0.001320 | 0.001280 | 0.001112 |
| test_to_chars_2_no_simd.test | RUN | 0.238416 | 1.593985 | 0.772139 | 0.001444 | 0.001230 | 0.001126 |
| test_to_chars_3.test | RUN | 0.154637 | 0.513421 | 0.522724 | 0.001339 | 0.001198 | 0.001080 |
| test_from_chars.test | RUN | 0.175677 | 0.740060 | 0.591843 | 0.001360 | 0.001284 | 0.001115 |
| test_from_chars_no_simd.test | RUN | 0.155461 | 0.591365 | 0.491890 | 0.001339 | 0.001064 | 0.001132 |
| test_from_chars_2.test | RUN | 0.169345 | 0.701392 | 0.571491 | 0.001319 | 0.001334 | 0.001117 |
| test_from_chars_2_no_simd.test | RUN | 0.148819 | 0.528987 | 0.473456 | 0.001220 | 0.001325 | 0.001024 |
| test_uuid_from_string.test | RUN | 0.202885 | 0.772643 | 0.698876 | 0.001375 | 0.001222 | 0.001115 |
| test_uuid_from_string_2.test | RUN | 0.179186 | 0.709232 | 0.596196 | 0.001552 | 0.001499 | 0.001391 |
| test_uuid_from_string_3.test | RUN | 0.181217 | 0.704736 | 0.606972 | 0.001092 | 0.001270 | 0.001132 |
| test_uuid_clock.test | RUN | 0.103575 | 0.281018 | 0.361641 | 0.001266 | 0.001241 | 0.001178 |
| test_nil_generator.test | RUN | 0.126729 | 0.336316 | 0.425323 | 0.001440 | 0.001186 | 0.001153 |
| test_string_generator.test | RUN | 0.167382 | 0.559138 | 0.587880 | 0.001536 | 0.001430 | 0.001310 |
| test_string_generator_2.test | RUN | 0.206357 | 0.791082 | 0.657972 | 0.001335 | 0.001251 | 0.001127 |
| test_random_generator.test | RUN | 0.282353 | 1.523851 | 0.976488 | 0.004367 | 0.004290 | 0.004067 |
| test_random_generator_2.test | RUN | 0.200065 | 0.573422 | 0.672338 | 0.001290 | 0.001370 | 0.001205 |
| test_name_generator.test | RUN | 0.179102 | 2.006772 | 0.713878 | 0.001117 | 0.001361 | 0.001147 |
| test_namespaces.test | RUN | 0.146081 | 0.415905 | 0.478612 | 0.001303 | 0.001264 | 0.001185 |
| test_name_generator_md5.test | RUN | 0.185951 | 0.946254 | 0.698705 | 0.001495 | 0.001323 | 0.001226 |
| test_name_generator_sha1.test | RUN | 0.174666 | 2.937704 | 0.698077 | 0.001059 | 0.001412 | 0.001276 |
| test_time_generator.test | RUN | 0.192825 | 0.591547 | 0.634992 | 0.001344 | 0.001395 | 0.001159 |
| test_time_generator_v1.test | RUN | 0.209920 | 0.650608 | 0.729995 | 0.001660 | 0.001768 | 0.001704 |
| test_time_generator_v1_2.test | RUN | 0.207335 | 0.605287 | 0.684636 | 0.001446 | 0.001672 | 0.001442 |
| test_time_generator_v1_3.test | RUN | 0.230865 | 0.638644 | 0.761397 | 0.004912 | 0.004153 | 0.003419 |
| test_time_generator_v6.test | RUN | 0.210112 | 0.644195 | 0.722529 | 0.001666 | 0.001806 | 0.001615 |
| test_time_generator_v6_2.test | RUN | 0.207245 | 0.600945 | 0.698059 | 0.001460 | 0.001690 | 0.001356 |
| test_time_generator_v6_3.test | RUN | 0.230097 | 0.633194 | 0.759038 | 0.004225 | 0.004290 | 0.004729 |
| test_time_generator_v7.test | RUN | 0.203988 | 0.639130 | 0.704491 | 0.001416 | 0.001438 | 0.001336 |
| test_time_generator_v7_2.test | RUN | 0.188576 | 0.567505 | 0.635763 | 0.001254 | 0.001335 | 0.001194 |
| test_time_generator_v7_3.test | RUN | 0.191061 | 0.713133 | 0.665568 | 0.002778 | 0.002868 | 0.002600 |
| test_serialization.test | RUN | 0.353429 | 1.089455 | 1.207552 | 0.001637 | 0.001278 | 0.001330 |
| test_tagging.test | RUN | 0.192174 | 0.678678 | 0.648904 | 0.001214 | 0.001312 | 0.001126 |
| test_uuid_class.test | RUN | 0.203345 | 0.599831 | 0.700794 | 0.001268 | 0.001197 | 0.001178 |
| test_uuid_in_map.test | RUN | 0.217398 | 0.700556 | 0.769524 | 0.001229 | 0.001406 | 0.001105 |
| test_hash.test | RUN | 0.222129 | 0.620101 | 0.691503 | 0.001375 | 0.001400 | 0.001206 |
| test_hash_value.test | RUN | 0.162086 | 0.431057 | 0.512153 | 0.004412 | 0.004151 | 0.003962 |
| test_std_unordered.test | RUN | 0.206717 | 0.703465 | 0.707947 | 0.001334 | 0.001370 | 0.001118 |
| test_boost_unordered.test | RUN | 0.295144 | 0.915112 | 0.935260 | 0.001325 | 0.001311 | 0.001185 |
| test_detail_md5.test | RUN | 0.137412 | 0.429996 | 0.499022 | 0.001242 | 0.001308 | 0.001131 |
| test_detail_sha1.test | RUN | 0.131930 | 0.564834 | 0.462719 | 0.007829 | 0.008224 | 0.007010 |
| test_detail_endian.test | RUN | 0.102576 | 0.316365 | 0.346075 | 0.001251 | 0.001137 | 0.001100 |
| test_detail_chacha20.test | RUN | 0.112015 | 0.398838 | 0.340321 | 0.001438 | 0.001328 | 0.001059 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.098947 | 0.218993 | 0.281795 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.098017 | 0.217503 | 0.282401 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.167099 | 0.438409 | 0.502804 | 0.001330 | 0.001423 | 0.001129 |
| test_bench_random.test | RUN | 0.190454 | 0.585555 | 0.670463 | 0.016382 | 0.016741 | 0.016381 |
| test_entropy_error.test | RUN | 0.093635 | 0.251642 | 0.310098 | 0.001341 | 0.001316 | 0.000898 |
| test_detail_random_provider.test | RUN | 0.185355 | 0.450522 | 0.583953 | 0.001319 | 0.001270 | 0.001105 |
| test_constants.test | RUN | 0.150689 | 0.417396 | 0.476307 | 0.001331 | 0.001371 | 0.001129 |
| test_uuid_cx.test | COMPILE | 0.080768 | 0.185382 | 0.238176 | — | — | — |
| test_uuid_cx2.test | RUN | 0.153734 | 0.480558 | 0.524416 | 0.001303 | 0.001210 | 0.001245 |
| test_uuid_cx3.test | RUN | 0.133270 | 0.374903 | 0.461886 | 0.001413 | 0.001233 | 0.001140 |
| test_uuid_cx3_no_simd.test | RUN | 0.127628 | 0.348903 | 0.409263 | 0.001312 | 0.001275 | 0.001226 |
| test_hash_value_cx.test | RUN | 0.129060 | 0.331848 | 0.404958 | 0.001341 | 0.001287 | 0.001143 |
| test_string_generator_cx.test | RUN | 0.147804 | 0.414121 | 0.483897 | 0.001385 | 0.001240 | 0.001201 |
| test_string_generator_cx2.test | RUN | 0.183637 | 0.522677 | 0.550860 | 0.001186 | 0.001290 | 0.001143 |
| test_constants_cx.test | RUN | 0.118572 | 0.283129 | 0.386515 | 0.001161 | 0.001310 | 0.001071 |
| test_from_chars_cx.test | RUN | 0.164581 | 0.555661 | 0.516616 | 0.001319 | 0.001364 | 0.001120 |
| test_from_chars_cx2.test | RUN | 0.163653 | 0.688657 | 0.573945 | 0.001684 | 0.000825 | 0.001159 |
| test_to_chars_cx.test | RUN | 0.164500 | 0.637817 | 0.615623 | 0.000971 | 0.001178 | 0.000907 |
| test_uuid_from_string_cx.test | RUN | 0.174480 | 0.638879 | 0.568057 | 0.000942 | 0.000929 | 0.000887 |
| quick.test | RUN | 0.188477 | 0.505980 | 0.576441 | 0.000974 | 0.000847 | 0.000782 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.007× | 1.007×, 1.008× | 0.996× |
| clang | 1.001× | 1.000×, 1.003× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000820s | 0.000828s | 0.000800s | byte equality observed |
| test_alignment.test | 10 | 0.000780s | 0.000800s | 0.000813s | byte equality observed |
| test_alignment_2.test | 10 | 0.000801s | 0.000831s | 0.000805s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000758s | 0.000758s | 0.000731s | byte equality observed |
| test_bench_random.test | 2 | 0.015898s | 0.015913s | 0.015895s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000811s | 0.000784s | 0.000781s | byte equality observed |
| test_comparison.test | 10 | 0.000757s | 0.000754s | 0.000767s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000804s | 0.000775s | 0.000814s | byte equality observed |
| test_constants.test | 10 | 0.000809s | 0.000805s | 0.000786s | byte equality observed |
| test_constants_cx.test | 10 | 0.000774s | 0.000794s | 0.000786s | byte equality observed |
| test_data.test | 10 | 0.000781s | 0.000812s | 0.000807s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000783s | 0.000809s | 0.000819s | byte equality observed |
| test_detail_endian.test | 10 | 0.000789s | 0.000829s | 0.000844s | byte equality observed |
| test_detail_md5.test | 10 | 0.000829s | 0.000830s | 0.000817s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000816s | 0.000822s | 0.000815s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005431s | 0.006438s | 0.005707s | byte equality observed |
| test_entropy_error.test | 10 | 0.000737s | 0.000741s | 0.000739s | byte equality observed |
| test_from_chars.test | 10 | 0.000750s | 0.000733s | 0.000762s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000822s | 0.000803s | 0.000810s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000828s | 0.000786s | 0.000818s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000788s | 0.000791s | 0.000801s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000793s | 0.000815s | 0.000803s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000815s | 0.000831s | 0.000843s | byte equality observed |
| test_hash.test | 10 | 0.000821s | 0.000793s | 0.000848s | byte equality observed |
| test_hash_value.test | 6 | 0.003224s | 0.003189s | 0.003168s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000760s | 0.000770s | 0.000743s | byte equality observed |
| test_include1.test | 10 | 0.000349s | 0.000351s | 0.000755s | byte equality observed |
| test_io.test | 10 | 0.000856s | 0.000848s | 0.000867s | byte equality observed |
| test_io_2.test | 10 | 0.000883s | 0.000917s | 0.000884s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000907s | 0.000899s | 0.000909s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000874s | 0.000873s | 0.000848s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000793s | 0.000795s | 0.000814s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000838s | 0.000855s | 0.000808s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000841s | 0.000823s | 0.000839s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000840s | 0.000851s | 0.000842s | byte equality observed |
| test_namespaces.test | 10 | 0.000829s | 0.000804s | 0.000792s | byte equality observed |
| test_nil_generator.test | 10 | 0.000815s | 0.000807s | 0.000829s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000770s | 0.000781s | 0.000773s | byte equality observed |
| test_random_generator.test | 5 | 0.003728s | 0.003725s | 0.003719s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000776s | 0.000751s | 0.000763s | byte equality observed |
| test_serialization.test | 10 | 0.000865s | 0.000875s | 0.000855s | byte equality observed |
| test_std_unordered.test | 10 | 0.000850s | 0.000873s | 0.000848s | byte equality observed |
| test_string_generator.test | 10 | 0.000886s | 0.000866s | 0.000868s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000826s | 0.000845s | 0.000833s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000807s | 0.000842s | 0.000806s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000806s | 0.000854s | 0.000804s | byte equality observed |
| test_tagging.test | 10 | 0.000835s | 0.000851s | 0.000821s | byte equality observed |
| test_time_generator.test | 10 | 0.000854s | 0.000834s | 0.000849s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001131s | 0.001207s | 0.001234s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.000991s | 0.001033s | 0.001033s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004629s | 0.004337s | 0.004632s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001159s | 0.001224s | 0.001237s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001004s | 0.001061s | 0.001040s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004683s | 0.004549s | 0.004345s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000986s | 0.001037s | 0.001027s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000873s | 0.000867s | 0.000849s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002323s | 0.002299s | 0.002315s | byte equality observed |
| test_to_chars.test | 10 | 0.000816s | 0.000818s | 0.000815s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000799s | 0.000799s | 0.000788s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000838s | 0.000813s | 0.000825s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000837s | 0.000839s | 0.000798s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000846s | 0.000827s | 0.000811s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000855s | 0.000850s | 0.000871s | byte equality observed |
| test_uuid.test | 10 | 0.000828s | 0.000774s | 0.000798s | byte equality observed |
| test_uuid_2.test | 10 | 0.000803s | 0.000810s | 0.000786s | byte equality observed |
| test_uuid_3.test | 10 | 0.000807s | 0.000794s | 0.000816s | byte equality observed |
| test_uuid_class.test | 10 | 0.000846s | 0.000819s | 0.000819s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000831s | 0.000802s | 0.000832s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000809s | 0.000799s | 0.000785s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000806s | 0.000807s | 0.000808s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000813s | 0.000784s | 0.000816s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000818s | 0.000809s | 0.000812s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000969s | 0.000963s | 0.000987s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000865s | 0.000849s | 0.000867s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000805s | 0.000780s | 0.000837s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000810s | 0.000797s | 0.000824s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000800s | 0.000792s | 0.000819s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
