# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.926939 | 32.260284 | 27.296717 | 0.005953 | 0.005373 | 0.007720 |
| vector_options_test.test | RUN | 0.326192 | 1.480647 | 1.228479 | 0.002066 | 0.001976 | 0.002050 |
| uses_allocator_test.test | RUN | 0.062036 | 0.124096 | 0.162531 | 0.000763 | 0.000744 | 0.001808 |
| uses_allocator_construction_test.test | RUN | 0.177920 | 0.462886 | 0.517495 | 0.001765 | 0.001861 | 0.001738 |
| unsynchronized_pool_resource_test.test | RUN | 0.218630 | 1.333903 | 0.706520 | 0.001870 | 0.001971 | 0.001814 |
| tree_test.test | RUN | 0.964384 | 4.859510 | 3.921442 | 0.001536 | 0.001880 | 0.001762 |
| throw_exception_test.test | RUN | 0.116591 | 0.289804 | 0.395183 | 0.001740 | 0.001938 | 0.001807 |
| synchronized_pool_resource_test.test | RUN | 0.220571 | 1.331856 | 0.741351 | 0.001904 | 0.001979 | 0.001802 |
| string_view_compat_test.test | RUN | 0.371005 | 2.697603 | 1.432533 | 0.001796 | 0.001936 | 0.001761 |
| string_test.test | RUN | 1.579802 | 10.324901 | 7.399538 | 0.016284 | 0.015547 | 0.015537 |
| string_options_test.test | RUN | 0.296411 | 2.214604 | 1.059334 | 0.001921 | 0.002083 | 0.001723 |
| static_vector_test.test | RUN | 1.728655 | 8.521575 | 7.342638 | 0.002497 | 0.002428 | 0.002360 |
| static_vector_options_test.test | RUN | 0.222704 | 0.596093 | 0.708300 | 0.002006 | 0.001899 | 0.001984 |
| stable_vector_test.test | RUN | 3.905583 | 17.665479 | 14.322646 | 0.031463 | 0.031939 | 0.032980 |
| small_vector_test.test | RUN | 2.615096 | 12.281943 | 10.213691 | 0.003761 | 0.003328 | 0.005173 |
| small_vector_options_test.test | RUN | 0.376675 | 1.523844 | 1.371965 | 0.001908 | 0.002025 | 0.001972 |
| slist_test.test | RUN | 2.390190 | 11.038138 | 9.250902 | 0.025368 | 0.024717 | 0.024358 |
| set_test.test | RUN | 3.636585 | 20.979861 | 16.490777 | 0.015460 | 0.013595 | 0.014765 |
| segtor_test.test | RUN | 4.688179 | 22.682922 | 18.487148 | 0.760796 | 0.650798 | 0.648185 |
| segtor_options_test.test | RUN | 0.258411 | 0.632340 | 0.877543 | 0.001668 | 0.002011 | 0.001784 |
| scoped_allocator_usage_test.test | RUN | 0.836895 | 3.416139 | 3.227553 | 0.001552 | 0.001813 | 0.001503 |
| scoped_allocator_adaptor_test.test | RUN | 0.367769 | 0.968871 | 1.439697 | 0.001823 | 0.001649 | 0.001673 |
| resource_adaptor_test.test | RUN | 0.204878 | 0.585025 | 0.661647 | 0.001746 | 0.001895 | 0.001763 |
| polymorphic_allocator_test.test | RUN | 0.163114 | 0.431458 | 0.530976 | 0.001746 | 0.001699 | 0.001665 |
| pmr_vector_test.test | RUN | 0.096053 | 0.182361 | 0.290361 | 0.000643 | 0.000773 | 0.001747 |
| pmr_string_test.test | RUN | 0.186487 | 0.372795 | 0.556021 | 0.000758 | 0.000798 | 0.001743 |
| pmr_stable_vector_test.test | RUN | 0.206244 | 0.612411 | 0.693010 | 0.001774 | 0.001894 | 0.001754 |
| pmr_small_vector_test.test | RUN | 0.109939 | 0.241166 | 0.357994 | 0.001729 | 0.001770 | 0.001796 |
| pmr_slist_test.test | RUN | 0.159672 | 0.764709 | 0.698000 | 0.001632 | 0.001673 | 0.001572 |
| pmr_set_test.test | RUN | 0.168189 | 0.410330 | 0.558657 | 0.001760 | 0.001678 | 0.001828 |
| pmr_nest_test.test | RUN | 0.141920 | 0.285327 | 0.397339 | 0.001712 | 0.001865 | 0.001851 |
| pmr_map_test.test | RUN | 0.179444 | 0.435615 | 0.560353 | 0.001793 | 0.001716 | 0.001762 |
| pmr_list_test.test | RUN | 0.122525 | 0.263872 | 0.393009 | 0.001718 | 0.001708 | 0.001786 |
| pmr_hub_test.test | RUN | 0.168541 | 0.367210 | 0.479716 | 0.001700 | 0.001587 | 0.001640 |
| pmr_flat_set_test.test | RUN | 0.129674 | 0.296748 | 0.419103 | 0.001634 | 0.001891 | 0.001689 |
| pmr_flat_map_test.test | RUN | 0.162470 | 0.337456 | 0.434408 | 0.001868 | 0.001598 | 0.001678 |
| pmr_devector_test.test | RUN | 0.101468 | 0.286298 | 0.372618 | 0.001628 | 0.001788 | 0.001749 |
| pmr_deque_test.test | RUN | 0.100870 | 0.231502 | 0.327953 | 0.001835 | 0.001776 | 0.001594 |
| pair_test.test | RUN | 0.263636 | 0.601037 | 0.785596 | 0.001858 | 0.001910 | 0.001762 |
| null_iterators_test.test | RUN | 0.401869 | 1.108897 | 1.218349 | 0.001611 | 0.001812 | 0.001778 |
| node_handle_test.test | RUN | 0.184452 | 1.366603 | 0.528126 | 0.001843 | 0.001882 | 0.001687 |
| node_allocator_test.test | RUN | 2.721257 | 13.502490 | 11.407769 | 0.010531 | 0.010322 | 0.010618 |
| new_delete_resource_test.test | RUN | 0.221111 | 0.840104 | 0.705845 | 0.002592 | 0.002558 | 0.002530 |
| nest_test.test | RUN | 0.546695 | 3.730234 | 2.420347 | 0.001935 | 0.001895 | 0.001744 |
| nest_api_test.test | RUN | 1.007015 | 7.143964 | 4.834348 | 0.002726 | 0.002897 | 0.002315 |
| monotonic_buffer_resource_test.test | RUN | 0.227146 | 1.480259 | 0.598344 | 0.001829 | 0.001924 | 0.001646 |
| memory_resource_test.test | RUN | 0.135906 | 0.432566 | 0.442565 | 0.001803 | 0.001875 | 0.001865 |
| map_test.test | RUN | 5.055816 | 23.210718 | 24.241303 | 0.011130 | 0.010028 | 0.010708 |
| list_test.test | RUN | 2.566452 | 12.080883 | 9.851926 | 0.024576 | 0.025594 | 0.025915 |
| is_constructible_test.test | RUN | 0.086830 | 0.168566 | 0.248208 | 0.000771 | 0.000748 | 0.001750 |
| insert_vs_emplace_test.test | RUN | 0.272594 | 0.992251 | 1.368763 | 0.001791 | 0.002006 | 0.001793 |
| hub_uses_allocator_test.test | RUN | 0.291875 | 0.821781 | 0.974541 | 0.001788 | 0.001866 | 0.001621 |
| hub_stability_test.test | RUN | 0.597874 | 3.869187 | 3.250654 | 0.001942 | 0.002267 | 0.002184 |
| hub_sort_test.test | RUN | 0.369321 | 1.714772 | 1.603619 | 0.538399 | 0.521571 | 0.502912 |
| hub_pocxx_test.test | RUN | 0.375247 | 2.006409 | 1.201972 | 0.001768 | 0.002010 | 0.001699 |
| hub_new_extended_alignment_test.test | RUN | 0.200981 | 0.639732 | 0.654679 | 0.001665 | 0.001943 | 0.001526 |
| hub_exception_safety_test.test | RUN | 0.714820 | 4.752160 | 3.421806 | 0.093085 | 0.090777 | 0.090712 |
| hub_empty_sort_test.test | RUN | 0.223026 | 0.596804 | 0.739374 | 0.001871 | 0.001914 | 0.001731 |
| hub_api_test.test | RUN | 2.375271 | 19.919169 | 10.881640 | 0.004180 | 0.003852 | 0.003632 |
| global_resource_test.test | RUN | 0.130763 | 0.389456 | 0.392624 | 0.001724 | 0.001879 | 0.001782 |
| flat_tree_test.test | RUN | 4.490111 | 29.283536 | 19.684663 | 0.001810 | 0.001969 | 0.001627 |
| flat_set_test.test | RUN | 5.626715 | 37.418995 | 25.693946 | 0.008648 | 0.007456 | 0.008367 |
| flat_set_adaptor_test.test | RUN | 4.191785 | 33.089706 | 20.083261 | 0.008280 | 0.007611 | 0.008425 |
| flat_map_test.test | RUN | 9.200949 | 55.726469 | 42.245085 | 0.009287 | 0.009034 | 0.008666 |
| flat_map_adaptor_test.test | RUN | 5.882652 | 40.467785 | 29.745559 | 0.008710 | 0.008234 | 0.008190 |
| explicit_inst_vector_test.test | RUN | 0.923056 | 5.436817 | 4.518431 | 0.001741 | 0.001879 | 0.001730 |
| explicit_inst_string_test.test | RUN | 1.209499 | 9.614718 | 6.242904 | 0.001618 | 0.001876 | 0.001701 |
| explicit_inst_static_vector_test.test | RUN | 0.119279 | 0.374877 | 0.479410 | 0.001694 | 0.001872 | 0.001608 |
| explicit_inst_stable_vector_test.test | RUN | 0.705107 | 3.454486 | 2.957228 | 0.001594 | 0.001825 | 0.001334 |
| explicit_inst_small_vector_test.test | RUN | 0.608006 | 3.137991 | 2.647521 | 0.001584 | 0.001939 | 0.001766 |
| explicit_inst_slist_test.test | RUN | 0.449915 | 2.942930 | 2.100796 | 0.001788 | 0.001920 | 0.001758 |
| explicit_inst_set_test.test | RUN | 0.650804 | 3.348836 | 2.463870 | 0.001736 | 0.001814 | 0.001838 |
| explicit_inst_map_test.test | RUN | 0.719536 | 3.510582 | 2.718782 | 0.001791 | 0.001803 | 0.001668 |
| explicit_inst_list_test.test | RUN | 0.156186 | 0.795119 | 0.699076 | 0.001765 | 0.001802 | 0.001817 |
| explicit_inst_flat_set_test.test | RUN | 3.747862 | 24.695279 | 15.456591 | 0.001908 | 0.001894 | 0.001779 |
| explicit_inst_flat_map_test.test | RUN | 3.975529 | 25.875288 | 17.150265 | 0.001760 | 0.001914 | 0.001769 |
| explicit_inst_devector_test.test | RUN | 0.495067 | 3.047646 | 2.146277 | 0.001735 | 0.001871 | 0.001698 |
| explicit_inst_deque_test.test | RUN | 0.507871 | 3.392696 | 2.289482 | 0.001880 | 0.001844 | 0.001664 |
| devector_test.test | RUN | 7.174393 | 41.579254 | 28.017157 | 0.003705 | 0.003654 | 0.004643 |
| devector_options_test.test | RUN | 0.323805 | 1.893992 | 1.344543 | 0.002146 | 0.002290 | 0.002018 |
| deque_test.test | RUN | 5.023721 | 23.932231 | 20.212054 | 0.425876 | 0.372471 | 0.425152 |
| deque_options_test.test | RUN | 0.256769 | 0.731372 | 0.874626 | 0.001889 | 0.002060 | 0.001881 |
| copy_move_algo_test.test | RUN | 0.229014 | 0.822476 | 0.789531 | 0.002119 | 0.001863 | 0.001622 |
| common_iterator_test.test | RUN | 0.019059 | 0.049426 | 0.046444 | 0.000738 | 0.000749 | 0.001466 |
| boost_iterator_comp_test.test | RUN | 0.331539 | 1.018784 | 1.262337 | 0.001447 | 0.001825 | 0.001852 |
| allocator_traits_test.test | RUN | 0.197940 | 0.457341 | 0.636784 | 0.001751 | 0.001861 | 0.001832 |
| alloc_full_test.test | RUN | 0.221117 | 0.890199 | 0.863493 | 0.004489 | 0.004985 | 0.004960 |
| alloc_basic_test.test | RUN | 0.185799 | 0.667907 | 0.627251 | 0.001774 | 0.001550 | 0.001875 |
| adaptive_pool_test.test | RUN | 1.974501 | 10.400564 | 11.478240 | 0.010297 | 0.013917 | 0.014868 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.944× | 0.945×, 0.943× | 0.995× |
| clang | 0.958× | 0.963×, 0.953× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010472s | 0.010051s | 0.010497s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001108s | 0.001063s | 0.001105s | byte equality observed |
| alloc_full_test.test | 7 | 0.003067s | 0.003070s | 0.003095s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000977s | 0.001007s | 0.001016s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001033s | 0.001029s | 0.001002s | byte equality observed |
| common_iterator_test.test | 10 | 0.000476s | 0.000468s | 0.001012s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001263s | 0.001107s | 0.001155s | byte equality observed |
| deque_options_test.test | 10 | 0.001067s | 0.001053s | 0.001074s | byte equality observed |
| deque_test.test | 1 | 0.462066s | 0.414951s | 0.460080s | byte equality observed |
| devector_options_test.test | 10 | 0.001155s | 0.001114s | 0.001142s | byte equality observed |
| devector_test.test | 5 | 0.003262s | 0.003172s | 0.004435s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000967s | 0.000978s | 0.000976s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000944s | 0.000956s | 0.000956s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000955s | 0.000980s | 0.000972s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000943s | 0.000974s | 0.000967s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000926s | 0.000958s | 0.000969s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000948s | 0.000970s | 0.000959s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000939s | 0.000970s | 0.000957s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000949s | 0.000959s | 0.000972s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000946s | 0.000957s | 0.000962s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000949s | 0.000982s | 0.000963s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000938s | 0.000941s | 0.000964s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000950s | 0.000963s | 0.000969s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000945s | 0.000962s | 0.000958s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005959s | 0.005649s | 0.005812s | byte equality observed |
| flat_map_test.test | 4 | 0.006485s | 0.006127s | 0.006059s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.006014s | 0.005536s | 0.006044s | byte equality observed |
| flat_set_test.test | 4 | 0.006058s | 0.005353s | 0.005917s | byte equality observed |
| flat_tree_test.test | 10 | 0.000985s | 0.001014s | 0.000993s | byte equality observed |
| global_resource_test.test | 10 | 0.001000s | 0.001012s | 0.001001s | byte equality observed |
| hub_api_test.test | 7 | 0.002709s | 0.002322s | 0.002272s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000978s | 0.000980s | 0.000981s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.068661s | 0.064253s | 0.067070s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001037s | 0.001098s | 0.001030s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001029s | 0.001049s | 0.001018s | byte equality observed |
| hub_sort_test.test | 1 | 0.442751s | 0.442082s | 0.428387s | byte equality observed |
| hub_stability_test.test | 10 | 0.001206s | 0.001220s | 0.001216s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000975s | 0.000983s | 0.000953s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001009s | 0.001008s | 0.000975s | byte equality observed |
| is_constructible_test.test | 10 | 0.000458s | 0.000454s | 0.000939s | byte equality observed |
| list_test.test | 2 | 0.017074s | 0.017552s | 0.017734s | byte equality observed |
| map_test.test | 3 | 0.007940s | 0.008051s | 0.007974s | byte equality observed |
| memory_resource_test.test | 10 | 0.001049s | 0.001041s | 0.001049s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001003s | 0.000987s | 0.000978s | byte equality observed |
| nest_api_test.test | 10 | 0.001625s | 0.001613s | 0.001651s | byte equality observed |
| nest_test.test | 10 | 0.001032s | 0.001021s | 0.001009s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001484s | 0.001479s | 0.001490s | byte equality observed |
| node_allocator_test.test | 3 | 0.007264s | 0.007348s | 0.007532s | byte equality observed |
| node_handle_test.test | 10 | 0.001032s | 0.001057s | 0.001038s | byte equality observed |
| null_iterators_test.test | 10 | 0.000983s | 0.001016s | 0.000965s | byte equality observed |
| pair_test.test | 10 | 0.000990s | 0.000990s | 0.000950s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000971s | 0.000968s | 0.000942s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000982s | 0.000982s | 0.000964s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000976s | 0.000969s | 0.000948s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000970s | 0.000956s | 0.000939s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000966s | 0.000970s | 0.000961s | byte equality observed |
| pmr_list_test.test | 10 | 0.000984s | 0.000966s | 0.000960s | byte equality observed |
| pmr_map_test.test | 10 | 0.000988s | 0.000968s | 0.000967s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000980s | 0.000976s | 0.000989s | byte equality observed |
| pmr_set_test.test | 10 | 0.000979s | 0.000968s | 0.000965s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000984s | 0.000973s | 0.000989s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000967s | 0.000962s | 0.001013s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000979s | 0.000997s | 0.000981s | byte equality observed |
| pmr_string_test.test | 10 | 0.000465s | 0.000467s | 0.000992s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000472s | 0.000471s | 0.000980s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001034s | 0.001062s | 0.001034s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001017s | 0.001060s | 0.001036s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001019s | 0.001039s | 0.001015s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001022s | 0.001051s | 0.001019s | byte equality observed |
| segtor_options_test.test | 10 | 0.001050s | 0.001012s | 0.001022s | byte equality observed |
| segtor_test.test | 1 | 0.424149s | 0.385911s | 0.379305s | byte equality observed |
| set_test.test | 2 | 0.011062s | 0.009741s | 0.011105s | byte equality observed |
| slist_test.test | 2 | 0.017007s | 0.017219s | 0.016991s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001124s | 0.001135s | 0.001099s | byte equality observed |
| small_vector_test.test | 6 | 0.002156s | 0.001969s | 0.003586s | byte equality observed |
| stable_vector_test.test | 1 | 0.025370s | 0.025451s | 0.026579s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001114s | 0.001098s | 0.001107s | byte equality observed |
| static_vector_test.test | 10 | 0.001334s | 0.001241s | 0.001314s | byte equality observed |
| string_options_test.test | 10 | 0.001044s | 0.001024s | 0.001016s | byte equality observed |
| string_test.test | 2 | 0.011068s | 0.011854s | 0.011466s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001008s | 0.001033s | 0.001002s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001041s | 0.001046s | 0.001048s | byte equality observed |
| throw_exception_test.test | 10 | 0.000965s | 0.000989s | 0.000965s | byte equality observed |
| tree_test.test | 10 | 0.000966s | 0.000985s | 0.000950s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001039s | 0.001030s | 0.001011s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000982s | 0.000973s | 0.000965s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000459s | 0.000470s | 0.000938s | byte equality observed |
| vector_options_test.test | 10 | 0.001163s | 0.001235s | 0.001092s | byte equality observed |
| vector_test.test | 4 | 0.003551s | 0.003571s | 0.004893s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
