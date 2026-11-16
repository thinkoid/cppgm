# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.118432 | 0.246158 | 0.376820 | 0.001747 | 0.000765 | 0.001711 |
| variant_size.test | RUN | 0.198345 | 0.596723 | 0.714630 | 0.001747 | 0.001914 | 0.001747 |
| variant_alternative.test | RUN | 0.254448 | 1.901673 | 1.169447 | 0.001815 | 0.001866 | 0.001556 |
| variant_holds_alternative.test | RUN | 0.185910 | 0.462798 | 0.712471 | 0.001719 | 0.001803 | 0.001740 |
| variant_holds_alternative_cx.test | COMPILE | 0.126387 | 0.273695 | 0.411337 | — | — | — |
| variant_get_by_index.test | RUN | 0.312492 | 2.093591 | 1.428612 | 0.001908 | 0.001935 | 0.001904 |
| variant_get_by_index_cx.test | COMPILE | 0.125404 | 0.291132 | 0.434069 | — | — | — |
| variant_get_by_type.test | RUN | 0.306324 | 2.238563 | 1.525265 | 0.001891 | 0.001799 | 0.001656 |
| variant_get_by_type_cx.test | COMPILE | 0.118885 | 0.246885 | 0.360045 | — | — | — |
| variant_default_construct.test | RUN | 0.294334 | 1.662949 | 1.248442 | 0.001784 | 0.001748 | 0.001726 |
| variant_default_construct_cx.test | COMPILE | 0.128241 | 0.266577 | 0.420214 | — | — | — |
| variant_copy_construct.test | RUN | 0.445420 | 2.773897 | 2.202819 | 0.001516 | 0.001752 | 0.001772 |
| variant_copy_construct_cx.test | COMPILE | 0.139362 | 0.307890 | 0.493881 | — | — | — |
| variant_move_construct.test | RUN | 0.412925 | 2.423854 | 2.010268 | 0.001697 | 0.001747 | 0.001707 |
| variant_move_construct_cx.test | COMPILE | 0.113348 | 0.253931 | 0.363487 | — | — | — |
| variant_value_construct.test | RUN | 0.228011 | 0.619629 | 0.885316 | 0.001538 | 0.001777 | 0.001556 |
| variant_value_construct_cx.test | COMPILE | 0.133964 | 0.282831 | 0.420950 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.229940 | 0.620506 | 0.916816 | 0.001826 | 0.001764 | 0.001832 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.125993 | 0.288967 | 0.433797 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.227214 | 0.610175 | 0.869106 | 0.001606 | 0.001746 | 0.001886 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.127055 | 0.289302 | 0.388230 | — | — | — |
| variant_copy_assign.test | RUN | 0.313419 | 1.925257 | 1.400664 | 0.001662 | 0.001521 | 0.001828 |
| variant_copy_assign_cx.test | COMPILE | 0.111138 | 0.241606 | 0.345769 | — | — | — |
| variant_move_assign.test | RUN | 0.308198 | 1.911997 | 1.432199 | 0.001549 | 0.001875 | 0.001623 |
| variant_move_assign_cx.test | COMPILE | 0.110968 | 0.251369 | 0.364542 | — | — | — |
| variant_value_assign.test | RUN | 0.231282 | 0.687941 | 0.992916 | 0.001762 | 0.001797 | 0.001718 |
| variant_value_assign_cx.test | COMPILE | 0.113798 | 0.232183 | 0.344017 | — | — | — |
| variant_emplace_index.test | RUN | 0.264255 | 0.799696 | 1.031714 | 0.001847 | 0.001772 | 0.001710 |
| variant_emplace_index_cx.test | COMPILE | 0.121230 | 0.241020 | 0.311934 | — | — | — |
| variant_emplace_type.test | RUN | 0.239567 | 0.685682 | 0.964536 | 0.001816 | 0.001848 | 0.001636 |
| variant_emplace_type_cx.test | COMPILE | 0.111488 | 0.261591 | 0.362452 | — | — | — |
| variant_swap.test | RUN | 0.246552 | 0.873339 | 1.002833 | 0.001808 | 0.001698 | 0.001816 |
| variant_eq_ne.test | RUN | 0.199827 | 0.543664 | 0.735723 | 0.001604 | 0.001536 | 0.001719 |
| variant_eq_ne_cx.test | COMPILE | 0.110843 | 0.255808 | 0.345724 | — | — | — |
| variant_lt_gt.test | RUN | 0.203808 | 0.624697 | 0.766004 | 0.001634 | 0.001866 | 0.001807 |
| variant_lt_gt_cx.test | COMPILE | 0.112289 | 0.237361 | 0.331292 | — | — | — |
| variant_destroy.test | RUN | 0.208487 | 0.585558 | 0.808039 | 0.001866 | 0.001876 | 0.001865 |
| variant_visit.test | RUN | 1.285625 | 4.536407 | 12.520951 | 0.001700 | 0.001697 | 0.001744 |
| variant_convert_construct.test | RUN | 0.266403 | 0.766671 | 1.093606 | 0.001742 | 0.001913 | 0.001776 |
| variant_subset.test | RUN | 0.264229 | 0.838801 | 1.171177 | 0.001760 | 0.001910 | 0.001788 |
| variant_valueless.test | RUN | 0.199712 | 0.547121 | 0.826550 | 0.001532 | 0.001810 | 0.001695 |
| variant_copy_construct_throw.test | RUN | 0.165686 | 0.398073 | 0.570518 | 0.001796 | 0.001890 | 0.001821 |
| variant_move_construct_throw.test | RUN | 0.160317 | 0.393256 | 0.542629 | 0.001652 | 0.001892 | 0.001852 |
| variant_convert_construct_throw.test | RUN | 0.163859 | 0.400758 | 0.576356 | 0.001814 | 0.001840 | 0.001632 |
| variant_copy_assign_throw.test | RUN | 0.158399 | 0.371057 | 0.572929 | 0.001888 | 0.001770 | 0.001843 |
| variant_move_assign_throw.test | RUN | 0.159955 | 0.392714 | 0.539345 | 0.001852 | 0.001894 | 0.001650 |
| variant_get_by_index_nx.test | RUN | 0.362153 | 1.784495 | 1.387986 | 0.001766 | 0.001814 | 0.001697 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.121517 | 0.294734 | 0.424034 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.359318 | 2.040309 | 1.501927 | 0.001777 | 0.001689 | 0.001764 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.110402 | 0.258305 | 0.349185 | — | — | — |
| variant_subset_nx.test | RUN | 0.283670 | 0.846797 | 1.202467 | 0.001637 | 0.001806 | 0.001727 |
| variant_hash.test | RUN | 0.284512 | 0.912500 | 1.060749 | 0.001778 | 0.001909 | 0.001812 |
| variant_trivial.test | RUN | 1.572993 | 5.051324 | 8.202654 | 0.001881 | 0.001871 | 0.001766 |
| variant_special.test | RUN | 1.548672 | 5.466248 | 8.359749 | 0.001880 | 0.002042 | 0.001834 |
| variant_visit_derived.test | RUN | 0.198108 | 0.464940 | 0.807843 | 0.001893 | 0.001810 | 0.001774 |
| variant_many_types.test | RUN | 1.648747 | 7.371184 | 11.193441 | 0.001576 | 0.001795 | 0.001924 |
| variant_visit_r.test | RUN | 0.727782 | 2.320783 | 4.208569 | 0.001712 | 0.001742 | 0.001569 |
| variant_derived_construct.test | COMPILE | 0.115654 | 0.234872 | 0.370485 | — | — | — |
| variant_visit_by_index.test | RUN | 0.252914 | 0.621086 | 0.972408 | 0.001624 | 0.001861 | 0.001406 |
| variant_ostream_insert.test | RUN | 0.181081 | 0.550184 | 0.697424 | 0.001798 | 0.001854 | 0.001889 |
| is_output_streamable.test | RUN | 0.230338 | 1.108941 | 0.946727 | 0.001850 | 0.001928 | 0.001756 |
| variant_json_value_from.test | RUN | 0.356666 | 0.833760 | 1.284484 | 0.001918 | 0.002436 | 0.001805 |
| variant_json_value_to.test | RUN | 0.417746 | 1.157431 | 1.611130 | 0.001846 | 0.001879 | 0.001806 |
| variant_uses_double_storage.test | COMPILE | 0.121477 | 0.272612 | 0.424683 | — | — | — |
| variant_derived_construct2.test | RUN | 0.160957 | 0.412717 | 0.613387 | 0.001500 | 0.001830 | 0.001824 |
| variant_visit_cx.test | COMPILE | 0.111249 | 0.251186 | 0.327944 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.115358 | 0.258814 | 0.366130 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.110666 | 0.254413 | 0.301005 | — | — | — |
| variant_index_type_126.test | RUN | 1.048359 | 2.452586 | 5.157256 | 0.001747 | 0.001671 | 0.001386 |
| variant_index_type_127.test | RUN | 0.992067 | 2.434092 | 5.233565 | 0.001583 | 0.001851 | 0.001742 |
| variant_index_type_128.test | RUN | 1.053435 | 2.563785 | 5.284606 | 0.001744 | 0.001707 | 0.001789 |
| variant_index_type_129.test | RUN | 1.016155 | 2.532686 | 5.233788 | 0.001805 | 0.001727 | 0.001787 |
| variant_index_type_254.test | RUN | 3.457825 | 9.135689 | 15.870929 | 0.001738 | 0.001940 | 0.001814 |
| variant_index_type_255.test | RUN | 3.459959 | 9.033626 | 16.073418 | 0.001797 | 0.002018 | 0.001699 |
| variant_index_type_256.test | RUN | 3.630719 | 9.360418 | 16.023801 | 0.001558 | 0.001726 | 0.001628 |
| variant_index_type_257.test | RUN | 3.599417 | 9.364273 | 16.020036 | 0.001541 | 0.001912 | 0.001649 |
| variant_default_construct_cx_2.test | COMPILE | 0.106719 | 0.278043 | 0.360498 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.107869 | 0.275778 | 0.329755 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.114694 | 0.239884 | 0.338738 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.111730 | 0.265983 | 0.339831 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.110769 | 0.245296 | 0.348809 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.111149 | 0.250287 | 0.347999 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.109823 | 0.201680 | 0.286837 | — | — | — |
| variant_issue_55.test | RUN | 0.151465 | 0.428534 | 0.505294 | 0.001306 | 0.001379 | 0.001288 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.993×, 1.001× | 1.007× |
| clang | 0.984× | 0.985×, 0.984× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001157s | 0.001169s | 0.001162s | byte equality observed |
| quick.test | 10 | 0.001137s | 0.000507s | 0.001145s | byte equality observed |
| variant_alternative.test | 10 | 0.001157s | 0.001195s | 0.001182s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001162s | 0.001162s | 0.001159s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001195s | 0.001213s | 0.001183s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001160s | 0.001168s | 0.001182s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001201s | 0.001202s | 0.001193s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001182s | 0.001167s | 0.001179s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001216s | 0.001184s | 0.001214s | byte equality observed |
| variant_default_construct.test | 10 | 0.001158s | 0.001167s | 0.001172s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001159s | 0.001164s | 0.001161s | byte equality observed |
| variant_destroy.test | 10 | 0.001167s | 0.001148s | 0.001135s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001164s | 0.001153s | 0.001173s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001182s | 0.001184s | 0.001187s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001157s | 0.001150s | 0.001150s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001235s | 0.001245s | 0.001234s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001162s | 0.001167s | 0.001161s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001228s | 0.001233s | 0.001203s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001168s | 0.001177s | 0.001170s | byte equality observed |
| variant_hash.test | 10 | 0.001149s | 0.001185s | 0.001152s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001155s | 0.001156s | 0.001140s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001171s | 0.001166s | 0.001161s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001158s | 0.001168s | 0.001156s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001161s | 0.001151s | 0.001145s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001171s | 0.001146s | 0.001135s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001161s | 0.001147s | 0.001165s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001161s | 0.001144s | 0.001142s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001150s | 0.001159s | 0.001105s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001173s | 0.001169s | 0.001155s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001147s | 0.001162s | 0.001156s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001163s | 0.001178s | 0.001161s | byte equality observed |
| variant_issue_55.test | 10 | 0.001178s | 0.001201s | 0.001157s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001215s | 0.001221s | 0.001194s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001225s | 0.001229s | 0.001184s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001166s | 0.001150s | 0.001165s | byte equality observed |
| variant_many_types.test | 10 | 0.001200s | 0.001195s | 0.001184s | byte equality observed |
| variant_move_assign.test | 10 | 0.001185s | 0.001179s | 0.001168s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001207s | 0.001194s | 0.001183s | byte equality observed |
| variant_move_construct.test | 10 | 0.001182s | 0.001195s | 0.001154s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001197s | 0.001205s | 0.001157s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001207s | 0.001178s | 0.001185s | byte equality observed |
| variant_size.test | 10 | 0.001167s | 0.001168s | 0.001154s | byte equality observed |
| variant_special.test | 10 | 0.001265s | 0.001215s | 0.001196s | byte equality observed |
| variant_subset.test | 10 | 0.001214s | 0.001188s | 0.001179s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001158s | 0.001154s | 0.001164s | byte equality observed |
| variant_swap.test | 10 | 0.001184s | 0.001164s | 0.001158s | byte equality observed |
| variant_trivial.test | 10 | 0.001212s | 0.001213s | 0.001183s | byte equality observed |
| variant_value_assign.test | 10 | 0.001175s | 0.001179s | 0.001149s | byte equality observed |
| variant_value_construct.test | 10 | 0.001170s | 0.001191s | 0.001145s | byte equality observed |
| variant_valueless.test | 10 | 0.001205s | 0.001210s | 0.001208s | byte equality observed |
| variant_visit.test | 10 | 0.001175s | 0.001126s | 0.001165s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001162s | 0.001154s | 0.001156s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001168s | 0.001148s | 0.001167s | byte equality observed |
| variant_visit_r.test | 10 | 0.001155s | 0.001169s | 0.001142s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
