# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.287966 | 25.881170 | 22.777600 | 0.004382 | 0.004440 | 0.005845 |
| vector_options_test.test | RUN | 0.252311 | 1.149501 | 0.965384 | 0.001688 | 0.001808 | 0.001993 |
| uses_allocator_test.test | RUN | 0.044408 | 0.096044 | 0.119370 | 0.000528 | 0.000659 | 0.001568 |
| uses_allocator_construction_test.test | RUN | 0.140438 | 0.363406 | 0.379650 | 0.001564 | 0.001962 | 0.001882 |
| unsynchronized_pool_resource_test.test | RUN | 0.164711 | 1.021500 | 0.537299 | 0.001584 | 0.001766 | 0.001776 |
| tree_test.test | RUN | 0.750023 | 3.918217 | 3.219461 | 0.001490 | 0.001607 | 0.001615 |
| throw_exception_test.test | RUN | 0.093982 | 0.204633 | 0.281863 | 0.001156 | 0.001858 | 0.001796 |
| synchronized_pool_resource_test.test | RUN | 0.164174 | 1.026659 | 0.572701 | 0.001536 | 0.001676 | 0.001826 |
| string_view_compat_test.test | RUN | 0.282795 | 2.043260 | 1.063228 | 0.001259 | 0.001663 | 0.001755 |
| string_test.test | RUN | 1.208494 | 8.284654 | 6.059832 | 0.011733 | 0.011538 | 0.011877 |
| string_options_test.test | RUN | 0.221285 | 1.640830 | 0.805813 | 0.001719 | 0.001899 | 0.001982 |
| static_vector_test.test | RUN | 1.335108 | 7.091925 | 6.261465 | 0.002054 | 0.002208 | 0.002104 |
| static_vector_options_test.test | RUN | 0.160212 | 0.466521 | 0.533922 | 0.001649 | 0.001928 | 0.001814 |
| stable_vector_test.test | RUN | 3.016640 | 14.515294 | 11.546175 | 0.023376 | 0.022870 | 0.026079 |
| small_vector_test.test | RUN | 2.043127 | 9.770283 | 8.323544 | 0.002791 | 0.002262 | 0.004332 |
| small_vector_options_test.test | RUN | 0.275888 | 1.259932 | 1.078046 | 0.001714 | 0.001866 | 0.001771 |
| slist_test.test | RUN | 1.846725 | 8.653495 | 7.448633 | 0.018036 | 0.018469 | 0.019460 |
| set_test.test | RUN | 2.867642 | 16.756103 | 13.141658 | 0.012026 | 0.011729 | 0.011498 |
| segtor_test.test | RUN | 3.629678 | 17.964090 | 14.754420 | 0.395423 | 0.449660 | 0.395984 |
| segtor_options_test.test | RUN | 0.181635 | 0.520677 | 0.571627 | 0.001698 | 0.001860 | 0.001871 |
| scoped_allocator_usage_test.test | RUN | 0.666152 | 2.599656 | 2.534169 | 0.002630 | 0.001589 | 0.001750 |
| scoped_allocator_adaptor_test.test | RUN | 0.275406 | 0.722563 | 1.105577 | 0.001610 | 0.001697 | 0.001714 |
| resource_adaptor_test.test | RUN | 0.150107 | 0.432677 | 0.463899 | 0.001281 | 0.001508 | 0.001445 |
| polymorphic_allocator_test.test | RUN | 0.121303 | 0.345838 | 0.416418 | 0.001589 | 0.001577 | 0.001676 |
| pmr_vector_test.test | RUN | 0.068511 | 0.135417 | 0.205863 | 0.000589 | 0.000683 | 0.001589 |
| pmr_string_test.test | RUN | 0.138783 | 0.282724 | 0.392571 | 0.000608 | 0.000664 | 0.001612 |
| pmr_stable_vector_test.test | RUN | 0.155472 | 0.453923 | 0.523154 | 0.001369 | 0.001426 | 0.001604 |
| pmr_small_vector_test.test | RUN | 0.082092 | 0.178606 | 0.259036 | 0.001414 | 0.001475 | 0.001658 |
| pmr_slist_test.test | RUN | 0.118073 | 0.610120 | 0.459792 | 0.001357 | 0.001528 | 0.001410 |
| pmr_set_test.test | RUN | 0.128202 | 0.302570 | 0.413149 | 0.001291 | 0.001440 | 0.001626 |
| pmr_nest_test.test | RUN | 0.100749 | 0.189410 | 0.214317 | 0.001501 | 0.001537 | 0.001602 |
| pmr_map_test.test | RUN | 0.134172 | 0.325593 | 0.397005 | 0.001341 | 0.001348 | 0.001545 |
| pmr_list_test.test | RUN | 0.090502 | 0.197634 | 0.274747 | 0.001327 | 0.001504 | 0.001571 |
| pmr_hub_test.test | RUN | 0.127849 | 0.263735 | 0.299584 | 0.003318 | 0.001485 | 0.001533 |
| pmr_flat_set_test.test | RUN | 0.096059 | 0.204821 | 0.289286 | 0.003084 | 0.001484 | 0.001602 |
| pmr_flat_map_test.test | RUN | 0.116608 | 0.239418 | 0.295030 | 0.001455 | 0.001555 | 0.001662 |
| pmr_devector_test.test | RUN | 0.076180 | 0.208513 | 0.255400 | 0.001365 | 0.001441 | 0.001574 |
| pmr_deque_test.test | RUN | 0.079041 | 0.175437 | 0.223448 | 0.001337 | 0.001592 | 0.001507 |
| pair_test.test | RUN | 0.195782 | 0.434223 | 0.544900 | 0.001402 | 0.001622 | 0.001548 |
| null_iterators_test.test | RUN | 0.303539 | 0.822959 | 0.876425 | 0.001567 | 0.001658 | 0.001310 |
| node_handle_test.test | RUN | 0.131000 | 0.990179 | 0.370208 | 0.001525 | 0.001641 | 0.001568 |
| node_allocator_test.test | RUN | 2.171940 | 11.482918 | 8.775999 | 0.008253 | 0.007996 | 0.008342 |
| new_delete_resource_test.test | RUN | 0.163288 | 0.624937 | 0.510966 | 0.002130 | 0.002379 | 0.002222 |
| nest_test.test | RUN | 0.417337 | 3.082779 | 1.856677 | 0.001548 | 0.001956 | 0.001739 |
| nest_api_test.test | RUN | 0.768149 | 5.933834 | 3.617550 | 0.002342 | 0.002324 | 0.002304 |
| monotonic_buffer_resource_test.test | RUN | 0.174770 | 1.192187 | 0.528818 | 0.001301 | 0.001504 | 0.001643 |
| memory_resource_test.test | RUN | 0.101660 | 0.325920 | 0.307707 | 0.001548 | 0.001660 | 0.001627 |
| map_test.test | RUN | 3.913200 | 19.268791 | 18.732109 | 0.009088 | 0.010194 | 0.009249 |
| list_test.test | RUN | 2.023806 | 9.980546 | 7.708536 | 0.018596 | 0.018664 | 0.018508 |
| is_constructible_test.test | RUN | 0.063418 | 0.132391 | 0.142379 | 0.000840 | 0.000809 | 0.001572 |
| insert_vs_emplace_test.test | RUN | 0.198618 | 0.843103 | 0.980926 | 0.001639 | 0.001759 | 0.001591 |
| hub_uses_allocator_test.test | RUN | 0.220806 | 0.710804 | 0.678341 | 0.001453 | 0.001554 | 0.001503 |
| hub_stability_test.test | RUN | 0.461080 | 3.269359 | 2.528885 | 0.001847 | 0.002166 | 0.001934 |
| hub_sort_test.test | RUN | 0.302214 | 1.441355 | 1.272776 | 0.450071 | 0.465465 | 0.454013 |
| hub_pocxx_test.test | RUN | 0.286212 | 1.648025 | 0.956671 | 0.001736 | 0.001772 | 0.001786 |
| hub_new_extended_alignment_test.test | RUN | 0.165614 | 0.516688 | 0.513771 | 0.001594 | 0.001775 | 0.001655 |
| hub_exception_safety_test.test | RUN | 0.567493 | 3.793032 | 2.609825 | 0.068013 | 0.076045 | 0.075277 |
| hub_empty_sort_test.test | RUN | 0.178941 | 0.431206 | 0.533992 | 0.001651 | 0.001569 | 0.001579 |
| hub_api_test.test | RUN | 1.906652 | 15.361291 | 8.516541 | 0.003285 | 0.003087 | 0.003148 |
| global_resource_test.test | RUN | 0.100453 | 0.269633 | 0.283288 | 0.001698 | 0.001724 | 0.001765 |
| flat_tree_test.test | RUN | 3.492463 | 23.253443 | 16.236101 | 0.001664 | 0.001522 | 0.001526 |
| flat_set_test.test | RUN | 4.399969 | 29.539072 | 21.118314 | 0.006955 | 0.006710 | 0.006846 |
| flat_set_adaptor_test.test | RUN | 3.189106 | 26.504717 | 16.615885 | 0.006724 | 0.006775 | 0.006778 |
| flat_map_test.test | RUN | 7.114754 | 45.959193 | 34.840422 | 0.007665 | 0.007972 | 0.007161 |
| flat_map_adaptor_test.test | RUN | 4.536684 | 33.871203 | 24.415864 | 0.007155 | 0.007198 | 0.007407 |
| explicit_inst_vector_test.test | RUN | 0.697378 | 4.618702 | 3.777769 | 0.001398 | 0.001624 | 0.001583 |
| explicit_inst_string_test.test | RUN | 0.907180 | 8.282149 | 5.031023 | 0.001622 | 0.001729 | 0.001561 |
| explicit_inst_static_vector_test.test | RUN | 0.088519 | 0.282965 | 0.339287 | 0.001541 | 0.001560 | 0.001558 |
| explicit_inst_stable_vector_test.test | RUN | 0.569996 | 2.989782 | 2.341214 | 0.001651 | 0.001784 | 0.001642 |
| explicit_inst_small_vector_test.test | RUN | 0.478982 | 2.664184 | 2.182502 | 0.001534 | 0.001828 | 0.001710 |
| explicit_inst_slist_test.test | RUN | 0.362686 | 2.450879 | 1.668482 | 0.001636 | 0.001780 | 0.001518 |
| explicit_inst_set_test.test | RUN | 0.522990 | 2.834756 | 1.897037 | 0.001672 | 0.001708 | 0.001654 |
| explicit_inst_map_test.test | RUN | 0.592515 | 2.983025 | 2.120048 | 0.001652 | 0.001758 | 0.001630 |
| explicit_inst_list_test.test | RUN | 0.127488 | 0.696935 | 0.516395 | 0.001426 | 0.001760 | 0.001608 |
| explicit_inst_flat_set_test.test | RUN | 2.858395 | 20.861161 | 12.777147 | 0.001599 | 0.001747 | 0.001692 |
| explicit_inst_flat_map_test.test | RUN | 3.062561 | 22.050007 | 14.503035 | 0.001495 | 0.001708 | 0.001782 |
| explicit_inst_devector_test.test | RUN | 0.378862 | 2.600089 | 1.765927 | 0.001301 | 0.001793 | 0.001678 |
| explicit_inst_deque_test.test | RUN | 0.388394 | 2.831721 | 1.931218 | 0.001590 | 0.001689 | 0.001576 |
| devector_test.test | RUN | 5.069382 | 32.546867 | 25.325539 | 0.003082 | 0.003252 | 0.003783 |
| devector_options_test.test | RUN | 0.245515 | 1.531761 | 0.999762 | 0.001774 | 0.002068 | 0.001909 |
| deque_test.test | RUN | 3.981134 | 21.672213 | 15.834641 | 0.287197 | 0.311774 | 0.337579 |
| deque_options_test.test | RUN | 0.198522 | 0.588247 | 0.718218 | 0.001343 | 0.001881 | 0.001780 |
| copy_move_algo_test.test | RUN | 0.178418 | 0.650911 | 0.626654 | 0.001580 | 0.001928 | 0.001798 |
| common_iterator_test.test | RUN | 0.014541 | 0.038472 | 0.037805 | 0.000586 | 0.000745 | 0.001515 |
| boost_iterator_comp_test.test | RUN | 0.241611 | 0.817508 | 0.927411 | 0.001458 | 0.001764 | 0.001566 |
| allocator_traits_test.test | RUN | 0.145020 | 0.363826 | 0.436906 | 0.001304 | 0.001736 | 0.001829 |
| alloc_full_test.test | RUN | 0.161995 | 0.769788 | 0.674881 | 0.003268 | 0.003880 | 0.003952 |
| alloc_basic_test.test | RUN | 0.133139 | 0.551923 | 0.472455 | 0.001485 | 0.001938 | 0.001742 |
| adaptive_pool_test.test | RUN | 2.060779 | 12.223420 | 6.367563 | 0.010293 | 0.010508 | 0.008284 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.024× | 1.035×, 1.013× | 1.023× |
| clang | 0.986× | 1.009×, 0.962× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.007718s | 0.007171s | 0.007738s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000967s | 0.000969s | 0.000945s | byte equality observed |
| alloc_full_test.test | 8 | 0.002636s | 0.002593s | 0.002693s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000887s | 0.000876s | 0.000886s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000923s | 0.000889s | 0.000891s | byte equality observed |
| common_iterator_test.test | 10 | 0.000421s | 0.000414s | 0.000884s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001061s | 0.000991s | 0.000995s | byte equality observed |
| deque_options_test.test | 10 | 0.000974s | 0.000936s | 0.000945s | byte equality observed |
| deque_test.test | 1 | 0.305207s | 0.329831s | 0.323116s | byte equality observed |
| devector_options_test.test | 10 | 0.001045s | 0.000983s | 0.000993s | byte equality observed |
| devector_test.test | 6 | 0.002963s | 0.002864s | 0.003609s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000931s | 0.000905s | 0.000894s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000876s | 0.000865s | 0.000852s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000886s | 0.000880s | 0.000860s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000881s | 0.000873s | 0.000851s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000884s | 0.000857s | 0.000830s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000885s | 0.000885s | 0.000828s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000888s | 0.000869s | 0.000834s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000901s | 0.000863s | 0.000836s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000878s | 0.000857s | 0.000858s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000879s | 0.000878s | 0.000850s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000862s | 0.000843s | 0.000833s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000896s | 0.000874s | 0.000845s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000873s | 0.000875s | 0.000860s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005180s | 0.004831s | 0.004999s | byte equality observed |
| flat_map_test.test | 4 | 0.005816s | 0.005308s | 0.005140s | byte equality observed |
| flat_set_adaptor_test.test | 5 | 0.005029s | 0.004493s | 0.004693s | byte equality observed |
| flat_set_test.test | 5 | 0.005074s | 0.004414s | 0.004576s | byte equality observed |
| flat_tree_test.test | 10 | 0.000982s | 0.000972s | 0.000915s | byte equality observed |
| global_resource_test.test | 10 | 0.000965s | 0.000920s | 0.000896s | byte equality observed |
| hub_api_test.test | 9 | 0.002376s | 0.001981s | 0.001944s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000914s | 0.000902s | 0.000882s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.057943s | 0.058940s | 0.056799s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000918s | 0.000890s | 0.000871s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000948s | 0.000929s | 0.000935s | byte equality observed |
| hub_sort_test.test | 1 | 0.416736s | 0.411594s | 0.381186s | byte equality observed |
| hub_stability_test.test | 10 | 0.001220s | 0.001237s | 0.001163s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000892s | 0.000920s | 0.000851s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000906s | 0.000923s | 0.000883s | byte equality observed |
| is_constructible_test.test | 10 | 0.000405s | 0.000401s | 0.000823s | byte equality observed |
| list_test.test | 2 | 0.013514s | 0.013111s | 0.013099s | byte equality observed |
| map_test.test | 4 | 0.006857s | 0.006663s | 0.006878s | byte equality observed |
| memory_resource_test.test | 10 | 0.001023s | 0.001039s | 0.001004s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000942s | 0.000941s | 0.000919s | byte equality observed |
| nest_api_test.test | 10 | 0.001487s | 0.001480s | 0.001430s | byte equality observed |
| nest_test.test | 10 | 0.000973s | 0.000942s | 0.000898s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001372s | 0.001351s | 0.001273s | byte equality observed |
| node_allocator_test.test | 4 | 0.006304s | 0.006238s | 0.005908s | byte equality observed |
| node_handle_test.test | 10 | 0.001044s | 0.001083s | 0.000974s | byte equality observed |
| null_iterators_test.test | 10 | 0.000940s | 0.000919s | 0.000923s | byte equality observed |
| pair_test.test | 10 | 0.000899s | 0.000888s | 0.000861s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000901s | 0.000890s | 0.000847s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000891s | 0.000882s | 0.000836s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000882s | 0.000862s | 0.000840s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000871s | 0.000853s | 0.000843s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000891s | 0.000860s | 0.000826s | byte equality observed |
| pmr_list_test.test | 10 | 0.000865s | 0.000868s | 0.000837s | byte equality observed |
| pmr_map_test.test | 10 | 0.000864s | 0.000856s | 0.000832s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000892s | 0.000876s | 0.000836s | byte equality observed |
| pmr_set_test.test | 10 | 0.000895s | 0.000870s | 0.000844s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000864s | 0.000860s | 0.000856s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000875s | 0.000878s | 0.000870s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000903s | 0.000888s | 0.000877s | byte equality observed |
| pmr_string_test.test | 10 | 0.000424s | 0.000417s | 0.000878s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000423s | 0.000417s | 0.000861s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000958s | 0.000930s | 0.000887s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000932s | 0.000909s | 0.000892s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000932s | 0.000880s | 0.000889s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000922s | 0.000902s | 0.000915s | byte equality observed |
| segtor_options_test.test | 10 | 0.000955s | 0.000921s | 0.000925s | byte equality observed |
| segtor_test.test | 1 | 0.257454s | 0.270673s | 0.263628s | byte equality observed |
| set_test.test | 3 | 0.009017s | 0.007819s | 0.008406s | byte equality observed |
| slist_test.test | 2 | 0.013541s | 0.013351s | 0.013022s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001192s | 0.001109s | 0.001101s | byte equality observed |
| small_vector_test.test | 8 | 0.001871s | 0.001649s | 0.002918s | byte equality observed |
| stable_vector_test.test | 1 | 0.021193s | 0.021168s | 0.021282s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001184s | 0.001104s | 0.001096s | byte equality observed |
| static_vector_test.test | 10 | 0.001267s | 0.001167s | 0.001195s | byte equality observed |
| string_options_test.test | 10 | 0.000993s | 0.000979s | 0.000890s | byte equality observed |
| string_test.test | 3 | 0.008467s | 0.008827s | 0.008635s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001040s | 0.001089s | 0.000923s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001003s | 0.000982s | 0.000916s | byte equality observed |
| throw_exception_test.test | 10 | 0.000913s | 0.000895s | 0.000857s | byte equality observed |
| tree_test.test | 10 | 0.000932s | 0.000900s | 0.000860s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000990s | 0.000963s | 0.000938s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000936s | 0.000939s | 0.000886s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000425s | 0.000423s | 0.000870s | byte equality observed |
| vector_options_test.test | 10 | 0.001070s | 0.001040s | 0.000998s | byte equality observed |
| vector_test.test | 5 | 0.003044s | 0.003123s | 0.003837s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
