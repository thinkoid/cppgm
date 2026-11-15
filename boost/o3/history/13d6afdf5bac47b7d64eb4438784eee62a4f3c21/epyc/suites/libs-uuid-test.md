# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.453386 | 0.944296 | 1.514148 | 0.000704 | 0.000685 | 0.001792 |
| test_uuid.test | RUN | 0.266007 | 0.763163 | 1.075503 | 0.001859 | 0.001815 | 0.001890 |
| test_uuid_no_simd.test | RUN | 0.265163 | 0.727931 | 0.910918 | 0.001813 | 0.001641 | 0.001568 |
| test_uuid_2.test | RUN | 0.188374 | 0.548763 | 0.694213 | 0.001566 | 0.001726 | 0.001779 |
| test_uuid_3.test | RUN | 0.158686 | 0.399414 | 0.581243 | 0.001864 | 0.001800 | 0.001539 |
| test_alignment.test | RUN | 0.151428 | 0.350206 | 0.485700 | 0.001858 | 0.001745 | 0.001961 |
| test_alignment_2.test | RUN | 0.147040 | 0.345260 | 0.525710 | 0.001561 | 0.001475 | 0.001726 |
| test_attribute_packed.test | RUN | 0.156807 | 0.346903 | 0.526566 | 0.001808 | 0.001687 | 0.001461 |
| test_pragma_pack.test | RUN | 0.142841 | 0.352277 | 0.475557 | 0.001594 | 0.001739 | 0.001747 |
| test_data.test | RUN | 0.177248 | 0.637929 | 0.701813 | 0.001845 | 0.001558 | 0.001832 |
| test_comparison.test | RUN | 0.243818 | 0.734856 | 0.874506 | 0.001854 | 0.001734 | 0.002091 |
| test_comparison_no_simd.test | RUN | 0.230666 | 0.849762 | 0.886091 | 0.001828 | 0.001890 | 0.001836 |
| test_io.test | RUN | 0.316830 | 1.407217 | 1.453955 | 0.001960 | 0.001892 | 0.002127 |
| test_io_no_simd.test | RUN | 0.279169 | 1.355311 | 1.358402 | 0.001662 | 0.001788 | 0.001834 |
| test_io_2.test | RUN | 0.239415 | 1.407346 | 1.043243 | 0.001770 | 0.001766 | 0.001861 |
| test_io_2_no_simd.test | RUN | 0.215143 | 1.346910 | 0.942657 | 0.001864 | 0.001974 | 0.001836 |
| test_to_chars.test | RUN | 0.223448 | 0.891701 | 0.937000 | 0.001959 | 0.001874 | 0.002048 |
| test_to_chars_no_simd.test | RUN | 0.206738 | 0.898389 | 0.917611 | 0.001853 | 0.001595 | 0.001870 |
| test_to_chars_2.test | RUN | 0.257356 | 1.645823 | 1.107307 | 0.001513 | 0.001808 | 0.001784 |
| test_to_chars_2_no_simd.test | RUN | 0.241290 | 1.757099 | 0.999214 | 0.001839 | 0.001722 | 0.001993 |
| test_to_chars_3.test | RUN | 0.186402 | 0.555717 | 0.707462 | 0.001852 | 0.001463 | 0.001435 |
| test_from_chars.test | RUN | 0.211723 | 0.862377 | 0.753587 | 0.001617 | 0.001831 | 0.001743 |
| test_from_chars_no_simd.test | RUN | 0.186370 | 0.691853 | 0.666720 | 0.001614 | 0.001722 | 0.001684 |
| test_from_chars_2.test | RUN | 0.204010 | 0.795519 | 0.772482 | 0.001711 | 0.001708 | 0.001650 |
| test_from_chars_2_no_simd.test | RUN | 0.178714 | 0.602399 | 0.597937 | 0.001794 | 0.001697 | 0.001749 |
| test_uuid_from_string.test | RUN | 0.248652 | 0.886390 | 0.916109 | 0.001797 | 0.001682 | 0.001493 |
| test_uuid_from_string_2.test | RUN | 0.216326 | 0.793150 | 0.756222 | 0.001778 | 0.002276 | 0.002108 |
| test_uuid_from_string_3.test | RUN | 0.215258 | 0.785492 | 0.817421 | 0.001710 | 0.001520 | 0.001958 |
| test_uuid_clock.test | RUN | 0.137743 | 0.335782 | 0.494228 | 0.001626 | 0.001896 | 0.001750 |
| test_nil_generator.test | RUN | 0.157261 | 0.376350 | 0.543143 | 0.001709 | 0.001762 | 0.001974 |
| test_string_generator.test | RUN | 0.198238 | 0.635171 | 0.784616 | 0.001981 | 0.001942 | 0.001827 |
| test_string_generator_2.test | RUN | 0.248889 | 0.878125 | 0.861125 | 0.001686 | 0.001842 | 0.001654 |
| test_random_generator.test | RUN | 0.331341 | 1.737345 | 1.245620 | 0.002571 | 0.002659 | 0.002656 |
| test_random_generator_2.test | RUN | 0.242769 | 0.667041 | 0.889846 | 0.001678 | 0.001927 | 0.001645 |
| test_name_generator.test | RUN | 0.208752 | 2.217757 | 0.953589 | 0.001772 | 0.001945 | 0.001718 |
| test_namespaces.test | RUN | 0.176204 | 0.479769 | 0.629523 | 0.001540 | 0.001864 | 0.001676 |
| test_name_generator_md5.test | RUN | 0.223055 | 1.051509 | 0.910035 | 0.001576 | 0.001852 | 0.001906 |
| test_name_generator_sha1.test | RUN | 0.211135 | 3.273372 | 0.896676 | 0.001617 | 0.001991 | 0.001825 |
| test_time_generator.test | RUN | 0.234017 | 0.661639 | 0.840149 | 0.001499 | 0.001807 | 0.001755 |
| test_time_generator_v1.test | RUN | 0.261935 | 0.745935 | 0.960162 | 0.002106 | 0.002334 | 0.002542 |
| test_time_generator_v1_2.test | RUN | 0.250115 | 0.689307 | 0.931379 | 0.002110 | 0.002108 | 0.002305 |
| test_time_generator_v1_3.test | RUN | 0.274961 | 0.723744 | 1.009128 | 0.004752 | 0.004888 | 0.004798 |
| test_time_generator_v6.test | RUN | 0.257249 | 0.747572 | 0.978390 | 0.002170 | 0.002433 | 0.002405 |
| test_time_generator_v6_2.test | RUN | 0.259756 | 0.689448 | 0.941352 | 0.001852 | 0.002142 | 0.002281 |
| test_time_generator_v6_3.test | RUN | 0.282283 | 0.742905 | 1.007349 | 0.004506 | 0.004452 | 0.004816 |
| test_time_generator_v7.test | RUN | 0.251709 | 0.725226 | 0.940401 | 0.001712 | 0.002210 | 0.002040 |
| test_time_generator_v7_2.test | RUN | 0.227452 | 0.655617 | 0.845149 | 0.001808 | 0.001974 | 0.001756 |
| test_time_generator_v7_3.test | RUN | 0.227416 | 0.856551 | 0.894312 | 0.002360 | 0.002580 | 0.002479 |
| test_serialization.test | RUN | 0.427525 | 1.261870 | 1.544284 | 0.002000 | 0.001773 | 0.001932 |
| test_tagging.test | RUN | 0.233017 | 0.798577 | 0.862258 | 0.001636 | 0.001666 | 0.001890 |
| test_uuid_class.test | RUN | 0.244006 | 0.693402 | 0.966543 | 0.001592 | 0.001630 | 0.001928 |
| test_uuid_in_map.test | RUN | 0.273461 | 0.818451 | 1.056520 | 0.001806 | 0.001938 | 0.001883 |
| test_hash.test | RUN | 0.273921 | 0.727533 | 0.909649 | 0.001786 | 0.001879 | 0.001845 |
| test_hash_value.test | RUN | 0.195089 | 0.478077 | 0.681917 | 0.005035 | 0.004797 | 0.004849 |
| test_std_unordered.test | RUN | 0.256027 | 0.818399 | 0.920237 | 0.001849 | 0.001948 | 0.001830 |
| test_boost_unordered.test | RUN | 0.361923 | 1.012619 | 1.250723 | 0.001736 | 0.001842 | 0.001637 |
| test_detail_md5.test | RUN | 0.170907 | 0.505595 | 0.681941 | 0.001605 | 0.001576 | 0.001929 |
| test_detail_sha1.test | RUN | 0.154328 | 0.647262 | 0.646106 | 0.009311 | 0.009108 | 0.008301 |
| test_detail_endian.test | RUN | 0.121646 | 0.375360 | 0.467447 | 0.001647 | 0.001747 | 0.001748 |
| test_detail_chacha20.test | RUN | 0.137005 | 0.458758 | 0.481489 | 0.001584 | 0.001648 | 0.001947 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.128633 | 0.261822 | 0.403109 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.124885 | 0.262681 | 0.402429 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.206197 | 0.524385 | 0.710921 | 0.001834 | 0.001778 | 0.002011 |
| test_bench_random.test | RUN | 0.237759 | 0.679739 | 0.908331 | 0.006006 | 0.005983 | 0.005886 |
| test_entropy_error.test | RUN | 0.119061 | 0.316415 | 0.410291 | 0.001729 | 0.001904 | 0.001705 |
| test_detail_random_provider.test | RUN | 0.225767 | 0.528276 | 0.775999 | 0.001649 | 0.001787 | 0.001724 |
| test_constants.test | RUN | 0.178872 | 0.484066 | 0.613032 | 0.001523 | 0.001844 | 0.001640 |
| test_uuid_cx.test | COMPILE | 0.100376 | 0.229990 | 0.309033 | — | — | — |
| test_uuid_cx2.test | RUN | 0.187227 | 0.544452 | 0.674159 | 0.001469 | 0.001664 | 0.001871 |
| test_uuid_cx3.test | RUN | 0.161544 | 0.432924 | 0.642549 | 0.001601 | 0.001847 | 0.001529 |
| test_uuid_cx3_no_simd.test | RUN | 0.147755 | 0.410120 | 0.524851 | 0.001582 | 0.001650 | 0.001811 |
| test_hash_value_cx.test | RUN | 0.159717 | 0.398106 | 0.580130 | 0.001554 | 0.001855 | 0.001464 |
| test_string_generator_cx.test | RUN | 0.188943 | 0.477734 | 0.623915 | 0.001562 | 0.001760 | 0.001639 |
| test_string_generator_cx2.test | RUN | 0.221198 | 0.589140 | 0.709934 | 0.001850 | 0.001810 | 0.001769 |
| test_constants_cx.test | RUN | 0.155716 | 0.338420 | 0.544279 | 0.001807 | 0.001683 | 0.001338 |
| test_from_chars_cx.test | RUN | 0.193762 | 0.645625 | 0.693949 | 0.001758 | 0.001903 | 0.001592 |
| test_from_chars_cx2.test | RUN | 0.206824 | 0.794120 | 0.726174 | 0.001788 | 0.001697 | 0.001804 |
| test_to_chars_cx.test | RUN | 0.201777 | 0.717290 | 0.807539 | 0.001595 | 0.001832 | 0.001271 |
| test_uuid_from_string_cx.test | RUN | 0.209952 | 0.746289 | 0.698520 | 0.001458 | 0.001414 | 0.001414 |
| quick.test | RUN | 0.233431 | 0.567561 | 0.773240 | 0.001437 | 0.001336 | 0.001351 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.008× | 1.018×, 0.998× | 1.017× |
| clang | 0.990× | 0.985×, 0.995× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001139s | 0.001134s | 0.001165s | byte equality observed |
| test_alignment.test | 10 | 0.001179s | 0.001157s | 0.001167s | byte equality observed |
| test_alignment_2.test | 10 | 0.001149s | 0.001165s | 0.001161s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001162s | 0.001113s | 0.001184s | byte equality observed |
| test_bench_random.test | 4 | 0.005189s | 0.005155s | 0.005132s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001223s | 0.001244s | 0.001207s | byte equality observed |
| test_comparison.test | 10 | 0.001196s | 0.001210s | 0.001201s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001205s | 0.001197s | 0.001198s | byte equality observed |
| test_constants.test | 10 | 0.001195s | 0.001163s | 0.001172s | byte equality observed |
| test_constants_cx.test | 10 | 0.001159s | 0.001142s | 0.001139s | byte equality observed |
| test_data.test | 10 | 0.001167s | 0.001165s | 0.001165s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001174s | 0.001154s | 0.001152s | byte equality observed |
| test_detail_endian.test | 10 | 0.001168s | 0.001153s | 0.001165s | byte equality observed |
| test_detail_md5.test | 10 | 0.001200s | 0.001176s | 0.001160s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001165s | 0.001144s | 0.001141s | byte equality observed |
| test_detail_sha1.test | 3 | 0.008458s | 0.008407s | 0.007755s | byte equality observed |
| test_entropy_error.test | 10 | 0.001155s | 0.001148s | 0.001160s | byte equality observed |
| test_from_chars.test | 10 | 0.001149s | 0.001123s | 0.001144s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001143s | 0.001152s | 0.001155s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001157s | 0.001166s | 0.001157s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001154s | 0.001154s | 0.001170s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001159s | 0.001164s | 0.001150s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001166s | 0.001177s | 0.001168s | byte equality observed |
| test_hash.test | 10 | 0.001189s | 0.001156s | 0.001146s | byte equality observed |
| test_hash_value.test | 6 | 0.004197s | 0.004116s | 0.004063s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001153s | 0.001141s | 0.001144s | byte equality observed |
| test_include1.test | 10 | 0.000506s | 0.000507s | 0.001128s | byte equality observed |
| test_io.test | 10 | 0.001248s | 0.001217s | 0.001220s | byte equality observed |
| test_io_2.test | 10 | 0.001290s | 0.001297s | 0.001299s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001303s | 0.001334s | 0.001318s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001241s | 0.001247s | 0.001247s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001164s | 0.001160s | 0.001165s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001185s | 0.001190s | 0.001174s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001194s | 0.001199s | 0.001193s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001193s | 0.001213s | 0.001208s | byte equality observed |
| test_namespaces.test | 10 | 0.001183s | 0.001167s | 0.001161s | byte equality observed |
| test_nil_generator.test | 10 | 0.001154s | 0.001145s | 0.001129s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001179s | 0.001141s | 0.001186s | byte equality observed |
| test_random_generator.test | 9 | 0.002008s | 0.002005s | 0.002000s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001206s | 0.001152s | 0.001168s | byte equality observed |
| test_serialization.test | 10 | 0.001276s | 0.001294s | 0.001277s | byte equality observed |
| test_std_unordered.test | 10 | 0.001238s | 0.001208s | 0.001237s | byte equality observed |
| test_string_generator.test | 10 | 0.001239s | 0.001289s | 0.001265s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001195s | 0.001187s | 0.001199s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001168s | 0.001165s | 0.001159s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001154s | 0.001164s | 0.001127s | byte equality observed |
| test_tagging.test | 10 | 0.001153s | 0.001187s | 0.001157s | byte equality observed |
| test_time_generator.test | 10 | 0.001184s | 0.001188s | 0.001178s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001605s | 0.001683s | 0.001682s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001433s | 0.001447s | 0.001473s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.003611s | 0.003492s | 0.003756s | byte equality observed |
| test_time_generator_v6.test | 5 | 0.001613s | 0.001694s | 0.001720s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001446s | 0.001454s | 0.001457s | byte equality observed |
| test_time_generator_v6_3.test | 6 | 0.003660s | 0.003561s | 0.003714s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001410s | 0.001451s | 0.001456s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001236s | 0.001217s | 0.001243s | byte equality observed |
| test_time_generator_v7_3.test | 10 | 0.001843s | 0.001849s | 0.001844s | byte equality observed |
| test_to_chars.test | 10 | 0.001242s | 0.001276s | 0.001235s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001194s | 0.001213s | 0.001183s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001184s | 0.001196s | 0.001188s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001191s | 0.001177s | 0.001169s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001203s | 0.001176s | 0.001164s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001241s | 0.001242s | 0.001233s | byte equality observed |
| test_uuid.test | 10 | 0.001148s | 0.001168s | 0.001153s | byte equality observed |
| test_uuid_2.test | 10 | 0.001163s | 0.001186s | 0.001166s | byte equality observed |
| test_uuid_3.test | 10 | 0.001166s | 0.001142s | 0.001166s | byte equality observed |
| test_uuid_class.test | 10 | 0.001166s | 0.001177s | 0.001182s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001150s | 0.001153s | 0.001149s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001185s | 0.001167s | 0.001140s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001165s | 0.001137s | 0.001165s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001163s | 0.001147s | 0.001175s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001175s | 0.001150s | 0.001179s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001449s | 0.001414s | 0.001516s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001269s | 0.001247s | 0.001240s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001189s | 0.001134s | 0.001190s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001187s | 0.001160s | 0.001169s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001151s | 0.001162s | 0.001162s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
