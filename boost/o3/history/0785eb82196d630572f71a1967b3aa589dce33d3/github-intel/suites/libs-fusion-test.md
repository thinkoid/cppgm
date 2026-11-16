# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.267569 | 0.644258 | 0.800055 | 0.001030 | 0.001191 | 0.001164 |
| any.test | RUN | 0.267611 | 0.600623 | 0.762141 | 0.001061 | 0.001311 | 0.001171 |
| clear.test | RUN | 0.196319 | 0.566317 | 0.634334 | 0.001182 | 0.001511 | 0.001110 |
| copy.test | RUN | 0.162899 | 0.417715 | 0.508143 | 0.001118 | 0.001540 | 0.001242 |
| count.test | RUN | 0.170394 | 0.459853 | 0.559780 | 0.001203 | 0.001461 | 0.001082 |
| count_if.test | RUN | 0.171757 | 0.423673 | 0.515327 | 0.000987 | 0.001432 | 0.001162 |
| erase.test | RUN | 0.247014 | 0.770450 | 0.851325 | 0.001018 | 0.001241 | 0.001229 |
| erase_key.test | RUN | 0.238279 | 0.764502 | 0.794098 | 0.001069 | 0.001179 | 0.001156 |
| filter.test | RUN | 0.215661 | 0.640215 | 0.737965 | 0.001144 | 0.001380 | 0.001273 |
| filter_if.test | RUN | 0.244138 | 0.751441 | 0.858320 | 0.001121 | 0.001247 | 0.001201 |
| find.test | RUN | 0.208162 | 0.513025 | 0.652523 | 0.001053 | 0.001246 | 0.001144 |
| find_if.test | RUN | 0.197937 | 0.475401 | 0.594138 | 0.001012 | 0.001358 | 0.001249 |
| fold.test | RUN | 0.213808 | 0.588973 | 0.735135 | 0.001174 | 0.001469 | 0.001094 |
| for_each.test | RUN | 0.194618 | 0.530702 | 0.625126 | 0.001288 | 0.001323 | 0.001193 |
| insert.test | RUN | 0.288482 | 0.951749 | 1.029217 | 0.001214 | 0.001534 | 0.001196 |
| insert_range.test | RUN | 0.291994 | 0.956688 | 1.039674 | 0.001198 | 0.001226 | 0.001138 |
| iter_fold.test | RUN | 0.327892 | 0.893169 | 1.230328 | 0.001134 | 0.001447 | 0.001198 |
| move.test | RUN | 0.174078 | 0.427590 | 0.532714 | 0.001058 | 0.001290 | 0.001140 |
| none.test | RUN | 0.273179 | 0.603858 | 0.778460 | 0.001075 | 0.001315 | 0.001248 |
| pop_back.test | RUN | 0.267175 | 0.851064 | 0.936818 | 0.001205 | 0.001472 | 0.001164 |
| pop_front.test | RUN | 0.233358 | 0.672954 | 0.731691 | 0.001143 | 0.001300 | 0.001283 |
| push_back.test | RUN | 0.291024 | 0.964958 | 1.018282 | 0.001085 | 0.001576 | 0.001175 |
| push_front.test | RUN | 0.257003 | 0.795981 | 0.848560 | 0.001144 | 0.001384 | 0.001225 |
| remove.test | RUN | 0.276083 | 0.915428 | 1.000163 | 0.001176 | 0.001257 | 0.001230 |
| remove_if.test | RUN | 0.252521 | 0.749194 | 0.860222 | 0.001137 | 0.001408 | 0.001168 |
| replace.test | RUN | 0.239363 | 0.733333 | 0.797599 | 0.001089 | 0.001426 | 0.001195 |
| replace_if.test | RUN | 0.239145 | 0.725073 | 0.777420 | 0.001215 | 0.001383 | 0.001166 |
| reverse_fold.test | RUN | 0.368775 | 1.020654 | 1.312205 | 0.001137 | 0.001428 | 0.001300 |
| reverse_iter_fold.test | RUN | 0.376228 | 1.056705 | 1.387399 | 0.001115 | 0.001275 | 0.001207 |
| reverse.test | RUN | 0.240912 | 0.762812 | 0.810458 | 0.001099 | 0.001558 | 0.001112 |
| segmented_for_each.test | RUN | 0.398729 | 1.432889 | 1.641064 | 0.001122 | 0.001394 | 0.001219 |
| segmented_find.test | RUN | 0.245070 | 0.748807 | 0.911503 | 0.001172 | 0.001374 | 0.001154 |
| segmented_find_if.test | RUN | 0.255583 | 0.760613 | 0.901087 | 0.001187 | 0.001163 | 0.001049 |
| segmented_fold.test | RUN | 0.307348 | 0.986312 | 1.167280 | 0.001169 | 0.001578 | 0.001210 |
| transform.test | RUN | 0.254846 | 0.801077 | 0.866897 | 0.001183 | 0.001596 | 0.001155 |
| join.test | RUN | 0.185313 | 0.479525 | 0.583685 | 0.001247 | 0.001564 | 0.001329 |
| zip.test | RUN | 0.320503 | 0.902277 | 1.119676 | 0.001241 | 0.001419 | 0.001151 |
| zip2.test | RUN | 0.314724 | 0.871767 | 1.084876 | 0.001179 | 0.001393 | 0.001091 |
| zip_ignore.test | RUN | 0.242432 | 0.588095 | 0.720142 | 0.001073 | 0.001332 | 0.001282 |
| flatten.test | RUN | 0.226403 | 0.681877 | 0.742698 | 0.001131 | 0.001538 | 0.001174 |
| ticket-5490.test | COMPILE | 0.125721 | 0.283040 | 0.314710 | — | — | — |
| as_deque.test | RUN | 0.222569 | 0.628163 | 0.775599 | 0.001293 | 0.001387 | 0.001170 |
| as_list.test | RUN | 0.251433 | 0.788522 | 0.840458 | 0.001435 | 0.001297 | 0.001158 |
| as_map.test | RUN | 0.249959 | 0.773779 | 0.843230 | 0.001189 | 0.001326 | 0.001079 |
| as_map_assoc.test | RUN | 0.252809 | 0.711431 | 0.804031 | 0.001092 | 0.001589 | 0.001135 |
| as_set.test | RUN | 0.289707 | 0.898477 | 0.993946 | 0.001430 | 0.001333 | 0.001084 |
| as_vector.test | RUN | 0.258892 | 0.802523 | 0.883721 | 0.001125 | 0.001457 | 0.001211 |
| boost_tuple.test | RUN | 0.259946 | 0.800485 | 0.838284 | 0.001144 | 0.001212 | 0.001246 |
| boost_tuple_iterator.test | RUN | 0.170825 | 0.452908 | 0.510383 | 0.001217 | 0.001197 | 0.001281 |
| cons.test | RUN | 0.327794 | 0.884392 | 1.016232 | 0.001050 | 0.001336 | 0.001134 |
| convert_boost_tuple.test | RUN | 0.207087 | 0.684790 | 0.668783 | 0.001369 | 0.001646 | 0.001281 |
| convert_deque.test | RUN | 0.205567 | 0.670505 | 0.667006 | 0.001203 | 0.001250 | 0.001124 |
| convert_list.test | RUN | 0.205615 | 0.691101 | 0.670780 | 0.001122 | 0.001232 | 0.001245 |
| convert_std_pair.test | RUN | 0.211513 | 0.687783 | 0.676179 | 0.001330 | 0.001334 | 0.001260 |
| convert_std_tuple.test | RUN | 0.201941 | 0.662153 | 0.662440 | 0.001143 | 0.001313 | 0.001010 |
| convert_vector.test | RUN | 0.199937 | 0.672680 | 0.657917 | 0.001151 | 0.001206 | 0.001051 |
| filter_view.test | RUN | 0.242885 | 0.708025 | 0.799974 | 0.001070 | 0.001291 | 0.001210 |
| hash.test | RUN | 0.241225 | 0.638210 | 0.750646 | 0.001175 | 0.001384 | 0.001249 |
| io.test | RUN | 0.262962 | 0.911732 | 0.922724 | 0.001244 | 0.001644 | 0.001377 |
| iterator_range.test | RUN | 0.231743 | 0.689453 | 0.750219 | 0.001186 | 0.001426 | 0.001138 |
| joint_view.test | RUN | 0.310833 | 1.150516 | 1.142898 | 0.001136 | 0.001360 | 0.001329 |
| list_comparison.test | RUN | 0.181909 | 0.463887 | 0.568632 | 0.001255 | 0.001279 | 0.001084 |
| list_construction.test | RUN | 0.173148 | 0.449227 | 0.521136 | 0.001194 | 0.001266 | 0.000990 |
| list_copy.test | RUN | 0.267278 | 0.822954 | 0.936528 | 0.001091 | 0.001226 | 0.001218 |
| list_iterator.test | RUN | 0.172004 | 0.447160 | 0.512891 | 0.001000 | 0.001508 | 0.001115 |
| list_hash.test | RUN | 0.240369 | 0.948557 | 0.765460 | 0.001116 | 0.001544 | 0.001177 |
| list_make.test | RUN | 0.183373 | 0.501434 | 0.569565 | 0.001368 | 0.001281 | 0.001128 |
| list_misc.test | RUN | 0.240635 | 0.594896 | 0.703913 | 0.001102 | 0.001242 | 0.001176 |
| list_mutate.test | RUN | 0.160424 | 0.378578 | 0.468018 | 0.001073 | 0.001295 | 0.001161 |
| list_nest.test | RUN | 0.333906 | 1.155944 | 1.318325 | 0.001041 | 0.001350 | 0.001180 |
| list_tie.test | RUN | 0.178104 | 0.449145 | 0.519306 | 0.001052 | 0.001366 | 0.001161 |
| list_value_at.test | RUN | 0.166170 | 0.426303 | 0.494946 | 0.001275 | 0.001385 | 0.001275 |
| deque_comparison.test | RUN | 0.177439 | 0.474856 | 0.582380 | 0.000916 | 0.001338 | 0.001223 |
| deque_construction.test | RUN | 0.180920 | 0.447351 | 0.538543 | 0.001185 | 0.001358 | 0.001087 |
| deque_copy.test | RUN | 0.253944 | 0.783089 | 0.870070 | 0.001090 | 0.001326 | 0.001172 |
| deque_iterator.test | RUN | 0.176122 | 0.479842 | 0.533594 | 0.001125 | 0.001235 | 0.001411 |
| deque_hash.test | RUN | 0.242178 | 0.912719 | 0.753244 | 0.000958 | 0.001449 | 0.001162 |
| deque_is_constructible.test | COMPILE | 0.095843 | 0.201692 | 0.239590 | — | — | — |
| deque_make.test | RUN | 0.176349 | 0.483399 | 0.560674 | 0.001111 | 0.001145 | 0.001188 |
| deque_misc.test | RUN | 0.233487 | 0.597269 | 0.681333 | 0.001034 | 0.001251 | 0.001111 |
| deque_move.test | RUN | 0.178170 | 0.484943 | 0.541483 | 0.001011 | 0.001371 | 0.001200 |
| deque_mutate.test | RUN | 0.160201 | 0.392442 | 0.469116 | 0.001229 | 0.001476 | 0.001112 |
| deque_nest.test | RUN | 0.495960 | 1.873674 | 2.113386 | 0.001160 | 0.001419 | 0.001200 |
| deque_tie.test | RUN | 0.165781 | 0.425265 | 0.493820 | 0.000945 | 0.001324 | 0.001018 |
| deque_value_at.test | RUN | 0.168640 | 0.421312 | 0.482118 | 0.001124 | 0.001206 | 0.001108 |
| front_extended_deque.test | RUN | 0.239638 | 0.595500 | 0.744035 | 0.001051 | 0.001477 | 0.001117 |
| back_extended_deque.test | RUN | 0.238842 | 0.608328 | 0.728446 | 0.000992 | 0.001294 | 0.001284 |
| make_list.test | RUN | 0.181468 | 0.504014 | 0.569264 | 0.001098 | 0.001486 | 0.001197 |
| make_vector.test | RUN | 0.186248 | 0.484991 | 0.604635 | 0.001095 | 0.001403 | 0.001071 |
| map.test | RUN | 0.249370 | 0.770302 | 0.812415 | 0.001331 | 0.001459 | 0.001163 |
| map_comparison.test | RUN | 0.180870 | 0.483169 | 0.561016 | 0.001194 | 0.001332 | 0.001317 |
| map_construction.test | RUN | 0.180349 | 0.459852 | 0.538112 | 0.001076 | 0.001529 | 0.001137 |
| map_copy.test | RUN | 0.219041 | 0.594709 | 0.683887 | 0.001080 | 0.001257 | 0.001331 |
| map_misc.test | RUN | 0.238618 | 0.596862 | 0.696513 | 0.000861 | 0.001462 | 0.001059 |
| map_move.test | RUN | 0.180951 | 0.509475 | 0.563866 | 0.001310 | 0.001311 | 0.001181 |
| map_mutate.test | RUN | 0.165262 | 0.403449 | 0.472987 | 0.001087 | 0.001238 | 0.001323 |
| map_tie.test | RUN | 0.168641 | 0.395038 | 0.484965 | 0.001054 | 0.001286 | 0.001139 |
| nil.test | RUN | 0.113647 | 0.280440 | 0.337127 | 0.001183 | 0.001226 | 0.001142 |
| nview.test | RUN | 0.230478 | 0.584252 | 0.696032 | 0.001166 | 0.001404 | 0.001121 |
| reverse_view.test | RUN | 0.299587 | 0.975367 | 1.040040 | 0.001132 | 0.001249 | 0.001288 |
| segmented_iterator_range.test | RUN | 0.344437 | 1.160469 | 1.299394 | 0.001133 | 0.001462 | 0.001247 |
| set.test | RUN | 0.225233 | 0.672074 | 0.731121 | 0.001114 | 0.001523 | 0.001226 |
| single_view.test | RUN | 0.203147 | 0.602683 | 0.673689 | 0.001150 | 0.001376 | 0.001302 |
| std_pair.test | RUN | 0.266281 | 0.775275 | 0.855347 | 0.001231 | 0.001332 | 0.001121 |
| boost_array.test | RUN | 0.217448 | 0.531434 | 0.629269 | 0.001035 | 0.001439 | 0.001136 |
| array.test | RUN | 0.217476 | 0.521920 | 0.633076 | 0.001012 | 0.001327 | 0.001092 |
| std_array.test | RUN | 0.223673 | 0.526243 | 0.602545 | 0.001196 | 0.001205 | 0.001159 |
| tuple_comparison.test | RUN | 0.192703 | 0.493319 | 0.578542 | 0.001248 | 0.001455 | 0.001199 |
| tuple_construction.test | RUN | 0.196807 | 0.505042 | 0.578253 | 0.001140 | 0.001290 | 0.001236 |
| tuple_conversion.test | RUN | 0.429218 | 1.559393 | 1.935927 | 0.001290 | 0.001285 | 0.001166 |
| tuple_copy.test | RUN | 0.287887 | 0.898778 | 1.019609 | 0.001236 | 0.001400 | 0.001065 |
| tuple_element.test | RUN | 0.175099 | 0.431692 | 0.545992 | 0.000986 | 0.001312 | 0.001183 |
| tuple_make.test | RUN | 0.193141 | 0.507058 | 0.611099 | 0.001044 | 0.001262 | 0.001104 |
| tuple_misc.test | RUN | 0.250613 | 0.621156 | 0.781476 | 0.001140 | 0.001346 | 0.001165 |
| tuple_mutate.test | RUN | 0.173152 | 0.421221 | 0.503928 | 0.001119 | 0.001229 | 0.001196 |
| tuple_nest.test | RUN | 0.730089 | 3.236431 | 3.665049 | 0.001055 | 0.001408 | 0.001213 |
| tuple_hash.test | RUN | 0.250137 | 0.921101 | 0.793957 | 0.001164 | 0.001535 | 0.001183 |
| tuple_tie.test | RUN | 0.181591 | 0.465302 | 0.554195 | 0.001084 | 0.001261 | 0.001142 |
| tuple_traits__maybe_variadic.test | RUN | 0.198229 | 0.560343 | 0.585613 | 0.001129 | 0.001197 | 0.001320 |
| tuple_traits__no_variadic.test | RUN | 0.219757 | 0.582623 | 0.627684 | 0.001250 | 0.001376 | 0.001441 |
| transform_view.test | RUN | 0.296094 | 0.957671 | 1.059231 | 0.001325 | 0.001528 | 0.001195 |
| identity_view.test | RUN | 0.281895 | 0.889530 | 0.983117 | 0.001045 | 0.001241 | 0.001286 |
| vector_comparison.test | RUN | 0.176399 | 0.479551 | 0.558078 | 0.001267 | 0.001418 | 0.001270 |
| vector_construction.test | RUN | 0.179205 | 0.455720 | 0.587597 | 0.000797 | 0.001462 | 0.001265 |
| vector_conversion.test | RUN | 0.511449 | 2.072613 | 2.444916 | 0.001144 | 0.001400 | 0.001098 |
| vector_copy.test | RUN | 0.282617 | 0.895813 | 1.000560 | 0.001098 | 0.001219 | 0.001185 |
| vector_iterator.test | RUN | 0.173753 | 0.456986 | 0.534976 | 0.001336 | 0.001466 | 0.001108 |
| vector_make.test | RUN | 0.184041 | 0.479257 | 0.559497 | 0.001307 | 0.001543 | 0.001312 |
| vector_misc.test | RUN | 0.242884 | 0.610212 | 0.743819 | 0.001148 | 0.001382 | 0.001144 |
| vector_move.test | RUN | 0.180384 | 0.492611 | 0.546668 | 0.001457 | 0.001251 | 0.001129 |
| vector_mutate.test | RUN | 0.166929 | 0.394749 | 0.474771 | 0.001108 | 0.001257 | 0.001105 |
| vector_n.test | RUN | 0.205038 | 0.502152 | 0.638466 | 0.001304 | 0.001335 | 0.001330 |
| vector_nest.test | RUN | 0.739063 | 3.428251 | 3.715834 | 0.001221 | 0.001200 | 0.001193 |
| vector_hash.test | RUN | 0.237135 | 0.911733 | 0.730523 | 0.001206 | 0.001696 | 0.001160 |
| vector_tie.test | RUN | 0.172509 | 0.445360 | 0.531384 | 0.001353 | 0.001301 | 0.001125 |
| vector_traits__maybe_variadic.test | RUN | 0.190918 | 0.489977 | 0.535042 | 0.001264 | 0.001284 | 0.001174 |
| vector_traits__no_variadic.test | RUN | 0.203109 | 0.554629 | 0.584483 | 0.001230 | 0.001188 | 0.001042 |
| vector_value_at.test | RUN | 0.167309 | 0.406035 | 0.481163 | 0.001117 | 0.000934 | 0.001088 |
| zip_view.test | RUN | 0.341081 | 0.991646 | 1.292451 | 0.001221 | 0.001332 | 0.001222 |
| zip_view2.test | RUN | 0.289616 | 0.781870 | 0.949781 | 0.001058 | 0.001226 | 0.001323 |
| zip_view_ignore.test | RUN | 0.260734 | 0.689122 | 0.854444 | 0.001216 | 0.001267 | 0.001282 |
| repetitive_view.test | RUN | 0.448655 | 1.278600 | 1.636565 | 0.001170 | 0.001264 | 0.001214 |
| deduce_sequence.test | RUN | 0.217473 | 0.539881 | 0.711711 | 0.001131 | 0.001348 | 0.001316 |
| adapt_adt_named.test | RUN | 0.263278 | 0.780584 | 0.830138 | 0.001215 | 0.001336 | 0.001081 |
| adapt_adt_named_empty.test | RUN | 0.234779 | 0.615383 | 0.686752 | 0.001126 | 0.001265 | 0.001199 |
| adapt_adt.test | RUN | 0.294042 | 1.020056 | 1.023127 | 0.001251 | 0.001216 | 0.001168 |
| adapt_adt_empty.test | RUN | 0.224583 | 0.631847 | 0.696282 | 0.001398 | 0.001387 | 0.001161 |
| adapt_assoc_adt_named.test | RUN | 0.285733 | 0.811808 | 0.917714 | 0.001052 | 0.001405 | 0.001188 |
| adapt_assoc_adt_named_empty.test | RUN | 0.225546 | 0.625802 | 0.687122 | 0.001067 | 0.001209 | 0.001211 |
| adapt_assoc_adt.test | RUN | 0.295113 | 0.848577 | 0.942399 | 0.001088 | 0.001326 | 0.001332 |
| adapt_assoc_adt_empty.test | RUN | 0.226684 | 0.631609 | 0.695653 | 0.001344 | 0.001267 | 0.001122 |
| adapt_assoc_struct_named.test | RUN | 0.279136 | 0.796289 | 0.884938 | 0.001081 | 0.001450 | 0.001056 |
| adapt_assoc_struct_named_empty.test | RUN | 0.220464 | 0.618862 | 0.685484 | 0.001220 | 0.001286 | 0.001074 |
| adapt_assoc_struct.test | RUN | 0.255107 | 0.743315 | 0.827704 | 0.001153 | 0.001245 | 0.001168 |
| adapt_assoc_struct_empty.test | RUN | 0.219260 | 0.610610 | 0.697467 | 0.001240 | 0.001346 | 0.001068 |
| adapt_assoc_tpl_adt.test | RUN | 0.301500 | 0.863201 | 0.964151 | 0.001121 | 0.001425 | 0.001173 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.221412 | 0.631215 | 0.690954 | 0.001275 | 0.001335 | 0.001316 |
| adapt_assoc_tpl_struct.test | RUN | 0.246404 | 0.728018 | 0.814247 | 0.001203 | 0.001481 | 0.001268 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.221785 | 0.619199 | 0.702497 | 0.001117 | 0.001405 | 0.001191 |
| adapt_struct_named.test | RUN | 0.251262 | 0.770671 | 0.809770 | 0.001278 | 0.001450 | 0.001183 |
| adapt_struct_named_empty.test | RUN | 0.219939 | 0.618331 | 0.686821 | 0.001109 | 0.001193 | 0.001118 |
| adapt_struct.test | RUN | 0.278506 | 0.865748 | 0.932162 | 0.001192 | 0.001275 | 0.001186 |
| adapt_struct_empty.test | RUN | 0.222392 | 0.617975 | 0.688148 | 0.001362 | 0.001340 | 0.001141 |
| adapt_tpl_adt.test | RUN | 0.283763 | 1.018152 | 0.997344 | 0.001145 | 0.001348 | 0.001194 |
| adapt_tpl_adt_empty.test | RUN | 0.224270 | 0.624846 | 0.695145 | 0.001085 | 0.001367 | 0.001296 |
| adapt_tpl_struct.test | RUN | 0.241434 | 0.686969 | 0.762008 | 0.001195 | 0.001328 | 0.001222 |
| adapt_tpl_struct_empty.test | RUN | 0.221928 | 0.617592 | 0.701037 | 0.001157 | 0.001260 | 0.001191 |
| adt_attribute_proxy.test | RUN | 0.247066 | 0.604778 | 0.723270 | 0.001149 | 0.001440 | 0.001180 |
| define_struct.test | RUN | 0.306687 | 0.848548 | 0.970416 | 0.001143 | 0.001240 | 0.001132 |
| define_struct_empty.test | RUN | 0.271215 | 0.698296 | 0.781303 | 0.001127 | 0.001312 | 0.001192 |
| define_struct_move.test | RUN | 0.172377 | 0.392726 | 0.464650 | 0.001137 | 0.001310 | 0.001306 |
| define_struct_inline.test | RUN | 0.326885 | 1.023264 | 1.107781 | 0.001358 | 0.001244 | 0.001183 |
| define_struct_inline_empty.test | RUN | 0.268255 | 0.691688 | 0.790870 | 0.001203 | 0.001266 | 0.001200 |
| define_struct_inline_move.test | RUN | 0.173113 | 0.399801 | 0.471515 | 0.001025 | 0.001410 | 0.001280 |
| define_assoc_struct.test | RUN | 0.294158 | 0.814974 | 0.924666 | 0.001295 | 0.001460 | 0.001137 |
| define_assoc_struct_empty.test | RUN | 0.270431 | 0.698798 | 0.780091 | 0.001140 | 0.001370 | 0.001286 |
| define_assoc_struct_move.test | RUN | 0.165104 | 0.388732 | 0.469849 | 0.001067 | 0.001500 | 0.001173 |
| define_tpl_struct.test | RUN | 0.296843 | 0.820319 | 0.925488 | 0.001070 | 0.001385 | 0.001152 |
| define_tpl_struct_empty.test | RUN | 0.270986 | 0.693738 | 0.804446 | 0.001275 | 0.001417 | 0.001093 |
| define_tpl_struct_move.test | RUN | 0.175166 | 0.397983 | 0.477852 | 0.001170 | 0.001263 | 0.001229 |
| define_tpl_struct_inline.test | RUN | 0.309291 | 0.945394 | 1.014920 | 0.001180 | 0.001327 | 0.001116 |
| define_tpl_struct_inline_empty.test | RUN | 0.267304 | 0.698266 | 0.796005 | 0.000828 | 0.001291 | 0.001205 |
| define_tpl_struct_inline_move.test | RUN | 0.173374 | 0.396073 | 0.491016 | 0.001097 | 0.001311 | 0.001126 |
| define_assoc_tpl_struct.test | RUN | 0.297347 | 0.829803 | 0.927564 | 0.001192 | 0.001422 | 0.001254 |
| define_assoc_tpl_struct_empty.test | RUN | 0.269091 | 0.702257 | 0.810385 | 0.001190 | 0.001364 | 0.001121 |
| define_assoc_tpl_struct_move.test | RUN | 0.168256 | 0.397698 | 0.479595 | 0.001200 | 0.001039 | 0.001245 |
| std_tuple.test | RUN | 0.173855 | 0.439791 | 0.529845 | 0.001035 | 0.001147 | 0.001135 |
| std_tuple_iterator.test | RUN | 0.173360 | 0.455796 | 0.532667 | 0.001178 | 0.001265 | 0.001248 |
| ref_vector.test | RUN | 0.198805 | 0.479590 | 0.572901 | 0.001067 | 0.001364 | 0.001148 |
| flatten_view.test | RUN | 0.216317 | 0.594770 | 0.688161 | 0.001161 | 0.001400 | 0.001079 |
| github-159.test | COMPILE | 0.094357 | 0.214581 | 0.247497 | — | — | — |
| github-176.test | RUN | 0.196396 | 0.521793 | 0.572892 | 0.001121 | 0.001168 | 0.001078 |
| size.test | COMPILE | 0.166014 | 0.367963 | 0.444267 | — | — | — |
| fused.test | RUN | 0.231262 | 0.555581 | 0.667284 | 0.001260 | 0.001442 | 0.001173 |
| fused_function_object.test | RUN | 0.170757 | 0.421859 | 0.503648 | 0.001058 | 0.001356 | 0.001232 |
| fused_procedure.test | RUN | 0.225797 | 0.522648 | 0.641461 | 0.001073 | 0.001316 | 0.001109 |
| unfused.test | RUN | 0.173018 | 0.440623 | 0.526434 | 0.001096 | 0.001485 | 0.001208 |
| unfused_typed.test | RUN | 0.178117 | 0.468738 | 0.543058 | 0.001283 | 0.001379 | 0.001194 |
| make_fused.test | RUN | 0.234680 | 0.548141 | 0.653110 | 0.001224 | 0.001108 | 0.001195 |
| make_fused_function_object.test | RUN | 0.177017 | 0.420253 | 0.502961 | 0.001030 | 0.001180 | 0.001062 |
| make_fused_procedure.test | RUN | 0.227964 | 0.526067 | 0.632155 | 0.001024 | 0.001309 | 0.001105 |
| make_unfused.test | RUN | 0.177408 | 0.435043 | 0.515757 | 0.001238 | 0.001387 | 0.001209 |
| invoke.test | RUN | 0.452119 | 1.570752 | 1.807248 | 0.001194 | 0.001256 | 0.001244 |
| invoke_function_object.test | RUN | 0.212717 | 0.558176 | 0.662509 | 0.001246 | 0.001289 | 0.001173 |
| invoke_procedure.test | RUN | 0.364464 | 1.158250 | 1.313823 | 0.000864 | 0.001302 | 0.001122 |
| swap.test | RUN | 0.273727 | 0.711497 | 0.847966 | 0.001103 | 0.001294 | 0.001168 |
| is_sequence.test | COMPILE | 0.045073 | 0.097820 | 0.105516 | — | — | — |
| is_view.test | COMPILE | 0.045464 | 0.095003 | 0.106373 | — | — | — |
| pair_deque.test | COMPILE | 0.100306 | 0.223496 | 0.250880 | — | — | — |
| pair_list.test | COMPILE | 0.094344 | 0.218452 | 0.246080 | — | — | — |
| pair_map.test | COMPILE | 0.099520 | 0.226912 | 0.274048 | — | — | — |
| pair_set.test | COMPILE | 0.102230 | 0.227692 | 0.256752 | — | — | — |
| pair_vector.test | COMPILE | 0.097613 | 0.224309 | 0.253743 | — | — | — |
| pair_nest.test | COMPILE | 0.037779 | 0.089988 | 0.099792 | — | — | — |
| index_sequence.test | COMPILE | 0.033792 | 0.063724 | 0.074241 | — | — | — |
| and.test | COMPILE | 0.025330 | 0.047052 | 0.053243 | — | — | — |
| tag_of.test | COMPILE | 0.044154 | 0.095814 | 0.099998 | — | — | — |
| unused.test | COMPILE | 0.022577 | 0.060804 | 0.060530 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.038240 | 0.097456 | 0.102610 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.032407 | 0.088403 | 0.096468 | — | — | — |
| quick.test | RUN | 0.133667 | 0.308023 | 0.327562 | 0.000352 | 0.000886 | 0.000803 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.001×, 1.004× | 0.995× |
| clang | 0.999× | 1.002×, 0.997× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000821s | 0.000849s | 0.000823s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000793s | 0.000828s | 0.000821s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000819s | 0.000829s | 0.000815s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000855s | 0.000847s | 0.000824s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000822s | 0.000811s | 0.000844s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000850s | 0.000820s | 0.000807s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000826s | 0.000837s | 0.000826s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000805s | 0.000796s | 0.000849s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000824s | 0.000816s | 0.000815s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000821s | 0.000805s | 0.000829s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000823s | 0.000827s | 0.000832s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000833s | 0.000798s | 0.000796s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000823s | 0.000827s | 0.000825s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000814s | 0.000820s | 0.000832s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000824s | 0.000826s | 0.000865s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000837s | 0.000794s | 0.000793s | byte equality observed |
| adapt_struct.test | 10 | 0.000831s | 0.000833s | 0.000819s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000796s | 0.000829s | 0.000796s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000829s | 0.000842s | 0.000795s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000834s | 0.000858s | 0.000817s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000828s | 0.000812s | 0.000824s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000841s | 0.000841s | 0.000837s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000844s | 0.000818s | 0.000839s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000838s | 0.000814s | 0.000830s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000837s | 0.000824s | 0.000820s | byte equality observed |
| all.test | 10 | 0.000817s | 0.000820s | 0.000846s | byte equality observed |
| any.test | 10 | 0.000822s | 0.000813s | 0.000818s | byte equality observed |
| array.test | 10 | 0.000821s | 0.000843s | 0.000811s | byte equality observed |
| as_deque.test | 10 | 0.000803s | 0.000802s | 0.000816s | byte equality observed |
| as_list.test | 10 | 0.000808s | 0.000853s | 0.000813s | byte equality observed |
| as_map.test | 10 | 0.000817s | 0.000850s | 0.000831s | byte equality observed |
| as_map_assoc.test | 10 | 0.000830s | 0.000823s | 0.000812s | byte equality observed |
| as_set.test | 10 | 0.000834s | 0.000844s | 0.000838s | byte equality observed |
| as_vector.test | 10 | 0.000815s | 0.000851s | 0.000831s | byte equality observed |
| back_extended_deque.test | 10 | 0.000784s | 0.000818s | 0.000829s | byte equality observed |
| boost_array.test | 10 | 0.000804s | 0.000832s | 0.000816s | byte equality observed |
| boost_tuple.test | 10 | 0.000835s | 0.000839s | 0.000801s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000821s | 0.000810s | 0.000781s | byte equality observed |
| clear.test | 10 | 0.000830s | 0.000817s | 0.000777s | byte equality observed |
| cons.test | 10 | 0.000857s | 0.000840s | 0.000834s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000820s | 0.000801s | 0.000813s | byte equality observed |
| convert_deque.test | 10 | 0.000810s | 0.000802s | 0.000817s | byte equality observed |
| convert_list.test | 10 | 0.000800s | 0.000789s | 0.000834s | byte equality observed |
| convert_std_pair.test | 10 | 0.000806s | 0.000790s | 0.000820s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000843s | 0.000816s | 0.000817s | byte equality observed |
| convert_vector.test | 10 | 0.000819s | 0.000825s | 0.000822s | byte equality observed |
| copy.test | 10 | 0.000809s | 0.000805s | 0.000801s | byte equality observed |
| count.test | 10 | 0.000790s | 0.000793s | 0.000813s | byte equality observed |
| count_if.test | 10 | 0.000790s | 0.000811s | 0.000799s | byte equality observed |
| deduce_sequence.test | 10 | 0.000817s | 0.000830s | 0.000805s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000829s | 0.000812s | 0.000806s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000830s | 0.000842s | 0.000811s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000809s | 0.000836s | 0.000817s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000824s | 0.000815s | 0.000816s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000812s | 0.000842s | 0.000806s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000808s | 0.000808s | 0.000807s | byte equality observed |
| define_struct.test | 10 | 0.000799s | 0.000807s | 0.000828s | byte equality observed |
| define_struct_empty.test | 10 | 0.000810s | 0.000851s | 0.000849s | byte equality observed |
| define_struct_inline.test | 10 | 0.000840s | 0.000856s | 0.000858s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000826s | 0.000809s | 0.000840s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000808s | 0.000824s | 0.000790s | byte equality observed |
| define_struct_move.test | 10 | 0.000799s | 0.000797s | 0.000821s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000822s | 0.000819s | 0.000793s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000806s | 0.000803s | 0.000813s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000824s | 0.000816s | 0.000797s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000789s | 0.000821s | 0.000811s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000793s | 0.000802s | 0.000836s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000834s | 0.000799s | 0.000809s | byte equality observed |
| deque_comparison.test | 10 | 0.000816s | 0.000831s | 0.000831s | byte equality observed |
| deque_construction.test | 10 | 0.000823s | 0.000822s | 0.000812s | byte equality observed |
| deque_copy.test | 10 | 0.000787s | 0.000837s | 0.000801s | byte equality observed |
| deque_hash.test | 10 | 0.000798s | 0.000801s | 0.000808s | byte equality observed |
| deque_iterator.test | 10 | 0.000811s | 0.000803s | 0.000784s | byte equality observed |
| deque_make.test | 10 | 0.000817s | 0.000840s | 0.000802s | byte equality observed |
| deque_misc.test | 10 | 0.000850s | 0.000831s | 0.000835s | byte equality observed |
| deque_move.test | 10 | 0.000842s | 0.000826s | 0.000800s | byte equality observed |
| deque_mutate.test | 10 | 0.000807s | 0.000813s | 0.000828s | byte equality observed |
| deque_nest.test | 10 | 0.000798s | 0.000811s | 0.000833s | byte equality observed |
| deque_tie.test | 10 | 0.000809s | 0.000775s | 0.000848s | byte equality observed |
| deque_value_at.test | 10 | 0.000806s | 0.000796s | 0.000821s | byte equality observed |
| erase.test | 10 | 0.000829s | 0.000829s | 0.000852s | byte equality observed |
| erase_key.test | 10 | 0.000847s | 0.000814s | 0.000839s | byte equality observed |
| filter.test | 10 | 0.000814s | 0.000827s | 0.000825s | byte equality observed |
| filter_if.test | 10 | 0.000833s | 0.000813s | 0.000810s | byte equality observed |
| filter_view.test | 10 | 0.000826s | 0.000854s | 0.000795s | byte equality observed |
| find.test | 10 | 0.000834s | 0.000833s | 0.000816s | byte equality observed |
| find_if.test | 10 | 0.000828s | 0.000839s | 0.000805s | byte equality observed |
| flatten.test | 10 | 0.000820s | 0.000801s | 0.000802s | byte equality observed |
| flatten_view.test | 10 | 0.000819s | 0.000798s | 0.000825s | byte equality observed |
| fold.test | 10 | 0.000819s | 0.000843s | 0.000830s | byte equality observed |
| for_each.test | 10 | 0.000844s | 0.000837s | 0.000812s | byte equality observed |
| front_extended_deque.test | 10 | 0.000823s | 0.000811s | 0.000808s | byte equality observed |
| fused.test | 10 | 0.000813s | 0.000787s | 0.000786s | byte equality observed |
| fused_function_object.test | 10 | 0.000822s | 0.000806s | 0.000806s | byte equality observed |
| fused_procedure.test | 10 | 0.000795s | 0.000784s | 0.000816s | byte equality observed |
| github-176.test | 10 | 0.000796s | 0.000804s | 0.000828s | byte equality observed |
| hash.test | 10 | 0.000817s | 0.000814s | 0.000782s | byte equality observed |
| identity_view.test | 10 | 0.000832s | 0.000819s | 0.000829s | byte equality observed |
| insert.test | 10 | 0.000828s | 0.000841s | 0.000800s | byte equality observed |
| insert_range.test | 10 | 0.000849s | 0.000841s | 0.000837s | byte equality observed |
| invoke.test | 10 | 0.000843s | 0.000815s | 0.000793s | byte equality observed |
| invoke_function_object.test | 10 | 0.000798s | 0.000787s | 0.000807s | byte equality observed |
| invoke_procedure.test | 10 | 0.000797s | 0.000816s | 0.000800s | byte equality observed |
| io.test | 10 | 0.000889s | 0.000892s | 0.000872s | byte equality observed |
| iter_fold.test | 10 | 0.000792s | 0.000833s | 0.000814s | byte equality observed |
| iterator_range.test | 10 | 0.000813s | 0.000818s | 0.000815s | byte equality observed |
| join.test | 10 | 0.000777s | 0.000820s | 0.000810s | byte equality observed |
| joint_view.test | 10 | 0.000841s | 0.000818s | 0.000849s | byte equality observed |
| list_comparison.test | 10 | 0.000809s | 0.000798s | 0.000794s | byte equality observed |
| list_construction.test | 10 | 0.000817s | 0.000800s | 0.000794s | byte equality observed |
| list_copy.test | 10 | 0.000833s | 0.000834s | 0.000803s | byte equality observed |
| list_hash.test | 10 | 0.000805s | 0.000836s | 0.000791s | byte equality observed |
| list_iterator.test | 10 | 0.000799s | 0.000800s | 0.000805s | byte equality observed |
| list_make.test | 10 | 0.000826s | 0.000802s | 0.000811s | byte equality observed |
| list_misc.test | 10 | 0.000835s | 0.000823s | 0.000817s | byte equality observed |
| list_mutate.test | 10 | 0.000798s | 0.000802s | 0.000817s | byte equality observed |
| list_nest.test | 10 | 0.000832s | 0.000820s | 0.000818s | byte equality observed |
| list_tie.test | 10 | 0.000835s | 0.000803s | 0.000838s | byte equality observed |
| list_value_at.test | 10 | 0.000815s | 0.000797s | 0.000801s | byte equality observed |
| make_fused.test | 10 | 0.000782s | 0.000833s | 0.000766s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000814s | 0.000803s | 0.000819s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000833s | 0.000783s | 0.000837s | byte equality observed |
| make_list.test | 10 | 0.000802s | 0.000844s | 0.000813s | byte equality observed |
| make_unfused.test | 10 | 0.000806s | 0.000802s | 0.000819s | byte equality observed |
| make_vector.test | 10 | 0.000802s | 0.000812s | 0.000827s | byte equality observed |
| map.test | 10 | 0.000835s | 0.000851s | 0.000814s | byte equality observed |
| map_comparison.test | 10 | 0.000806s | 0.000811s | 0.000802s | byte equality observed |
| map_construction.test | 10 | 0.000826s | 0.000816s | 0.000821s | byte equality observed |
| map_copy.test | 10 | 0.000837s | 0.000846s | 0.000811s | byte equality observed |
| map_misc.test | 10 | 0.000809s | 0.000815s | 0.000818s | byte equality observed |
| map_move.test | 10 | 0.000823s | 0.000827s | 0.000828s | byte equality observed |
| map_mutate.test | 10 | 0.000802s | 0.000816s | 0.000826s | byte equality observed |
| map_tie.test | 10 | 0.000795s | 0.000794s | 0.000821s | byte equality observed |
| move.test | 10 | 0.000803s | 0.000790s | 0.000827s | byte equality observed |
| nil.test | 10 | 0.000798s | 0.000805s | 0.000803s | byte equality observed |
| none.test | 10 | 0.000803s | 0.000766s | 0.000809s | byte equality observed |
| nview.test | 10 | 0.000835s | 0.000825s | 0.000795s | byte equality observed |
| pop_back.test | 10 | 0.000834s | 0.000839s | 0.000834s | byte equality observed |
| pop_front.test | 10 | 0.000843s | 0.000845s | 0.000817s | byte equality observed |
| push_back.test | 10 | 0.000838s | 0.000841s | 0.000812s | byte equality observed |
| push_front.test | 10 | 0.000825s | 0.000803s | 0.000804s | byte equality observed |
| quick.test | 10 | 0.000361s | 0.000782s | 0.000821s | byte equality observed |
| ref_vector.test | 10 | 0.000801s | 0.000824s | 0.000800s | byte equality observed |
| remove.test | 10 | 0.000816s | 0.000850s | 0.000821s | byte equality observed |
| remove_if.test | 10 | 0.000826s | 0.000847s | 0.000821s | byte equality observed |
| repetitive_view.test | 10 | 0.000798s | 0.000822s | 0.000797s | byte equality observed |
| replace.test | 10 | 0.000814s | 0.000838s | 0.000805s | byte equality observed |
| replace_if.test | 10 | 0.000817s | 0.000841s | 0.000841s | byte equality observed |
| reverse.test | 10 | 0.000836s | 0.000852s | 0.000813s | byte equality observed |
| reverse_fold.test | 10 | 0.000829s | 0.000826s | 0.000812s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000831s | 0.000818s | 0.000833s | byte equality observed |
| reverse_view.test | 10 | 0.000836s | 0.000824s | 0.000816s | byte equality observed |
| segmented_find.test | 10 | 0.000785s | 0.000801s | 0.000808s | byte equality observed |
| segmented_find_if.test | 10 | 0.000807s | 0.000815s | 0.000795s | byte equality observed |
| segmented_fold.test | 10 | 0.000823s | 0.000847s | 0.000819s | byte equality observed |
| segmented_for_each.test | 10 | 0.000835s | 0.000847s | 0.000820s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000863s | 0.000802s | 0.000824s | byte equality observed |
| set.test | 10 | 0.000826s | 0.000810s | 0.000837s | byte equality observed |
| single_view.test | 10 | 0.000820s | 0.000817s | 0.000817s | byte equality observed |
| std_array.test | 10 | 0.000829s | 0.000827s | 0.000822s | byte equality observed |
| std_pair.test | 10 | 0.000829s | 0.000835s | 0.000837s | byte equality observed |
| std_tuple.test | 10 | 0.000827s | 0.000786s | 0.000789s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000818s | 0.000805s | 0.000789s | byte equality observed |
| swap.test | 10 | 0.000833s | 0.000792s | 0.000781s | byte equality observed |
| transform.test | 10 | 0.000822s | 0.000805s | 0.000822s | byte equality observed |
| transform_view.test | 10 | 0.000817s | 0.000853s | 0.000830s | byte equality observed |
| tuple_comparison.test | 10 | 0.000815s | 0.000806s | 0.000791s | byte equality observed |
| tuple_construction.test | 10 | 0.000826s | 0.000816s | 0.000795s | byte equality observed |
| tuple_conversion.test | 10 | 0.000808s | 0.000808s | 0.000833s | byte equality observed |
| tuple_copy.test | 10 | 0.000812s | 0.000808s | 0.000811s | byte equality observed |
| tuple_element.test | 10 | 0.000811s | 0.000807s | 0.000826s | byte equality observed |
| tuple_hash.test | 10 | 0.000825s | 0.000843s | 0.000829s | byte equality observed |
| tuple_make.test | 10 | 0.000820s | 0.000801s | 0.000810s | byte equality observed |
| tuple_misc.test | 10 | 0.000784s | 0.000811s | 0.000817s | byte equality observed |
| tuple_mutate.test | 10 | 0.000796s | 0.000775s | 0.000795s | byte equality observed |
| tuple_nest.test | 10 | 0.000807s | 0.000791s | 0.000814s | byte equality observed |
| tuple_tie.test | 10 | 0.000802s | 0.000802s | 0.000792s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000788s | 0.000836s | 0.000797s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000821s | 0.000787s | 0.000785s | byte equality observed |
| unfused.test | 10 | 0.000810s | 0.000817s | 0.000788s | byte equality observed |
| unfused_typed.test | 10 | 0.000799s | 0.000825s | 0.000824s | byte equality observed |
| vector_comparison.test | 10 | 0.000792s | 0.000803s | 0.000774s | byte equality observed |
| vector_construction.test | 10 | 0.000782s | 0.000811s | 0.000784s | byte equality observed |
| vector_conversion.test | 10 | 0.000785s | 0.000790s | 0.000803s | byte equality observed |
| vector_copy.test | 10 | 0.000794s | 0.000794s | 0.000812s | byte equality observed |
| vector_hash.test | 10 | 0.000792s | 0.000834s | 0.000840s | byte equality observed |
| vector_iterator.test | 10 | 0.000791s | 0.000785s | 0.000831s | byte equality observed |
| vector_make.test | 10 | 0.000797s | 0.000813s | 0.000825s | byte equality observed |
| vector_misc.test | 10 | 0.000809s | 0.000838s | 0.000818s | byte equality observed |
| vector_move.test | 10 | 0.000821s | 0.000837s | 0.000828s | byte equality observed |
| vector_mutate.test | 10 | 0.000798s | 0.000831s | 0.000783s | byte equality observed |
| vector_n.test | 10 | 0.000826s | 0.000828s | 0.000814s | byte equality observed |
| vector_nest.test | 10 | 0.000834s | 0.000836s | 0.000826s | byte equality observed |
| vector_tie.test | 10 | 0.000809s | 0.000804s | 0.000791s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000804s | 0.000829s | 0.000784s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000843s | 0.000815s | 0.000819s | byte equality observed |
| vector_value_at.test | 10 | 0.000820s | 0.000817s | 0.000818s | byte equality observed |
| zip.test | 10 | 0.000800s | 0.000796s | 0.000801s | byte equality observed |
| zip2.test | 10 | 0.000786s | 0.000805s | 0.000817s | byte equality observed |
| zip_ignore.test | 10 | 0.000796s | 0.000821s | 0.000834s | byte equality observed |
| zip_view.test | 10 | 0.000792s | 0.000805s | 0.000834s | byte equality observed |
| zip_view2.test | 10 | 0.000793s | 0.000811s | 0.000794s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000787s | 0.000794s | 0.000780s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43967972441).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
