# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.543975 | 1.200095 | 1.902923 | 0.000751 | 0.000926 | 0.002165 |
| test_uuid.test | RUN | 0.323686 | 0.963971 | 1.333430 | 0.002262 | 0.002160 | 0.002192 |
| test_uuid_no_simd.test | RUN | 0.316466 | 0.926015 | 1.160601 | 0.002081 | 0.001983 | 0.002156 |
| test_uuid_2.test | RUN | 0.246290 | 0.719739 | 0.890709 | 0.002236 | 0.002014 | 0.001846 |
| test_uuid_3.test | RUN | 0.197052 | 0.486542 | 0.741507 | 0.002254 | 0.002215 | 0.002118 |
| test_alignment.test | RUN | 0.178635 | 0.465134 | 0.611585 | 0.002148 | 0.002012 | 0.002332 |
| test_alignment_2.test | RUN | 0.187418 | 0.421573 | 0.676466 | 0.002278 | 0.001723 | 0.001942 |
| test_attribute_packed.test | RUN | 0.178909 | 0.447781 | 0.633262 | 0.002111 | 0.002244 | 0.002094 |
| test_pragma_pack.test | RUN | 0.176760 | 0.440993 | 0.672568 | 0.002110 | 0.002194 | 0.001907 |
| test_data.test | RUN | 0.213969 | 0.807595 | 0.894414 | 0.001989 | 0.002010 | 0.002312 |
| test_comparison.test | RUN | 0.306314 | 0.937421 | 1.167307 | 0.002164 | 0.002297 | 0.001679 |
| test_comparison_no_simd.test | RUN | 0.312745 | 1.058607 | 1.128740 | 0.002064 | 0.002100 | 0.001800 |
| test_io.test | RUN | 0.400280 | 1.762376 | 1.775887 | 0.002316 | 0.002199 | 0.001755 |
| test_io_no_simd.test | RUN | 0.376857 | 1.710695 | 1.640912 | 0.001763 | 0.002326 | 0.001942 |
| test_io_2.test | RUN | 0.303999 | 1.784297 | 1.260306 | 0.002050 | 0.001964 | 0.001740 |
| test_io_2_no_simd.test | RUN | 0.269008 | 1.692428 | 1.152378 | 0.002228 | 0.002341 | 0.002152 |
| test_to_chars.test | RUN | 0.275633 | 1.139511 | 1.154502 | 0.002254 | 0.002304 | 0.002257 |
| test_to_chars_no_simd.test | RUN | 0.274767 | 1.150618 | 1.135459 | 0.002132 | 0.002266 | 0.002378 |
| test_to_chars_2.test | RUN | 0.327645 | 2.047969 | 1.429697 | 0.001900 | 0.002108 | 0.002042 |
| test_to_chars_2_no_simd.test | RUN | 0.332210 | 2.218533 | 1.241365 | 0.001771 | 0.002021 | 0.002091 |
| test_to_chars_3.test | RUN | 0.231206 | 0.748476 | 0.812563 | 0.002060 | 0.002116 | 0.002198 |
| test_from_chars.test | RUN | 0.263184 | 1.074847 | 0.943211 | 0.001910 | 0.002192 | 0.002141 |
| test_from_chars_no_simd.test | RUN | 0.233357 | 0.847376 | 0.829426 | 0.001930 | 0.001827 | 0.001922 |
| test_from_chars_2.test | RUN | 0.249492 | 1.011217 | 0.948376 | 0.002010 | 0.002185 | 0.001934 |
| test_from_chars_2_no_simd.test | RUN | 0.224781 | 0.773487 | 0.722676 | 0.001619 | 0.002217 | 0.002075 |
| test_uuid_from_string.test | RUN | 0.301951 | 1.104738 | 1.115417 | 0.001732 | 0.002081 | 0.001880 |
| test_uuid_from_string_2.test | RUN | 0.262391 | 1.006909 | 0.970372 | 0.002168 | 0.002398 | 0.002526 |
| test_uuid_from_string_3.test | RUN | 0.272054 | 1.008011 | 1.012873 | 0.002040 | 0.002198 | 0.002300 |
| test_uuid_clock.test | RUN | 0.165277 | 0.410092 | 0.610786 | 0.002034 | 0.002254 | 0.001900 |
| test_nil_generator.test | RUN | 0.197283 | 0.506131 | 0.717760 | 0.002116 | 0.002158 | 0.002152 |
| test_string_generator.test | RUN | 0.247342 | 0.785462 | 0.940181 | 0.002289 | 0.002343 | 0.002287 |
| test_string_generator_2.test | RUN | 0.303829 | 1.140841 | 1.065134 | 0.001918 | 0.002030 | 0.002200 |
| test_random_generator.test | RUN | 0.416591 | 2.181491 | 1.595177 | 0.002976 | 0.003060 | 0.002937 |
| test_random_generator_2.test | RUN | 0.313237 | 0.869851 | 1.090471 | 0.001921 | 0.002202 | 0.002235 |
| test_name_generator.test | RUN | 0.273250 | 2.795913 | 1.183860 | 0.002182 | 0.002079 | 0.002041 |
| test_namespaces.test | RUN | 0.225276 | 0.617237 | 0.795755 | 0.001956 | 0.002130 | 0.002124 |
| test_name_generator_md5.test | RUN | 0.275790 | 1.344756 | 1.074363 | 0.002090 | 0.002158 | 0.002173 |
| test_name_generator_sha1.test | RUN | 0.266312 | 4.133174 | 1.095967 | 0.002161 | 0.002161 | 0.002216 |
| test_time_generator.test | RUN | 0.292277 | 0.839602 | 1.064750 | 0.001888 | 0.002243 | 0.001906 |
| test_time_generator_v1.test | RUN | 0.326123 | 0.932832 | 1.216031 | 0.002524 | 0.002952 | 0.002884 |
| test_time_generator_v1_2.test | RUN | 0.324499 | 0.889753 | 1.063389 | 0.002300 | 0.002676 | 0.002528 |
| test_time_generator_v1_3.test | RUN | 0.351179 | 0.917754 | 1.310518 | 0.004955 | 0.004995 | 0.003745 |
| test_time_generator_v6.test | RUN | 0.331699 | 0.942716 | 1.249828 | 0.002665 | 0.002898 | 0.002842 |
| test_time_generator_v6_2.test | RUN | 0.323294 | 0.860638 | 1.104501 | 0.002277 | 0.002530 | 0.002349 |
| test_time_generator_v6_3.test | RUN | 0.347078 | 0.933275 | 1.274399 | 0.005970 | 0.005442 | 0.005812 |
| test_time_generator_v7.test | RUN | 0.309834 | 0.924963 | 1.173618 | 0.002564 | 0.002526 | 0.002404 |
| test_time_generator_v7_2.test | RUN | 0.292873 | 0.830109 | 1.095807 | 0.001894 | 0.002247 | 0.002257 |
| test_time_generator_v7_3.test | RUN | 0.290159 | 1.052489 | 1.081948 | 0.002433 | 0.002955 | 0.002976 |
| test_serialization.test | RUN | 0.538034 | 1.575814 | 1.889517 | 0.002355 | 0.002056 | 0.002274 |
| test_tagging.test | RUN | 0.295139 | 0.989617 | 1.129116 | 0.002108 | 0.002187 | 0.002094 |
| test_uuid_class.test | RUN | 0.296526 | 0.877644 | 1.138447 | 0.001691 | 0.001828 | 0.001908 |
| test_uuid_in_map.test | RUN | 0.335991 | 1.020081 | 1.301036 | 0.002119 | 0.002196 | 0.002084 |
| test_hash.test | RUN | 0.331274 | 0.932463 | 1.184752 | 0.002060 | 0.002080 | 0.002220 |
| test_hash_value.test | RUN | 0.238563 | 0.613030 | 0.915971 | 0.007119 | 0.006157 | 0.006079 |
| test_std_unordered.test | RUN | 0.319648 | 1.021940 | 1.200386 | 0.002096 | 0.002138 | 0.002257 |
| test_boost_unordered.test | RUN | 0.453728 | 1.317716 | 1.526643 | 0.002012 | 0.001882 | 0.002180 |
| test_detail_md5.test | RUN | 0.204358 | 0.659340 | 0.894076 | 0.001788 | 0.001901 | 0.002200 |
| test_detail_sha1.test | RUN | 0.197996 | 0.816460 | 0.748784 | 0.011445 | 0.011329 | 0.011095 |
| test_detail_endian.test | RUN | 0.150200 | 0.491382 | 0.546977 | 0.001936 | 0.002214 | 0.002024 |
| test_detail_chacha20.test | RUN | 0.170704 | 0.573066 | 0.567553 | 0.001831 | 0.002048 | 0.002200 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.144151 | 0.324197 | 0.468931 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.149446 | 0.333682 | 0.486934 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.263462 | 0.652239 | 0.879099 | 0.002202 | 0.002178 | 0.002157 |
| test_bench_random.test | RUN | 0.293570 | 0.859075 | 1.121897 | 0.005860 | 0.006360 | 0.006123 |
| test_entropy_error.test | RUN | 0.144267 | 0.381198 | 0.508705 | 0.002146 | 0.002115 | 0.002056 |
| test_detail_random_provider.test | RUN | 0.277148 | 0.667329 | 0.975176 | 0.001974 | 0.002104 | 0.001713 |
| test_constants.test | RUN | 0.216780 | 0.624782 | 0.771044 | 0.001808 | 0.002092 | 0.001868 |
| test_uuid_cx.test | COMPILE | 0.126306 | 0.282560 | 0.409120 | — | — | — |
| test_uuid_cx2.test | RUN | 0.229612 | 0.699567 | 0.847819 | 0.002172 | 0.001786 | 0.002079 |
| test_uuid_cx3.test | RUN | 0.201663 | 0.565650 | 0.794541 | 0.001728 | 0.002003 | 0.001744 |
| test_uuid_cx3_no_simd.test | RUN | 0.189065 | 0.505852 | 0.646638 | 0.001632 | 0.002056 | 0.002048 |
| test_hash_value_cx.test | RUN | 0.190030 | 0.498088 | 0.720150 | 0.001708 | 0.001952 | 0.001891 |
| test_string_generator_cx.test | RUN | 0.223154 | 0.603091 | 0.746564 | 0.002219 | 0.001863 | 0.002098 |
| test_string_generator_cx2.test | RUN | 0.272966 | 0.742825 | 0.904110 | 0.002016 | 0.002002 | 0.001973 |
| test_constants_cx.test | RUN | 0.184544 | 0.419561 | 0.678632 | 0.002119 | 0.001938 | 0.001948 |
| test_from_chars_cx.test | RUN | 0.233910 | 0.818575 | 0.826274 | 0.001894 | 0.002240 | 0.001835 |
| test_from_chars_cx2.test | RUN | 0.245281 | 0.985972 | 0.928260 | 0.002166 | 0.001862 | 0.002126 |
| test_to_chars_cx.test | RUN | 0.248039 | 0.918429 | 0.988066 | 0.002137 | 0.002083 | 0.001568 |
| test_uuid_from_string_cx.test | RUN | 0.260184 | 0.956044 | 0.841622 | 0.001729 | 0.001610 | 0.001512 |
| quick.test | RUN | 0.271515 | 0.722235 | 0.995479 | 0.001528 | 0.001548 | 0.001579 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 1.001×, 0.993× | 1.002× |
| clang | 0.995× | 0.994×, 0.996× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001489s | 0.001488s | 0.001470s | byte equality observed |
| test_alignment.test | 10 | 0.001491s | 0.001478s | 0.001477s | byte equality observed |
| test_alignment_2.test | 10 | 0.001486s | 0.001486s | 0.001505s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001508s | 0.001515s | 0.001486s | byte equality observed |
| test_bench_random.test | 4 | 0.005737s | 0.005708s | 0.005761s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001589s | 0.001573s | 0.001541s | byte equality observed |
| test_comparison.test | 10 | 0.001556s | 0.001542s | 0.001530s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001560s | 0.001545s | 0.001527s | byte equality observed |
| test_constants.test | 10 | 0.001518s | 0.001554s | 0.001519s | byte equality observed |
| test_constants_cx.test | 10 | 0.001483s | 0.001493s | 0.001502s | byte equality observed |
| test_data.test | 10 | 0.001498s | 0.001478s | 0.001513s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001498s | 0.001489s | 0.001492s | byte equality observed |
| test_detail_endian.test | 10 | 0.001498s | 0.001484s | 0.001500s | byte equality observed |
| test_detail_md5.test | 10 | 0.001524s | 0.001536s | 0.001522s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001482s | 0.001510s | 0.001475s | byte equality observed |
| test_detail_sha1.test | 3 | 0.010859s | 0.010970s | 0.010231s | byte equality observed |
| test_entropy_error.test | 10 | 0.001500s | 0.001473s | 0.001473s | byte equality observed |
| test_from_chars.test | 10 | 0.001467s | 0.001434s | 0.001473s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001481s | 0.001412s | 0.001480s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001532s | 0.001473s | 0.001469s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001527s | 0.001474s | 0.001497s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001506s | 0.001498s | 0.001493s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001533s | 0.001505s | 0.001488s | byte equality observed |
| test_hash.test | 10 | 0.001530s | 0.001506s | 0.001514s | byte equality observed |
| test_hash_value.test | 4 | 0.005444s | 0.005376s | 0.005371s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001507s | 0.001474s | 0.001485s | byte equality observed |
| test_include1.test | 10 | 0.000653s | 0.000655s | 0.001460s | byte equality observed |
| test_io.test | 10 | 0.001620s | 0.001595s | 0.001581s | byte equality observed |
| test_io_2.test | 10 | 0.001702s | 0.001680s | 0.001660s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001691s | 0.001697s | 0.001657s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001616s | 0.001609s | 0.001576s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001490s | 0.001510s | 0.001499s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001548s | 0.001536s | 0.001513s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001559s | 0.001543s | 0.001538s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001552s | 0.001588s | 0.001554s | byte equality observed |
| test_namespaces.test | 10 | 0.001527s | 0.001528s | 0.001525s | byte equality observed |
| test_nil_generator.test | 10 | 0.001504s | 0.001518s | 0.001494s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001499s | 0.001486s | 0.001506s | byte equality observed |
| test_random_generator.test | 8 | 0.002431s | 0.002381s | 0.002388s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001534s | 0.001512s | 0.001500s | byte equality observed |
| test_serialization.test | 9 | 0.001665s | 0.001623s | 0.001636s | byte equality observed |
| test_std_unordered.test | 10 | 0.001610s | 0.001583s | 0.001599s | byte equality observed |
| test_string_generator.test | 10 | 0.001682s | 0.001656s | 0.001651s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001535s | 0.001549s | 0.001508s | byte equality observed |
| test_string_generator_cx.test | 9 | 0.001515s | 0.001490s | 0.001498s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001521s | 0.001498s | 0.001501s | byte equality observed |
| test_tagging.test | 10 | 0.001533s | 0.001517s | 0.001531s | byte equality observed |
| test_time_generator.test | 10 | 0.001549s | 0.001542s | 0.001528s | byte equality observed |
| test_time_generator_v1.test | 9 | 0.002077s | 0.002178s | 0.002219s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001840s | 0.001861s | 0.001833s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004742s | 0.004738s | 0.004486s | byte equality observed |
| test_time_generator_v6.test | 8 | 0.002066s | 0.002190s | 0.002240s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001844s | 0.001882s | 0.001903s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004908s | 0.004718s | 0.004950s | byte equality observed |
| test_time_generator_v7.test | 9 | 0.001847s | 0.001841s | 0.001869s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001591s | 0.001596s | 0.001595s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002271s | 0.002269s | 0.002284s | byte equality observed |
| test_to_chars.test | 10 | 0.001613s | 0.001599s | 0.001655s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001557s | 0.001518s | 0.001553s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001528s | 0.001522s | 0.001515s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001524s | 0.001526s | 0.001483s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001506s | 0.001514s | 0.001515s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001613s | 0.001588s | 0.001606s | byte equality observed |
| test_uuid.test | 10 | 0.001495s | 0.001496s | 0.001487s | byte equality observed |
| test_uuid_2.test | 10 | 0.001528s | 0.001487s | 0.001520s | byte equality observed |
| test_uuid_3.test | 10 | 0.001510s | 0.001494s | 0.001518s | byte equality observed |
| test_uuid_class.test | 10 | 0.001514s | 0.001546s | 0.001479s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001512s | 0.001487s | 0.001507s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001513s | 0.001478s | 0.001501s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001508s | 0.001499s | 0.001505s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001484s | 0.001489s | 0.001500s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001543s | 0.001521s | 0.001538s | byte equality observed |
| test_uuid_from_string_2.test | 8 | 0.001849s | 0.001840s | 0.001937s | byte equality observed |
| test_uuid_from_string_3.test | 9 | 0.001636s | 0.001622s | 0.001643s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001525s | 0.001499s | 0.001493s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001505s | 0.001538s | 0.001519s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001486s | 0.001447s | 0.001464s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
