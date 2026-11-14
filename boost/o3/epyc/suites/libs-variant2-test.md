# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.123458 | 0.276100 | 0.380351 | 0.001794 | 0.000819 | 0.001755 |
| variant_size.test | RUN | 0.197937 | 0.699576 | 0.703113 | 0.001805 | 0.001932 | 0.001790 |
| variant_alternative.test | RUN | 0.271816 | 2.003442 | 1.204326 | 0.001708 | 0.001936 | 0.001716 |
| variant_holds_alternative.test | RUN | 0.186154 | 0.473349 | 0.684106 | 0.001694 | 0.001950 | 0.001848 |
| variant_holds_alternative_cx.test | COMPILE | 0.121874 | 0.292973 | 0.406096 | — | — | — |
| variant_get_by_index.test | RUN | 0.303122 | 2.156418 | 1.430876 | 0.001659 | 0.001838 | 0.001892 |
| variant_get_by_index_cx.test | COMPILE | 0.125603 | 0.297608 | 0.431930 | — | — | — |
| variant_get_by_type.test | RUN | 0.305096 | 2.306814 | 1.542991 | 0.001628 | 0.001690 | 0.001740 |
| variant_get_by_type_cx.test | COMPILE | 0.115881 | 0.260412 | 0.355020 | — | — | — |
| variant_default_construct.test | RUN | 0.284582 | 1.714706 | 1.244036 | 0.001604 | 0.001770 | 0.001628 |
| variant_default_construct_cx.test | COMPILE | 0.129450 | 0.259202 | 0.425236 | — | — | — |
| variant_copy_construct.test | RUN | 0.454960 | 2.898016 | 2.253588 | 0.001578 | 0.001647 | 0.001758 |
| variant_copy_construct_cx.test | COMPILE | 0.139951 | 0.304281 | 0.467354 | — | — | — |
| variant_move_construct.test | RUN | 0.434364 | 2.438274 | 2.075350 | 0.001778 | 0.001837 | 0.001787 |
| variant_move_construct_cx.test | COMPILE | 0.112126 | 0.256065 | 0.360789 | — | — | — |
| variant_value_construct.test | RUN | 0.225885 | 0.651521 | 0.899985 | 0.001645 | 0.001840 | 0.001763 |
| variant_value_construct_cx.test | COMPILE | 0.129078 | 0.295946 | 0.435750 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.240278 | 0.638466 | 0.881184 | 0.001721 | 0.001687 | 0.001814 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.128777 | 0.292080 | 0.398928 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.237899 | 0.639160 | 0.905357 | 0.001834 | 0.001897 | 0.001653 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.130243 | 0.299918 | 0.399379 | — | — | — |
| variant_copy_assign.test | RUN | 0.307832 | 1.941089 | 1.367317 | 0.001762 | 0.001691 | 0.001652 |
| variant_copy_assign_cx.test | COMPILE | 0.112091 | 0.258934 | 0.356813 | — | — | — |
| variant_move_assign.test | RUN | 0.303289 | 1.953214 | 1.333326 | 0.002143 | 0.001888 | 0.001795 |
| variant_move_assign_cx.test | COMPILE | 0.110028 | 0.255384 | 0.358575 | — | — | — |
| variant_value_assign.test | RUN | 0.236810 | 0.695379 | 0.940917 | 0.001797 | 0.001679 | 0.001460 |
| variant_value_assign_cx.test | COMPILE | 0.111372 | 0.254448 | 0.356738 | — | — | — |
| variant_emplace_index.test | RUN | 0.259065 | 0.847895 | 1.051872 | 0.001734 | 0.001730 | 0.001843 |
| variant_emplace_index_cx.test | COMPILE | 0.110416 | 0.269132 | 0.309815 | — | — | — |
| variant_emplace_type.test | RUN | 0.239555 | 0.704153 | 0.952467 | 0.001721 | 0.001893 | 0.001854 |
| variant_emplace_type_cx.test | COMPILE | 0.112857 | 0.249713 | 0.338606 | — | — | — |
| variant_swap.test | RUN | 0.250261 | 0.862613 | 1.016403 | 0.001622 | 0.001742 | 0.001863 |
| variant_eq_ne.test | RUN | 0.205552 | 0.519823 | 0.751968 | 0.001752 | 0.001764 | 0.001515 |
| variant_eq_ne_cx.test | COMPILE | 0.115702 | 0.259932 | 0.331885 | — | — | — |
| variant_lt_gt.test | RUN | 0.213455 | 0.590456 | 0.777213 | 0.001801 | 0.001861 | 0.001834 |
| variant_lt_gt_cx.test | COMPILE | 0.113057 | 0.243951 | 0.357261 | — | — | — |
| variant_destroy.test | RUN | 0.215040 | 0.599515 | 0.810021 | 0.001852 | 0.001970 | 0.001742 |
| variant_visit.test | RUN | 1.221958 | 4.631657 | 12.542581 | 0.001420 | 0.001892 | 0.001834 |
| variant_convert_construct.test | RUN | 0.265291 | 0.791543 | 1.111816 | 0.001866 | 0.001966 | 0.001833 |
| variant_subset.test | RUN | 0.275583 | 0.862821 | 1.166305 | 0.001820 | 0.001953 | 0.001972 |
| variant_valueless.test | RUN | 0.212687 | 0.563048 | 0.789579 | 0.001865 | 0.001733 | 0.001836 |
| variant_copy_construct_throw.test | RUN | 0.159867 | 0.391208 | 0.537542 | 0.001772 | 0.001826 | 0.001890 |
| variant_move_construct_throw.test | RUN | 0.160767 | 0.379234 | 0.570229 | 0.001832 | 0.001910 | 0.001841 |
| variant_convert_construct_throw.test | RUN | 0.171164 | 0.441327 | 0.568881 | 0.001647 | 0.001658 | 0.001866 |
| variant_copy_assign_throw.test | RUN | 0.158209 | 0.395950 | 0.546047 | 0.001850 | 0.001904 | 0.001747 |
| variant_move_assign_throw.test | RUN | 0.164033 | 0.387790 | 0.540947 | 0.001551 | 0.001938 | 0.001803 |
| variant_get_by_index_nx.test | RUN | 0.372969 | 1.821612 | 1.374943 | 0.001839 | 0.001719 | 0.001752 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.127502 | 0.314439 | 0.394418 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.363298 | 2.109468 | 1.507017 | 0.001324 | 0.001908 | 0.001742 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.110892 | 0.266984 | 0.365462 | — | — | — |
| variant_subset_nx.test | RUN | 0.295623 | 0.864904 | 1.163771 | 0.001767 | 0.001810 | 0.001872 |
| variant_hash.test | RUN | 0.282651 | 0.944179 | 1.089490 | 0.001657 | 0.001906 | 0.001750 |
| variant_trivial.test | RUN | 1.652056 | 5.184600 | 8.179685 | 0.001568 | 0.002355 | 0.001682 |
| variant_special.test | RUN | 1.581445 | 5.880225 | 8.508947 | 0.001924 | 0.002048 | 0.001912 |
| variant_visit_derived.test | RUN | 0.201304 | 0.513412 | 0.813868 | 0.001874 | 0.001902 | 0.001812 |
| variant_many_types.test | RUN | 1.653318 | 7.453751 | 11.168984 | 0.001900 | 0.002024 | 0.001612 |
| variant_visit_r.test | RUN | 0.680700 | 2.244286 | 4.115104 | 0.001834 | 0.001910 | 0.001766 |
| variant_derived_construct.test | COMPILE | 0.115652 | 0.268813 | 0.357239 | — | — | — |
| variant_visit_by_index.test | RUN | 0.259919 | 0.683855 | 1.029123 | 0.001524 | 0.001862 | 0.001466 |
| variant_ostream_insert.test | RUN | 0.186087 | 0.566356 | 0.713043 | 0.001604 | 0.001895 | 0.001584 |
| is_output_streamable.test | RUN | 0.228382 | 1.149382 | 0.954549 | 0.001400 | 0.002072 | 0.001826 |
| variant_json_value_from.test | RUN | 0.365636 | 0.878841 | 1.212040 | 0.001895 | 0.001864 | 0.001745 |
| variant_json_value_to.test | RUN | 0.431773 | 1.193578 | 1.601097 | 0.001861 | 0.001970 | 0.001820 |
| variant_uses_double_storage.test | COMPILE | 0.121126 | 0.263768 | 0.432655 | — | — | — |
| variant_derived_construct2.test | RUN | 0.164766 | 0.437060 | 0.617979 | 0.001465 | 0.001952 | 0.001686 |
| variant_visit_cx.test | COMPILE | 0.112151 | 0.260218 | 0.329401 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.111300 | 0.255651 | 0.304403 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.110170 | 0.263094 | 0.358292 | — | — | — |
| variant_index_type_126.test | RUN | 1.034042 | 2.525061 | 5.168361 | 0.001867 | 0.001910 | 0.001647 |
| variant_index_type_127.test | RUN | 1.087591 | 2.529151 | 5.197032 | 0.001744 | 0.001918 | 0.001828 |
| variant_index_type_128.test | RUN | 1.072085 | 2.594989 | 5.278263 | 0.001526 | 0.001674 | 0.001827 |
| variant_index_type_129.test | RUN | 1.100833 | 2.545913 | 5.289176 | 0.001826 | 0.001828 | 0.001786 |
| variant_index_type_254.test | RUN | 3.701321 | 9.113748 | 15.639097 | 0.001732 | 0.001675 | 0.001870 |
| variant_index_type_255.test | RUN | 3.838142 | 9.046396 | 15.772754 | 0.001622 | 0.001939 | 0.001880 |
| variant_index_type_256.test | RUN | 3.718843 | 9.431905 | 16.151745 | 0.001800 | 0.001667 | 0.001818 |
| variant_index_type_257.test | RUN | 3.831427 | 9.509108 | 16.119466 | 0.001791 | 0.001421 | 0.001825 |
| variant_default_construct_cx_2.test | COMPILE | 0.110037 | 0.236662 | 0.386884 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.111873 | 0.242282 | 0.378801 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.110191 | 0.244236 | 0.319746 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.104780 | 0.246002 | 0.342274 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.110453 | 0.248032 | 0.306925 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.108349 | 0.231252 | 0.322524 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.089683 | 0.237052 | 0.264839 | — | — | — |
| variant_issue_55.test | RUN | 0.146096 | 0.432669 | 0.513387 | 0.001437 | 0.001358 | 0.001343 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.985× | 0.990×, 0.980× | 1.004× |
| clang | 0.999× | 1.009×, 0.989× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001154s | 0.001170s | 0.001151s | byte equality observed |
| quick.test | 10 | 0.001135s | 0.000507s | 0.001131s | byte equality observed |
| variant_alternative.test | 10 | 0.001161s | 0.001183s | 0.001134s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001174s | 0.001171s | 0.001131s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001204s | 0.001208s | 0.001202s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001160s | 0.001166s | 0.001156s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001202s | 0.001195s | 0.001179s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001187s | 0.001156s | 0.001147s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001181s | 0.001194s | 0.001173s | byte equality observed |
| variant_default_construct.test | 10 | 0.001158s | 0.001168s | 0.001146s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001162s | 0.001148s | 0.001127s | byte equality observed |
| variant_destroy.test | 10 | 0.001142s | 0.001172s | 0.001139s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001154s | 0.001170s | 0.001143s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001173s | 0.001177s | 0.001136s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001158s | 0.001145s | 0.001150s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001231s | 0.001251s | 0.001240s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001167s | 0.001159s | 0.001160s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001201s | 0.001228s | 0.001183s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001154s | 0.001193s | 0.001148s | byte equality observed |
| variant_hash.test | 10 | 0.001161s | 0.001175s | 0.001151s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001152s | 0.001175s | 0.001127s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001165s | 0.001152s | 0.001146s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001173s | 0.001170s | 0.001162s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001162s | 0.001141s | 0.001127s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001148s | 0.001155s | 0.001177s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001153s | 0.001158s | 0.001148s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001152s | 0.001164s | 0.001148s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001153s | 0.001156s | 0.001128s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001158s | 0.001127s | 0.001156s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001143s | 0.001157s | 0.001156s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001155s | 0.001138s | 0.001153s | byte equality observed |
| variant_issue_55.test | 10 | 0.001158s | 0.001182s | 0.001158s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001191s | 0.001196s | 0.001205s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001200s | 0.001182s | 0.001175s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001150s | 0.001143s | 0.001147s | byte equality observed |
| variant_many_types.test | 10 | 0.001186s | 0.001176s | 0.001155s | byte equality observed |
| variant_move_assign.test | 10 | 0.001162s | 0.001157s | 0.001152s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001178s | 0.001191s | 0.001177s | byte equality observed |
| variant_move_construct.test | 10 | 0.001155s | 0.001137s | 0.001155s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001175s | 0.001187s | 0.001174s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001172s | 0.001197s | 0.001182s | byte equality observed |
| variant_size.test | 10 | 0.001142s | 0.001148s | 0.001159s | byte equality observed |
| variant_special.test | 10 | 0.001231s | 0.001224s | 0.001229s | byte equality observed |
| variant_subset.test | 10 | 0.001179s | 0.001189s | 0.001201s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001142s | 0.001164s | 0.001162s | byte equality observed |
| variant_swap.test | 10 | 0.001148s | 0.001173s | 0.001166s | byte equality observed |
| variant_trivial.test | 10 | 0.001197s | 0.001197s | 0.001169s | byte equality observed |
| variant_value_assign.test | 10 | 0.001174s | 0.001167s | 0.001157s | byte equality observed |
| variant_value_construct.test | 10 | 0.001167s | 0.001172s | 0.001153s | byte equality observed |
| variant_valueless.test | 10 | 0.001190s | 0.001193s | 0.001196s | byte equality observed |
| variant_visit.test | 10 | 0.001176s | 0.001165s | 0.001153s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001147s | 0.001165s | 0.001174s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001142s | 0.001143s | 0.001143s | byte equality observed |
| variant_visit_r.test | 10 | 0.001175s | 0.001129s | 0.001164s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
