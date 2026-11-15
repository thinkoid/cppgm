# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.372907 | 0.763209 | 0.957274 | 0.000690 | 0.000774 | 0.001640 |
| test_uuid.test | RUN | 0.222904 | 0.615565 | 0.685977 | 0.001916 | 0.001845 | 0.001638 |
| test_uuid_no_simd.test | RUN | 0.219606 | 0.619736 | 0.587207 | 0.001792 | 0.001612 | 0.001238 |
| test_uuid_2.test | RUN | 0.161051 | 0.450543 | 0.441354 | 0.001963 | 0.001801 | 0.001424 |
| test_uuid_3.test | RUN | 0.133160 | 0.319836 | 0.349211 | 0.001568 | 0.001728 | 0.001301 |
| test_alignment.test | RUN | 0.114835 | 0.266582 | 0.321660 | 0.001637 | 0.001671 | 0.001574 |
| test_alignment_2.test | RUN | 0.123154 | 0.271879 | 0.317466 | 0.001827 | 0.001486 | 0.001265 |
| test_attribute_packed.test | RUN | 0.112028 | 0.268038 | 0.333790 | 0.001537 | 0.001570 | 0.001603 |
| test_pragma_pack.test | RUN | 0.122952 | 0.270022 | 0.312945 | 0.001541 | 0.001601 | 0.001405 |
| test_data.test | RUN | 0.143762 | 0.474702 | 0.454985 | 0.001673 | 0.001535 | 0.001848 |
| test_comparison.test | RUN | 0.214899 | 0.562161 | 0.658287 | 0.001731 | 0.001811 | 0.001356 |
| test_comparison_no_simd.test | RUN | 0.199771 | 0.636787 | 0.582928 | 0.001227 | 0.001816 | 0.001627 |
| test_io.test | RUN | 0.255543 | 1.142868 | 0.999175 | 0.001753 | 0.001938 | 0.001854 |
| test_io_no_simd.test | RUN | 0.236715 | 1.150002 | 0.961318 | 0.001639 | 0.001808 | 0.001884 |
| test_io_2.test | RUN | 0.187242 | 1.158811 | 0.690901 | 0.001606 | 0.001516 | 0.001854 |
| test_io_2_no_simd.test | RUN | 0.168197 | 1.088236 | 0.663928 | 0.001964 | 0.001628 | 0.001854 |
| test_to_chars.test | RUN | 0.185236 | 0.726579 | 0.678787 | 0.001840 | 0.001928 | 0.001725 |
| test_to_chars_no_simd.test | RUN | 0.169176 | 0.758181 | 0.619310 | 0.001693 | 0.001832 | 0.001736 |
| test_to_chars_2.test | RUN | 0.205217 | 1.354157 | 0.766780 | 0.001462 | 0.001556 | 0.001339 |
| test_to_chars_2_no_simd.test | RUN | 0.207347 | 1.442764 | 0.709327 | 0.001530 | 0.001674 | 0.001636 |
| test_to_chars_3.test | RUN | 0.139294 | 0.504737 | 0.437852 | 0.001737 | 0.001532 | 0.001459 |
| test_from_chars.test | RUN | 0.161138 | 0.674640 | 0.506943 | 0.001409 | 0.001635 | 0.001456 |
| test_from_chars_no_simd.test | RUN | 0.141923 | 0.545438 | 0.411438 | 0.001502 | 0.001417 | 0.001375 |
| test_from_chars_2.test | RUN | 0.157587 | 0.616086 | 0.483984 | 0.001727 | 0.001468 | 0.001418 |
| test_from_chars_2_no_simd.test | RUN | 0.143168 | 0.485134 | 0.403917 | 0.001448 | 0.001628 | 0.001083 |
| test_uuid_from_string.test | RUN | 0.187460 | 0.690601 | 0.573790 | 0.001434 | 0.001691 | 0.001215 |
| test_uuid_from_string_2.test | RUN | 0.163972 | 0.626194 | 0.482955 | 0.001842 | 0.001777 | 0.001425 |
| test_uuid_from_string_3.test | RUN | 0.171758 | 0.639152 | 0.526309 | 0.001471 | 0.001855 | 0.001648 |
| test_uuid_clock.test | RUN | 0.106783 | 0.254766 | 0.301480 | 0.001332 | 0.001835 | 0.001500 |
| test_nil_generator.test | RUN | 0.126892 | 0.301426 | 0.376000 | 0.001618 | 0.001779 | 0.001624 |
| test_string_generator.test | RUN | 0.158458 | 0.517926 | 0.511905 | 0.001940 | 0.001827 | 0.001787 |
| test_string_generator_2.test | RUN | 0.197519 | 0.709391 | 0.578360 | 0.001441 | 0.001664 | 0.001538 |
| test_random_generator.test | RUN | 0.273531 | 1.353481 | 0.879892 | 0.058968 | 0.059771 | 0.059442 |
| test_random_generator_2.test | RUN | 0.192895 | 0.555035 | 0.593085 | 0.001472 | 0.001706 | 0.001386 |
| test_name_generator.test | RUN | 0.171236 | 1.804382 | 0.615950 | 0.001112 | 0.001661 | 0.001510 |
| test_namespaces.test | RUN | 0.142535 | 0.370944 | 0.425348 | 0.001169 | 0.001744 | 0.001450 |
| test_name_generator_md5.test | RUN | 0.168054 | 0.845018 | 0.604103 | 0.001598 | 0.001901 | 0.001581 |
| test_name_generator_sha1.test | RUN | 0.163400 | 2.527524 | 0.595968 | 0.001527 | 0.001848 | 0.001427 |
| test_time_generator.test | RUN | 0.182377 | 0.549699 | 0.565242 | 0.001503 | 0.001809 | 0.001389 |
| test_time_generator_v1.test | RUN | 0.203123 | 0.587812 | 0.610031 | 0.001728 | 0.002247 | 0.001888 |
| test_time_generator_v1_2.test | RUN | 0.201216 | 0.539646 | 0.566116 | 0.001929 | 0.002186 | 0.001748 |
| test_time_generator_v1_3.test | RUN | 0.220384 | 0.573276 | 0.636691 | 0.003864 | 0.004041 | 0.003210 |
| test_time_generator_v6.test | RUN | 0.205953 | 0.576274 | 0.606087 | 0.001569 | 0.002109 | 0.001701 |
| test_time_generator_v6_2.test | RUN | 0.201511 | 0.556535 | 0.566434 | 0.001584 | 0.002016 | 0.001629 |
| test_time_generator_v6_3.test | RUN | 0.231588 | 0.567265 | 0.638673 | 0.003838 | 0.004372 | 0.004396 |
| test_time_generator_v7.test | RUN | 0.202637 | 0.572838 | 0.606002 | 0.001795 | 0.001903 | 0.001679 |
| test_time_generator_v7_2.test | RUN | 0.192672 | 0.511665 | 0.565128 | 0.001391 | 0.001814 | 0.001538 |
| test_time_generator_v7_3.test | RUN | 0.191001 | 0.632183 | 0.551197 | 0.030160 | 0.030428 | 0.027522 |
| test_serialization.test | RUN | 0.346962 | 0.981885 | 1.068705 | 0.002109 | 0.001373 | 0.001836 |
| test_tagging.test | RUN | 0.193493 | 0.636230 | 0.568110 | 0.001730 | 0.001553 | 0.001625 |
| test_uuid_class.test | RUN | 0.205297 | 0.551720 | 0.600172 | 0.001459 | 0.001406 | 0.001579 |
| test_uuid_in_map.test | RUN | 0.226919 | 0.646981 | 0.642181 | 0.001546 | 0.001838 | 0.001593 |
| test_hash.test | RUN | 0.222584 | 0.556540 | 0.608141 | 0.001627 | 0.001626 | 0.001721 |
| test_hash_value.test | RUN | 0.169130 | 0.389831 | 0.462946 | 0.004336 | 0.003584 | 0.004523 |
| test_std_unordered.test | RUN | 0.217799 | 0.619458 | 0.631797 | 0.001869 | 0.001625 | 0.001950 |
| test_boost_unordered.test | RUN | 0.307787 | 0.841017 | 0.842600 | 0.002028 | 0.001520 | 0.001706 |
| test_detail_md5.test | RUN | 0.142566 | 0.437995 | 0.477611 | 0.001832 | 0.001474 | 0.001613 |
| test_detail_sha1.test | RUN | 0.134953 | 0.523468 | 0.431810 | 0.007206 | 0.007490 | 0.006687 |
| test_detail_endian.test | RUN | 0.106596 | 0.291398 | 0.336837 | 0.001473 | 0.001540 | 0.001741 |
| test_detail_chacha20.test | RUN | 0.116610 | 0.353737 | 0.316774 | 0.001543 | 0.001492 | 0.001280 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.103007 | 0.205564 | 0.254684 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.103361 | 0.213173 | 0.259135 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.176454 | 0.407374 | 0.454102 | 0.001682 | 0.001718 | 0.001737 |
| test_bench_random.test | RUN | 0.190424 | 0.538128 | 0.608622 | 0.313222 | 0.307742 | 0.312884 |
| test_entropy_error.test | RUN | 0.094962 | 0.252713 | 0.300766 | 0.001700 | 0.001730 | 0.001338 |
| test_detail_random_provider.test | RUN | 0.164406 | 0.403203 | 0.517942 | 0.002805 | 0.003180 | 0.003012 |
| test_constants.test | RUN | 0.140720 | 0.399489 | 0.422040 | 0.001606 | 0.001620 | 0.001387 |
| test_uuid_cx.test | COMPILE | 0.078267 | 0.192635 | 0.157332 | — | — | — |
| test_uuid_cx2.test | RUN | 0.143139 | 0.414488 | 0.455754 | 0.001086 | 0.001498 | 0.001463 |
| test_uuid_cx3.test | RUN | 0.128992 | 0.325355 | 0.412769 | 0.001462 | 0.001576 | 0.001179 |
| test_uuid_cx3_no_simd.test | RUN | 0.106939 | 0.304118 | 0.360578 | 0.001499 | 0.001469 | 0.001370 |
| test_hash_value_cx.test | RUN | 0.125189 | 0.301753 | 0.360431 | 0.001672 | 0.001437 | 0.001396 |
| test_string_generator_cx.test | RUN | 0.140975 | 0.383914 | 0.415330 | 0.001609 | 0.001558 | 0.001237 |
| test_string_generator_cx2.test | RUN | 0.173846 | 0.468343 | 0.478546 | 0.001401 | 0.001632 | 0.001557 |
| test_constants_cx.test | RUN | 0.117794 | 0.264950 | 0.333435 | 0.001335 | 0.001342 | 0.001582 |
| test_from_chars_cx.test | RUN | 0.148966 | 0.499402 | 0.438400 | 0.001692 | 0.001735 | 0.001562 |
| test_from_chars_cx2.test | RUN | 0.152093 | 0.603491 | 0.525399 | 0.001748 | 0.001372 | 0.001529 |
| test_to_chars_cx.test | RUN | 0.153119 | 0.555579 | 0.565084 | 0.001493 | 0.001461 | 0.001192 |
| test_uuid_from_string_cx.test | RUN | 0.162206 | 0.572706 | 0.545671 | 0.001405 | 0.001223 | 0.001204 |
| quick.test | RUN | 0.163490 | 0.475334 | 0.531264 | 0.001560 | 0.001116 | 0.001178 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.089×† | 1.012×, 1.166× | 0.995× |
| clang | 1.004×† | 1.009×, 1.000× | 1.287× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000852s | 0.000890s | 0.000852s | byte equality observed |
| test_alignment.test | 10 | 0.000841s | 0.000861s | 0.000865s | byte equality observed |
| test_alignment_2.test | 10 | 0.000847s | 0.000857s | 0.000846s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000825s | 0.000882s | 0.000840s | byte equality observed |
| test_bench_random.test | 1 | 0.323438s | 0.322362s | 0.323582s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001401s | 0.001443s | 0.001422s | byte equality observed |
| test_comparison.test | 10 | 0.000857s | 0.000906s | 0.000846s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000858s | 0.000903s | 0.000843s | byte equality observed |
| test_constants.test | 10 | 0.000839s | 0.000891s | 0.000825s | byte equality observed |
| test_constants_cx.test | 10 | 0.000793s | 0.000839s | 0.000801s | byte equality observed |
| test_data.test | 10 | 0.000844s | 0.000854s | 0.000820s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000834s | 0.000891s | 0.000821s | byte equality observed |
| test_detail_endian.test | 10 | 0.000836s | 0.000899s | 0.000833s | byte equality observed |
| test_detail_md5.test | 10 | 0.000858s | 0.000865s | 0.000845s | byte equality observed |
| test_detail_random_provider.test | 8 | 0.002451s | 0.002429s | 0.002411s | byte equality observed |
| test_detail_sha1.test | 4 | 0.004797s | 0.005428s | 0.003974s | byte equality observed |
| test_entropy_error.test | 10 | 0.000843s | 0.000930s | 0.000828s | byte equality observed |
| test_from_chars.test | 10 | 0.000855s | 0.000847s | 0.000819s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000849s | 0.000890s | 0.000834s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000854s | 0.000888s | 0.000830s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000844s | 0.000885s | 0.000833s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000862s | 0.000900s | 0.000835s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000844s | 0.000889s | 0.000840s | byte equality observed |
| test_hash.test | 10 | 0.001388s | 0.001202s | 0.001387s | byte equality observed |
| test_hash_value.test | 7 | 0.002781s | 0.002856s | 0.002776s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000844s | 0.000903s | 0.000876s | byte equality observed |
| test_include1.test | 10 | 0.000382s | 0.000407s | 0.000824s | byte equality observed |
| test_io.test | 10 | 0.000913s | 0.000959s | 0.000917s | byte equality observed |
| test_io_2.test | 10 | 0.000946s | 0.000964s | 0.000978s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000942s | 0.000930s | 0.000985s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000921s | 0.000964s | 0.000940s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000861s | 0.000907s | 0.000923s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000881s | 0.000928s | 0.000916s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000888s | 0.000938s | 0.000923s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000895s | 0.000960s | 0.000908s | byte equality observed |
| test_namespaces.test | 10 | 0.000865s | 0.000918s | 0.000876s | byte equality observed |
| test_nil_generator.test | 10 | 0.000848s | 0.000925s | 0.000916s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000860s | 0.000875s | 0.000877s | byte equality observed |
| test_random_generator.test | 1 | 0.061518s | 0.066042s | 0.061502s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000844s | 0.000886s | 0.000832s | byte equality observed |
| test_serialization.test | 10 | 0.000915s | 0.000961s | 0.000913s | byte equality observed |
| test_std_unordered.test | 10 | 0.001415s | 0.001470s | 0.001438s | byte equality observed |
| test_string_generator.test | 10 | 0.000903s | 0.000972s | 0.000936s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000888s | 0.000958s | 0.000866s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000870s | 0.000894s | 0.000875s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000868s | 0.000914s | 0.000878s | byte equality observed |
| test_tagging.test | 10 | 0.000874s | 0.001527s | 0.000888s | byte equality observed |
| test_time_generator.test | 10 | 0.000893s | 0.001321s | 0.000925s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001164s | 0.001376s | 0.001290s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001034s | 0.001164s | 0.001102s | byte equality observed |
| test_time_generator_v1_3.test | 7 | 0.003025s | 0.002903s | 0.003131s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001172s | 0.001352s | 0.001322s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001074s | 0.001156s | 0.001136s | byte equality observed |
| test_time_generator_v6_3.test | 7 | 0.002975s | 0.003050s | 0.003040s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001074s | 0.001398s | 0.001137s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001286s | 0.001330s | 0.001096s | byte equality observed |
| test_time_generator_v7_3.test | 1 | 0.031690s | 0.031948s | 0.030597s | byte equality observed |
| test_to_chars.test | 10 | 0.000869s | 0.000918s | 0.000893s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000882s | 0.000924s | 0.000865s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000886s | 0.000957s | 0.000926s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000887s | 0.000923s | 0.000899s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000878s | 0.000917s | 0.000915s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000918s | 0.000946s | 0.000948s | byte equality observed |
| test_uuid.test | 10 | 0.000898s | 0.000940s | 0.000936s | byte equality observed |
| test_uuid_2.test | 10 | 0.000888s | 0.000958s | 0.000897s | byte equality observed |
| test_uuid_3.test | 10 | 0.000884s | 0.000937s | 0.000890s | byte equality observed |
| test_uuid_class.test | 10 | 0.000901s | 0.000945s | 0.000931s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000872s | 0.000943s | 0.000935s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000891s | 0.000927s | 0.000920s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000886s | 0.000930s | 0.000923s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000863s | 0.000934s | 0.000934s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000891s | 0.000917s | 0.000923s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001040s | 0.001094s | 0.001108s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000920s | 0.000979s | 0.001002s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000866s | 0.000929s | 0.000916s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000891s | 0.000938s | 0.000943s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000845s | 0.000947s | 0.000939s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
