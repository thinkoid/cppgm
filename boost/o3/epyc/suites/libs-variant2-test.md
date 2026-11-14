# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.122295 | 0.271686 | 0.381081 | 0.001503 | 0.000821 | 0.001765 |
| variant_size.test | RUN | 0.207458 | 0.613505 | 0.719524 | 0.001876 | 0.001940 | 0.001762 |
| variant_alternative.test | RUN | 0.282643 | 1.916738 | 1.184589 | 0.001938 | 0.001968 | 0.001260 |
| variant_holds_alternative.test | RUN | 0.194847 | 0.470320 | 0.683897 | 0.001778 | 0.001812 | 0.001654 |
| variant_holds_alternative_cx.test | COMPILE | 0.131223 | 0.276957 | 0.400807 | — | — | — |
| variant_get_by_index.test | RUN | 0.302829 | 2.139885 | 1.422687 | 0.001850 | 0.001896 | 0.001892 |
| variant_get_by_index_cx.test | COMPILE | 0.134266 | 0.280873 | 0.403365 | — | — | — |
| variant_get_by_type.test | RUN | 0.317832 | 2.258957 | 1.560062 | 0.001609 | 0.002068 | 0.001899 |
| variant_get_by_type_cx.test | COMPILE | 0.122665 | 0.256977 | 0.360100 | — | — | — |
| variant_default_construct.test | RUN | 0.287822 | 1.684181 | 1.238916 | 0.001688 | 0.001767 | 0.001815 |
| variant_default_construct_cx.test | COMPILE | 0.137339 | 0.259712 | 0.421520 | — | — | — |
| variant_copy_construct.test | RUN | 0.463539 | 2.863792 | 2.232192 | 0.001833 | 0.001938 | 0.001705 |
| variant_copy_construct_cx.test | COMPILE | 0.146296 | 0.301296 | 0.494366 | — | — | — |
| variant_move_construct.test | RUN | 0.447279 | 2.417492 | 2.045388 | 0.001644 | 0.001840 | 0.001818 |
| variant_move_construct_cx.test | COMPILE | 0.121282 | 0.255254 | 0.348886 | — | — | — |
| variant_value_construct.test | RUN | 0.234785 | 0.637538 | 0.862443 | 0.001570 | 0.001850 | 0.001687 |
| variant_value_construct_cx.test | COMPILE | 0.132354 | 0.282360 | 0.423669 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.241137 | 0.621526 | 0.875119 | 0.001586 | 0.001856 | 0.001835 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.134792 | 0.285436 | 0.401673 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.232770 | 0.631883 | 0.915895 | 0.001666 | 0.001520 | 0.001559 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.132554 | 0.288625 | 0.424420 | — | — | — |
| variant_copy_assign.test | RUN | 0.320679 | 1.948404 | 1.358429 | 0.001806 | 0.001686 | 0.001670 |
| variant_copy_assign_cx.test | COMPILE | 0.113632 | 0.259300 | 0.336359 | — | — | — |
| variant_move_assign.test | RUN | 0.308811 | 1.927748 | 1.358427 | 0.001532 | 0.001946 | 0.001519 |
| variant_move_assign_cx.test | COMPILE | 0.116156 | 0.244543 | 0.349124 | — | — | — |
| variant_value_assign.test | RUN | 0.242533 | 0.712897 | 0.964193 | 0.001865 | 0.001714 | 0.001620 |
| variant_value_assign_cx.test | COMPILE | 0.114051 | 0.248502 | 0.360995 | — | — | — |
| variant_emplace_index.test | RUN | 0.282117 | 0.820225 | 1.050757 | 0.001732 | 0.001930 | 0.001826 |
| variant_emplace_index_cx.test | COMPILE | 0.112443 | 0.244145 | 0.327554 | — | — | — |
| variant_emplace_type.test | RUN | 0.238072 | 0.704681 | 0.936073 | 0.001604 | 0.001965 | 0.001882 |
| variant_emplace_type_cx.test | COMPILE | 0.115404 | 0.239018 | 0.352258 | — | — | — |
| variant_swap.test | RUN | 0.259254 | 0.848336 | 1.052503 | 0.001938 | 0.001862 | 0.001578 |
| variant_eq_ne.test | RUN | 0.211180 | 0.532111 | 0.756963 | 0.001784 | 0.001830 | 0.001586 |
| variant_eq_ne_cx.test | COMPILE | 0.118595 | 0.242966 | 0.316530 | — | — | — |
| variant_lt_gt.test | RUN | 0.217626 | 0.599418 | 0.778641 | 0.001744 | 0.001950 | 0.001912 |
| variant_lt_gt_cx.test | COMPILE | 0.115780 | 0.257370 | 0.357933 | — | — | — |
| variant_destroy.test | RUN | 0.218006 | 0.583452 | 0.812666 | 0.001837 | 0.001785 | 0.001806 |
| variant_visit.test | RUN | 1.252608 | 4.580153 | 12.425354 | 0.001579 | 0.001784 | 0.001704 |
| variant_convert_construct.test | RUN | 0.271884 | 0.774598 | 1.099933 | 0.001894 | 0.001926 | 0.001757 |
| variant_subset.test | RUN | 0.284139 | 0.870111 | 1.166105 | 0.001856 | 0.001996 | 0.001812 |
| variant_valueless.test | RUN | 0.206929 | 0.539800 | 0.794069 | 0.001610 | 0.001909 | 0.001852 |
| variant_copy_construct_throw.test | RUN | 0.162385 | 0.396716 | 0.549455 | 0.001888 | 0.002028 | 0.001858 |
| variant_move_construct_throw.test | RUN | 0.160199 | 0.367340 | 0.567241 | 0.001889 | 0.001868 | 0.001833 |
| variant_convert_construct_throw.test | RUN | 0.167201 | 0.436682 | 0.564352 | 0.001751 | 0.001807 | 0.001847 |
| variant_copy_assign_throw.test | RUN | 0.161984 | 0.377176 | 0.541524 | 0.001576 | 0.001920 | 0.001882 |
| variant_move_assign_throw.test | RUN | 0.169363 | 0.387949 | 0.568567 | 0.001630 | 0.001921 | 0.001796 |
| variant_get_by_index_nx.test | RUN | 0.373722 | 1.837920 | 1.360734 | 0.001742 | 0.001916 | 0.001452 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.124780 | 0.305757 | 0.429856 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.380053 | 2.025434 | 1.505339 | 0.001776 | 0.001906 | 0.001860 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.117398 | 0.249501 | 0.337509 | — | — | — |
| variant_subset_nx.test | RUN | 0.298827 | 0.813456 | 1.200085 | 0.001814 | 0.001910 | 0.001789 |
| variant_hash.test | RUN | 0.284599 | 0.934403 | 1.091122 | 0.001483 | 0.001724 | 0.001791 |
| variant_trivial.test | RUN | 1.622564 | 5.165478 | 7.812297 | 0.001584 | 0.001682 | 0.001814 |
| variant_special.test | RUN | 1.527268 | 5.778058 | 8.490224 | 0.001918 | 0.002069 | 0.001854 |
| variant_visit_derived.test | RUN | 0.198294 | 0.495960 | 0.806215 | 0.001807 | 0.001893 | 0.001819 |
| variant_many_types.test | RUN | 1.608338 | 7.212453 | 11.290222 | 0.001627 | 0.001893 | 0.001818 |
| variant_visit_r.test | RUN | 0.660942 | 2.226344 | 4.135680 | 0.001654 | 0.001773 | 0.001859 |
| variant_derived_construct.test | COMPILE | 0.114547 | 0.261513 | 0.358678 | — | — | — |
| variant_visit_by_index.test | RUN | 0.253416 | 0.642074 | 1.004272 | 0.001828 | 0.001726 | 0.001756 |
| variant_ostream_insert.test | RUN | 0.175247 | 0.535024 | 0.672735 | 0.001884 | 0.001816 | 0.001654 |
| is_output_streamable.test | RUN | 0.226822 | 1.050203 | 0.889296 | 0.001768 | 0.001655 | 0.001868 |
| variant_json_value_from.test | RUN | 0.355260 | 0.882837 | 1.269783 | 0.001833 | 0.001822 | 0.001910 |
| variant_json_value_to.test | RUN | 0.428441 | 1.187468 | 1.607310 | 0.001819 | 0.001721 | 0.001776 |
| variant_uses_double_storage.test | COMPILE | 0.118457 | 0.256330 | 0.433464 | — | — | — |
| variant_derived_construct2.test | RUN | 0.160318 | 0.430508 | 0.612046 | 0.001500 | 0.001870 | 0.001768 |
| variant_visit_cx.test | COMPILE | 0.113004 | 0.254894 | 0.333591 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.113847 | 0.243297 | 0.354121 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.109274 | 0.244005 | 0.320236 | — | — | — |
| variant_index_type_126.test | RUN | 1.044107 | 2.460192 | 5.016782 | 0.001859 | 0.001788 | 0.001670 |
| variant_index_type_127.test | RUN | 1.049348 | 2.487153 | 5.153382 | 0.001500 | 0.001932 | 0.001745 |
| variant_index_type_128.test | RUN | 1.034438 | 2.514341 | 5.279817 | 0.001729 | 0.001946 | 0.001886 |
| variant_index_type_129.test | RUN | 1.039491 | 2.489770 | 5.272227 | 0.001851 | 0.001807 | 0.001661 |
| variant_index_type_254.test | RUN | 3.653061 | 9.138169 | 16.017013 | 0.001742 | 0.001602 | 0.001810 |
| variant_index_type_255.test | RUN | 3.723625 | 9.045221 | 15.878823 | 0.001791 | 0.001882 | 0.001686 |
| variant_index_type_256.test | RUN | 3.762640 | 9.292857 | 15.888599 | 0.001633 | 0.001940 | 0.001773 |
| variant_index_type_257.test | RUN | 3.762237 | 9.395063 | 15.972593 | 0.001831 | 0.001919 | 0.001798 |
| variant_default_construct_cx_2.test | COMPILE | 0.111666 | 0.258294 | 0.353331 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.115868 | 0.265830 | 0.353424 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.117950 | 0.272846 | 0.294811 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.115313 | 0.235735 | 0.346872 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.112260 | 0.243017 | 0.351280 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.113273 | 0.253413 | 0.346191 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.090570 | 0.215553 | 0.339775 | — | — | — |
| variant_issue_55.test | RUN | 0.174922 | 0.420124 | 0.476843 | 0.001343 | 0.001367 | 0.001249 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.980× | 0.974×, 0.985× | 1.020× |
| clang | 0.996× | 0.999×, 0.992× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001185s | 0.001193s | 0.001192s | byte equality observed |
| quick.test | 10 | 0.001163s | 0.000522s | 0.001144s | byte equality observed |
| variant_alternative.test | 10 | 0.001178s | 0.001204s | 0.001182s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001173s | 0.001213s | 0.001165s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001212s | 0.001221s | 0.001206s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001186s | 0.001182s | 0.001169s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001195s | 0.001234s | 0.001196s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001200s | 0.001158s | 0.001183s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001232s | 0.001197s | 0.001219s | byte equality observed |
| variant_default_construct.test | 10 | 0.001166s | 0.001177s | 0.001156s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001162s | 0.001178s | 0.001177s | byte equality observed |
| variant_destroy.test | 10 | 0.001183s | 0.001197s | 0.001185s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001195s | 0.001180s | 0.001165s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001179s | 0.001169s | 0.001163s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001175s | 0.001188s | 0.001156s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001246s | 0.001252s | 0.001231s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001192s | 0.001171s | 0.001166s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001219s | 0.001267s | 0.001229s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001185s | 0.001159s | 0.001165s | byte equality observed |
| variant_hash.test | 10 | 0.001185s | 0.001175s | 0.001199s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001152s | 0.001186s | 0.001161s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001175s | 0.001183s | 0.001161s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001174s | 0.001171s | 0.001139s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001163s | 0.001152s | 0.001177s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001160s | 0.001142s | 0.001143s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001166s | 0.001189s | 0.001163s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001168s | 0.001208s | 0.001185s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001191s | 0.001174s | 0.001183s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001158s | 0.001184s | 0.001154s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001185s | 0.001169s | 0.001186s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001176s | 0.001152s | 0.001171s | byte equality observed |
| variant_issue_55.test | 10 | 0.001184s | 0.001206s | 0.001173s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001247s | 0.001225s | 0.001169s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001223s | 0.001219s | 0.001207s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001172s | 0.001152s | 0.001190s | byte equality observed |
| variant_many_types.test | 10 | 0.001212s | 0.001163s | 0.001189s | byte equality observed |
| variant_move_assign.test | 10 | 0.001186s | 0.001178s | 0.001156s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001215s | 0.001186s | 0.001204s | byte equality observed |
| variant_move_construct.test | 10 | 0.001187s | 0.001197s | 0.001160s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001213s | 0.001188s | 0.001210s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001205s | 0.001207s | 0.001187s | byte equality observed |
| variant_size.test | 10 | 0.001178s | 0.001123s | 0.001159s | byte equality observed |
| variant_special.test | 10 | 0.001272s | 0.001208s | 0.001225s | byte equality observed |
| variant_subset.test | 10 | 0.001226s | 0.001245s | 0.001161s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001182s | 0.001162s | 0.001151s | byte equality observed |
| variant_swap.test | 10 | 0.001184s | 0.001180s | 0.001187s | byte equality observed |
| variant_trivial.test | 10 | 0.001237s | 0.001198s | 0.001196s | byte equality observed |
| variant_value_assign.test | 10 | 0.001177s | 0.001195s | 0.001179s | byte equality observed |
| variant_value_construct.test | 10 | 0.001190s | 0.001182s | 0.001173s | byte equality observed |
| variant_valueless.test | 10 | 0.001218s | 0.001213s | 0.001208s | byte equality observed |
| variant_visit.test | 10 | 0.001167s | 0.001199s | 0.001167s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001158s | 0.001177s | 0.001166s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001180s | 0.001160s | 0.001145s | byte equality observed |
| variant_visit_r.test | 10 | 0.001203s | 0.001143s | 0.001179s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
