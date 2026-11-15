# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.555694 | 1.182228 | 1.847577 | 0.000886 | 0.000823 | 0.002034 |
| test_uuid.test | RUN | 0.335700 | 0.978471 | 1.291837 | 0.002188 | 0.002166 | 0.002053 |
| test_uuid_no_simd.test | RUN | 0.327174 | 0.931086 | 1.175848 | 0.002049 | 0.001810 | 0.001796 |
| test_uuid_2.test | RUN | 0.232660 | 0.707886 | 0.802771 | 0.001852 | 0.001954 | 0.001888 |
| test_uuid_3.test | RUN | 0.208368 | 0.514056 | 0.716531 | 0.002192 | 0.002209 | 0.001770 |
| test_alignment.test | RUN | 0.191091 | 0.446595 | 0.602978 | 0.001829 | 0.002018 | 0.002116 |
| test_alignment_2.test | RUN | 0.169504 | 0.436256 | 0.599756 | 0.002137 | 0.001675 | 0.002010 |
| test_attribute_packed.test | RUN | 0.169923 | 0.445447 | 0.649100 | 0.001824 | 0.002126 | 0.001925 |
| test_pragma_pack.test | RUN | 0.167425 | 0.448906 | 0.651547 | 0.002132 | 0.002118 | 0.001659 |
| test_data.test | RUN | 0.204349 | 0.809744 | 0.862186 | 0.001972 | 0.002004 | 0.002008 |
| test_comparison.test | RUN | 0.290687 | 0.933921 | 1.225243 | 0.002006 | 0.002256 | 0.001979 |
| test_comparison_no_simd.test | RUN | 0.305794 | 1.065441 | 1.026777 | 0.001822 | 0.001949 | 0.002202 |
| test_io.test | RUN | 0.360646 | 1.770617 | 1.768763 | 0.002221 | 0.002269 | 0.002124 |
| test_io_no_simd.test | RUN | 0.372186 | 1.719269 | 1.633454 | 0.002056 | 0.002066 | 0.002147 |
| test_io_2.test | RUN | 0.301382 | 1.781710 | 1.251043 | 0.002012 | 0.002134 | 0.002134 |
| test_io_2_no_simd.test | RUN | 0.270094 | 1.687482 | 1.120351 | 0.002181 | 0.002256 | 0.002365 |
| test_to_chars.test | RUN | 0.272911 | 1.121454 | 1.126389 | 0.002177 | 0.002289 | 0.002192 |
| test_to_chars_no_simd.test | RUN | 0.264578 | 1.150474 | 1.097415 | 0.002053 | 0.002156 | 0.002110 |
| test_to_chars_2.test | RUN | 0.321978 | 2.074287 | 1.350927 | 0.001903 | 0.002035 | 0.002018 |
| test_to_chars_2_no_simd.test | RUN | 0.333517 | 2.193620 | 1.196171 | 0.001932 | 0.001917 | 0.002038 |
| test_to_chars_3.test | RUN | 0.231676 | 0.746190 | 0.848768 | 0.001910 | 0.002154 | 0.001665 |
| test_from_chars.test | RUN | 0.260548 | 1.075400 | 0.966489 | 0.001868 | 0.001950 | 0.001805 |
| test_from_chars_no_simd.test | RUN | 0.229355 | 0.850145 | 0.799987 | 0.001973 | 0.001888 | 0.001936 |
| test_from_chars_2.test | RUN | 0.249159 | 1.008684 | 0.942467 | 0.001918 | 0.001831 | 0.002123 |
| test_from_chars_2_no_simd.test | RUN | 0.220658 | 0.778320 | 0.785609 | 0.001626 | 0.001774 | 0.001972 |
| test_uuid_from_string.test | RUN | 0.297532 | 1.107886 | 1.105450 | 0.001936 | 0.002044 | 0.001777 |
| test_uuid_from_string_2.test | RUN | 0.259704 | 1.020447 | 0.947380 | 0.002232 | 0.002208 | 0.002414 |
| test_uuid_from_string_3.test | RUN | 0.259931 | 1.006376 | 0.997878 | 0.002052 | 0.002337 | 0.002300 |
| test_uuid_clock.test | RUN | 0.165834 | 0.429801 | 0.611029 | 0.002224 | 0.002092 | 0.002022 |
| test_nil_generator.test | RUN | 0.192598 | 0.492879 | 0.718969 | 0.001876 | 0.002123 | 0.002088 |
| test_string_generator.test | RUN | 0.248855 | 0.796163 | 0.919873 | 0.001976 | 0.002326 | 0.002198 |
| test_string_generator_2.test | RUN | 0.304397 | 1.131458 | 1.067790 | 0.001650 | 0.001982 | 0.002196 |
| test_random_generator.test | RUN | 0.414681 | 2.165603 | 1.573991 | 0.002873 | 0.003046 | 0.003091 |
| test_random_generator_2.test | RUN | 0.296418 | 0.835695 | 1.133640 | 0.001714 | 0.002149 | 0.001897 |
| test_name_generator.test | RUN | 0.266018 | 2.804264 | 1.158513 | 0.001809 | 0.001833 | 0.002154 |
| test_namespaces.test | RUN | 0.220595 | 0.611492 | 0.756153 | 0.001828 | 0.002095 | 0.001710 |
| test_name_generator_md5.test | RUN | 0.267864 | 1.342969 | 1.110313 | 0.002198 | 0.002290 | 0.002118 |
| test_name_generator_sha1.test | RUN | 0.262548 | 4.125530 | 1.114377 | 0.002141 | 0.002160 | 0.002092 |
| test_time_generator.test | RUN | 0.287724 | 0.846783 | 1.047765 | 0.001947 | 0.002252 | 0.001990 |
| test_time_generator_v1.test | RUN | 0.317752 | 0.903683 | 1.195324 | 0.002218 | 0.002704 | 0.002833 |
| test_time_generator_v1_2.test | RUN | 0.314324 | 0.874855 | 1.132310 | 0.002212 | 0.002611 | 0.002476 |
| test_time_generator_v1_3.test | RUN | 0.343682 | 0.916512 | 1.259041 | 0.005802 | 0.006236 | 0.005203 |
| test_time_generator_v6.test | RUN | 0.319826 | 0.943216 | 1.179133 | 0.002296 | 0.002716 | 0.002823 |
| test_time_generator_v6_2.test | RUN | 0.312956 | 0.883732 | 1.165340 | 0.002172 | 0.002488 | 0.002546 |
| test_time_generator_v6_3.test | RUN | 0.352105 | 0.929900 | 1.240202 | 0.005221 | 0.006004 | 0.006113 |
| test_time_generator_v7.test | RUN | 0.303720 | 0.939983 | 1.173827 | 0.002198 | 0.002532 | 0.002352 |
| test_time_generator_v7_2.test | RUN | 0.288970 | 0.806168 | 1.108012 | 0.001893 | 0.002270 | 0.002097 |
| test_time_generator_v7_3.test | RUN | 0.283844 | 1.037000 | 1.083039 | 0.002686 | 0.002973 | 0.002828 |
| test_serialization.test | RUN | 0.528846 | 1.589737 | 1.921775 | 0.002342 | 0.002148 | 0.002297 |
| test_tagging.test | RUN | 0.292473 | 1.000172 | 1.117971 | 0.001946 | 0.001940 | 0.001959 |
| test_uuid_class.test | RUN | 0.296822 | 0.870958 | 1.181656 | 0.001979 | 0.001712 | 0.002111 |
| test_uuid_in_map.test | RUN | 0.334302 | 1.021149 | 1.258672 | 0.001764 | 0.001982 | 0.002118 |
| test_hash.test | RUN | 0.345279 | 0.913469 | 1.225831 | 0.002082 | 0.002202 | 0.002027 |
| test_hash_value.test | RUN | 0.238039 | 0.640109 | 0.866043 | 0.005791 | 0.006046 | 0.005876 |
| test_std_unordered.test | RUN | 0.325408 | 1.018959 | 1.191805 | 0.002000 | 0.002194 | 0.002151 |
| test_boost_unordered.test | RUN | 0.447780 | 1.319024 | 1.532344 | 0.002214 | 0.001989 | 0.001812 |
| test_detail_md5.test | RUN | 0.209926 | 0.643898 | 0.787367 | 0.002130 | 0.001956 | 0.002136 |
| test_detail_sha1.test | RUN | 0.193781 | 0.817793 | 0.812554 | 0.011928 | 0.012215 | 0.010271 |
| test_detail_endian.test | RUN | 0.153968 | 0.461722 | 0.557829 | 0.002128 | 0.002120 | 0.002066 |
| test_detail_chacha20.test | RUN | 0.167658 | 0.587576 | 0.578631 | 0.001854 | 0.001949 | 0.002028 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.153527 | 0.346588 | 0.494183 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.149749 | 0.328164 | 0.504514 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.257632 | 0.646434 | 0.852426 | 0.001824 | 0.002190 | 0.002084 |
| test_bench_random.test | RUN | 0.282316 | 0.859772 | 1.123044 | 0.006301 | 0.006306 | 0.006222 |
| test_entropy_error.test | RUN | 0.144600 | 0.379919 | 0.507638 | 0.002029 | 0.002074 | 0.002164 |
| test_detail_random_provider.test | RUN | 0.282800 | 0.661787 | 0.966746 | 0.001698 | 0.001880 | 0.001624 |
| test_constants.test | RUN | 0.218450 | 0.610745 | 0.761179 | 0.001828 | 0.002054 | 0.001742 |
| test_uuid_cx.test | COMPILE | 0.125963 | 0.298914 | 0.389740 | — | — | — |
| test_uuid_cx2.test | RUN | 0.231294 | 0.710225 | 0.842457 | 0.002078 | 0.001967 | 0.001902 |
| test_uuid_cx3.test | RUN | 0.201872 | 0.554077 | 0.760013 | 0.001539 | 0.002122 | 0.001752 |
| test_uuid_cx3_no_simd.test | RUN | 0.188605 | 0.500740 | 0.693503 | 0.001641 | 0.001879 | 0.001810 |
| test_hash_value_cx.test | RUN | 0.184543 | 0.501804 | 0.703313 | 0.001790 | 0.002040 | 0.001814 |
| test_string_generator_cx.test | RUN | 0.218683 | 0.613115 | 0.789497 | 0.001886 | 0.002146 | 0.002104 |
| test_string_generator_cx2.test | RUN | 0.271389 | 0.735245 | 0.883808 | 0.001568 | 0.001965 | 0.001895 |
| test_constants_cx.test | RUN | 0.184519 | 0.419712 | 0.663772 | 0.001765 | 0.002090 | 0.001815 |
| test_from_chars_cx.test | RUN | 0.229985 | 0.814853 | 0.859039 | 0.001791 | 0.002254 | 0.001809 |
| test_from_chars_cx2.test | RUN | 0.243070 | 1.007434 | 0.915370 | 0.002019 | 0.002136 | 0.002138 |
| test_to_chars_cx.test | RUN | 0.241377 | 0.917606 | 1.002284 | 0.001720 | 0.001740 | 0.001434 |
| test_uuid_from_string_cx.test | RUN | 0.253009 | 0.940789 | 0.925376 | 0.001544 | 0.001599 | 0.001553 |
| quick.test | RUN | 0.279246 | 0.716537 | 0.938389 | 0.001378 | 0.001538 | 0.001391 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.994×, 0.999× | 1.002× |
| clang | 0.996× | 0.997×, 0.994× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001484s | 0.001479s | 0.001442s | byte equality observed |
| test_alignment.test | 10 | 0.001489s | 0.001472s | 0.001476s | byte equality observed |
| test_alignment_2.test | 10 | 0.001491s | 0.001475s | 0.001487s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001476s | 0.001519s | 0.001493s | byte equality observed |
| test_bench_random.test | 4 | 0.005747s | 0.005682s | 0.005697s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001571s | 0.001582s | 0.001539s | byte equality observed |
| test_comparison.test | 10 | 0.001534s | 0.001506s | 0.001535s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001539s | 0.001559s | 0.001532s | byte equality observed |
| test_constants.test | 10 | 0.001517s | 0.001496s | 0.001476s | byte equality observed |
| test_constants_cx.test | 10 | 0.001468s | 0.001483s | 0.001457s | byte equality observed |
| test_data.test | 8 | 0.001479s | 0.001492s | 0.001524s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001479s | 0.001441s | 0.001505s | byte equality observed |
| test_detail_endian.test | 10 | 0.001494s | 0.001468s | 0.001463s | byte equality observed |
| test_detail_md5.test | 10 | 0.001518s | 0.001523s | 0.001511s | byte equality observed |
| test_detail_random_provider.test | 8 | 0.001471s | 0.001504s | 0.001494s | byte equality observed |
| test_detail_sha1.test | 2 | 0.010892s | 0.011019s | 0.009719s | byte equality observed |
| test_entropy_error.test | 10 | 0.001473s | 0.001461s | 0.001490s | byte equality observed |
| test_from_chars.test | 10 | 0.001461s | 0.001465s | 0.001502s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001490s | 0.001438s | 0.001502s | byte equality observed |
| test_from_chars_2_no_simd.test | 9 | 0.001503s | 0.001517s | 0.001508s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001501s | 0.001487s | 0.001485s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001506s | 0.001493s | 0.001473s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001485s | 0.001514s | 0.001503s | byte equality observed |
| test_hash.test | 10 | 0.001497s | 0.001511s | 0.001523s | byte equality observed |
| test_hash_value.test | 4 | 0.005511s | 0.005460s | 0.005214s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001492s | 0.001486s | 0.001488s | byte equality observed |
| test_include1.test | 10 | 0.000644s | 0.000647s | 0.001461s | byte equality observed |
| test_io.test | 10 | 0.001599s | 0.001594s | 0.001605s | byte equality observed |
| test_io_2.test | 10 | 0.001658s | 0.001662s | 0.001649s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001687s | 0.001678s | 0.001677s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001600s | 0.001604s | 0.001622s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001481s | 0.001495s | 0.001498s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001538s | 0.001548s | 0.001508s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001536s | 0.001575s | 0.001541s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001561s | 0.001590s | 0.001553s | byte equality observed |
| test_namespaces.test | 10 | 0.001517s | 0.001511s | 0.001504s | byte equality observed |
| test_nil_generator.test | 10 | 0.001500s | 0.001500s | 0.001500s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001474s | 0.001506s | 0.001476s | byte equality observed |
| test_random_generator.test | 7 | 0.002382s | 0.002389s | 0.002370s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001530s | 0.001500s | 0.001518s | byte equality observed |
| test_serialization.test | 10 | 0.001632s | 0.001615s | 0.001640s | byte equality observed |
| test_std_unordered.test | 10 | 0.001617s | 0.001576s | 0.001564s | byte equality observed |
| test_string_generator.test | 10 | 0.001656s | 0.001632s | 0.001626s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001538s | 0.001494s | 0.001499s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001518s | 0.001487s | 0.001494s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001532s | 0.001524s | 0.001514s | byte equality observed |
| test_tagging.test | 10 | 0.001497s | 0.001500s | 0.001514s | byte equality observed |
| test_time_generator.test | 10 | 0.001514s | 0.001489s | 0.001526s | byte equality observed |
| test_time_generator_v1.test | 9 | 0.002074s | 0.002148s | 0.002205s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001823s | 0.001865s | 0.001854s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004678s | 0.004630s | 0.004751s | byte equality observed |
| test_time_generator_v6.test | 9 | 0.002037s | 0.002169s | 0.002174s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001845s | 0.001871s | 0.001887s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004820s | 0.004590s | 0.004763s | byte equality observed |
| test_time_generator_v7.test | 8 | 0.001854s | 0.001860s | 0.001866s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001595s | 0.001583s | 0.001596s | byte equality observed |
| test_time_generator_v7_3.test | 9 | 0.002262s | 0.002269s | 0.002263s | byte equality observed |
| test_to_chars.test | 10 | 0.001594s | 0.001601s | 0.001613s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001555s | 0.001571s | 0.001507s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001526s | 0.001522s | 0.001524s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001528s | 0.001502s | 0.001522s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001497s | 0.001514s | 0.001505s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001596s | 0.001591s | 0.001611s | byte equality observed |
| test_uuid.test | 10 | 0.001491s | 0.001497s | 0.001491s | byte equality observed |
| test_uuid_2.test | 10 | 0.001518s | 0.001505s | 0.001493s | byte equality observed |
| test_uuid_3.test | 10 | 0.001497s | 0.001476s | 0.001457s | byte equality observed |
| test_uuid_class.test | 10 | 0.001507s | 0.001517s | 0.001531s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001510s | 0.001474s | 0.001498s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001522s | 0.001504s | 0.001525s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001495s | 0.001488s | 0.001507s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001501s | 0.001466s | 0.001474s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001524s | 0.001513s | 0.001502s | byte equality observed |
| test_uuid_from_string_2.test | 9 | 0.001856s | 0.001856s | 0.001898s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001650s | 0.001627s | 0.001639s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001501s | 0.001509s | 0.001464s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001504s | 0.001484s | 0.001513s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001513s | 0.001475s | 0.001525s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
