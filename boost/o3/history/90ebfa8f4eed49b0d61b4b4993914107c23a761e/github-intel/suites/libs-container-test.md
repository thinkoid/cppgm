# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 8.189246 | 39.766220 | 32.339026 | 0.006680 | 0.005869 | 0.008812 |
| vector_options_test.test | RUN | 0.370307 | 1.733593 | 1.331045 | 0.001784 | 0.002050 | 0.001850 |
| uses_allocator_test.test | RUN | 0.063795 | 0.137960 | 0.169596 | 0.000605 | 0.000725 | 0.001611 |
| uses_allocator_construction_test.test | RUN | 0.192011 | 0.529341 | 0.593137 | 0.001716 | 0.001770 | 0.001572 |
| unsynchronized_pool_resource_test.test | RUN | 0.254631 | 1.637414 | 0.757484 | 0.001676 | 0.001636 | 0.001639 |
| tree_test.test | RUN | 1.137344 | 5.987549 | 4.487639 | 0.001790 | 0.001765 | 0.001539 |
| throw_exception_test.test | RUN | 0.136233 | 0.339812 | 0.382678 | 0.001497 | 0.001644 | 0.001607 |
| synchronized_pool_resource_test.test | RUN | 0.252360 | 1.620889 | 0.777612 | 0.001900 | 0.001853 | 0.001593 |
| string_view_compat_test.test | RUN | 0.430614 | 3.276533 | 1.509718 | 0.001435 | 0.001720 | 0.001674 |
| string_test.test | RUN | 1.979946 | 12.562340 | 8.608041 | 0.019681 | 0.016679 | 0.018025 |
| string_options_test.test | RUN | 0.342311 | 2.680861 | 1.348033 | 0.001636 | 0.001882 | 0.001737 |
| static_vector_test.test | RUN | 1.984846 | 10.426810 | 8.765491 | 0.002430 | 0.002172 | 0.002336 |
| static_vector_options_test.test | RUN | 0.234495 | 0.684866 | 0.745483 | 0.001976 | 0.001734 | 0.001747 |
| stable_vector_test.test | RUN | 4.662301 | 21.835448 | 16.672859 | 0.041020 | 0.042240 | 0.043598 |
| small_vector_test.test | RUN | 3.041156 | 15.181666 | 12.211032 | 0.003884 | 0.003566 | 0.006465 |
| small_vector_options_test.test | RUN | 0.416032 | 1.778153 | 1.532102 | 0.001885 | 0.001814 | 0.001836 |
| slist_test.test | RUN | 2.828335 | 13.618698 | 10.817774 | 0.029713 | 0.030897 | 0.030515 |
| set_test.test | RUN | 4.346190 | 25.173769 | 19.055741 | 0.019022 | 0.017180 | 0.018734 |
| segtor_test.test | RUN | 5.558763 | 27.763508 | 21.853572 | 0.700219 | 0.655832 | 0.717327 |
| segtor_options_test.test | RUN | 0.274257 | 0.804713 | 0.942891 | 0.001428 | 0.001762 | 0.001668 |
| scoped_allocator_usage_test.test | RUN | 0.993786 | 4.149018 | 3.638287 | 0.001455 | 0.001690 | 0.001622 |
| scoped_allocator_adaptor_test.test | RUN | 0.421836 | 1.124534 | 1.491694 | 0.001742 | 0.001653 | 0.001552 |
| resource_adaptor_test.test | RUN | 0.218790 | 0.652939 | 0.700115 | 0.001656 | 0.001562 | 0.001663 |
| polymorphic_allocator_test.test | RUN | 0.182255 | 0.544758 | 0.580737 | 0.001563 | 0.001677 | 0.001600 |
| pmr_vector_test.test | RUN | 0.103057 | 0.204139 | 0.270560 | 0.000747 | 0.000713 | 0.001482 |
| pmr_string_test.test | RUN | 0.205448 | 0.431008 | 0.568566 | 0.000750 | 0.000687 | 0.001609 |
| pmr_stable_vector_test.test | RUN | 0.242859 | 0.715266 | 0.783800 | 0.001688 | 0.001689 | 0.001559 |
| pmr_small_vector_test.test | RUN | 0.124147 | 0.280329 | 0.367142 | 0.001675 | 0.001636 | 0.001485 |
| pmr_slist_test.test | RUN | 0.184599 | 0.968911 | 0.777311 | 0.001653 | 0.001556 | 0.001474 |
| pmr_set_test.test | RUN | 0.195637 | 0.478745 | 0.591496 | 0.001592 | 0.001679 | 0.001652 |
| pmr_nest_test.test | RUN | 0.148176 | 0.332655 | 0.385519 | 0.001491 | 0.001552 | 0.001571 |
| pmr_map_test.test | RUN | 0.197582 | 0.498059 | 0.580875 | 0.001481 | 0.001610 | 0.001784 |
| pmr_list_test.test | RUN | 0.132800 | 0.303941 | 0.416656 | 0.001702 | 0.001445 | 0.001490 |
| pmr_hub_test.test | RUN | 0.183120 | 0.418427 | 0.511532 | 0.001481 | 0.001527 | 0.001599 |
| pmr_flat_set_test.test | RUN | 0.145351 | 0.329305 | 0.406783 | 0.001488 | 0.001609 | 0.001706 |
| pmr_flat_map_test.test | RUN | 0.179027 | 0.386833 | 0.474626 | 0.001539 | 0.001541 | 0.001489 |
| pmr_devector_test.test | RUN | 0.116957 | 0.338984 | 0.390863 | 0.001639 | 0.001613 | 0.001530 |
| pmr_deque_test.test | RUN | 0.114699 | 0.278390 | 0.352085 | 0.001587 | 0.001664 | 0.001574 |
| pair_test.test | RUN | 0.287490 | 0.651709 | 0.809385 | 0.001513 | 0.001598 | 0.001497 |
| null_iterators_test.test | RUN | 0.457095 | 1.289202 | 1.394181 | 0.001477 | 0.001658 | 0.001584 |
| node_handle_test.test | RUN | 0.202612 | 1.634727 | 0.563920 | 0.001544 | 0.001750 | 0.001581 |
| node_allocator_test.test | RUN | 3.390593 | 17.010447 | 13.321998 | 0.012428 | 0.012033 | 0.012646 |
| new_delete_resource_test.test | RUN | 0.246552 | 0.992487 | 0.779240 | 0.002268 | 0.002484 | 0.002372 |
| nest_test.test | RUN | 0.679274 | 4.692191 | 2.809544 | 0.001656 | 0.001788 | 0.001666 |
| nest_api_test.test | RUN | 1.168487 | 8.918511 | 5.572207 | 0.003243 | 0.003001 | 0.003031 |
| monotonic_buffer_resource_test.test | RUN | 0.232188 | 1.766985 | 0.785450 | 0.001767 | 0.001838 | 0.001480 |
| memory_resource_test.test | RUN | 0.146540 | 0.501012 | 0.368934 | 0.001642 | 0.001870 | 0.001394 |
| map_test.test | RUN | 5.935698 | 28.637047 | 27.837190 | 0.014254 | 0.013716 | 0.013200 |
| list_test.test | RUN | 3.046244 | 14.649589 | 11.474211 | 0.029986 | 0.029797 | 0.030631 |
| is_constructible_test.test | RUN | 0.088824 | 0.182649 | 0.254860 | 0.000785 | 0.000700 | 0.001612 |
| insert_vs_emplace_test.test | RUN | 0.290353 | 1.165486 | 1.542226 | 0.001772 | 0.001776 | 0.001667 |
| hub_uses_allocator_test.test | RUN | 0.321854 | 0.991401 | 1.048918 | 0.001661 | 0.001752 | 0.001649 |
| hub_stability_test.test | RUN | 0.748968 | 4.732537 | 3.886486 | 0.001991 | 0.002048 | 0.001998 |
| hub_sort_test.test | RUN | 0.480267 | 2.165927 | 1.874806 | 0.727151 | 0.715726 | 0.693836 |
| hub_pocxx_test.test | RUN | 0.400926 | 2.489604 | 1.247191 | 0.001505 | 0.001786 | 0.001671 |
| hub_new_extended_alignment_test.test | RUN | 0.222602 | 0.752520 | 0.706481 | 0.001647 | 0.001604 | 0.001647 |
| hub_exception_safety_test.test | RUN | 0.878143 | 6.005092 | 3.900075 | 0.094052 | 0.096872 | 0.093602 |
| hub_empty_sort_test.test | RUN | 0.258666 | 0.690750 | 0.854558 | 0.001694 | 0.001691 | 0.001455 |
| hub_api_test.test | RUN | 2.951602 | 23.460971 | 12.162638 | 0.004611 | 0.004384 | 0.004029 |
| global_resource_test.test | RUN | 0.138019 | 0.462389 | 0.436430 | 0.001794 | 0.001712 | 0.001619 |
| flat_tree_test.test | RUN | 5.559779 | 36.675716 | 23.842182 | 0.001587 | 0.001596 | 0.001664 |
| flat_set_test.test | RUN | 6.896654 | 46.328282 | 30.919623 | 0.010100 | 0.009059 | 0.009436 |
| flat_set_adaptor_test.test | RUN | 5.176854 | 40.759223 | 24.341437 | 0.010370 | 0.009352 | 0.009637 |
| flat_map_test.test | RUN | 11.155148 | 68.718762 | 51.295716 | 0.012063 | 0.011146 | 0.010426 |
| flat_map_adaptor_test.test | RUN | 7.101744 | 50.197760 | 36.045952 | 0.010676 | 0.010198 | 0.010111 |
| explicit_inst_vector_test.test | RUN | 1.094825 | 6.863479 | 5.322585 | 0.001621 | 0.001660 | 0.001571 |
| explicit_inst_string_test.test | RUN | 1.470215 | 12.108953 | 7.381918 | 0.001674 | 0.001624 | 0.001589 |
| explicit_inst_static_vector_test.test | RUN | 0.132082 | 0.431773 | 0.490134 | 0.001546 | 0.001581 | 0.001500 |
| explicit_inst_stable_vector_test.test | RUN | 0.880012 | 4.300579 | 3.406274 | 0.001580 | 0.001627 | 0.001625 |
| explicit_inst_small_vector_test.test | RUN | 0.721176 | 3.924539 | 3.161832 | 0.001515 | 0.001549 | 0.001532 |
| explicit_inst_slist_test.test | RUN | 0.547797 | 3.588281 | 2.394748 | 0.001636 | 0.001742 | 0.001654 |
| explicit_inst_set_test.test | RUN | 0.762514 | 4.149584 | 2.837894 | 0.001638 | 0.001690 | 0.001560 |
| explicit_inst_map_test.test | RUN | 0.845805 | 4.330907 | 3.100975 | 0.001620 | 0.001789 | 0.001582 |
| explicit_inst_list_test.test | RUN | 0.188709 | 0.992530 | 0.783859 | 0.001705 | 0.001672 | 0.001531 |
| explicit_inst_flat_set_test.test | RUN | 4.543849 | 31.147347 | 18.724506 | 0.001704 | 0.001664 | 0.001562 |
| explicit_inst_flat_map_test.test | RUN | 4.955012 | 32.266457 | 20.479285 | 0.001918 | 0.001638 | 0.001482 |
| explicit_inst_devector_test.test | RUN | 0.604200 | 3.873723 | 2.575156 | 0.001600 | 0.001588 | 0.001458 |
| explicit_inst_deque_test.test | RUN | 0.616637 | 4.196424 | 2.738070 | 0.001736 | 0.001734 | 0.001944 |
| devector_test.test | RUN | 8.685507 | 45.354954 | 32.625056 | 0.004153 | 0.003901 | 0.005767 |
| devector_options_test.test | RUN | 0.363743 | 2.292220 | 1.680075 | 0.002049 | 0.001898 | 0.001962 |
| deque_test.test | RUN | 5.647928 | 31.916766 | 23.750777 | 0.463585 | 0.411960 | 0.516765 |
| deque_options_test.test | RUN | 0.279968 | 0.810263 | 1.020163 | 0.001717 | 0.001937 | 0.001735 |
| copy_move_algo_test.test | RUN | 0.263388 | 1.021408 | 0.957139 | 0.002154 | 0.001844 | 0.002028 |
| common_iterator_test.test | RUN | 0.018664 | 0.049898 | 0.047031 | 0.000566 | 0.000678 | 0.001470 |
| boost_iterator_comp_test.test | RUN | 0.377562 | 1.189010 | 1.248389 | 0.001832 | 0.001808 | 0.001846 |
| allocator_traits_test.test | RUN | 0.217981 | 0.504301 | 0.643335 | 0.001633 | 0.001626 | 0.001606 |
| alloc_full_test.test | RUN | 0.257980 | 1.128101 | 0.907380 | 0.005320 | 0.005061 | 0.005345 |
| alloc_basic_test.test | RUN | 0.210267 | 0.782792 | 0.709994 | 0.001666 | 0.001702 | 0.001697 |
| adaptive_pool_test.test | RUN | 2.900606 | 18.274045 | 13.763206 | 0.011627 | 0.015610 | 0.017485 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.978× | 0.979×, 0.978× | 1.003× |
| clang | 1.078× | 1.075×, 1.081× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.012441s | 0.011035s | 0.012044s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001062s | 0.001068s | 0.001086s | byte equality observed |
| alloc_full_test.test | 6 | 0.003582s | 0.003526s | 0.003835s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000985s | 0.001015s | 0.000985s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001042s | 0.001051s | 0.001044s | byte equality observed |
| common_iterator_test.test | 10 | 0.000467s | 0.000476s | 0.001029s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001564s | 0.001195s | 0.001323s | byte equality observed |
| deque_options_test.test | 10 | 0.001087s | 0.001074s | 0.001111s | byte equality observed |
| deque_test.test | 1 | 0.438449s | 0.443113s | 0.541174s | byte equality observed |
| devector_options_test.test | 10 | 0.001191s | 0.001114s | 0.001121s | byte equality observed |
| devector_test.test | 4 | 0.003880s | 0.003722s | 0.005472s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000973s | 0.000960s | 0.000940s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000959s | 0.000954s | 0.000941s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000967s | 0.000953s | 0.000973s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000964s | 0.000960s | 0.000939s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000959s | 0.000961s | 0.000936s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000957s | 0.000957s | 0.000956s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000951s | 0.000959s | 0.000931s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000950s | 0.000968s | 0.000924s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000958s | 0.000954s | 0.000914s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000957s | 0.000960s | 0.000911s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000960s | 0.000938s | 0.000902s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000968s | 0.000970s | 0.000913s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000964s | 0.000943s | 0.000914s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007611s | 0.007182s | 0.007113s | byte equality observed |
| flat_map_test.test | 3 | 0.008331s | 0.007722s | 0.007389s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007463s | 0.006746s | 0.007114s | byte equality observed |
| flat_set_test.test | 3 | 0.007340s | 0.006579s | 0.006930s | byte equality observed |
| flat_tree_test.test | 10 | 0.000975s | 0.000960s | 0.000948s | byte equality observed |
| global_resource_test.test | 10 | 0.001021s | 0.001012s | 0.001001s | byte equality observed |
| hub_api_test.test | 6 | 0.003269s | 0.002805s | 0.002767s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000996s | 0.000977s | 0.000967s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.068422s | 0.070945s | 0.069867s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001089s | 0.001098s | 0.001077s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001088s | 0.001099s | 0.001021s | byte equality observed |
| hub_sort_test.test | 1 | 0.582769s | 0.582608s | 0.577028s | byte equality observed |
| hub_stability_test.test | 10 | 0.001252s | 0.001262s | 0.001286s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000971s | 0.000991s | 0.000957s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001009s | 0.001002s | 0.001030s | byte equality observed |
| is_constructible_test.test | 10 | 0.000439s | 0.000443s | 0.000943s | byte equality observed |
| list_test.test | 1 | 0.020390s | 0.020429s | 0.021067s | byte equality observed |
| map_test.test | 2 | 0.010311s | 0.009950s | 0.009771s | byte equality observed |
| memory_resource_test.test | 10 | 0.001019s | 0.001007s | 0.001002s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001040s | 0.001022s | 0.000995s | byte equality observed |
| nest_api_test.test | 9 | 0.002027s | 0.002044s | 0.002030s | byte equality observed |
| nest_test.test | 10 | 0.001040s | 0.001041s | 0.001014s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001487s | 0.001501s | 0.001481s | byte equality observed |
| node_allocator_test.test | 3 | 0.008748s | 0.008671s | 0.008884s | byte equality observed |
| node_handle_test.test | 10 | 0.001017s | 0.001011s | 0.000981s | byte equality observed |
| null_iterators_test.test | 10 | 0.001004s | 0.001016s | 0.000964s | byte equality observed |
| pair_test.test | 10 | 0.000989s | 0.000991s | 0.000962s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000983s | 0.000958s | 0.000938s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000963s | 0.000961s | 0.000958s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000963s | 0.000955s | 0.000933s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000952s | 0.000949s | 0.000952s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000953s | 0.000964s | 0.000927s | byte equality observed |
| pmr_list_test.test | 10 | 0.000957s | 0.000958s | 0.000929s | byte equality observed |
| pmr_map_test.test | 10 | 0.000949s | 0.000966s | 0.000929s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000950s | 0.000969s | 0.000923s | byte equality observed |
| pmr_set_test.test | 10 | 0.000958s | 0.000958s | 0.000938s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000957s | 0.000947s | 0.000918s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000954s | 0.000947s | 0.000933s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000971s | 0.000959s | 0.000941s | byte equality observed |
| pmr_string_test.test | 10 | 0.000445s | 0.000449s | 0.000918s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000443s | 0.000440s | 0.000940s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001001s | 0.000996s | 0.000976s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000998s | 0.001003s | 0.000995s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000998s | 0.000981s | 0.001020s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000975s | 0.000981s | 0.001054s | byte equality observed |
| segtor_options_test.test | 10 | 0.001047s | 0.001039s | 0.001081s | byte equality observed |
| segtor_test.test | 1 | 0.415774s | 0.393572s | 0.449333s | byte equality observed |
| set_test.test | 2 | 0.014462s | 0.012815s | 0.013880s | byte equality observed |
| slist_test.test | 1 | 0.021337s | 0.021054s | 0.020977s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001135s | 0.001083s | 0.001110s | byte equality observed |
| small_vector_test.test | 5 | 0.002332s | 0.002083s | 0.004478s | byte equality observed |
| stable_vector_test.test | 1 | 0.035603s | 0.036282s | 0.037850s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001095s | 0.001021s | 0.001108s | byte equality observed |
| static_vector_test.test | 10 | 0.001400s | 0.001277s | 0.001351s | byte equality observed |
| string_options_test.test | 10 | 0.001019s | 0.001083s | 0.001041s | byte equality observed |
| string_test.test | 2 | 0.013506s | 0.012448s | 0.013157s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000998s | 0.001003s | 0.000988s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001039s | 0.001038s | 0.001028s | byte equality observed |
| throw_exception_test.test | 10 | 0.000967s | 0.000969s | 0.000955s | byte equality observed |
| tree_test.test | 10 | 0.000964s | 0.000969s | 0.000929s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001050s | 0.001029s | 0.001020s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000990s | 0.000982s | 0.000945s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000444s | 0.000442s | 0.000933s | byte equality observed |
| vector_options_test.test | 10 | 0.001135s | 0.001139s | 0.001106s | byte equality observed |
| vector_test.test | 3 | 0.004179s | 0.003941s | 0.006007s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
