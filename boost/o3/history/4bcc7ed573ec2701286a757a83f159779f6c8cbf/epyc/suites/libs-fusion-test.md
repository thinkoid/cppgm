# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.475932 | 1.041998 | 1.667973 | 0.001880 | 0.001849 | 0.002074 |
| any.test | RUN | 0.461904 | 0.998106 | 1.505205 | 0.001680 | 0.002138 | 0.002196 |
| clear.test | RUN | 0.338270 | 0.888707 | 1.189286 | 0.001803 | 0.001872 | 0.002228 |
| copy.test | RUN | 0.289358 | 0.666842 | 1.005717 | 0.001995 | 0.002320 | 0.002094 |
| count.test | RUN | 0.329230 | 0.744496 | 1.146264 | 0.002098 | 0.002220 | 0.001916 |
| count_if.test | RUN | 0.311940 | 0.685519 | 1.001769 | 0.001918 | 0.002317 | 0.002106 |
| erase.test | RUN | 0.433303 | 1.238080 | 1.649768 | 0.002132 | 0.002122 | 0.002006 |
| erase_key.test | RUN | 0.420257 | 1.194230 | 1.557269 | 0.002026 | 0.002018 | 0.001947 |
| filter.test | RUN | 0.374772 | 1.004456 | 1.427385 | 0.002154 | 0.002338 | 0.002093 |
| filter_if.test | RUN | 0.423681 | 1.188867 | 1.661104 | 0.002214 | 0.002188 | 0.002235 |
| find.test | RUN | 0.376176 | 0.855677 | 1.279505 | 0.001950 | 0.001886 | 0.002114 |
| find_if.test | RUN | 0.343643 | 0.760801 | 1.217335 | 0.002048 | 0.002090 | 0.001823 |
| fold.test | RUN | 0.392235 | 0.950202 | 1.406584 | 0.002260 | 0.002332 | 0.001922 |
| for_each.test | RUN | 0.348948 | 0.852731 | 1.224079 | 0.002098 | 0.002128 | 0.002029 |
| insert.test | RUN | 0.515545 | 1.497730 | 1.974730 | 0.002076 | 0.002008 | 0.002112 |
| insert_range.test | RUN | 0.508207 | 1.512495 | 2.009519 | 0.001938 | 0.002018 | 0.001812 |
| iter_fold.test | RUN | 0.599478 | 1.418152 | 2.312648 | 0.002146 | 0.002264 | 0.002082 |
| move.test | RUN | 0.293383 | 0.690215 | 1.037714 | 0.002041 | 0.001746 | 0.001947 |
| none.test | RUN | 0.468419 | 0.997181 | 1.569939 | 0.001966 | 0.001890 | 0.001744 |
| pop_back.test | RUN | 0.479809 | 1.279894 | 1.788052 | 0.001928 | 0.002002 | 0.002150 |
| pop_front.test | RUN | 0.389094 | 1.073218 | 1.481773 | 0.002060 | 0.001885 | 0.002072 |
| push_back.test | RUN | 0.483458 | 1.542382 | 1.955861 | 0.001809 | 0.002169 | 0.002282 |
| push_front.test | RUN | 0.430918 | 1.231859 | 1.680327 | 0.002134 | 0.002051 | 0.002277 |
| remove.test | RUN | 0.491926 | 1.467460 | 1.987985 | 0.001922 | 0.002181 | 0.002170 |
| remove_if.test | RUN | 0.439130 | 1.227302 | 1.677868 | 0.001932 | 0.002054 | 0.001868 |
| replace.test | RUN | 0.415594 | 1.133246 | 1.573609 | 0.002121 | 0.002402 | 0.002282 |
| replace_if.test | RUN | 0.409502 | 1.147344 | 1.560524 | 0.002206 | 0.002000 | 0.002262 |
| reverse_fold.test | RUN | 0.649826 | 1.696115 | 2.619146 | 0.001957 | 0.001871 | 0.002120 |
| reverse_iter_fold.test | RUN | 0.655072 | 1.690585 | 2.803951 | 0.001665 | 0.001882 | 0.002008 |
| reverse.test | RUN | 0.408059 | 1.187400 | 1.532995 | 0.002174 | 0.002014 | 0.002266 |
| segmented_for_each.test | RUN | 0.724731 | 2.296603 | 3.105706 | 0.002021 | 0.002283 | 0.001787 |
| segmented_find.test | RUN | 0.458232 | 1.193798 | 1.799474 | 0.001945 | 0.002094 | 0.002034 |
| segmented_find_if.test | RUN | 0.444322 | 1.247103 | 1.799706 | 0.001979 | 0.001903 | 0.002170 |
| segmented_fold.test | RUN | 0.562323 | 1.602142 | 2.257422 | 0.002250 | 0.002385 | 0.002239 |
| transform.test | RUN | 0.432497 | 1.217684 | 1.635416 | 0.002054 | 0.002313 | 0.002098 |
| join.test | RUN | 0.325340 | 0.763791 | 1.188618 | 0.002120 | 0.002164 | 0.002060 |
| zip.test | RUN | 0.553232 | 1.447359 | 2.161120 | 0.001975 | 0.002254 | 0.002016 |
| zip2.test | RUN | 0.558697 | 1.406300 | 2.130836 | 0.001874 | 0.002103 | 0.001901 |
| zip_ignore.test | RUN | 0.406667 | 0.988667 | 1.438029 | 0.001986 | 0.002220 | 0.002024 |
| flatten.test | RUN | 0.401625 | 1.090782 | 1.512135 | 0.001838 | 0.002081 | 0.002230 |
| ticket-5490.test | COMPILE | 0.210211 | 0.463191 | 0.676585 | — | — | — |
| as_deque.test | RUN | 0.380033 | 1.026142 | 1.564629 | 0.002048 | 0.002214 | 0.002054 |
| as_list.test | RUN | 0.424873 | 1.246850 | 1.629702 | 0.001804 | 0.002143 | 0.001720 |
| as_map.test | RUN | 0.425363 | 1.243364 | 1.630288 | 0.001759 | 0.002136 | 0.002206 |
| as_map_assoc.test | RUN | 0.416866 | 1.174113 | 1.554109 | 0.001800 | 0.001972 | 0.002126 |
| as_set.test | RUN | 0.472923 | 1.433181 | 1.873184 | 0.002107 | 0.001736 | 0.002188 |
| as_vector.test | RUN | 0.429370 | 1.292278 | 1.655402 | 0.001878 | 0.002170 | 0.002219 |
| boost_tuple.test | RUN | 0.444005 | 1.222871 | 1.667821 | 0.001994 | 0.002022 | 0.002012 |
| boost_tuple_iterator.test | RUN | 0.303429 | 0.738039 | 1.047354 | 0.001832 | 0.002052 | 0.001952 |
| cons.test | RUN | 0.537977 | 1.399048 | 2.019378 | 0.001766 | 0.002059 | 0.002142 |
| convert_boost_tuple.test | RUN | 0.343560 | 1.058986 | 1.263708 | 0.001820 | 0.002046 | 0.002032 |
| convert_deque.test | RUN | 0.344998 | 1.068991 | 1.302810 | 0.001816 | 0.001968 | 0.002076 |
| convert_list.test | RUN | 0.349787 | 1.099344 | 1.312570 | 0.001974 | 0.001804 | 0.001947 |
| convert_std_pair.test | RUN | 0.360848 | 1.075744 | 1.302618 | 0.001860 | 0.001949 | 0.002092 |
| convert_std_tuple.test | RUN | 0.344345 | 1.055900 | 1.294504 | 0.001846 | 0.002071 | 0.001899 |
| convert_vector.test | RUN | 0.355421 | 1.078308 | 1.296117 | 0.001838 | 0.002058 | 0.002044 |
| filter_view.test | RUN | 0.425547 | 1.125028 | 1.582802 | 0.002070 | 0.001854 | 0.002161 |
| hash.test | RUN | 0.415997 | 0.991698 | 1.572115 | 0.002020 | 0.002254 | 0.001726 |
| io.test | RUN | 0.438614 | 1.411346 | 1.748711 | 0.001996 | 0.002454 | 0.002086 |
| iterator_range.test | RUN | 0.395129 | 1.093916 | 1.498067 | 0.001740 | 0.002078 | 0.001956 |
| joint_view.test | RUN | 0.540871 | 1.782831 | 2.205269 | 0.002102 | 0.001953 | 0.001970 |
| list_comparison.test | RUN | 0.309492 | 0.785098 | 1.140450 | 0.001908 | 0.002319 | 0.001794 |
| list_construction.test | RUN | 0.308864 | 0.727853 | 1.046814 | 0.001896 | 0.002051 | 0.001819 |
| list_copy.test | RUN | 0.458398 | 1.325886 | 1.777012 | 0.001928 | 0.002104 | 0.002121 |
| list_iterator.test | RUN | 0.312758 | 0.784536 | 1.035945 | 0.002058 | 0.001760 | 0.002119 |
| list_hash.test | RUN | 0.415707 | 1.366004 | 1.527179 | 0.001885 | 0.002136 | 0.002208 |
| list_make.test | RUN | 0.323882 | 0.806460 | 1.144306 | 0.001946 | 0.001872 | 0.002224 |
| list_misc.test | RUN | 0.418428 | 0.967474 | 1.369940 | 0.002084 | 0.002017 | 0.001980 |
| list_mutate.test | RUN | 0.287185 | 0.643571 | 0.935992 | 0.001707 | 0.002172 | 0.002246 |
| list_nest.test | RUN | 0.567899 | 1.757521 | 2.487777 | 0.001784 | 0.001892 | 0.001928 |
| list_tie.test | RUN | 0.304948 | 0.759127 | 1.017926 | 0.001948 | 0.002085 | 0.002100 |
| list_value_at.test | RUN | 0.287140 | 0.663690 | 0.986284 | 0.002041 | 0.002173 | 0.001994 |
| deque_comparison.test | RUN | 0.298903 | 0.773392 | 1.087986 | 0.001821 | 0.001926 | 0.002100 |
| deque_construction.test | RUN | 0.305144 | 0.745040 | 1.067385 | 0.002231 | 0.002272 | 0.002005 |
| deque_copy.test | RUN | 0.436665 | 1.238212 | 1.684157 | 0.001813 | 0.001872 | 0.002117 |
| deque_iterator.test | RUN | 0.299218 | 0.775942 | 1.012807 | 0.002086 | 0.002035 | 0.002142 |
| deque_hash.test | RUN | 0.409409 | 1.379488 | 1.523848 | 0.001699 | 0.002278 | 0.002121 |
| deque_is_constructible.test | COMPILE | 0.166339 | 0.345541 | 0.497394 | — | — | — |
| deque_make.test | RUN | 0.308796 | 0.776434 | 1.120253 | 0.001825 | 0.002100 | 0.002076 |
| deque_misc.test | RUN | 0.397944 | 0.912620 | 1.354405 | 0.001850 | 0.001766 | 0.002040 |
| deque_move.test | RUN | 0.306131 | 0.821440 | 1.041933 | 0.001952 | 0.001867 | 0.002370 |
| deque_mutate.test | RUN | 0.283834 | 0.641987 | 0.967819 | 0.002075 | 0.002005 | 0.002247 |
| deque_nest.test | RUN | 0.846617 | 2.804521 | 4.001727 | 0.002058 | 0.002096 | 0.002080 |
| deque_tie.test | RUN | 0.288362 | 0.718938 | 1.044642 | 0.002005 | 0.002000 | 0.002168 |
| deque_value_at.test | RUN | 0.294244 | 0.647669 | 0.939011 | 0.001794 | 0.002236 | 0.001960 |
| front_extended_deque.test | RUN | 0.413517 | 0.974947 | 1.444691 | 0.002132 | 0.002186 | 0.001969 |
| back_extended_deque.test | RUN | 0.420419 | 0.983700 | 1.413840 | 0.001582 | 0.001994 | 0.002094 |
| make_list.test | RUN | 0.327567 | 0.852063 | 1.161278 | 0.001879 | 0.002191 | 0.002108 |
| make_vector.test | RUN | 0.327408 | 0.787548 | 1.093320 | 0.001962 | 0.002242 | 0.001826 |
| map.test | RUN | 0.424816 | 1.213866 | 1.626166 | 0.002110 | 0.002074 | 0.002001 |
| map_comparison.test | RUN | 0.317710 | 0.773782 | 1.085958 | 0.001935 | 0.002210 | 0.002092 |
| map_construction.test | RUN | 0.319067 | 0.758721 | 1.090462 | 0.001950 | 0.002170 | 0.001905 |
| map_copy.test | RUN | 0.371214 | 0.971884 | 1.331647 | 0.001978 | 0.002004 | 0.002156 |
| map_misc.test | RUN | 0.402921 | 0.966107 | 1.349866 | 0.002034 | 0.001918 | 0.002022 |
| map_move.test | RUN | 0.315922 | 0.801376 | 1.097089 | 0.001549 | 0.001821 | 0.001774 |
| map_mutate.test | RUN | 0.283113 | 0.675718 | 0.959729 | 0.001717 | 0.001950 | 0.001506 |
| map_tie.test | RUN | 0.294234 | 0.683394 | 0.934552 | 0.002153 | 0.002018 | 0.002094 |
| nil.test | RUN | 0.200120 | 0.456631 | 0.649992 | 0.002020 | 0.002190 | 0.002163 |
| nview.test | RUN | 0.392442 | 0.954499 | 1.413130 | 0.002076 | 0.002296 | 0.002142 |
| reverse_view.test | RUN | 0.490933 | 1.561078 | 1.996686 | 0.002110 | 0.001992 | 0.002142 |
| segmented_iterator_range.test | RUN | 0.619824 | 1.859675 | 2.493564 | 0.001924 | 0.001891 | 0.001946 |
| set.test | RUN | 0.395691 | 1.077999 | 1.392357 | 0.002034 | 0.001847 | 0.002296 |
| single_view.test | RUN | 0.349151 | 0.984660 | 1.300240 | 0.002242 | 0.002044 | 0.002040 |
| std_pair.test | RUN | 0.454738 | 1.215119 | 1.626276 | 0.002142 | 0.001933 | 0.001717 |
| boost_array.test | RUN | 0.382477 | 0.867323 | 1.272684 | 0.002090 | 0.002130 | 0.001786 |
| array.test | RUN | 0.373744 | 0.848701 | 1.241484 | 0.001908 | 0.001908 | 0.001844 |
| std_array.test | RUN | 0.369894 | 0.860022 | 1.231226 | 0.001993 | 0.001911 | 0.001671 |
| tuple_comparison.test | RUN | 0.333543 | 0.805453 | 1.158140 | 0.002025 | 0.002276 | 0.001851 |
| tuple_construction.test | RUN | 0.343622 | 0.828719 | 1.197273 | 0.002118 | 0.002164 | 0.001696 |
| tuple_conversion.test | RUN | 0.735761 | 2.414088 | 3.715564 | 0.001558 | 0.002035 | 0.002062 |
| tuple_copy.test | RUN | 0.489128 | 1.443877 | 2.005711 | 0.002041 | 0.002271 | 0.002088 |
| tuple_element.test | RUN | 0.327687 | 0.707624 | 1.060078 | 0.001823 | 0.002238 | 0.001948 |
| tuple_make.test | RUN | 0.339267 | 0.849517 | 1.155209 | 0.001956 | 0.002070 | 0.001801 |
| tuple_misc.test | RUN | 0.425612 | 0.991017 | 1.425854 | 0.002162 | 0.002070 | 0.001634 |
| tuple_mutate.test | RUN | 0.306201 | 0.713982 | 1.036529 | 0.002017 | 0.002060 | 0.002145 |
| tuple_nest.test | RUN | 1.223857 | 4.844526 | 6.739448 | 0.002086 | 0.002074 | 0.002036 |
| tuple_hash.test | RUN | 0.443274 | 1.371345 | 1.549823 | 0.002033 | 0.001999 | 0.002219 |
| tuple_tie.test | RUN | 0.344853 | 0.796565 | 1.149732 | 0.001970 | 0.002108 | 0.001878 |
| tuple_traits__maybe_variadic.test | RUN | 0.353924 | 0.928576 | 1.222611 | 0.002052 | 0.002038 | 0.002013 |
| tuple_traits__no_variadic.test | RUN | 0.400124 | 0.946343 | 1.258006 | 0.001968 | 0.002246 | 0.002108 |
| transform_view.test | RUN | 0.496750 | 1.546401 | 1.956740 | 0.002188 | 0.002000 | 0.002224 |
| identity_view.test | RUN | 0.480096 | 1.433172 | 1.913405 | 0.002203 | 0.001824 | 0.001963 |
| vector_comparison.test | RUN | 0.313532 | 0.812121 | 1.067346 | 0.001748 | 0.002072 | 0.002120 |
| vector_construction.test | RUN | 0.314147 | 0.723577 | 1.069240 | 0.002100 | 0.002213 | 0.002128 |
| vector_conversion.test | RUN | 0.858447 | 3.202644 | 4.649942 | 0.001953 | 0.002080 | 0.002125 |
| vector_copy.test | RUN | 0.479696 | 1.438588 | 1.911992 | 0.001640 | 0.002088 | 0.001905 |
| vector_iterator.test | RUN | 0.305228 | 0.770415 | 1.108779 | 0.001912 | 0.001958 | 0.001893 |
| vector_make.test | RUN | 0.330168 | 0.811701 | 1.127964 | 0.001726 | 0.002006 | 0.002100 |
| vector_misc.test | RUN | 0.399871 | 0.969200 | 1.364117 | 0.001845 | 0.002160 | 0.002232 |
| vector_move.test | RUN | 0.309705 | 0.862342 | 1.086761 | 0.001688 | 0.001757 | 0.002034 |
| vector_mutate.test | RUN | 0.277990 | 0.668246 | 0.965603 | 0.002170 | 0.001618 | 0.001873 |
| vector_n.test | RUN | 0.344259 | 0.823897 | 1.272484 | 0.002054 | 0.001916 | 0.002192 |
| vector_nest.test | RUN | 1.244619 | 5.003665 | 6.709641 | 0.002081 | 0.002066 | 0.002032 |
| vector_hash.test | RUN | 0.409153 | 1.355533 | 1.458469 | 0.002068 | 0.002222 | 0.002088 |
| vector_tie.test | RUN | 0.295697 | 0.748096 | 1.088430 | 0.001953 | 0.002324 | 0.002107 |
| vector_traits__maybe_variadic.test | RUN | 0.341274 | 0.835095 | 1.034763 | 0.002190 | 0.002270 | 0.002044 |
| vector_traits__no_variadic.test | RUN | 0.348665 | 0.934154 | 1.122278 | 0.001936 | 0.002024 | 0.002098 |
| vector_value_at.test | RUN | 0.288247 | 0.674956 | 1.029064 | 0.001756 | 0.001914 | 0.001868 |
| zip_view.test | RUN | 0.621978 | 1.609279 | 2.439221 | 0.001986 | 0.001753 | 0.001965 |
| zip_view2.test | RUN | 0.474118 | 1.287021 | 1.872166 | 0.001828 | 0.001940 | 0.001848 |
| zip_view_ignore.test | RUN | 0.445724 | 1.229149 | 1.700547 | 0.002052 | 0.001946 | 0.002008 |
| repetitive_view.test | RUN | 0.774707 | 2.172067 | 3.178634 | 0.001822 | 0.002184 | 0.002240 |
| deduce_sequence.test | RUN | 0.390814 | 0.871862 | 1.301478 | 0.001799 | 0.002177 | 0.002030 |
| adapt_adt_named.test | RUN | 0.423556 | 1.230232 | 1.616406 | 0.001778 | 0.002102 | 0.002114 |
| adapt_adt_named_empty.test | RUN | 0.371265 | 0.990443 | 1.303053 | 0.001822 | 0.002085 | 0.002193 |
| adapt_adt.test | RUN | 0.483018 | 1.643054 | 1.874102 | 0.001923 | 0.002219 | 0.001944 |
| adapt_adt_empty.test | RUN | 0.373345 | 1.034305 | 1.351552 | 0.002049 | 0.001979 | 0.002083 |
| adapt_assoc_adt_named.test | RUN | 0.482724 | 1.263610 | 1.745517 | 0.001811 | 0.002394 | 0.002206 |
| adapt_assoc_adt_named_empty.test | RUN | 0.376751 | 0.979369 | 1.290774 | 0.001885 | 0.002246 | 0.002033 |
| adapt_assoc_adt.test | RUN | 0.493165 | 1.355616 | 1.803147 | 0.001932 | 0.002224 | 0.002074 |
| adapt_assoc_adt_empty.test | RUN | 0.377629 | 1.011652 | 1.349821 | 0.001927 | 0.002086 | 0.002188 |
| adapt_assoc_struct_named.test | RUN | 0.468013 | 1.247270 | 1.679285 | 0.001598 | 0.001508 | 0.002250 |
| adapt_assoc_struct_named_empty.test | RUN | 0.371911 | 0.958282 | 1.307930 | 0.001958 | 0.002187 | 0.002040 |
| adapt_assoc_struct.test | RUN | 0.433435 | 1.188469 | 1.582466 | 0.001851 | 0.002399 | 0.001869 |
| adapt_assoc_struct_empty.test | RUN | 0.373844 | 0.978803 | 1.293780 | 0.001869 | 0.001951 | 0.002022 |
| adapt_assoc_tpl_adt.test | RUN | 0.502484 | 1.400506 | 1.840602 | 0.001813 | 0.002098 | 0.002160 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.375478 | 0.959966 | 1.286031 | 0.001795 | 0.002245 | 0.002110 |
| adapt_assoc_tpl_struct.test | RUN | 0.410271 | 1.214636 | 1.533855 | 0.001872 | 0.002107 | 0.002151 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.370994 | 1.011715 | 1.343940 | 0.001993 | 0.002080 | 0.001942 |
| adapt_struct_named.test | RUN | 0.429373 | 1.200500 | 1.533612 | 0.002020 | 0.002087 | 0.001849 |
| adapt_struct_named_empty.test | RUN | 0.381735 | 0.964608 | 1.335379 | 0.001762 | 0.002046 | 0.002172 |
| adapt_struct.test | RUN | 0.463191 | 1.414104 | 1.783023 | 0.001846 | 0.002356 | 0.002246 |
| adapt_struct_empty.test | RUN | 0.369035 | 1.018207 | 1.376548 | 0.002162 | 0.002187 | 0.002164 |
| adapt_tpl_adt.test | RUN | 0.479136 | 1.552935 | 1.830615 | 0.002152 | 0.002138 | 0.002118 |
| adapt_tpl_adt_empty.test | RUN | 0.383560 | 1.008098 | 1.360632 | 0.001732 | 0.002078 | 0.002096 |
| adapt_tpl_struct.test | RUN | 0.397091 | 1.096750 | 1.448483 | 0.001975 | 0.001914 | 0.001707 |
| adapt_tpl_struct_empty.test | RUN | 0.384802 | 1.042891 | 1.345722 | 0.001806 | 0.002292 | 0.001934 |
| adt_attribute_proxy.test | RUN | 0.421819 | 0.975587 | 1.424697 | 0.002036 | 0.002223 | 0.002250 |
| define_struct.test | RUN | 0.527741 | 1.364470 | 1.850833 | 0.002014 | 0.002310 | 0.002093 |
| define_struct_empty.test | RUN | 0.446555 | 1.134957 | 1.538874 | 0.001871 | 0.001858 | 0.002319 |
| define_struct_move.test | RUN | 0.297960 | 0.666726 | 0.966231 | 0.001930 | 0.002158 | 0.001886 |
| define_struct_inline.test | RUN | 0.557174 | 1.656765 | 2.036896 | 0.002102 | 0.001958 | 0.002206 |
| define_struct_inline_empty.test | RUN | 0.457251 | 1.113844 | 1.543029 | 0.002163 | 0.002284 | 0.002073 |
| define_struct_inline_move.test | RUN | 0.300428 | 0.652119 | 0.950748 | 0.002090 | 0.002042 | 0.001838 |
| define_assoc_struct.test | RUN | 0.489685 | 1.330800 | 1.767583 | 0.001932 | 0.002326 | 0.002186 |
| define_assoc_struct_empty.test | RUN | 0.443913 | 1.101838 | 1.514996 | 0.001876 | 0.001930 | 0.002191 |
| define_assoc_struct_move.test | RUN | 0.298508 | 0.647751 | 0.903038 | 0.002002 | 0.001975 | 0.002280 |
| define_tpl_struct.test | RUN | 0.499588 | 1.347624 | 1.732078 | 0.001924 | 0.002094 | 0.001801 |
| define_tpl_struct_empty.test | RUN | 0.448599 | 1.094765 | 1.513235 | 0.002150 | 0.002275 | 0.002052 |
| define_tpl_struct_move.test | RUN | 0.298552 | 0.665228 | 0.940706 | 0.001840 | 0.002144 | 0.001765 |
| define_tpl_struct_inline.test | RUN | 0.522362 | 1.526397 | 1.932080 | 0.002182 | 0.002020 | 0.002286 |
| define_tpl_struct_inline_empty.test | RUN | 0.455374 | 1.115887 | 1.557016 | 0.002018 | 0.002175 | 0.002228 |
| define_tpl_struct_inline_move.test | RUN | 0.292599 | 0.647824 | 0.991790 | 0.002038 | 0.002172 | 0.002182 |
| define_assoc_tpl_struct.test | RUN | 0.503108 | 1.320065 | 1.867383 | 0.002030 | 0.002267 | 0.001944 |
| define_assoc_tpl_struct_empty.test | RUN | 0.460634 | 1.133074 | 1.564099 | 0.001968 | 0.001770 | 0.002206 |
| define_assoc_tpl_struct_move.test | RUN | 0.301990 | 0.647605 | 0.938314 | 0.002053 | 0.002146 | 0.002268 |
| std_tuple.test | RUN | 0.302480 | 0.707762 | 1.060613 | 0.001677 | 0.001910 | 0.001848 |
| std_tuple_iterator.test | RUN | 0.305959 | 0.782106 | 1.022338 | 0.002188 | 0.002193 | 0.002066 |
| ref_vector.test | RUN | 0.343268 | 0.805095 | 1.104833 | 0.002054 | 0.001973 | 0.002210 |
| flatten_view.test | RUN | 0.365648 | 0.942700 | 1.324994 | 0.002090 | 0.002318 | 0.002154 |
| github-159.test | COMPILE | 0.165884 | 0.350011 | 0.465915 | — | — | — |
| github-176.test | RUN | 0.348854 | 0.855169 | 1.131610 | 0.002039 | 0.002235 | 0.002148 |
| size.test | COMPILE | 0.289459 | 0.615416 | 0.897373 | — | — | — |
| fused.test | RUN | 0.399505 | 0.945786 | 1.346882 | 0.001928 | 0.002056 | 0.001600 |
| fused_function_object.test | RUN | 0.302926 | 0.679830 | 1.004244 | 0.001974 | 0.002402 | 0.002208 |
| fused_procedure.test | RUN | 0.393253 | 0.874319 | 1.272722 | 0.001936 | 0.002232 | 0.001824 |
| unfused.test | RUN | 0.321324 | 0.704885 | 1.059180 | 0.002131 | 0.002304 | 0.001776 |
| unfused_typed.test | RUN | 0.316511 | 0.764646 | 1.066012 | 0.002038 | 0.001999 | 0.002121 |
| make_fused.test | RUN | 0.403910 | 0.911482 | 1.347249 | 0.002078 | 0.002015 | 0.001968 |
| make_fused_function_object.test | RUN | 0.303201 | 0.709933 | 1.020521 | 0.001771 | 0.002005 | 0.002146 |
| make_fused_procedure.test | RUN | 0.393311 | 0.847196 | 1.255967 | 0.002058 | 0.002020 | 0.002152 |
| make_unfused.test | RUN | 0.315258 | 0.706840 | 1.025739 | 0.002037 | 0.002230 | 0.002084 |
| invoke.test | RUN | 0.777819 | 2.489622 | 3.448647 | 0.001911 | 0.001870 | 0.002168 |
| invoke_function_object.test | RUN | 0.372057 | 0.906172 | 1.322177 | 0.002106 | 0.002270 | 0.002157 |
| invoke_procedure.test | RUN | 0.629260 | 1.900816 | 2.590997 | 0.001780 | 0.001816 | 0.002174 |
| swap.test | RUN | 0.472167 | 1.132120 | 1.691182 | 0.001841 | 0.001986 | 0.002164 |
| is_sequence.test | COMPILE | 0.085328 | 0.168479 | 0.208603 | — | — | — |
| is_view.test | COMPILE | 0.079900 | 0.168627 | 0.209528 | — | — | — |
| pair_deque.test | COMPILE | 0.168362 | 0.358881 | 0.510682 | — | — | — |
| pair_list.test | COMPILE | 0.166162 | 0.366279 | 0.478004 | — | — | — |
| pair_map.test | COMPILE | 0.171734 | 0.382248 | 0.510054 | — | — | — |
| pair_set.test | COMPILE | 0.174095 | 0.382653 | 0.490828 | — | — | — |
| pair_vector.test | COMPILE | 0.172608 | 0.363980 | 0.497513 | — | — | — |
| pair_nest.test | COMPILE | 0.069706 | 0.158693 | 0.210752 | — | — | — |
| index_sequence.test | COMPILE | 0.060946 | 0.107650 | 0.139122 | — | — | — |
| and.test | COMPILE | 0.045913 | 0.079898 | 0.101009 | — | — | — |
| tag_of.test | COMPILE | 0.080611 | 0.158155 | 0.183078 | — | — | — |
| unused.test | COMPILE | 0.041967 | 0.101603 | 0.124237 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.074584 | 0.159453 | 0.193609 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.065050 | 0.105688 | 0.158130 | — | — | — |
| quick.test | RUN | 0.204558 | 0.451915 | 0.590248 | 0.000710 | 0.001547 | 0.001427 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.991×, 0.994× | 1.002× |
| clang | 1.005× | 1.005×, 1.006× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001261s | 0.001290s | 0.001258s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001263s | 0.001272s | 0.001248s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001283s | 0.001293s | 0.001289s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001271s | 0.001269s | 0.001270s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001283s | 0.001246s | 0.001234s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001290s | 0.001237s | 0.001287s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001296s | 0.001221s | 0.001315s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001257s | 0.001251s | 0.001228s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001277s | 0.001287s | 0.001268s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001287s | 0.001239s | 0.001249s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001261s | 0.001306s | 0.001231s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001250s | 0.001288s | 0.001224s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001242s | 0.001266s | 0.001248s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001273s | 0.001255s | 0.001256s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001299s | 0.001318s | 0.001260s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001260s | 0.001230s | 0.001219s | byte equality observed |
| adapt_struct.test | 10 | 0.001324s | 0.001306s | 0.001219s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001279s | 0.001262s | 0.001210s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001268s | 0.001260s | 0.001196s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001276s | 0.001235s | 0.001283s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001261s | 0.001243s | 0.001279s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001277s | 0.001246s | 0.001238s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001229s | 0.001290s | 0.001258s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001226s | 0.001279s | 0.001267s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001203s | 0.001221s | 0.001218s | byte equality observed |
| all.test | 10 | 0.001210s | 0.001241s | 0.001243s | byte equality observed |
| any.test | 10 | 0.001237s | 0.001267s | 0.001220s | byte equality observed |
| array.test | 10 | 0.001247s | 0.001266s | 0.001259s | byte equality observed |
| as_deque.test | 10 | 0.001223s | 0.001256s | 0.001191s | byte equality observed |
| as_list.test | 10 | 0.001280s | 0.001290s | 0.001291s | byte equality observed |
| as_map.test | 10 | 0.001295s | 0.001314s | 0.001255s | byte equality observed |
| as_map_assoc.test | 10 | 0.001261s | 0.001312s | 0.001224s | byte equality observed |
| as_set.test | 10 | 0.001298s | 0.001309s | 0.001313s | byte equality observed |
| as_vector.test | 10 | 0.001318s | 0.001275s | 0.001274s | byte equality observed |
| back_extended_deque.test | 10 | 0.001233s | 0.001242s | 0.001213s | byte equality observed |
| boost_array.test | 10 | 0.001210s | 0.001248s | 0.001230s | byte equality observed |
| boost_tuple.test | 10 | 0.001260s | 0.001256s | 0.001224s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001208s | 0.001229s | 0.001200s | byte equality observed |
| clear.test | 10 | 0.001299s | 0.001298s | 0.001271s | byte equality observed |
| cons.test | 10 | 0.001302s | 0.001300s | 0.001259s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001237s | 0.001261s | 0.001221s | byte equality observed |
| convert_deque.test | 10 | 0.001228s | 0.001276s | 0.001262s | byte equality observed |
| convert_list.test | 8 | 0.001234s | 0.001252s | 0.001239s | byte equality observed |
| convert_std_pair.test | 10 | 0.001243s | 0.001212s | 0.001192s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001245s | 0.001219s | 0.001225s | byte equality observed |
| convert_vector.test | 10 | 0.001258s | 0.001237s | 0.001188s | byte equality observed |
| copy.test | 10 | 0.001244s | 0.001221s | 0.001249s | byte equality observed |
| count.test | 10 | 0.001225s | 0.001230s | 0.001225s | byte equality observed |
| count_if.test | 9 | 0.001221s | 0.001298s | 0.001248s | byte equality observed |
| deduce_sequence.test | 10 | 0.001224s | 0.001270s | 0.001243s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001278s | 0.001270s | 0.001239s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001268s | 0.001263s | 0.001216s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001240s | 0.001235s | 0.001198s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001231s | 0.001283s | 0.001263s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001279s | 0.001248s | 0.001242s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001255s | 0.001216s | 0.001198s | byte equality observed |
| define_struct.test | 10 | 0.001264s | 0.001289s | 0.001261s | byte equality observed |
| define_struct_empty.test | 10 | 0.001240s | 0.001256s | 0.001258s | byte equality observed |
| define_struct_inline.test | 10 | 0.001270s | 0.001308s | 0.001253s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001254s | 0.001277s | 0.001312s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001220s | 0.001211s | 0.001240s | byte equality observed |
| define_struct_move.test | 10 | 0.001209s | 0.001235s | 0.001261s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001234s | 0.001259s | 0.001257s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001248s | 0.001304s | 0.001276s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001266s | 0.001297s | 0.001298s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001238s | 0.001271s | 0.001258s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001224s | 0.001229s | 0.001221s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001213s | 0.001233s | 0.001225s | byte equality observed |
| deque_comparison.test | 10 | 0.001262s | 0.001252s | 0.001221s | byte equality observed |
| deque_construction.test | 10 | 0.001238s | 0.001228s | 0.001257s | byte equality observed |
| deque_copy.test | 10 | 0.001265s | 0.001300s | 0.001240s | byte equality observed |
| deque_hash.test | 10 | 0.001264s | 0.001321s | 0.001287s | byte equality observed |
| deque_iterator.test | 9 | 0.001259s | 0.001229s | 0.001248s | byte equality observed |
| deque_make.test | 10 | 0.001264s | 0.001249s | 0.001238s | byte equality observed |
| deque_misc.test | 10 | 0.001234s | 0.001281s | 0.001283s | byte equality observed |
| deque_move.test | 10 | 0.001291s | 0.001266s | 0.001235s | byte equality observed |
| deque_mutate.test | 10 | 0.001211s | 0.001241s | 0.001219s | byte equality observed |
| deque_nest.test | 10 | 0.001245s | 0.001213s | 0.001245s | byte equality observed |
| deque_tie.test | 10 | 0.001257s | 0.001263s | 0.001224s | byte equality observed |
| deque_value_at.test | 10 | 0.001213s | 0.001248s | 0.001221s | byte equality observed |
| erase.test | 10 | 0.001246s | 0.001269s | 0.001248s | byte equality observed |
| erase_key.test | 10 | 0.001294s | 0.001312s | 0.001276s | byte equality observed |
| filter.test | 10 | 0.001270s | 0.001310s | 0.001230s | byte equality observed |
| filter_if.test | 10 | 0.001235s | 0.001360s | 0.001275s | byte equality observed |
| filter_view.test | 10 | 0.001222s | 0.001344s | 0.001257s | byte equality observed |
| find.test | 9 | 0.001244s | 0.001290s | 0.001273s | byte equality observed |
| find_if.test | 10 | 0.001249s | 0.001333s | 0.001232s | byte equality observed |
| flatten.test | 10 | 0.001254s | 0.001284s | 0.001207s | byte equality observed |
| flatten_view.test | 10 | 0.001233s | 0.001296s | 0.001208s | byte equality observed |
| fold.test | 10 | 0.001224s | 0.001285s | 0.001256s | byte equality observed |
| for_each.test | 10 | 0.001256s | 0.001287s | 0.001265s | byte equality observed |
| front_extended_deque.test | 10 | 0.001228s | 0.001245s | 0.001262s | byte equality observed |
| fused.test | 10 | 0.001251s | 0.001237s | 0.001242s | byte equality observed |
| fused_function_object.test | 10 | 0.001219s | 0.001194s | 0.001245s | byte equality observed |
| fused_procedure.test | 9 | 0.001215s | 0.001213s | 0.001232s | byte equality observed |
| github-176.test | 10 | 0.001221s | 0.001235s | 0.001238s | byte equality observed |
| hash.test | 10 | 0.001266s | 0.001234s | 0.001210s | byte equality observed |
| identity_view.test | 9 | 0.001272s | 0.001271s | 0.001255s | byte equality observed |
| insert.test | 10 | 0.001292s | 0.001280s | 0.001277s | byte equality observed |
| insert_range.test | 10 | 0.001283s | 0.001262s | 0.001246s | byte equality observed |
| invoke.test | 10 | 0.001240s | 0.001262s | 0.001203s | byte equality observed |
| invoke_function_object.test | 10 | 0.001252s | 0.001254s | 0.001241s | byte equality observed |
| invoke_procedure.test | 10 | 0.001259s | 0.001258s | 0.001228s | byte equality observed |
| io.test | 10 | 0.001396s | 0.001448s | 0.001390s | byte equality observed |
| iter_fold.test | 10 | 0.001220s | 0.001274s | 0.001225s | byte equality observed |
| iterator_range.test | 10 | 0.001289s | 0.001297s | 0.001245s | byte equality observed |
| join.test | 10 | 0.001208s | 0.001234s | 0.001195s | byte equality observed |
| joint_view.test | 10 | 0.001301s | 0.001337s | 0.001299s | byte equality observed |
| list_comparison.test | 10 | 0.001219s | 0.001269s | 0.001209s | byte equality observed |
| list_construction.test | 10 | 0.001240s | 0.001261s | 0.001208s | byte equality observed |
| list_copy.test | 10 | 0.001248s | 0.001254s | 0.001185s | byte equality observed |
| list_hash.test | 10 | 0.001254s | 0.001243s | 0.001205s | byte equality observed |
| list_iterator.test | 10 | 0.001261s | 0.001236s | 0.001204s | byte equality observed |
| list_make.test | 10 | 0.001249s | 0.001285s | 0.001202s | byte equality observed |
| list_misc.test | 10 | 0.001248s | 0.001268s | 0.001198s | byte equality observed |
| list_mutate.test | 10 | 0.001222s | 0.001237s | 0.001223s | byte equality observed |
| list_nest.test | 10 | 0.001239s | 0.001246s | 0.001206s | byte equality observed |
| list_tie.test | 10 | 0.001221s | 0.001295s | 0.001239s | byte equality observed |
| list_value_at.test | 10 | 0.001202s | 0.001266s | 0.001250s | byte equality observed |
| make_fused.test | 10 | 0.001227s | 0.001283s | 0.001288s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001219s | 0.001230s | 0.001231s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001221s | 0.001257s | 0.001261s | byte equality observed |
| make_list.test | 10 | 0.001247s | 0.001255s | 0.001240s | byte equality observed |
| make_unfused.test | 10 | 0.001270s | 0.001220s | 0.001192s | byte equality observed |
| make_vector.test | 10 | 0.001236s | 0.001258s | 0.001259s | byte equality observed |
| map.test | 10 | 0.001243s | 0.001277s | 0.001231s | byte equality observed |
| map_comparison.test | 10 | 0.001223s | 0.001247s | 0.001210s | byte equality observed |
| map_construction.test | 10 | 0.001236s | 0.001222s | 0.001244s | byte equality observed |
| map_copy.test | 10 | 0.001211s | 0.001310s | 0.001190s | byte equality observed |
| map_misc.test | 10 | 0.001258s | 0.001214s | 0.001185s | byte equality observed |
| map_move.test | 10 | 0.001255s | 0.001261s | 0.001221s | byte equality observed |
| map_mutate.test | 9 | 0.001205s | 0.001216s | 0.001189s | byte equality observed |
| map_tie.test | 10 | 0.001213s | 0.001197s | 0.001230s | byte equality observed |
| move.test | 10 | 0.001272s | 0.001229s | 0.001213s | byte equality observed |
| nil.test | 10 | 0.001266s | 0.001227s | 0.001177s | byte equality observed |
| none.test | 10 | 0.001243s | 0.001238s | 0.001251s | byte equality observed |
| nview.test | 10 | 0.001269s | 0.001244s | 0.001286s | byte equality observed |
| pop_back.test | 10 | 0.001268s | 0.001300s | 0.001220s | byte equality observed |
| pop_front.test | 10 | 0.001261s | 0.001324s | 0.001206s | byte equality observed |
| push_back.test | 10 | 0.001256s | 0.001260s | 0.001268s | byte equality observed |
| push_front.test | 10 | 0.001269s | 0.001309s | 0.001267s | byte equality observed |
| quick.test | 10 | 0.000562s | 0.001224s | 0.001171s | byte equality observed |
| ref_vector.test | 10 | 0.001254s | 0.001230s | 0.001201s | byte equality observed |
| remove.test | 10 | 0.001268s | 0.001280s | 0.001250s | byte equality observed |
| remove_if.test | 10 | 0.001261s | 0.001297s | 0.001255s | byte equality observed |
| repetitive_view.test | 10 | 0.001261s | 0.001227s | 0.001207s | byte equality observed |
| replace.test | 10 | 0.001250s | 0.001264s | 0.001240s | byte equality observed |
| replace_if.test | 10 | 0.001260s | 0.001282s | 0.001257s | byte equality observed |
| reverse.test | 10 | 0.001292s | 0.001295s | 0.001291s | byte equality observed |
| reverse_fold.test | 10 | 0.001251s | 0.001268s | 0.001273s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001233s | 0.001287s | 0.001288s | byte equality observed |
| reverse_view.test | 10 | 0.001247s | 0.001279s | 0.001242s | byte equality observed |
| segmented_find.test | 10 | 0.001215s | 0.001261s | 0.001259s | byte equality observed |
| segmented_find_if.test | 10 | 0.001252s | 0.001224s | 0.001210s | byte equality observed |
| segmented_fold.test | 10 | 0.001249s | 0.001292s | 0.001283s | byte equality observed |
| segmented_for_each.test | 10 | 0.001269s | 0.001307s | 0.001266s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001290s | 0.001282s | 0.001298s | byte equality observed |
| set.test | 9 | 0.001304s | 0.001276s | 0.001236s | byte equality observed |
| single_view.test | 10 | 0.001294s | 0.001284s | 0.001256s | byte equality observed |
| std_array.test | 10 | 0.001259s | 0.001231s | 0.001203s | byte equality observed |
| std_pair.test | 10 | 0.001256s | 0.001274s | 0.001239s | byte equality observed |
| std_tuple.test | 10 | 0.001245s | 0.001247s | 0.001196s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001274s | 0.001226s | 0.001237s | byte equality observed |
| swap.test | 10 | 0.001257s | 0.001244s | 0.001234s | byte equality observed |
| transform.test | 10 | 0.001257s | 0.001266s | 0.001253s | byte equality observed |
| transform_view.test | 10 | 0.001309s | 0.001297s | 0.001303s | byte equality observed |
| tuple_comparison.test | 10 | 0.001250s | 0.001229s | 0.001184s | byte equality observed |
| tuple_construction.test | 10 | 0.001220s | 0.001241s | 0.001220s | byte equality observed |
| tuple_conversion.test | 10 | 0.001235s | 0.001250s | 0.001213s | byte equality observed |
| tuple_copy.test | 10 | 0.001257s | 0.001247s | 0.001202s | byte equality observed |
| tuple_element.test | 9 | 0.001211s | 0.001185s | 0.001187s | byte equality observed |
| tuple_hash.test | 10 | 0.001264s | 0.001225s | 0.001224s | byte equality observed |
| tuple_make.test | 10 | 0.001227s | 0.001219s | 0.001266s | byte equality observed |
| tuple_misc.test | 10 | 0.001238s | 0.001293s | 0.001218s | byte equality observed |
| tuple_mutate.test | 10 | 0.001250s | 0.001264s | 0.001265s | byte equality observed |
| tuple_nest.test | 10 | 0.001235s | 0.001273s | 0.001254s | byte equality observed |
| tuple_tie.test | 10 | 0.001240s | 0.001262s | 0.001203s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001216s | 0.001262s | 0.001205s | byte equality observed |
| tuple_traits__no_variadic.test | 9 | 0.001229s | 0.001239s | 0.001254s | byte equality observed |
| unfused.test | 10 | 0.001230s | 0.001191s | 0.001217s | byte equality observed |
| unfused_typed.test | 10 | 0.001253s | 0.001260s | 0.001246s | byte equality observed |
| vector_comparison.test | 10 | 0.001266s | 0.001250s | 0.001214s | byte equality observed |
| vector_construction.test | 10 | 0.001223s | 0.001219s | 0.001180s | byte equality observed |
| vector_conversion.test | 10 | 0.001234s | 0.001280s | 0.001194s | byte equality observed |
| vector_copy.test | 8 | 0.001225s | 0.001213s | 0.001245s | byte equality observed |
| vector_hash.test | 10 | 0.001249s | 0.001264s | 0.001289s | byte equality observed |
| vector_iterator.test | 10 | 0.001230s | 0.001243s | 0.001235s | byte equality observed |
| vector_make.test | 10 | 0.001260s | 0.001220s | 0.001236s | byte equality observed |
| vector_misc.test | 10 | 0.001210s | 0.001219s | 0.001190s | byte equality observed |
| vector_move.test | 10 | 0.001248s | 0.001255s | 0.001239s | byte equality observed |
| vector_mutate.test | 8 | 0.001231s | 0.001246s | 0.001190s | byte equality observed |
| vector_n.test | 10 | 0.001272s | 0.001268s | 0.001254s | byte equality observed |
| vector_nest.test | 10 | 0.001230s | 0.001268s | 0.001234s | byte equality observed |
| vector_tie.test | 10 | 0.001213s | 0.001230s | 0.001174s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001252s | 0.001243s | 0.001183s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001232s | 0.001249s | 0.001219s | byte equality observed |
| vector_value_at.test | 10 | 0.001248s | 0.001224s | 0.001257s | byte equality observed |
| zip.test | 10 | 0.001272s | 0.001210s | 0.001216s | byte equality observed |
| zip2.test | 10 | 0.001263s | 0.001219s | 0.001186s | byte equality observed |
| zip_ignore.test | 10 | 0.001277s | 0.001252s | 0.001211s | byte equality observed |
| zip_view.test | 8 | 0.001255s | 0.001215s | 0.001215s | byte equality observed |
| zip_view2.test | 9 | 0.001238s | 0.001198s | 0.001217s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001255s | 0.001181s | 0.001280s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
