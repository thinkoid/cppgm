# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 9.303912 | 42.467737 | 38.659799 | 0.006827 | 0.006980 | 0.009912 |
| vector_options_test.test | RUN | 0.424703 | 1.820496 | 1.737383 | 0.002454 | 0.002479 | 0.002537 |
| uses_allocator_test.test | RUN | 0.076397 | 0.168993 | 0.250699 | 0.000818 | 0.000925 | 0.002090 |
| uses_allocator_construction_test.test | RUN | 0.233213 | 0.635282 | 0.895053 | 0.001983 | 0.002063 | 0.002192 |
| unsynchronized_pool_resource_test.test | RUN | 0.284649 | 1.811985 | 1.147551 | 0.001786 | 0.002168 | 0.002160 |
| tree_test.test | RUN | 1.248320 | 6.337666 | 5.655109 | 0.001732 | 0.002214 | 0.002078 |
| throw_exception_test.test | RUN | 0.175604 | 0.421854 | 0.598541 | 0.001868 | 0.002088 | 0.002098 |
| synchronized_pool_resource_test.test | RUN | 0.291049 | 1.884436 | 1.158754 | 0.002217 | 0.002344 | 0.002260 |
| string_view_compat_test.test | RUN | 0.482570 | 3.699230 | 2.172871 | 0.001698 | 0.002231 | 0.002125 |
| string_test.test | RUN | 2.130705 | 13.728795 | 10.709962 | 0.023805 | 0.021650 | 0.023007 |
| string_options_test.test | RUN | 0.397716 | 2.824161 | 1.813993 | 0.002141 | 0.002410 | 0.001835 |
| static_vector_test.test | RUN | 2.322546 | 11.185259 | 10.856913 | 0.002896 | 0.002630 | 0.002887 |
| static_vector_options_test.test | RUN | 0.285226 | 0.795541 | 1.091308 | 0.002350 | 0.002258 | 0.002330 |
| stable_vector_test.test | RUN | 5.061255 | 22.866327 | 20.101609 | 0.037484 | 0.036873 | 0.039027 |
| small_vector_test.test | RUN | 3.548889 | 16.192113 | 14.811453 | 0.004353 | 0.003952 | 0.007203 |
| small_vector_options_test.test | RUN | 0.486517 | 2.010358 | 2.061323 | 0.002346 | 0.002363 | 0.002310 |
| slist_test.test | RUN | 3.205578 | 14.322538 | 13.128736 | 0.034165 | 0.033382 | 0.034680 |
| set_test.test | RUN | 4.921711 | 27.156595 | 23.455313 | 0.020104 | 0.018103 | 0.019914 |
| segtor_test.test | RUN | 6.332732 | 29.524529 | 26.428495 | 0.881501 | 0.887113 | 0.912830 |
| segtor_options_test.test | RUN | 0.324524 | 0.931738 | 1.369966 | 0.002234 | 0.002288 | 0.002000 |
| scoped_allocator_usage_test.test | RUN | 1.146228 | 4.485355 | 4.595613 | 0.002052 | 0.001846 | 0.002068 |
| scoped_allocator_adaptor_test.test | RUN | 0.514392 | 1.346961 | 2.245410 | 0.002042 | 0.002196 | 0.002027 |
| resource_adaptor_test.test | RUN | 0.255443 | 0.725484 | 0.959128 | 0.001669 | 0.002194 | 0.001810 |
| polymorphic_allocator_test.test | RUN | 0.211389 | 0.618997 | 0.819252 | 0.001951 | 0.001992 | 0.002107 |
| pmr_vector_test.test | RUN | 0.124128 | 0.243015 | 0.440151 | 0.000857 | 0.000877 | 0.001906 |
| pmr_string_test.test | RUN | 0.247916 | 0.509106 | 0.857435 | 0.000831 | 0.000904 | 0.001946 |
| pmr_stable_vector_test.test | RUN | 0.266736 | 0.793584 | 1.078454 | 0.001932 | 0.001757 | 0.001874 |
| pmr_small_vector_test.test | RUN | 0.145312 | 0.318400 | 0.553597 | 0.002009 | 0.001860 | 0.001920 |
| pmr_slist_test.test | RUN | 0.204272 | 1.028510 | 0.979209 | 0.001976 | 0.002054 | 0.001681 |
| pmr_set_test.test | RUN | 0.230354 | 0.582891 | 0.850090 | 0.002041 | 0.002126 | 0.001878 |
| pmr_nest_test.test | RUN | 0.174253 | 0.393473 | 0.586564 | 0.001832 | 0.001961 | 0.002070 |
| pmr_map_test.test | RUN | 0.247799 | 0.578274 | 0.898495 | 0.001892 | 0.001947 | 0.001700 |
| pmr_list_test.test | RUN | 0.163808 | 0.371791 | 0.583989 | 0.001978 | 0.002074 | 0.001814 |
| pmr_hub_test.test | RUN | 0.221374 | 0.504547 | 0.719297 | 0.002007 | 0.001993 | 0.002010 |
| pmr_flat_set_test.test | RUN | 0.169061 | 0.383553 | 0.568329 | 0.001840 | 0.001982 | 0.002069 |
| pmr_flat_map_test.test | RUN | 0.212443 | 0.461556 | 0.708016 | 0.001840 | 0.001933 | 0.002068 |
| pmr_devector_test.test | RUN | 0.141344 | 0.384861 | 0.549485 | 0.001923 | 0.001990 | 0.001961 |
| pmr_deque_test.test | RUN | 0.134099 | 0.332769 | 0.567561 | 0.001934 | 0.001936 | 0.002150 |
| pair_test.test | RUN | 0.355681 | 0.762086 | 1.076653 | 0.002099 | 0.002046 | 0.001799 |
| null_iterators_test.test | RUN | 0.521471 | 1.477303 | 1.993285 | 0.002090 | 0.002036 | 0.002122 |
| node_handle_test.test | RUN | 0.235411 | 1.831117 | 0.805945 | 0.001972 | 0.001958 | 0.002115 |
| node_allocator_test.test | RUN | 3.800999 | 17.716209 | 16.564933 | 0.013340 | 0.013423 | 0.013304 |
| new_delete_resource_test.test | RUN | 0.284430 | 1.080329 | 1.085308 | 0.003097 | 0.002977 | 0.003028 |
| nest_test.test | RUN | 0.722539 | 4.836426 | 3.620291 | 0.002096 | 0.002149 | 0.002132 |
| nest_api_test.test | RUN | 1.227388 | 9.537690 | 6.656224 | 0.003224 | 0.003018 | 0.003357 |
| monotonic_buffer_resource_test.test | RUN | 0.282959 | 1.976564 | 1.119041 | 0.002034 | 0.002087 | 0.002123 |
| memory_resource_test.test | RUN | 0.177690 | 0.570560 | 0.626171 | 0.002049 | 0.002000 | 0.002001 |
| map_test.test | RUN | 6.684184 | 30.656057 | 34.009729 | 0.014922 | 0.014826 | 0.014282 |
| list_test.test | RUN | 3.473044 | 15.597278 | 14.202841 | 0.033720 | 0.033356 | 0.035128 |
| is_constructible_test.test | RUN | 0.106098 | 0.225338 | 0.385279 | 0.000821 | 0.000857 | 0.002110 |
| insert_vs_emplace_test.test | RUN | 0.349243 | 1.341715 | 2.143223 | 0.002028 | 0.002248 | 0.002138 |
| hub_uses_allocator_test.test | RUN | 0.371107 | 1.143759 | 1.490625 | 0.001954 | 0.002194 | 0.002076 |
| hub_stability_test.test | RUN | 0.811557 | 4.963183 | 4.852351 | 0.002243 | 0.002564 | 0.002491 |
| hub_sort_test.test | RUN | 0.523910 | 2.318905 | 2.302760 | 0.630976 | 0.637695 | 0.618048 |
| hub_pocxx_test.test | RUN | 0.449275 | 2.703708 | 1.784544 | 0.002052 | 0.002186 | 0.001950 |
| hub_new_extended_alignment_test.test | RUN | 0.269588 | 0.854672 | 0.974998 | 0.001920 | 0.002164 | 0.002064 |
| hub_exception_safety_test.test | RUN | 0.975493 | 6.285800 | 4.820292 | 0.102731 | 0.117203 | 0.114638 |
| hub_empty_sort_test.test | RUN | 0.287537 | 0.760793 | 1.122180 | 0.001978 | 0.002040 | 0.002215 |
| hub_api_test.test | RUN | 3.166891 | 25.847590 | 14.707091 | 0.004797 | 0.004378 | 0.004420 |
| global_resource_test.test | RUN | 0.164678 | 0.542560 | 0.632081 | 0.002094 | 0.002252 | 0.002116 |
| flat_tree_test.test | RUN | 5.878916 | 38.400377 | 28.512777 | 0.002006 | 0.001972 | 0.002074 |
| flat_set_test.test | RUN | 7.537294 | 48.711384 | 36.582449 | 0.011198 | 0.009717 | 0.010620 |
| flat_set_adaptor_test.test | RUN | 5.546775 | 43.846216 | 29.173737 | 0.010593 | 0.010280 | 0.011149 |
| flat_map_test.test | RUN | 12.005236 | 72.470069 | 59.870931 | 0.011848 | 0.011962 | 0.011027 |
| flat_map_adaptor_test.test | RUN | 7.596509 | 53.279954 | 42.955861 | 0.010767 | 0.010833 | 0.010744 |
| explicit_inst_vector_test.test | RUN | 1.178259 | 7.324480 | 6.527677 | 0.001948 | 0.001878 | 0.002113 |
| explicit_inst_string_test.test | RUN | 1.510852 | 12.880564 | 8.868135 | 0.001920 | 0.002102 | 0.002182 |
| explicit_inst_static_vector_test.test | RUN | 0.156956 | 0.508737 | 0.722538 | 0.001976 | 0.002064 | 0.001965 |
| explicit_inst_stable_vector_test.test | RUN | 0.956817 | 4.703429 | 4.054649 | 0.001978 | 0.002142 | 0.001884 |
| explicit_inst_small_vector_test.test | RUN | 0.818465 | 4.212639 | 3.968519 | 0.001918 | 0.002302 | 0.001491 |
| explicit_inst_slist_test.test | RUN | 0.623682 | 3.838581 | 3.183402 | 0.002076 | 0.002008 | 0.002003 |
| explicit_inst_set_test.test | RUN | 0.878263 | 4.407409 | 3.679355 | 0.002007 | 0.001936 | 0.001880 |
| explicit_inst_map_test.test | RUN | 0.969524 | 4.542323 | 4.036421 | 0.002100 | 0.002068 | 0.002080 |
| explicit_inst_list_test.test | RUN | 0.224302 | 1.052612 | 1.021390 | 0.002028 | 0.002079 | 0.002106 |
| explicit_inst_flat_set_test.test | RUN | 4.955424 | 32.993471 | 21.863369 | 0.002007 | 0.002118 | 0.002174 |
| explicit_inst_flat_map_test.test | RUN | 5.320428 | 34.388341 | 24.659263 | 0.001974 | 0.002172 | 0.002086 |
| explicit_inst_devector_test.test | RUN | 0.616121 | 4.250324 | 3.206824 | 0.002018 | 0.002046 | 0.002029 |
| explicit_inst_deque_test.test | RUN | 0.699403 | 4.491499 | 3.466094 | 0.001963 | 0.002138 | 0.002028 |
| devector_test.test | RUN | 9.221472 | 52.773942 | 38.597819 | 0.004132 | 0.004022 | 0.005186 |
| devector_options_test.test | RUN | 0.436212 | 2.510640 | 1.849327 | 0.002449 | 0.002379 | 0.002334 |
| deque_test.test | RUN | 6.712131 | 27.423021 | 28.436099 | 0.432207 | 0.987577 | 0.542556 |
| deque_options_test.test | RUN | 0.309287 | 0.890032 | 1.448972 | 0.002097 | 0.002130 | 0.002258 |
| copy_move_algo_test.test | RUN | 0.301107 | 1.178593 | 1.361746 | 0.002140 | 0.001944 | 0.002152 |
| common_iterator_test.test | RUN | 0.023792 | 0.061572 | 0.062998 | 0.000863 | 0.000898 | 0.002130 |
| boost_iterator_comp_test.test | RUN | 0.442195 | 1.395313 | 1.887719 | 0.001841 | 0.002214 | 0.002081 |
| allocator_traits_test.test | RUN | 0.264683 | 0.628424 | 0.884098 | 0.001970 | 0.002066 | 0.002108 |
| alloc_full_test.test | RUN | 0.284261 | 1.250469 | 1.269786 | 0.006106 | 0.006177 | 0.006157 |
| alloc_basic_test.test | RUN | 0.235366 | 0.931185 | 0.999209 | 0.002018 | 0.002114 | 0.002103 |
| adaptive_pool_test.test | RUN | 2.719650 | 17.801647 | 16.259022 | 0.012710 | 0.011354 | 0.019238 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.990×, 0.992× | 1.008× |
| clang | 1.054× | 1.052×, 1.056× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.013284s | 0.012133s | 0.012970s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001247s | 0.001282s | 0.001284s | byte equality observed |
| alloc_full_test.test | 6 | 0.003798s | 0.003897s | 0.003954s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001183s | 0.001170s | 0.001184s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001246s | 0.001249s | 0.001211s | byte equality observed |
| common_iterator_test.test | 10 | 0.000584s | 0.000583s | 0.001193s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001425s | 0.001371s | 0.001392s | byte equality observed |
| deque_options_test.test | 10 | 0.001296s | 0.001319s | 0.001280s | byte equality observed |
| deque_test.test | 1 | 0.471015s | 0.470400s | 0.582790s | byte equality observed |
| devector_options_test.test | 10 | 0.001441s | 0.001327s | 0.001318s | byte equality observed |
| devector_test.test | 4 | 0.003686s | 0.003609s | 0.004901s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001149s | 0.001149s | 0.001159s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001143s | 0.001138s | 0.001128s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001149s | 0.001154s | 0.001141s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001156s | 0.001161s | 0.001130s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001126s | 0.001143s | 0.001132s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001140s | 0.001153s | 0.001126s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001158s | 0.001168s | 0.001164s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001155s | 0.001158s | 0.001137s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.001151s | 0.001156s | 0.001131s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001161s | 0.001157s | 0.001145s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001136s | 0.001129s | 0.001139s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001149s | 0.001154s | 0.001157s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001151s | 0.001164s | 0.001145s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007166s | 0.006828s | 0.006853s | byte equality observed |
| flat_map_test.test | 3 | 0.007701s | 0.007381s | 0.007068s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007204s | 0.006497s | 0.007086s | byte equality observed |
| flat_set_test.test | 3 | 0.007124s | 0.006283s | 0.006972s | byte equality observed |
| flat_tree_test.test | 10 | 0.001161s | 0.001171s | 0.001158s | byte equality observed |
| global_resource_test.test | 10 | 0.001179s | 0.001193s | 0.001188s | byte equality observed |
| hub_api_test.test | 6 | 0.003311s | 0.002757s | 0.002688s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001139s | 0.001159s | 0.001142s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.075045s | 0.081167s | 0.075876s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001308s | 0.001315s | 0.001202s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001262s | 0.001238s | 0.001185s | byte equality observed |
| hub_sort_test.test | 1 | 0.512771s | 0.516163s | 0.497645s | byte equality observed |
| hub_stability_test.test | 10 | 0.001445s | 0.001430s | 0.001484s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001157s | 0.001140s | 0.001143s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001199s | 0.001165s | 0.001164s | byte equality observed |
| is_constructible_test.test | 10 | 0.000553s | 0.000534s | 0.001118s | byte equality observed |
| list_test.test | 1 | 0.021556s | 0.021009s | 0.021405s | byte equality observed |
| map_test.test | 2 | 0.009555s | 0.009543s | 0.009497s | byte equality observed |
| memory_resource_test.test | 10 | 0.001195s | 0.001181s | 0.001193s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001189s | 0.001191s | 0.001195s | byte equality observed |
| nest_api_test.test | 8 | 0.001981s | 0.001964s | 0.002011s | byte equality observed |
| nest_test.test | 10 | 0.001195s | 0.001177s | 0.001208s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001743s | 0.001716s | 0.001717s | byte equality observed |
| node_allocator_test.test | 3 | 0.008964s | 0.008613s | 0.008711s | byte equality observed |
| node_handle_test.test | 10 | 0.001203s | 0.001173s | 0.001152s | byte equality observed |
| null_iterators_test.test | 10 | 0.001171s | 0.001166s | 0.001132s | byte equality observed |
| pair_test.test | 10 | 0.001172s | 0.001167s | 0.001123s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001148s | 0.001129s | 0.001124s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001151s | 0.001135s | 0.001137s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001148s | 0.001145s | 0.001115s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001158s | 0.001141s | 0.001131s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001158s | 0.001132s | 0.001113s | byte equality observed |
| pmr_list_test.test | 10 | 0.001161s | 0.001139s | 0.001115s | byte equality observed |
| pmr_map_test.test | 10 | 0.001160s | 0.001145s | 0.001130s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001168s | 0.001158s | 0.001116s | byte equality observed |
| pmr_set_test.test | 10 | 0.001155s | 0.001148s | 0.001116s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001163s | 0.001142s | 0.001153s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001150s | 0.001153s | 0.001229s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001164s | 0.001161s | 0.001275s | byte equality observed |
| pmr_string_test.test | 10 | 0.000561s | 0.000551s | 0.001268s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000555s | 0.000553s | 0.001243s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001232s | 0.001199s | 0.001254s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001217s | 0.001212s | 0.001258s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001256s | 0.001234s | 0.001257s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001291s | 0.001293s | 0.001220s | byte equality observed |
| segtor_options_test.test | 10 | 0.001297s | 0.001238s | 0.001247s | byte equality observed |
| segtor_test.test | 1 | 0.453036s | 0.446644s | 0.446024s | byte equality observed |
| set_test.test | 2 | 0.013419s | 0.011806s | 0.013229s | byte equality observed |
| slist_test.test | 1 | 0.020448s | 0.020362s | 0.020966s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001310s | 0.001258s | 0.001315s | byte equality observed |
| small_vector_test.test | 3 | 0.002443s | 0.002254s | 0.004129s | byte equality observed |
| stable_vector_test.test | 1 | 0.029291s | 0.029838s | 0.030897s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001266s | 0.001226s | 0.001241s | byte equality observed |
| static_vector_test.test | 9 | 0.001609s | 0.001504s | 0.001553s | byte equality observed |
| string_options_test.test | 10 | 0.001234s | 0.001262s | 0.001216s | byte equality observed |
| string_test.test | 2 | 0.014981s | 0.015450s | 0.015024s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001177s | 0.001207s | 0.001170s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001230s | 0.001267s | 0.001226s | byte equality observed |
| throw_exception_test.test | 10 | 0.001159s | 0.001172s | 0.001156s | byte equality observed |
| tree_test.test | 10 | 0.001155s | 0.001162s | 0.001147s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001219s | 0.001253s | 0.001216s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001149s | 0.001157s | 0.001142s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000541s | 0.000552s | 0.001125s | byte equality observed |
| vector_options_test.test | 10 | 0.001337s | 0.001312s | 0.001340s | byte equality observed |
| vector_test.test | 4 | 0.003912s | 0.003945s | 0.005565s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
