# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.348427 | 0.842068 | 0.975112 | 0.000693 | 0.000754 | 0.001635 |
| test_uuid.test | RUN | 0.217067 | 0.673060 | 0.698565 | 0.001778 | 0.001880 | 0.001766 |
| test_uuid_no_simd.test | RUN | 0.202252 | 0.631269 | 0.631174 | 0.001646 | 0.001624 | 0.001627 |
| test_uuid_2.test | RUN | 0.154707 | 0.501005 | 0.473921 | 0.001606 | 0.001706 | 0.001414 |
| test_uuid_3.test | RUN | 0.122455 | 0.334581 | 0.376023 | 0.001654 | 0.001972 | 0.001382 |
| test_alignment.test | RUN | 0.115134 | 0.295581 | 0.327034 | 0.001584 | 0.001780 | 0.001746 |
| test_alignment_2.test | RUN | 0.124178 | 0.307018 | 0.338777 | 0.001796 | 0.001570 | 0.001360 |
| test_attribute_packed.test | RUN | 0.117135 | 0.304088 | 0.327067 | 0.001825 | 0.001834 | 0.001414 |
| test_pragma_pack.test | RUN | 0.133476 | 0.296845 | 0.333414 | 0.001690 | 0.001914 | 0.001282 |
| test_data.test | RUN | 0.140707 | 0.531401 | 0.479345 | 0.001758 | 0.001823 | 0.001709 |
| test_comparison.test | RUN | 0.198509 | 0.633279 | 0.658820 | 0.002019 | 0.002072 | 0.001444 |
| test_comparison_no_simd.test | RUN | 0.204005 | 0.722778 | 0.596110 | 0.001515 | 0.001869 | 0.001642 |
| test_io.test | RUN | 0.258181 | 1.189239 | 0.983213 | 0.001918 | 0.001972 | 0.001649 |
| test_io_no_simd.test | RUN | 0.237692 | 1.173168 | 0.939665 | 0.001387 | 0.001843 | 0.001771 |
| test_io_2.test | RUN | 0.205490 | 1.219675 | 0.691700 | 0.001864 | 0.002015 | 0.001712 |
| test_io_2_no_simd.test | RUN | 0.183480 | 1.126655 | 0.644039 | 0.001705 | 0.001790 | 0.001555 |
| test_to_chars.test | RUN | 0.183867 | 0.794585 | 0.658202 | 0.001848 | 0.001984 | 0.001692 |
| test_to_chars_no_simd.test | RUN | 0.159777 | 0.796357 | 0.648202 | 0.001808 | 0.001968 | 0.001578 |
| test_to_chars_2.test | RUN | 0.202824 | 1.436152 | 0.808921 | 0.001492 | 0.002052 | 0.001452 |
| test_to_chars_2_no_simd.test | RUN | 0.190643 | 1.531309 | 0.725673 | 0.001432 | 0.001849 | 0.001588 |
| test_to_chars_3.test | RUN | 0.146127 | 0.540113 | 0.458805 | 0.001489 | 0.001730 | 0.001696 |
| test_from_chars.test | RUN | 0.165660 | 0.750422 | 0.526673 | 0.001240 | 0.001877 | 0.001609 |
| test_from_chars_no_simd.test | RUN | 0.138153 | 0.614231 | 0.443630 | 0.001520 | 0.001559 | 0.001445 |
| test_from_chars_2.test | RUN | 0.154147 | 0.715457 | 0.524368 | 0.001454 | 0.001816 | 0.001465 |
| test_from_chars_2_no_simd.test | RUN | 0.135172 | 0.556594 | 0.430024 | 0.001575 | 0.001723 | 0.001360 |
| test_uuid_from_string.test | RUN | 0.187496 | 0.805474 | 0.642331 | 0.001332 | 0.001902 | 0.001471 |
| test_uuid_from_string_2.test | RUN | 0.167549 | 0.696874 | 0.544857 | 0.001920 | 0.001908 | 0.001723 |
| test_uuid_from_string_3.test | RUN | 0.167202 | 0.697281 | 0.550133 | 0.001171 | 0.001722 | 0.001794 |
| test_uuid_clock.test | RUN | 0.104268 | 0.301223 | 0.333731 | 0.001320 | 0.001902 | 0.001711 |
| test_nil_generator.test | RUN | 0.123217 | 0.336376 | 0.372058 | 0.001579 | 0.001998 | 0.004430 |
| test_string_generator.test | RUN | 0.157641 | 0.560539 | 0.560458 | 0.001533 | 0.002076 | 0.001742 |
| test_string_generator_2.test | RUN | 0.192288 | 0.761129 | 0.633753 | 0.001531 | 0.001713 | 0.001802 |
| test_random_generator.test | RUN | 0.258584 | 1.456108 | 0.937567 | 0.059130 | 0.059736 | 0.059526 |
| test_random_generator_2.test | RUN | 0.195138 | 0.576324 | 0.611604 | 0.001560 | 0.001923 | 0.001561 |
| test_name_generator.test | RUN | 0.169342 | 2.017568 | 0.671212 | 0.001241 | 0.001654 | 0.001584 |
| test_namespaces.test | RUN | 0.141894 | 0.424832 | 0.409976 | 0.001166 | 0.001786 | 0.001858 |
| test_name_generator_md5.test | RUN | 0.177037 | 0.906408 | 0.650149 | 0.001611 | 0.002054 | 0.001822 |
| test_name_generator_sha1.test | RUN | 0.172619 | 2.775665 | 0.637859 | 0.001580 | 0.001918 | 0.001799 |
| test_time_generator.test | RUN | 0.187001 | 0.587916 | 0.588364 | 0.001483 | 0.001994 | 0.001445 |
| test_time_generator_v1.test | RUN | 0.212426 | 0.640500 | 0.673778 | 0.001891 | 0.002263 | 0.002362 |
| test_time_generator_v1_2.test | RUN | 0.201218 | 0.611287 | 0.617803 | 0.001944 | 0.002123 | 0.001828 |
| test_time_generator_v1_3.test | RUN | 0.219882 | 0.621957 | 0.698810 | 0.002885 | 0.003438 | 0.003760 |
| test_time_generator_v6.test | RUN | 0.203753 | 0.645746 | 0.679184 | 0.001782 | 0.002370 | 0.001705 |
| test_time_generator_v6_2.test | RUN | 0.201599 | 0.606021 | 0.611628 | 0.001387 | 0.002332 | 0.001888 |
| test_time_generator_v6_3.test | RUN | 0.220206 | 0.613675 | 0.686029 | 0.004030 | 0.004360 | 0.004246 |
| test_time_generator_v7.test | RUN | 0.194006 | 0.634010 | 0.613935 | 0.001485 | 0.002221 | 0.001862 |
| test_time_generator_v7_2.test | RUN | 0.178832 | 0.556573 | 0.575661 | 0.001205 | 0.002018 | 0.001602 |
| test_time_generator_v7_3.test | RUN | 0.182143 | 0.696232 | 0.611025 | 0.030330 | 0.030624 | 0.030437 |
| test_serialization.test | RUN | 0.350535 | 1.056963 | 1.051628 | 0.002036 | 0.001774 | 0.001796 |
| test_tagging.test | RUN | 0.193119 | 0.631014 | 0.602617 | 0.001759 | 0.001686 | 0.001826 |
| test_uuid_class.test | RUN | 0.202840 | 0.588353 | 0.633834 | 0.001527 | 0.001520 | 0.001708 |
| test_uuid_in_map.test | RUN | 0.217755 | 0.657661 | 0.675002 | 0.001387 | 0.001488 | 0.001490 |
| test_hash.test | RUN | 0.225703 | 0.580916 | 0.644762 | 0.001796 | 0.001791 | 0.001676 |
| test_hash_value.test | RUN | 0.163923 | 0.403746 | 0.477535 | 0.004332 | 0.004288 | 0.004009 |
| test_std_unordered.test | RUN | 0.217431 | 0.657353 | 0.620777 | 0.001770 | 0.001880 | 0.001650 |
| test_boost_unordered.test | RUN | 0.301222 | 0.852076 | 0.828103 | 0.001660 | 0.001716 | 0.001806 |
| test_detail_md5.test | RUN | 0.141245 | 0.412610 | 0.444059 | 0.001545 | 0.001748 | 0.001694 |
| test_detail_sha1.test | RUN | 0.134847 | 0.516152 | 0.429137 | 0.007439 | 0.007059 | 0.006712 |
| test_detail_endian.test | RUN | 0.097247 | 0.299849 | 0.300729 | 0.001489 | 0.001456 | 0.001719 |
| test_detail_chacha20.test | RUN | 0.105555 | 0.397051 | 0.316781 | 0.001436 | 0.001507 | 0.001575 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.096979 | 0.247927 | 0.244358 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.098589 | 0.206465 | 0.257147 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.164210 | 0.412656 | 0.440216 | 0.001787 | 0.001828 | 0.001584 |
| test_bench_random.test | RUN | 0.185999 | 0.536966 | 0.585613 | 0.306078 | 0.312412 | 0.306178 |
| test_entropy_error.test | RUN | 0.090981 | 0.239043 | 0.275208 | 0.001582 | 0.001570 | 0.001613 |
| test_detail_random_provider.test | RUN | 0.181439 | 0.425836 | 0.529302 | 0.003269 | 0.003108 | 0.001443 |
| test_constants.test | RUN | 0.143651 | 0.401107 | 0.444846 | 0.001463 | 0.001604 | 0.001456 |
| test_uuid_cx.test | COMPILE | 0.078775 | 0.157930 | 0.176811 | — | — | — |
| test_uuid_cx2.test | RUN | 0.124113 | 0.415897 | 0.431218 | 0.001654 | 0.001506 | 0.001718 |
| test_uuid_cx3.test | RUN | 0.132797 | 0.345287 | 0.405701 | 0.001854 | 0.001507 | 0.001419 |
| test_uuid_cx3_no_simd.test | RUN | 0.117421 | 0.330825 | 0.382899 | 0.001444 | 0.001458 | 0.001508 |
| test_hash_value_cx.test | RUN | 0.129716 | 0.314472 | 0.380182 | 0.001705 | 0.001861 | 0.001436 |
| test_string_generator_cx.test | RUN | 0.144265 | 0.387958 | 0.418029 | 0.001471 | 0.001406 | 0.001706 |
| test_string_generator_cx2.test | RUN | 0.178606 | 0.476956 | 0.497476 | 0.001534 | 0.001654 | 0.001338 |
| test_constants_cx.test | RUN | 0.124312 | 0.272179 | 0.357441 | 0.001737 | 0.001352 | 0.001368 |
| test_from_chars_cx.test | RUN | 0.159769 | 0.516568 | 0.440214 | 0.001664 | 0.001714 | 0.001378 |
| test_from_chars_cx2.test | RUN | 0.160123 | 0.628574 | 0.515871 | 0.001509 | 0.001360 | 0.001668 |
| test_to_chars_cx.test | RUN | 0.163716 | 0.593584 | 0.543796 | 0.001666 | 0.001620 | 0.001350 |
| test_uuid_from_string_cx.test | RUN | 0.163451 | 0.588804 | 0.546307 | 0.001422 | 0.001389 | 0.001208 |
| quick.test | RUN | 0.151023 | 0.498572 | 0.533444 | 0.001317 | 0.001229 | 0.001138 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.999×, 1.002× | 1.003× |
| clang | 1.029×† | 1.060×, 0.999× | 1.135× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000891s | 0.000886s | 0.000893s | byte equality observed |
| test_alignment.test | 10 | 0.000876s | 0.000895s | 0.000885s | byte equality observed |
| test_alignment_2.test | 10 | 0.000877s | 0.000889s | 0.000884s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000857s | 0.000861s | 0.000873s | byte equality observed |
| test_bench_random.test | 1 | 0.323211s | 0.323152s | 0.323359s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001443s | 0.001441s | 0.001416s | byte equality observed |
| test_comparison.test | 10 | 0.000893s | 0.000890s | 0.000857s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000877s | 0.000888s | 0.000848s | byte equality observed |
| test_constants.test | 10 | 0.000868s | 0.000874s | 0.000838s | byte equality observed |
| test_constants_cx.test | 10 | 0.000843s | 0.000840s | 0.000818s | byte equality observed |
| test_data.test | 10 | 0.000859s | 0.000867s | 0.000843s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000859s | 0.000863s | 0.000875s | byte equality observed |
| test_detail_endian.test | 10 | 0.000873s | 0.000891s | 0.000877s | byte equality observed |
| test_detail_md5.test | 10 | 0.000896s | 0.000882s | 0.000887s | byte equality observed |
| test_detail_random_provider.test | 8 | 0.002461s | 0.002461s | 0.002472s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005114s | 0.005503s | 0.004092s | byte equality observed |
| test_entropy_error.test | 10 | 0.000893s | 0.000869s | 0.000900s | byte equality observed |
| test_from_chars.test | 10 | 0.000886s | 0.000881s | 0.000915s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000862s | 0.000901s | 0.000919s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000885s | 0.000921s | 0.000928s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000867s | 0.000882s | 0.000884s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000886s | 0.000883s | 0.000882s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000917s | 0.000872s | 0.000885s | byte equality observed |
| test_hash.test | 10 | 0.001422s | 0.001437s | 0.001420s | byte equality observed |
| test_hash_value.test | 7 | 0.003061s | 0.003014s | 0.002873s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000896s | 0.000906s | 0.000892s | byte equality observed |
| test_include1.test | 10 | 0.000409s | 0.000419s | 0.000874s | byte equality observed |
| test_io.test | 10 | 0.000964s | 0.000984s | 0.000964s | byte equality observed |
| test_io_2.test | 10 | 0.001014s | 0.000981s | 0.000998s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001018s | 0.001034s | 0.001017s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000973s | 0.000966s | 0.000957s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000932s | 0.000913s | 0.000905s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000936s | 0.000940s | 0.000939s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000927s | 0.000929s | 0.000929s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000961s | 0.000961s | 0.000968s | byte equality observed |
| test_namespaces.test | 10 | 0.000938s | 0.000916s | 0.000937s | byte equality observed |
| test_nil_generator.test | 10 | 0.000908s | 0.000905s | 0.000902s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000911s | 0.000888s | 0.000955s | byte equality observed |
| test_random_generator.test | 1 | 0.061511s | 0.061475s | 0.061213s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000914s | 0.000862s | 0.000880s | byte equality observed |
| test_serialization.test | 10 | 0.000996s | 0.000977s | 0.001034s | byte equality observed |
| test_std_unordered.test | 10 | 0.001491s | 0.001463s | 0.001411s | byte equality observed |
| test_string_generator.test | 10 | 0.000997s | 0.000990s | 0.000975s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000926s | 0.000955s | 0.000941s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000946s | 0.000902s | 0.000923s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000937s | 0.000891s | 0.000930s | byte equality observed |
| test_tagging.test | 10 | 0.000985s | 0.000945s | 0.000942s | byte equality observed |
| test_time_generator.test | 6 | 0.000975s | 0.000946s | 0.000936s | byte equality observed |
| test_time_generator_v1.test | 9 | 0.001336s | 0.001335s | 0.001317s | byte equality observed |
| test_time_generator_v1_2.test | 9 | 0.001165s | 0.001119s | 0.001163s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.003197s | 0.003178s | 0.003239s | byte equality observed |
| test_time_generator_v6.test | 7 | 0.001338s | 0.001338s | 0.001370s | byte equality observed |
| test_time_generator_v6_2.test | 7 | 0.001179s | 0.001143s | 0.001188s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.003190s | 0.003125s | 0.003184s | byte equality observed |
| test_time_generator_v7.test | 9 | 0.001181s | 0.001157s | 0.001282s | byte equality observed |
| test_time_generator_v7_2.test | 9 | 0.001281s | 0.001012s | 0.001282s | byte equality observed |
| test_time_generator_v7_3.test | 1 | 0.030781s | 0.030212s | 0.031158s | byte equality observed |
| test_to_chars.test | 10 | 0.001014s | 0.000886s | 0.001046s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000983s | 0.000875s | 0.001021s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000999s | 0.000902s | 0.001026s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000978s | 0.000974s | 0.001015s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001022s | 0.000912s | 0.001031s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001067s | 0.000946s | 0.001078s | byte equality observed |
| test_uuid.test | 10 | 0.000974s | 0.000936s | 0.001033s | byte equality observed |
| test_uuid_2.test | 10 | 0.001004s | 0.000903s | 0.001030s | byte equality observed |
| test_uuid_3.test | 10 | 0.000988s | 0.000932s | 0.001012s | byte equality observed |
| test_uuid_class.test | 10 | 0.000996s | 0.000947s | 0.001045s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001015s | 0.000950s | 0.001020s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000955s | 0.000969s | 0.001015s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000940s | 0.000970s | 0.001017s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000949s | 0.000971s | 0.001023s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000991s | 0.000969s | 0.001029s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001162s | 0.001165s | 0.001243s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001048s | 0.001069s | 0.001097s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000972s | 0.000999s | 0.001041s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001009s | 0.001025s | 0.001072s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000977s | 0.001018s | 0.001045s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
