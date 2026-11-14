# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.869714 | 32.689001 | 29.094274 | 0.006106 | 0.005341 | 0.007591 |
| vector_options_test.test | RUN | 0.318455 | 1.447176 | 1.228998 | 0.002104 | 0.002022 | 0.002151 |
| uses_allocator_test.test | RUN | 0.057522 | 0.125474 | 0.169866 | 0.000760 | 0.000782 | 0.001851 |
| uses_allocator_construction_test.test | RUN | 0.176311 | 0.462900 | 0.598456 | 0.001780 | 0.001684 | 0.001762 |
| unsynchronized_pool_resource_test.test | RUN | 0.210697 | 1.397112 | 0.792500 | 0.001438 | 0.001226 | 0.001894 |
| tree_test.test | RUN | 0.909730 | 4.969312 | 4.129499 | 0.001508 | 0.001826 | 0.001851 |
| throw_exception_test.test | RUN | 0.124259 | 0.264961 | 0.404640 | 0.001743 | 0.001806 | 0.001853 |
| synchronized_pool_resource_test.test | RUN | 0.219369 | 1.387516 | 0.774017 | 0.001700 | 0.002007 | 0.001956 |
| string_view_compat_test.test | RUN | 0.364347 | 2.747821 | 1.440805 | 0.001537 | 0.001884 | 0.001776 |
| string_test.test | RUN | 1.560068 | 10.301266 | 7.923654 | 0.016178 | 0.015621 | 0.015661 |
| string_options_test.test | RUN | 0.297937 | 2.207634 | 1.111680 | 0.001872 | 0.001946 | 0.001684 |
| static_vector_test.test | RUN | 1.695211 | 8.656644 | 7.817897 | 0.002252 | 0.002319 | 0.002438 |
| static_vector_options_test.test | RUN | 0.212159 | 0.603463 | 0.732547 | 0.001907 | 0.002022 | 0.002002 |
| stable_vector_test.test | RUN | 3.829299 | 17.968838 | 14.929821 | 0.031569 | 0.031493 | 0.034214 |
| small_vector_test.test | RUN | 2.615651 | 12.601092 | 10.700656 | 0.003648 | 0.003340 | 0.005534 |
| small_vector_options_test.test | RUN | 0.352431 | 1.529281 | 1.454898 | 0.001977 | 0.002074 | 0.002112 |
| slist_test.test | RUN | 2.347347 | 11.299674 | 9.693342 | 0.025026 | 0.024886 | 0.024708 |
| set_test.test | RUN | 3.651337 | 21.019638 | 17.505165 | 0.014785 | 0.013602 | 0.015185 |
| segtor_test.test | RUN | 4.691464 | 22.301492 | 19.221972 | 0.733226 | 0.645572 | 0.642676 |
| segtor_options_test.test | RUN | 0.239396 | 0.680449 | 0.922164 | 0.001899 | 0.001802 | 0.001914 |
| scoped_allocator_usage_test.test | RUN | 0.846014 | 3.459292 | 3.293598 | 0.001762 | 0.001740 | 0.001829 |
| scoped_allocator_adaptor_test.test | RUN | 0.386394 | 0.939752 | 1.450566 | 0.001716 | 0.001522 | 0.001812 |
| resource_adaptor_test.test | RUN | 0.195693 | 0.547307 | 0.673664 | 0.001792 | 0.001674 | 0.001762 |
| polymorphic_allocator_test.test | RUN | 0.166612 | 0.463387 | 0.566206 | 0.003228 | 0.001854 | 0.001816 |
| pmr_vector_test.test | RUN | 0.092271 | 0.183695 | 0.268508 | 0.000857 | 0.000816 | 0.001697 |
| pmr_string_test.test | RUN | 0.186092 | 0.380979 | 0.533913 | 0.000620 | 0.000770 | 0.001676 |
| pmr_stable_vector_test.test | RUN | 0.208817 | 0.597327 | 0.760989 | 0.001682 | 0.001788 | 0.001800 |
| pmr_small_vector_test.test | RUN | 0.105814 | 0.243713 | 0.366021 | 0.001591 | 0.001770 | 0.001842 |
| pmr_slist_test.test | RUN | 0.155202 | 0.779479 | 0.736297 | 0.001710 | 0.001872 | 0.001723 |
| pmr_set_test.test | RUN | 0.170671 | 0.412370 | 0.485904 | 0.001750 | 0.001724 | 0.001777 |
| pmr_nest_test.test | RUN | 0.134829 | 0.267826 | 0.360629 | 0.001562 | 0.001633 | 0.001746 |
| pmr_map_test.test | RUN | 0.178291 | 0.423099 | 0.513730 | 0.001292 | 0.001828 | 0.001874 |
| pmr_list_test.test | RUN | 0.117878 | 0.269175 | 0.403908 | 0.001684 | 0.001784 | 0.001872 |
| pmr_hub_test.test | RUN | 0.165042 | 0.362759 | 0.458586 | 0.001789 | 0.001588 | 0.001742 |
| pmr_flat_set_test.test | RUN | 0.132014 | 0.285901 | 0.388695 | 0.001608 | 0.001536 | 0.001783 |
| pmr_flat_map_test.test | RUN | 0.158409 | 0.327878 | 0.467634 | 0.001766 | 0.001544 | 0.001620 |
| pmr_devector_test.test | RUN | 0.102619 | 0.279815 | 0.380171 | 0.001747 | 0.001756 | 0.001684 |
| pmr_deque_test.test | RUN | 0.101823 | 0.229971 | 0.335270 | 0.001545 | 0.001857 | 0.001636 |
| pair_test.test | RUN | 0.274176 | 0.572073 | 0.816697 | 0.001834 | 0.001844 | 0.001816 |
| null_iterators_test.test | RUN | 0.419491 | 1.096584 | 1.239166 | 0.001824 | 0.001880 | 0.001645 |
| node_handle_test.test | RUN | 0.182657 | 1.352782 | 0.536316 | 0.001722 | 0.001819 | 0.001812 |
| node_allocator_test.test | RUN | 2.832335 | 13.539663 | 11.980139 | 0.010202 | 0.009980 | 0.010808 |
| new_delete_resource_test.test | RUN | 0.220401 | 0.821637 | 0.727547 | 0.002584 | 0.002508 | 0.002617 |
| nest_test.test | RUN | 0.528220 | 3.697576 | 2.484239 | 0.001780 | 0.001894 | 0.001648 |
| nest_api_test.test | RUN | 1.018598 | 6.946200 | 5.056939 | 0.002442 | 0.002732 | 0.002697 |
| monotonic_buffer_resource_test.test | RUN | 0.198421 | 1.447200 | 0.607306 | 0.001574 | 0.001884 | 0.001890 |
| memory_resource_test.test | RUN | 0.131364 | 0.423868 | 0.424857 | 0.001837 | 0.001888 | 0.001804 |
| map_test.test | RUN | 5.135777 | 23.249878 | 25.031646 | 0.011305 | 0.010893 | 0.010808 |
| list_test.test | RUN | 2.621515 | 12.073017 | 10.346495 | 0.024690 | 0.025684 | 0.025468 |
| is_constructible_test.test | RUN | 0.084462 | 0.135424 | 0.261062 | 0.000811 | 0.000756 | 0.001843 |
| insert_vs_emplace_test.test | RUN | 0.271799 | 0.991906 | 1.414028 | 0.001823 | 0.001812 | 0.001876 |
| hub_uses_allocator_test.test | RUN | 0.281646 | 0.833278 | 1.007336 | 0.001543 | 0.001904 | 0.001838 |
| hub_stability_test.test | RUN | 0.600996 | 3.867016 | 3.499358 | 0.002246 | 0.002132 | 0.002002 |
| hub_sort_test.test | RUN | 0.385255 | 1.755227 | 1.722820 | 0.532333 | 0.531495 | 0.504715 |
| hub_pocxx_test.test | RUN | 0.378932 | 2.066153 | 1.240268 | 0.001742 | 0.001949 | 0.001865 |
| hub_new_extended_alignment_test.test | RUN | 0.206220 | 0.619953 | 0.724687 | 0.001755 | 0.001881 | 0.001744 |
| hub_exception_safety_test.test | RUN | 0.712131 | 4.728701 | 3.680382 | 0.090365 | 0.090701 | 0.088800 |
| hub_empty_sort_test.test | RUN | 0.224176 | 0.586719 | 0.766006 | 0.001872 | 0.001893 | 0.001730 |
| hub_api_test.test | RUN | 2.405267 | 19.688461 | 11.684310 | 0.004094 | 0.003624 | 0.003602 |
| global_resource_test.test | RUN | 0.129172 | 0.390243 | 0.407399 | 0.001765 | 0.001885 | 0.001753 |
| flat_tree_test.test | RUN | 4.495481 | 28.740802 | 20.608562 | 0.001809 | 0.001699 | 0.001725 |
| flat_set_test.test | RUN | 5.692502 | 37.077145 | 27.044182 | 0.008550 | 0.007496 | 0.008134 |
| flat_set_adaptor_test.test | RUN | 4.185728 | 33.033190 | 21.371547 | 0.008598 | 0.007545 | 0.008134 |
| flat_map_test.test | RUN | 9.187587 | 55.387919 | 44.202812 | 0.009245 | 0.008943 | 0.008655 |
| flat_map_adaptor_test.test | RUN | 5.764288 | 40.195114 | 30.958975 | 0.008657 | 0.008180 | 0.008204 |
| explicit_inst_vector_test.test | RUN | 0.879516 | 5.556003 | 4.676233 | 0.001657 | 0.001911 | 0.001754 |
| explicit_inst_string_test.test | RUN | 1.142552 | 9.693245 | 6.277227 | 0.001849 | 0.001881 | 0.001789 |
| explicit_inst_static_vector_test.test | RUN | 0.119597 | 0.327371 | 0.466668 | 0.001714 | 0.001860 | 0.001665 |
| explicit_inst_stable_vector_test.test | RUN | 0.712515 | 3.501796 | 2.934704 | 0.001820 | 0.001769 | 0.001671 |
| explicit_inst_small_vector_test.test | RUN | 0.610097 | 3.070701 | 2.748134 | 0.001754 | 0.001773 | 0.001824 |
| explicit_inst_slist_test.test | RUN | 0.443549 | 2.845449 | 2.122351 | 0.001725 | 0.001816 | 0.001805 |
| explicit_inst_set_test.test | RUN | 0.639211 | 3.215869 | 2.548187 | 0.001762 | 0.001847 | 0.001862 |
| explicit_inst_map_test.test | RUN | 0.709941 | 3.534577 | 2.787574 | 0.001741 | 0.001774 | 0.001606 |
| explicit_inst_list_test.test | RUN | 0.156403 | 0.796557 | 0.712031 | 0.001706 | 0.001762 | 0.001791 |
| explicit_inst_flat_set_test.test | RUN | 3.737529 | 24.593860 | 16.296161 | 0.001722 | 0.001692 | 0.001869 |
| explicit_inst_flat_map_test.test | RUN | 3.947632 | 25.609359 | 18.030233 | 0.001670 | 0.001769 | 0.001761 |
| explicit_inst_devector_test.test | RUN | 0.501618 | 3.121694 | 2.196859 | 0.001692 | 0.001865 | 0.001793 |
| explicit_inst_deque_test.test | RUN | 0.515437 | 3.325471 | 2.344286 | 0.001780 | 0.001808 | 0.001637 |
| devector_test.test | RUN | 7.334466 | 41.649430 | 33.294439 | 0.003642 | 0.003698 | 0.004830 |
| devector_options_test.test | RUN | 0.304790 | 1.841459 | 1.283954 | 0.002216 | 0.002070 | 0.002000 |
| deque_test.test | RUN | 4.406756 | 24.100859 | 17.513675 | 0.424704 | 0.358553 | 0.488040 |
| deque_options_test.test | RUN | 0.236517 | 0.714055 | 0.880528 | 0.001597 | 0.001838 | 0.001695 |
| copy_move_algo_test.test | RUN | 0.228790 | 0.816788 | 0.738107 | 0.001998 | 0.001902 | 0.001911 |
| common_iterator_test.test | RUN | 0.018630 | 0.048344 | 0.045945 | 0.000768 | 0.000638 | 0.001452 |
| boost_iterator_comp_test.test | RUN | 0.335167 | 0.965035 | 1.286125 | 0.001737 | 0.001837 | 0.001790 |
| allocator_traits_test.test | RUN | 0.196790 | 0.458216 | 0.646702 | 0.001604 | 0.001898 | 0.001933 |
| alloc_full_test.test | RUN | 0.215193 | 0.913254 | 0.873867 | 0.004650 | 0.004802 | 0.004816 |
| alloc_basic_test.test | RUN | 0.178384 | 0.660330 | 0.619217 | 0.001587 | 0.001912 | 0.001480 |
| adaptive_pool_test.test | RUN | 2.671563 | 10.220989 | 11.479116 | 0.010083 | 0.010058 | 0.010561 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.925× | 0.916×, 0.933× | 0.991× |
| clang | 0.967× | 0.965×, 0.970× | 1.012× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010170s | 0.010094s | 0.010524s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001066s | 0.001057s | 0.001062s | byte equality observed |
| alloc_full_test.test | 5 | 0.003083s | 0.003016s | 0.003022s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000988s | 0.000993s | 0.000987s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001046s | 0.001015s | 0.001002s | byte equality observed |
| common_iterator_test.test | 10 | 0.000464s | 0.000464s | 0.001002s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001237s | 0.001117s | 0.001113s | byte equality observed |
| deque_options_test.test | 6 | 0.001058s | 0.001044s | 0.001087s | byte equality observed |
| deque_test.test | 1 | 0.454792s | 0.391277s | 0.454759s | byte equality observed |
| devector_options_test.test | 10 | 0.001178s | 0.001102s | 0.001103s | byte equality observed |
| devector_test.test | 5 | 0.003301s | 0.003164s | 0.004321s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000968s | 0.000951s | 0.000945s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000943s | 0.000939s | 0.000925s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000949s | 0.000951s | 0.000931s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000949s | 0.000950s | 0.000936s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000950s | 0.000948s | 0.000941s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000954s | 0.000951s | 0.000934s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000963s | 0.000951s | 0.000943s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000953s | 0.000942s | 0.000954s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000945s | 0.000954s | 0.000956s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000941s | 0.000948s | 0.000945s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000932s | 0.000924s | 0.000945s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000948s | 0.000938s | 0.000945s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000944s | 0.000936s | 0.000946s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005961s | 0.005657s | 0.005765s | byte equality observed |
| flat_map_test.test | 3 | 0.006427s | 0.006129s | 0.005938s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.006009s | 0.005410s | 0.005903s | byte equality observed |
| flat_set_test.test | 4 | 0.006030s | 0.005275s | 0.005796s | byte equality observed |
| flat_tree_test.test | 10 | 0.000969s | 0.000976s | 0.000963s | byte equality observed |
| global_resource_test.test | 10 | 0.000993s | 0.000986s | 0.001008s | byte equality observed |
| hub_api_test.test | 7 | 0.002685s | 0.002211s | 0.002201s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000975s | 0.000965s | 0.000952s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.070071s | 0.067552s | 0.064017s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001036s | 0.001038s | 0.001045s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001012s | 0.001055s | 0.001011s | byte equality observed |
| hub_sort_test.test | 1 | 0.444300s | 0.445787s | 0.428818s | byte equality observed |
| hub_stability_test.test | 10 | 0.001208s | 0.001210s | 0.001212s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000974s | 0.000975s | 0.000963s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001011s | 0.001027s | 0.000972s | byte equality observed |
| is_constructible_test.test | 10 | 0.000447s | 0.000439s | 0.000932s | byte equality observed |
| list_test.test | 1 | 0.017226s | 0.017360s | 0.017485s | byte equality observed |
| map_test.test | 3 | 0.007959s | 0.007786s | 0.007800s | byte equality observed |
| memory_resource_test.test | 10 | 0.000992s | 0.000983s | 0.001020s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000985s | 0.000990s | 0.000973s | byte equality observed |
| nest_api_test.test | 10 | 0.001608s | 0.001637s | 0.001639s | byte equality observed |
| nest_test.test | 10 | 0.001002s | 0.001014s | 0.001020s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001456s | 0.001499s | 0.001455s | byte equality observed |
| node_allocator_test.test | 3 | 0.007225s | 0.007108s | 0.007147s | byte equality observed |
| node_handle_test.test | 10 | 0.001019s | 0.001001s | 0.000980s | byte equality observed |
| null_iterators_test.test | 10 | 0.000979s | 0.000956s | 0.000964s | byte equality observed |
| pair_test.test | 10 | 0.000972s | 0.000971s | 0.000969s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000975s | 0.000953s | 0.000963s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000958s | 0.000948s | 0.000952s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000967s | 0.000948s | 0.000957s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000975s | 0.000955s | 0.000948s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000954s | 0.000953s | 0.000962s | byte equality observed |
| pmr_list_test.test | 10 | 0.000966s | 0.000959s | 0.000968s | byte equality observed |
| pmr_map_test.test | 10 | 0.000952s | 0.000987s | 0.000947s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000953s | 0.000950s | 0.000952s | byte equality observed |
| pmr_set_test.test | 10 | 0.000956s | 0.000947s | 0.000970s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000956s | 0.000949s | 0.000948s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000950s | 0.000932s | 0.000962s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000972s | 0.000948s | 0.000960s | byte equality observed |
| pmr_string_test.test | 10 | 0.000464s | 0.000450s | 0.000945s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000461s | 0.000450s | 0.000960s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001027s | 0.001004s | 0.001000s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001018s | 0.000976s | 0.001004s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001008s | 0.000999s | 0.000988s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001007s | 0.001042s | 0.000998s | byte equality observed |
| segtor_options_test.test | 10 | 0.001045s | 0.001035s | 0.001005s | byte equality observed |
| segtor_test.test | 1 | 0.424893s | 0.381153s | 0.371696s | byte equality observed |
| set_test.test | 2 | 0.011039s | 0.009758s | 0.011050s | byte equality observed |
| slist_test.test | 2 | 0.017037s | 0.017260s | 0.017176s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001097s | 0.001076s | 0.001042s | byte equality observed |
| small_vector_test.test | 6 | 0.002098s | 0.001938s | 0.003562s | byte equality observed |
| stable_vector_test.test | 1 | 0.025327s | 0.025428s | 0.026443s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001054s | 0.001025s | 0.001017s | byte equality observed |
| static_vector_test.test | 8 | 0.001340s | 0.001237s | 0.001259s | byte equality observed |
| string_options_test.test | 10 | 0.001035s | 0.001011s | 0.000982s | byte equality observed |
| string_test.test | 2 | 0.011095s | 0.011852s | 0.011427s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000981s | 0.000986s | 0.000954s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001031s | 0.001008s | 0.001017s | byte equality observed |
| throw_exception_test.test | 10 | 0.000956s | 0.000944s | 0.000947s | byte equality observed |
| tree_test.test | 10 | 0.000962s | 0.000973s | 0.000939s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001028s | 0.001020s | 0.001017s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000966s | 0.000954s | 0.000941s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000455s | 0.000452s | 0.000938s | byte equality observed |
| vector_options_test.test | 10 | 0.001128s | 0.001142s | 0.001102s | byte equality observed |
| vector_test.test | 4 | 0.003520s | 0.003534s | 0.005019s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
