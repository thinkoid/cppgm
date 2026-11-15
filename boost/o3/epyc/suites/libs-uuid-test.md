# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.312573 | 0.734821 | 0.992781 | 0.000680 | 0.000730 | 0.001795 |
| test_uuid.test | RUN | 0.203317 | 0.594473 | 0.731101 | 0.001690 | 0.001734 | 0.001677 |
| test_uuid_no_simd.test | RUN | 0.186798 | 0.600901 | 0.673787 | 0.001723 | 0.001412 | 0.001376 |
| test_uuid_2.test | RUN | 0.148753 | 0.434769 | 0.459087 | 0.001560 | 0.001681 | 0.001452 |
| test_uuid_3.test | RUN | 0.121521 | 0.292929 | 0.385064 | 0.001910 | 0.001806 | 0.001255 |
| test_alignment.test | RUN | 0.115297 | 0.280440 | 0.334917 | 0.001725 | 0.001637 | 0.001663 |
| test_alignment_2.test | RUN | 0.119563 | 0.290891 | 0.341165 | 0.001636 | 0.001621 | 0.001508 |
| test_attribute_packed.test | RUN | 0.117459 | 0.274701 | 0.341120 | 0.001433 | 0.001632 | 0.001471 |
| test_pragma_pack.test | RUN | 0.114170 | 0.259761 | 0.321373 | 0.001642 | 0.001651 | 0.001304 |
| test_data.test | RUN | 0.137699 | 0.465730 | 0.488595 | 0.001761 | 0.001531 | 0.001681 |
| test_comparison.test | RUN | 0.191119 | 0.545107 | 0.661388 | 0.001518 | 0.001665 | 0.001520 |
| test_comparison_no_simd.test | RUN | 0.184243 | 0.614338 | 0.599100 | 0.001711 | 0.001486 | 0.001644 |
| test_io.test | RUN | 0.231207 | 1.057958 | 1.007659 | 0.001852 | 0.001657 | 0.001776 |
| test_io_no_simd.test | RUN | 0.229391 | 1.050887 | 0.974361 | 0.001455 | 0.001775 | 0.001726 |
| test_io_2.test | RUN | 0.194291 | 1.081206 | 0.702019 | 0.001488 | 0.001420 | 0.001755 |
| test_io_2_no_simd.test | RUN | 0.171096 | 1.026342 | 0.668944 | 0.001733 | 0.001618 | 0.001669 |
| test_to_chars.test | RUN | 0.175224 | 0.699426 | 0.669394 | 0.001767 | 0.001733 | 0.001662 |
| test_to_chars_no_simd.test | RUN | 0.162047 | 0.682572 | 0.643931 | 0.001808 | 0.001525 | 0.001752 |
| test_to_chars_2.test | RUN | 0.211645 | 1.236099 | 0.778619 | 0.001565 | 0.001571 | 0.001388 |
| test_to_chars_2_no_simd.test | RUN | 0.198238 | 1.300213 | 0.724841 | 0.001530 | 0.001453 | 0.001700 |
| test_to_chars_3.test | RUN | 0.149806 | 0.448613 | 0.481644 | 0.001742 | 0.001304 | 0.001292 |
| test_from_chars.test | RUN | 0.171537 | 0.621250 | 0.542555 | 0.001554 | 0.001581 | 0.001575 |
| test_from_chars_no_simd.test | RUN | 0.146968 | 0.500638 | 0.449648 | 0.001485 | 0.001319 | 0.001355 |
| test_from_chars_2.test | RUN | 0.167486 | 0.621714 | 0.524149 | 0.001476 | 0.001621 | 0.001593 |
| test_from_chars_2_no_simd.test | RUN | 0.142434 | 0.485624 | 0.436238 | 0.001698 | 0.001763 | 0.001504 |
| test_uuid_from_string.test | RUN | 0.195908 | 0.719399 | 0.664347 | 0.001526 | 0.001754 | 0.001758 |
| test_uuid_from_string_2.test | RUN | 0.169025 | 0.667121 | 0.535376 | 0.001794 | 0.001640 | 0.001777 |
| test_uuid_from_string_3.test | RUN | 0.174027 | 0.648013 | 0.579203 | 0.001544 | 0.001808 | 0.001825 |
| test_uuid_clock.test | RUN | 0.105890 | 0.278182 | 0.338024 | 0.001420 | 0.001779 | 0.001573 |
| test_nil_generator.test | RUN | 0.124456 | 0.316643 | 0.376578 | 0.001746 | 0.001754 | 0.001746 |
| test_string_generator.test | RUN | 0.159627 | 0.517546 | 0.558589 | 0.001668 | 0.001806 | 0.001848 |
| test_string_generator_2.test | RUN | 0.197720 | 0.695661 | 0.651538 | 0.001534 | 0.001670 | 0.001685 |
| test_random_generator.test | RUN | 0.271292 | 1.297823 | 0.910696 | 0.058987 | 0.059421 | 0.059459 |
| test_random_generator_2.test | RUN | 0.196517 | 0.501698 | 0.616031 | 0.001217 | 0.001666 | 0.001565 |
| test_name_generator.test | RUN | 0.169537 | 1.617091 | 0.640716 | 0.001499 | 0.001614 | 0.001722 |
| test_namespaces.test | RUN | 0.143696 | 0.359609 | 0.439512 | 0.001104 | 0.001672 | 0.001467 |
| test_name_generator_md5.test | RUN | 0.177521 | 0.804149 | 0.648660 | 0.001708 | 0.001634 | 0.001786 |
| test_name_generator_sha1.test | RUN | 0.171823 | 2.372066 | 0.642214 | 0.001659 | 0.001643 | 0.001548 |
| test_time_generator.test | RUN | 0.185330 | 0.494860 | 0.595373 | 0.001456 | 0.001711 | 0.001439 |
| test_time_generator_v1.test | RUN | 0.205895 | 0.555387 | 0.668494 | 0.001934 | 0.002092 | 0.002170 |
| test_time_generator_v1_2.test | RUN | 0.206181 | 0.519145 | 0.610441 | 0.001857 | 0.001883 | 0.002044 |
| test_time_generator_v1_3.test | RUN | 0.227245 | 0.548847 | 0.701537 | 0.003291 | 0.003654 | 0.003584 |
| test_time_generator_v6.test | RUN | 0.211102 | 0.547413 | 0.662966 | 0.001919 | 0.002108 | 0.001902 |
| test_time_generator_v6_2.test | RUN | 0.205991 | 0.520187 | 0.620726 | 0.001615 | 0.001934 | 0.002016 |
| test_time_generator_v6_3.test | RUN | 0.228359 | 0.550393 | 0.700272 | 0.003415 | 0.004566 | 0.004762 |
| test_time_generator_v7.test | RUN | 0.199445 | 0.562624 | 0.626693 | 0.001796 | 0.001975 | 0.001931 |
| test_time_generator_v7_2.test | RUN | 0.186911 | 0.517409 | 0.584812 | 0.001655 | 0.001812 | 0.001765 |
| test_time_generator_v7_3.test | RUN | 0.185775 | 0.666749 | 0.611263 | 0.030149 | 0.030494 | 0.030516 |
| test_serialization.test | RUN | 0.352763 | 0.974857 | 1.121816 | 0.001903 | 0.001730 | 0.001974 |
| test_tagging.test | RUN | 0.186661 | 0.595052 | 0.599938 | 0.001496 | 0.001560 | 0.001676 |
| test_uuid_class.test | RUN | 0.196682 | 0.508384 | 0.654112 | 0.001444 | 0.001400 | 0.001626 |
| test_uuid_in_map.test | RUN | 0.214458 | 0.602200 | 0.704274 | 0.001352 | 0.001664 | 0.001656 |
| test_hash.test | RUN | 0.210289 | 0.522649 | 0.625018 | 0.001565 | 0.001576 | 0.001658 |
| test_hash_value.test | RUN | 0.141452 | 0.369644 | 0.463840 | 0.004060 | 0.003821 | 0.004204 |
| test_std_unordered.test | RUN | 0.187038 | 0.606767 | 0.648265 | 0.001466 | 0.001671 | 0.001829 |
| test_boost_unordered.test | RUN | 0.265653 | 0.775830 | 0.845653 | 0.001685 | 0.001728 | 0.001728 |
| test_detail_md5.test | RUN | 0.127164 | 0.375366 | 0.448486 | 0.001527 | 0.001685 | 0.001658 |
| test_detail_sha1.test | RUN | 0.119115 | 0.476721 | 0.438097 | 0.006905 | 0.006729 | 0.006229 |
| test_detail_endian.test | RUN | 0.088469 | 0.269208 | 0.320751 | 0.001490 | 0.001665 | 0.001583 |
| test_detail_chacha20.test | RUN | 0.103473 | 0.338959 | 0.322496 | 0.001690 | 0.001516 | 0.001612 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.087127 | 0.190978 | 0.256668 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.089133 | 0.188389 | 0.245257 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.151258 | 0.391542 | 0.469504 | 0.001677 | 0.001670 | 0.001646 |
| test_bench_random.test | RUN | 0.170798 | 0.492807 | 0.619445 | 0.308901 | 0.311962 | 0.311951 |
| test_entropy_error.test | RUN | 0.086218 | 0.236544 | 0.293662 | 0.001457 | 0.001794 | 0.001385 |
| test_detail_random_provider.test | RUN | 0.171841 | 0.390569 | 0.540217 | 0.003033 | 0.002941 | 0.001378 |
| test_constants.test | RUN | 0.129816 | 0.365837 | 0.440033 | 0.001426 | 0.001383 | 0.001475 |
| test_uuid_cx.test | COMPILE | 0.076700 | 0.135593 | 0.173314 | — | — | — |
| test_uuid_cx2.test | RUN | 0.132877 | 0.412395 | 0.489262 | 0.001439 | 0.001536 | 0.001443 |
| test_uuid_cx3.test | RUN | 0.097945 | 0.301085 | 0.437247 | 0.001582 | 0.001528 | 0.001387 |
| test_uuid_cx3_no_simd.test | RUN | 0.108670 | 0.300596 | 0.392315 | 0.001123 | 0.001394 | 0.001383 |
| test_hash_value_cx.test | RUN | 0.118799 | 0.299926 | 0.389389 | 0.001614 | 0.001555 | 0.001333 |
| test_string_generator_cx.test | RUN | 0.131051 | 0.374933 | 0.443129 | 0.001614 | 0.001404 | 0.001634 |
| test_string_generator_cx2.test | RUN | 0.162323 | 0.458139 | 0.509466 | 0.001137 | 0.001505 | 0.001319 |
| test_constants_cx.test | RUN | 0.113231 | 0.256845 | 0.358040 | 0.001462 | 0.001294 | 0.001680 |
| test_from_chars_cx.test | RUN | 0.144527 | 0.492178 | 0.481531 | 0.001709 | 0.001234 | 0.001212 |
| test_from_chars_cx2.test | RUN | 0.144797 | 0.582384 | 0.526907 | 0.001649 | 0.001319 | 0.001309 |
| test_to_chars_cx.test | RUN | 0.145877 | 0.547566 | 0.562732 | 0.001532 | 0.001578 | 0.001487 |
| test_uuid_from_string_cx.test | RUN | 0.154275 | 0.553578 | 0.542426 | 0.001325 | 0.001237 | 0.001096 |
| quick.test | RUN | 0.145573 | 0.445488 | 0.525504 | 0.001146 | 0.001363 | 0.001254 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.995×, 1.005× | 1.003× |
| clang | 0.997× | 1.005×, 0.989× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000909s | 0.000886s | 0.000870s | byte equality observed |
| test_alignment.test | 10 | 0.000910s | 0.000894s | 0.000916s | byte equality observed |
| test_alignment_2.test | 10 | 0.000912s | 0.000880s | 0.000898s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000878s | 0.000850s | 0.000864s | byte equality observed |
| test_bench_random.test | 1 | 0.323197s | 0.323402s | 0.323223s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001454s | 0.001442s | 0.001433s | byte equality observed |
| test_comparison.test | 10 | 0.000883s | 0.000857s | 0.000873s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000869s | 0.000848s | 0.000864s | byte equality observed |
| test_constants.test | 10 | 0.000873s | 0.000824s | 0.000835s | byte equality observed |
| test_constants_cx.test | 10 | 0.000840s | 0.000817s | 0.000824s | byte equality observed |
| test_data.test | 10 | 0.000875s | 0.000841s | 0.000856s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000858s | 0.000833s | 0.000872s | byte equality observed |
| test_detail_endian.test | 10 | 0.000850s | 0.000832s | 0.000857s | byte equality observed |
| test_detail_md5.test | 10 | 0.000896s | 0.000843s | 0.000869s | byte equality observed |
| test_detail_random_provider.test | 8 | 0.002479s | 0.002434s | 0.002495s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005032s | 0.005495s | 0.004141s | byte equality observed |
| test_entropy_error.test | 10 | 0.000947s | 0.000915s | 0.001004s | byte equality observed |
| test_from_chars.test | 10 | 0.000859s | 0.000857s | 0.000928s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000859s | 0.000830s | 0.000906s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000864s | 0.000837s | 0.000893s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000868s | 0.000836s | 0.000871s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000859s | 0.000860s | 0.000879s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000855s | 0.000873s | 0.000878s | byte equality observed |
| test_hash.test | 10 | 0.001414s | 0.001401s | 0.001414s | byte equality observed |
| test_hash_value.test | 7 | 0.002819s | 0.002729s | 0.002852s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000895s | 0.000873s | 0.000891s | byte equality observed |
| test_include1.test | 10 | 0.000398s | 0.000399s | 0.000828s | byte equality observed |
| test_io.test | 10 | 0.000996s | 0.000976s | 0.000929s | byte equality observed |
| test_io_2.test | 10 | 0.000991s | 0.000970s | 0.000978s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000988s | 0.000990s | 0.000975s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000950s | 0.000928s | 0.000966s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000888s | 0.000900s | 0.000903s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000933s | 0.000924s | 0.000920s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000938s | 0.000901s | 0.000934s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000918s | 0.000923s | 0.000924s | byte equality observed |
| test_namespaces.test | 10 | 0.000934s | 0.000896s | 0.000885s | byte equality observed |
| test_nil_generator.test | 10 | 0.000907s | 0.000900s | 0.000906s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000866s | 0.000873s | 0.000884s | byte equality observed |
| test_random_generator.test | 1 | 0.061536s | 0.061445s | 0.061442s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000862s | 0.000855s | 0.000852s | byte equality observed |
| test_serialization.test | 10 | 0.000946s | 0.000956s | 0.000946s | byte equality observed |
| test_std_unordered.test | 10 | 0.001443s | 0.001448s | 0.001436s | byte equality observed |
| test_string_generator.test | 10 | 0.000927s | 0.000944s | 0.000901s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000894s | 0.000895s | 0.000899s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000920s | 0.000894s | 0.000885s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000931s | 0.000892s | 0.000881s | byte equality observed |
| test_tagging.test | 10 | 0.000909s | 0.000892s | 0.000882s | byte equality observed |
| test_time_generator.test | 10 | 0.000935s | 0.000894s | 0.000926s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001191s | 0.001274s | 0.001275s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001080s | 0.001097s | 0.001115s | byte equality observed |
| test_time_generator_v1_3.test | 7 | 0.003211s | 0.002968s | 0.003098s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001226s | 0.001301s | 0.001296s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001105s | 0.001124s | 0.001116s | byte equality observed |
| test_time_generator_v6_3.test | 7 | 0.003219s | 0.003017s | 0.002991s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001125s | 0.001117s | 0.001132s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001275s | 0.001070s | 0.001250s | byte equality observed |
| test_time_generator_v7_3.test | 1 | 0.031559s | 0.030501s | 0.031667s | byte equality observed |
| test_to_chars.test | 10 | 0.000925s | 0.000869s | 0.000865s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000909s | 0.000850s | 0.000875s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000919s | 0.000911s | 0.000905s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000927s | 0.000902s | 0.000898s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000935s | 0.000897s | 0.000884s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000952s | 0.000935s | 0.000921s | byte equality observed |
| test_uuid.test | 10 | 0.000903s | 0.000887s | 0.000881s | byte equality observed |
| test_uuid_2.test | 10 | 0.000913s | 0.000924s | 0.000891s | byte equality observed |
| test_uuid_3.test | 10 | 0.000898s | 0.000883s | 0.000873s | byte equality observed |
| test_uuid_class.test | 10 | 0.000911s | 0.000927s | 0.000905s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000901s | 0.000895s | 0.000894s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000906s | 0.000920s | 0.000881s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000887s | 0.000900s | 0.000873s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000892s | 0.000910s | 0.000882s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000909s | 0.000916s | 0.000896s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001041s | 0.001039s | 0.001077s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000985s | 0.000968s | 0.000967s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000924s | 0.000931s | 0.000880s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000911s | 0.000925s | 0.000948s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000942s | 0.000915s | 0.000900s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
