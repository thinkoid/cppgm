# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.158357 | 0.346185 | 0.576137 | 0.001829 | 0.000949 | 0.001996 |
| variant_size.test | RUN | 0.265411 | 0.852846 | 1.057728 | 0.001990 | 0.002173 | 0.002165 |
| variant_alternative.test | RUN | 0.356593 | 2.637683 | 1.740869 | 0.001949 | 0.002185 | 0.001824 |
| variant_holds_alternative.test | RUN | 0.261722 | 0.641997 | 1.114829 | 0.001924 | 0.002002 | 0.001973 |
| variant_holds_alternative_cx.test | COMPILE | 0.170055 | 0.376731 | 0.629907 | — | — | — |
| variant_get_by_index.test | RUN | 0.412931 | 2.972944 | 2.139697 | 0.002266 | 0.002192 | 0.002180 |
| variant_get_by_index_cx.test | COMPILE | 0.180800 | 0.392708 | 0.649665 | — | — | — |
| variant_get_by_type.test | RUN | 0.421047 | 3.071388 | 2.299309 | 0.002283 | 0.001906 | 0.002117 |
| variant_get_by_type_cx.test | COMPILE | 0.157866 | 0.339321 | 0.539710 | — | — | — |
| variant_default_construct.test | RUN | 0.426635 | 2.279845 | 1.933838 | 0.001968 | 0.002022 | 0.002080 |
| variant_default_construct_cx.test | COMPILE | 0.169533 | 0.371790 | 0.572246 | — | — | — |
| variant_copy_construct.test | RUN | 0.626244 | 3.821252 | 3.302076 | 0.001814 | 0.001987 | 0.001696 |
| variant_copy_construct_cx.test | COMPILE | 0.190148 | 0.431820 | 0.774446 | — | — | — |
| variant_move_construct.test | RUN | 0.603999 | 3.325918 | 3.053272 | 0.001861 | 0.002224 | 0.002134 |
| variant_move_construct_cx.test | COMPILE | 0.156960 | 0.360111 | 0.568140 | — | — | — |
| variant_value_construct.test | RUN | 0.328852 | 0.866086 | 1.346215 | 0.001964 | 0.002152 | 0.001807 |
| variant_value_construct_cx.test | COMPILE | 0.172300 | 0.398131 | 0.620336 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.326267 | 0.862705 | 1.359254 | 0.001836 | 0.001814 | 0.002134 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.173422 | 0.413971 | 0.683463 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.322051 | 0.852166 | 1.328574 | 0.002044 | 0.001733 | 0.002086 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.170304 | 0.413143 | 0.690512 | — | — | — |
| variant_copy_assign.test | RUN | 0.432274 | 2.630352 | 2.094616 | 0.001819 | 0.002077 | 0.002053 |
| variant_copy_assign_cx.test | COMPILE | 0.149025 | 0.333926 | 0.560239 | — | — | — |
| variant_move_assign.test | RUN | 0.427865 | 2.640318 | 2.038981 | 0.001917 | 0.002090 | 0.001905 |
| variant_move_assign_cx.test | COMPILE | 0.155419 | 0.337895 | 0.540856 | — | — | — |
| variant_value_assign.test | RUN | 0.322220 | 0.984201 | 1.495560 | 0.002052 | 0.002104 | 0.002028 |
| variant_value_assign_cx.test | COMPILE | 0.152939 | 0.342950 | 0.553964 | — | — | — |
| variant_emplace_index.test | RUN | 0.358153 | 1.101304 | 1.612740 | 0.001832 | 0.001988 | 0.002086 |
| variant_emplace_index_cx.test | COMPILE | 0.150471 | 0.358077 | 0.518977 | — | — | — |
| variant_emplace_type.test | RUN | 0.326137 | 0.959858 | 1.475813 | 0.002064 | 0.002227 | 0.002088 |
| variant_emplace_type_cx.test | COMPILE | 0.154300 | 0.360501 | 0.562130 | — | — | — |
| variant_swap.test | RUN | 0.343253 | 1.190265 | 1.523864 | 0.001980 | 0.001972 | 0.001959 |
| variant_eq_ne.test | RUN | 0.283782 | 0.706591 | 1.101996 | 0.001784 | 0.001764 | 0.002104 |
| variant_eq_ne_cx.test | COMPILE | 0.152789 | 0.357300 | 0.537031 | — | — | — |
| variant_lt_gt.test | RUN | 0.278580 | 0.818117 | 1.196479 | 0.002159 | 0.001948 | 0.002092 |
| variant_lt_gt_cx.test | COMPILE | 0.159804 | 0.341063 | 0.565070 | — | — | — |
| variant_destroy.test | RUN | 0.294261 | 0.812437 | 1.242073 | 0.001991 | 0.002056 | 0.002084 |
| variant_visit.test | RUN | 1.840017 | 6.153738 | 18.266037 | 0.001948 | 0.002120 | 0.002086 |
| variant_convert_construct.test | RUN | 0.372563 | 1.063390 | 1.695168 | 0.002088 | 0.002011 | 0.002102 |
| variant_subset.test | RUN | 0.388702 | 1.157230 | 1.789592 | 0.002134 | 0.002202 | 0.002220 |
| variant_valueless.test | RUN | 0.276424 | 0.781446 | 1.225396 | 0.002090 | 0.002221 | 0.002126 |
| variant_copy_construct_throw.test | RUN | 0.218467 | 0.543469 | 0.841050 | 0.002046 | 0.001886 | 0.002152 |
| variant_move_construct_throw.test | RUN | 0.216972 | 0.567041 | 0.872190 | 0.001944 | 0.001765 | 0.002212 |
| variant_convert_construct_throw.test | RUN | 0.227998 | 0.603283 | 0.842170 | 0.002163 | 0.002038 | 0.002012 |
| variant_copy_assign_throw.test | RUN | 0.217338 | 0.527935 | 0.903565 | 0.002066 | 0.002279 | 0.002160 |
| variant_move_assign_throw.test | RUN | 0.217105 | 0.522077 | 0.831240 | 0.002106 | 0.002180 | 0.002150 |
| variant_get_by_index_nx.test | RUN | 0.504561 | 2.511785 | 2.117443 | 0.001986 | 0.001928 | 0.002114 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.177352 | 0.430311 | 0.671951 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.496378 | 2.749026 | 2.310306 | 0.001926 | 0.001952 | 0.002107 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.152807 | 0.371736 | 0.533966 | — | — | — |
| variant_subset_nx.test | RUN | 0.414750 | 1.090944 | 1.818756 | 0.002134 | 0.001944 | 0.002130 |
| variant_hash.test | RUN | 0.390128 | 1.265692 | 1.668234 | 0.002088 | 0.002272 | 0.002158 |
| variant_trivial.test | RUN | 2.241840 | 6.738142 | 12.367119 | 0.001928 | 0.002336 | 0.002069 |
| variant_special.test | RUN | 2.216596 | 7.638731 | 12.299982 | 0.002251 | 0.002394 | 0.002192 |
| variant_visit_derived.test | RUN | 0.267865 | 0.695635 | 1.244113 | 0.002229 | 0.002146 | 0.002124 |
| variant_many_types.test | RUN | 2.322502 | 9.740513 | 16.548238 | 0.002094 | 0.002000 | 0.002188 |
| variant_visit_r.test | RUN | 1.036937 | 3.065630 | 6.032594 | 0.002000 | 0.002205 | 0.001988 |
| variant_derived_construct.test | COMPILE | 0.150959 | 0.375028 | 0.572514 | — | — | — |
| variant_visit_by_index.test | RUN | 0.343489 | 0.890545 | 1.579031 | 0.001800 | 0.002100 | 0.002155 |
| variant_ostream_insert.test | RUN | 0.254232 | 0.730132 | 1.117477 | 0.002031 | 0.002218 | 0.002275 |
| is_output_streamable.test | RUN | 0.304842 | 1.452434 | 1.409607 | 0.001913 | 0.002317 | 0.001857 |
| variant_json_value_from.test | RUN | 0.490074 | 1.179315 | 1.904910 | 0.002231 | 0.001921 | 0.002110 |
| variant_json_value_to.test | RUN | 0.585132 | 1.592145 | 2.533251 | 0.002088 | 0.002080 | 0.002150 |
| variant_uses_double_storage.test | COMPILE | 0.170965 | 0.368273 | 0.661419 | — | — | — |
| variant_derived_construct2.test | RUN | 0.220024 | 0.599383 | 0.919056 | 0.001976 | 0.002133 | 0.001994 |
| variant_visit_cx.test | COMPILE | 0.149225 | 0.353969 | 0.562876 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.153698 | 0.357033 | 0.469096 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.147443 | 0.342267 | 0.548247 | — | — | — |
| variant_index_type_126.test | RUN | 1.401239 | 3.359082 | 7.664816 | 0.001774 | 0.002273 | 0.002089 |
| variant_index_type_127.test | RUN | 1.412225 | 3.382267 | 7.853207 | 0.001632 | 0.002219 | 0.002143 |
| variant_index_type_128.test | RUN | 1.416083 | 3.451539 | 7.859549 | 0.001783 | 0.002132 | 0.002035 |
| variant_index_type_129.test | RUN | 1.413253 | 3.428218 | 7.935547 | 0.002028 | 0.002211 | 0.002148 |
| variant_index_type_254.test | RUN | 4.773292 | 11.923615 | 22.715817 | 0.001857 | 0.002028 | 0.002105 |
| variant_index_type_255.test | RUN | 4.796202 | 11.636863 | 22.848103 | 0.002182 | 0.001793 | 0.002098 |
| variant_index_type_256.test | RUN | 4.830203 | 12.039385 | 22.948225 | 0.001910 | 0.001944 | 0.002058 |
| variant_index_type_257.test | RUN | 4.843846 | 12.050865 | 23.111461 | 0.002039 | 0.002153 | 0.002164 |
| variant_default_construct_cx_2.test | COMPILE | 0.152729 | 0.342990 | 0.466293 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.151128 | 0.341375 | 0.586363 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.150495 | 0.377885 | 0.537893 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.153717 | 0.334088 | 0.559065 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.149398 | 0.346705 | 0.457743 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.146335 | 0.332756 | 0.548676 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.152121 | 0.289755 | 0.490200 | — | — | — |
| variant_issue_55.test | RUN | 0.213845 | 0.584088 | 0.712479 | 0.001578 | 0.001732 | 0.001436 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.982× | 0.982×, 0.982× | 1.002× |
| clang | 0.996× | 0.991×, 1.001× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001490s | 0.001527s | 0.001487s | byte equality observed |
| quick.test | 10 | 0.001499s | 0.000659s | 0.001455s | byte equality observed |
| variant_alternative.test | 10 | 0.001503s | 0.001519s | 0.001503s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001468s | 0.001477s | 0.001534s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001546s | 0.001550s | 0.001511s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001524s | 0.001480s | 0.001504s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001536s | 0.001546s | 0.001532s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001531s | 0.001498s | 0.001521s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001547s | 0.001556s | 0.001549s | byte equality observed |
| variant_default_construct.test | 10 | 0.001514s | 0.001516s | 0.001518s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001494s | 0.001484s | 0.001495s | byte equality observed |
| variant_destroy.test | 10 | 0.001486s | 0.001515s | 0.001535s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001529s | 0.001518s | 0.001516s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001529s | 0.001477s | 0.001494s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001507s | 0.001488s | 0.001529s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001557s | 0.001600s | 0.001647s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001490s | 0.001493s | 0.001470s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001605s | 0.001572s | 0.001599s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001498s | 0.001533s | 0.001500s | byte equality observed |
| variant_hash.test | 10 | 0.001503s | 0.001494s | 0.001487s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001521s | 0.001490s | 0.001493s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001515s | 0.001499s | 0.001496s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001502s | 0.001468s | 0.001528s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001498s | 0.001460s | 0.001512s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001522s | 0.001502s | 0.001525s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001492s | 0.001485s | 0.001480s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001526s | 0.001480s | 0.001559s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001530s | 0.001475s | 0.001522s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001533s | 0.001457s | 0.001501s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001512s | 0.001473s | 0.001522s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001483s | 0.001468s | 0.001531s | byte equality observed |
| variant_issue_55.test | 10 | 0.001508s | 0.001469s | 0.001546s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001572s | 0.001546s | 0.001514s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001556s | 0.001539s | 0.001477s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001476s | 0.001493s | 0.001483s | byte equality observed |
| variant_many_types.test | 10 | 0.001548s | 0.001520s | 0.001511s | byte equality observed |
| variant_move_assign.test | 10 | 0.001510s | 0.001508s | 0.001472s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001530s | 0.001549s | 0.001501s | byte equality observed |
| variant_move_construct.test | 10 | 0.001528s | 0.001517s | 0.001509s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001549s | 0.001566s | 0.001518s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001542s | 0.001547s | 0.001547s | byte equality observed |
| variant_size.test | 10 | 0.001502s | 0.001474s | 0.001531s | byte equality observed |
| variant_special.test | 10 | 0.001595s | 0.001564s | 0.001559s | byte equality observed |
| variant_subset.test | 10 | 0.001556s | 0.001528s | 0.001548s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001508s | 0.001513s | 0.001489s | byte equality observed |
| variant_swap.test | 10 | 0.001517s | 0.001471s | 0.001501s | byte equality observed |
| variant_trivial.test | 10 | 0.001545s | 0.001539s | 0.001546s | byte equality observed |
| variant_value_assign.test | 10 | 0.001527s | 0.001498s | 0.001493s | byte equality observed |
| variant_value_construct.test | 10 | 0.001489s | 0.001517s | 0.001459s | byte equality observed |
| variant_valueless.test | 10 | 0.001583s | 0.001543s | 0.001567s | byte equality observed |
| variant_visit.test | 10 | 0.001510s | 0.001488s | 0.001490s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001472s | 0.001520s | 0.001472s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001493s | 0.001489s | 0.001463s | byte equality observed |
| variant_visit_r.test | 9 | 0.001504s | 0.001492s | 0.001463s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
