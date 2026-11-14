# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.328787 | 0.724762 | 0.966508 | 0.000728 | 0.000669 | 0.001634 |
| test_uuid.test | RUN | 0.213608 | 0.604686 | 0.708477 | 0.001712 | 0.001785 | 0.001614 |
| test_uuid_no_simd.test | RUN | 0.196467 | 0.576696 | 0.593005 | 0.001832 | 0.001526 | 0.001281 |
| test_uuid_2.test | RUN | 0.159060 | 0.446112 | 0.457169 | 0.001729 | 0.001666 | 0.001312 |
| test_uuid_3.test | RUN | 0.160293 | 0.308739 | 0.369836 | 0.001804 | 0.001771 | 0.001440 |
| test_alignment.test | RUN | 0.110346 | 0.296705 | 0.316959 | 0.001503 | 0.001782 | 0.001686 |
| test_alignment_2.test | RUN | 0.117371 | 0.267337 | 0.331293 | 0.001416 | 0.001504 | 0.001339 |
| test_attribute_packed.test | RUN | 0.119101 | 0.280045 | 0.315425 | 0.001657 | 0.001829 | 0.001616 |
| test_pragma_pack.test | RUN | 0.112498 | 0.276323 | 0.341524 | 0.001556 | 0.001688 | 0.001583 |
| test_data.test | RUN | 0.133968 | 0.488981 | 0.469894 | 0.001709 | 0.001498 | 0.001660 |
| test_comparison.test | RUN | 0.195442 | 0.574431 | 0.638796 | 0.001678 | 0.001722 | 0.001612 |
| test_comparison_no_simd.test | RUN | 0.174155 | 0.633972 | 0.563602 | 0.001422 | 0.001293 | 0.001651 |
| test_io.test | RUN | 0.253552 | 1.112776 | 0.966790 | 0.001826 | 0.001886 | 0.001798 |
| test_io_no_simd.test | RUN | 0.214204 | 1.101445 | 0.934660 | 0.001446 | 0.001732 | 0.001750 |
| test_io_2.test | RUN | 0.186516 | 1.134652 | 0.694159 | 0.001372 | 0.001776 | 0.001669 |
| test_io_2_no_simd.test | RUN | 0.168148 | 1.061697 | 0.638967 | 0.001624 | 0.001856 | 0.001540 |
| test_to_chars.test | RUN | 0.176064 | 0.712060 | 0.648026 | 0.001896 | 0.001504 | 0.001754 |
| test_to_chars_no_simd.test | RUN | 0.162950 | 0.718219 | 0.629627 | 0.001855 | 0.001642 | 0.001654 |
| test_to_chars_2.test | RUN | 0.208967 | 1.312235 | 0.779213 | 0.001257 | 0.001536 | 0.001529 |
| test_to_chars_2_no_simd.test | RUN | 0.191546 | 1.381015 | 0.712094 | 0.001405 | 0.001538 | 0.001692 |
| test_to_chars_3.test | RUN | 0.141504 | 0.476441 | 0.480091 | 0.001540 | 0.001404 | 0.001588 |
| test_from_chars.test | RUN | 0.161419 | 0.674500 | 0.519825 | 0.001483 | 0.001672 | 0.001649 |
| test_from_chars_no_simd.test | RUN | 0.140796 | 0.533500 | 0.431174 | 0.001354 | 0.001642 | 0.001465 |
| test_from_chars_2.test | RUN | 0.153112 | 0.624546 | 0.500839 | 0.001367 | 0.001586 | 0.001294 |
| test_from_chars_2_no_simd.test | RUN | 0.136773 | 0.476097 | 0.411447 | 0.001426 | 0.001718 | 0.001431 |
| test_uuid_from_string.test | RUN | 0.185672 | 0.685411 | 0.620123 | 0.001294 | 0.001614 | 0.001219 |
| test_uuid_from_string_2.test | RUN | 0.162290 | 0.619261 | 0.529311 | 0.001814 | 0.001928 | 0.001627 |
| test_uuid_from_string_3.test | RUN | 0.164605 | 0.619886 | 0.531173 | 0.001296 | 0.001615 | 0.001663 |
| test_uuid_clock.test | RUN | 0.100515 | 0.251668 | 0.328589 | 0.001176 | 0.001769 | 0.001478 |
| test_nil_generator.test | RUN | 0.119472 | 0.301715 | 0.369473 | 0.001540 | 0.001696 | 0.001580 |
| test_string_generator.test | RUN | 0.151532 | 0.496585 | 0.500584 | 0.001367 | 0.001943 | 0.001615 |
| test_string_generator_2.test | RUN | 0.186645 | 0.720457 | 0.570782 | 0.001417 | 0.001775 | 0.001643 |
| test_random_generator.test | RUN | 0.248029 | 1.360481 | 0.860066 | 0.059127 | 0.059621 | 0.059423 |
| test_random_generator_2.test | RUN | 0.176213 | 0.549788 | 0.585048 | 0.001369 | 0.001818 | 0.001650 |
| test_name_generator.test | RUN | 0.163517 | 1.777956 | 0.605580 | 0.001330 | 0.001608 | 0.001590 |
| test_namespaces.test | RUN | 0.132945 | 0.381642 | 0.414890 | 0.001409 | 0.001654 | 0.001303 |
| test_name_generator_md5.test | RUN | 0.166319 | 0.811994 | 0.634682 | 0.001538 | 0.001846 | 0.001726 |
| test_name_generator_sha1.test | RUN | 0.161304 | 2.528083 | 0.619208 | 0.001544 | 0.001880 | 0.001597 |
| test_time_generator.test | RUN | 0.171741 | 0.531063 | 0.578108 | 0.001522 | 0.001826 | 0.001760 |
| test_time_generator_v1.test | RUN | 0.192672 | 0.589771 | 0.653195 | 0.001788 | 0.002212 | 0.002131 |
| test_time_generator_v1_2.test | RUN | 0.189476 | 0.555087 | 0.623912 | 0.001760 | 0.002057 | 0.001929 |
| test_time_generator_v1_3.test | RUN | 0.211465 | 0.581566 | 0.681019 | 0.003540 | 0.004063 | 0.003697 |
| test_time_generator_v6.test | RUN | 0.196063 | 0.596230 | 0.637873 | 0.001679 | 0.002215 | 0.001830 |
| test_time_generator_v6_2.test | RUN | 0.193750 | 0.552921 | 0.599368 | 0.001619 | 0.002060 | 0.001738 |
| test_time_generator_v6_3.test | RUN | 0.219080 | 0.600679 | 0.662370 | 0.003519 | 0.004216 | 0.004142 |
| test_time_generator_v7.test | RUN | 0.192491 | 0.584551 | 0.603798 | 0.001672 | 0.001998 | 0.001571 |
| test_time_generator_v7_2.test | RUN | 0.181187 | 0.523545 | 0.566132 | 0.001486 | 0.001857 | 0.001582 |
| test_time_generator_v7_3.test | RUN | 0.177212 | 0.656510 | 0.554756 | 0.029947 | 0.030289 | 0.030317 |
| test_serialization.test | RUN | 0.343918 | 0.995249 | 1.084086 | 0.001843 | 0.001482 | 0.001773 |
| test_tagging.test | RUN | 0.177868 | 0.612050 | 0.578274 | 0.001496 | 0.001736 | 0.001493 |
| test_uuid_class.test | RUN | 0.185707 | 0.530334 | 0.608139 | 0.001520 | 0.001560 | 0.001593 |
| test_uuid_in_map.test | RUN | 0.207646 | 0.623545 | 0.668427 | 0.001469 | 0.001446 | 0.001647 |
| test_hash.test | RUN | 0.210172 | 0.565227 | 0.630408 | 0.001525 | 0.001815 | 0.001640 |
| test_hash_value.test | RUN | 0.146418 | 0.395749 | 0.449257 | 0.004016 | 0.004153 | 0.003968 |
| test_std_unordered.test | RUN | 0.194597 | 0.639481 | 0.617414 | 0.001681 | 0.001788 | 0.001772 |
| test_boost_unordered.test | RUN | 0.277089 | 0.828554 | 0.811822 | 0.001402 | 0.001688 | 0.001468 |
| test_detail_md5.test | RUN | 0.127917 | 0.403223 | 0.431034 | 0.001468 | 0.001527 | 0.001529 |
| test_detail_sha1.test | RUN | 0.122538 | 0.507463 | 0.426171 | 0.007068 | 0.007179 | 0.005905 |
| test_detail_endian.test | RUN | 0.094278 | 0.286931 | 0.290550 | 0.001649 | 0.001617 | 0.001602 |
| test_detail_chacha20.test | RUN | 0.101327 | 0.354811 | 0.321214 | 0.001571 | 0.001538 | 0.001466 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.090675 | 0.204552 | 0.247884 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.091450 | 0.203771 | 0.249503 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.156251 | 0.404553 | 0.450418 | 0.001606 | 0.001762 | 0.001464 |
| test_bench_random.test | RUN | 0.181161 | 0.512990 | 0.595738 | 0.310737 | 0.311901 | 0.312054 |
| test_entropy_error.test | RUN | 0.089708 | 0.230897 | 0.270501 | 0.001339 | 0.001650 | 0.001439 |
| test_detail_random_provider.test | RUN | 0.173776 | 0.402038 | 0.521589 | 0.003003 | 0.003224 | 0.001420 |
| test_constants.test | RUN | 0.135271 | 0.351851 | 0.421322 | 0.001314 | 0.001668 | 0.001290 |
| test_uuid_cx.test | COMPILE | 0.076989 | 0.175913 | 0.180142 | — | — | — |
| test_uuid_cx2.test | RUN | 0.140250 | 0.423904 | 0.462887 | 0.001438 | 0.001273 | 0.001311 |
| test_uuid_cx3.test | RUN | 0.102678 | 0.318754 | 0.412382 | 0.001523 | 0.001494 | 0.001470 |
| test_uuid_cx3_no_simd.test | RUN | 0.110577 | 0.319857 | 0.365950 | 0.001306 | 0.001453 | 0.001448 |
| test_hash_value_cx.test | RUN | 0.121468 | 0.298388 | 0.367455 | 0.001522 | 0.001426 | 0.001298 |
| test_string_generator_cx.test | RUN | 0.137820 | 0.368201 | 0.436304 | 0.001429 | 0.001405 | 0.001303 |
| test_string_generator_cx2.test | RUN | 0.171275 | 0.450081 | 0.507836 | 0.001379 | 0.001482 | 0.001422 |
| test_constants_cx.test | RUN | 0.116815 | 0.247423 | 0.362073 | 0.001375 | 0.001460 | 0.001514 |
| test_from_chars_cx.test | RUN | 0.144349 | 0.484373 | 0.481447 | 0.001540 | 0.001754 | 0.001327 |
| test_from_chars_cx2.test | RUN | 0.155469 | 0.616037 | 0.540322 | 0.001508 | 0.001472 | 0.001446 |
| test_to_chars_cx.test | RUN | 0.148793 | 0.575453 | 0.561578 | 0.001308 | 0.001243 | 0.001546 |
| test_uuid_from_string_cx.test | RUN | 0.161796 | 0.590519 | 0.554204 | 0.001210 | 0.001379 | 0.001270 |
| quick.test | RUN | 0.132024 | 0.473005 | 0.560500 | 0.001134 | 0.001169 | 0.001101 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.003×, 0.999× | 0.997× |
| clang | 0.998× | 1.000×, 0.997× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000906s | 0.000871s | 0.000896s | byte equality observed |
| test_alignment.test | 10 | 0.000930s | 0.000879s | 0.000916s | byte equality observed |
| test_alignment_2.test | 10 | 0.000899s | 0.000888s | 0.000914s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000895s | 0.000852s | 0.000876s | byte equality observed |
| test_bench_random.test | 1 | 0.323238s | 0.323106s | 0.323219s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001463s | 0.001410s | 0.001443s | byte equality observed |
| test_comparison.test | 10 | 0.000891s | 0.000862s | 0.000890s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000892s | 0.000866s | 0.000912s | byte equality observed |
| test_constants.test | 10 | 0.000888s | 0.000845s | 0.000876s | byte equality observed |
| test_constants_cx.test | 10 | 0.000853s | 0.000819s | 0.000835s | byte equality observed |
| test_data.test | 10 | 0.000886s | 0.000838s | 0.000862s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000890s | 0.000842s | 0.000866s | byte equality observed |
| test_detail_endian.test | 10 | 0.000879s | 0.000834s | 0.000860s | byte equality observed |
| test_detail_md5.test | 10 | 0.000903s | 0.000862s | 0.000855s | byte equality observed |
| test_detail_random_provider.test | 8 | 0.002476s | 0.002428s | 0.002421s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005007s | 0.005520s | 0.004108s | byte equality observed |
| test_entropy_error.test | 10 | 0.000890s | 0.000899s | 0.000847s | byte equality observed |
| test_from_chars.test | 10 | 0.000882s | 0.000895s | 0.000864s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000889s | 0.000899s | 0.000848s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000901s | 0.000903s | 0.000860s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000892s | 0.000878s | 0.000862s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000903s | 0.000876s | 0.000876s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000902s | 0.000875s | 0.000879s | byte equality observed |
| test_hash.test | 10 | 0.001453s | 0.001418s | 0.001428s | byte equality observed |
| test_hash_value.test | 7 | 0.002954s | 0.002893s | 0.002891s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000903s | 0.000902s | 0.000899s | byte equality observed |
| test_include1.test | 10 | 0.000416s | 0.000425s | 0.000873s | byte equality observed |
| test_io.test | 10 | 0.000994s | 0.000971s | 0.000966s | byte equality observed |
| test_io_2.test | 10 | 0.001013s | 0.000991s | 0.001032s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001007s | 0.000995s | 0.000989s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000962s | 0.000973s | 0.000965s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000932s | 0.000917s | 0.000900s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000943s | 0.000955s | 0.000927s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000929s | 0.000935s | 0.000929s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000957s | 0.000944s | 0.000967s | byte equality observed |
| test_namespaces.test | 10 | 0.000935s | 0.000883s | 0.000906s | byte equality observed |
| test_nil_generator.test | 10 | 0.000909s | 0.000884s | 0.000907s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000905s | 0.000867s | 0.000882s | byte equality observed |
| test_random_generator.test | 1 | 0.061540s | 0.061472s | 0.061448s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000886s | 0.000884s | 0.000908s | byte equality observed |
| test_serialization.test | 10 | 0.000968s | 0.000971s | 0.000998s | byte equality observed |
| test_std_unordered.test | 10 | 0.001473s | 0.001479s | 0.001514s | byte equality observed |
| test_string_generator.test | 10 | 0.000952s | 0.000962s | 0.000965s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000937s | 0.000921s | 0.000925s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000942s | 0.000905s | 0.000915s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000912s | 0.000904s | 0.000960s | byte equality observed |
| test_tagging.test | 9 | 0.000918s | 0.000910s | 0.000945s | byte equality observed |
| test_time_generator.test | 10 | 0.000930s | 0.000922s | 0.000933s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001218s | 0.001285s | 0.001322s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001102s | 0.001095s | 0.001154s | byte equality observed |
| test_time_generator_v1_3.test | 6 | 0.003146s | 0.002878s | 0.003034s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001222s | 0.001258s | 0.001323s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001103s | 0.001108s | 0.001128s | byte equality observed |
| test_time_generator_v6_3.test | 7 | 0.003177s | 0.003004s | 0.003086s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001110s | 0.001110s | 0.001141s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001160s | 0.001329s | 0.001231s | byte equality observed |
| test_time_generator_v7_3.test | 1 | 0.030957s | 0.031975s | 0.031033s | byte equality observed |
| test_to_chars.test | 10 | 0.000898s | 0.000865s | 0.000920s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000891s | 0.000870s | 0.000892s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000926s | 0.000924s | 0.000931s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000909s | 0.000913s | 0.000903s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000908s | 0.000902s | 0.000919s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000952s | 0.000948s | 0.000961s | byte equality observed |
| test_uuid.test | 10 | 0.000899s | 0.000908s | 0.000910s | byte equality observed |
| test_uuid_2.test | 10 | 0.000923s | 0.000914s | 0.000914s | byte equality observed |
| test_uuid_3.test | 10 | 0.000912s | 0.000900s | 0.000936s | byte equality observed |
| test_uuid_class.test | 10 | 0.000924s | 0.000923s | 0.000940s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000900s | 0.000892s | 0.000909s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000926s | 0.000890s | 0.000947s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000891s | 0.000890s | 0.000918s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000895s | 0.000898s | 0.000918s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000933s | 0.000926s | 0.000934s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001067s | 0.001047s | 0.001091s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000981s | 0.000956s | 0.001004s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000913s | 0.000906s | 0.000943s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000927s | 0.000911s | 0.000962s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000912s | 0.000871s | 0.000919s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
