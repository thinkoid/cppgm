# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.327193 | 0.779548 | 1.062092 | 0.000453 | 0.000468 | 0.001029 |
| test_uuid.test | RUN | 0.210386 | 0.648658 | 0.761088 | 0.001068 | 0.001253 | 0.001044 |
| test_uuid_no_simd.test | RUN | 0.197860 | 0.626356 | 0.683762 | 0.001026 | 0.001211 | 0.001062 |
| test_uuid_2.test | RUN | 0.141555 | 0.471776 | 0.507909 | 0.001074 | 0.001214 | 0.001063 |
| test_uuid_3.test | RUN | 0.113154 | 0.327929 | 0.402330 | 0.000825 | 0.001151 | 0.001038 |
| test_alignment.test | RUN | 0.102053 | 0.293343 | 0.351480 | 0.001086 | 0.001232 | 0.001059 |
| test_alignment_2.test | RUN | 0.100452 | 0.282134 | 0.356474 | 0.001053 | 0.000929 | 0.001046 |
| test_attribute_packed.test | RUN | 0.103000 | 0.293494 | 0.371587 | 0.001012 | 0.001209 | 0.001046 |
| test_pragma_pack.test | RUN | 0.106136 | 0.290915 | 0.367380 | 0.001065 | 0.001308 | 0.001002 |
| test_data.test | RUN | 0.125889 | 0.549415 | 0.518671 | 0.001039 | 0.001225 | 0.001030 |
| test_comparison.test | RUN | 0.185898 | 0.635085 | 0.700538 | 0.001115 | 0.001269 | 0.000986 |
| test_comparison_no_simd.test | RUN | 0.187815 | 0.708974 | 0.649546 | 0.001197 | 0.001202 | 0.001090 |
| test_io.test | RUN | 0.251476 | 1.234585 | 1.091367 | 0.001138 | 0.001351 | 0.001149 |
| test_io_no_simd.test | RUN | 0.241886 | 1.217128 | 1.026360 | 0.001023 | 0.001274 | 0.001112 |
| test_io_2.test | RUN | 0.197253 | 1.267604 | 0.755263 | 0.001188 | 0.001353 | 0.001166 |
| test_io_2_no_simd.test | RUN | 0.175310 | 1.215233 | 0.697656 | 0.001151 | 0.001210 | 0.001158 |
| test_to_chars.test | RUN | 0.172375 | 0.796218 | 0.700274 | 0.001133 | 0.001228 | 0.001086 |
| test_to_chars_no_simd.test | RUN | 0.173125 | 0.802835 | 0.679083 | 0.001213 | 0.001415 | 0.001085 |
| test_to_chars_2.test | RUN | 0.216277 | 1.477553 | 0.840793 | 0.001074 | 0.001219 | 0.001084 |
| test_to_chars_2_no_simd.test | RUN | 0.225697 | 1.556094 | 0.770330 | 0.001133 | 0.001333 | 0.001038 |
| test_to_chars_3.test | RUN | 0.138410 | 0.502248 | 0.508336 | 0.001048 | 0.001168 | 0.001028 |
| test_from_chars.test | RUN | 0.163490 | 0.732551 | 0.576055 | 0.001192 | 0.001033 | 0.001004 |
| test_from_chars_no_simd.test | RUN | 0.146402 | 0.585610 | 0.478866 | 0.001035 | 0.001121 | 0.001043 |
| test_from_chars_2.test | RUN | 0.157097 | 0.686195 | 0.570028 | 0.000987 | 0.001134 | 0.000978 |
| test_from_chars_2_no_simd.test | RUN | 0.138646 | 0.517330 | 0.464144 | 0.001040 | 0.001230 | 0.001056 |
| test_uuid_from_string.test | RUN | 0.188275 | 0.762177 | 0.685524 | 0.001193 | 0.001225 | 0.001004 |
| test_uuid_from_string_2.test | RUN | 0.167659 | 0.696957 | 0.583421 | 0.001330 | 0.001526 | 0.001294 |
| test_uuid_from_string_3.test | RUN | 0.168496 | 0.691506 | 0.598781 | 0.001034 | 0.001472 | 0.001155 |
| test_uuid_clock.test | RUN | 0.097095 | 0.279965 | 0.349636 | 0.001021 | 0.001274 | 0.001060 |
| test_nil_generator.test | RUN | 0.112160 | 0.324363 | 0.406855 | 0.001029 | 0.001277 | 0.001027 |
| test_string_generator.test | RUN | 0.158520 | 0.551947 | 0.571183 | 0.001146 | 0.001340 | 0.001185 |
| test_string_generator_2.test | RUN | 0.195266 | 0.783253 | 0.631553 | 0.001067 | 0.001181 | 0.000983 |
| test_random_generator.test | RUN | 0.264562 | 1.502347 | 0.971729 | 0.003938 | 0.004021 | 0.003881 |
| test_random_generator_2.test | RUN | 0.184758 | 0.565659 | 0.647321 | 0.001156 | 0.001178 | 0.000893 |
| test_name_generator.test | RUN | 0.166921 | 1.968644 | 0.710569 | 0.001118 | 0.001326 | 0.001027 |
| test_namespaces.test | RUN | 0.133654 | 0.413133 | 0.460544 | 0.001094 | 0.001168 | 0.001084 |
| test_name_generator_md5.test | RUN | 0.171584 | 0.926207 | 0.691281 | 0.001161 | 0.001271 | 0.001039 |
| test_name_generator_sha1.test | RUN | 0.165983 | 2.892593 | 0.677556 | 0.001164 | 0.001317 | 0.001008 |
| test_time_generator.test | RUN | 0.173639 | 0.569653 | 0.636709 | 0.001112 | 0.001331 | 0.001011 |
| test_time_generator_v1.test | RUN | 0.195320 | 0.628560 | 0.710867 | 0.001454 | 0.001688 | 0.001565 |
| test_time_generator_v1_2.test | RUN | 0.194589 | 0.587073 | 0.677594 | 0.001451 | 0.001516 | 0.001390 |
| test_time_generator_v1_3.test | RUN | 0.214278 | 0.608844 | 0.739644 | 0.004086 | 0.003441 | 0.004314 |
| test_time_generator_v6.test | RUN | 0.196760 | 0.634071 | 0.711400 | 0.001426 | 0.001638 | 0.001555 |
| test_time_generator_v6_2.test | RUN | 0.192932 | 0.586554 | 0.680586 | 0.001307 | 0.001541 | 0.001317 |
| test_time_generator_v6_3.test | RUN | 0.213598 | 0.624416 | 0.758532 | 0.003584 | 0.003589 | 0.003508 |
| test_time_generator_v7.test | RUN | 0.187579 | 0.626971 | 0.693271 | 0.001265 | 0.001342 | 0.001333 |
| test_time_generator_v7_2.test | RUN | 0.175876 | 0.543645 | 0.639066 | 0.001135 | 0.001230 | 0.001129 |
| test_time_generator_v7_3.test | RUN | 0.177030 | 0.704677 | 0.647611 | 0.002447 | 0.002659 | 0.002481 |
| test_serialization.test | RUN | 0.328207 | 1.081284 | 1.199426 | 0.001196 | 0.001290 | 0.001154 |
| test_tagging.test | RUN | 0.176224 | 0.667488 | 0.648306 | 0.001092 | 0.001300 | 0.001065 |
| test_uuid_class.test | RUN | 0.187904 | 0.590712 | 0.688444 | 0.001056 | 0.001153 | 0.000843 |
| test_uuid_in_map.test | RUN | 0.206684 | 0.669296 | 0.737977 | 0.001051 | 0.001108 | 0.001029 |
| test_hash.test | RUN | 0.209191 | 0.612715 | 0.682555 | 0.001035 | 0.001252 | 0.001019 |
| test_hash_value.test | RUN | 0.142764 | 0.430142 | 0.500733 | 0.004221 | 0.003798 | 0.003948 |
| test_std_unordered.test | RUN | 0.195291 | 0.689532 | 0.708885 | 0.001119 | 0.001253 | 0.001080 |
| test_boost_unordered.test | RUN | 0.272485 | 0.893079 | 0.921174 | 0.001055 | 0.001248 | 0.001062 |
| test_detail_md5.test | RUN | 0.122711 | 0.430922 | 0.487921 | 0.001080 | 0.001070 | 0.001067 |
| test_detail_sha1.test | RUN | 0.126056 | 0.555425 | 0.455492 | 0.007781 | 0.007674 | 0.006958 |
| test_detail_endian.test | RUN | 0.092094 | 0.316413 | 0.331154 | 0.000997 | 0.001240 | 0.001021 |
| test_detail_chacha20.test | RUN | 0.101218 | 0.390586 | 0.346259 | 0.001013 | 0.001204 | 0.001000 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.086565 | 0.213565 | 0.272109 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.088256 | 0.213117 | 0.272663 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.148610 | 0.427584 | 0.487634 | 0.001031 | 0.001255 | 0.001034 |
| test_bench_random.test | RUN | 0.171882 | 0.566541 | 0.658257 | 0.015678 | 0.015775 | 0.015721 |
| test_entropy_error.test | RUN | 0.086331 | 0.255762 | 0.299992 | 0.001027 | 0.001152 | 0.001015 |
| test_detail_random_provider.test | RUN | 0.169509 | 0.436923 | 0.572395 | 0.001065 | 0.001215 | 0.001121 |
| test_constants.test | RUN | 0.135506 | 0.408930 | 0.459938 | 0.000979 | 0.001219 | 0.001020 |
| test_uuid_cx.test | COMPILE | 0.073662 | 0.189745 | 0.223666 | — | — | — |
| test_uuid_cx2.test | RUN | 0.139339 | 0.470937 | 0.515545 | 0.001034 | 0.001126 | 0.000977 |
| test_uuid_cx3.test | RUN | 0.119114 | 0.362725 | 0.454178 | 0.001110 | 0.001033 | 0.001080 |
| test_uuid_cx3_no_simd.test | RUN | 0.112451 | 0.346205 | 0.393567 | 0.001031 | 0.001042 | 0.001054 |
| test_hash_value_cx.test | RUN | 0.113760 | 0.324872 | 0.403087 | 0.000861 | 0.001142 | 0.001049 |
| test_string_generator_cx.test | RUN | 0.134406 | 0.409985 | 0.460679 | 0.001209 | 0.001212 | 0.000993 |
| test_string_generator_cx2.test | RUN | 0.173210 | 0.516047 | 0.545041 | 0.001083 | 0.001199 | 0.001007 |
| test_constants_cx.test | RUN | 0.105966 | 0.279451 | 0.374488 | 0.001202 | 0.001286 | 0.001005 |
| test_from_chars_cx.test | RUN | 0.145845 | 0.545814 | 0.499840 | 0.001032 | 0.001291 | 0.000907 |
| test_from_chars_cx2.test | RUN | 0.148923 | 0.675745 | 0.568445 | 0.001067 | 0.001152 | 0.001011 |
| test_to_chars_cx.test | RUN | 0.148330 | 0.631576 | 0.597662 | 0.001179 | 0.001284 | 0.000767 |
| test_uuid_from_string_cx.test | RUN | 0.164487 | 0.622910 | 0.589171 | 0.000781 | 0.000849 | 0.000765 |
| quick.test | RUN | 0.169780 | 0.481330 | 0.580269 | 0.000766 | 0.000777 | 0.000741 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.009× | 1.006×, 1.012× | 1.001× |
| clang | 1.007× | 1.009×, 1.004× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000804s | 0.000816s | 0.000804s | byte equality observed |
| test_alignment.test | 10 | 0.000805s | 0.000808s | 0.000818s | byte equality observed |
| test_alignment_2.test | 10 | 0.000821s | 0.000814s | 0.000816s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000741s | 0.000757s | 0.000756s | byte equality observed |
| test_bench_random.test | 2 | 0.015389s | 0.015351s | 0.015325s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000790s | 0.000801s | 0.000788s | byte equality observed |
| test_comparison.test | 10 | 0.000740s | 0.000747s | 0.000768s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000792s | 0.000807s | 0.000789s | byte equality observed |
| test_constants.test | 10 | 0.000808s | 0.000813s | 0.000800s | byte equality observed |
| test_constants_cx.test | 10 | 0.000788s | 0.000806s | 0.000784s | byte equality observed |
| test_data.test | 10 | 0.000802s | 0.000810s | 0.000802s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000828s | 0.000824s | 0.000837s | byte equality observed |
| test_detail_endian.test | 10 | 0.000819s | 0.000814s | 0.000821s | byte equality observed |
| test_detail_md5.test | 10 | 0.000834s | 0.000865s | 0.000826s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000821s | 0.000848s | 0.000815s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005305s | 0.006407s | 0.005639s | byte equality observed |
| test_entropy_error.test | 10 | 0.000770s | 0.000744s | 0.000745s | byte equality observed |
| test_from_chars.test | 10 | 0.000750s | 0.000746s | 0.000752s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000807s | 0.000770s | 0.000824s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000819s | 0.000830s | 0.000813s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000807s | 0.000782s | 0.000810s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000825s | 0.000839s | 0.000812s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000815s | 0.000805s | 0.000827s | byte equality observed |
| test_hash.test | 10 | 0.000821s | 0.000820s | 0.000811s | byte equality observed |
| test_hash_value.test | 6 | 0.003246s | 0.003202s | 0.003135s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000750s | 0.000758s | 0.000759s | byte equality observed |
| test_include1.test | 10 | 0.000343s | 0.000332s | 0.000752s | byte equality observed |
| test_io.test | 10 | 0.000862s | 0.000839s | 0.000854s | byte equality observed |
| test_io_2.test | 10 | 0.000912s | 0.000874s | 0.000909s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000914s | 0.000906s | 0.000903s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000873s | 0.000865s | 0.000870s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000809s | 0.000813s | 0.000801s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000830s | 0.000848s | 0.000822s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000834s | 0.000838s | 0.000856s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000845s | 0.000843s | 0.000857s | byte equality observed |
| test_namespaces.test | 10 | 0.000801s | 0.000819s | 0.000798s | byte equality observed |
| test_nil_generator.test | 10 | 0.000814s | 0.000794s | 0.000803s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000776s | 0.000761s | 0.000774s | byte equality observed |
| test_random_generator.test | 5 | 0.003652s | 0.003659s | 0.003627s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000759s | 0.000745s | 0.000765s | byte equality observed |
| test_serialization.test | 10 | 0.000894s | 0.000885s | 0.000865s | byte equality observed |
| test_std_unordered.test | 10 | 0.000905s | 0.000877s | 0.000895s | byte equality observed |
| test_string_generator.test | 10 | 0.000881s | 0.000866s | 0.000875s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000813s | 0.000827s | 0.000832s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000817s | 0.000816s | 0.000785s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000817s | 0.000813s | 0.000838s | byte equality observed |
| test_tagging.test | 10 | 0.000834s | 0.000860s | 0.000810s | byte equality observed |
| test_time_generator.test | 10 | 0.000851s | 0.000855s | 0.000835s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001125s | 0.001228s | 0.001224s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.000998s | 0.001031s | 0.001041s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004469s | 0.004481s | 0.004680s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001152s | 0.001231s | 0.001256s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001026s | 0.001031s | 0.001072s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004770s | 0.004572s | 0.004614s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000982s | 0.001040s | 0.001055s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000877s | 0.000865s | 0.000859s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002263s | 0.002253s | 0.002275s | byte equality observed |
| test_to_chars.test | 10 | 0.000825s | 0.000815s | 0.000819s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000803s | 0.000796s | 0.000799s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000825s | 0.000810s | 0.000839s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000827s | 0.000825s | 0.000815s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000822s | 0.000797s | 0.000836s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000875s | 0.000853s | 0.000869s | byte equality observed |
| test_uuid.test | 10 | 0.000792s | 0.000795s | 0.000808s | byte equality observed |
| test_uuid_2.test | 10 | 0.000809s | 0.000798s | 0.000814s | byte equality observed |
| test_uuid_3.test | 10 | 0.000798s | 0.000814s | 0.000804s | byte equality observed |
| test_uuid_class.test | 10 | 0.000820s | 0.000838s | 0.000855s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000811s | 0.000803s | 0.000804s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000825s | 0.000789s | 0.000804s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000821s | 0.000793s | 0.000814s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000807s | 0.000792s | 0.000810s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000822s | 0.000808s | 0.000825s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000952s | 0.000958s | 0.000987s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000862s | 0.000851s | 0.000905s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000804s | 0.000813s | 0.000797s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000827s | 0.000826s | 0.000825s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000830s | 0.000817s | 0.000832s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
