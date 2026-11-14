# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.857768 | 31.553687 | 27.370612 | 0.005766 | 0.005385 | 0.007451 |
| vector_options_test.test | RUN | 0.321484 | 1.413762 | 1.212170 | 0.002107 | 0.002121 | 0.001899 |
| uses_allocator_test.test | RUN | 0.059009 | 0.122804 | 0.164203 | 0.000635 | 0.000759 | 0.001686 |
| uses_allocator_construction_test.test | RUN | 0.176588 | 0.458778 | 0.515850 | 0.001810 | 0.001671 | 0.001747 |
| unsynchronized_pool_resource_test.test | RUN | 0.228058 | 1.335254 | 0.699520 | 0.001906 | 0.002076 | 0.001832 |
| tree_test.test | RUN | 0.934072 | 4.841199 | 3.785086 | 0.001648 | 0.001740 | 0.001659 |
| throw_exception_test.test | RUN | 0.127171 | 0.271729 | 0.393165 | 0.001644 | 0.001458 | 0.001713 |
| synchronized_pool_resource_test.test | RUN | 0.227898 | 1.337863 | 0.734425 | 0.001889 | 0.002035 | 0.001857 |
| string_view_compat_test.test | RUN | 0.381658 | 2.685935 | 1.409332 | 0.001657 | 0.001911 | 0.001790 |
| string_test.test | RUN | 1.566587 | 9.990993 | 7.416283 | 0.015513 | 0.015206 | 0.015188 |
| string_options_test.test | RUN | 0.288121 | 2.130838 | 1.204695 | 0.001920 | 0.001779 | 0.001705 |
| static_vector_test.test | RUN | 1.755469 | 8.318494 | 7.408588 | 0.002438 | 0.002292 | 0.002414 |
| static_vector_options_test.test | RUN | 0.210074 | 0.551464 | 0.718049 | 0.001746 | 0.001800 | 0.001920 |
| stable_vector_test.test | RUN | 3.865752 | 17.056068 | 14.247190 | 0.030254 | 0.031866 | 0.029864 |
| small_vector_test.test | RUN | 2.656771 | 11.964025 | 10.218806 | 0.003600 | 0.003298 | 0.005337 |
| small_vector_options_test.test | RUN | 0.367064 | 1.465873 | 1.404436 | 0.001988 | 0.001900 | 0.002044 |
| slist_test.test | RUN | 2.387773 | 10.792003 | 9.221470 | 0.024672 | 0.024698 | 0.024856 |
| set_test.test | RUN | 3.701668 | 20.819801 | 16.384399 | 0.014955 | 0.013991 | 0.015225 |
| segtor_test.test | RUN | 4.673620 | 22.364204 | 18.157086 | 0.744699 | 0.655692 | 0.654814 |
| segtor_options_test.test | RUN | 0.242432 | 0.627194 | 0.796233 | 0.001879 | 0.001894 | 0.001802 |
| scoped_allocator_usage_test.test | RUN | 0.833121 | 3.465039 | 3.251662 | 0.001775 | 0.001670 | 0.001748 |
| scoped_allocator_adaptor_test.test | RUN | 0.372104 | 0.924505 | 1.469228 | 0.001771 | 0.001832 | 0.001785 |
| resource_adaptor_test.test | RUN | 0.193182 | 0.588902 | 0.654136 | 0.001717 | 0.001821 | 0.001752 |
| polymorphic_allocator_test.test | RUN | 0.165578 | 0.462185 | 0.507252 | 0.001725 | 0.001888 | 0.001696 |
| pmr_vector_test.test | RUN | 0.090045 | 0.185149 | 0.286332 | 0.000780 | 0.000708 | 0.001735 |
| pmr_string_test.test | RUN | 0.179517 | 0.352794 | 0.535201 | 0.000768 | 0.000804 | 0.001617 |
| pmr_stable_vector_test.test | RUN | 0.202161 | 0.585576 | 0.739385 | 0.001637 | 0.001550 | 0.001718 |
| pmr_small_vector_test.test | RUN | 0.106288 | 0.249365 | 0.358064 | 0.001689 | 0.001658 | 0.001735 |
| pmr_slist_test.test | RUN | 0.150960 | 0.767930 | 0.692788 | 0.001683 | 0.001871 | 0.001801 |
| pmr_set_test.test | RUN | 0.168249 | 0.424932 | 0.452218 | 0.001830 | 0.001806 | 0.001612 |
| pmr_nest_test.test | RUN | 0.133142 | 0.257992 | 0.394455 | 0.001720 | 0.001762 | 0.001786 |
| pmr_map_test.test | RUN | 0.179163 | 0.436368 | 0.553627 | 0.001654 | 0.001726 | 0.001692 |
| pmr_list_test.test | RUN | 0.122073 | 0.262486 | 0.342351 | 0.001550 | 0.001652 | 0.001772 |
| pmr_hub_test.test | RUN | 0.165559 | 0.373109 | 0.444013 | 0.001737 | 0.001644 | 0.001769 |
| pmr_flat_set_test.test | RUN | 0.126790 | 0.284679 | 0.392259 | 0.001771 | 0.001822 | 0.001616 |
| pmr_flat_map_test.test | RUN | 0.155982 | 0.315628 | 0.488474 | 0.001517 | 0.001774 | 0.001752 |
| pmr_devector_test.test | RUN | 0.101895 | 0.280572 | 0.323963 | 0.001549 | 0.001632 | 0.001476 |
| pmr_deque_test.test | RUN | 0.102161 | 0.245585 | 0.324798 | 0.001620 | 0.001776 | 0.001690 |
| pair_test.test | RUN | 0.260829 | 0.557087 | 0.782179 | 0.001583 | 0.001829 | 0.001840 |
| null_iterators_test.test | RUN | 0.406544 | 1.122218 | 1.303976 | 0.001642 | 0.001842 | 0.001825 |
| node_handle_test.test | RUN | 0.176426 | 1.343605 | 0.553146 | 0.001836 | 0.001831 | 0.001805 |
| node_allocator_test.test | RUN | 2.779606 | 13.457331 | 11.364256 | 0.010676 | 0.010535 | 0.010551 |
| new_delete_resource_test.test | RUN | 0.220798 | 0.842062 | 0.766624 | 0.002559 | 0.002275 | 0.002514 |
| nest_test.test | RUN | 0.544491 | 3.591941 | 2.378302 | 0.001905 | 0.001661 | 0.001653 |
| nest_api_test.test | RUN | 0.962126 | 7.028342 | 4.723157 | 0.002593 | 0.002772 | 0.002626 |
| monotonic_buffer_resource_test.test | RUN | 0.213225 | 1.470967 | 0.698271 | 0.001769 | 0.001831 | 0.001714 |
| memory_resource_test.test | RUN | 0.131170 | 0.424019 | 0.440846 | 0.001756 | 0.001816 | 0.001503 |
| map_test.test | RUN | 5.078162 | 22.896979 | 23.525113 | 0.011437 | 0.010820 | 0.010741 |
| list_test.test | RUN | 2.583083 | 11.627226 | 9.788425 | 0.025180 | 0.026147 | 0.024747 |
| is_constructible_test.test | RUN | 0.084274 | 0.164898 | 0.251910 | 0.000778 | 0.000745 | 0.001620 |
| insert_vs_emplace_test.test | RUN | 0.278724 | 0.966726 | 1.350383 | 0.001842 | 0.001932 | 0.001741 |
| hub_uses_allocator_test.test | RUN | 0.286159 | 0.828411 | 0.943944 | 0.001673 | 0.001850 | 0.001718 |
| hub_stability_test.test | RUN | 0.597684 | 3.800528 | 3.248454 | 0.002012 | 0.002154 | 0.001975 |
| hub_sort_test.test | RUN | 0.387772 | 1.715119 | 1.611369 | 0.533353 | 0.523826 | 0.505623 |
| hub_pocxx_test.test | RUN | 0.354018 | 1.954318 | 1.188400 | 0.001860 | 0.001940 | 0.001774 |
| hub_new_extended_alignment_test.test | RUN | 0.204344 | 0.609680 | 0.648277 | 0.001812 | 0.001751 | 0.001518 |
| hub_exception_safety_test.test | RUN | 0.712394 | 4.700990 | 3.229417 | 0.090182 | 0.087762 | 0.094245 |
| hub_empty_sort_test.test | RUN | 0.231290 | 0.570083 | 0.778079 | 0.001852 | 0.001802 | 0.001726 |
| hub_api_test.test | RUN | 2.426841 | 18.764239 | 10.205987 | 0.004136 | 0.003642 | 0.003521 |
| global_resource_test.test | RUN | 0.128581 | 0.353553 | 0.419461 | 0.001846 | 0.001887 | 0.001664 |
| flat_tree_test.test | RUN | 4.447759 | 28.846856 | 19.781205 | 0.001843 | 0.001764 | 0.001686 |
| flat_set_test.test | RUN | 5.628163 | 36.202276 | 25.398943 | 0.008523 | 0.006903 | 0.008397 |
| flat_set_adaptor_test.test | RUN | 4.171955 | 32.555683 | 19.687543 | 0.008537 | 0.007782 | 0.008408 |
| flat_map_test.test | RUN | 9.163407 | 54.640766 | 42.290009 | 0.009249 | 0.008691 | 0.008361 |
| flat_map_adaptor_test.test | RUN | 5.795367 | 40.041777 | 30.105132 | 0.008656 | 0.008304 | 0.008368 |
| explicit_inst_vector_test.test | RUN | 0.886634 | 5.409801 | 4.373542 | 0.001808 | 0.001655 | 0.001680 |
| explicit_inst_string_test.test | RUN | 1.160387 | 9.530084 | 6.095393 | 0.001796 | 0.001740 | 0.001581 |
| explicit_inst_static_vector_test.test | RUN | 0.119489 | 0.363718 | 0.449093 | 0.001783 | 0.001815 | 0.001642 |
| explicit_inst_stable_vector_test.test | RUN | 0.710439 | 3.515275 | 2.729819 | 0.001517 | 0.001801 | 0.001735 |
| explicit_inst_small_vector_test.test | RUN | 0.595934 | 3.142316 | 2.543852 | 0.001749 | 0.001735 | 0.001714 |
| explicit_inst_slist_test.test | RUN | 0.440043 | 2.859042 | 2.049762 | 0.001712 | 0.001802 | 0.001714 |
| explicit_inst_set_test.test | RUN | 0.645577 | 3.297999 | 2.450712 | 0.001738 | 0.001579 | 0.001753 |
| explicit_inst_map_test.test | RUN | 0.697178 | 3.491769 | 2.658187 | 0.001690 | 0.001518 | 0.001753 |
| explicit_inst_list_test.test | RUN | 0.157033 | 0.795076 | 0.669353 | 0.001692 | 0.001473 | 0.001691 |
| explicit_inst_flat_set_test.test | RUN | 3.678053 | 24.485347 | 15.166306 | 0.001795 | 0.001727 | 0.001694 |
| explicit_inst_flat_map_test.test | RUN | 3.943160 | 25.635706 | 16.867411 | 0.001445 | 0.001774 | 0.001436 |
| explicit_inst_devector_test.test | RUN | 0.492282 | 3.114156 | 2.144992 | 0.001766 | 0.001861 | 0.001651 |
| explicit_inst_deque_test.test | RUN | 0.507921 | 3.300255 | 2.288481 | 0.001831 | 0.001804 | 0.001648 |
| devector_test.test | RUN | 6.530588 | 41.008781 | 29.501727 | 0.003925 | 0.003538 | 0.004635 |
| devector_options_test.test | RUN | 0.309298 | 1.843035 | 1.223522 | 0.001999 | 0.001950 | 0.002002 |
| deque_test.test | RUN | 5.156224 | 23.910723 | 17.988451 | 0.520190 | 0.370182 | 0.424364 |
| deque_options_test.test | RUN | 0.231516 | 0.653828 | 0.943706 | 0.001844 | 0.001974 | 0.001622 |
| copy_move_algo_test.test | RUN | 0.227421 | 0.816689 | 0.830705 | 0.002090 | 0.002039 | 0.001954 |
| common_iterator_test.test | RUN | 0.018605 | 0.048080 | 0.047610 | 0.000718 | 0.000858 | 0.001740 |
| boost_iterator_comp_test.test | RUN | 0.332238 | 1.006112 | 1.256313 | 0.001624 | 0.001876 | 0.001670 |
| allocator_traits_test.test | RUN | 0.199663 | 0.473741 | 0.617260 | 0.001526 | 0.001822 | 0.001737 |
| alloc_full_test.test | RUN | 0.217018 | 0.911729 | 0.846530 | 0.004864 | 0.004678 | 0.004376 |
| alloc_basic_test.test | RUN | 0.181130 | 0.670225 | 0.648423 | 0.001762 | 0.001703 | 0.001762 |
| adaptive_pool_test.test | RUN | 2.801957 | 10.588685 | 7.182175 | 0.014323 | 0.009870 | 0.010501 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.927× | 0.923×, 0.931× | 0.993× |
| clang | 0.943× | 0.941×, 0.945× | 1.018× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010113s | 0.009557s | 0.010305s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001071s | 0.001061s | 0.001072s | byte equality observed |
| alloc_full_test.test | 7 | 0.002969s | 0.002855s | 0.002979s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000983s | 0.000973s | 0.000989s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001007s | 0.001019s | 0.001002s | byte equality observed |
| common_iterator_test.test | 10 | 0.000462s | 0.000465s | 0.000986s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001228s | 0.001145s | 0.001130s | byte equality observed |
| deque_options_test.test | 10 | 0.001076s | 0.001044s | 0.001081s | byte equality observed |
| deque_test.test | 1 | 0.458999s | 0.393298s | 0.455383s | byte equality observed |
| devector_options_test.test | 7 | 0.001144s | 0.001077s | 0.001098s | byte equality observed |
| devector_test.test | 5 | 0.003226s | 0.003148s | 0.004278s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000943s | 0.000963s | 0.000945s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000935s | 0.000940s | 0.000944s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000948s | 0.000956s | 0.000935s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000948s | 0.000955s | 0.000921s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000938s | 0.000939s | 0.000909s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000946s | 0.000959s | 0.000926s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000951s | 0.000948s | 0.000928s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000947s | 0.000956s | 0.000929s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000943s | 0.000958s | 0.000933s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000945s | 0.000951s | 0.000932s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000939s | 0.000937s | 0.000923s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000945s | 0.000968s | 0.000940s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000953s | 0.000955s | 0.000945s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005880s | 0.005619s | 0.005727s | byte equality observed |
| flat_map_test.test | 4 | 0.006300s | 0.005992s | 0.005937s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005921s | 0.005384s | 0.005894s | byte equality observed |
| flat_set_test.test | 4 | 0.005914s | 0.005185s | 0.005803s | byte equality observed |
| flat_tree_test.test | 10 | 0.000949s | 0.000970s | 0.000939s | byte equality observed |
| global_resource_test.test | 10 | 0.000982s | 0.001000s | 0.001003s | byte equality observed |
| hub_api_test.test | 7 | 0.002681s | 0.002234s | 0.002206s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000953s | 0.000985s | 0.001003s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.065713s | 0.065116s | 0.063594s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001011s | 0.001003s | 0.000980s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000992s | 0.001027s | 0.000982s | byte equality observed |
| hub_sort_test.test | 1 | 0.436938s | 0.432151s | 0.420285s | byte equality observed |
| hub_stability_test.test | 10 | 0.001202s | 0.001202s | 0.001207s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000966s | 0.000962s | 0.000963s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000993s | 0.000980s | 0.000975s | byte equality observed |
| is_constructible_test.test | 10 | 0.000442s | 0.000444s | 0.000924s | byte equality observed |
| list_test.test | 2 | 0.017147s | 0.017307s | 0.017573s | byte equality observed |
| map_test.test | 3 | 0.007745s | 0.007699s | 0.007672s | byte equality observed |
| memory_resource_test.test | 10 | 0.000975s | 0.000984s | 0.000956s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000966s | 0.000975s | 0.000977s | byte equality observed |
| nest_api_test.test | 10 | 0.001584s | 0.001611s | 0.001611s | byte equality observed |
| nest_test.test | 10 | 0.001002s | 0.001003s | 0.000983s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001424s | 0.001413s | 0.001404s | byte equality observed |
| node_allocator_test.test | 3 | 0.007068s | 0.006954s | 0.007123s | byte equality observed |
| node_handle_test.test | 10 | 0.000979s | 0.000982s | 0.000959s | byte equality observed |
| null_iterators_test.test | 10 | 0.000969s | 0.000987s | 0.000954s | byte equality observed |
| pair_test.test | 10 | 0.000965s | 0.000960s | 0.000959s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000950s | 0.000951s | 0.000953s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000945s | 0.000956s | 0.000953s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000954s | 0.000970s | 0.000966s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000952s | 0.000968s | 0.000951s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000974s | 0.000980s | 0.000948s | byte equality observed |
| pmr_list_test.test | 10 | 0.000948s | 0.000964s | 0.000952s | byte equality observed |
| pmr_map_test.test | 10 | 0.000961s | 0.000965s | 0.000964s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000950s | 0.000957s | 0.000967s | byte equality observed |
| pmr_set_test.test | 10 | 0.000971s | 0.000990s | 0.000947s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000968s | 0.000946s | 0.000967s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000955s | 0.000946s | 0.000982s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000997s | 0.000983s | 0.000968s | byte equality observed |
| pmr_string_test.test | 10 | 0.000458s | 0.000459s | 0.000967s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000460s | 0.000468s | 0.000976s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001016s | 0.000980s | 0.001002s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001017s | 0.000971s | 0.001016s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001018s | 0.001008s | 0.001000s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001002s | 0.001012s | 0.001002s | byte equality observed |
| segtor_options_test.test | 10 | 0.001025s | 0.001009s | 0.001001s | byte equality observed |
| segtor_test.test | 1 | 0.427503s | 0.372425s | 0.371347s | byte equality observed |
| set_test.test | 2 | 0.010984s | 0.009623s | 0.011076s | byte equality observed |
| slist_test.test | 2 | 0.016774s | 0.016945s | 0.016890s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001083s | 0.001044s | 0.001080s | byte equality observed |
| small_vector_test.test | 6 | 0.002090s | 0.001904s | 0.003560s | byte equality observed |
| stable_vector_test.test | 1 | 0.025237s | 0.025427s | 0.026408s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001056s | 0.001017s | 0.001031s | byte equality observed |
| static_vector_test.test | 10 | 0.001325s | 0.001243s | 0.001285s | byte equality observed |
| string_options_test.test | 10 | 0.001027s | 0.001022s | 0.000989s | byte equality observed |
| string_test.test | 2 | 0.010939s | 0.011756s | 0.011415s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000967s | 0.000992s | 0.000968s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001023s | 0.001032s | 0.001020s | byte equality observed |
| throw_exception_test.test | 10 | 0.000946s | 0.000961s | 0.000940s | byte equality observed |
| tree_test.test | 10 | 0.000954s | 0.000996s | 0.000926s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001012s | 0.001027s | 0.001011s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000954s | 0.000971s | 0.000968s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000448s | 0.000459s | 0.000959s | byte equality observed |
| vector_options_test.test | 10 | 0.001112s | 0.001105s | 0.001107s | byte equality observed |
| vector_test.test | 4 | 0.003475s | 0.003456s | 0.004957s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
