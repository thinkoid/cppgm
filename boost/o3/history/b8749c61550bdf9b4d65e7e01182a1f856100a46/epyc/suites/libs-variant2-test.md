# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.157386 | 0.341210 | 0.605281 | 0.001898 | 0.000969 | 0.002168 |
| variant_size.test | RUN | 0.264155 | 0.834047 | 1.097902 | 0.002006 | 0.002081 | 0.002250 |
| variant_alternative.test | RUN | 0.349373 | 2.618532 | 1.834981 | 0.001918 | 0.002274 | 0.002314 |
| variant_holds_alternative.test | RUN | 0.254913 | 0.657741 | 1.080387 | 0.001938 | 0.002116 | 0.002125 |
| variant_holds_alternative_cx.test | COMPILE | 0.162599 | 0.383557 | 0.627166 | — | — | — |
| variant_get_by_index.test | RUN | 0.397330 | 2.847416 | 2.202211 | 0.002056 | 0.002253 | 0.002265 |
| variant_get_by_index_cx.test | COMPILE | 0.172208 | 0.383614 | 0.675803 | — | — | — |
| variant_get_by_type.test | RUN | 0.411579 | 2.994235 | 2.354322 | 0.002134 | 0.002184 | 0.002480 |
| variant_get_by_type_cx.test | COMPILE | 0.155333 | 0.343514 | 0.522539 | — | — | — |
| variant_default_construct.test | RUN | 0.396986 | 2.261179 | 1.969527 | 0.001944 | 0.001942 | 0.002116 |
| variant_default_construct_cx.test | COMPILE | 0.170294 | 0.369515 | 0.603877 | — | — | — |
| variant_copy_construct.test | RUN | 0.626950 | 3.720266 | 3.441809 | 0.001882 | 0.002178 | 0.001648 |
| variant_copy_construct_cx.test | COMPILE | 0.196728 | 0.429115 | 0.792670 | — | — | — |
| variant_move_construct.test | RUN | 0.591642 | 3.238979 | 3.085176 | 0.001921 | 0.002224 | 0.002024 |
| variant_move_construct_cx.test | COMPILE | 0.154000 | 0.345858 | 0.582300 | — | — | — |
| variant_value_construct.test | RUN | 0.309145 | 0.858542 | 1.394683 | 0.001914 | 0.002082 | 0.001899 |
| variant_value_construct_cx.test | COMPILE | 0.176962 | 0.403136 | 0.664779 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.321156 | 0.870295 | 1.415450 | 0.001453 | 0.001934 | 0.002374 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.168374 | 0.383839 | 0.676710 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.309832 | 0.857247 | 1.349354 | 0.002034 | 0.001895 | 0.002314 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.168775 | 0.387253 | 0.676017 | — | — | — |
| variant_copy_assign.test | RUN | 0.425329 | 2.662682 | 2.093689 | 0.001904 | 0.002186 | 0.002131 |
| variant_copy_assign_cx.test | COMPILE | 0.150192 | 0.352244 | 0.560085 | — | — | — |
| variant_move_assign.test | RUN | 0.412404 | 2.625925 | 2.085264 | 0.001742 | 0.002174 | 0.001966 |
| variant_move_assign_cx.test | COMPILE | 0.157578 | 0.350971 | 0.568179 | — | — | — |
| variant_value_assign.test | RUN | 0.323037 | 0.949129 | 1.528084 | 0.001770 | 0.002086 | 0.001986 |
| variant_value_assign_cx.test | COMPILE | 0.145524 | 0.341729 | 0.520860 | — | — | — |
| variant_emplace_index.test | RUN | 0.372175 | 1.119492 | 1.699534 | 0.001811 | 0.001929 | 0.002248 |
| variant_emplace_index_cx.test | COMPILE | 0.153959 | 0.356393 | 0.566475 | — | — | — |
| variant_emplace_type.test | RUN | 0.323893 | 0.916603 | 1.504035 | 0.002068 | 0.002210 | 0.002330 |
| variant_emplace_type_cx.test | COMPILE | 0.152252 | 0.329250 | 0.569211 | — | — | — |
| variant_swap.test | RUN | 0.341181 | 1.142929 | 1.579185 | 0.001926 | 0.002120 | 0.001932 |
| variant_eq_ne.test | RUN | 0.282829 | 0.704402 | 1.139162 | 0.001901 | 0.002186 | 0.002022 |
| variant_eq_ne_cx.test | COMPILE | 0.147007 | 0.350723 | 0.542589 | — | — | — |
| variant_lt_gt.test | RUN | 0.284704 | 0.816485 | 1.257208 | 0.002028 | 0.002151 | 0.002203 |
| variant_lt_gt_cx.test | COMPILE | 0.150547 | 0.345474 | 0.533284 | — | — | — |
| variant_destroy.test | RUN | 0.286474 | 0.797193 | 1.270695 | 0.001946 | 0.002216 | 0.002150 |
| variant_visit.test | RUN | 1.817416 | 6.111974 | 18.894121 | 0.001894 | 0.002089 | 0.002132 |
| variant_convert_construct.test | RUN | 0.362626 | 1.050526 | 1.777647 | 0.002025 | 0.002267 | 0.002313 |
| variant_subset.test | RUN | 0.382111 | 1.163132 | 1.794373 | 0.002114 | 0.002296 | 0.002426 |
| variant_valueless.test | RUN | 0.271551 | 0.726789 | 1.246727 | 0.001646 | 0.002124 | 0.002341 |
| variant_copy_construct_throw.test | RUN | 0.222964 | 0.539406 | 0.825349 | 0.001869 | 0.001966 | 0.002381 |
| variant_move_construct_throw.test | RUN | 0.218190 | 0.515095 | 0.833581 | 0.002063 | 0.002150 | 0.002220 |
| variant_convert_construct_throw.test | RUN | 0.223443 | 0.583935 | 0.953176 | 0.001868 | 0.002220 | 0.002330 |
| variant_copy_assign_throw.test | RUN | 0.214367 | 0.528221 | 0.865162 | 0.001723 | 0.001939 | 0.002386 |
| variant_move_assign_throw.test | RUN | 0.216064 | 0.529714 | 0.836509 | 0.002240 | 0.002085 | 0.002330 |
| variant_get_by_index_nx.test | RUN | 0.492063 | 2.486164 | 2.188226 | 0.002008 | 0.002046 | 0.002365 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.161649 | 0.374529 | 0.623003 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.485913 | 2.761271 | 2.316562 | 0.002006 | 0.001672 | 0.002175 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.152353 | 0.357900 | 0.575999 | — | — | — |
| variant_subset_nx.test | RUN | 0.390621 | 1.111991 | 1.784855 | 0.001872 | 0.002104 | 0.002274 |
| variant_hash.test | RUN | 0.373693 | 1.288310 | 1.680503 | 0.002008 | 0.002198 | 0.002302 |
| variant_trivial.test | RUN | 2.221602 | 7.064407 | 12.836847 | 0.002096 | 0.001972 | 0.002338 |
| variant_special.test | RUN | 2.176491 | 7.343302 | 13.155922 | 0.002077 | 0.002397 | 0.002404 |
| variant_visit_derived.test | RUN | 0.253416 | 0.672379 | 1.200746 | 0.002146 | 0.002276 | 0.002362 |
| variant_many_types.test | RUN | 2.246280 | 9.704952 | 16.546427 | 0.001816 | 0.002292 | 0.002205 |
| variant_visit_r.test | RUN | 0.943324 | 3.044687 | 6.405697 | 0.002084 | 0.002260 | 0.002166 |
| variant_derived_construct.test | COMPILE | 0.162465 | 0.337902 | 0.612590 | — | — | — |
| variant_visit_by_index.test | RUN | 0.353595 | 0.914969 | 1.660565 | 0.001726 | 0.002229 | 0.002283 |
| variant_ostream_insert.test | RUN | 0.247210 | 0.706776 | 0.929730 | 0.002110 | 0.001930 | 0.002228 |
| is_output_streamable.test | RUN | 0.301168 | 1.429019 | 1.483494 | 0.001950 | 0.001770 | 0.002282 |
| variant_json_value_from.test | RUN | 0.482013 | 1.213333 | 1.960394 | 0.002125 | 0.002107 | 0.002355 |
| variant_json_value_to.test | RUN | 0.571705 | 1.576307 | 2.512419 | 0.002109 | 0.002076 | 0.002296 |
| variant_uses_double_storage.test | COMPILE | 0.168902 | 0.353541 | 0.614918 | — | — | — |
| variant_derived_construct2.test | RUN | 0.215703 | 0.589286 | 0.890841 | 0.001770 | 0.002139 | 0.002001 |
| variant_visit_cx.test | COMPILE | 0.145339 | 0.351107 | 0.565674 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.149633 | 0.353950 | 0.536662 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.146909 | 0.349623 | 0.561420 | — | — | — |
| variant_index_type_126.test | RUN | 1.401411 | 3.353521 | 8.054212 | 0.001792 | 0.002050 | 0.002190 |
| variant_index_type_127.test | RUN | 1.376518 | 3.326336 | 8.086137 | 0.001937 | 0.001888 | 0.002122 |
| variant_index_type_128.test | RUN | 1.405314 | 3.369206 | 7.983372 | 0.001841 | 0.002313 | 0.002240 |
| variant_index_type_129.test | RUN | 1.399558 | 3.371449 | 8.005298 | 0.001942 | 0.002242 | 0.002254 |
| variant_index_type_254.test | RUN | 4.791516 | 11.575838 | 23.442364 | 0.001896 | 0.002698 | 0.002302 |
| variant_index_type_255.test | RUN | 4.701840 | 11.460113 | 23.723703 | 0.001826 | 0.002150 | 0.001878 |
| variant_index_type_256.test | RUN | 5.064707 | 12.228926 | 23.724628 | 0.001727 | 0.001936 | 0.002306 |
| variant_index_type_257.test | RUN | 5.044297 | 12.293473 | 23.740227 | 0.001795 | 0.001668 | 0.001856 |
| variant_default_construct_cx_2.test | COMPILE | 0.155217 | 0.374258 | 0.575247 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.159115 | 0.368578 | 0.575007 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.147433 | 0.375574 | 0.568020 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.152710 | 0.339657 | 0.472413 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.150628 | 0.336455 | 0.552373 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.144353 | 0.336019 | 0.550695 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.128119 | 0.318354 | 0.551009 | — | — | — |
| variant_issue_55.test | RUN | 0.185996 | 0.530022 | 0.945080 | 0.001544 | 0.001435 | 0.001633 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.979× | 0.966×, 0.992× | 1.000× |
| clang | 0.992× | 1.000×, 0.983× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001505s | 0.001499s | 0.001504s | byte equality observed |
| quick.test | 10 | 0.001467s | 0.000654s | 0.001465s | byte equality observed |
| variant_alternative.test | 10 | 0.001510s | 0.001512s | 0.001486s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001532s | 0.001499s | 0.001489s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001572s | 0.001542s | 0.001556s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001514s | 0.001519s | 0.001501s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001546s | 0.001506s | 0.001519s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001544s | 0.001489s | 0.001536s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001552s | 0.001527s | 0.001522s | byte equality observed |
| variant_default_construct.test | 10 | 0.001498s | 0.001501s | 0.001522s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001510s | 0.001544s | 0.001476s | byte equality observed |
| variant_destroy.test | 10 | 0.001517s | 0.001503s | 0.001533s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001492s | 0.001495s | 0.001485s | byte equality observed |
| variant_emplace_type.test | 7 | 0.001493s | 0.001488s | 0.001523s | byte equality observed |
| variant_eq_ne.test | 9 | 0.001492s | 0.001528s | 0.001483s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001601s | 0.001617s | 0.001599s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001531s | 0.001462s | 0.001492s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001591s | 0.001602s | 0.001565s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001530s | 0.001484s | 0.001499s | byte equality observed |
| variant_hash.test | 10 | 0.001464s | 0.001520s | 0.001474s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001526s | 0.001503s | 0.001527s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001526s | 0.001484s | 0.001525s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001510s | 0.001488s | 0.001517s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001508s | 0.001509s | 0.001503s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001521s | 0.001486s | 0.001488s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001521s | 0.001493s | 0.001498s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001529s | 0.001515s | 0.001493s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001494s | 0.001487s | 0.001513s | byte equality observed |
| variant_index_type_255.test | 8 | 0.001501s | 0.001455s | 0.001515s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001503s | 0.001493s | 0.001501s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001504s | 0.001465s | 0.001505s | byte equality observed |
| variant_issue_55.test | 10 | 0.001510s | 0.001491s | 0.001487s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001553s | 0.001534s | 0.001518s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001581s | 0.001554s | 0.001530s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001513s | 0.001479s | 0.001495s | byte equality observed |
| variant_many_types.test | 10 | 0.001516s | 0.001557s | 0.001527s | byte equality observed |
| variant_move_assign.test | 10 | 0.001521s | 0.001529s | 0.001479s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001543s | 0.001524s | 0.001555s | byte equality observed |
| variant_move_construct.test | 10 | 0.001507s | 0.001469s | 0.001494s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001511s | 0.001512s | 0.001518s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001528s | 0.001523s | 0.001531s | byte equality observed |
| variant_size.test | 10 | 0.001495s | 0.001496s | 0.001453s | byte equality observed |
| variant_special.test | 10 | 0.001588s | 0.001556s | 0.001583s | byte equality observed |
| variant_subset.test | 10 | 0.001523s | 0.001553s | 0.001550s | byte equality observed |
| variant_subset_nx.test | 7 | 0.001496s | 0.001494s | 0.001505s | byte equality observed |
| variant_swap.test | 7 | 0.001512s | 0.001481s | 0.001471s | byte equality observed |
| variant_trivial.test | 10 | 0.001554s | 0.001531s | 0.001526s | byte equality observed |
| variant_value_assign.test | 10 | 0.001514s | 0.001523s | 0.001502s | byte equality observed |
| variant_value_construct.test | 10 | 0.001515s | 0.001493s | 0.001502s | byte equality observed |
| variant_valueless.test | 10 | 0.001585s | 0.001565s | 0.001540s | byte equality observed |
| variant_visit.test | 9 | 0.001514s | 0.001543s | 0.001498s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001476s | 0.001483s | 0.001475s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001506s | 0.001447s | 0.001462s | byte equality observed |
| variant_visit_r.test | 10 | 0.001537s | 0.001445s | 0.001479s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
