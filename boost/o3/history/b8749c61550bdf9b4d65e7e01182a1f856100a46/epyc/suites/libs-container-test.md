# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 9.128705 | 41.442224 | 38.166041 | 0.006742 | 0.006856 | 0.009392 |
| vector_options_test.test | RUN | 0.431187 | 1.954124 | 1.741140 | 0.002414 | 0.002248 | 0.002376 |
| uses_allocator_test.test | RUN | 0.080581 | 0.169203 | 0.247148 | 0.000907 | 0.000837 | 0.002037 |
| uses_allocator_construction_test.test | RUN | 0.241922 | 0.621950 | 0.862562 | 0.002030 | 0.002129 | 0.002035 |
| unsynchronized_pool_resource_test.test | RUN | 0.296321 | 1.772946 | 1.055836 | 0.002182 | 0.002046 | 0.002249 |
| tree_test.test | RUN | 1.300544 | 6.209154 | 5.703783 | 0.001834 | 0.002230 | 0.002098 |
| throw_exception_test.test | RUN | 0.157101 | 0.387839 | 0.548648 | 0.001656 | 0.001980 | 0.002140 |
| synchronized_pool_resource_test.test | RUN | 0.278915 | 1.813480 | 1.111980 | 0.001957 | 0.002128 | 0.002268 |
| string_view_compat_test.test | RUN | 0.468059 | 3.671118 | 2.097193 | 0.001766 | 0.002430 | 0.002336 |
| string_test.test | RUN | 2.122720 | 13.459694 | 10.618540 | 0.023266 | 0.021856 | 0.023545 |
| string_options_test.test | RUN | 0.378954 | 3.005658 | 1.793416 | 0.002070 | 0.002174 | 0.002322 |
| static_vector_test.test | RUN | 2.321323 | 11.072296 | 10.498660 | 0.002892 | 0.002778 | 0.003137 |
| static_vector_options_test.test | RUN | 0.275236 | 0.770444 | 1.050842 | 0.002130 | 0.002236 | 0.002138 |
| stable_vector_test.test | RUN | 4.993887 | 22.403302 | 19.481469 | 0.035766 | 0.036891 | 0.039287 |
| small_vector_test.test | RUN | 3.496986 | 15.785718 | 14.489590 | 0.004293 | 0.004140 | 0.007322 |
| small_vector_options_test.test | RUN | 0.487394 | 1.934076 | 1.979927 | 0.002120 | 0.002204 | 0.002225 |
| slist_test.test | RUN | 3.188948 | 14.215350 | 13.001249 | 0.034025 | 0.033911 | 0.034693 |
| set_test.test | RUN | 4.853353 | 26.488030 | 23.030617 | 0.020674 | 0.017534 | 0.019652 |
| segtor_test.test | RUN | 6.184185 | 29.200787 | 25.374660 | 0.899767 | 0.926236 | 0.895286 |
| segtor_options_test.test | RUN | 0.316239 | 0.915840 | 1.172018 | 0.002117 | 0.002187 | 0.002000 |
| scoped_allocator_usage_test.test | RUN | 1.112522 | 4.437660 | 4.713980 | 0.002081 | 0.001865 | 0.002022 |
| scoped_allocator_adaptor_test.test | RUN | 0.502441 | 1.290407 | 2.173859 | 0.001990 | 0.001714 | 0.001901 |
| resource_adaptor_test.test | RUN | 0.247850 | 0.789784 | 0.970548 | 0.001868 | 0.001866 | 0.001837 |
| polymorphic_allocator_test.test | RUN | 0.211364 | 0.635694 | 0.820871 | 0.001733 | 0.001599 | 0.002075 |
| pmr_vector_test.test | RUN | 0.119387 | 0.254255 | 0.434788 | 0.000721 | 0.000858 | 0.002100 |
| pmr_string_test.test | RUN | 0.241083 | 0.535871 | 0.797194 | 0.000693 | 0.000885 | 0.002035 |
| pmr_stable_vector_test.test | RUN | 0.274455 | 0.790793 | 1.095830 | 0.002039 | 0.001793 | 0.002156 |
| pmr_small_vector_test.test | RUN | 0.146725 | 0.345569 | 0.503784 | 0.001856 | 0.001862 | 0.002194 |
| pmr_slist_test.test | RUN | 0.205014 | 1.004744 | 0.942447 | 0.001886 | 0.002136 | 0.001808 |
| pmr_set_test.test | RUN | 0.232451 | 0.569625 | 0.853777 | 0.001827 | 0.002054 | 0.001690 |
| pmr_nest_test.test | RUN | 0.180615 | 0.373634 | 0.599308 | 0.001948 | 0.002074 | 0.002031 |
| pmr_map_test.test | RUN | 0.239058 | 0.567896 | 0.850797 | 0.001840 | 0.001948 | 0.002113 |
| pmr_list_test.test | RUN | 0.165642 | 0.360212 | 0.540150 | 0.001745 | 0.002024 | 0.001947 |
| pmr_hub_test.test | RUN | 0.213795 | 0.505719 | 0.745231 | 0.001882 | 0.002068 | 0.001936 |
| pmr_flat_set_test.test | RUN | 0.173157 | 0.377240 | 0.552226 | 0.001919 | 0.001843 | 0.002062 |
| pmr_flat_map_test.test | RUN | 0.212865 | 0.452981 | 0.674250 | 0.002006 | 0.001861 | 0.001718 |
| pmr_devector_test.test | RUN | 0.134069 | 0.386472 | 0.508664 | 0.001900 | 0.001958 | 0.001736 |
| pmr_deque_test.test | RUN | 0.131569 | 0.313781 | 0.466259 | 0.001938 | 0.001938 | 0.001888 |
| pair_test.test | RUN | 0.341843 | 0.768237 | 1.157243 | 0.001948 | 0.002064 | 0.002120 |
| null_iterators_test.test | RUN | 0.521613 | 1.424249 | 1.937618 | 0.002052 | 0.002166 | 0.002073 |
| node_handle_test.test | RUN | 0.235766 | 1.807055 | 0.783587 | 0.001950 | 0.001970 | 0.002084 |
| node_allocator_test.test | RUN | 3.818739 | 17.481307 | 15.781575 | 0.013487 | 0.013507 | 0.013882 |
| new_delete_resource_test.test | RUN | 0.278075 | 1.068840 | 1.014536 | 0.002576 | 0.002886 | 0.003108 |
| nest_test.test | RUN | 0.745967 | 4.742367 | 3.595308 | 0.002030 | 0.002192 | 0.002010 |
| nest_api_test.test | RUN | 1.188032 | 9.326097 | 7.020366 | 0.003298 | 0.003143 | 0.003327 |
| monotonic_buffer_resource_test.test | RUN | 0.280530 | 1.937067 | 1.075982 | 0.001800 | 0.002006 | 0.001826 |
| memory_resource_test.test | RUN | 0.169400 | 0.561025 | 0.678223 | 0.002021 | 0.001911 | 0.001944 |
| map_test.test | RUN | 6.756316 | 29.786098 | 33.681974 | 0.014224 | 0.014425 | 0.014327 |
| list_test.test | RUN | 3.380928 | 15.413571 | 13.809826 | 0.030946 | 0.034547 | 0.035886 |
| is_constructible_test.test | RUN | 0.117287 | 0.228572 | 0.390852 | 0.000865 | 0.000876 | 0.001969 |
| insert_vs_emplace_test.test | RUN | 0.383861 | 1.297540 | 2.041000 | 0.002114 | 0.002140 | 0.002210 |
| hub_uses_allocator_test.test | RUN | 0.369424 | 1.077287 | 1.547015 | 0.001894 | 0.002050 | 0.002142 |
| hub_stability_test.test | RUN | 0.782053 | 4.986508 | 4.554206 | 0.002628 | 0.002529 | 0.002566 |
| hub_sort_test.test | RUN | 0.491586 | 2.305946 | 2.308984 | 0.629338 | 0.618547 | 0.614968 |
| hub_pocxx_test.test | RUN | 0.486711 | 2.669911 | 1.747264 | 0.002026 | 0.001903 | 0.002090 |
| hub_new_extended_alignment_test.test | RUN | 0.258942 | 0.814555 | 0.977428 | 0.001934 | 0.002140 | 0.001917 |
| hub_exception_safety_test.test | RUN | 0.919286 | 6.213316 | 4.924150 | 0.103953 | 0.113244 | 0.116689 |
| hub_empty_sort_test.test | RUN | 0.291384 | 0.750740 | 1.092721 | 0.002024 | 0.001903 | 0.001937 |
| hub_api_test.test | RUN | 3.149582 | 24.923297 | 15.568622 | 0.005067 | 0.004518 | 0.004505 |
| global_resource_test.test | RUN | 0.175114 | 0.540467 | 0.583926 | 0.002078 | 0.002060 | 0.002106 |
| flat_tree_test.test | RUN | 5.808131 | 37.739843 | 27.405945 | 0.001915 | 0.002126 | 0.001954 |
| flat_set_test.test | RUN | 7.367740 | 47.924389 | 35.660123 | 0.010927 | 0.009783 | 0.010305 |
| flat_set_adaptor_test.test | RUN | 5.608395 | 42.878012 | 28.277320 | 0.010849 | 0.010054 | 0.011012 |
| flat_map_test.test | RUN | 12.084953 | 71.252253 | 59.342839 | 0.011398 | 0.011626 | 0.010638 |
| flat_map_adaptor_test.test | RUN | 7.706709 | 52.149672 | 42.709841 | 0.010851 | 0.010865 | 0.010837 |
| explicit_inst_vector_test.test | RUN | 1.137563 | 7.239713 | 6.254843 | 0.001866 | 0.002048 | 0.001968 |
| explicit_inst_string_test.test | RUN | 1.486339 | 12.578103 | 8.435920 | 0.001919 | 0.002016 | 0.001812 |
| explicit_inst_static_vector_test.test | RUN | 0.154110 | 0.483002 | 0.660050 | 0.002020 | 0.002112 | 0.002080 |
| explicit_inst_stable_vector_test.test | RUN | 0.923772 | 4.399780 | 4.037391 | 0.001730 | 0.001930 | 0.001920 |
| explicit_inst_small_vector_test.test | RUN | 0.763578 | 4.087172 | 3.704176 | 0.001940 | 0.001958 | 0.002022 |
| explicit_inst_slist_test.test | RUN | 0.584832 | 3.741413 | 2.979583 | 0.001929 | 0.002104 | 0.002085 |
| explicit_inst_set_test.test | RUN | 0.824775 | 4.432013 | 3.601903 | 0.001914 | 0.002107 | 0.002066 |
| explicit_inst_map_test.test | RUN | 0.911800 | 4.606655 | 3.846247 | 0.001920 | 0.002256 | 0.002030 |
| explicit_inst_list_test.test | RUN | 0.206814 | 1.057282 | 1.035518 | 0.001860 | 0.002042 | 0.001903 |
| explicit_inst_flat_set_test.test | RUN | 4.883846 | 32.236975 | 21.449976 | 0.002010 | 0.002083 | 0.002025 |
| explicit_inst_flat_map_test.test | RUN | 5.280596 | 33.504321 | 23.710741 | 0.002057 | 0.001963 | 0.002083 |
| explicit_inst_devector_test.test | RUN | 0.628760 | 4.114728 | 3.171952 | 0.001852 | 0.001959 | 0.001965 |
| explicit_inst_deque_test.test | RUN | 0.667774 | 4.425719 | 3.266657 | 0.002028 | 0.001940 | 0.001952 |
| devector_test.test | RUN | 9.382500 | 51.654717 | 40.734143 | 0.004184 | 0.004076 | 0.005250 |
| devector_options_test.test | RUN | 0.407364 | 2.491884 | 1.802617 | 0.002336 | 0.002118 | 0.002243 |
| deque_test.test | RUN | 5.779208 | 30.883343 | 24.914346 | 0.445562 | 0.432685 | 0.537447 |
| deque_options_test.test | RUN | 0.321184 | 0.898748 | 1.278425 | 0.001950 | 0.002137 | 0.002048 |
| copy_move_algo_test.test | RUN | 0.305656 | 1.154180 | 1.155070 | 0.001992 | 0.002012 | 0.001813 |
| common_iterator_test.test | RUN | 0.023283 | 0.056079 | 0.061380 | 0.000787 | 0.000747 | 0.001800 |
| boost_iterator_comp_test.test | RUN | 0.440244 | 1.345711 | 1.866784 | 0.001930 | 0.002054 | 0.001966 |
| allocator_traits_test.test | RUN | 0.260449 | 0.606819 | 0.968197 | 0.001883 | 0.002038 | 0.002177 |
| alloc_full_test.test | RUN | 0.292535 | 1.221128 | 1.140111 | 0.005735 | 0.005889 | 0.005075 |
| alloc_basic_test.test | RUN | 0.241249 | 0.909364 | 0.877478 | 0.001761 | 0.002178 | 0.002138 |
| adaptive_pool_test.test | RUN | 3.376868 | 12.617091 | 11.088486 | 0.012220 | 0.011412 | 0.012504 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.014× | 1.009×, 1.019× | 0.999× |
| clang | 1.044× | 1.051×, 1.037× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.013209s | 0.012044s | 0.013649s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001279s | 0.001260s | 0.001289s | byte equality observed |
| alloc_full_test.test | 5 | 0.003783s | 0.003787s | 0.003959s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001188s | 0.001193s | 0.001172s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001274s | 0.001260s | 0.001241s | byte equality observed |
| common_iterator_test.test | 10 | 0.000574s | 0.000566s | 0.001217s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001449s | 0.001329s | 0.001385s | byte equality observed |
| deque_options_test.test | 10 | 0.001367s | 0.001241s | 0.001355s | byte equality observed |
| deque_test.test | 1 | 0.472398s | 0.483007s | 0.585669s | byte equality observed |
| devector_options_test.test | 10 | 0.001436s | 0.001318s | 0.001313s | byte equality observed |
| devector_test.test | 4 | 0.003709s | 0.003599s | 0.004936s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001148s | 0.001116s | 0.001130s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001143s | 0.001108s | 0.001124s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001154s | 0.001116s | 0.001127s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001162s | 0.001127s | 0.001132s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001138s | 0.001138s | 0.001127s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001163s | 0.001143s | 0.001150s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001150s | 0.001121s | 0.001142s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001143s | 0.001129s | 0.001146s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.001155s | 0.001132s | 0.001146s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001138s | 0.001137s | 0.001141s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001126s | 0.001129s | 0.001136s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001142s | 0.001143s | 0.001145s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001139s | 0.001155s | 0.001141s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007109s | 0.006837s | 0.006890s | byte equality observed |
| flat_map_test.test | 3 | 0.007654s | 0.007298s | 0.007105s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007166s | 0.006494s | 0.007092s | byte equality observed |
| flat_set_test.test | 3 | 0.007091s | 0.006268s | 0.006963s | byte equality observed |
| flat_tree_test.test | 10 | 0.001134s | 0.001170s | 0.001156s | byte equality observed |
| global_resource_test.test | 10 | 0.001165s | 0.001195s | 0.001187s | byte equality observed |
| hub_api_test.test | 6 | 0.003292s | 0.002757s | 0.002691s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001120s | 0.001146s | 0.001139s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.075967s | 0.086366s | 0.076916s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001272s | 0.001267s | 0.001232s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001233s | 0.001226s | 0.001200s | byte equality observed |
| hub_sort_test.test | 1 | 0.517462s | 0.517983s | 0.501136s | byte equality observed |
| hub_stability_test.test | 10 | 0.001435s | 0.001424s | 0.001449s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001166s | 0.001165s | 0.001160s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001199s | 0.001190s | 0.001227s | byte equality observed |
| is_constructible_test.test | 10 | 0.000551s | 0.000528s | 0.001159s | byte equality observed |
| list_test.test | 1 | 0.021489s | 0.021242s | 0.021371s | byte equality observed |
| map_test.test | 2 | 0.009514s | 0.009442s | 0.009240s | byte equality observed |
| memory_resource_test.test | 6 | 0.001165s | 0.001162s | 0.001154s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001182s | 0.001159s | 0.001182s | byte equality observed |
| nest_api_test.test | 9 | 0.001959s | 0.001955s | 0.002000s | byte equality observed |
| nest_test.test | 10 | 0.001189s | 0.001176s | 0.001192s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001730s | 0.001709s | 0.001707s | byte equality observed |
| node_allocator_test.test | 3 | 0.008821s | 0.008752s | 0.008664s | byte equality observed |
| node_handle_test.test | 10 | 0.001173s | 0.001188s | 0.001155s | byte equality observed |
| null_iterators_test.test | 10 | 0.001167s | 0.001187s | 0.001146s | byte equality observed |
| pair_test.test | 10 | 0.001151s | 0.001169s | 0.001145s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001124s | 0.001139s | 0.001128s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001133s | 0.001150s | 0.001128s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001131s | 0.001156s | 0.001124s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001133s | 0.001142s | 0.001124s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001123s | 0.001162s | 0.001140s | byte equality observed |
| pmr_list_test.test | 10 | 0.001140s | 0.001147s | 0.001137s | byte equality observed |
| pmr_map_test.test | 10 | 0.001138s | 0.001160s | 0.001146s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001130s | 0.001158s | 0.001133s | byte equality observed |
| pmr_set_test.test | 10 | 0.001167s | 0.001153s | 0.001138s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001138s | 0.001153s | 0.001173s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001155s | 0.001159s | 0.001211s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001143s | 0.001162s | 0.001247s | byte equality observed |
| pmr_string_test.test | 10 | 0.000543s | 0.000566s | 0.001191s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000551s | 0.000558s | 0.001222s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001208s | 0.001213s | 0.001257s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001210s | 0.001182s | 0.001287s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001246s | 0.001200s | 0.001230s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001270s | 0.001298s | 0.001212s | byte equality observed |
| segtor_options_test.test | 10 | 0.001249s | 0.001240s | 0.001276s | byte equality observed |
| segtor_test.test | 1 | 0.454230s | 0.453089s | 0.438943s | byte equality observed |
| set_test.test | 2 | 0.013441s | 0.012032s | 0.013266s | byte equality observed |
| slist_test.test | 1 | 0.020491s | 0.020353s | 0.020377s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001294s | 0.001247s | 0.001282s | byte equality observed |
| small_vector_test.test | 3 | 0.002463s | 0.002246s | 0.004124s | byte equality observed |
| stable_vector_test.test | 1 | 0.029558s | 0.029937s | 0.031116s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001250s | 0.001202s | 0.001239s | byte equality observed |
| static_vector_test.test | 10 | 0.001646s | 0.001470s | 0.001557s | byte equality observed |
| string_options_test.test | 10 | 0.001223s | 0.001225s | 0.001234s | byte equality observed |
| string_test.test | 2 | 0.014970s | 0.015495s | 0.014963s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001176s | 0.001177s | 0.001156s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001232s | 0.001225s | 0.001232s | byte equality observed |
| throw_exception_test.test | 10 | 0.001163s | 0.001122s | 0.001151s | byte equality observed |
| tree_test.test | 10 | 0.001166s | 0.001140s | 0.001143s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001231s | 0.001216s | 0.001231s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001151s | 0.001136s | 0.001167s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000549s | 0.000532s | 0.001129s | byte equality observed |
| vector_options_test.test | 10 | 0.001328s | 0.001308s | 0.001299s | byte equality observed |
| vector_test.test | 4 | 0.003934s | 0.004088s | 0.005593s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
