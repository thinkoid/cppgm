# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.141492 | 0.261573 | 0.384451 | 0.001965 | 0.000829 | 0.001792 |
| variant_size.test | RUN | 0.229809 | 0.642743 | 0.723914 | 0.002048 | 0.001951 | 0.001880 |
| variant_alternative.test | RUN | 0.309874 | 2.015518 | 1.174950 | 0.002104 | 0.001929 | 0.001680 |
| variant_holds_alternative.test | RUN | 0.233466 | 0.475055 | 0.730260 | 0.002173 | 0.001919 | 0.001643 |
| variant_holds_alternative_cx.test | COMPILE | 0.153658 | 0.290671 | 0.416890 | — | — | — |
| variant_get_by_index.test | RUN | 0.375133 | 2.160488 | 1.449968 | 0.002175 | 0.001984 | 0.001852 |
| variant_get_by_index_cx.test | COMPILE | 0.150912 | 0.291283 | 0.433487 | — | — | — |
| variant_get_by_type.test | RUN | 0.359805 | 2.306186 | 1.537980 | 0.001791 | 0.001973 | 0.001598 |
| variant_get_by_type_cx.test | COMPILE | 0.143085 | 0.264700 | 0.326491 | — | — | — |
| variant_default_construct.test | RUN | 0.341033 | 1.720334 | 1.308045 | 0.001912 | 0.001388 | 0.001764 |
| variant_default_construct_cx.test | COMPILE | 0.155977 | 0.278465 | 0.368914 | — | — | — |
| variant_copy_construct.test | RUN | 0.528956 | 2.851530 | 2.317031 | 0.001885 | 0.001862 | 0.001716 |
| variant_copy_construct_cx.test | COMPILE | 0.162223 | 0.318519 | 0.510288 | — | — | — |
| variant_move_construct.test | RUN | 0.505669 | 2.512853 | 2.088155 | 0.001864 | 0.001994 | 0.001738 |
| variant_move_construct_cx.test | COMPILE | 0.129729 | 0.264711 | 0.351834 | — | — | — |
| variant_value_construct.test | RUN | 0.264528 | 0.632351 | 0.880277 | 0.001848 | 0.001930 | 0.001909 |
| variant_value_construct_cx.test | COMPILE | 0.152080 | 0.292567 | 0.425602 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.276951 | 0.643770 | 0.902198 | 0.002074 | 0.001640 | 0.001845 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.146334 | 0.302181 | 0.412838 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.266966 | 0.641091 | 0.907245 | 0.002100 | 0.001796 | 0.001880 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.146455 | 0.302552 | 0.415020 | — | — | — |
| variant_copy_assign.test | RUN | 0.365950 | 1.977188 | 1.379502 | 0.002128 | 0.001689 | 0.001603 |
| variant_copy_assign_cx.test | COMPILE | 0.130774 | 0.253972 | 0.360658 | — | — | — |
| variant_move_assign.test | RUN | 0.367651 | 1.970959 | 1.421722 | 0.001903 | 0.001794 | 0.001624 |
| variant_move_assign_cx.test | COMPILE | 0.130053 | 0.254575 | 0.359508 | — | — | — |
| variant_value_assign.test | RUN | 0.275464 | 0.731892 | 1.000609 | 0.002101 | 0.001589 | 0.001477 |
| variant_value_assign_cx.test | COMPILE | 0.141398 | 0.248905 | 0.324603 | — | — | — |
| variant_emplace_index.test | RUN | 0.309168 | 0.853653 | 1.116922 | 0.002072 | 0.001910 | 0.001872 |
| variant_emplace_index_cx.test | COMPILE | 0.128357 | 0.251225 | 0.354220 | — | — | — |
| variant_emplace_type.test | RUN | 0.279614 | 0.717817 | 0.955914 | 0.002006 | 0.001946 | 0.001646 |
| variant_emplace_type_cx.test | COMPILE | 0.138481 | 0.248461 | 0.353781 | — | — | — |
| variant_swap.test | RUN | 0.297983 | 0.880055 | 1.056178 | 0.001645 | 0.001726 | 0.001421 |
| variant_eq_ne.test | RUN | 0.248860 | 0.539062 | 0.767927 | 0.002053 | 0.002182 | 0.001776 |
| variant_eq_ne_cx.test | COMPILE | 0.133486 | 0.264026 | 0.316064 | — | — | — |
| variant_lt_gt.test | RUN | 0.247835 | 0.621563 | 0.813438 | 0.002114 | 0.001755 | 0.001734 |
| variant_lt_gt_cx.test | COMPILE | 0.137467 | 0.242843 | 0.346079 | — | — | — |
| variant_destroy.test | RUN | 0.262517 | 0.605748 | 0.819735 | 0.002133 | 0.001979 | 0.001792 |
| variant_visit.test | RUN | 1.418885 | 4.704305 | 12.854812 | 0.002116 | 0.001875 | 0.001593 |
| variant_convert_construct.test | RUN | 0.316700 | 0.812684 | 1.134581 | 0.002202 | 0.001898 | 0.002108 |
| variant_subset.test | RUN | 0.329396 | 0.875468 | 1.187789 | 0.001952 | 0.001930 | 0.001940 |
| variant_valueless.test | RUN | 0.232104 | 0.602914 | 0.810872 | 0.001907 | 0.001764 | 0.001941 |
| variant_copy_construct_throw.test | RUN | 0.184564 | 0.409250 | 0.506087 | 0.002064 | 0.001891 | 0.001867 |
| variant_move_construct_throw.test | RUN | 0.185698 | 0.408211 | 0.570761 | 0.002110 | 0.001872 | 0.001781 |
| variant_convert_construct_throw.test | RUN | 0.201911 | 0.438419 | 0.577773 | 0.002210 | 0.001894 | 0.001656 |
| variant_copy_assign_throw.test | RUN | 0.182022 | 0.385631 | 0.517076 | 0.001955 | 0.001818 | 0.001814 |
| variant_move_assign_throw.test | RUN | 0.180564 | 0.420516 | 0.576860 | 0.002078 | 0.002002 | 0.001874 |
| variant_get_by_index_nx.test | RUN | 0.419048 | 1.844382 | 1.372739 | 0.002062 | 0.001772 | 0.001920 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.149619 | 0.294357 | 0.420697 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.415453 | 2.056330 | 1.553001 | 0.002168 | 0.001734 | 0.001961 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.130227 | 0.256002 | 0.351966 | — | — | — |
| variant_subset_nx.test | RUN | 0.339281 | 0.835143 | 1.149787 | 0.002136 | 0.001929 | 0.001848 |
| variant_hash.test | RUN | 0.326396 | 0.959178 | 1.134874 | 0.002216 | 0.001942 | 0.001864 |
| variant_trivial.test | RUN | 1.906762 | 5.629204 | 8.375816 | 0.002040 | 0.001862 | 0.001835 |
| variant_special.test | RUN | 1.839179 | 5.867667 | 8.621831 | 0.002203 | 0.002208 | 0.001977 |
| variant_visit_derived.test | RUN | 0.225743 | 0.507474 | 0.815984 | 0.002122 | 0.001922 | 0.001938 |
| variant_many_types.test | RUN | 1.842117 | 7.520824 | 11.523543 | 0.001732 | 0.001965 | 0.001882 |
| variant_visit_r.test | RUN | 0.759793 | 2.273804 | 4.332598 | 0.002250 | 0.002002 | 0.001642 |
| variant_derived_construct.test | COMPILE | 0.132959 | 0.270350 | 0.347486 | — | — | — |
| variant_visit_by_index.test | RUN | 0.297082 | 0.692556 | 1.055616 | 0.002119 | 0.001898 | 0.002026 |
| variant_ostream_insert.test | RUN | 0.216149 | 0.552700 | 0.730016 | 0.001782 | 0.001645 | 0.001802 |
| is_output_streamable.test | RUN | 0.269871 | 1.086237 | 0.951208 | 0.001840 | 0.001730 | 0.001912 |
| variant_json_value_from.test | RUN | 0.403970 | 0.912846 | 1.238737 | 0.002057 | 0.001938 | 0.001989 |
| variant_json_value_to.test | RUN | 0.485886 | 1.224363 | 1.593163 | 0.002152 | 0.001770 | 0.001850 |
| variant_uses_double_storage.test | COMPILE | 0.139288 | 0.257638 | 0.408342 | — | — | — |
| variant_derived_construct2.test | RUN | 0.184854 | 0.426652 | 0.627271 | 0.001626 | 0.001916 | 0.001603 |
| variant_visit_cx.test | COMPILE | 0.123942 | 0.259192 | 0.331826 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.131619 | 0.249135 | 0.368869 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.129872 | 0.245089 | 0.363049 | — | — | — |
| variant_index_type_126.test | RUN | 1.195663 | 2.525020 | 5.234199 | 0.002035 | 0.002050 | 0.001794 |
| variant_index_type_127.test | RUN | 1.197675 | 2.583844 | 5.292213 | 0.002018 | 0.001781 | 0.001678 |
| variant_index_type_128.test | RUN | 1.220163 | 2.576348 | 5.363792 | 0.001974 | 0.001856 | 0.001622 |
| variant_index_type_129.test | RUN | 1.230004 | 2.576088 | 5.324094 | 0.002154 | 0.001889 | 0.001529 |
| variant_index_type_254.test | RUN | 4.061309 | 9.527811 | 15.916730 | 0.001893 | 0.001968 | 0.001837 |
| variant_index_type_255.test | RUN | 4.129307 | 9.502807 | 16.055607 | 0.001875 | 0.001772 | 0.001480 |
| variant_index_type_256.test | RUN | 4.112559 | 9.618061 | 16.383180 | 0.001656 | 0.001642 | 0.001464 |
| variant_index_type_257.test | RUN | 4.183184 | 9.647784 | 16.339150 | 0.001646 | 0.001783 | 0.001260 |
| variant_default_construct_cx_2.test | COMPILE | 0.124397 | 0.275777 | 0.303104 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.118412 | 0.260550 | 0.328415 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.118247 | 0.259465 | 0.333302 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.125868 | 0.252861 | 0.349730 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.119975 | 0.247389 | 0.355986 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.121667 | 0.246842 | 0.354322 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.107517 | 0.217344 | 0.348550 | — | — | — |
| variant_issue_55.test | RUN | 0.189577 | 0.424170 | 0.486169 | 0.001621 | 0.001450 | 0.001358 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.991×, 1.006× | 1.011× |
| clang | 1.004× | 1.004×, 1.005× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001135s | 0.001182s | 0.001141s | byte equality observed |
| quick.test | 10 | 0.001118s | 0.000505s | 0.001147s | byte equality observed |
| variant_alternative.test | 10 | 0.001162s | 0.001175s | 0.001141s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001159s | 0.001170s | 0.001158s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001187s | 0.001230s | 0.001200s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001160s | 0.001171s | 0.001158s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001192s | 0.001200s | 0.001222s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001148s | 0.001153s | 0.001163s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001170s | 0.001204s | 0.001180s | byte equality observed |
| variant_default_construct.test | 10 | 0.001172s | 0.001173s | 0.001155s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001180s | 0.001169s | 0.001141s | byte equality observed |
| variant_destroy.test | 10 | 0.001144s | 0.001147s | 0.001143s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001177s | 0.001177s | 0.001159s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001166s | 0.001182s | 0.001150s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001148s | 0.001174s | 0.001160s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001241s | 0.001265s | 0.001226s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001174s | 0.001156s | 0.001158s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001224s | 0.001268s | 0.001210s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001172s | 0.001189s | 0.001187s | byte equality observed |
| variant_hash.test | 10 | 0.001152s | 0.001211s | 0.001178s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001158s | 0.001192s | 0.001150s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001188s | 0.001173s | 0.001152s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001168s | 0.001151s | 0.001180s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001161s | 0.001173s | 0.001178s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001135s | 0.001173s | 0.001174s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001161s | 0.001142s | 0.001184s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001148s | 0.001152s | 0.001154s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001154s | 0.001152s | 0.001158s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001156s | 0.001149s | 0.001154s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001162s | 0.001149s | 0.001168s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001159s | 0.001163s | 0.001176s | byte equality observed |
| variant_issue_55.test | 10 | 0.001177s | 0.001166s | 0.001174s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001198s | 0.001213s | 0.001197s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001212s | 0.001209s | 0.001200s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001166s | 0.001166s | 0.001130s | byte equality observed |
| variant_many_types.test | 10 | 0.001185s | 0.001211s | 0.001175s | byte equality observed |
| variant_move_assign.test | 10 | 0.001177s | 0.001161s | 0.001134s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001187s | 0.001195s | 0.001187s | byte equality observed |
| variant_move_construct.test | 10 | 0.001158s | 0.001174s | 0.001171s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001217s | 0.001195s | 0.001185s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001169s | 0.001203s | 0.001183s | byte equality observed |
| variant_size.test | 10 | 0.001153s | 0.001183s | 0.001170s | byte equality observed |
| variant_special.test | 10 | 0.001216s | 0.001231s | 0.001228s | byte equality observed |
| variant_subset.test | 10 | 0.001205s | 0.001228s | 0.001187s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001167s | 0.001152s | 0.001149s | byte equality observed |
| variant_swap.test | 10 | 0.001164s | 0.001183s | 0.001167s | byte equality observed |
| variant_trivial.test | 10 | 0.001193s | 0.001240s | 0.001192s | byte equality observed |
| variant_value_assign.test | 10 | 0.001152s | 0.001161s | 0.001158s | byte equality observed |
| variant_value_construct.test | 10 | 0.001161s | 0.001168s | 0.001156s | byte equality observed |
| variant_valueless.test | 10 | 0.001203s | 0.001224s | 0.001203s | byte equality observed |
| variant_visit.test | 10 | 0.001147s | 0.001162s | 0.001179s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001156s | 0.001144s | 0.001147s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001156s | 0.001132s | 0.001150s | byte equality observed |
| variant_visit_r.test | 10 | 0.001169s | 0.001176s | 0.001166s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
