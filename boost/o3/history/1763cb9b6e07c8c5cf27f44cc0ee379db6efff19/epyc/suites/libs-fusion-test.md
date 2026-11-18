# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.443749 | 0.906770 | 1.422894 | 0.001934 | 0.001818 | 0.002121 |
| any.test | RUN | 0.434759 | 0.862620 | 1.327836 | 0.001662 | 0.001957 | 0.002044 |
| clear.test | RUN | 0.317881 | 0.805134 | 1.025936 | 0.002216 | 0.001952 | 0.002392 |
| copy.test | RUN | 0.272070 | 0.610321 | 0.855115 | 0.001946 | 0.002210 | 0.002012 |
| count.test | RUN | 0.303343 | 0.672792 | 0.997941 | 0.002121 | 0.002074 | 0.002351 |
| count_if.test | RUN | 0.285479 | 0.638798 | 0.901398 | 0.001864 | 0.002182 | 0.002160 |
| erase.test | RUN | 0.397053 | 1.087632 | 1.452046 | 0.002104 | 0.002126 | 0.002172 |
| erase_key.test | RUN | 0.383164 | 1.082328 | 1.367181 | 0.001750 | 0.001842 | 0.001920 |
| filter.test | RUN | 0.354022 | 0.923080 | 1.254217 | 0.001909 | 0.002104 | 0.002206 |
| filter_if.test | RUN | 0.395748 | 1.090647 | 1.430485 | 0.001956 | 0.001963 | 0.002261 |
| find.test | RUN | 0.351430 | 0.747968 | 1.112388 | 0.001904 | 0.001784 | 0.001825 |
| find_if.test | RUN | 0.325124 | 0.699343 | 1.029955 | 0.002056 | 0.001982 | 0.002154 |
| fold.test | RUN | 0.351493 | 0.852763 | 1.239139 | 0.001902 | 0.002191 | 0.002116 |
| for_each.test | RUN | 0.317437 | 0.789682 | 1.092296 | 0.002250 | 0.002080 | 0.002264 |
| insert.test | RUN | 0.452594 | 1.356653 | 1.744655 | 0.001914 | 0.002269 | 0.002254 |
| insert_range.test | RUN | 0.466592 | 1.358300 | 1.758341 | 0.002083 | 0.001986 | 0.001916 |
| iter_fold.test | RUN | 0.551680 | 1.310519 | 2.049789 | 0.001982 | 0.002258 | 0.002343 |
| move.test | RUN | 0.282364 | 0.637599 | 0.892723 | 0.002706 | 0.002175 | 0.002087 |
| none.test | RUN | 0.437602 | 0.908995 | 1.377649 | 0.001903 | 0.002064 | 0.001846 |
| pop_back.test | RUN | 0.427410 | 1.190877 | 1.574807 | 0.002308 | 0.002087 | 0.002304 |
| pop_front.test | RUN | 0.361649 | 0.955302 | 1.239214 | 0.002211 | 0.002171 | 0.002422 |
| push_back.test | RUN | 0.454803 | 1.364350 | 1.656766 | 0.002072 | 0.002280 | 0.002377 |
| push_front.test | RUN | 0.405190 | 1.137907 | 1.453755 | 0.001902 | 0.002166 | 0.002289 |
| remove.test | RUN | 0.440293 | 1.310766 | 1.697784 | 0.001966 | 0.002110 | 0.002294 |
| remove_if.test | RUN | 0.412343 | 1.065554 | 1.450319 | 0.002066 | 0.002178 | 0.001783 |
| replace.test | RUN | 0.388584 | 1.040494 | 1.331674 | 0.002079 | 0.002230 | 0.002230 |
| replace_if.test | RUN | 0.385366 | 1.026703 | 1.298712 | 0.002248 | 0.002268 | 0.002378 |
| reverse_fold.test | RUN | 0.588798 | 1.487721 | 2.264688 | 0.002158 | 0.002158 | 0.002102 |
| reverse_iter_fold.test | RUN | 0.628014 | 1.535588 | 2.392662 | 0.002016 | 0.002130 | 0.001815 |
| reverse.test | RUN | 0.393661 | 1.089502 | 1.370302 | 0.002071 | 0.002058 | 0.002226 |
| segmented_for_each.test | RUN | 0.645744 | 2.024878 | 2.776439 | 0.001858 | 0.001906 | 0.002117 |
| segmented_find.test | RUN | 0.413279 | 1.080197 | 1.566069 | 0.002170 | 0.002125 | 0.001848 |
| segmented_find_if.test | RUN | 0.420603 | 1.101336 | 1.567268 | 0.002196 | 0.002094 | 0.001897 |
| segmented_fold.test | RUN | 0.509779 | 1.418050 | 1.960862 | 0.002106 | 0.002212 | 0.002406 |
| transform.test | RUN | 0.415758 | 1.135775 | 1.422923 | 0.001999 | 0.002043 | 0.002359 |
| join.test | RUN | 0.297341 | 0.750843 | 1.031700 | 0.001901 | 0.002063 | 0.002378 |
| zip.test | RUN | 0.531415 | 1.314344 | 1.893607 | 0.002286 | 0.002170 | 0.002242 |
| zip2.test | RUN | 0.517467 | 1.296143 | 1.877926 | 0.002169 | 0.002152 | 0.002310 |
| zip_ignore.test | RUN | 0.396052 | 0.873815 | 1.223140 | 0.001933 | 0.002227 | 0.001924 |
| flatten.test | RUN | 0.366057 | 0.955683 | 1.199851 | 0.002232 | 0.002032 | 0.002285 |
| ticket-5490.test | COMPILE | 0.200639 | 0.423271 | 0.555173 | — | — | — |
| as_deque.test | RUN | 0.361821 | 0.908061 | 1.308271 | 0.002002 | 0.002190 | 0.002034 |
| as_list.test | RUN | 0.407153 | 1.107053 | 1.454689 | 0.001946 | 0.001706 | 0.001996 |
| as_map.test | RUN | 0.395105 | 1.086830 | 1.446082 | 0.001853 | 0.002112 | 0.001841 |
| as_map_assoc.test | RUN | 0.396925 | 1.024914 | 1.321813 | 0.001689 | 0.002008 | 0.002263 |
| as_set.test | RUN | 0.460086 | 1.279142 | 1.640464 | 0.001980 | 0.001966 | 0.002121 |
| as_vector.test | RUN | 0.413004 | 1.116798 | 1.494178 | 0.002022 | 0.001922 | 0.002158 |
| boost_tuple.test | RUN | 0.403281 | 1.149722 | 1.470990 | 0.001888 | 0.001871 | 0.002086 |
| boost_tuple_iterator.test | RUN | 0.277367 | 0.667323 | 0.902138 | 0.001933 | 0.002090 | 0.002690 |
| cons.test | RUN | 0.507928 | 1.264897 | 1.720374 | 0.001794 | 0.001935 | 0.002274 |
| convert_boost_tuple.test | RUN | 0.322507 | 0.977683 | 1.136258 | 0.001880 | 0.002080 | 0.001908 |
| convert_deque.test | RUN | 0.329348 | 0.976821 | 1.126890 | 0.001853 | 0.001934 | 0.001810 |
| convert_list.test | RUN | 0.328655 | 1.003403 | 1.137823 | 0.001886 | 0.001905 | 0.001873 |
| convert_std_pair.test | RUN | 0.342540 | 0.983510 | 1.144907 | 0.002165 | 0.001971 | 0.001937 |
| convert_std_tuple.test | RUN | 0.323788 | 0.955796 | 1.136802 | 0.001826 | 0.001918 | 0.001832 |
| convert_vector.test | RUN | 0.333462 | 0.968865 | 1.119539 | 0.001874 | 0.001857 | 0.001936 |
| filter_view.test | RUN | 0.397588 | 1.014705 | 1.338652 | 0.001996 | 0.001962 | 0.002262 |
| hash.test | RUN | 0.395357 | 0.916452 | 1.248773 | 0.002090 | 0.002035 | 0.002285 |
| io.test | RUN | 0.409442 | 1.277518 | 1.513981 | 0.001996 | 0.002337 | 0.002432 |
| iterator_range.test | RUN | 0.379228 | 0.971478 | 1.283527 | 0.001815 | 0.002120 | 0.001921 |
| joint_view.test | RUN | 0.503722 | 1.600086 | 1.895544 | 0.002194 | 0.002073 | 0.002038 |
| list_comparison.test | RUN | 0.292196 | 0.686343 | 0.935566 | 0.002030 | 0.002041 | 0.002090 |
| list_construction.test | RUN | 0.287772 | 0.639451 | 0.895925 | 0.001722 | 0.002019 | 0.002034 |
| list_copy.test | RUN | 0.430774 | 1.196865 | 1.558955 | 0.001737 | 0.002033 | 0.002011 |
| list_iterator.test | RUN | 0.282611 | 0.649328 | 0.875859 | 0.002012 | 0.002084 | 0.002144 |
| list_hash.test | RUN | 0.384798 | 1.285909 | 1.271994 | 0.001985 | 0.001936 | 0.002210 |
| list_make.test | RUN | 0.302565 | 0.739284 | 1.003424 | 0.002160 | 0.001955 | 0.002162 |
| list_misc.test | RUN | 0.393391 | 0.862520 | 1.183771 | 0.001885 | 0.002248 | 0.002216 |
| list_mutate.test | RUN | 0.266813 | 0.563961 | 0.778742 | 0.001936 | 0.002016 | 0.002066 |
| list_nest.test | RUN | 0.539703 | 1.616505 | 2.175464 | 0.001780 | 0.001950 | 0.002274 |
| list_tie.test | RUN | 0.286174 | 0.652457 | 0.864329 | 0.001876 | 0.001859 | 0.002252 |
| list_value_at.test | RUN | 0.274489 | 0.628744 | 0.817651 | 0.001757 | 0.002149 | 0.002177 |
| deque_comparison.test | RUN | 0.298010 | 0.706102 | 0.971169 | 0.001852 | 0.001998 | 0.002073 |
| deque_construction.test | RUN | 0.290609 | 0.651551 | 0.884611 | 0.002076 | 0.002164 | 0.001934 |
| deque_copy.test | RUN | 0.406297 | 1.127751 | 1.451512 | 0.001886 | 0.001936 | 0.002182 |
| deque_iterator.test | RUN | 0.284722 | 0.695016 | 0.840335 | 0.001962 | 0.001938 | 0.002244 |
| deque_hash.test | RUN | 0.390606 | 1.277052 | 1.285693 | 0.001874 | 0.002269 | 0.002172 |
| deque_is_constructible.test | COMPILE | 0.159387 | 0.303715 | 0.413888 | — | — | — |
| deque_make.test | RUN | 0.294302 | 0.695694 | 0.887308 | 0.001884 | 0.002039 | 0.002082 |
| deque_misc.test | RUN | 0.374386 | 0.840890 | 1.134045 | 0.001706 | 0.002037 | 0.001858 |
| deque_move.test | RUN | 0.292596 | 0.719638 | 0.925372 | 0.001924 | 0.001820 | 0.002240 |
| deque_mutate.test | RUN | 0.263752 | 0.591965 | 0.747607 | 0.001832 | 0.002052 | 0.002230 |
| deque_nest.test | RUN | 0.785276 | 2.582029 | 3.460575 | 0.001940 | 0.002028 | 0.001908 |
| deque_tie.test | RUN | 0.271039 | 0.631004 | 0.856151 | 0.001521 | 0.001966 | 0.001836 |
| deque_value_at.test | RUN | 0.262663 | 0.592544 | 0.834699 | 0.001990 | 0.002076 | 0.001916 |
| front_extended_deque.test | RUN | 0.387891 | 0.879014 | 1.285613 | 0.002016 | 0.002216 | 0.001940 |
| back_extended_deque.test | RUN | 0.388710 | 0.909711 | 1.222659 | 0.001709 | 0.001973 | 0.002374 |
| make_list.test | RUN | 0.294927 | 0.742926 | 0.972272 | 0.001812 | 0.002068 | 0.002081 |
| make_vector.test | RUN | 0.301129 | 0.757063 | 1.012888 | 0.001889 | 0.002072 | 0.001992 |
| map.test | RUN | 0.392650 | 1.080809 | 1.347395 | 0.002052 | 0.002149 | 0.002313 |
| map_comparison.test | RUN | 0.291294 | 0.723536 | 0.957982 | 0.001951 | 0.002165 | 0.002150 |
| map_construction.test | RUN | 0.303914 | 0.674066 | 0.937912 | 0.001875 | 0.001966 | 0.002152 |
| map_copy.test | RUN | 0.351445 | 0.866033 | 1.140604 | 0.001996 | 0.002098 | 0.002180 |
| map_misc.test | RUN | 0.371586 | 0.883398 | 1.162908 | 0.001908 | 0.002016 | 0.001890 |
| map_move.test | RUN | 0.291309 | 0.739516 | 0.936250 | 0.002236 | 0.002142 | 0.001887 |
| map_mutate.test | RUN | 0.268352 | 0.577671 | 0.798089 | 0.001902 | 0.001833 | 0.001948 |
| map_tie.test | RUN | 0.280764 | 0.599823 | 0.821542 | 0.001975 | 0.002078 | 0.002266 |
| nil.test | RUN | 0.187806 | 0.408214 | 0.578011 | 0.002256 | 0.002056 | 0.002122 |
| nview.test | RUN | 0.366293 | 0.877348 | 1.178093 | 0.002138 | 0.002210 | 0.002272 |
| reverse_view.test | RUN | 0.461931 | 1.390719 | 1.689865 | 0.002056 | 0.002152 | 0.002221 |
| segmented_iterator_range.test | RUN | 0.543228 | 1.604658 | 2.213123 | 0.002115 | 0.002150 | 0.002328 |
| set.test | RUN | 0.358218 | 0.972748 | 1.201975 | 0.001890 | 0.002092 | 0.002256 |
| single_view.test | RUN | 0.321158 | 0.844187 | 1.097679 | 0.002044 | 0.002064 | 0.002056 |
| std_pair.test | RUN | 0.416692 | 1.106909 | 1.416469 | 0.002062 | 0.002008 | 0.002290 |
| boost_array.test | RUN | 0.349543 | 0.811507 | 1.063680 | 0.002206 | 0.001914 | 0.002014 |
| array.test | RUN | 0.354726 | 0.768910 | 1.029231 | 0.001842 | 0.002022 | 0.002288 |
| std_array.test | RUN | 0.355414 | 0.776407 | 1.053825 | 0.002206 | 0.002029 | 0.002198 |
| tuple_comparison.test | RUN | 0.311067 | 0.732967 | 0.966265 | 0.002080 | 0.001975 | 0.002178 |
| tuple_construction.test | RUN | 0.313904 | 0.740746 | 0.978792 | 0.002206 | 0.002019 | 0.002421 |
| tuple_conversion.test | RUN | 0.674965 | 2.202455 | 3.144041 | 0.001896 | 0.002057 | 0.002156 |
| tuple_copy.test | RUN | 0.453062 | 1.299788 | 1.701114 | 0.002060 | 0.001876 | 0.001980 |
| tuple_element.test | RUN | 0.299232 | 0.639870 | 0.938331 | 0.001726 | 0.001934 | 0.002286 |
| tuple_make.test | RUN | 0.318234 | 0.757320 | 1.017430 | 0.002136 | 0.002061 | 0.002190 |
| tuple_misc.test | RUN | 0.398710 | 0.899792 | 1.222211 | 0.002242 | 0.001988 | 0.002291 |
| tuple_mutate.test | RUN | 0.279829 | 0.635776 | 0.907499 | 0.002210 | 0.002076 | 0.002026 |
| tuple_nest.test | RUN | 1.139296 | 4.351648 | 6.008265 | 0.002106 | 0.002144 | 0.002248 |
| tuple_hash.test | RUN | 0.407108 | 1.263157 | 1.287949 | 0.002128 | 0.001976 | 0.002107 |
| tuple_tie.test | RUN | 0.296785 | 0.711891 | 0.956358 | 0.001936 | 0.001895 | 0.001940 |
| tuple_traits__maybe_variadic.test | RUN | 0.334663 | 0.809445 | 1.052073 | 0.002034 | 0.001680 | 0.001910 |
| tuple_traits__no_variadic.test | RUN | 0.365236 | 0.843631 | 1.150935 | 0.001900 | 0.002241 | 0.002044 |
| transform_view.test | RUN | 0.461201 | 1.381569 | 1.754997 | 0.001966 | 0.001688 | 0.002146 |
| identity_view.test | RUN | 0.442204 | 1.287137 | 1.657801 | 0.001638 | 0.001711 | 0.002279 |
| vector_comparison.test | RUN | 0.289581 | 0.739661 | 0.920465 | 0.001900 | 0.002200 | 0.002307 |
| vector_construction.test | RUN | 0.293212 | 0.665890 | 0.979245 | 0.001888 | 0.001897 | 0.002378 |
| vector_conversion.test | RUN | 0.805016 | 2.883872 | 4.123257 | 0.002156 | 0.002040 | 0.002120 |
| vector_copy.test | RUN | 0.423676 | 1.236945 | 1.646965 | 0.001950 | 0.002136 | 0.002136 |
| vector_iterator.test | RUN | 0.273398 | 0.704715 | 0.917485 | 0.002135 | 0.001927 | 0.002329 |
| vector_make.test | RUN | 0.301992 | 0.721616 | 0.931810 | 0.002127 | 0.001841 | 0.002173 |
| vector_misc.test | RUN | 0.373833 | 0.929182 | 1.164642 | 0.001976 | 0.001848 | 0.002010 |
| vector_move.test | RUN | 0.288097 | 0.716265 | 0.941112 | 0.001834 | 0.001870 | 0.002149 |
| vector_mutate.test | RUN | 0.264308 | 0.581315 | 0.816629 | 0.001710 | 0.001901 | 0.002352 |
| vector_n.test | RUN | 0.329565 | 0.737245 | 1.083136 | 0.002248 | 0.002072 | 0.002388 |
| vector_nest.test | RUN | 1.129708 | 4.538965 | 6.147815 | 0.002083 | 0.002026 | 0.002361 |
| vector_hash.test | RUN | 0.381140 | 1.259297 | 1.231740 | 0.002044 | 0.002240 | 0.002052 |
| vector_tie.test | RUN | 0.277635 | 0.673263 | 0.922765 | 0.002159 | 0.002000 | 0.001828 |
| vector_traits__maybe_variadic.test | RUN | 0.298173 | 0.762073 | 0.975735 | 0.002139 | 0.002138 | 0.002312 |
| vector_traits__no_variadic.test | RUN | 0.331334 | 0.812244 | 1.000181 | 0.002035 | 0.001938 | 0.001970 |
| vector_value_at.test | RUN | 0.269741 | 0.589559 | 0.875424 | 0.001785 | 0.002188 | 0.002048 |
| zip_view.test | RUN | 0.555359 | 1.436357 | 2.220688 | 0.002040 | 0.002028 | 0.002284 |
| zip_view2.test | RUN | 0.463360 | 1.181336 | 1.630738 | 0.001907 | 0.002016 | 0.001958 |
| zip_view_ignore.test | RUN | 0.411005 | 1.055131 | 1.468539 | 0.002050 | 0.001718 | 0.002056 |
| repetitive_view.test | RUN | 0.695224 | 1.892278 | 2.828752 | 0.002154 | 0.002107 | 0.002342 |
| deduce_sequence.test | RUN | 0.346826 | 0.803349 | 1.134039 | 0.001984 | 0.001745 | 0.002133 |
| adapt_adt_named.test | RUN | 0.415072 | 1.129103 | 1.440807 | 0.001916 | 0.002215 | 0.002209 |
| adapt_adt_named_empty.test | RUN | 0.357399 | 0.905652 | 1.161029 | 0.002060 | 0.002103 | 0.001938 |
| adapt_adt.test | RUN | 0.451731 | 1.461793 | 1.695183 | 0.001914 | 0.002266 | 0.002149 |
| adapt_adt_empty.test | RUN | 0.349963 | 0.894669 | 1.183061 | 0.001937 | 0.001980 | 0.001975 |
| adapt_assoc_adt_named.test | RUN | 0.448653 | 1.162720 | 1.553650 | 0.001778 | 0.002222 | 0.002358 |
| adapt_assoc_adt_named_empty.test | RUN | 0.362188 | 0.889978 | 1.191285 | 0.002107 | 0.002092 | 0.002164 |
| adapt_assoc_adt.test | RUN | 0.459091 | 1.211414 | 1.578381 | 0.001762 | 0.002160 | 0.002232 |
| adapt_assoc_adt_empty.test | RUN | 0.351275 | 0.896922 | 1.164301 | 0.002155 | 0.002282 | 0.002286 |
| adapt_assoc_struct_named.test | RUN | 0.443656 | 1.141272 | 1.498803 | 0.001972 | 0.002100 | 0.002202 |
| adapt_assoc_struct_named_empty.test | RUN | 0.350904 | 0.876789 | 1.146771 | 0.002038 | 0.002178 | 0.002149 |
| adapt_assoc_struct.test | RUN | 0.408432 | 1.081233 | 1.390045 | 0.002236 | 0.002165 | 0.002472 |
| adapt_assoc_struct_empty.test | RUN | 0.351472 | 0.888643 | 1.143556 | 0.001803 | 0.002056 | 0.002326 |
| adapt_assoc_tpl_adt.test | RUN | 0.483034 | 1.247605 | 1.599325 | 0.001934 | 0.002365 | 0.002016 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.365115 | 0.913304 | 1.126525 | 0.002130 | 0.002102 | 0.002580 |
| adapt_assoc_tpl_struct.test | RUN | 0.388417 | 1.052435 | 1.355140 | 0.002049 | 0.001902 | 0.002070 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.354842 | 0.925258 | 1.156049 | 0.002048 | 0.002080 | 0.001918 |
| adapt_struct_named.test | RUN | 0.400820 | 1.094678 | 1.417449 | 0.002022 | 0.002082 | 0.002360 |
| adapt_struct_named_empty.test | RUN | 0.359172 | 0.923047 | 1.177895 | 0.001856 | 0.001906 | 0.002130 |
| adapt_struct.test | RUN | 0.435967 | 1.241927 | 1.564898 | 0.001994 | 0.002137 | 0.002409 |
| adapt_struct_empty.test | RUN | 0.351645 | 0.905442 | 1.149630 | 0.002208 | 0.002146 | 0.002274 |
| adapt_tpl_adt.test | RUN | 0.461855 | 1.418030 | 1.589254 | 0.002040 | 0.001944 | 0.001922 |
| adapt_tpl_adt_empty.test | RUN | 0.361314 | 0.905945 | 1.176627 | 0.002059 | 0.002084 | 0.002252 |
| adapt_tpl_struct.test | RUN | 0.370880 | 0.992003 | 1.279659 | 0.002215 | 0.002130 | 0.002082 |
| adapt_tpl_struct_empty.test | RUN | 0.349169 | 0.935072 | 1.186304 | 0.001868 | 0.002169 | 0.002202 |
| adt_attribute_proxy.test | RUN | 0.396464 | 0.884209 | 1.202389 | 0.002020 | 0.002266 | 0.002057 |
| define_struct.test | RUN | 0.481893 | 1.236172 | 1.666362 | 0.002206 | 0.001984 | 0.002404 |
| define_struct_empty.test | RUN | 0.432173 | 1.021553 | 1.375413 | 0.002170 | 0.001975 | 0.002320 |
| define_struct_move.test | RUN | 0.262714 | 0.582925 | 0.785141 | 0.001957 | 0.002075 | 0.002368 |
| define_struct_inline.test | RUN | 0.519019 | 1.465854 | 1.772288 | 0.002245 | 0.002004 | 0.002240 |
| define_struct_inline_empty.test | RUN | 0.417517 | 1.055820 | 1.354794 | 0.001834 | 0.002282 | 0.002196 |
| define_struct_inline_move.test | RUN | 0.273578 | 0.558789 | 0.842486 | 0.001789 | 0.002223 | 0.002290 |
| define_assoc_struct.test | RUN | 0.472566 | 1.168022 | 1.544233 | 0.002202 | 0.002312 | 0.002290 |
| define_assoc_struct_empty.test | RUN | 0.418595 | 1.010883 | 1.328091 | 0.001904 | 0.002128 | 0.002188 |
| define_assoc_struct_move.test | RUN | 0.269258 | 0.559145 | 0.817114 | 0.002023 | 0.002118 | 0.002299 |
| define_tpl_struct.test | RUN | 0.478502 | 1.196203 | 1.513810 | 0.001871 | 0.001974 | 0.002433 |
| define_tpl_struct_empty.test | RUN | 0.424990 | 1.046802 | 1.373648 | 0.001988 | 0.002014 | 0.002172 |
| define_tpl_struct_move.test | RUN | 0.276205 | 0.597441 | 0.825007 | 0.001859 | 0.001946 | 0.002058 |
| define_tpl_struct_inline.test | RUN | 0.493280 | 1.391619 | 1.679099 | 0.002216 | 0.001912 | 0.002168 |
| define_tpl_struct_inline_empty.test | RUN | 0.425814 | 1.061842 | 1.338132 | 0.001872 | 0.002285 | 0.002380 |
| define_tpl_struct_inline_move.test | RUN | 0.276347 | 0.557238 | 0.857964 | 0.002114 | 0.002028 | 0.001880 |
| define_assoc_tpl_struct.test | RUN | 0.476982 | 1.183857 | 1.604622 | 0.001996 | 0.002298 | 0.002221 |
| define_assoc_tpl_struct_empty.test | RUN | 0.425261 | 1.036754 | 1.337791 | 0.001924 | 0.001864 | 0.002242 |
| define_assoc_tpl_struct_move.test | RUN | 0.276148 | 0.590033 | 0.807947 | 0.001967 | 0.002066 | 0.002304 |
| std_tuple.test | RUN | 0.285071 | 0.660929 | 0.909991 | 0.001936 | 0.002124 | 0.002414 |
| std_tuple_iterator.test | RUN | 0.281555 | 0.680568 | 0.863650 | 0.002189 | 0.002117 | 0.002248 |
| ref_vector.test | RUN | 0.325092 | 0.716516 | 0.939121 | 0.001994 | 0.002016 | 0.002246 |
| flatten_view.test | RUN | 0.345694 | 0.858337 | 1.166853 | 0.002260 | 0.001826 | 0.002276 |
| github-159.test | COMPILE | 0.156399 | 0.318427 | 0.433910 | — | — | — |
| github-176.test | RUN | 0.319575 | 0.759183 | 0.978332 | 0.002216 | 0.002184 | 0.002188 |
| size.test | COMPILE | 0.273542 | 0.554781 | 0.743942 | — | — | — |
| fused.test | RUN | 0.378485 | 0.833234 | 1.154311 | 0.001937 | 0.002010 | 0.002160 |
| fused_function_object.test | RUN | 0.283264 | 0.623038 | 0.845823 | 0.001870 | 0.001988 | 0.002172 |
| fused_procedure.test | RUN | 0.365811 | 0.790445 | 1.073651 | 0.001786 | 0.002040 | 0.002086 |
| unfused.test | RUN | 0.288344 | 0.628232 | 0.901533 | 0.002066 | 0.002279 | 0.002253 |
| unfused_typed.test | RUN | 0.291917 | 0.698050 | 0.918593 | 0.001748 | 0.002030 | 0.002298 |
| make_fused.test | RUN | 0.384218 | 0.827288 | 1.131963 | 0.002080 | 0.001818 | 0.002372 |
| make_fused_function_object.test | RUN | 0.283456 | 0.636274 | 0.859662 | 0.001804 | 0.001984 | 0.002000 |
| make_fused_procedure.test | RUN | 0.372102 | 0.786384 | 1.089889 | 0.002024 | 0.002098 | 0.002180 |
| make_unfused.test | RUN | 0.284737 | 0.648245 | 0.855199 | 0.002203 | 0.002234 | 0.002352 |
| invoke.test | RUN | 0.736367 | 2.251898 | 3.006018 | 0.001858 | 0.001860 | 0.002264 |
| invoke_function_object.test | RUN | 0.344148 | 0.795843 | 1.100116 | 0.002052 | 0.002184 | 0.002295 |
| invoke_procedure.test | RUN | 0.610764 | 1.666626 | 2.218701 | 0.001868 | 0.001950 | 0.002424 |
| swap.test | RUN | 0.427584 | 1.065255 | 1.459292 | 0.001746 | 0.002176 | 0.002054 |
| is_sequence.test | COMPILE | 0.075299 | 0.153181 | 0.180668 | — | — | — |
| is_view.test | COMPILE | 0.077239 | 0.152220 | 0.178893 | — | — | — |
| pair_deque.test | COMPILE | 0.159919 | 0.344359 | 0.458395 | — | — | — |
| pair_list.test | COMPILE | 0.161387 | 0.329257 | 0.398128 | — | — | — |
| pair_map.test | COMPILE | 0.163906 | 0.338718 | 0.462933 | — | — | — |
| pair_set.test | COMPILE | 0.166521 | 0.339116 | 0.442987 | — | — | — |
| pair_vector.test | COMPILE | 0.161378 | 0.337405 | 0.519790 | — | — | — |
| pair_nest.test | COMPILE | 0.067277 | 0.133533 | 0.165139 | — | — | — |
| index_sequence.test | COMPILE | 0.058860 | 0.100838 | 0.190407 | — | — | — |
| and.test | COMPILE | 0.043772 | 0.075442 | 0.128519 | — | — | — |
| tag_of.test | COMPILE | 0.074382 | 0.145504 | 0.201346 | — | — | — |
| unused.test | COMPILE | 0.039872 | 0.094524 | 0.105620 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.073323 | 0.147983 | 0.184049 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.065480 | 0.136557 | 0.175702 | — | — | — |
| quick.test | RUN | 0.226881 | 0.454344 | 0.552296 | 0.000659 | 0.001552 | 0.001746 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.983×, 1.004× | 1.012× |
| clang | 1.001× | 1.003×, 0.999× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001308s | 0.001326s | 0.001344s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001280s | 0.001337s | 0.001387s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001298s | 0.001302s | 0.001355s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001293s | 0.001317s | 0.001400s | byte equality observed |
| adapt_assoc_adt.test | 9 | 0.001314s | 0.001323s | 0.001326s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001309s | 0.001309s | 0.001374s | byte equality observed |
| adapt_assoc_adt_named.test | 7 | 0.001299s | 0.001317s | 0.001332s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 8 | 0.001295s | 0.001333s | 0.001364s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001345s | 0.001372s | 0.001347s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001323s | 0.001341s | 0.001344s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001320s | 0.001360s | 0.001334s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001325s | 0.001303s | 0.001316s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001327s | 0.001337s | 0.001359s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001321s | 0.001295s | 0.001375s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001342s | 0.001325s | 0.001390s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001340s | 0.001337s | 0.001358s | byte equality observed |
| adapt_struct.test | 10 | 0.001362s | 0.001383s | 0.001330s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001322s | 0.001348s | 0.001357s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001328s | 0.001329s | 0.001333s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001328s | 0.001343s | 0.001290s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001341s | 0.001348s | 0.001351s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001337s | 0.001332s | 0.001387s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001359s | 0.001365s | 0.001325s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001326s | 0.001341s | 0.001297s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001299s | 0.001283s | 0.001290s | byte equality observed |
| all.test | 10 | 0.001314s | 0.001279s | 0.001356s | byte equality observed |
| any.test | 10 | 0.001293s | 0.001318s | 0.001313s | byte equality observed |
| array.test | 10 | 0.001307s | 0.001276s | 0.001275s | byte equality observed |
| as_deque.test | 10 | 0.001280s | 0.001268s | 0.001299s | byte equality observed |
| as_list.test | 10 | 0.001330s | 0.001325s | 0.001337s | byte equality observed |
| as_map.test | 10 | 0.001352s | 0.001315s | 0.001353s | byte equality observed |
| as_map_assoc.test | 9 | 0.001329s | 0.001311s | 0.001373s | byte equality observed |
| as_set.test | 8 | 0.001357s | 0.001368s | 0.001342s | byte equality observed |
| as_vector.test | 10 | 0.001356s | 0.001330s | 0.001325s | byte equality observed |
| back_extended_deque.test | 10 | 0.001287s | 0.001310s | 0.001315s | byte equality observed |
| boost_array.test | 10 | 0.001282s | 0.001290s | 0.001288s | byte equality observed |
| boost_tuple.test | 10 | 0.001335s | 0.001328s | 0.001303s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001287s | 0.001321s | 0.001293s | byte equality observed |
| clear.test | 10 | 0.001327s | 0.001320s | 0.001334s | byte equality observed |
| cons.test | 10 | 0.001351s | 0.001357s | 0.001362s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001290s | 0.001327s | 0.001289s | byte equality observed |
| convert_deque.test | 10 | 0.001296s | 0.001301s | 0.001285s | byte equality observed |
| convert_list.test | 9 | 0.001334s | 0.001310s | 0.001307s | byte equality observed |
| convert_std_pair.test | 10 | 0.001282s | 0.001308s | 0.001276s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001286s | 0.001290s | 0.001310s | byte equality observed |
| convert_vector.test | 10 | 0.001293s | 0.001298s | 0.001279s | byte equality observed |
| copy.test | 10 | 0.001329s | 0.001282s | 0.001282s | byte equality observed |
| count.test | 10 | 0.001305s | 0.001284s | 0.001297s | byte equality observed |
| count_if.test | 10 | 0.001332s | 0.001311s | 0.001296s | byte equality observed |
| deduce_sequence.test | 10 | 0.001318s | 0.001324s | 0.001294s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001317s | 0.001309s | 0.001326s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001308s | 0.001293s | 0.001285s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001290s | 0.001284s | 0.001296s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001345s | 0.001316s | 0.001327s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001293s | 0.001291s | 0.001327s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001297s | 0.001337s | 0.001283s | byte equality observed |
| define_struct.test | 10 | 0.001323s | 0.001308s | 0.001326s | byte equality observed |
| define_struct_empty.test | 10 | 0.001282s | 0.001298s | 0.001355s | byte equality observed |
| define_struct_inline.test | 10 | 0.001329s | 0.001357s | 0.001348s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001306s | 0.001318s | 0.001304s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001335s | 0.001342s | 0.001299s | byte equality observed |
| define_struct_move.test | 10 | 0.001280s | 0.001268s | 0.001287s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001324s | 0.001321s | 0.001318s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001288s | 0.001329s | 0.001332s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001349s | 0.001338s | 0.001371s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001305s | 0.001329s | 0.001309s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001301s | 0.001282s | 0.001311s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001300s | 0.001278s | 0.001286s | byte equality observed |
| deque_comparison.test | 10 | 0.001302s | 0.001310s | 0.001333s | byte equality observed |
| deque_construction.test | 10 | 0.001282s | 0.001294s | 0.001308s | byte equality observed |
| deque_copy.test | 10 | 0.001299s | 0.001276s | 0.001274s | byte equality observed |
| deque_hash.test | 10 | 0.001304s | 0.001261s | 0.001324s | byte equality observed |
| deque_iterator.test | 10 | 0.001303s | 0.001261s | 0.001278s | byte equality observed |
| deque_make.test | 10 | 0.001299s | 0.001294s | 0.001257s | byte equality observed |
| deque_misc.test | 8 | 0.001314s | 0.001286s | 0.001289s | byte equality observed |
| deque_move.test | 10 | 0.001319s | 0.001288s | 0.001321s | byte equality observed |
| deque_mutate.test | 10 | 0.001328s | 0.001262s | 0.001264s | byte equality observed |
| deque_nest.test | 10 | 0.001280s | 0.001275s | 0.001252s | byte equality observed |
| deque_tie.test | 10 | 0.001295s | 0.001341s | 0.001256s | byte equality observed |
| deque_value_at.test | 10 | 0.001295s | 0.001288s | 0.001305s | byte equality observed |
| erase.test | 10 | 0.001309s | 0.001304s | 0.001339s | byte equality observed |
| erase_key.test | 10 | 0.001338s | 0.001377s | 0.001364s | byte equality observed |
| filter.test | 10 | 0.001325s | 0.001304s | 0.001354s | byte equality observed |
| filter_if.test | 10 | 0.001323s | 0.001312s | 0.001330s | byte equality observed |
| filter_view.test | 10 | 0.001349s | 0.001289s | 0.001337s | byte equality observed |
| find.test | 10 | 0.001321s | 0.001300s | 0.001346s | byte equality observed |
| find_if.test | 10 | 0.001322s | 0.001310s | 0.001369s | byte equality observed |
| flatten.test | 10 | 0.001357s | 0.001324s | 0.001333s | byte equality observed |
| flatten_view.test | 10 | 0.001313s | 0.001314s | 0.001345s | byte equality observed |
| fold.test | 10 | 0.001341s | 0.001313s | 0.001346s | byte equality observed |
| for_each.test | 10 | 0.001340s | 0.001351s | 0.001322s | byte equality observed |
| front_extended_deque.test | 10 | 0.001284s | 0.001286s | 0.001340s | byte equality observed |
| fused.test | 10 | 0.001305s | 0.001303s | 0.001284s | byte equality observed |
| fused_function_object.test | 10 | 0.001318s | 0.001289s | 0.001288s | byte equality observed |
| fused_procedure.test | 10 | 0.001284s | 0.001270s | 0.001301s | byte equality observed |
| github-176.test | 10 | 0.001291s | 0.001295s | 0.001300s | byte equality observed |
| hash.test | 10 | 0.001302s | 0.001285s | 0.001315s | byte equality observed |
| identity_view.test | 10 | 0.001388s | 0.001323s | 0.001375s | byte equality observed |
| insert.test | 10 | 0.001340s | 0.001372s | 0.001344s | byte equality observed |
| insert_range.test | 10 | 0.001361s | 0.001351s | 0.001351s | byte equality observed |
| invoke.test | 8 | 0.001301s | 0.001275s | 0.001326s | byte equality observed |
| invoke_function_object.test | 10 | 0.001267s | 0.001262s | 0.001280s | byte equality observed |
| invoke_procedure.test | 10 | 0.001277s | 0.001252s | 0.001284s | byte equality observed |
| io.test | 10 | 0.001470s | 0.001469s | 0.001525s | byte equality observed |
| iter_fold.test | 10 | 0.001353s | 0.001342s | 0.001316s | byte equality observed |
| iterator_range.test | 10 | 0.001340s | 0.001311s | 0.001354s | byte equality observed |
| join.test | 10 | 0.001296s | 0.001293s | 0.001291s | byte equality observed |
| joint_view.test | 10 | 0.001373s | 0.001351s | 0.001371s | byte equality observed |
| list_comparison.test | 10 | 0.001264s | 0.001300s | 0.001261s | byte equality observed |
| list_construction.test | 10 | 0.001369s | 0.001319s | 0.001282s | byte equality observed |
| list_copy.test | 9 | 0.001294s | 0.001336s | 0.001301s | byte equality observed |
| list_hash.test | 10 | 0.001310s | 0.001304s | 0.001308s | byte equality observed |
| list_iterator.test | 10 | 0.001319s | 0.001254s | 0.001332s | byte equality observed |
| list_make.test | 10 | 0.001280s | 0.001274s | 0.001301s | byte equality observed |
| list_misc.test | 10 | 0.001273s | 0.001269s | 0.001296s | byte equality observed |
| list_mutate.test | 10 | 0.001311s | 0.001273s | 0.001299s | byte equality observed |
| list_nest.test | 10 | 0.001288s | 0.001323s | 0.001352s | byte equality observed |
| list_tie.test | 10 | 0.001289s | 0.001303s | 0.001277s | byte equality observed |
| list_value_at.test | 10 | 0.001321s | 0.001304s | 0.001285s | byte equality observed |
| make_fused.test | 10 | 0.001299s | 0.001319s | 0.001308s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001303s | 0.001276s | 0.001282s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001314s | 0.001290s | 0.001295s | byte equality observed |
| make_list.test | 10 | 0.001316s | 0.001303s | 0.001299s | byte equality observed |
| make_unfused.test | 10 | 0.001340s | 0.001275s | 0.001309s | byte equality observed |
| make_vector.test | 9 | 0.001295s | 0.001290s | 0.001332s | byte equality observed |
| map.test | 10 | 0.001337s | 0.001295s | 0.001332s | byte equality observed |
| map_comparison.test | 10 | 0.001337s | 0.001272s | 0.001319s | byte equality observed |
| map_construction.test | 10 | 0.001286s | 0.001302s | 0.001305s | byte equality observed |
| map_copy.test | 10 | 0.001330s | 0.001299s | 0.001335s | byte equality observed |
| map_misc.test | 7 | 0.001298s | 0.001269s | 0.001308s | byte equality observed |
| map_move.test | 8 | 0.001326s | 0.001336s | 0.001298s | byte equality observed |
| map_mutate.test | 10 | 0.001318s | 0.001251s | 0.001252s | byte equality observed |
| map_tie.test | 10 | 0.001319s | 0.001325s | 0.001254s | byte equality observed |
| move.test | 10 | 0.001295s | 0.001238s | 0.001276s | byte equality observed |
| nil.test | 10 | 0.001287s | 0.001261s | 0.001280s | byte equality observed |
| none.test | 10 | 0.001278s | 0.001263s | 0.001275s | byte equality observed |
| nview.test | 10 | 0.001296s | 0.001290s | 0.001307s | byte equality observed |
| pop_back.test | 10 | 0.001362s | 0.001319s | 0.001387s | byte equality observed |
| pop_front.test | 10 | 0.001361s | 0.001340s | 0.001358s | byte equality observed |
| push_back.test | 10 | 0.001361s | 0.001375s | 0.001332s | byte equality observed |
| push_front.test | 10 | 0.001338s | 0.001366s | 0.001337s | byte equality observed |
| quick.test | 10 | 0.000596s | 0.001245s | 0.001257s | byte equality observed |
| ref_vector.test | 10 | 0.001298s | 0.001302s | 0.001318s | byte equality observed |
| remove.test | 9 | 0.001341s | 0.001348s | 0.001380s | byte equality observed |
| remove_if.test | 10 | 0.001354s | 0.001362s | 0.001344s | byte equality observed |
| repetitive_view.test | 10 | 0.001284s | 0.001302s | 0.001299s | byte equality observed |
| replace.test | 10 | 0.001332s | 0.001300s | 0.001325s | byte equality observed |
| replace_if.test | 10 | 0.001350s | 0.001329s | 0.001348s | byte equality observed |
| reverse.test | 10 | 0.001330s | 0.001399s | 0.001378s | byte equality observed |
| reverse_fold.test | 10 | 0.001342s | 0.001328s | 0.001366s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001316s | 0.001292s | 0.001383s | byte equality observed |
| reverse_view.test | 10 | 0.001328s | 0.001295s | 0.001344s | byte equality observed |
| segmented_find.test | 10 | 0.001343s | 0.001254s | 0.001268s | byte equality observed |
| segmented_find_if.test | 10 | 0.001305s | 0.001293s | 0.001310s | byte equality observed |
| segmented_fold.test | 10 | 0.001399s | 0.001316s | 0.001394s | byte equality observed |
| segmented_for_each.test | 10 | 0.001333s | 0.001311s | 0.001356s | byte equality observed |
| segmented_iterator_range.test | 8 | 0.001348s | 0.001333s | 0.001356s | byte equality observed |
| set.test | 10 | 0.001312s | 0.001346s | 0.001305s | byte equality observed |
| single_view.test | 10 | 0.001337s | 0.001333s | 0.001318s | byte equality observed |
| std_array.test | 10 | 0.001333s | 0.001254s | 0.001283s | byte equality observed |
| std_pair.test | 10 | 0.001339s | 0.001293s | 0.001336s | byte equality observed |
| std_tuple.test | 10 | 0.001302s | 0.001317s | 0.001288s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001302s | 0.001258s | 0.001280s | byte equality observed |
| swap.test | 10 | 0.001299s | 0.001303s | 0.001312s | byte equality observed |
| transform.test | 10 | 0.001332s | 0.001320s | 0.001308s | byte equality observed |
| transform_view.test | 10 | 0.001368s | 0.001383s | 0.001348s | byte equality observed |
| tuple_comparison.test | 10 | 0.001299s | 0.001242s | 0.001301s | byte equality observed |
| tuple_construction.test | 10 | 0.001273s | 0.001262s | 0.001300s | byte equality observed |
| tuple_conversion.test | 10 | 0.001298s | 0.001273s | 0.001311s | byte equality observed |
| tuple_copy.test | 10 | 0.001301s | 0.001326s | 0.001277s | byte equality observed |
| tuple_element.test | 10 | 0.001262s | 0.001252s | 0.001298s | byte equality observed |
| tuple_hash.test | 10 | 0.001277s | 0.001304s | 0.001321s | byte equality observed |
| tuple_make.test | 10 | 0.001287s | 0.001322s | 0.001281s | byte equality observed |
| tuple_misc.test | 10 | 0.001308s | 0.001290s | 0.001295s | byte equality observed |
| tuple_mutate.test | 10 | 0.001304s | 0.001304s | 0.001289s | byte equality observed |
| tuple_nest.test | 10 | 0.001311s | 0.001319s | 0.001352s | byte equality observed |
| tuple_tie.test | 10 | 0.001262s | 0.001260s | 0.001265s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001290s | 0.001276s | 0.001280s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001290s | 0.001287s | 0.001333s | byte equality observed |
| unfused.test | 10 | 0.001292s | 0.001277s | 0.001321s | byte equality observed |
| unfused_typed.test | 10 | 0.001299s | 0.001280s | 0.001262s | byte equality observed |
| vector_comparison.test | 10 | 0.001261s | 0.001297s | 0.001299s | byte equality observed |
| vector_construction.test | 10 | 0.001273s | 0.001303s | 0.001283s | byte equality observed |
| vector_conversion.test | 10 | 0.001270s | 0.001349s | 0.001291s | byte equality observed |
| vector_copy.test | 10 | 0.001318s | 0.001271s | 0.001275s | byte equality observed |
| vector_hash.test | 10 | 0.001311s | 0.001298s | 0.001297s | byte equality observed |
| vector_iterator.test | 10 | 0.001316s | 0.001273s | 0.001286s | byte equality observed |
| vector_make.test | 10 | 0.001313s | 0.001277s | 0.001299s | byte equality observed |
| vector_misc.test | 10 | 0.001373s | 0.001270s | 0.001281s | byte equality observed |
| vector_move.test | 10 | 0.001302s | 0.001302s | 0.001351s | byte equality observed |
| vector_mutate.test | 10 | 0.001298s | 0.001268s | 0.001297s | byte equality observed |
| vector_n.test | 10 | 0.001364s | 0.001314s | 0.001327s | byte equality observed |
| vector_nest.test | 10 | 0.001270s | 0.001321s | 0.001265s | byte equality observed |
| vector_tie.test | 10 | 0.001285s | 0.001271s | 0.001329s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001285s | 0.001318s | 0.001306s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001321s | 0.001307s | 0.001306s | byte equality observed |
| vector_value_at.test | 10 | 0.001311s | 0.001287s | 0.001343s | byte equality observed |
| zip.test | 10 | 0.001333s | 0.001302s | 0.001319s | byte equality observed |
| zip2.test | 10 | 0.001297s | 0.001263s | 0.001298s | byte equality observed |
| zip_ignore.test | 8 | 0.001296s | 0.001306s | 0.001320s | byte equality observed |
| zip_view.test | 10 | 0.001299s | 0.001276s | 0.001301s | byte equality observed |
| zip_view2.test | 10 | 0.001308s | 0.001282s | 0.001301s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001275s | 0.001270s | 0.001290s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
