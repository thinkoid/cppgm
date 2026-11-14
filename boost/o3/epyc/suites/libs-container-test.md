# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.941270 | 31.719316 | 27.189639 | 0.005801 | 0.004910 | 0.007542 |
| vector_options_test.test | RUN | 0.335263 | 1.427703 | 1.196994 | 0.002228 | 0.002102 | 0.002056 |
| uses_allocator_test.test | RUN | 0.062895 | 0.124113 | 0.165126 | 0.000808 | 0.000811 | 0.001823 |
| uses_allocator_construction_test.test | RUN | 0.191223 | 0.462211 | 0.588449 | 0.002015 | 0.001903 | 0.001865 |
| unsynchronized_pool_resource_test.test | RUN | 0.239110 | 1.321120 | 0.726706 | 0.001842 | 0.001902 | 0.001954 |
| tree_test.test | RUN | 1.008045 | 4.817286 | 3.896438 | 0.001661 | 0.001879 | 0.001768 |
| throw_exception_test.test | RUN | 0.118911 | 0.284874 | 0.396519 | 0.001820 | 0.001776 | 0.001725 |
| synchronized_pool_resource_test.test | RUN | 0.234228 | 1.331804 | 0.743005 | 0.002224 | 0.001918 | 0.001852 |
| string_view_compat_test.test | RUN | 0.384547 | 2.641791 | 1.434788 | 0.001825 | 0.001904 | 0.001843 |
| string_test.test | RUN | 1.644912 | 10.022637 | 7.249718 | 0.016181 | 0.015227 | 0.015620 |
| string_options_test.test | RUN | 0.312158 | 2.136032 | 1.198866 | 0.002080 | 0.001962 | 0.001820 |
| static_vector_test.test | RUN | 1.792739 | 8.338367 | 7.460366 | 0.002462 | 0.002442 | 0.002226 |
| static_vector_options_test.test | RUN | 0.236453 | 0.582080 | 0.693252 | 0.001894 | 0.001873 | 0.001800 |
| stable_vector_test.test | RUN | 3.952174 | 17.335809 | 14.091220 | 0.031007 | 0.031888 | 0.033963 |
| small_vector_test.test | RUN | 2.700220 | 12.183047 | 10.296200 | 0.003832 | 0.003302 | 0.005456 |
| small_vector_options_test.test | RUN | 0.367856 | 1.456064 | 1.357557 | 0.001969 | 0.002062 | 0.001947 |
| slist_test.test | RUN | 2.460664 | 10.963862 | 9.315395 | 0.024544 | 0.024962 | 0.025000 |
| set_test.test | RUN | 3.795418 | 20.446316 | 16.725601 | 0.015377 | 0.014142 | 0.015115 |
| segtor_test.test | RUN | 4.784607 | 22.300256 | 18.543875 | 0.730737 | 0.646961 | 0.659443 |
| segtor_options_test.test | RUN | 0.247629 | 0.643874 | 0.776112 | 0.002064 | 0.001906 | 0.001870 |
| scoped_allocator_usage_test.test | RUN | 0.862450 | 3.412975 | 3.264774 | 0.001870 | 0.001826 | 0.001768 |
| scoped_allocator_adaptor_test.test | RUN | 0.404770 | 0.915983 | 1.441783 | 0.001898 | 0.001822 | 0.001742 |
| resource_adaptor_test.test | RUN | 0.202794 | 0.591885 | 0.627729 | 0.001816 | 0.001856 | 0.001707 |
| polymorphic_allocator_test.test | RUN | 0.171710 | 0.461163 | 0.555542 | 0.001783 | 0.001754 | 0.001801 |
| pmr_vector_test.test | RUN | 0.096034 | 0.182721 | 0.294928 | 0.000790 | 0.000684 | 0.001680 |
| pmr_string_test.test | RUN | 0.192998 | 0.382971 | 0.553843 | 0.000823 | 0.000788 | 0.001776 |
| pmr_stable_vector_test.test | RUN | 0.223702 | 0.591404 | 0.742359 | 0.001784 | 0.001750 | 0.001411 |
| pmr_small_vector_test.test | RUN | 0.123089 | 0.244571 | 0.345517 | 0.001608 | 0.001834 | 0.001720 |
| pmr_slist_test.test | RUN | 0.152697 | 0.777687 | 0.713981 | 0.001719 | 0.001838 | 0.001564 |
| pmr_set_test.test | RUN | 0.177699 | 0.368822 | 0.576039 | 0.001759 | 0.001880 | 0.001371 |
| pmr_nest_test.test | RUN | 0.144785 | 0.286587 | 0.410598 | 0.001868 | 0.001720 | 0.001588 |
| pmr_map_test.test | RUN | 0.187009 | 0.424258 | 0.572286 | 0.001635 | 0.001731 | 0.001807 |
| pmr_list_test.test | RUN | 0.123328 | 0.266531 | 0.371977 | 0.001623 | 0.001628 | 0.001870 |
| pmr_hub_test.test | RUN | 0.168923 | 0.366673 | 0.461084 | 0.001669 | 0.001664 | 0.001672 |
| pmr_flat_set_test.test | RUN | 0.128979 | 0.283059 | 0.428837 | 0.001552 | 0.001582 | 0.001764 |
| pmr_flat_map_test.test | RUN | 0.158560 | 0.324465 | 0.434417 | 0.001556 | 0.001611 | 0.001668 |
| pmr_devector_test.test | RUN | 0.104954 | 0.282407 | 0.343723 | 0.001818 | 0.001719 | 0.001781 |
| pmr_deque_test.test | RUN | 0.106753 | 0.240106 | 0.329556 | 0.001444 | 0.001876 | 0.001642 |
| pair_test.test | RUN | 0.282078 | 0.554468 | 0.786411 | 0.001863 | 0.001826 | 0.001788 |
| null_iterators_test.test | RUN | 0.415031 | 1.099182 | 1.226597 | 0.001718 | 0.001863 | 0.001862 |
| node_handle_test.test | RUN | 0.184131 | 1.358991 | 0.538664 | 0.001758 | 0.001874 | 0.001872 |
| node_allocator_test.test | RUN | 2.866692 | 13.553857 | 11.564442 | 0.010615 | 0.010160 | 0.010305 |
| new_delete_resource_test.test | RUN | 0.234260 | 0.795094 | 0.722251 | 0.002602 | 0.002447 | 0.002506 |
| nest_test.test | RUN | 0.507707 | 3.573111 | 2.456893 | 0.001704 | 0.001510 | 0.001886 |
| nest_api_test.test | RUN | 1.036536 | 7.049665 | 5.036639 | 0.002742 | 0.002714 | 0.002500 |
| monotonic_buffer_resource_test.test | RUN | 0.224496 | 1.475887 | 0.765516 | 0.001616 | 0.001695 | 0.001832 |
| memory_resource_test.test | RUN | 0.135659 | 0.419896 | 0.455060 | 0.001882 | 0.001647 | 0.001806 |
| map_test.test | RUN | 5.175608 | 23.238874 | 24.103998 | 0.011471 | 0.011095 | 0.010875 |
| list_test.test | RUN | 2.608336 | 11.838555 | 9.966139 | 0.023549 | 0.025808 | 0.025311 |
| is_constructible_test.test | RUN | 0.086278 | 0.154291 | 0.258551 | 0.000762 | 0.000777 | 0.001810 |
| insert_vs_emplace_test.test | RUN | 0.266697 | 0.982469 | 1.312505 | 0.001933 | 0.001967 | 0.001830 |
| hub_uses_allocator_test.test | RUN | 0.293906 | 0.830170 | 0.986291 | 0.001811 | 0.001937 | 0.001801 |
| hub_stability_test.test | RUN | 0.627053 | 3.824462 | 3.305182 | 0.002226 | 0.002198 | 0.002004 |
| hub_sort_test.test | RUN | 0.378437 | 1.744338 | 1.560677 | 0.528290 | 0.535168 | 0.501833 |
| hub_pocxx_test.test | RUN | 0.392527 | 2.022612 | 1.196361 | 0.001864 | 0.001817 | 0.001645 |
| hub_new_extended_alignment_test.test | RUN | 0.207258 | 0.621721 | 0.694186 | 0.001886 | 0.001640 | 0.001776 |
| hub_exception_safety_test.test | RUN | 0.732655 | 4.780457 | 3.383694 | 0.097959 | 0.090852 | 0.094891 |
| hub_empty_sort_test.test | RUN | 0.228161 | 0.588045 | 0.805998 | 0.001831 | 0.001924 | 0.001803 |
| hub_api_test.test | RUN | 2.486713 | 20.043649 | 10.705713 | 0.004188 | 0.003793 | 0.003699 |
| global_resource_test.test | RUN | 0.131084 | 0.400498 | 0.416974 | 0.002024 | 0.001866 | 0.001862 |
| flat_tree_test.test | RUN | 4.517742 | 29.329487 | 19.943387 | 0.001857 | 0.001766 | 0.001758 |
| flat_set_test.test | RUN | 5.679433 | 37.540405 | 25.685408 | 0.008139 | 0.007386 | 0.008029 |
| flat_set_adaptor_test.test | RUN | 4.298912 | 33.704971 | 20.390179 | 0.008114 | 0.007682 | 0.008705 |
| flat_map_test.test | RUN | 9.307091 | 55.821717 | 42.593974 | 0.009352 | 0.008822 | 0.008687 |
| flat_map_adaptor_test.test | RUN | 5.909238 | 40.671916 | 30.329989 | 0.008522 | 0.008256 | 0.008318 |
| explicit_inst_vector_test.test | RUN | 0.916304 | 5.531220 | 4.456037 | 0.001839 | 0.001805 | 0.001772 |
| explicit_inst_string_test.test | RUN | 1.170213 | 9.725275 | 6.071215 | 0.001832 | 0.001837 | 0.001683 |
| explicit_inst_static_vector_test.test | RUN | 0.116756 | 0.369579 | 0.450858 | 0.001576 | 0.001948 | 0.001702 |
| explicit_inst_stable_vector_test.test | RUN | 0.754335 | 3.481485 | 2.712990 | 0.001838 | 0.001854 | 0.001709 |
| explicit_inst_small_vector_test.test | RUN | 0.634764 | 3.222608 | 2.666678 | 0.001804 | 0.001726 | 0.001874 |
| explicit_inst_slist_test.test | RUN | 0.478370 | 2.920009 | 1.954027 | 0.001838 | 0.001877 | 0.001758 |
| explicit_inst_set_test.test | RUN | 0.678906 | 3.340282 | 2.446902 | 0.001760 | 0.001842 | 0.001761 |
| explicit_inst_map_test.test | RUN | 0.735584 | 3.569082 | 2.638620 | 0.001801 | 0.001828 | 0.001701 |
| explicit_inst_list_test.test | RUN | 0.165975 | 0.809334 | 0.680284 | 0.001843 | 0.001722 | 0.001766 |
| explicit_inst_flat_set_test.test | RUN | 3.842322 | 24.851164 | 15.461674 | 0.001806 | 0.001894 | 0.001529 |
| explicit_inst_flat_map_test.test | RUN | 4.106437 | 25.956742 | 17.221415 | 0.001785 | 0.001766 | 0.001685 |
| explicit_inst_devector_test.test | RUN | 0.480810 | 3.065432 | 2.220444 | 0.001684 | 0.002132 | 0.001700 |
| explicit_inst_deque_test.test | RUN | 0.525293 | 3.284860 | 2.318584 | 0.001910 | 0.001814 | 0.001706 |
| devector_test.test | RUN | 7.366783 | 38.960435 | 31.436133 | 0.003917 | 0.003697 | 0.004755 |
| devector_options_test.test | RUN | 0.329395 | 1.901336 | 1.226841 | 0.002197 | 0.002079 | 0.001908 |
| deque_test.test | RUN | 5.177144 | 25.359567 | 16.015201 | 0.425120 | 0.355767 | 0.453676 |
| deque_options_test.test | RUN | 0.259047 | 0.706409 | 0.940139 | 0.001862 | 0.001896 | 0.001938 |
| copy_move_algo_test.test | RUN | 0.238714 | 0.813123 | 0.842485 | 0.002068 | 0.001942 | 0.001765 |
| common_iterator_test.test | RUN | 0.019216 | 0.047907 | 0.045451 | 0.000780 | 0.000837 | 0.001753 |
| boost_iterator_comp_test.test | RUN | 0.348078 | 1.064833 | 1.042474 | 0.001566 | 0.001844 | 0.001842 |
| allocator_traits_test.test | RUN | 0.209911 | 0.451589 | 0.659002 | 0.001539 | 0.001844 | 0.001908 |
| alloc_full_test.test | RUN | 0.219834 | 0.885530 | 0.807307 | 0.004076 | 0.004982 | 0.004615 |
| alloc_basic_test.test | RUN | 0.182650 | 0.672944 | 0.604895 | 0.001949 | 0.002029 | 0.001861 |
| adaptive_pool_test.test | RUN | 1.993255 | 14.693839 | 11.507772 | 0.010308 | 0.013519 | 0.015077 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.930× | 0.934×, 0.926× | 1.006× |
| clang | 0.950× | 0.949×, 0.951× | 0.987× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010309s | 0.009884s | 0.010443s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001081s | 0.001100s | 0.001071s | byte equality observed |
| alloc_full_test.test | 7 | 0.003042s | 0.003067s | 0.003046s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000982s | 0.000986s | 0.000993s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001047s | 0.001045s | 0.001003s | byte equality observed |
| common_iterator_test.test | 10 | 0.000467s | 0.000478s | 0.000988s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001255s | 0.001099s | 0.001142s | byte equality observed |
| deque_options_test.test | 10 | 0.001054s | 0.001038s | 0.001044s | byte equality observed |
| deque_test.test | 1 | 0.456885s | 0.391876s | 0.460500s | byte equality observed |
| devector_options_test.test | 10 | 0.001167s | 0.001115s | 0.001090s | byte equality observed |
| devector_test.test | 5 | 0.003283s | 0.003216s | 0.004296s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000967s | 0.000966s | 0.000935s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000947s | 0.000942s | 0.000919s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000962s | 0.000951s | 0.000921s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000957s | 0.000961s | 0.000933s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000953s | 0.000954s | 0.000914s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000950s | 0.000962s | 0.000925s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000958s | 0.000962s | 0.000925s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000952s | 0.000954s | 0.000918s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000965s | 0.000959s | 0.000914s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000969s | 0.000957s | 0.000925s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000944s | 0.000938s | 0.000916s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000966s | 0.000973s | 0.000940s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000954s | 0.000976s | 0.000937s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005925s | 0.005655s | 0.005794s | byte equality observed |
| flat_map_test.test | 3 | 0.006501s | 0.006155s | 0.005996s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.006132s | 0.005497s | 0.005932s | byte equality observed |
| flat_set_test.test | 3 | 0.006146s | 0.005571s | 0.005826s | byte equality observed |
| flat_tree_test.test | 10 | 0.000986s | 0.001025s | 0.000960s | byte equality observed |
| global_resource_test.test | 10 | 0.001011s | 0.001033s | 0.000967s | byte equality observed |
| hub_api_test.test | 7 | 0.002741s | 0.002278s | 0.002281s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000992s | 0.000981s | 0.000945s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.072287s | 0.068984s | 0.067318s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001080s | 0.001033s | 0.001076s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001014s | 0.001049s | 0.001010s | byte equality observed |
| hub_sort_test.test | 1 | 0.443165s | 0.437300s | 0.418537s | byte equality observed |
| hub_stability_test.test | 10 | 0.001219s | 0.001237s | 0.001206s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000975s | 0.001006s | 0.000975s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000993s | 0.001002s | 0.001041s | byte equality observed |
| is_constructible_test.test | 10 | 0.000436s | 0.000452s | 0.000954s | byte equality observed |
| list_test.test | 2 | 0.017359s | 0.017579s | 0.017666s | byte equality observed |
| map_test.test | 3 | 0.008011s | 0.008054s | 0.007774s | byte equality observed |
| memory_resource_test.test | 10 | 0.001010s | 0.001035s | 0.001013s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001002s | 0.001018s | 0.001006s | byte equality observed |
| nest_api_test.test | 10 | 0.001607s | 0.001628s | 0.001683s | byte equality observed |
| nest_test.test | 10 | 0.001018s | 0.001049s | 0.001012s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001456s | 0.001490s | 0.001450s | byte equality observed |
| node_allocator_test.test | 3 | 0.007397s | 0.007318s | 0.007296s | byte equality observed |
| node_handle_test.test | 10 | 0.001041s | 0.000994s | 0.001027s | byte equality observed |
| null_iterators_test.test | 10 | 0.000973s | 0.001004s | 0.001019s | byte equality observed |
| pair_test.test | 10 | 0.000985s | 0.000991s | 0.001016s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000956s | 0.000973s | 0.000945s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000988s | 0.000939s | 0.000958s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000951s | 0.000932s | 0.000962s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000967s | 0.000936s | 0.000959s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000961s | 0.000939s | 0.000961s | byte equality observed |
| pmr_list_test.test | 10 | 0.000968s | 0.001019s | 0.000978s | byte equality observed |
| pmr_map_test.test | 10 | 0.000966s | 0.001007s | 0.000973s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000967s | 0.000982s | 0.000976s | byte equality observed |
| pmr_set_test.test | 10 | 0.000984s | 0.000996s | 0.000968s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001006s | 0.001022s | 0.001018s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000990s | 0.000989s | 0.000998s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001006s | 0.001051s | 0.000997s | byte equality observed |
| pmr_string_test.test | 10 | 0.000470s | 0.000470s | 0.001022s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000465s | 0.000480s | 0.000990s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001030s | 0.001043s | 0.001032s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001020s | 0.001028s | 0.001019s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001020s | 0.001016s | 0.001019s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001012s | 0.001008s | 0.001000s | byte equality observed |
| segtor_options_test.test | 10 | 0.001041s | 0.001037s | 0.001040s | byte equality observed |
| segtor_test.test | 1 | 0.418137s | 0.373943s | 0.366575s | byte equality observed |
| set_test.test | 2 | 0.011069s | 0.009812s | 0.011043s | byte equality observed |
| slist_test.test | 2 | 0.017077s | 0.017270s | 0.016958s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001148s | 0.001089s | 0.001103s | byte equality observed |
| small_vector_test.test | 6 | 0.002164s | 0.002004s | 0.003622s | byte equality observed |
| stable_vector_test.test | 1 | 0.025390s | 0.026098s | 0.026554s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001086s | 0.001058s | 0.001121s | byte equality observed |
| static_vector_test.test | 10 | 0.001347s | 0.001247s | 0.001294s | byte equality observed |
| string_options_test.test | 10 | 0.001044s | 0.001040s | 0.001053s | byte equality observed |
| string_test.test | 2 | 0.011016s | 0.012231s | 0.011499s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001002s | 0.001048s | 0.001000s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001035s | 0.001038s | 0.001029s | byte equality observed |
| throw_exception_test.test | 10 | 0.000972s | 0.000964s | 0.000960s | byte equality observed |
| tree_test.test | 10 | 0.000962s | 0.001017s | 0.000957s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001024s | 0.001046s | 0.001068s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000976s | 0.000985s | 0.001002s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000450s | 0.000466s | 0.000957s | byte equality observed |
| vector_options_test.test | 10 | 0.001162s | 0.001140s | 0.001129s | byte equality observed |
| vector_test.test | 4 | 0.003690s | 0.003669s | 0.005282s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
