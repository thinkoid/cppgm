# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.342738 | 0.815654 | 1.088829 | 0.000582 | 0.000515 | 0.001266 |
| test_uuid.test | RUN | 0.214112 | 0.674914 | 0.786690 | 0.001444 | 0.001401 | 0.001273 |
| test_uuid_no_simd.test | RUN | 0.213008 | 0.649525 | 0.704914 | 0.001481 | 0.001291 | 0.001170 |
| test_uuid_2.test | RUN | 0.151966 | 0.487056 | 0.529960 | 0.001474 | 0.001495 | 0.001206 |
| test_uuid_3.test | RUN | 0.129854 | 0.339265 | 0.427108 | 0.001450 | 0.001384 | 0.001169 |
| test_alignment.test | RUN | 0.117489 | 0.300812 | 0.367096 | 0.001396 | 0.001375 | 0.001218 |
| test_alignment_2.test | RUN | 0.117305 | 0.295058 | 0.374005 | 0.001312 | 0.001125 | 0.001221 |
| test_attribute_packed.test | RUN | 0.121962 | 0.304201 | 0.377362 | 0.001488 | 0.001448 | 0.001197 |
| test_pragma_pack.test | RUN | 0.120903 | 0.304967 | 0.376617 | 0.001463 | 0.001490 | 0.001192 |
| test_data.test | RUN | 0.143126 | 0.557645 | 0.532034 | 0.001185 | 0.001430 | 0.001270 |
| test_comparison.test | RUN | 0.202912 | 0.649590 | 0.737846 | 0.001473 | 0.001341 | 0.001233 |
| test_comparison_no_simd.test | RUN | 0.195185 | 0.742324 | 0.653205 | 0.001377 | 0.001322 | 0.001147 |
| test_io.test | RUN | 0.269695 | 1.270605 | 1.118903 | 0.001392 | 0.001712 | 0.001346 |
| test_io_no_simd.test | RUN | 0.258667 | 1.243777 | 1.065745 | 0.001312 | 0.001327 | 0.001480 |
| test_io_2.test | RUN | 0.209129 | 1.304452 | 0.777209 | 0.001387 | 0.001380 | 0.001247 |
| test_io_2_no_simd.test | RUN | 0.188505 | 1.237742 | 0.725644 | 0.001490 | 0.001605 | 0.001489 |
| test_to_chars.test | RUN | 0.190307 | 0.834488 | 0.731594 | 0.001416 | 0.001640 | 0.001266 |
| test_to_chars_no_simd.test | RUN | 0.190199 | 0.834649 | 0.709614 | 0.001568 | 0.001518 | 0.001336 |
| test_to_chars_2.test | RUN | 0.231292 | 1.509051 | 0.868576 | 0.001186 | 0.001430 | 0.001280 |
| test_to_chars_2_no_simd.test | RUN | 0.239564 | 1.616964 | 0.793641 | 0.001314 | 0.001386 | 0.001332 |
| test_to_chars_3.test | RUN | 0.154025 | 0.526014 | 0.528857 | 0.001394 | 0.001404 | 0.001078 |
| test_from_chars.test | RUN | 0.176093 | 0.761514 | 0.595413 | 0.001336 | 0.001247 | 0.001216 |
| test_from_chars_no_simd.test | RUN | 0.158623 | 0.598811 | 0.499574 | 0.001228 | 0.001216 | 0.001181 |
| test_from_chars_2.test | RUN | 0.172004 | 0.712899 | 0.581343 | 0.001266 | 0.001283 | 0.001048 |
| test_from_chars_2_no_simd.test | RUN | 0.151280 | 0.539402 | 0.470325 | 0.001479 | 0.001482 | 0.001059 |
| test_uuid_from_string.test | RUN | 0.207884 | 0.793810 | 0.712353 | 0.001343 | 0.001486 | 0.001239 |
| test_uuid_from_string_2.test | RUN | 0.179551 | 0.711737 | 0.602525 | 0.001299 | 0.001522 | 0.001574 |
| test_uuid_from_string_3.test | RUN | 0.181341 | 0.718580 | 0.617685 | 0.001314 | 0.001335 | 0.001636 |
| test_uuid_clock.test | RUN | 0.106964 | 0.284475 | 0.362623 | 0.001124 | 0.001492 | 0.001481 |
| test_nil_generator.test | RUN | 0.126918 | 0.343002 | 0.441004 | 0.001350 | 0.001346 | 0.001305 |
| test_string_generator.test | RUN | 0.166365 | 0.572700 | 0.601651 | 0.001258 | 0.001565 | 0.001497 |
| test_string_generator_2.test | RUN | 0.205707 | 0.805873 | 0.670296 | 0.001387 | 0.001118 | 0.001173 |
| test_random_generator.test | RUN | 0.275327 | 1.537354 | 1.012132 | 0.004338 | 0.004455 | 0.004196 |
| test_random_generator_2.test | RUN | 0.203993 | 0.593729 | 0.670998 | 0.001048 | 0.001336 | 0.001196 |
| test_name_generator.test | RUN | 0.184346 | 2.058892 | 0.733611 | 0.001344 | 0.001504 | 0.001187 |
| test_namespaces.test | RUN | 0.146242 | 0.422347 | 0.488262 | 0.001311 | 0.001573 | 0.001144 |
| test_name_generator_md5.test | RUN | 0.186297 | 0.959401 | 0.703510 | 0.001246 | 0.001496 | 0.001236 |
| test_name_generator_sha1.test | RUN | 0.180202 | 2.999604 | 0.701512 | 0.001280 | 0.001274 | 0.001342 |
| test_time_generator.test | RUN | 0.189444 | 0.596105 | 0.647974 | 0.001366 | 0.001569 | 0.001388 |
| test_time_generator_v1.test | RUN | 0.214474 | 0.667711 | 0.751077 | 0.001690 | 0.002022 | 0.001716 |
| test_time_generator_v1_2.test | RUN | 0.209918 | 0.628539 | 0.695945 | 0.001534 | 0.001817 | 0.001523 |
| test_time_generator_v1_3.test | RUN | 0.230148 | 0.654368 | 0.771977 | 0.004437 | 0.003896 | 0.003550 |
| test_time_generator_v6.test | RUN | 0.211340 | 0.655565 | 0.736273 | 0.001697 | 0.001842 | 0.001710 |
| test_time_generator_v6_2.test | RUN | 0.209233 | 0.624512 | 0.694163 | 0.001418 | 0.001857 | 0.001520 |
| test_time_generator_v6_3.test | RUN | 0.234603 | 0.656652 | 0.782346 | 0.004033 | 0.004170 | 0.004663 |
| test_time_generator_v7.test | RUN | 0.202646 | 0.653696 | 0.711192 | 0.001491 | 0.001417 | 0.001527 |
| test_time_generator_v7_2.test | RUN | 0.192843 | 0.577849 | 0.659796 | 0.001207 | 0.001484 | 0.001187 |
| test_time_generator_v7_3.test | RUN | 0.192133 | 0.743560 | 0.665760 | 0.002724 | 0.002889 | 0.003000 |
| test_serialization.test | RUN | 0.350088 | 1.129248 | 1.239050 | 0.001548 | 0.001521 | 0.001469 |
| test_tagging.test | RUN | 0.193319 | 0.689202 | 0.666238 | 0.001509 | 0.001245 | 0.001387 |
| test_uuid_class.test | RUN | 0.208055 | 0.608274 | 0.702683 | 0.001277 | 0.001184 | 0.001125 |
| test_uuid_in_map.test | RUN | 0.226150 | 0.707846 | 0.775270 | 0.001247 | 0.001267 | 0.001285 |
| test_hash.test | RUN | 0.228865 | 0.629023 | 0.715327 | 0.001448 | 0.001498 | 0.001399 |
| test_hash_value.test | RUN | 0.161528 | 0.439764 | 0.525174 | 0.004328 | 0.004282 | 0.004288 |
| test_std_unordered.test | RUN | 0.219300 | 0.723923 | 0.717111 | 0.001383 | 0.001576 | 0.001360 |
| test_boost_unordered.test | RUN | 0.308088 | 0.917312 | 0.947137 | 0.001263 | 0.001285 | 0.001304 |
| test_detail_md5.test | RUN | 0.142774 | 0.448315 | 0.515130 | 0.001236 | 0.001440 | 0.001420 |
| test_detail_sha1.test | RUN | 0.132366 | 0.570959 | 0.463523 | 0.008237 | 0.008323 | 0.007128 |
| test_detail_endian.test | RUN | 0.102672 | 0.323071 | 0.338091 | 0.001566 | 0.001170 | 0.001207 |
| test_detail_chacha20.test | RUN | 0.112814 | 0.398041 | 0.366554 | 0.001208 | 0.001250 | 0.001162 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.101272 | 0.221377 | 0.289445 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.101277 | 0.224647 | 0.286797 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.165735 | 0.440420 | 0.520808 | 0.001491 | 0.001347 | 0.001390 |
| test_bench_random.test | RUN | 0.192502 | 0.595441 | 0.686896 | 0.016543 | 0.016236 | 0.016096 |
| test_entropy_error.test | RUN | 0.095700 | 0.266705 | 0.308944 | 0.001315 | 0.001302 | 0.001333 |
| test_detail_random_provider.test | RUN | 0.182898 | 0.456014 | 0.594015 | 0.001426 | 0.001523 | 0.001327 |
| test_constants.test | RUN | 0.146068 | 0.430154 | 0.479885 | 0.001316 | 0.001420 | 0.001260 |
| test_uuid_cx.test | COMPILE | 0.081094 | 0.192623 | 0.247056 | — | — | — |
| test_uuid_cx2.test | RUN | 0.155287 | 0.487443 | 0.529221 | 0.001310 | 0.001466 | 0.001338 |
| test_uuid_cx3.test | RUN | 0.136652 | 0.373300 | 0.481647 | 0.001434 | 0.001262 | 0.001173 |
| test_uuid_cx3_no_simd.test | RUN | 0.124604 | 0.355646 | 0.422147 | 0.001097 | 0.001325 | 0.001280 |
| test_hash_value_cx.test | RUN | 0.124580 | 0.335650 | 0.421685 | 0.001224 | 0.001340 | 0.001161 |
| test_string_generator_cx.test | RUN | 0.149265 | 0.429619 | 0.490842 | 0.001417 | 0.001173 | 0.001121 |
| test_string_generator_cx2.test | RUN | 0.187526 | 0.523351 | 0.564018 | 0.001331 | 0.001394 | 0.001260 |
| test_constants_cx.test | RUN | 0.120367 | 0.293455 | 0.388649 | 0.001387 | 0.001217 | 0.001253 |
| test_from_chars_cx.test | RUN | 0.158988 | 0.567142 | 0.530972 | 0.001171 | 0.001374 | 0.001374 |
| test_from_chars_cx2.test | RUN | 0.165793 | 0.705497 | 0.573075 | 0.001324 | 0.001216 | 0.001258 |
| test_to_chars_cx.test | RUN | 0.164229 | 0.655366 | 0.623785 | 0.001025 | 0.001299 | 0.000874 |
| test_uuid_from_string_cx.test | RUN | 0.176539 | 0.646040 | 0.609127 | 0.000970 | 0.001007 | 0.000941 |
| quick.test | RUN | 0.183629 | 0.509152 | 0.591029 | 0.000955 | 0.001026 | 0.000875 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.998×, 1.005× | 1.001× |
| clang | 1.007× | 1.007×, 1.007× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000789s | 0.000783s | 0.000799s | byte equality observed |
| test_alignment.test | 10 | 0.000808s | 0.000782s | 0.000797s | byte equality observed |
| test_alignment_2.test | 10 | 0.000811s | 0.000799s | 0.000797s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000750s | 0.000736s | 0.000736s | byte equality observed |
| test_bench_random.test | 2 | 0.015547s | 0.015492s | 0.015530s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000787s | 0.000773s | 0.000773s | byte equality observed |
| test_comparison.test | 10 | 0.000735s | 0.000736s | 0.000746s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000797s | 0.000792s | 0.000824s | byte equality observed |
| test_constants.test | 10 | 0.000806s | 0.000819s | 0.000825s | byte equality observed |
| test_constants_cx.test | 10 | 0.000795s | 0.000805s | 0.000791s | byte equality observed |
| test_data.test | 10 | 0.000789s | 0.000781s | 0.000815s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000814s | 0.000825s | 0.000812s | byte equality observed |
| test_detail_endian.test | 10 | 0.000803s | 0.000816s | 0.000807s | byte equality observed |
| test_detail_md5.test | 10 | 0.000825s | 0.000805s | 0.000850s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000819s | 0.000827s | 0.000818s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005355s | 0.006427s | 0.005711s | byte equality observed |
| test_entropy_error.test | 10 | 0.000775s | 0.000745s | 0.000741s | byte equality observed |
| test_from_chars.test | 10 | 0.000750s | 0.000753s | 0.000739s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000838s | 0.000781s | 0.000775s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000816s | 0.000799s | 0.000816s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000801s | 0.000781s | 0.000819s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000796s | 0.000825s | 0.000819s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000826s | 0.000811s | 0.000813s | byte equality observed |
| test_hash.test | 10 | 0.000829s | 0.000805s | 0.000846s | byte equality observed |
| test_hash_value.test | 6 | 0.003231s | 0.003200s | 0.003167s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000755s | 0.000749s | 0.000762s | byte equality observed |
| test_include1.test | 10 | 0.000354s | 0.000341s | 0.000728s | byte equality observed |
| test_io.test | 10 | 0.000838s | 0.000841s | 0.000853s | byte equality observed |
| test_io_2.test | 10 | 0.000882s | 0.000880s | 0.000878s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000889s | 0.000883s | 0.000899s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000893s | 0.000833s | 0.000826s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000830s | 0.000788s | 0.000815s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000841s | 0.000826s | 0.000841s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000846s | 0.000839s | 0.000808s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000849s | 0.000863s | 0.000836s | byte equality observed |
| test_namespaces.test | 10 | 0.000810s | 0.000782s | 0.000782s | byte equality observed |
| test_nil_generator.test | 10 | 0.000827s | 0.000804s | 0.000823s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000762s | 0.000755s | 0.000769s | byte equality observed |
| test_random_generator.test | 5 | 0.003690s | 0.003654s | 0.003643s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000759s | 0.000749s | 0.000755s | byte equality observed |
| test_serialization.test | 10 | 0.000878s | 0.000847s | 0.000880s | byte equality observed |
| test_std_unordered.test | 10 | 0.000865s | 0.000895s | 0.000852s | byte equality observed |
| test_string_generator.test | 10 | 0.000874s | 0.000860s | 0.000861s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000830s | 0.000859s | 0.000813s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000806s | 0.000791s | 0.000814s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000813s | 0.000823s | 0.000796s | byte equality observed |
| test_tagging.test | 10 | 0.000797s | 0.000804s | 0.000808s | byte equality observed |
| test_time_generator.test | 10 | 0.000839s | 0.000831s | 0.000817s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001115s | 0.001204s | 0.001228s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.000995s | 0.001029s | 0.001037s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004517s | 0.004286s | 0.004393s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001159s | 0.001228s | 0.001263s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001028s | 0.001054s | 0.001051s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004585s | 0.004268s | 0.004785s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000985s | 0.001018s | 0.001034s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000851s | 0.000861s | 0.000873s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002260s | 0.002273s | 0.002272s | byte equality observed |
| test_to_chars.test | 10 | 0.000816s | 0.000807s | 0.000816s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000797s | 0.000793s | 0.000791s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000832s | 0.000811s | 0.000810s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000840s | 0.000819s | 0.000817s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000807s | 0.000826s | 0.000797s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000856s | 0.000871s | 0.000865s | byte equality observed |
| test_uuid.test | 10 | 0.000782s | 0.000785s | 0.000787s | byte equality observed |
| test_uuid_2.test | 10 | 0.000804s | 0.000792s | 0.000790s | byte equality observed |
| test_uuid_3.test | 10 | 0.000818s | 0.000826s | 0.000801s | byte equality observed |
| test_uuid_class.test | 10 | 0.000853s | 0.000821s | 0.000835s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000786s | 0.000801s | 0.000800s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000814s | 0.000799s | 0.000807s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000790s | 0.000815s | 0.000812s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000799s | 0.000814s | 0.000788s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000824s | 0.000798s | 0.000824s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000974s | 0.000968s | 0.000989s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000879s | 0.000881s | 0.000857s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000794s | 0.000790s | 0.000768s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000827s | 0.000810s | 0.000800s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000827s | 0.000818s | 0.000790s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43740486413).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
