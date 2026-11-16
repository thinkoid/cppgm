# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.077304 | 0.172628 | 0.204879 | 0.001054 | 0.000440 | 0.001040 |
| variant_size.test | RUN | 0.131723 | 0.426341 | 0.414987 | 0.000961 | 0.001104 | 0.001142 |
| variant_alternative.test | RUN | 0.181323 | 1.470127 | 0.734834 | 0.001054 | 0.001095 | 0.001041 |
| variant_holds_alternative.test | RUN | 0.125221 | 0.317421 | 0.392989 | 0.001046 | 0.001166 | 0.001137 |
| variant_holds_alternative_cx.test | COMPILE | 0.080097 | 0.181913 | 0.218278 | — | — | — |
| variant_get_by_index.test | RUN | 0.208989 | 1.597745 | 0.897256 | 0.001108 | 0.001193 | 0.001148 |
| variant_get_by_index_cx.test | COMPILE | 0.082477 | 0.192803 | 0.234477 | — | — | — |
| variant_get_by_type.test | RUN | 0.218828 | 1.726698 | 0.949740 | 0.001033 | 0.001092 | 0.001094 |
| variant_get_by_type_cx.test | COMPILE | 0.076800 | 0.165573 | 0.195504 | — | — | — |
| variant_default_construct.test | RUN | 0.200270 | 1.253134 | 0.778484 | 0.001003 | 0.001071 | 0.001019 |
| variant_default_construct_cx.test | COMPILE | 0.081794 | 0.185484 | 0.224109 | — | — | — |
| variant_copy_construct.test | RUN | 0.317971 | 2.133461 | 1.450256 | 0.001047 | 0.001024 | 0.001003 |
| variant_copy_construct_cx.test | COMPILE | 0.093965 | 0.223053 | 0.271558 | — | — | — |
| variant_move_construct.test | RUN | 0.300320 | 1.789070 | 1.265912 | 0.001036 | 0.001167 | 0.001109 |
| variant_move_construct_cx.test | COMPILE | 0.074374 | 0.166691 | 0.194027 | — | — | — |
| variant_value_construct.test | RUN | 0.154170 | 0.446008 | 0.510585 | 0.001034 | 0.001150 | 0.000966 |
| variant_value_construct_cx.test | COMPILE | 0.083977 | 0.196660 | 0.240857 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.160350 | 0.441354 | 0.537900 | 0.001058 | 0.001153 | 0.001105 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.084640 | 0.198406 | 0.242399 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.155871 | 0.441334 | 0.520407 | 0.001111 | 0.001210 | 0.001054 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.083773 | 0.195829 | 0.245218 | — | — | — |
| variant_copy_assign.test | RUN | 0.218693 | 1.461751 | 0.844145 | 0.001054 | 0.001129 | 0.001119 |
| variant_copy_assign_cx.test | COMPILE | 0.074815 | 0.170136 | 0.198189 | — | — | — |
| variant_move_assign.test | RUN | 0.216184 | 1.442724 | 0.851230 | 0.001040 | 0.001048 | 0.001019 |
| variant_move_assign_cx.test | COMPILE | 0.076273 | 0.170336 | 0.195612 | — | — | — |
| variant_value_assign.test | RUN | 0.160763 | 0.483814 | 0.568508 | 0.001032 | 0.001141 | 0.000955 |
| variant_value_assign_cx.test | COMPILE | 0.073235 | 0.174840 | 0.193300 | — | — | — |
| variant_emplace_index.test | RUN | 0.184276 | 0.567610 | 0.630152 | 0.001036 | 0.000998 | 0.001025 |
| variant_emplace_index_cx.test | COMPILE | 0.075051 | 0.174306 | 0.196160 | — | — | — |
| variant_emplace_type.test | RUN | 0.164830 | 0.484945 | 0.555030 | 0.001033 | 0.001063 | 0.001068 |
| variant_emplace_type_cx.test | COMPILE | 0.075238 | 0.175786 | 0.196365 | — | — | — |
| variant_swap.test | RUN | 0.170205 | 0.607547 | 0.602496 | 0.001121 | 0.000956 | 0.000967 |
| variant_eq_ne.test | RUN | 0.136504 | 0.357017 | 0.428578 | 0.001060 | 0.001047 | 0.001101 |
| variant_eq_ne_cx.test | COMPILE | 0.074477 | 0.167847 | 0.200363 | — | — | — |
| variant_lt_gt.test | RUN | 0.140275 | 0.419162 | 0.445558 | 0.001072 | 0.001226 | 0.000983 |
| variant_lt_gt_cx.test | COMPILE | 0.075068 | 0.166664 | 0.195310 | — | — | — |
| variant_destroy.test | RUN | 0.142889 | 0.423017 | 0.458235 | 0.001090 | 0.001108 | 0.001080 |
| variant_visit.test | RUN | 0.913841 | 3.046778 | 7.943885 | 0.001045 | 0.001085 | 0.001156 |
| variant_convert_construct.test | RUN | 0.182247 | 0.553765 | 0.646230 | 0.001091 | 0.001036 | 0.001035 |
| variant_subset.test | RUN | 0.183136 | 0.568805 | 0.680851 | 0.001066 | 0.001060 | 0.001020 |
| variant_valueless.test | RUN | 0.134672 | 0.364065 | 0.448604 | 0.001073 | 0.001154 | 0.001029 |
| variant_copy_construct_throw.test | RUN | 0.106449 | 0.281005 | 0.320686 | 0.001075 | 0.001037 | 0.001079 |
| variant_move_construct_throw.test | RUN | 0.106949 | 0.281892 | 0.317340 | 0.001026 | 0.001104 | 0.001041 |
| variant_convert_construct_throw.test | RUN | 0.113024 | 0.315675 | 0.339422 | 0.001089 | 0.001145 | 0.001002 |
| variant_copy_assign_throw.test | RUN | 0.104427 | 0.261069 | 0.319822 | 0.001105 | 0.001114 | 0.000996 |
| variant_move_assign_throw.test | RUN | 0.106900 | 0.265053 | 0.318440 | 0.001083 | 0.001089 | 0.001041 |
| variant_get_by_index_nx.test | RUN | 0.266309 | 1.358673 | 0.856333 | 0.001069 | 0.001263 | 0.001112 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.082617 | 0.188651 | 0.231287 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.265855 | 1.512211 | 0.906269 | 0.001140 | 0.001106 | 0.000960 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.074148 | 0.167006 | 0.192847 | — | — | — |
| variant_subset_nx.test | RUN | 0.196810 | 0.569491 | 0.700463 | 0.001055 | 0.001165 | 0.000989 |
| variant_hash.test | RUN | 0.188495 | 0.650817 | 0.615102 | 0.001115 | 0.001068 | 0.000986 |
| variant_trivial.test | RUN | 1.062508 | 3.751988 | 4.670818 | 0.001092 | 0.001197 | 0.001066 |
| variant_special.test | RUN | 1.039380 | 4.008062 | 4.994972 | 0.001244 | 0.001242 | 0.001118 |
| variant_visit_derived.test | RUN | 0.126592 | 0.345812 | 0.462194 | 0.001044 | 0.001097 | 0.001040 |
| variant_many_types.test | RUN | 1.190135 | 4.904387 | 6.548911 | 0.001095 | 0.001087 | 0.001348 |
| variant_visit_r.test | RUN | 0.499067 | 1.529604 | 2.570546 | 0.001091 | 0.001096 | 0.001114 |
| variant_derived_construct.test | COMPILE | 0.076774 | 0.179925 | 0.210373 | — | — | — |
| variant_visit_by_index.test | RUN | 0.174910 | 0.460655 | 0.606062 | 0.001052 | 0.001164 | 0.001070 |
| variant_ostream_insert.test | RUN | 0.128029 | 0.374695 | 0.435988 | 0.001150 | 0.001139 | 0.001021 |
| is_output_streamable.test | RUN | 0.156874 | 0.787063 | 0.584229 | 0.001100 | 0.001203 | 0.001074 |
| variant_json_value_from.test | RUN | 0.241430 | 0.607684 | 0.704032 | 0.001192 | 0.001138 | 0.001156 |
| variant_json_value_to.test | RUN | 0.302049 | 0.861594 | 0.981215 | 0.001190 | 0.001203 | 0.001204 |
| variant_uses_double_storage.test | COMPILE | 0.084154 | 0.188092 | 0.235325 | — | — | — |
| variant_derived_construct2.test | RUN | 0.111092 | 0.293858 | 0.348374 | 0.000999 | 0.001102 | 0.001231 |
| variant_visit_cx.test | COMPILE | 0.075660 | 0.172581 | 0.192921 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.076267 | 0.168890 | 0.194368 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.076776 | 0.176111 | 0.202678 | — | — | — |
| variant_index_type_126.test | RUN | 0.710828 | 1.558872 | 2.865841 | 0.000975 | 0.001038 | 0.001050 |
| variant_index_type_127.test | RUN | 0.708740 | 1.607897 | 2.978275 | 0.001176 | 0.001121 | 0.001079 |
| variant_index_type_128.test | RUN | 0.729803 | 1.639761 | 2.944903 | 0.001039 | 0.001174 | 0.001126 |
| variant_index_type_129.test | RUN | 0.730320 | 1.595747 | 2.924212 | 0.001020 | 0.001108 | 0.001092 |
| variant_index_type_254.test | RUN | 2.542732 | 5.878387 | 9.423861 | 0.001020 | 0.001159 | 0.001065 |
| variant_index_type_255.test | RUN | 2.545530 | 5.887977 | 9.479233 | 0.001106 | 0.001125 | 0.000950 |
| variant_index_type_256.test | RUN | 2.579777 | 5.926588 | 9.521497 | 0.001090 | 0.000995 | 0.001003 |
| variant_index_type_257.test | RUN | 2.591850 | 6.036096 | 9.626398 | 0.001126 | 0.001077 | 0.001113 |
| variant_default_construct_cx_2.test | COMPILE | 0.078815 | 0.174813 | 0.208328 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.078228 | 0.174504 | 0.192636 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.074235 | 0.176968 | 0.193390 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.077520 | 0.163781 | 0.206504 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.079146 | 0.165561 | 0.205261 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.077403 | 0.171047 | 0.207761 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.076825 | 0.170700 | 0.206131 | — | — | — |
| variant_issue_55.test | RUN | 0.151519 | 0.424670 | 0.470360 | 0.001025 | 0.001220 | 0.001239 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.992×, 0.990× | 1.005× |
| clang | 0.995× | 0.994×, 0.996× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 9 | 0.000953s | 0.000948s | 0.000943s | byte equality observed |
| quick.test | 10 | 0.000924s | 0.000451s | 0.000929s | byte equality observed |
| variant_alternative.test | 10 | 0.000947s | 0.000947s | 0.000944s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000950s | 0.000944s | 0.000948s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000972s | 0.000975s | 0.000986s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000951s | 0.000961s | 0.000956s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000977s | 0.000974s | 0.000972s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000954s | 0.000957s | 0.000950s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000980s | 0.000976s | 0.000972s | byte equality observed |
| variant_default_construct.test | 10 | 0.000965s | 0.000952s | 0.000950s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000950s | 0.000944s | 0.000947s | byte equality observed |
| variant_destroy.test | 10 | 0.000943s | 0.000954s | 0.000947s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000953s | 0.000960s | 0.000949s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000956s | 0.000965s | 0.000948s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000947s | 0.000955s | 0.000943s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001008s | 0.001032s | 0.001004s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000952s | 0.000952s | 0.000944s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000996s | 0.001005s | 0.000987s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000954s | 0.000956s | 0.000952s | byte equality observed |
| variant_hash.test | 10 | 0.000952s | 0.000953s | 0.000946s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000949s | 0.000957s | 0.000932s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000959s | 0.000943s | 0.000952s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000962s | 0.000953s | 0.000950s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000946s | 0.000954s | 0.000945s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000941s | 0.000949s | 0.000954s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000943s | 0.000941s | 0.000952s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000950s | 0.000943s | 0.000953s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000946s | 0.000941s | 0.000956s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000949s | 0.000942s | 0.000932s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000944s | 0.000933s | 0.000940s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000952s | 0.000935s | 0.000950s | byte equality observed |
| variant_issue_55.test | 10 | 0.000953s | 0.000949s | 0.000957s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000986s | 0.000981s | 0.000972s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000989s | 0.000986s | 0.000968s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000938s | 0.000950s | 0.000944s | byte equality observed |
| variant_many_types.test | 10 | 0.000985s | 0.000984s | 0.000967s | byte equality observed |
| variant_move_assign.test | 10 | 0.000962s | 0.000970s | 0.000950s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000973s | 0.000981s | 0.000975s | byte equality observed |
| variant_move_construct.test | 10 | 0.000955s | 0.000961s | 0.000954s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000975s | 0.000973s | 0.000978s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000967s | 0.000979s | 0.000976s | byte equality observed |
| variant_size.test | 10 | 0.000944s | 0.000954s | 0.000945s | byte equality observed |
| variant_special.test | 10 | 0.001012s | 0.001012s | 0.000987s | byte equality observed |
| variant_subset.test | 10 | 0.000979s | 0.000976s | 0.000969s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000945s | 0.000961s | 0.000941s | byte equality observed |
| variant_swap.test | 10 | 0.000961s | 0.000959s | 0.000951s | byte equality observed |
| variant_trivial.test | 10 | 0.000987s | 0.000994s | 0.000965s | byte equality observed |
| variant_value_assign.test | 10 | 0.000961s | 0.000961s | 0.000947s | byte equality observed |
| variant_value_construct.test | 10 | 0.000957s | 0.000961s | 0.000931s | byte equality observed |
| variant_valueless.test | 10 | 0.000995s | 0.000988s | 0.000993s | byte equality observed |
| variant_visit.test | 10 | 0.000961s | 0.000958s | 0.000961s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000936s | 0.000939s | 0.000924s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000949s | 0.000943s | 0.000940s | byte equality observed |
| variant_visit_r.test | 10 | 0.000954s | 0.000960s | 0.000954s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
