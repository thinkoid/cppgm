# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.916705 | 31.810254 | 27.290823 | 0.005794 | 0.005331 | 0.007480 |
| vector_options_test.test | RUN | 0.313791 | 1.476397 | 1.225893 | 0.002544 | 0.002030 | 0.002082 |
| uses_allocator_test.test | RUN | 0.059028 | 0.126292 | 0.160525 | 0.000772 | 0.000696 | 0.001865 |
| uses_allocator_construction_test.test | RUN | 0.174702 | 0.473066 | 0.569381 | 0.001706 | 0.001610 | 0.001648 |
| unsynchronized_pool_resource_test.test | RUN | 0.225268 | 1.309958 | 0.711891 | 0.001754 | 0.001973 | 0.001912 |
| tree_test.test | RUN | 0.924072 | 4.703004 | 3.922829 | 0.001634 | 0.001764 | 0.001766 |
| throw_exception_test.test | RUN | 0.127630 | 0.282915 | 0.401784 | 0.001654 | 0.001753 | 0.001780 |
| synchronized_pool_resource_test.test | RUN | 0.200032 | 1.309260 | 0.745351 | 0.001711 | 0.001961 | 0.002000 |
| string_view_compat_test.test | RUN | 0.327653 | 2.624723 | 1.444594 | 0.001636 | 0.001894 | 0.001790 |
| string_test.test | RUN | 1.507409 | 10.213644 | 7.483808 | 0.015934 | 0.015199 | 0.015424 |
| string_options_test.test | RUN | 0.288122 | 2.125810 | 1.062450 | 0.001854 | 0.001777 | 0.001724 |
| static_vector_test.test | RUN | 1.525802 | 8.443133 | 7.466073 | 0.002544 | 0.002334 | 0.002052 |
| static_vector_options_test.test | RUN | 0.210021 | 0.539741 | 0.709564 | 0.001901 | 0.001864 | 0.001891 |
| stable_vector_test.test | RUN | 3.391439 | 17.281806 | 14.069371 | 0.031244 | 0.031609 | 0.033011 |
| small_vector_test.test | RUN | 2.300197 | 12.153157 | 10.134033 | 0.003640 | 0.002949 | 0.005280 |
| small_vector_options_test.test | RUN | 0.355401 | 1.488412 | 1.417380 | 0.001952 | 0.002059 | 0.001696 |
| slist_test.test | RUN | 2.111577 | 10.893687 | 9.083532 | 0.024045 | 0.024892 | 0.023246 |
| set_test.test | RUN | 3.293393 | 20.875933 | 16.864195 | 0.015121 | 0.013869 | 0.015167 |
| segtor_test.test | RUN | 4.024309 | 22.426742 | 18.453588 | 0.609840 | 0.651555 | 0.653955 |
| segtor_options_test.test | RUN | 0.242472 | 0.640513 | 0.817790 | 0.001595 | 0.001930 | 0.001743 |
| scoped_allocator_usage_test.test | RUN | 0.775905 | 3.474171 | 3.205561 | 0.001721 | 0.001787 | 0.001762 |
| scoped_allocator_adaptor_test.test | RUN | 0.368797 | 0.948816 | 1.440076 | 0.001794 | 0.001922 | 0.001701 |
| resource_adaptor_test.test | RUN | 0.193387 | 0.553454 | 0.660657 | 0.001447 | 0.002296 | 0.001666 |
| polymorphic_allocator_test.test | RUN | 0.160918 | 0.459191 | 0.521864 | 0.001356 | 0.001628 | 0.001741 |
| pmr_vector_test.test | RUN | 0.089995 | 0.177163 | 0.295067 | 0.000617 | 0.000603 | 0.001758 |
| pmr_string_test.test | RUN | 0.180976 | 0.378732 | 0.528441 | 0.000748 | 0.000762 | 0.001711 |
| pmr_stable_vector_test.test | RUN | 0.197154 | 0.590771 | 0.731672 | 0.001729 | 0.001864 | 0.001702 |
| pmr_small_vector_test.test | RUN | 0.109174 | 0.239151 | 0.359389 | 0.001928 | 0.001811 | 0.001536 |
| pmr_slist_test.test | RUN | 0.153243 | 0.794651 | 0.693986 | 0.001727 | 0.001804 | 0.001614 |
| pmr_set_test.test | RUN | 0.169435 | 0.409668 | 0.552165 | 0.001906 | 0.001619 | 0.001674 |
| pmr_nest_test.test | RUN | 0.131737 | 0.284606 | 0.303890 | 0.001514 | 0.001771 | 0.001754 |
| pmr_map_test.test | RUN | 0.178744 | 0.422687 | 0.527180 | 0.001752 | 0.001729 | 0.001724 |
| pmr_list_test.test | RUN | 0.119785 | 0.274443 | 0.393953 | 0.001734 | 0.001820 | 0.001737 |
| pmr_hub_test.test | RUN | 0.167083 | 0.374904 | 0.497306 | 0.001494 | 0.001867 | 0.001748 |
| pmr_flat_set_test.test | RUN | 0.127690 | 0.277821 | 0.424698 | 0.001706 | 0.001688 | 0.001705 |
| pmr_flat_map_test.test | RUN | 0.154144 | 0.331635 | 0.446450 | 0.001566 | 0.001890 | 0.001602 |
| pmr_devector_test.test | RUN | 0.101169 | 0.290332 | 0.356179 | 0.001434 | 0.001684 | 0.001634 |
| pmr_deque_test.test | RUN | 0.100737 | 0.230458 | 0.337239 | 0.001716 | 0.001730 | 0.001642 |
| pair_test.test | RUN | 0.259966 | 0.588492 | 0.714659 | 0.001766 | 0.001840 | 0.001761 |
| null_iterators_test.test | RUN | 0.357830 | 1.113433 | 1.254310 | 0.001494 | 0.001901 | 0.001732 |
| node_handle_test.test | RUN | 0.171446 | 1.341561 | 0.521422 | 0.001656 | 0.001881 | 0.001642 |
| node_allocator_test.test | RUN | 2.482827 | 13.492427 | 11.355776 | 0.010451 | 0.010485 | 0.010461 |
| new_delete_resource_test.test | RUN | 0.211060 | 0.826786 | 0.701576 | 0.002596 | 0.002505 | 0.002518 |
| nest_test.test | RUN | 0.541348 | 3.642435 | 2.370180 | 0.001806 | 0.001853 | 0.001504 |
| nest_api_test.test | RUN | 0.883671 | 7.042329 | 4.830933 | 0.002506 | 0.002613 | 0.002635 |
| monotonic_buffer_resource_test.test | RUN | 0.219067 | 1.454779 | 0.577583 | 0.001690 | 0.001932 | 0.001780 |
| memory_resource_test.test | RUN | 0.133990 | 0.419318 | 0.421156 | 0.001622 | 0.001903 | 0.001836 |
| map_test.test | RUN | 4.376557 | 23.283304 | 23.734194 | 0.011138 | 0.010070 | 0.010880 |
| list_test.test | RUN | 2.284536 | 11.956590 | 9.824719 | 0.024943 | 0.025669 | 0.025623 |
| is_constructible_test.test | RUN | 0.083754 | 0.165147 | 0.253624 | 0.000778 | 0.000840 | 0.001770 |
| insert_vs_emplace_test.test | RUN | 0.253528 | 0.957056 | 1.313061 | 0.002012 | 0.002036 | 0.001842 |
| hub_uses_allocator_test.test | RUN | 0.276841 | 0.819526 | 0.960019 | 0.001797 | 0.001867 | 0.001740 |
| hub_stability_test.test | RUN | 0.607178 | 3.760855 | 3.288572 | 0.002037 | 0.002262 | 0.001940 |
| hub_sort_test.test | RUN | 0.385708 | 1.726068 | 1.671031 | 0.525922 | 0.528011 | 0.506813 |
| hub_pocxx_test.test | RUN | 0.342952 | 2.021694 | 1.255777 | 0.001742 | 0.001892 | 0.001758 |
| hub_new_extended_alignment_test.test | RUN | 0.195827 | 0.618898 | 0.706065 | 0.001877 | 0.001916 | 0.001588 |
| hub_exception_safety_test.test | RUN | 0.683799 | 4.813358 | 3.325294 | 0.092700 | 0.089764 | 0.091063 |
| hub_empty_sort_test.test | RUN | 0.218950 | 0.569339 | 0.727922 | 0.001677 | 0.001776 | 0.001785 |
| hub_api_test.test | RUN | 2.241870 | 19.149815 | 11.021561 | 0.004136 | 0.003714 | 0.003553 |
| global_resource_test.test | RUN | 0.126816 | 0.362428 | 0.388267 | 0.001871 | 0.001968 | 0.001811 |
| flat_tree_test.test | RUN | 4.070997 | 29.059324 | 19.705092 | 0.001727 | 0.001796 | 0.001761 |
| flat_set_test.test | RUN | 5.095981 | 36.691492 | 25.921324 | 0.008322 | 0.007441 | 0.007752 |
| flat_set_adaptor_test.test | RUN | 3.740481 | 32.560680 | 20.381608 | 0.008401 | 0.007732 | 0.008435 |
| flat_map_test.test | RUN | 8.134330 | 54.590920 | 42.749462 | 0.009061 | 0.008776 | 0.008414 |
| flat_map_adaptor_test.test | RUN | 5.131235 | 40.043177 | 30.412630 | 0.008082 | 0.008260 | 0.007102 |
| explicit_inst_vector_test.test | RUN | 0.854472 | 5.403420 | 4.515304 | 0.001751 | 0.001764 | 0.001655 |
| explicit_inst_string_test.test | RUN | 1.123405 | 9.506975 | 6.038457 | 0.001696 | 0.001768 | 0.001763 |
| explicit_inst_static_vector_test.test | RUN | 0.113947 | 0.362881 | 0.429838 | 0.001637 | 0.001786 | 0.001727 |
| explicit_inst_stable_vector_test.test | RUN | 0.666700 | 3.414392 | 2.729285 | 0.001735 | 0.001814 | 0.001732 |
| explicit_inst_small_vector_test.test | RUN | 0.573031 | 3.162110 | 2.738277 | 0.001788 | 0.001947 | 0.001769 |
| explicit_inst_slist_test.test | RUN | 0.434624 | 2.883138 | 2.107483 | 0.001773 | 0.001832 | 0.001744 |
| explicit_inst_set_test.test | RUN | 0.616120 | 3.255689 | 2.422011 | 0.001611 | 0.001789 | 0.001686 |
| explicit_inst_map_test.test | RUN | 0.666168 | 3.424257 | 2.681129 | 0.001777 | 0.001794 | 0.001682 |
| explicit_inst_list_test.test | RUN | 0.152988 | 0.786038 | 0.673915 | 0.001746 | 0.001599 | 0.001710 |
| explicit_inst_flat_set_test.test | RUN | 3.302563 | 24.360730 | 15.458647 | 0.001811 | 0.001821 | 0.001766 |
| explicit_inst_flat_map_test.test | RUN | 3.619470 | 25.533472 | 17.281334 | 0.001647 | 0.001732 | 0.001583 |
| explicit_inst_devector_test.test | RUN | 0.471441 | 3.097542 | 2.238977 | 0.001553 | 0.001786 | 0.001686 |
| explicit_inst_deque_test.test | RUN | 0.488017 | 3.323184 | 2.307167 | 0.001757 | 0.001894 | 0.001756 |
| devector_test.test | RUN | 6.559488 | 40.972411 | 28.222500 | 0.003844 | 0.003588 | 0.004691 |
| devector_options_test.test | RUN | 0.304845 | 1.816424 | 1.235282 | 0.001994 | 0.002166 | 0.002018 |
| deque_test.test | RUN | 4.408972 | 21.105752 | 19.890087 | 0.422982 | 0.696197 | 0.426118 |
| deque_options_test.test | RUN | 0.246626 | 0.701598 | 0.911462 | 0.001848 | 0.001905 | 0.001776 |
| copy_move_algo_test.test | RUN | 0.224913 | 0.778278 | 0.678847 | 0.001632 | 0.001913 | 0.001796 |
| common_iterator_test.test | RUN | 0.019621 | 0.047380 | 0.050160 | 0.000622 | 0.000709 | 0.001731 |
| boost_iterator_comp_test.test | RUN | 0.321746 | 1.018928 | 1.219904 | 0.001514 | 0.001820 | 0.001800 |
| allocator_traits_test.test | RUN | 0.195637 | 0.461408 | 0.602055 | 0.001283 | 0.001848 | 0.001660 |
| alloc_full_test.test | RUN | 0.211256 | 0.886690 | 0.836829 | 0.004512 | 0.005050 | 0.004813 |
| alloc_basic_test.test | RUN | 0.177993 | 0.670698 | 0.635505 | 0.001798 | 0.001803 | 0.001912 |
| adaptive_pool_test.test | RUN | 1.735245 | 13.768605 | 11.534623 | 0.010302 | 0.009615 | 0.014611 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968× | 0.967×, 0.969× | 0.997× |
| clang | 1.017× | 1.006×, 1.028× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010512s | 0.009757s | 0.010592s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001073s | 0.001093s | 0.001085s | byte equality observed |
| alloc_full_test.test | 7 | 0.003030s | 0.002963s | 0.003028s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001006s | 0.000985s | 0.001009s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001024s | 0.001014s | 0.001004s | byte equality observed |
| common_iterator_test.test | 10 | 0.000462s | 0.000463s | 0.000995s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001264s | 0.001127s | 0.001122s | byte equality observed |
| deque_options_test.test | 10 | 0.001069s | 0.001043s | 0.001061s | byte equality observed |
| deque_test.test | 1 | 0.420848s | 0.388546s | 0.459840s | byte equality observed |
| devector_options_test.test | 10 | 0.001169s | 0.001109s | 0.001109s | byte equality observed |
| devector_test.test | 5 | 0.003421s | 0.003145s | 0.004283s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000953s | 0.000958s | 0.000963s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000940s | 0.000958s | 0.000963s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000963s | 0.000969s | 0.000944s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000950s | 0.000960s | 0.000941s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000948s | 0.000939s | 0.000934s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000960s | 0.000949s | 0.000946s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000954s | 0.000946s | 0.000953s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000965s | 0.000946s | 0.000956s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000961s | 0.000953s | 0.000941s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000957s | 0.000969s | 0.000967s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000955s | 0.000938s | 0.000943s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000968s | 0.000951s | 0.000936s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000966s | 0.000958s | 0.000958s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005939s | 0.005628s | 0.005759s | byte equality observed |
| flat_map_test.test | 3 | 0.006441s | 0.006058s | 0.005944s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005994s | 0.005381s | 0.005912s | byte equality observed |
| flat_set_test.test | 4 | 0.005905s | 0.005170s | 0.005815s | byte equality observed |
| flat_tree_test.test | 10 | 0.000986s | 0.000964s | 0.000967s | byte equality observed |
| global_resource_test.test | 10 | 0.001003s | 0.000990s | 0.001006s | byte equality observed |
| hub_api_test.test | 7 | 0.002793s | 0.002206s | 0.002190s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000992s | 0.000956s | 0.000959s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.071153s | 0.065820s | 0.065346s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001086s | 0.001069s | 0.001033s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001033s | 0.001014s | 0.000998s | byte equality observed |
| hub_sort_test.test | 1 | 0.438192s | 0.439395s | 0.427153s | byte equality observed |
| hub_stability_test.test | 10 | 0.001218s | 0.001235s | 0.001220s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000985s | 0.000998s | 0.000967s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001000s | 0.000998s | 0.000989s | byte equality observed |
| is_constructible_test.test | 10 | 0.000451s | 0.000450s | 0.000942s | byte equality observed |
| list_test.test | 2 | 0.017600s | 0.017349s | 0.017636s | byte equality observed |
| map_test.test | 3 | 0.008026s | 0.007826s | 0.007932s | byte equality observed |
| memory_resource_test.test | 10 | 0.001028s | 0.001009s | 0.001014s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001019s | 0.000988s | 0.000984s | byte equality observed |
| nest_api_test.test | 10 | 0.001639s | 0.001612s | 0.001620s | byte equality observed |
| nest_test.test | 10 | 0.001021s | 0.000993s | 0.001006s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001504s | 0.001454s | 0.001494s | byte equality observed |
| node_allocator_test.test | 3 | 0.007662s | 0.007105s | 0.007508s | byte equality observed |
| node_handle_test.test | 10 | 0.001051s | 0.001048s | 0.001032s | byte equality observed |
| null_iterators_test.test | 10 | 0.000982s | 0.000941s | 0.000978s | byte equality observed |
| pair_test.test | 10 | 0.000979s | 0.000947s | 0.000973s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000950s | 0.000956s | 0.000946s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000961s | 0.000951s | 0.000948s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000969s | 0.000929s | 0.000963s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000958s | 0.000932s | 0.000953s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000979s | 0.000941s | 0.000948s | byte equality observed |
| pmr_list_test.test | 10 | 0.000968s | 0.000951s | 0.000958s | byte equality observed |
| pmr_map_test.test | 10 | 0.000958s | 0.000946s | 0.000975s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000977s | 0.000943s | 0.000959s | byte equality observed |
| pmr_set_test.test | 10 | 0.000976s | 0.000953s | 0.001006s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000970s | 0.000965s | 0.000982s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000965s | 0.000942s | 0.000980s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000995s | 0.000974s | 0.001017s | byte equality observed |
| pmr_string_test.test | 10 | 0.000473s | 0.000453s | 0.000995s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000458s | 0.000457s | 0.001005s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001034s | 0.001053s | 0.001015s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001027s | 0.001011s | 0.001052s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001015s | 0.001014s | 0.000990s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001021s | 0.001023s | 0.001027s | byte equality observed |
| segtor_options_test.test | 10 | 0.001061s | 0.001030s | 0.001020s | byte equality observed |
| segtor_test.test | 1 | 0.377700s | 0.376085s | 0.364767s | byte equality observed |
| set_test.test | 2 | 0.011011s | 0.009734s | 0.011052s | byte equality observed |
| slist_test.test | 2 | 0.017111s | 0.017016s | 0.016958s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001104s | 0.001077s | 0.001085s | byte equality observed |
| small_vector_test.test | 6 | 0.002141s | 0.001935s | 0.003551s | byte equality observed |
| stable_vector_test.test | 1 | 0.025267s | 0.025530s | 0.026545s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001055s | 0.001055s | 0.001088s | byte equality observed |
| static_vector_test.test | 10 | 0.001344s | 0.001253s | 0.001286s | byte equality observed |
| string_options_test.test | 10 | 0.001010s | 0.001021s | 0.001011s | byte equality observed |
| string_test.test | 2 | 0.011040s | 0.011801s | 0.011438s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000973s | 0.000981s | 0.001016s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001034s | 0.001020s | 0.001055s | byte equality observed |
| throw_exception_test.test | 10 | 0.000953s | 0.000946s | 0.001010s | byte equality observed |
| tree_test.test | 10 | 0.000981s | 0.000946s | 0.000967s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001019s | 0.001019s | 0.001041s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000986s | 0.000950s | 0.001000s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000447s | 0.000436s | 0.000968s | byte equality observed |
| vector_options_test.test | 10 | 0.001136s | 0.001096s | 0.001155s | byte equality observed |
| vector_test.test | 4 | 0.003650s | 0.003427s | 0.005171s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
