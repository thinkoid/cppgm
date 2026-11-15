# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.449128 | 1.052504 | 1.406593 | 0.000600 | 0.000619 | 0.001324 |
| test_uuid.test | RUN | 0.270125 | 0.874741 | 1.014270 | 0.001472 | 0.001523 | 0.001365 |
| test_uuid_no_simd.test | RUN | 0.259287 | 0.860897 | 0.899386 | 0.001442 | 0.001464 | 0.001503 |
| test_uuid_2.test | RUN | 0.199453 | 0.631644 | 0.671764 | 0.001367 | 0.001567 | 0.001361 |
| test_uuid_3.test | RUN | 0.156807 | 0.435402 | 0.521869 | 0.001337 | 0.001669 | 0.001364 |
| test_alignment.test | RUN | 0.146487 | 0.398611 | 0.479998 | 0.001418 | 0.001530 | 0.001040 |
| test_alignment_2.test | RUN | 0.149927 | 0.375062 | 0.474298 | 0.001360 | 0.001346 | 0.001248 |
| test_attribute_packed.test | RUN | 0.145697 | 0.390943 | 0.472851 | 0.001366 | 0.001556 | 0.001159 |
| test_pragma_pack.test | RUN | 0.147285 | 0.407585 | 0.466676 | 0.001443 | 0.001519 | 0.001320 |
| test_data.test | RUN | 0.175473 | 0.733403 | 0.692032 | 0.001328 | 0.001462 | 0.001413 |
| test_comparison.test | RUN | 0.260237 | 0.852872 | 0.951304 | 0.001380 | 0.001475 | 0.001399 |
| test_comparison_no_simd.test | RUN | 0.233163 | 0.983245 | 0.830712 | 0.001382 | 0.001451 | 0.001306 |
| test_io.test | RUN | 0.335229 | 1.628226 | 1.441070 | 0.001634 | 0.001761 | 0.001436 |
| test_io_no_simd.test | RUN | 0.300838 | 1.629937 | 1.366681 | 0.001339 | 0.001648 | 0.001440 |
| test_io_2.test | RUN | 0.262531 | 1.701630 | 0.998826 | 0.001274 | 0.001532 | 0.001577 |
| test_io_2_no_simd.test | RUN | 0.232513 | 1.613153 | 0.919004 | 0.001689 | 0.001693 | 0.001664 |
| test_to_chars.test | RUN | 0.225499 | 1.066478 | 0.942043 | 0.001566 | 0.001613 | 0.001589 |
| test_to_chars_no_simd.test | RUN | 0.211219 | 1.075177 | 0.917579 | 0.001485 | 0.001512 | 0.001589 |
| test_to_chars_2.test | RUN | 0.280417 | 1.922991 | 1.123227 | 0.001378 | 0.001497 | 0.001410 |
| test_to_chars_2_no_simd.test | RUN | 0.263016 | 2.086922 | 1.020795 | 0.001214 | 0.001513 | 0.001492 |
| test_to_chars_3.test | RUN | 0.181544 | 0.676104 | 0.681966 | 0.001356 | 0.001501 | 0.001292 |
| test_from_chars.test | RUN | 0.221886 | 0.988190 | 0.774543 | 0.001267 | 0.001359 | 0.001444 |
| test_from_chars_no_simd.test | RUN | 0.190764 | 0.780322 | 0.658325 | 0.001202 | 0.001377 | 0.001278 |
| test_from_chars_2.test | RUN | 0.210938 | 0.919665 | 0.763411 | 0.001278 | 0.001400 | 0.001320 |
| test_from_chars_2_no_simd.test | RUN | 0.189719 | 0.699439 | 0.616591 | 0.001463 | 0.001503 | 0.001263 |
| test_uuid_from_string.test | RUN | 0.254772 | 1.017084 | 0.900378 | 0.001450 | 0.001474 | 0.001430 |
| test_uuid_from_string_2.test | RUN | 0.227478 | 0.924584 | 0.773744 | 0.001798 | 0.001794 | 0.001700 |
| test_uuid_from_string_3.test | RUN | 0.229305 | 0.919921 | 0.802389 | 0.001546 | 0.001532 | 0.001438 |
| test_uuid_clock.test | RUN | 0.138691 | 0.368239 | 0.468887 | 0.001343 | 0.001534 | 0.001354 |
| test_nil_generator.test | RUN | 0.162232 | 0.442096 | 0.530440 | 0.001309 | 0.001504 | 0.001239 |
| test_string_generator.test | RUN | 0.214518 | 0.730161 | 0.785993 | 0.001483 | 0.001627 | 0.001577 |
| test_string_generator_2.test | RUN | 0.271508 | 1.026170 | 0.860155 | 0.001444 | 0.001523 | 0.001584 |
| test_random_generator.test | RUN | 0.352151 | 2.010536 | 1.278952 | 0.003681 | 0.003764 | 0.003609 |
| test_random_generator_2.test | RUN | 0.262957 | 0.755290 | 0.882595 | 0.001332 | 0.001605 | 0.001344 |
| test_name_generator.test | RUN | 0.234704 | 2.624267 | 0.951982 | 0.001504 | 0.001514 | 0.001435 |
| test_namespaces.test | RUN | 0.182316 | 0.548741 | 0.600643 | 0.001357 | 0.001571 | 0.001305 |
| test_name_generator_md5.test | RUN | 0.240524 | 1.242058 | 0.911423 | 0.001495 | 0.001590 | 0.001488 |
| test_name_generator_sha1.test | RUN | 0.231275 | 3.887815 | 0.918867 | 0.001441 | 0.001475 | 0.001360 |
| test_time_generator.test | RUN | 0.248572 | 0.774877 | 0.842002 | 0.001380 | 0.001499 | 0.001388 |
| test_time_generator_v1.test | RUN | 0.274719 | 0.842723 | 0.960611 | 0.001878 | 0.002006 | 0.002090 |
| test_time_generator_v1_2.test | RUN | 0.267130 | 0.784060 | 0.888009 | 0.001672 | 0.001780 | 0.001783 |
| test_time_generator_v1_3.test | RUN | 0.303170 | 0.819009 | 0.998855 | 0.005291 | 0.004887 | 0.005503 |
| test_time_generator_v6.test | RUN | 0.279774 | 0.842052 | 0.947382 | 0.001890 | 0.002003 | 0.002074 |
| test_time_generator_v6_2.test | RUN | 0.274369 | 0.801761 | 0.918416 | 0.001665 | 0.001826 | 0.001667 |
| test_time_generator_v6_3.test | RUN | 0.295017 | 0.826295 | 1.001020 | 0.004270 | 0.003995 | 0.004417 |
| test_time_generator_v7.test | RUN | 0.262602 | 0.847782 | 0.915513 | 0.001816 | 0.001842 | 0.001716 |
| test_time_generator_v7_2.test | RUN | 0.243816 | 0.751870 | 0.848027 | 0.001385 | 0.001620 | 0.001352 |
| test_time_generator_v7_3.test | RUN | 0.243223 | 0.976648 | 0.861701 | 0.002317 | 0.002593 | 0.002458 |
| test_serialization.test | RUN | 0.441400 | 1.441897 | 1.589780 | 0.001476 | 0.001644 | 0.001577 |
| test_tagging.test | RUN | 0.249317 | 0.911760 | 0.852837 | 0.001444 | 0.001513 | 0.001458 |
| test_uuid_class.test | RUN | 0.260346 | 0.801289 | 0.912233 | 0.001282 | 0.001317 | 0.001404 |
| test_uuid_in_map.test | RUN | 0.284185 | 0.908435 | 0.989078 | 0.001322 | 0.001380 | 0.001382 |
| test_hash.test | RUN | 0.276771 | 0.823357 | 0.922092 | 0.001362 | 0.001501 | 0.001430 |
| test_hash_value.test | RUN | 0.203356 | 0.569844 | 0.680652 | 0.005276 | 0.005131 | 0.005056 |
| test_std_unordered.test | RUN | 0.271663 | 0.929675 | 0.939736 | 0.001453 | 0.001517 | 0.001569 |
| test_boost_unordered.test | RUN | 0.382555 | 1.203547 | 1.211772 | 0.001377 | 0.001506 | 0.001489 |
| test_detail_md5.test | RUN | 0.178157 | 0.582889 | 0.672106 | 0.001477 | 0.001581 | 0.001458 |
| test_detail_sha1.test | RUN | 0.163240 | 0.739754 | 0.614386 | 0.010540 | 0.010265 | 0.009316 |
| test_detail_endian.test | RUN | 0.127304 | 0.418656 | 0.443228 | 0.000966 | 0.001468 | 0.001307 |
| test_detail_chacha20.test | RUN | 0.140690 | 0.533867 | 0.470168 | 0.001390 | 0.001454 | 0.001387 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.123315 | 0.285267 | 0.349818 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.123232 | 0.286551 | 0.366824 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.204020 | 0.583512 | 0.656598 | 0.001302 | 0.001505 | 0.001386 |
| test_bench_random.test | RUN | 0.235968 | 0.761576 | 0.866275 | 0.012588 | 0.012713 | 0.012524 |
| test_entropy_error.test | RUN | 0.118407 | 0.347339 | 0.400132 | 0.001374 | 0.001468 | 0.001547 |
| test_detail_random_provider.test | RUN | 0.235727 | 0.593094 | 0.766029 | 0.001369 | 0.001465 | 0.001415 |
| test_constants.test | RUN | 0.183231 | 0.550049 | 0.621176 | 0.001330 | 0.001475 | 0.001316 |
| test_uuid_cx.test | COMPILE | 0.103046 | 0.246679 | 0.318111 | — | — | — |
| test_uuid_cx2.test | RUN | 0.199645 | 0.627111 | 0.684720 | 0.001322 | 0.001482 | 0.001396 |
| test_uuid_cx3.test | RUN | 0.170017 | 0.485746 | 0.601826 | 0.001437 | 0.001370 | 0.001251 |
| test_uuid_cx3_no_simd.test | RUN | 0.157868 | 0.460178 | 0.530913 | 0.001401 | 0.001376 | 0.001197 |
| test_hash_value_cx.test | RUN | 0.163392 | 0.430026 | 0.520381 | 0.001260 | 0.001559 | 0.001336 |
| test_string_generator_cx.test | RUN | 0.185274 | 0.542969 | 0.618169 | 0.001588 | 0.001489 | 0.001450 |
| test_string_generator_cx2.test | RUN | 0.237204 | 0.671257 | 0.721563 | 0.001520 | 0.001532 | 0.001316 |
| test_constants_cx.test | RUN | 0.152698 | 0.379841 | 0.499712 | 0.001335 | 0.001363 | 0.001433 |
| test_from_chars_cx.test | RUN | 0.206567 | 0.724265 | 0.659893 | 0.001204 | 0.001444 | 0.001388 |
| test_from_chars_cx2.test | RUN | 0.213916 | 0.904565 | 0.739281 | 0.001450 | 0.001550 | 0.001480 |
| test_to_chars_cx.test | RUN | 0.207770 | 0.831862 | 0.807810 | 0.001076 | 0.001557 | 0.001060 |
| test_uuid_from_string_cx.test | RUN | 0.225220 | 0.849593 | 0.724562 | 0.001020 | 0.001078 | 0.001011 |
| quick.test | RUN | 0.227496 | 0.631219 | 0.734174 | 0.000894 | 0.001017 | 0.000900 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.009× | 1.021×, 0.997× | 0.998× |
| clang | 0.997× | 1.000×, 0.995× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001106s | 0.001148s | 0.001093s | byte equality observed |
| test_alignment.test | 10 | 0.001115s | 0.001131s | 0.001103s | byte equality observed |
| test_alignment_2.test | 10 | 0.001118s | 0.001123s | 0.001099s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001082s | 0.001125s | 0.001079s | byte equality observed |
| test_bench_random.test | 2 | 0.012408s | 0.012447s | 0.012424s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001150s | 0.001185s | 0.001131s | byte equality observed |
| test_comparison.test | 10 | 0.001166s | 0.001140s | 0.001123s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001188s | 0.001168s | 0.001145s | byte equality observed |
| test_constants.test | 10 | 0.001154s | 0.001163s | 0.001099s | byte equality observed |
| test_constants_cx.test | 10 | 0.001115s | 0.001131s | 0.001118s | byte equality observed |
| test_data.test | 10 | 0.001120s | 0.001154s | 0.001135s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001135s | 0.001128s | 0.001130s | byte equality observed |
| test_detail_endian.test | 10 | 0.001129s | 0.001101s | 0.001131s | byte equality observed |
| test_detail_md5.test | 10 | 0.001167s | 0.001155s | 0.001158s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001154s | 0.001163s | 0.001174s | byte equality observed |
| test_detail_sha1.test | 3 | 0.009107s | 0.009206s | 0.008223s | byte equality observed |
| test_entropy_error.test | 10 | 0.001143s | 0.001132s | 0.001137s | byte equality observed |
| test_from_chars.test | 10 | 0.001121s | 0.001130s | 0.001140s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001135s | 0.001154s | 0.001167s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001117s | 0.001171s | 0.001135s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001122s | 0.001136s | 0.001095s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001136s | 0.001146s | 0.001109s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001132s | 0.001153s | 0.001145s | byte equality observed |
| test_hash.test | 10 | 0.001140s | 0.001133s | 0.001132s | byte equality observed |
| test_hash_value.test | 5 | 0.004733s | 0.004666s | 0.004624s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001117s | 0.001147s | 0.001129s | byte equality observed |
| test_include1.test | 10 | 0.000476s | 0.000484s | 0.001141s | byte equality observed |
| test_io.test | 10 | 0.001208s | 0.001247s | 0.001233s | byte equality observed |
| test_io_2.test | 10 | 0.001293s | 0.001318s | 0.001303s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001266s | 0.001291s | 0.001317s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001240s | 0.001238s | 0.001231s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001128s | 0.001147s | 0.001144s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001164s | 0.001187s | 0.001159s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001167s | 0.001181s | 0.001158s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001165s | 0.001208s | 0.001208s | byte equality observed |
| test_namespaces.test | 10 | 0.001156s | 0.001133s | 0.001149s | byte equality observed |
| test_nil_generator.test | 10 | 0.001103s | 0.001093s | 0.001113s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001142s | 0.001120s | 0.001113s | byte equality observed |
| test_random_generator.test | 6 | 0.003364s | 0.003365s | 0.003334s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001140s | 0.001112s | 0.001109s | byte equality observed |
| test_serialization.test | 10 | 0.001254s | 0.001271s | 0.001234s | byte equality observed |
| test_std_unordered.test | 10 | 0.001204s | 0.001211s | 0.001185s | byte equality observed |
| test_string_generator.test | 10 | 0.001235s | 0.001252s | 0.001243s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001179s | 0.001163s | 0.001170s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001141s | 0.001130s | 0.001128s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001139s | 0.001149s | 0.001133s | byte equality observed |
| test_tagging.test | 10 | 0.001158s | 0.001167s | 0.001139s | byte equality observed |
| test_time_generator.test | 10 | 0.001164s | 0.001169s | 0.001160s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001594s | 0.001707s | 0.001732s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001418s | 0.001475s | 0.001463s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004205s | 0.004478s | 0.004569s | byte equality observed |
| test_time_generator_v6.test | 9 | 0.001605s | 0.001712s | 0.001697s | byte equality observed |
| test_time_generator_v6_2.test | 9 | 0.001426s | 0.001452s | 0.001460s | byte equality observed |
| test_time_generator_v6_3.test | 3 | 0.004482s | 0.004111s | 0.004614s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001432s | 0.001474s | 0.001430s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001207s | 0.001243s | 0.001166s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002268s | 0.002292s | 0.002262s | byte equality observed |
| test_to_chars.test | 10 | 0.001208s | 0.001144s | 0.001159s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001146s | 0.001153s | 0.001139s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001137s | 0.001146s | 0.001147s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001128s | 0.001145s | 0.001149s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001141s | 0.001158s | 0.001128s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001210s | 0.001224s | 0.001195s | byte equality observed |
| test_uuid.test | 10 | 0.001141s | 0.001140s | 0.001147s | byte equality observed |
| test_uuid_2.test | 10 | 0.001128s | 0.001134s | 0.001132s | byte equality observed |
| test_uuid_3.test | 10 | 0.001104s | 0.001149s | 0.001137s | byte equality observed |
| test_uuid_class.test | 10 | 0.001154s | 0.001158s | 0.001174s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001121s | 0.001124s | 0.001141s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001130s | 0.001114s | 0.001166s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001126s | 0.001116s | 0.001122s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001108s | 0.001116s | 0.001116s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001145s | 0.001144s | 0.001155s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001429s | 0.001465s | 0.001467s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001238s | 0.001260s | 0.001239s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001144s | 0.001135s | 0.001144s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001134s | 0.001162s | 0.001132s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001127s | 0.001145s | 0.001128s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
