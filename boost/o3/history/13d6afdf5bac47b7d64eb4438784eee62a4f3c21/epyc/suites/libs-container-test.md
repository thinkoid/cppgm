# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 7.034645 | 32.917116 | 27.775691 | 0.005979 | 0.005198 | 0.007613 |
| vector_options_test.test | RUN | 0.328922 | 1.517778 | 1.186269 | 0.001992 | 0.001943 | 0.002148 |
| uses_allocator_test.test | RUN | 0.059658 | 0.127993 | 0.169147 | 0.000667 | 0.000813 | 0.001752 |
| uses_allocator_construction_test.test | RUN | 0.179415 | 0.475460 | 0.576684 | 0.001594 | 0.001604 | 0.001760 |
| unsynchronized_pool_resource_test.test | RUN | 0.240706 | 1.386640 | 0.754709 | 0.001894 | 0.002184 | 0.001862 |
| tree_test.test | RUN | 0.952387 | 4.932554 | 4.032914 | 0.001512 | 0.001877 | 0.001768 |
| throw_exception_test.test | RUN | 0.133706 | 0.290892 | 0.404619 | 0.001659 | 0.001838 | 0.001749 |
| synchronized_pool_resource_test.test | RUN | 0.241484 | 1.373722 | 0.765547 | 0.001559 | 0.002060 | 0.001852 |
| string_view_compat_test.test | RUN | 0.390030 | 2.713784 | 1.459534 | 0.001476 | 0.002077 | 0.001823 |
| string_test.test | RUN | 1.653956 | 10.361804 | 7.617550 | 0.015854 | 0.015303 | 0.015503 |
| string_options_test.test | RUN | 0.295831 | 2.253644 | 1.084446 | 0.002000 | 0.002131 | 0.001787 |
| static_vector_test.test | RUN | 1.795938 | 8.671727 | 7.438223 | 0.002518 | 0.002402 | 0.002421 |
| static_vector_options_test.test | RUN | 0.236817 | 0.594629 | 0.696816 | 0.001477 | 0.002126 | 0.001526 |
| stable_vector_test.test | RUN | 3.948366 | 17.777676 | 14.394086 | 0.031283 | 0.031104 | 0.033114 |
| small_vector_test.test | RUN | 2.739533 | 12.475692 | 10.331904 | 0.003583 | 0.003250 | 0.005576 |
| small_vector_options_test.test | RUN | 0.380637 | 1.561332 | 1.420124 | 0.002132 | 0.002130 | 0.001740 |
| slist_test.test | RUN | 2.434027 | 11.276845 | 9.307078 | 0.024789 | 0.025038 | 0.024443 |
| set_test.test | RUN | 3.910138 | 21.509745 | 16.912480 | 0.015277 | 0.013877 | 0.014841 |
| segtor_test.test | RUN | 4.839703 | 23.000575 | 18.530723 | 0.623076 | 0.651961 | 0.648689 |
| segtor_options_test.test | RUN | 0.257402 | 0.645641 | 0.896234 | 0.002098 | 0.001935 | 0.001848 |
| scoped_allocator_usage_test.test | RUN | 0.901909 | 3.479014 | 3.134648 | 0.001949 | 0.001739 | 0.001672 |
| scoped_allocator_adaptor_test.test | RUN | 0.424631 | 0.948834 | 1.509067 | 0.001922 | 0.001561 | 0.001918 |
| resource_adaptor_test.test | RUN | 0.252201 | 0.594848 | 0.633205 | 0.001834 | 0.001766 | 0.001495 |
| polymorphic_allocator_test.test | RUN | 0.180173 | 0.469735 | 0.560334 | 0.001814 | 0.001866 | 0.001800 |
| pmr_vector_test.test | RUN | 0.096065 | 0.188785 | 0.302691 | 0.000805 | 0.000819 | 0.001732 |
| pmr_string_test.test | RUN | 0.194113 | 0.387002 | 0.524417 | 0.000819 | 0.000817 | 0.001631 |
| pmr_stable_vector_test.test | RUN | 0.218850 | 0.608315 | 0.764205 | 0.001674 | 0.001918 | 0.001588 |
| pmr_small_vector_test.test | RUN | 0.115000 | 0.245042 | 0.346207 | 0.001766 | 0.001943 | 0.003588 |
| pmr_slist_test.test | RUN | 0.162038 | 0.765824 | 0.732857 | 0.001662 | 0.001812 | 0.001684 |
| pmr_set_test.test | RUN | 0.181198 | 0.431196 | 0.569542 | 0.001708 | 0.001924 | 0.001390 |
| pmr_nest_test.test | RUN | 0.141320 | 0.295023 | 0.411287 | 0.001565 | 0.001802 | 0.001543 |
| pmr_map_test.test | RUN | 0.182504 | 0.445377 | 0.572611 | 0.001761 | 0.001805 | 0.001882 |
| pmr_list_test.test | RUN | 0.121639 | 0.274188 | 0.371974 | 0.001586 | 0.001889 | 0.001774 |
| pmr_hub_test.test | RUN | 0.177273 | 0.382267 | 0.458318 | 0.001712 | 0.001882 | 0.001750 |
| pmr_flat_set_test.test | RUN | 0.130418 | 0.289863 | 0.386861 | 0.001614 | 0.001826 | 0.001815 |
| pmr_flat_map_test.test | RUN | 0.159134 | 0.329621 | 0.450872 | 0.001549 | 0.001762 | 0.001814 |
| pmr_devector_test.test | RUN | 0.104385 | 0.292821 | 0.332140 | 0.001803 | 0.001562 | 0.001822 |
| pmr_deque_test.test | RUN | 0.104577 | 0.234804 | 0.319492 | 0.001589 | 0.001818 | 0.001732 |
| pair_test.test | RUN | 0.271806 | 0.583017 | 0.788526 | 0.001761 | 0.001878 | 0.001764 |
| null_iterators_test.test | RUN | 0.415503 | 1.113194 | 1.178958 | 0.001819 | 0.001927 | 0.001914 |
| node_handle_test.test | RUN | 0.178431 | 1.382116 | 0.531385 | 0.001754 | 0.002046 | 0.001726 |
| node_allocator_test.test | RUN | 2.799287 | 13.695102 | 11.374418 | 0.010611 | 0.010601 | 0.009315 |
| new_delete_resource_test.test | RUN | 0.214200 | 0.835597 | 0.705925 | 0.002582 | 0.002602 | 0.002485 |
| nest_test.test | RUN | 0.555765 | 3.782670 | 2.395866 | 0.001673 | 0.001955 | 0.001758 |
| nest_api_test.test | RUN | 1.028501 | 7.201114 | 4.808573 | 0.002663 | 0.002895 | 0.002674 |
| monotonic_buffer_resource_test.test | RUN | 0.218641 | 1.481978 | 0.592519 | 0.001877 | 0.001879 | 0.001533 |
| memory_resource_test.test | RUN | 0.131851 | 0.431158 | 0.440030 | 0.001744 | 0.001876 | 0.001439 |
| map_test.test | RUN | 5.047264 | 23.477212 | 24.306246 | 0.011136 | 0.010191 | 0.010875 |
| list_test.test | RUN | 2.588010 | 12.155141 | 9.893869 | 0.025372 | 0.025355 | 0.025450 |
| is_constructible_test.test | RUN | 0.088442 | 0.166513 | 0.248023 | 0.000792 | 0.000754 | 0.001449 |
| insert_vs_emplace_test.test | RUN | 0.261724 | 0.991840 | 1.420654 | 0.001818 | 0.001904 | 0.001852 |
| hub_uses_allocator_test.test | RUN | 0.291031 | 0.850318 | 0.914845 | 0.001747 | 0.001756 | 0.001825 |
| hub_stability_test.test | RUN | 0.576766 | 3.937148 | 3.343413 | 0.001956 | 0.002120 | 0.002158 |
| hub_sort_test.test | RUN | 0.380516 | 1.790237 | 1.603764 | 0.530374 | 0.534826 | 0.506041 |
| hub_pocxx_test.test | RUN | 0.342816 | 2.057093 | 1.189465 | 0.001571 | 0.001899 | 0.001978 |
| hub_new_extended_alignment_test.test | RUN | 0.200199 | 0.616120 | 0.633680 | 0.001798 | 0.001708 | 0.001665 |
| hub_exception_safety_test.test | RUN | 0.708009 | 4.712572 | 3.426717 | 0.093500 | 0.087570 | 0.096307 |
| hub_empty_sort_test.test | RUN | 0.217101 | 0.583015 | 0.731808 | 0.001660 | 0.001932 | 0.001794 |
| hub_api_test.test | RUN | 2.406691 | 20.028225 | 10.710455 | 0.004369 | 0.003832 | 0.003633 |
| global_resource_test.test | RUN | 0.124107 | 0.391225 | 0.383345 | 0.001765 | 0.001986 | 0.001875 |
| flat_tree_test.test | RUN | 4.457154 | 29.651938 | 19.952741 | 0.001840 | 0.002012 | 0.001734 |
| flat_set_test.test | RUN | 5.685342 | 37.857684 | 26.023916 | 0.008516 | 0.007064 | 0.008034 |
| flat_set_adaptor_test.test | RUN | 4.286365 | 33.522097 | 20.156777 | 0.008553 | 0.007866 | 0.008140 |
| flat_map_test.test | RUN | 9.367793 | 56.049601 | 42.714893 | 0.009268 | 0.009018 | 0.008472 |
| flat_map_adaptor_test.test | RUN | 5.967299 | 41.112003 | 30.299766 | 0.008713 | 0.008090 | 0.008435 |
| explicit_inst_vector_test.test | RUN | 0.905388 | 5.455445 | 4.486949 | 0.001778 | 0.001908 | 0.001729 |
| explicit_inst_string_test.test | RUN | 1.157451 | 9.615467 | 6.150637 | 0.001783 | 0.001697 | 0.001677 |
| explicit_inst_static_vector_test.test | RUN | 0.122823 | 0.365285 | 0.445440 | 0.001608 | 0.001950 | 0.001693 |
| explicit_inst_stable_vector_test.test | RUN | 0.748339 | 3.522404 | 2.749941 | 0.001671 | 0.001830 | 0.001571 |
| explicit_inst_small_vector_test.test | RUN | 0.630991 | 3.146643 | 2.547261 | 0.001544 | 0.001855 | 0.001776 |
| explicit_inst_slist_test.test | RUN | 0.476685 | 2.853991 | 2.091703 | 0.001854 | 0.001878 | 0.001744 |
| explicit_inst_set_test.test | RUN | 0.666630 | 3.330666 | 2.486501 | 0.001772 | 0.001826 | 0.001701 |
| explicit_inst_map_test.test | RUN | 0.726608 | 3.503913 | 2.688274 | 0.001938 | 0.001848 | 0.001639 |
| explicit_inst_list_test.test | RUN | 0.163623 | 0.800817 | 0.673687 | 0.001871 | 0.001964 | 0.001599 |
| explicit_inst_flat_set_test.test | RUN | 3.777147 | 25.431126 | 15.383406 | 0.001862 | 0.002128 | 0.001448 |
| explicit_inst_flat_map_test.test | RUN | 4.028911 | 26.472607 | 17.184814 | 0.001818 | 0.001670 | 0.001762 |
| explicit_inst_devector_test.test | RUN | 0.497431 | 3.144502 | 2.197847 | 0.001726 | 0.001842 | 0.001719 |
| explicit_inst_deque_test.test | RUN | 0.523968 | 3.521395 | 2.304543 | 0.001859 | 0.001857 | 0.001746 |
| devector_test.test | RUN | 6.765856 | 39.557625 | 27.658235 | 0.003973 | 0.003689 | 0.004660 |
| devector_options_test.test | RUN | 0.318160 | 1.885801 | 1.211027 | 0.002165 | 0.002156 | 0.001746 |
| deque_test.test | RUN | 5.369267 | 26.715074 | 19.794307 | 0.398587 | 0.358568 | 0.422290 |
| deque_options_test.test | RUN | 0.255994 | 0.751798 | 0.939841 | 0.001859 | 0.001644 | 0.001820 |
| copy_move_algo_test.test | RUN | 0.239808 | 0.833475 | 0.840097 | 0.002152 | 0.001641 | 0.002055 |
| common_iterator_test.test | RUN | 0.018903 | 0.041002 | 0.048269 | 0.000789 | 0.000803 | 0.001716 |
| boost_iterator_comp_test.test | RUN | 0.343822 | 1.040154 | 1.043385 | 0.001754 | 0.001898 | 0.001610 |
| allocator_traits_test.test | RUN | 0.206207 | 0.469519 | 0.641761 | 0.001636 | 0.001976 | 0.001828 |
| alloc_full_test.test | RUN | 0.219932 | 0.903186 | 0.847527 | 0.004623 | 0.005118 | 0.004183 |
| alloc_basic_test.test | RUN | 0.192658 | 0.689904 | 0.657842 | 0.001754 | 0.002094 | 0.001828 |
| adaptive_pool_test.test | RUN | 2.759032 | 15.322044 | 11.570619 | 0.014587 | 0.013871 | 0.010352 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.981× | 0.995×, 0.968× | 1.033× |
| clang | 1.009× | 1.009×, 1.009× | 0.983× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010377s | 0.009753s | 0.010336s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001056s | 0.001057s | 0.001065s | byte equality observed |
| alloc_full_test.test | 7 | 0.002986s | 0.002994s | 0.003055s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001005s | 0.000990s | 0.000975s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001035s | 0.001024s | 0.001009s | byte equality observed |
| common_iterator_test.test | 10 | 0.000466s | 0.000458s | 0.000984s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001219s | 0.001096s | 0.001128s | byte equality observed |
| deque_options_test.test | 10 | 0.001068s | 0.001029s | 0.001045s | byte equality observed |
| deque_test.test | 1 | 0.417805s | 0.396599s | 0.453716s | byte equality observed |
| devector_options_test.test | 10 | 0.001168s | 0.001117s | 0.001115s | byte equality observed |
| devector_test.test | 5 | 0.003221s | 0.003182s | 0.004329s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000946s | 0.001026s | 0.000949s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000942s | 0.000952s | 0.000943s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000945s | 0.000951s | 0.000943s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000954s | 0.000960s | 0.000937s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000937s | 0.000946s | 0.000929s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000944s | 0.000952s | 0.000930s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000948s | 0.000940s | 0.000935s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000947s | 0.000945s | 0.000930s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000942s | 0.000948s | 0.000933s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000953s | 0.000947s | 0.000936s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000941s | 0.000926s | 0.000916s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000952s | 0.000947s | 0.000926s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000948s | 0.000959s | 0.000927s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005893s | 0.005617s | 0.005710s | byte equality observed |
| flat_map_test.test | 3 | 0.006450s | 0.005999s | 0.005949s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.006019s | 0.005479s | 0.005954s | byte equality observed |
| flat_set_test.test | 3 | 0.006054s | 0.005274s | 0.005788s | byte equality observed |
| flat_tree_test.test | 10 | 0.000963s | 0.000975s | 0.000953s | byte equality observed |
| global_resource_test.test | 10 | 0.000984s | 0.000968s | 0.000987s | byte equality observed |
| hub_api_test.test | 6 | 0.002684s | 0.002252s | 0.002198s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000957s | 0.000997s | 0.000964s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.069046s | 0.066475s | 0.066569s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001061s | 0.001149s | 0.001039s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001034s | 0.001028s | 0.001011s | byte equality observed |
| hub_sort_test.test | 1 | 0.440136s | 0.437930s | 0.425101s | byte equality observed |
| hub_stability_test.test | 10 | 0.001187s | 0.001204s | 0.001222s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000962s | 0.000958s | 0.000953s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000976s | 0.001021s | 0.000974s | byte equality observed |
| is_constructible_test.test | 10 | 0.000440s | 0.000455s | 0.000925s | byte equality observed |
| list_test.test | 1 | 0.016978s | 0.017309s | 0.017489s | byte equality observed |
| map_test.test | 3 | 0.007843s | 0.007921s | 0.007932s | byte equality observed |
| memory_resource_test.test | 10 | 0.000971s | 0.001007s | 0.001056s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000985s | 0.001026s | 0.000988s | byte equality observed |
| nest_api_test.test | 10 | 0.001595s | 0.001636s | 0.001630s | byte equality observed |
| nest_test.test | 10 | 0.000997s | 0.001008s | 0.000998s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001448s | 0.001477s | 0.001451s | byte equality observed |
| node_allocator_test.test | 3 | 0.007203s | 0.007327s | 0.007252s | byte equality observed |
| node_handle_test.test | 10 | 0.000991s | 0.001079s | 0.001018s | byte equality observed |
| null_iterators_test.test | 10 | 0.000969s | 0.000988s | 0.000982s | byte equality observed |
| pair_test.test | 10 | 0.000964s | 0.000985s | 0.000975s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000950s | 0.000973s | 0.000938s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000948s | 0.000963s | 0.000950s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000963s | 0.000971s | 0.000935s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000956s | 0.000990s | 0.000934s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000966s | 0.000985s | 0.000947s | byte equality observed |
| pmr_list_test.test | 10 | 0.000957s | 0.000972s | 0.000942s | byte equality observed |
| pmr_map_test.test | 10 | 0.000948s | 0.000967s | 0.000945s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000943s | 0.000978s | 0.000946s | byte equality observed |
| pmr_set_test.test | 10 | 0.000967s | 0.000986s | 0.000987s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000972s | 0.000953s | 0.000994s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000959s | 0.000972s | 0.000973s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000955s | 0.001015s | 0.001013s | byte equality observed |
| pmr_string_test.test | 10 | 0.000451s | 0.000479s | 0.000978s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000455s | 0.000473s | 0.001001s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001010s | 0.001055s | 0.001004s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000989s | 0.001036s | 0.000999s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001018s | 0.001013s | 0.001001s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001018s | 0.001021s | 0.000988s | byte equality observed |
| segtor_options_test.test | 10 | 0.001036s | 0.001025s | 0.001042s | byte equality observed |
| segtor_test.test | 1 | 0.377373s | 0.375089s | 0.369807s | byte equality observed |
| set_test.test | 2 | 0.010982s | 0.009808s | 0.011130s | byte equality observed |
| slist_test.test | 2 | 0.016938s | 0.017163s | 0.016884s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001104s | 0.001136s | 0.001085s | byte equality observed |
| small_vector_test.test | 6 | 0.002111s | 0.001947s | 0.003595s | byte equality observed |
| stable_vector_test.test | 1 | 0.025356s | 0.025528s | 0.026536s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001064s | 0.001079s | 0.001056s | byte equality observed |
| static_vector_test.test | 10 | 0.001317s | 0.001286s | 0.001287s | byte equality observed |
| string_options_test.test | 10 | 0.001018s | 0.001036s | 0.000992s | byte equality observed |
| string_test.test | 2 | 0.011018s | 0.011989s | 0.011535s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000975s | 0.001015s | 0.000989s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001029s | 0.001023s | 0.001034s | byte equality observed |
| throw_exception_test.test | 10 | 0.000959s | 0.000953s | 0.000963s | byte equality observed |
| tree_test.test | 10 | 0.000945s | 0.000959s | 0.000960s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001017s | 0.001034s | 0.001031s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000951s | 0.001013s | 0.000986s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000456s | 0.000458s | 0.000951s | byte equality observed |
| vector_options_test.test | 10 | 0.001123s | 0.001136s | 0.001107s | byte equality observed |
| vector_test.test | 3 | 0.003489s | 0.003563s | 0.004958s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
