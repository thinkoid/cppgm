# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.334204 | 0.811133 | 1.059149 | 0.000556 | 0.000479 | 0.001071 |
| test_uuid.test | RUN | 0.209521 | 0.676188 | 0.773411 | 0.001338 | 0.001397 | 0.001136 |
| test_uuid_no_simd.test | RUN | 0.207985 | 0.641839 | 0.689880 | 0.001349 | 0.001144 | 0.001108 |
| test_uuid_2.test | RUN | 0.147845 | 0.491858 | 0.516489 | 0.001166 | 0.001203 | 0.001193 |
| test_uuid_3.test | RUN | 0.125276 | 0.339668 | 0.409413 | 0.001265 | 0.001228 | 0.001093 |
| test_alignment.test | RUN | 0.115958 | 0.301036 | 0.367309 | 0.001425 | 0.001290 | 0.001110 |
| test_alignment_2.test | RUN | 0.113110 | 0.293207 | 0.370021 | 0.001260 | 0.001039 | 0.001095 |
| test_attribute_packed.test | RUN | 0.118434 | 0.307223 | 0.370986 | 0.001275 | 0.001427 | 0.001074 |
| test_pragma_pack.test | RUN | 0.115527 | 0.301202 | 0.347058 | 0.001263 | 0.001446 | 0.000967 |
| test_data.test | RUN | 0.138329 | 0.564081 | 0.528840 | 0.001149 | 0.001314 | 0.001082 |
| test_comparison.test | RUN | 0.196634 | 0.650567 | 0.701634 | 0.001277 | 0.001321 | 0.001098 |
| test_comparison_no_simd.test | RUN | 0.196791 | 0.739848 | 0.651405 | 0.001190 | 0.001254 | 0.001187 |
| test_io.test | RUN | 0.264461 | 1.282885 | 1.098877 | 0.001480 | 0.001387 | 0.001198 |
| test_io_no_simd.test | RUN | 0.254614 | 1.255964 | 1.039632 | 0.001027 | 0.001346 | 0.001153 |
| test_io_2.test | RUN | 0.202842 | 1.318049 | 0.768156 | 0.001348 | 0.001580 | 0.001208 |
| test_io_2_no_simd.test | RUN | 0.181269 | 1.232632 | 0.700683 | 0.001373 | 0.001347 | 0.001107 |
| test_to_chars.test | RUN | 0.185851 | 0.831744 | 0.708973 | 0.001374 | 0.001550 | 0.001217 |
| test_to_chars_no_simd.test | RUN | 0.179402 | 0.836696 | 0.690022 | 0.001321 | 0.001412 | 0.001175 |
| test_to_chars_2.test | RUN | 0.230301 | 1.523008 | 0.851591 | 0.001341 | 0.001343 | 0.001204 |
| test_to_chars_2_no_simd.test | RUN | 0.233320 | 1.612291 | 0.772769 | 0.001128 | 0.001253 | 0.001185 |
| test_to_chars_3.test | RUN | 0.150606 | 0.528270 | 0.518159 | 0.001228 | 0.001460 | 0.001102 |
| test_from_chars.test | RUN | 0.172681 | 0.769625 | 0.579116 | 0.001449 | 0.001020 | 0.001125 |
| test_from_chars_no_simd.test | RUN | 0.153642 | 0.608828 | 0.488196 | 0.001260 | 0.001110 | 0.001109 |
| test_from_chars_2.test | RUN | 0.167185 | 0.716499 | 0.574390 | 0.001098 | 0.001245 | 0.001025 |
| test_from_chars_2_no_simd.test | RUN | 0.147240 | 0.538761 | 0.458912 | 0.001289 | 0.001268 | 0.001095 |
| test_uuid_from_string.test | RUN | 0.197527 | 0.779486 | 0.692623 | 0.001321 | 0.001401 | 0.001121 |
| test_uuid_from_string_2.test | RUN | 0.176338 | 0.712605 | 0.585121 | 0.001631 | 0.001643 | 0.001404 |
| test_uuid_from_string_3.test | RUN | 0.175080 | 0.716789 | 0.609501 | 0.001205 | 0.001437 | 0.001196 |
| test_uuid_clock.test | RUN | 0.103405 | 0.287259 | 0.354745 | 0.001114 | 0.001500 | 0.001155 |
| test_nil_generator.test | RUN | 0.122225 | 0.341806 | 0.416072 | 0.001104 | 0.001404 | 0.001221 |
| test_string_generator.test | RUN | 0.163650 | 0.568036 | 0.577967 | 0.001340 | 0.001615 | 0.001151 |
| test_string_generator_2.test | RUN | 0.203754 | 0.810027 | 0.643828 | 0.001212 | 0.001222 | 0.001213 |
| test_random_generator.test | RUN | 0.275437 | 1.551856 | 0.981973 | 0.004195 | 0.004265 | 0.003973 |
| test_random_generator_2.test | RUN | 0.194569 | 0.595225 | 0.657987 | 0.001304 | 0.001334 | 0.001126 |
| test_name_generator.test | RUN | 0.179629 | 2.044029 | 0.710925 | 0.001255 | 0.001529 | 0.001056 |
| test_namespaces.test | RUN | 0.139675 | 0.419574 | 0.474512 | 0.001137 | 0.001373 | 0.001125 |
| test_name_generator_md5.test | RUN | 0.183951 | 0.950902 | 0.696585 | 0.001294 | 0.001551 | 0.001200 |
| test_name_generator_sha1.test | RUN | 0.176895 | 2.988588 | 0.684274 | 0.001318 | 0.001447 | 0.001240 |
| test_time_generator.test | RUN | 0.180732 | 0.596558 | 0.640791 | 0.001204 | 0.001680 | 0.001192 |
| test_time_generator_v1.test | RUN | 0.202609 | 0.659204 | 0.720336 | 0.001546 | 0.001884 | 0.001627 |
| test_time_generator_v1_2.test | RUN | 0.203095 | 0.619447 | 0.672734 | 0.001557 | 0.001583 | 0.001474 |
| test_time_generator_v1_3.test | RUN | 0.225301 | 0.644339 | 0.747048 | 0.003822 | 0.004047 | 0.003454 |
| test_time_generator_v6.test | RUN | 0.205605 | 0.647054 | 0.716501 | 0.001780 | 0.001792 | 0.001548 |
| test_time_generator_v6_2.test | RUN | 0.198234 | 0.623749 | 0.677986 | 0.001340 | 0.001622 | 0.001405 |
| test_time_generator_v6_3.test | RUN | 0.223559 | 0.646990 | 0.759855 | 0.005260 | 0.004240 | 0.003430 |
| test_time_generator_v7.test | RUN | 0.195920 | 0.646305 | 0.692308 | 0.001321 | 0.001501 | 0.001324 |
| test_time_generator_v7_2.test | RUN | 0.185415 | 0.569611 | 0.635149 | 0.001256 | 0.001542 | 0.001220 |
| test_time_generator_v7_3.test | RUN | 0.182749 | 0.732799 | 0.641508 | 0.002655 | 0.002788 | 0.002605 |
| test_serialization.test | RUN | 0.332409 | 1.107914 | 1.194428 | 0.001384 | 0.001364 | 0.001249 |
| test_tagging.test | RUN | 0.185985 | 0.687298 | 0.651305 | 0.001334 | 0.001236 | 0.001205 |
| test_uuid_class.test | RUN | 0.192603 | 0.607839 | 0.685483 | 0.001212 | 0.001012 | 0.001181 |
| test_uuid_in_map.test | RUN | 0.218917 | 0.700779 | 0.755104 | 0.001217 | 0.001192 | 0.001104 |
| test_hash.test | RUN | 0.216623 | 0.623816 | 0.690726 | 0.001226 | 0.001258 | 0.001180 |
| test_hash_value.test | RUN | 0.154153 | 0.438146 | 0.514531 | 0.004091 | 0.004250 | 0.003970 |
| test_std_unordered.test | RUN | 0.207481 | 0.703683 | 0.707515 | 0.001358 | 0.001453 | 0.001207 |
| test_boost_unordered.test | RUN | 0.296949 | 0.916774 | 0.925329 | 0.001132 | 0.001548 | 0.001277 |
| test_detail_md5.test | RUN | 0.133741 | 0.436942 | 0.502978 | 0.001403 | 0.001207 | 0.001242 |
| test_detail_sha1.test | RUN | 0.126660 | 0.567196 | 0.463293 | 0.008417 | 0.008419 | 0.007172 |
| test_detail_endian.test | RUN | 0.098288 | 0.329351 | 0.346022 | 0.001161 | 0.001288 | 0.001156 |
| test_detail_chacha20.test | RUN | 0.107294 | 0.400021 | 0.357911 | 0.001126 | 0.001066 | 0.001186 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.093914 | 0.222602 | 0.276864 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.097939 | 0.222081 | 0.276889 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.159033 | 0.441026 | 0.506226 | 0.001255 | 0.001222 | 0.001241 |
| test_bench_random.test | RUN | 0.183348 | 0.581426 | 0.669218 | 0.016400 | 0.016515 | 0.016163 |
| test_entropy_error.test | RUN | 0.091669 | 0.260980 | 0.305447 | 0.001148 | 0.001312 | 0.001142 |
| test_detail_random_provider.test | RUN | 0.173459 | 0.448923 | 0.570757 | 0.001203 | 0.001450 | 0.001189 |
| test_constants.test | RUN | 0.144502 | 0.422257 | 0.470861 | 0.001132 | 0.001413 | 0.001062 |
| test_uuid_cx.test | COMPILE | 0.078643 | 0.193724 | 0.227206 | — | — | — |
| test_uuid_cx2.test | RUN | 0.150115 | 0.480874 | 0.514318 | 0.001328 | 0.001244 | 0.001119 |
| test_uuid_cx3.test | RUN | 0.129035 | 0.370426 | 0.459837 | 0.001071 | 0.001314 | 0.001080 |
| test_uuid_cx3_no_simd.test | RUN | 0.120138 | 0.351470 | 0.408695 | 0.001122 | 0.001339 | 0.001092 |
| test_hash_value_cx.test | RUN | 0.119152 | 0.335598 | 0.402177 | 0.001117 | 0.001369 | 0.001136 |
| test_string_generator_cx.test | RUN | 0.144282 | 0.427066 | 0.481146 | 0.001204 | 0.001271 | 0.001151 |
| test_string_generator_cx2.test | RUN | 0.181862 | 0.523814 | 0.550522 | 0.001105 | 0.001449 | 0.001155 |
| test_constants_cx.test | RUN | 0.112908 | 0.291987 | 0.380238 | 0.001350 | 0.001360 | 0.001096 |
| test_from_chars_cx.test | RUN | 0.154053 | 0.562397 | 0.513235 | 0.001222 | 0.001307 | 0.001078 |
| test_from_chars_cx2.test | RUN | 0.163170 | 0.703223 | 0.581424 | 0.001300 | 0.000938 | 0.001200 |
| test_to_chars_cx.test | RUN | 0.157700 | 0.648713 | 0.616586 | 0.000890 | 0.001342 | 0.000885 |
| test_uuid_from_string_cx.test | RUN | 0.170863 | 0.652653 | 0.594836 | 0.000908 | 0.000923 | 0.000840 |
| quick.test | RUN | 0.176251 | 0.492988 | 0.593094 | 0.000820 | 0.000922 | 0.000799 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.008× | 0.999×, 1.017× | 0.995× |
| clang | 1.011× | 1.013×, 1.009× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000804s | 0.000801s | 0.000839s | byte equality observed |
| test_alignment.test | 10 | 0.000805s | 0.000805s | 0.000800s | byte equality observed |
| test_alignment_2.test | 10 | 0.000826s | 0.000802s | 0.000827s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000757s | 0.000748s | 0.000760s | byte equality observed |
| test_bench_random.test | 2 | 0.015780s | 0.015749s | 0.015756s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000800s | 0.000794s | 0.000774s | byte equality observed |
| test_comparison.test | 10 | 0.000752s | 0.000740s | 0.000749s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000788s | 0.000814s | 0.000790s | byte equality observed |
| test_constants.test | 10 | 0.000808s | 0.000817s | 0.000808s | byte equality observed |
| test_constants_cx.test | 10 | 0.000785s | 0.000770s | 0.000794s | byte equality observed |
| test_data.test | 10 | 0.000791s | 0.000819s | 0.000839s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000794s | 0.000809s | 0.000801s | byte equality observed |
| test_detail_endian.test | 10 | 0.000803s | 0.000792s | 0.000823s | byte equality observed |
| test_detail_md5.test | 10 | 0.000852s | 0.000811s | 0.000811s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000824s | 0.000813s | 0.000809s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005407s | 0.006365s | 0.005672s | byte equality observed |
| test_entropy_error.test | 10 | 0.000750s | 0.000750s | 0.000758s | byte equality observed |
| test_from_chars.test | 10 | 0.000753s | 0.000735s | 0.000767s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000814s | 0.000810s | 0.000819s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000833s | 0.000812s | 0.000809s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000809s | 0.000814s | 0.000806s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000810s | 0.000820s | 0.000822s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000823s | 0.000864s | 0.000823s | byte equality observed |
| test_hash.test | 10 | 0.000832s | 0.000843s | 0.000812s | byte equality observed |
| test_hash_value.test | 6 | 0.003266s | 0.003185s | 0.003157s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000755s | 0.000745s | 0.000745s | byte equality observed |
| test_include1.test | 10 | 0.000342s | 0.000332s | 0.000756s | byte equality observed |
| test_io.test | 10 | 0.000845s | 0.000862s | 0.000839s | byte equality observed |
| test_io_2.test | 10 | 0.000887s | 0.000873s | 0.000873s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000912s | 0.000912s | 0.000896s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000870s | 0.000868s | 0.000878s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000796s | 0.000778s | 0.000793s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000813s | 0.000820s | 0.000841s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000836s | 0.000832s | 0.000834s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000836s | 0.000850s | 0.000854s | byte equality observed |
| test_namespaces.test | 10 | 0.000796s | 0.000825s | 0.000819s | byte equality observed |
| test_nil_generator.test | 10 | 0.000811s | 0.000818s | 0.000824s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000779s | 0.000771s | 0.000753s | byte equality observed |
| test_random_generator.test | 5 | 0.003740s | 0.003710s | 0.003706s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000757s | 0.000761s | 0.000745s | byte equality observed |
| test_serialization.test | 10 | 0.000866s | 0.000893s | 0.000887s | byte equality observed |
| test_std_unordered.test | 10 | 0.000848s | 0.000866s | 0.000861s | byte equality observed |
| test_string_generator.test | 10 | 0.000866s | 0.000865s | 0.000878s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000839s | 0.000800s | 0.000832s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000827s | 0.000807s | 0.000836s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000828s | 0.000820s | 0.000827s | byte equality observed |
| test_tagging.test | 10 | 0.000852s | 0.000833s | 0.000832s | byte equality observed |
| test_time_generator.test | 10 | 0.000870s | 0.000833s | 0.000846s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001128s | 0.001203s | 0.001226s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001014s | 0.001041s | 0.001051s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004377s | 0.004289s | 0.004603s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001174s | 0.001245s | 0.001281s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001031s | 0.001036s | 0.001038s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004810s | 0.004706s | 0.004697s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000988s | 0.001043s | 0.001058s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000860s | 0.000855s | 0.000871s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002304s | 0.002305s | 0.002330s | byte equality observed |
| test_to_chars.test | 10 | 0.000827s | 0.000822s | 0.000798s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000805s | 0.000802s | 0.000786s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000829s | 0.000819s | 0.000800s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000814s | 0.000835s | 0.000802s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000818s | 0.000815s | 0.000816s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000857s | 0.000848s | 0.000850s | byte equality observed |
| test_uuid.test | 10 | 0.000791s | 0.000818s | 0.000795s | byte equality observed |
| test_uuid_2.test | 10 | 0.000794s | 0.000834s | 0.000822s | byte equality observed |
| test_uuid_3.test | 10 | 0.000811s | 0.000819s | 0.000810s | byte equality observed |
| test_uuid_class.test | 10 | 0.000836s | 0.000819s | 0.000850s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000808s | 0.000822s | 0.000814s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000809s | 0.000828s | 0.000842s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000821s | 0.000771s | 0.000812s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000801s | 0.000819s | 0.000803s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000823s | 0.000828s | 0.000810s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000974s | 0.000947s | 0.000999s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000881s | 0.000870s | 0.000883s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000812s | 0.000778s | 0.000803s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000794s | 0.000800s | 0.000840s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000797s | 0.000829s | 0.000829s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44481767416).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
