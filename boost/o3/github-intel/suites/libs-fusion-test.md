# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.281234 | 0.630801 | 0.802211 | 0.001075 | 0.001180 | 0.001094 |
| any.test | RUN | 0.272971 | 0.587215 | 0.755524 | 0.001043 | 0.001149 | 0.001184 |
| clear.test | RUN | 0.197309 | 0.557834 | 0.626578 | 0.001185 | 0.001432 | 0.001129 |
| copy.test | RUN | 0.167786 | 0.408382 | 0.505848 | 0.001269 | 0.001405 | 0.001178 |
| count.test | RUN | 0.190465 | 0.453264 | 0.556945 | 0.001158 | 0.001255 | 0.001240 |
| count_if.test | RUN | 0.175552 | 0.419698 | 0.517302 | 0.001132 | 0.001220 | 0.001248 |
| erase.test | RUN | 0.255340 | 0.752264 | 0.849444 | 0.001118 | 0.001389 | 0.001117 |
| erase_key.test | RUN | 0.248727 | 0.752154 | 0.796720 | 0.001181 | 0.001279 | 0.001246 |
| filter.test | RUN | 0.226000 | 0.631712 | 0.728226 | 0.001255 | 0.001372 | 0.001226 |
| filter_if.test | RUN | 0.251631 | 0.737086 | 0.845390 | 0.001291 | 0.001200 | 0.001354 |
| find.test | RUN | 0.215297 | 0.515258 | 0.644717 | 0.001126 | 0.001117 | 0.001125 |
| find_if.test | RUN | 0.204485 | 0.454832 | 0.595971 | 0.001201 | 0.001220 | 0.001288 |
| fold.test | RUN | 0.230092 | 0.573239 | 0.734758 | 0.001385 | 0.001377 | 0.001119 |
| for_each.test | RUN | 0.205516 | 0.525818 | 0.638456 | 0.001301 | 0.001433 | 0.001243 |
| insert.test | RUN | 0.303263 | 0.933780 | 1.028958 | 0.001169 | 0.001268 | 0.001248 |
| insert_range.test | RUN | 0.301115 | 0.935102 | 1.027561 | 0.001216 | 0.001120 | 0.001298 |
| iter_fold.test | RUN | 0.336293 | 0.873719 | 1.227403 | 0.001239 | 0.001400 | 0.001215 |
| move.test | RUN | 0.175412 | 0.421307 | 0.526185 | 0.001236 | 0.001201 | 0.001091 |
| none.test | RUN | 0.273572 | 0.603616 | 0.785700 | 0.001184 | 0.001210 | 0.001103 |
| pop_back.test | RUN | 0.279281 | 0.819652 | 0.909287 | 0.001303 | 0.001304 | 0.001189 |
| pop_front.test | RUN | 0.230286 | 0.660905 | 0.738393 | 0.001177 | 0.001280 | 0.001229 |
| push_back.test | RUN | 0.289807 | 0.933829 | 1.006470 | 0.001202 | 0.001318 | 0.001107 |
| push_front.test | RUN | 0.253643 | 0.782236 | 0.849950 | 0.001204 | 0.001328 | 0.001151 |
| remove.test | RUN | 0.286599 | 0.896911 | 0.994164 | 0.001130 | 0.001154 | 0.001093 |
| remove_if.test | RUN | 0.250145 | 0.730156 | 0.846512 | 0.001165 | 0.001278 | 0.001061 |
| replace.test | RUN | 0.246750 | 0.724338 | 0.795928 | 0.001204 | 0.001288 | 0.001135 |
| replace_if.test | RUN | 0.243252 | 0.722244 | 0.792639 | 0.001171 | 0.001426 | 0.001195 |
| reverse_fold.test | RUN | 0.379333 | 0.985104 | 1.320271 | 0.001413 | 0.001479 | 0.001290 |
| reverse_iter_fold.test | RUN | 0.374313 | 1.024275 | 1.390579 | 0.001307 | 0.001277 | 0.001105 |
| reverse.test | RUN | 0.238311 | 0.737181 | 0.796460 | 0.001182 | 0.001423 | 0.001188 |
| segmented_for_each.test | RUN | 0.397045 | 1.410179 | 1.649047 | 0.001119 | 0.001228 | 0.001264 |
| segmented_find.test | RUN | 0.252665 | 0.727353 | 0.907382 | 0.001071 | 0.001210 | 0.001158 |
| segmented_find_if.test | RUN | 0.257197 | 0.738881 | 0.919775 | 0.001123 | 0.001239 | 0.001107 |
| segmented_fold.test | RUN | 0.318593 | 0.977403 | 1.172627 | 0.001277 | 0.001267 | 0.001177 |
| transform.test | RUN | 0.263086 | 0.787420 | 0.873888 | 0.001158 | 0.001247 | 0.001172 |
| join.test | RUN | 0.188395 | 0.470086 | 0.588785 | 0.001339 | 0.001320 | 0.001227 |
| zip.test | RUN | 0.314454 | 0.884610 | 1.116372 | 0.001250 | 0.001374 | 0.001243 |
| zip2.test | RUN | 0.322392 | 0.856117 | 1.081754 | 0.001180 | 0.001316 | 0.001137 |
| zip_ignore.test | RUN | 0.238802 | 0.600570 | 0.699146 | 0.001095 | 0.001292 | 0.001136 |
| flatten.test | RUN | 0.223776 | 0.648345 | 0.739426 | 0.001154 | 0.001402 | 0.001231 |
| ticket-5490.test | COMPILE | 0.121128 | 0.275308 | 0.329750 | — | — | — |
| as_deque.test | RUN | 0.226711 | 0.610288 | 0.777546 | 0.001173 | 0.001249 | 0.001230 |
| as_list.test | RUN | 0.253895 | 0.770113 | 0.845147 | 0.001239 | 0.001260 | 0.001278 |
| as_map.test | RUN | 0.249728 | 0.761090 | 0.840639 | 0.001195 | 0.001256 | 0.001109 |
| as_map_assoc.test | RUN | 0.250023 | 0.696633 | 0.804211 | 0.001067 | 0.001321 | 0.001174 |
| as_set.test | RUN | 0.286511 | 0.869986 | 0.989706 | 0.001276 | 0.001223 | 0.001213 |
| as_vector.test | RUN | 0.259178 | 0.783762 | 0.857304 | 0.001089 | 0.001250 | 0.001121 |
| boost_tuple.test | RUN | 0.258365 | 0.780792 | 0.858092 | 0.001116 | 0.001246 | 0.001148 |
| boost_tuple_iterator.test | RUN | 0.172413 | 0.451283 | 0.516829 | 0.001335 | 0.001343 | 0.001272 |
| cons.test | RUN | 0.325864 | 0.875848 | 1.025805 | 0.001042 | 0.001180 | 0.001224 |
| convert_boost_tuple.test | RUN | 0.205371 | 0.677416 | 0.670369 | 0.001419 | 0.001093 | 0.001146 |
| convert_deque.test | RUN | 0.207581 | 0.656613 | 0.665033 | 0.001272 | 0.001235 | 0.000867 |
| convert_list.test | RUN | 0.201913 | 0.675238 | 0.665164 | 0.001253 | 0.001133 | 0.001014 |
| convert_std_pair.test | RUN | 0.218100 | 0.669429 | 0.683814 | 0.001279 | 0.001262 | 0.001198 |
| convert_std_tuple.test | RUN | 0.203699 | 0.655849 | 0.661802 | 0.001123 | 0.001371 | 0.001257 |
| convert_vector.test | RUN | 0.206294 | 0.661767 | 0.662648 | 0.001123 | 0.001114 | 0.001054 |
| filter_view.test | RUN | 0.245751 | 0.693470 | 0.791269 | 0.001072 | 0.001174 | 0.001215 |
| hash.test | RUN | 0.242019 | 0.626536 | 0.752335 | 0.001187 | 0.001098 | 0.001292 |
| io.test | RUN | 0.265046 | 0.907618 | 0.918735 | 0.001236 | 0.001597 | 0.001356 |
| iterator_range.test | RUN | 0.231312 | 0.661332 | 0.746555 | 0.001113 | 0.001294 | 0.001146 |
| joint_view.test | RUN | 0.316917 | 1.123134 | 1.155790 | 0.001296 | 0.001194 | 0.001174 |
| list_comparison.test | RUN | 0.185538 | 0.461468 | 0.537771 | 0.001146 | 0.001194 | 0.001152 |
| list_construction.test | RUN | 0.173610 | 0.447430 | 0.547127 | 0.001172 | 0.001336 | 0.001097 |
| list_copy.test | RUN | 0.268267 | 0.824407 | 0.931579 | 0.001136 | 0.001136 | 0.001180 |
| list_iterator.test | RUN | 0.175387 | 0.444901 | 0.511624 | 0.001075 | 0.001253 | 0.001172 |
| list_hash.test | RUN | 0.242229 | 0.921315 | 0.754567 | 0.001259 | 0.001277 | 0.001076 |
| list_make.test | RUN | 0.186677 | 0.494836 | 0.584164 | 0.001290 | 0.001208 | 0.001166 |
| list_misc.test | RUN | 0.243276 | 0.585939 | 0.706007 | 0.001075 | 0.001173 | 0.001191 |
| list_mutate.test | RUN | 0.167367 | 0.385190 | 0.474637 | 0.001069 | 0.001179 | 0.001223 |
| list_nest.test | RUN | 0.335892 | 1.124538 | 1.297420 | 0.000862 | 0.001117 | 0.001151 |
| list_tie.test | RUN | 0.176685 | 0.454677 | 0.529349 | 0.001348 | 0.001252 | 0.001133 |
| list_value_at.test | RUN | 0.167812 | 0.409781 | 0.489505 | 0.001188 | 0.001277 | 0.001210 |
| deque_comparison.test | RUN | 0.178858 | 0.467975 | 0.540583 | 0.001084 | 0.001389 | 0.001117 |
| deque_construction.test | RUN | 0.177007 | 0.442612 | 0.571940 | 0.001326 | 0.001270 | 0.001174 |
| deque_copy.test | RUN | 0.256288 | 0.755037 | 0.863036 | 0.001208 | 0.001112 | 0.001145 |
| deque_iterator.test | RUN | 0.175697 | 0.466725 | 0.531711 | 0.001077 | 0.001171 | 0.001109 |
| deque_hash.test | RUN | 0.247420 | 0.884845 | 0.748476 | 0.001077 | 0.001361 | 0.001206 |
| deque_is_constructible.test | COMPILE | 0.095536 | 0.199779 | 0.244639 | — | — | — |
| deque_make.test | RUN | 0.178917 | 0.472310 | 0.554516 | 0.001190 | 0.001302 | 0.001280 |
| deque_misc.test | RUN | 0.234251 | 0.586746 | 0.684097 | 0.001080 | 0.001232 | 0.001027 |
| deque_move.test | RUN | 0.184476 | 0.478851 | 0.536809 | 0.001093 | 0.001202 | 0.001029 |
| deque_mutate.test | RUN | 0.160528 | 0.383829 | 0.463823 | 0.001242 | 0.001285 | 0.001194 |
| deque_nest.test | RUN | 0.506587 | 1.829052 | 2.074998 | 0.001221 | 0.001234 | 0.001153 |
| deque_tie.test | RUN | 0.172682 | 0.415384 | 0.495987 | 0.001312 | 0.001257 | 0.001166 |
| deque_value_at.test | RUN | 0.165040 | 0.403698 | 0.491315 | 0.001373 | 0.001172 | 0.001138 |
| front_extended_deque.test | RUN | 0.244647 | 0.603269 | 0.724806 | 0.001160 | 0.001274 | 0.001079 |
| back_extended_deque.test | RUN | 0.242801 | 0.598716 | 0.761028 | 0.001214 | 0.001143 | 0.001224 |
| make_list.test | RUN | 0.194143 | 0.492545 | 0.570098 | 0.001140 | 0.001154 | 0.001283 |
| make_vector.test | RUN | 0.180493 | 0.487747 | 0.547657 | 0.001069 | 0.001111 | 0.001290 |
| map.test | RUN | 0.254080 | 0.745525 | 0.819472 | 0.001317 | 0.001264 | 0.001201 |
| map_comparison.test | RUN | 0.182225 | 0.472340 | 0.556200 | 0.001140 | 0.001246 | 0.001105 |
| map_construction.test | RUN | 0.181256 | 0.445826 | 0.534296 | 0.001097 | 0.001364 | 0.001191 |
| map_copy.test | RUN | 0.221826 | 0.588369 | 0.680897 | 0.001050 | 0.001338 | 0.001163 |
| map_misc.test | RUN | 0.236962 | 0.585352 | 0.682197 | 0.001154 | 0.001369 | 0.001082 |
| map_move.test | RUN | 0.184865 | 0.499745 | 0.549057 | 0.001295 | 0.001162 | 0.001230 |
| map_mutate.test | RUN | 0.163710 | 0.390037 | 0.473282 | 0.001054 | 0.001305 | 0.001117 |
| map_tie.test | RUN | 0.174478 | 0.390268 | 0.480734 | 0.001096 | 0.001216 | 0.001148 |
| nil.test | RUN | 0.114049 | 0.271638 | 0.336522 | 0.001102 | 0.001192 | 0.001141 |
| nview.test | RUN | 0.230317 | 0.572567 | 0.699946 | 0.001100 | 0.001375 | 0.001167 |
| reverse_view.test | RUN | 0.309818 | 0.968734 | 1.041953 | 0.001181 | 0.001311 | 0.001160 |
| segmented_iterator_range.test | RUN | 0.352020 | 1.136542 | 1.300061 | 0.001224 | 0.001385 | 0.001120 |
| set.test | RUN | 0.224133 | 0.637382 | 0.736493 | 0.001275 | 0.001296 | 0.001124 |
| single_view.test | RUN | 0.209643 | 0.589872 | 0.670889 | 0.001145 | 0.001376 | 0.001188 |
| std_pair.test | RUN | 0.265452 | 0.754861 | 0.848562 | 0.001214 | 0.001252 | 0.001116 |
| boost_array.test | RUN | 0.217738 | 0.512116 | 0.632100 | 0.001117 | 0.001266 | 0.001159 |
| array.test | RUN | 0.216021 | 0.515649 | 0.629587 | 0.001065 | 0.001318 | 0.001095 |
| std_array.test | RUN | 0.222201 | 0.522894 | 0.617954 | 0.001088 | 0.001175 | 0.001119 |
| tuple_comparison.test | RUN | 0.189067 | 0.490279 | 0.589908 | 0.001244 | 0.001377 | 0.001184 |
| tuple_construction.test | RUN | 0.197843 | 0.483648 | 0.596442 | 0.001213 | 0.001210 | 0.001141 |
| tuple_conversion.test | RUN | 0.441392 | 1.523064 | 1.949884 | 0.001105 | 0.001429 | 0.001089 |
| tuple_copy.test | RUN | 0.281846 | 0.889351 | 1.026398 | 0.001399 | 0.001213 | 0.001084 |
| tuple_element.test | RUN | 0.179262 | 0.441004 | 0.533195 | 0.001241 | 0.001193 | 0.001174 |
| tuple_make.test | RUN | 0.199062 | 0.510934 | 0.586376 | 0.001058 | 0.001213 | 0.001125 |
| tuple_misc.test | RUN | 0.249568 | 0.627659 | 0.737572 | 0.001155 | 0.001147 | 0.001132 |
| tuple_mutate.test | RUN | 0.179236 | 0.410088 | 0.536102 | 0.001162 | 0.001144 | 0.001213 |
| tuple_nest.test | RUN | 0.733127 | 3.156875 | 3.615426 | 0.001277 | 0.001230 | 0.001290 |
| tuple_hash.test | RUN | 0.253773 | 0.904302 | 0.769663 | 0.001293 | 0.001250 | 0.001116 |
| tuple_tie.test | RUN | 0.182663 | 0.458880 | 0.565175 | 0.001153 | 0.001128 | 0.001005 |
| tuple_traits__maybe_variadic.test | RUN | 0.200389 | 0.567925 | 0.590464 | 0.001046 | 0.001114 | 0.001029 |
| tuple_traits__no_variadic.test | RUN | 0.222627 | 0.568493 | 0.653345 | 0.001056 | 0.001344 | 0.001269 |
| transform_view.test | RUN | 0.296962 | 0.944425 | 1.033086 | 0.001321 | 0.001254 | 0.001217 |
| identity_view.test | RUN | 0.286046 | 0.879040 | 0.968412 | 0.000966 | 0.001219 | 0.001295 |
| vector_comparison.test | RUN | 0.179394 | 0.472651 | 0.605846 | 0.001237 | 0.001245 | 0.001148 |
| vector_construction.test | RUN | 0.182291 | 0.449917 | 0.536666 | 0.001051 | 0.001340 | 0.001205 |
| vector_conversion.test | RUN | 0.525350 | 2.034797 | 2.445621 | 0.001255 | 0.001152 | 0.001124 |
| vector_copy.test | RUN | 0.280564 | 0.876154 | 1.016465 | 0.001169 | 0.001266 | 0.001290 |
| vector_iterator.test | RUN | 0.172228 | 0.451702 | 0.534061 | 0.001444 | 0.001295 | 0.001215 |
| vector_make.test | RUN | 0.183529 | 0.479188 | 0.575258 | 0.001169 | 0.001231 | 0.001239 |
| vector_misc.test | RUN | 0.236473 | 0.594481 | 0.736409 | 0.001011 | 0.001215 | 0.001256 |
| vector_move.test | RUN | 0.181690 | 0.482685 | 0.547732 | 0.001084 | 0.001294 | 0.001284 |
| vector_mutate.test | RUN | 0.162862 | 0.391222 | 0.474849 | 0.001132 | 0.001280 | 0.001099 |
| vector_n.test | RUN | 0.202258 | 0.498181 | 0.636189 | 0.001180 | 0.001243 | 0.001187 |
| vector_nest.test | RUN | 0.753079 | 3.372506 | 3.666437 | 0.001077 | 0.001191 | 0.001180 |
| vector_hash.test | RUN | 0.243006 | 0.888272 | 0.733762 | 0.001139 | 0.001176 | 0.001245 |
| vector_tie.test | RUN | 0.170562 | 0.421392 | 0.528252 | 0.001285 | 0.001138 | 0.001138 |
| vector_traits__maybe_variadic.test | RUN | 0.187170 | 0.538114 | 0.539391 | 0.001186 | 0.001206 | 0.001386 |
| vector_traits__no_variadic.test | RUN | 0.203064 | 0.543798 | 0.577678 | 0.001192 | 0.001175 | 0.001101 |
| vector_value_at.test | RUN | 0.171194 | 0.394557 | 0.487773 | 0.001018 | 0.001236 | 0.001106 |
| zip_view.test | RUN | 0.343670 | 0.981309 | 1.241877 | 0.001218 | 0.001222 | 0.001207 |
| zip_view2.test | RUN | 0.281020 | 0.750719 | 0.958055 | 0.001264 | 0.001300 | 0.001222 |
| zip_view_ignore.test | RUN | 0.270345 | 0.682318 | 0.871939 | 0.001151 | 0.001071 | 0.001192 |
| repetitive_view.test | RUN | 0.447494 | 1.252209 | 1.688743 | 0.001183 | 0.001255 | 0.001158 |
| deduce_sequence.test | RUN | 0.214078 | 0.545166 | 0.643495 | 0.001177 | 0.001296 | 0.001236 |
| adapt_adt_named.test | RUN | 0.264324 | 0.762074 | 0.833251 | 0.001089 | 0.001083 | 0.001225 |
| adapt_adt_named_empty.test | RUN | 0.230254 | 0.614603 | 0.689247 | 0.001054 | 0.001206 | 0.001150 |
| adapt_adt.test | RUN | 0.296710 | 1.015068 | 1.034742 | 0.001318 | 0.001216 | 0.001141 |
| adapt_adt_empty.test | RUN | 0.225485 | 0.615537 | 0.679514 | 0.001127 | 0.001235 | 0.001331 |
| adapt_assoc_adt_named.test | RUN | 0.288625 | 0.812348 | 0.915399 | 0.001121 | 0.001268 | 0.001148 |
| adapt_assoc_adt_named_empty.test | RUN | 0.229408 | 0.611063 | 0.687573 | 0.001139 | 0.001256 | 0.001163 |
| adapt_assoc_adt.test | RUN | 0.296930 | 0.825845 | 0.958909 | 0.001327 | 0.001392 | 0.001238 |
| adapt_assoc_adt_empty.test | RUN | 0.225643 | 0.613221 | 0.697034 | 0.001147 | 0.001288 | 0.001095 |
| adapt_assoc_struct_named.test | RUN | 0.283795 | 0.787592 | 0.899294 | 0.001058 | 0.001280 | 0.001174 |
| adapt_assoc_struct_named_empty.test | RUN | 0.222772 | 0.611460 | 0.682436 | 0.001199 | 0.001270 | 0.001307 |
| adapt_assoc_struct.test | RUN | 0.260050 | 0.733850 | 0.832879 | 0.001257 | 0.001332 | 0.001103 |
| adapt_assoc_struct_empty.test | RUN | 0.217919 | 0.608493 | 0.692177 | 0.001201 | 0.001316 | 0.000877 |
| adapt_assoc_tpl_adt.test | RUN | 0.307421 | 0.850189 | 0.981497 | 0.001178 | 0.001237 | 0.001236 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.229703 | 0.615451 | 0.692183 | 0.001139 | 0.001316 | 0.001255 |
| adapt_assoc_tpl_struct.test | RUN | 0.247707 | 0.715779 | 0.809559 | 0.001208 | 0.001279 | 0.001127 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.222096 | 0.610148 | 0.685626 | 0.001226 | 0.001283 | 0.001384 |
| adapt_struct_named.test | RUN | 0.260849 | 0.747405 | 0.815423 | 0.001145 | 0.001306 | 0.001154 |
| adapt_struct_named_empty.test | RUN | 0.228244 | 0.613048 | 0.682291 | 0.001153 | 0.001352 | 0.001115 |
| adapt_struct.test | RUN | 0.278982 | 0.862794 | 0.930176 | 0.001271 | 0.001316 | 0.001204 |
| adapt_struct_empty.test | RUN | 0.223148 | 0.621492 | 0.688841 | 0.001431 | 0.001257 | 0.001162 |
| adapt_tpl_adt.test | RUN | 0.290928 | 0.976424 | 0.965908 | 0.001054 | 0.001413 | 0.001279 |
| adapt_tpl_adt_empty.test | RUN | 0.231035 | 0.619523 | 0.693681 | 0.001137 | 0.001196 | 0.001308 |
| adapt_tpl_struct.test | RUN | 0.239566 | 0.697197 | 0.757942 | 0.001161 | 0.001343 | 0.001248 |
| adapt_tpl_struct_empty.test | RUN | 0.223122 | 0.622861 | 0.697177 | 0.001244 | 0.001230 | 0.001173 |
| adt_attribute_proxy.test | RUN | 0.254393 | 0.598823 | 0.725353 | 0.001094 | 0.001244 | 0.001267 |
| define_struct.test | RUN | 0.314032 | 0.836526 | 0.975410 | 0.001209 | 0.001196 | 0.001118 |
| define_struct_empty.test | RUN | 0.272161 | 0.693482 | 0.780076 | 0.001169 | 0.001312 | 0.001230 |
| define_struct_move.test | RUN | 0.168513 | 0.390206 | 0.467364 | 0.001211 | 0.001360 | 0.001206 |
| define_struct_inline.test | RUN | 0.319154 | 1.021096 | 1.084347 | 0.001179 | 0.001324 | 0.001172 |
| define_struct_inline_empty.test | RUN | 0.264503 | 0.705134 | 0.803851 | 0.001239 | 0.001198 | 0.001239 |
| define_struct_inline_move.test | RUN | 0.170885 | 0.386830 | 0.475062 | 0.001092 | 0.001242 | 0.001169 |
| define_assoc_struct.test | RUN | 0.298012 | 0.797049 | 0.923477 | 0.001246 | 0.001344 | 0.001159 |
| define_assoc_struct_empty.test | RUN | 0.260579 | 0.687755 | 0.788482 | 0.001132 | 0.001261 | 0.001191 |
| define_assoc_struct_move.test | RUN | 0.174060 | 0.382683 | 0.463265 | 0.001084 | 0.001254 | 0.001259 |
| define_tpl_struct.test | RUN | 0.305326 | 0.804915 | 0.919645 | 0.001123 | 0.001195 | 0.001142 |
| define_tpl_struct_empty.test | RUN | 0.269271 | 0.694960 | 0.800890 | 0.001350 | 0.001228 | 0.001275 |
| define_tpl_struct_move.test | RUN | 0.167912 | 0.393922 | 0.467342 | 0.001093 | 0.001217 | 0.001172 |
| define_tpl_struct_inline.test | RUN | 0.308879 | 0.944739 | 1.005532 | 0.001242 | 0.001058 | 0.001242 |
| define_tpl_struct_inline_empty.test | RUN | 0.266572 | 0.691379 | 0.794126 | 0.001349 | 0.001115 | 0.001184 |
| define_tpl_struct_inline_move.test | RUN | 0.167274 | 0.392022 | 0.487747 | 0.001038 | 0.001268 | 0.000938 |
| define_assoc_tpl_struct.test | RUN | 0.295256 | 0.820217 | 0.929685 | 0.001324 | 0.001282 | 0.001189 |
| define_assoc_tpl_struct_empty.test | RUN | 0.272568 | 0.695282 | 0.797813 | 0.001258 | 0.001166 | 0.001056 |
| define_assoc_tpl_struct_move.test | RUN | 0.170919 | 0.390572 | 0.476898 | 0.001224 | 0.001334 | 0.001147 |
| std_tuple.test | RUN | 0.175443 | 0.435927 | 0.525922 | 0.001125 | 0.001212 | 0.001180 |
| std_tuple_iterator.test | RUN | 0.179637 | 0.466953 | 0.534750 | 0.001124 | 0.001215 | 0.001092 |
| ref_vector.test | RUN | 0.203813 | 0.468195 | 0.568106 | 0.001219 | 0.001236 | 0.001162 |
| flatten_view.test | RUN | 0.210688 | 0.584907 | 0.689932 | 0.001231 | 0.001273 | 0.001140 |
| github-159.test | COMPILE | 0.095418 | 0.214271 | 0.253952 | — | — | — |
| github-176.test | RUN | 0.196454 | 0.524895 | 0.577663 | 0.001114 | 0.001379 | 0.001121 |
| size.test | COMPILE | 0.169074 | 0.355406 | 0.439207 | — | — | — |
| fused.test | RUN | 0.230588 | 0.546824 | 0.664616 | 0.001222 | 0.001199 | 0.001160 |
| fused_function_object.test | RUN | 0.179995 | 0.417528 | 0.505120 | 0.001266 | 0.001178 | 0.001174 |
| fused_procedure.test | RUN | 0.225918 | 0.525965 | 0.631215 | 0.001203 | 0.001156 | 0.001131 |
| unfused.test | RUN | 0.181035 | 0.429185 | 0.526074 | 0.001035 | 0.001140 | 0.001123 |
| unfused_typed.test | RUN | 0.178526 | 0.461386 | 0.550353 | 0.001246 | 0.001240 | 0.001194 |
| make_fused.test | RUN | 0.236943 | 0.540146 | 0.663610 | 0.001135 | 0.001075 | 0.001210 |
| make_fused_function_object.test | RUN | 0.171882 | 0.432888 | 0.510625 | 0.001166 | 0.001190 | 0.001096 |
| make_fused_procedure.test | RUN | 0.226424 | 0.520388 | 0.633132 | 0.001222 | 0.001226 | 0.001213 |
| make_unfused.test | RUN | 0.175814 | 0.424945 | 0.523763 | 0.001132 | 0.001159 | 0.001142 |
| invoke.test | RUN | 0.446959 | 1.528114 | 1.761566 | 0.000919 | 0.001470 | 0.001228 |
| invoke_function_object.test | RUN | 0.222413 | 0.557798 | 0.658419 | 0.001088 | 0.001218 | 0.001300 |
| invoke_procedure.test | RUN | 0.369366 | 1.140726 | 1.323431 | 0.001059 | 0.001324 | 0.001163 |
| swap.test | RUN | 0.270657 | 0.707446 | 0.850681 | 0.001128 | 0.001229 | 0.001220 |
| is_sequence.test | COMPILE | 0.044966 | 0.097881 | 0.103986 | — | — | — |
| is_view.test | COMPILE | 0.046707 | 0.097448 | 0.103934 | — | — | — |
| pair_deque.test | COMPILE | 0.100703 | 0.222281 | 0.256238 | — | — | — |
| pair_list.test | COMPILE | 0.099734 | 0.218541 | 0.251648 | — | — | — |
| pair_map.test | COMPILE | 0.101045 | 0.224593 | 0.259149 | — | — | — |
| pair_set.test | COMPILE | 0.101527 | 0.219408 | 0.256053 | — | — | — |
| pair_vector.test | COMPILE | 0.099350 | 0.217372 | 0.248929 | — | — | — |
| pair_nest.test | COMPILE | 0.038088 | 0.088331 | 0.100564 | — | — | — |
| index_sequence.test | COMPILE | 0.033420 | 0.061805 | 0.073446 | — | — | — |
| and.test | COMPILE | 0.025728 | 0.045509 | 0.051587 | — | — | — |
| tag_of.test | COMPILE | 0.044782 | 0.091804 | 0.100045 | — | — | — |
| unused.test | COMPILE | 0.022077 | 0.058400 | 0.060422 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.044051 | 0.068935 | 0.099584 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.028569 | 0.083208 | 0.081549 | — | — | — |
| quick.test | RUN | 0.131878 | 0.315529 | 0.323057 | 0.000346 | 0.000917 | 0.000839 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.002×, 1.004× | 0.995× |
| clang | 1.003× | 1.001×, 1.004× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000813s | 0.000825s | 0.000798s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000796s | 0.000811s | 0.000834s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000797s | 0.000849s | 0.000815s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000810s | 0.000846s | 0.000805s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000810s | 0.000816s | 0.000811s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000791s | 0.000798s | 0.000805s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000803s | 0.000800s | 0.000804s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000800s | 0.000835s | 0.000821s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000819s | 0.000784s | 0.000823s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000818s | 0.000814s | 0.000797s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000846s | 0.000786s | 0.000801s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000809s | 0.000814s | 0.000821s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000815s | 0.000807s | 0.000807s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000815s | 0.000822s | 0.000818s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000821s | 0.000868s | 0.000833s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000798s | 0.000821s | 0.000814s | byte equality observed |
| adapt_struct.test | 10 | 0.000821s | 0.000811s | 0.000792s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000796s | 0.000808s | 0.000823s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000815s | 0.000834s | 0.000799s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000803s | 0.000817s | 0.000792s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000804s | 0.000814s | 0.000798s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000805s | 0.000818s | 0.000786s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000804s | 0.000804s | 0.000803s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000797s | 0.000816s | 0.000780s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000805s | 0.000798s | 0.000774s | byte equality observed |
| all.test | 10 | 0.000793s | 0.000811s | 0.000773s | byte equality observed |
| any.test | 10 | 0.000810s | 0.000828s | 0.000769s | byte equality observed |
| array.test | 10 | 0.000809s | 0.000797s | 0.000791s | byte equality observed |
| as_deque.test | 10 | 0.000807s | 0.000776s | 0.000826s | byte equality observed |
| as_list.test | 10 | 0.000832s | 0.000830s | 0.000833s | byte equality observed |
| as_map.test | 10 | 0.000812s | 0.000820s | 0.000824s | byte equality observed |
| as_map_assoc.test | 10 | 0.000804s | 0.000823s | 0.000806s | byte equality observed |
| as_set.test | 10 | 0.000836s | 0.000849s | 0.000823s | byte equality observed |
| as_vector.test | 10 | 0.000815s | 0.000836s | 0.000815s | byte equality observed |
| back_extended_deque.test | 10 | 0.000790s | 0.000766s | 0.000792s | byte equality observed |
| boost_array.test | 10 | 0.000777s | 0.000826s | 0.000819s | byte equality observed |
| boost_tuple.test | 10 | 0.000798s | 0.000829s | 0.000804s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000799s | 0.000809s | 0.000799s | byte equality observed |
| clear.test | 10 | 0.000821s | 0.000822s | 0.000794s | byte equality observed |
| cons.test | 10 | 0.000849s | 0.000856s | 0.000836s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000838s | 0.000840s | 0.000787s | byte equality observed |
| convert_deque.test | 10 | 0.000808s | 0.000809s | 0.000777s | byte equality observed |
| convert_list.test | 10 | 0.000810s | 0.000777s | 0.000796s | byte equality observed |
| convert_std_pair.test | 10 | 0.000801s | 0.000818s | 0.000814s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000791s | 0.000818s | 0.000841s | byte equality observed |
| convert_vector.test | 10 | 0.000809s | 0.000815s | 0.000801s | byte equality observed |
| copy.test | 10 | 0.000826s | 0.000821s | 0.000794s | byte equality observed |
| count.test | 10 | 0.000797s | 0.000770s | 0.000809s | byte equality observed |
| count_if.test | 10 | 0.000787s | 0.000788s | 0.000819s | byte equality observed |
| deduce_sequence.test | 10 | 0.000783s | 0.000808s | 0.000817s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000799s | 0.000822s | 0.000840s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000801s | 0.000854s | 0.000777s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000794s | 0.000820s | 0.000806s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000806s | 0.000845s | 0.000832s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000798s | 0.000848s | 0.000793s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000780s | 0.000797s | 0.000807s | byte equality observed |
| define_struct.test | 10 | 0.000817s | 0.000813s | 0.000798s | byte equality observed |
| define_struct_empty.test | 10 | 0.000827s | 0.000794s | 0.000806s | byte equality observed |
| define_struct_inline.test | 10 | 0.000820s | 0.000820s | 0.000809s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000842s | 0.000806s | 0.000793s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000822s | 0.000797s | 0.000792s | byte equality observed |
| define_struct_move.test | 10 | 0.000794s | 0.000802s | 0.000808s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000817s | 0.000823s | 0.000813s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000815s | 0.000838s | 0.000825s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000824s | 0.000812s | 0.000809s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000817s | 0.000812s | 0.000813s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000785s | 0.000772s | 0.000816s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000808s | 0.000797s | 0.000807s | byte equality observed |
| deque_comparison.test | 10 | 0.000800s | 0.000796s | 0.000809s | byte equality observed |
| deque_construction.test | 10 | 0.000815s | 0.000830s | 0.000778s | byte equality observed |
| deque_copy.test | 10 | 0.000826s | 0.000809s | 0.000795s | byte equality observed |
| deque_hash.test | 10 | 0.000805s | 0.000819s | 0.000810s | byte equality observed |
| deque_iterator.test | 10 | 0.000794s | 0.000794s | 0.000787s | byte equality observed |
| deque_make.test | 10 | 0.000795s | 0.000780s | 0.000811s | byte equality observed |
| deque_misc.test | 10 | 0.000815s | 0.000803s | 0.000821s | byte equality observed |
| deque_move.test | 10 | 0.000830s | 0.000818s | 0.000833s | byte equality observed |
| deque_mutate.test | 10 | 0.000828s | 0.000781s | 0.000841s | byte equality observed |
| deque_nest.test | 10 | 0.000815s | 0.000790s | 0.000822s | byte equality observed |
| deque_tie.test | 10 | 0.000795s | 0.000843s | 0.000792s | byte equality observed |
| deque_value_at.test | 10 | 0.000800s | 0.000815s | 0.000806s | byte equality observed |
| erase.test | 10 | 0.000799s | 0.000832s | 0.000806s | byte equality observed |
| erase_key.test | 10 | 0.000840s | 0.000826s | 0.000820s | byte equality observed |
| filter.test | 10 | 0.000818s | 0.000808s | 0.000812s | byte equality observed |
| filter_if.test | 10 | 0.000812s | 0.000820s | 0.000809s | byte equality observed |
| filter_view.test | 10 | 0.000816s | 0.000857s | 0.000822s | byte equality observed |
| find.test | 10 | 0.000819s | 0.000835s | 0.000817s | byte equality observed |
| find_if.test | 10 | 0.000819s | 0.000793s | 0.000813s | byte equality observed |
| flatten.test | 10 | 0.000805s | 0.000826s | 0.000806s | byte equality observed |
| flatten_view.test | 10 | 0.000819s | 0.000778s | 0.000819s | byte equality observed |
| fold.test | 10 | 0.000813s | 0.000799s | 0.000787s | byte equality observed |
| for_each.test | 10 | 0.000820s | 0.000791s | 0.000798s | byte equality observed |
| front_extended_deque.test | 10 | 0.000803s | 0.000772s | 0.000795s | byte equality observed |
| fused.test | 10 | 0.000792s | 0.000803s | 0.000778s | byte equality observed |
| fused_function_object.test | 10 | 0.000820s | 0.000824s | 0.000787s | byte equality observed |
| fused_procedure.test | 10 | 0.000813s | 0.000811s | 0.000807s | byte equality observed |
| github-176.test | 10 | 0.000801s | 0.000801s | 0.000799s | byte equality observed |
| hash.test | 10 | 0.000825s | 0.000784s | 0.000813s | byte equality observed |
| identity_view.test | 10 | 0.000813s | 0.000826s | 0.000809s | byte equality observed |
| insert.test | 10 | 0.000831s | 0.000821s | 0.000842s | byte equality observed |
| insert_range.test | 10 | 0.000854s | 0.000836s | 0.000838s | byte equality observed |
| invoke.test | 10 | 0.000811s | 0.000832s | 0.000813s | byte equality observed |
| invoke_function_object.test | 10 | 0.000811s | 0.000793s | 0.000817s | byte equality observed |
| invoke_procedure.test | 10 | 0.000800s | 0.000785s | 0.000821s | byte equality observed |
| io.test | 10 | 0.000900s | 0.000881s | 0.000914s | byte equality observed |
| iter_fold.test | 10 | 0.000787s | 0.000794s | 0.000807s | byte equality observed |
| iterator_range.test | 10 | 0.000809s | 0.000790s | 0.000832s | byte equality observed |
| join.test | 10 | 0.000782s | 0.000809s | 0.000803s | byte equality observed |
| joint_view.test | 10 | 0.000821s | 0.000811s | 0.000818s | byte equality observed |
| list_comparison.test | 10 | 0.000802s | 0.000796s | 0.000776s | byte equality observed |
| list_construction.test | 10 | 0.000785s | 0.000798s | 0.000790s | byte equality observed |
| list_copy.test | 10 | 0.000802s | 0.000769s | 0.000817s | byte equality observed |
| list_hash.test | 10 | 0.000805s | 0.000781s | 0.000804s | byte equality observed |
| list_iterator.test | 10 | 0.000810s | 0.000814s | 0.000817s | byte equality observed |
| list_make.test | 10 | 0.000810s | 0.000812s | 0.000779s | byte equality observed |
| list_misc.test | 10 | 0.000813s | 0.000820s | 0.000819s | byte equality observed |
| list_mutate.test | 10 | 0.000797s | 0.000818s | 0.000838s | byte equality observed |
| list_nest.test | 10 | 0.000802s | 0.000797s | 0.000816s | byte equality observed |
| list_tie.test | 10 | 0.000794s | 0.000779s | 0.000829s | byte equality observed |
| list_value_at.test | 10 | 0.000797s | 0.000802s | 0.000836s | byte equality observed |
| make_fused.test | 10 | 0.000808s | 0.000780s | 0.000826s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000804s | 0.000805s | 0.000797s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000807s | 0.000825s | 0.000806s | byte equality observed |
| make_list.test | 10 | 0.000802s | 0.000828s | 0.000777s | byte equality observed |
| make_unfused.test | 10 | 0.000794s | 0.000788s | 0.000814s | byte equality observed |
| make_vector.test | 10 | 0.000794s | 0.000835s | 0.000813s | byte equality observed |
| map.test | 10 | 0.000825s | 0.000821s | 0.000801s | byte equality observed |
| map_comparison.test | 10 | 0.000830s | 0.000791s | 0.000793s | byte equality observed |
| map_construction.test | 10 | 0.000799s | 0.000770s | 0.000834s | byte equality observed |
| map_copy.test | 10 | 0.000821s | 0.000790s | 0.000814s | byte equality observed |
| map_misc.test | 10 | 0.000813s | 0.000826s | 0.000811s | byte equality observed |
| map_move.test | 10 | 0.000797s | 0.000809s | 0.000811s | byte equality observed |
| map_mutate.test | 10 | 0.000808s | 0.000820s | 0.000795s | byte equality observed |
| map_tie.test | 10 | 0.000787s | 0.000801s | 0.000770s | byte equality observed |
| move.test | 10 | 0.000810s | 0.000817s | 0.000797s | byte equality observed |
| nil.test | 10 | 0.000798s | 0.000810s | 0.000828s | byte equality observed |
| none.test | 10 | 0.000796s | 0.000793s | 0.000777s | byte equality observed |
| nview.test | 10 | 0.000803s | 0.000779s | 0.000804s | byte equality observed |
| pop_back.test | 10 | 0.000839s | 0.000842s | 0.000848s | byte equality observed |
| pop_front.test | 10 | 0.000844s | 0.000832s | 0.000870s | byte equality observed |
| push_back.test | 10 | 0.000817s | 0.000847s | 0.000844s | byte equality observed |
| push_front.test | 10 | 0.000839s | 0.000836s | 0.000812s | byte equality observed |
| quick.test | 10 | 0.000359s | 0.000786s | 0.000770s | byte equality observed |
| ref_vector.test | 10 | 0.000807s | 0.000787s | 0.000811s | byte equality observed |
| remove.test | 10 | 0.000816s | 0.000838s | 0.000813s | byte equality observed |
| remove_if.test | 10 | 0.000835s | 0.000820s | 0.000829s | byte equality observed |
| repetitive_view.test | 10 | 0.000790s | 0.000804s | 0.000802s | byte equality observed |
| replace.test | 10 | 0.000803s | 0.000821s | 0.000798s | byte equality observed |
| replace_if.test | 10 | 0.000834s | 0.000828s | 0.000840s | byte equality observed |
| reverse.test | 10 | 0.000832s | 0.000829s | 0.000830s | byte equality observed |
| reverse_fold.test | 10 | 0.000835s | 0.000789s | 0.000803s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000811s | 0.000819s | 0.000820s | byte equality observed |
| reverse_view.test | 10 | 0.000812s | 0.000799s | 0.000836s | byte equality observed |
| segmented_find.test | 10 | 0.000804s | 0.000770s | 0.000812s | byte equality observed |
| segmented_find_if.test | 10 | 0.000783s | 0.000776s | 0.000781s | byte equality observed |
| segmented_fold.test | 10 | 0.000818s | 0.000841s | 0.000819s | byte equality observed |
| segmented_for_each.test | 10 | 0.000792s | 0.000810s | 0.000848s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000820s | 0.000835s | 0.000820s | byte equality observed |
| set.test | 10 | 0.000801s | 0.000835s | 0.000827s | byte equality observed |
| single_view.test | 10 | 0.000819s | 0.000853s | 0.000834s | byte equality observed |
| std_array.test | 10 | 0.000799s | 0.000786s | 0.000808s | byte equality observed |
| std_pair.test | 10 | 0.000810s | 0.000793s | 0.000812s | byte equality observed |
| std_tuple.test | 10 | 0.000797s | 0.000811s | 0.000787s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000802s | 0.000794s | 0.000804s | byte equality observed |
| swap.test | 10 | 0.000805s | 0.000814s | 0.000812s | byte equality observed |
| transform.test | 10 | 0.000816s | 0.000839s | 0.000798s | byte equality observed |
| transform_view.test | 10 | 0.000840s | 0.000833s | 0.000813s | byte equality observed |
| tuple_comparison.test | 10 | 0.000784s | 0.000766s | 0.000792s | byte equality observed |
| tuple_construction.test | 10 | 0.000780s | 0.000796s | 0.000785s | byte equality observed |
| tuple_conversion.test | 10 | 0.000798s | 0.000787s | 0.000803s | byte equality observed |
| tuple_copy.test | 10 | 0.000792s | 0.000792s | 0.000833s | byte equality observed |
| tuple_element.test | 10 | 0.000797s | 0.000810s | 0.000837s | byte equality observed |
| tuple_hash.test | 10 | 0.000810s | 0.000784s | 0.000808s | byte equality observed |
| tuple_make.test | 10 | 0.000809s | 0.000797s | 0.000808s | byte equality observed |
| tuple_misc.test | 10 | 0.000817s | 0.000796s | 0.000822s | byte equality observed |
| tuple_mutate.test | 10 | 0.000800s | 0.000795s | 0.000797s | byte equality observed |
| tuple_nest.test | 10 | 0.000794s | 0.000784s | 0.000824s | byte equality observed |
| tuple_tie.test | 10 | 0.000792s | 0.000812s | 0.000818s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000803s | 0.000785s | 0.000798s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000810s | 0.000797s | 0.000820s | byte equality observed |
| unfused.test | 10 | 0.000791s | 0.000786s | 0.000839s | byte equality observed |
| unfused_typed.test | 10 | 0.000795s | 0.000789s | 0.000811s | byte equality observed |
| vector_comparison.test | 10 | 0.000833s | 0.000786s | 0.000804s | byte equality observed |
| vector_construction.test | 10 | 0.000804s | 0.000801s | 0.000808s | byte equality observed |
| vector_conversion.test | 10 | 0.000805s | 0.000787s | 0.000823s | byte equality observed |
| vector_copy.test | 10 | 0.000794s | 0.000803s | 0.000789s | byte equality observed |
| vector_hash.test | 10 | 0.000800s | 0.000813s | 0.000792s | byte equality observed |
| vector_iterator.test | 10 | 0.000781s | 0.000808s | 0.000809s | byte equality observed |
| vector_make.test | 10 | 0.000801s | 0.000817s | 0.000805s | byte equality observed |
| vector_misc.test | 10 | 0.000773s | 0.000813s | 0.000799s | byte equality observed |
| vector_move.test | 10 | 0.000798s | 0.000826s | 0.000828s | byte equality observed |
| vector_mutate.test | 10 | 0.000781s | 0.000803s | 0.000802s | byte equality observed |
| vector_n.test | 10 | 0.000801s | 0.000804s | 0.000789s | byte equality observed |
| vector_nest.test | 10 | 0.000795s | 0.000801s | 0.000800s | byte equality observed |
| vector_tie.test | 10 | 0.000804s | 0.000804s | 0.000831s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000832s | 0.000806s | 0.000820s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000817s | 0.000779s | 0.000811s | byte equality observed |
| vector_value_at.test | 10 | 0.000811s | 0.000810s | 0.000844s | byte equality observed |
| zip.test | 10 | 0.000820s | 0.000796s | 0.000823s | byte equality observed |
| zip2.test | 10 | 0.000826s | 0.000798s | 0.000800s | byte equality observed |
| zip_ignore.test | 10 | 0.000804s | 0.000780s | 0.000771s | byte equality observed |
| zip_view.test | 10 | 0.000808s | 0.000799s | 0.000789s | byte equality observed |
| zip_view2.test | 10 | 0.000787s | 0.000779s | 0.000775s | byte equality observed |
| zip_view_ignore.test | 9 | 0.000774s | 0.000787s | 0.000795s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
