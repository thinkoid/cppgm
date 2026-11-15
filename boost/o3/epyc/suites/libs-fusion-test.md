# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.462714 | 1.014597 | 1.598503 | 0.001780 | 0.001754 | 0.001944 |
| any.test | RUN | 0.447065 | 0.955472 | 1.527401 | 0.001842 | 0.002085 | 0.001856 |
| clear.test | RUN | 0.325460 | 0.856834 | 1.182542 | 0.001960 | 0.001822 | 0.002111 |
| copy.test | RUN | 0.277120 | 0.643832 | 0.991334 | 0.001939 | 0.002172 | 0.001802 |
| count.test | RUN | 0.310458 | 0.716739 | 1.094082 | 0.001946 | 0.002005 | 0.001742 |
| count_if.test | RUN | 0.301350 | 0.669477 | 0.995760 | 0.002050 | 0.002074 | 0.001792 |
| erase.test | RUN | 0.433183 | 1.160512 | 1.574309 | 0.001907 | 0.002238 | 0.001845 |
| erase_key.test | RUN | 0.414392 | 1.183144 | 1.533198 | 0.001910 | 0.002154 | 0.001553 |
| filter.test | RUN | 0.373578 | 1.021834 | 1.354494 | 0.002035 | 0.002151 | 0.002132 |
| filter_if.test | RUN | 0.422471 | 1.191576 | 1.649474 | 0.001910 | 0.001784 | 0.002062 |
| find.test | RUN | 0.369366 | 0.793964 | 1.224313 | 0.001690 | 0.001975 | 0.002108 |
| find_if.test | RUN | 0.338385 | 0.757374 | 1.112650 | 0.002062 | 0.001734 | 0.001762 |
| fold.test | RUN | 0.387207 | 0.933744 | 1.367250 | 0.002114 | 0.002296 | 0.002138 |
| for_each.test | RUN | 0.342834 | 0.836523 | 1.212178 | 0.001946 | 0.002310 | 0.002120 |
| insert.test | RUN | 0.499161 | 1.503302 | 1.912576 | 0.001852 | 0.002068 | 0.002104 |
| insert_range.test | RUN | 0.488711 | 1.467498 | 1.937728 | 0.002016 | 0.001774 | 0.001821 |
| iter_fold.test | RUN | 0.587804 | 1.422253 | 2.319456 | 0.002010 | 0.002294 | 0.002198 |
| move.test | RUN | 0.292707 | 0.681796 | 1.019460 | 0.001932 | 0.001831 | 0.001694 |
| none.test | RUN | 0.492183 | 0.973495 | 1.574210 | 0.001766 | 0.001841 | 0.001724 |
| pop_back.test | RUN | 0.468865 | 1.293217 | 1.724544 | 0.001964 | 0.002032 | 0.002176 |
| pop_front.test | RUN | 0.369849 | 1.033516 | 1.422989 | 0.002087 | 0.001825 | 0.001913 |
| push_back.test | RUN | 0.485797 | 1.518632 | 1.877665 | 0.002176 | 0.002330 | 0.002109 |
| push_front.test | RUN | 0.432524 | 1.239913 | 1.586220 | 0.001934 | 0.002073 | 0.002137 |
| remove.test | RUN | 0.472744 | 1.379830 | 1.876715 | 0.001994 | 0.001715 | 0.001964 |
| remove_if.test | RUN | 0.430597 | 1.175350 | 1.645858 | 0.001810 | 0.002126 | 0.001900 |
| replace.test | RUN | 0.399039 | 1.132275 | 1.446924 | 0.002017 | 0.002152 | 0.001912 |
| replace_if.test | RUN | 0.401265 | 1.167898 | 1.450103 | 0.002110 | 0.002222 | 0.002043 |
| reverse_fold.test | RUN | 0.632499 | 1.572463 | 2.529069 | 0.001683 | 0.002204 | 0.001908 |
| reverse_iter_fold.test | RUN | 0.662938 | 1.641677 | 2.668476 | 0.001828 | 0.002133 | 0.002088 |
| reverse.test | RUN | 0.404627 | 1.181890 | 1.519569 | 0.001811 | 0.002165 | 0.001685 |
| segmented_for_each.test | RUN | 0.706679 | 2.188508 | 3.044723 | 0.001970 | 0.002012 | 0.001941 |
| segmented_find.test | RUN | 0.427101 | 1.216468 | 1.735918 | 0.001769 | 0.001980 | 0.001867 |
| segmented_find_if.test | RUN | 0.449286 | 1.175065 | 1.755427 | 0.001810 | 0.001690 | 0.001929 |
| segmented_fold.test | RUN | 0.550530 | 1.546399 | 2.181300 | 0.001982 | 0.002214 | 0.001962 |
| transform.test | RUN | 0.422686 | 1.217452 | 1.573033 | 0.001678 | 0.002296 | 0.002102 |
| join.test | RUN | 0.315763 | 0.761232 | 1.155514 | 0.002004 | 0.001934 | 0.001860 |
| zip.test | RUN | 0.553011 | 1.449711 | 2.106984 | 0.001898 | 0.002144 | 0.002090 |
| zip2.test | RUN | 0.540944 | 1.351796 | 1.985700 | 0.001921 | 0.002158 | 0.001945 |
| zip_ignore.test | RUN | 0.404524 | 0.959491 | 1.365584 | 0.001783 | 0.001924 | 0.002042 |
| flatten.test | RUN | 0.390724 | 1.059659 | 1.398773 | 0.002092 | 0.002113 | 0.002058 |
| ticket-5490.test | COMPILE | 0.210657 | 0.441313 | 0.653079 | — | — | — |
| as_deque.test | RUN | 0.381300 | 0.987803 | 1.518563 | 0.002115 | 0.002222 | 0.001962 |
| as_list.test | RUN | 0.424955 | 1.201991 | 1.574545 | 0.001990 | 0.002182 | 0.002239 |
| as_map.test | RUN | 0.437149 | 1.184848 | 1.598559 | 0.001782 | 0.001765 | 0.001966 |
| as_map_assoc.test | RUN | 0.417753 | 1.120863 | 1.522789 | 0.002007 | 0.001956 | 0.002054 |
| as_set.test | RUN | 0.485183 | 1.369401 | 1.851363 | 0.001964 | 0.002176 | 0.001823 |
| as_vector.test | RUN | 0.427475 | 1.202303 | 1.586641 | 0.001831 | 0.001966 | 0.001644 |
| boost_tuple.test | RUN | 0.452627 | 1.236615 | 1.599265 | 0.001726 | 0.001775 | 0.002156 |
| boost_tuple_iterator.test | RUN | 0.300265 | 0.750167 | 1.025196 | 0.001893 | 0.001807 | 0.002028 |
| cons.test | RUN | 0.543504 | 1.350314 | 1.956989 | 0.001926 | 0.001812 | 0.002137 |
| convert_boost_tuple.test | RUN | 0.345168 | 1.035976 | 1.276025 | 0.001887 | 0.001871 | 0.001600 |
| convert_deque.test | RUN | 0.343187 | 1.037293 | 1.245672 | 0.001778 | 0.001793 | 0.001802 |
| convert_list.test | RUN | 0.345128 | 1.064815 | 1.265907 | 0.001526 | 0.001886 | 0.001727 |
| convert_std_pair.test | RUN | 0.359246 | 1.051088 | 1.261619 | 0.001929 | 0.001800 | 0.001882 |
| convert_std_tuple.test | RUN | 0.338794 | 1.021212 | 1.238989 | 0.001952 | 0.002028 | 0.001742 |
| convert_vector.test | RUN | 0.348574 | 1.033676 | 1.270965 | 0.001784 | 0.001814 | 0.002040 |
| filter_view.test | RUN | 0.409506 | 1.079927 | 1.476928 | 0.001738 | 0.001976 | 0.002152 |
| hash.test | RUN | 0.405358 | 0.999985 | 1.506532 | 0.002002 | 0.002136 | 0.001744 |
| io.test | RUN | 0.425565 | 1.406165 | 1.715423 | 0.001979 | 0.002322 | 0.002184 |
| iterator_range.test | RUN | 0.386716 | 1.050071 | 1.412784 | 0.001806 | 0.001943 | 0.002009 |
| joint_view.test | RUN | 0.514312 | 1.752968 | 2.115701 | 0.001976 | 0.002098 | 0.001781 |
| list_comparison.test | RUN | 0.304695 | 0.735543 | 1.069309 | 0.001900 | 0.001906 | 0.001810 |
| list_construction.test | RUN | 0.297205 | 0.731436 | 1.019442 | 0.001930 | 0.001932 | 0.001622 |
| list_copy.test | RUN | 0.450586 | 1.284382 | 1.730222 | 0.001907 | 0.002047 | 0.002207 |
| list_iterator.test | RUN | 0.294742 | 0.704371 | 0.977172 | 0.001738 | 0.002164 | 0.001885 |
| list_hash.test | RUN | 0.407327 | 1.397076 | 1.505780 | 0.002004 | 0.002188 | 0.002005 |
| list_make.test | RUN | 0.312392 | 0.785292 | 1.085330 | 0.001772 | 0.001906 | 0.002046 |
| list_misc.test | RUN | 0.418610 | 0.944335 | 1.320201 | 0.001751 | 0.002069 | 0.001536 |
| list_mutate.test | RUN | 0.282906 | 0.616325 | 0.933201 | 0.001771 | 0.001935 | 0.001883 |
| list_nest.test | RUN | 0.584680 | 1.758783 | 2.396108 | 0.001814 | 0.001757 | 0.001996 |
| list_tie.test | RUN | 0.297256 | 0.691028 | 1.076182 | 0.002021 | 0.002164 | 0.002062 |
| list_value_at.test | RUN | 0.301894 | 0.718917 | 0.981258 | 0.001853 | 0.002064 | 0.001802 |
| deque_comparison.test | RUN | 0.304705 | 0.727350 | 1.050124 | 0.002106 | 0.001958 | 0.001627 |
| deque_construction.test | RUN | 0.306431 | 0.710263 | 1.051392 | 0.002133 | 0.002150 | 0.001972 |
| deque_copy.test | RUN | 0.427382 | 1.200470 | 1.613141 | 0.001713 | 0.001775 | 0.001962 |
| deque_iterator.test | RUN | 0.303856 | 0.744452 | 1.042261 | 0.001832 | 0.001929 | 0.001928 |
| deque_hash.test | RUN | 0.415684 | 1.340801 | 1.452437 | 0.001897 | 0.002170 | 0.002158 |
| deque_is_constructible.test | COMPILE | 0.163884 | 0.334456 | 0.481919 | — | — | — |
| deque_make.test | RUN | 0.302296 | 0.733635 | 1.086555 | 0.002010 | 0.002190 | 0.001948 |
| deque_misc.test | RUN | 0.389467 | 0.938504 | 1.237730 | 0.001870 | 0.001681 | 0.001961 |
| deque_move.test | RUN | 0.301255 | 0.750309 | 1.032983 | 0.001876 | 0.002112 | 0.002094 |
| deque_mutate.test | RUN | 0.280015 | 0.638179 | 0.899212 | 0.001670 | 0.002146 | 0.001943 |
| deque_nest.test | RUN | 0.843651 | 2.736900 | 3.878131 | 0.002136 | 0.002095 | 0.002118 |
| deque_tie.test | RUN | 0.286417 | 0.656366 | 0.939168 | 0.002026 | 0.002058 | 0.002048 |
| deque_value_at.test | RUN | 0.281718 | 0.644475 | 0.998691 | 0.001806 | 0.001853 | 0.002085 |
| front_extended_deque.test | RUN | 0.405746 | 0.952996 | 1.364229 | 0.001957 | 0.002097 | 0.001893 |
| back_extended_deque.test | RUN | 0.408907 | 1.039511 | 1.440993 | 0.001676 | 0.002226 | 0.001694 |
| make_list.test | RUN | 0.327993 | 0.775423 | 1.058284 | 0.001836 | 0.002029 | 0.001749 |
| make_vector.test | RUN | 0.323573 | 0.748754 | 1.132678 | 0.001918 | 0.001972 | 0.002072 |
| map.test | RUN | 0.404305 | 1.181951 | 1.529098 | 0.002062 | 0.001871 | 0.001879 |
| map_comparison.test | RUN | 0.305823 | 0.776372 | 1.075287 | 0.001778 | 0.001781 | 0.002134 |
| map_construction.test | RUN | 0.312270 | 0.718523 | 1.059674 | 0.001790 | 0.002062 | 0.001858 |
| map_copy.test | RUN | 0.383044 | 0.936467 | 1.291076 | 0.001955 | 0.002126 | 0.002055 |
| map_misc.test | RUN | 0.397216 | 0.938523 | 1.292918 | 0.001742 | 0.001883 | 0.001638 |
| map_move.test | RUN | 0.312223 | 0.769628 | 1.075599 | 0.002094 | 0.001689 | 0.001982 |
| map_mutate.test | RUN | 0.280088 | 0.651179 | 0.928394 | 0.001706 | 0.001846 | 0.001784 |
| map_tie.test | RUN | 0.294815 | 0.649399 | 0.944938 | 0.001932 | 0.001877 | 0.001752 |
| nil.test | RUN | 0.198532 | 0.446525 | 0.645267 | 0.001954 | 0.002188 | 0.001768 |
| nview.test | RUN | 0.384145 | 0.910314 | 1.314770 | 0.001837 | 0.002152 | 0.001830 |
| reverse_view.test | RUN | 0.493696 | 1.479593 | 1.970815 | 0.002211 | 0.002066 | 0.002017 |
| segmented_iterator_range.test | RUN | 0.592331 | 1.786640 | 2.398611 | 0.001958 | 0.001946 | 0.002097 |
| set.test | RUN | 0.383878 | 1.018153 | 1.362325 | 0.001844 | 0.002056 | 0.002092 |
| single_view.test | RUN | 0.339680 | 0.961435 | 1.280212 | 0.001993 | 0.001844 | 0.002100 |
| std_pair.test | RUN | 0.439477 | 1.182887 | 1.572372 | 0.001989 | 0.001802 | 0.002086 |
| boost_array.test | RUN | 0.376093 | 0.886495 | 1.238027 | 0.002020 | 0.001891 | 0.001776 |
| array.test | RUN | 0.359490 | 0.816328 | 1.188458 | 0.001771 | 0.001884 | 0.001990 |
| std_array.test | RUN | 0.369277 | 0.831628 | 1.148225 | 0.002018 | 0.001818 | 0.002047 |
| tuple_comparison.test | RUN | 0.325349 | 0.773089 | 1.110024 | 0.001948 | 0.002090 | 0.001857 |
| tuple_construction.test | RUN | 0.328354 | 0.764227 | 1.151372 | 0.002020 | 0.001936 | 0.001999 |
| tuple_conversion.test | RUN | 0.744723 | 2.357171 | 3.549668 | 0.001596 | 0.001798 | 0.001893 |
| tuple_copy.test | RUN | 0.483399 | 1.377578 | 1.869616 | 0.001906 | 0.002174 | 0.001978 |
| tuple_element.test | RUN | 0.318448 | 0.730390 | 1.076715 | 0.001716 | 0.002176 | 0.002140 |
| tuple_make.test | RUN | 0.331917 | 0.822303 | 1.165745 | 0.001935 | 0.001944 | 0.001668 |
| tuple_misc.test | RUN | 0.427141 | 0.990882 | 1.480386 | 0.001914 | 0.002198 | 0.001674 |
| tuple_mutate.test | RUN | 0.294663 | 0.674783 | 1.012293 | 0.001928 | 0.001812 | 0.001942 |
| tuple_nest.test | RUN | 1.237526 | 4.637136 | 6.519967 | 0.001874 | 0.001897 | 0.002097 |
| tuple_hash.test | RUN | 0.451017 | 1.323976 | 1.506687 | 0.002064 | 0.001777 | 0.002078 |
| tuple_tie.test | RUN | 0.331237 | 0.738355 | 1.110151 | 0.002074 | 0.001804 | 0.001937 |
| tuple_traits__maybe_variadic.test | RUN | 0.346662 | 0.937514 | 1.201474 | 0.002112 | 0.001866 | 0.001922 |
| tuple_traits__no_variadic.test | RUN | 0.373544 | 0.908040 | 1.241502 | 0.001981 | 0.002162 | 0.002100 |
| transform_view.test | RUN | 0.497815 | 1.458710 | 1.941566 | 0.002198 | 0.002072 | 0.001881 |
| identity_view.test | RUN | 0.474721 | 1.349902 | 1.812943 | 0.002100 | 0.001822 | 0.001946 |
| vector_comparison.test | RUN | 0.320606 | 0.821114 | 1.040531 | 0.001630 | 0.001884 | 0.002004 |
| vector_construction.test | RUN | 0.304187 | 0.728385 | 0.992470 | 0.002028 | 0.001948 | 0.002035 |
| vector_conversion.test | RUN | 0.866769 | 3.058950 | 4.494040 | 0.002079 | 0.002150 | 0.001948 |
| vector_copy.test | RUN | 0.463306 | 1.380358 | 1.865552 | 0.001563 | 0.002024 | 0.001852 |
| vector_iterator.test | RUN | 0.305867 | 0.739890 | 1.038508 | 0.001703 | 0.001792 | 0.001636 |
| vector_make.test | RUN | 0.326091 | 0.772808 | 1.140699 | 0.001869 | 0.001948 | 0.002043 |
| vector_misc.test | RUN | 0.399924 | 0.932910 | 1.322704 | 0.001949 | 0.001705 | 0.002047 |
| vector_move.test | RUN | 0.300762 | 0.832389 | 1.059872 | 0.001764 | 0.001747 | 0.002107 |
| vector_mutate.test | RUN | 0.273697 | 0.616408 | 0.965146 | 0.002034 | 0.001831 | 0.001852 |
| vector_n.test | RUN | 0.342483 | 0.777950 | 1.177015 | 0.002124 | 0.002178 | 0.002252 |
| vector_nest.test | RUN | 1.238061 | 4.814683 | 6.535058 | 0.002164 | 0.001990 | 0.001854 |
| vector_hash.test | RUN | 0.408835 | 1.342359 | 1.433119 | 0.001760 | 0.002258 | 0.002004 |
| vector_tie.test | RUN | 0.296098 | 0.697871 | 1.042396 | 0.001807 | 0.002094 | 0.001884 |
| vector_traits__maybe_variadic.test | RUN | 0.336405 | 0.832601 | 1.050050 | 0.002092 | 0.002172 | 0.002073 |
| vector_traits__no_variadic.test | RUN | 0.338646 | 0.879230 | 1.104547 | 0.001632 | 0.001846 | 0.001895 |
| vector_value_at.test | RUN | 0.279821 | 0.655908 | 1.011739 | 0.001824 | 0.001903 | 0.002010 |
| zip_view.test | RUN | 0.623297 | 1.552924 | 2.362560 | 0.001868 | 0.001776 | 0.001599 |
| zip_view2.test | RUN | 0.473327 | 1.268696 | 1.860467 | 0.001979 | 0.001956 | 0.001986 |
| zip_view_ignore.test | RUN | 0.448810 | 1.191402 | 1.663604 | 0.001783 | 0.001934 | 0.001948 |
| repetitive_view.test | RUN | 0.754615 | 2.077243 | 3.083946 | 0.001689 | 0.001887 | 0.001937 |
| deduce_sequence.test | RUN | 0.361479 | 0.860739 | 1.248038 | 0.001664 | 0.001748 | 0.002086 |
| adapt_adt_named.test | RUN | 0.436535 | 1.213674 | 1.584168 | 0.001926 | 0.002018 | 0.002088 |
| adapt_adt_named_empty.test | RUN | 0.370080 | 0.980888 | 1.285297 | 0.001852 | 0.001971 | 0.002065 |
| adapt_adt.test | RUN | 0.473912 | 1.569810 | 1.876661 | 0.002026 | 0.002024 | 0.002216 |
| adapt_adt_empty.test | RUN | 0.370514 | 1.020467 | 1.237841 | 0.002094 | 0.001817 | 0.002138 |
| adapt_assoc_adt_named.test | RUN | 0.488966 | 1.221605 | 1.671037 | 0.001736 | 0.001945 | 0.002160 |
| adapt_assoc_adt_named_empty.test | RUN | 0.379782 | 0.951235 | 1.280549 | 0.001865 | 0.001827 | 0.001800 |
| adapt_assoc_adt.test | RUN | 0.490466 | 1.286364 | 1.761939 | 0.001778 | 0.002074 | 0.002071 |
| adapt_assoc_adt_empty.test | RUN | 0.367066 | 0.982213 | 1.300124 | 0.001747 | 0.002085 | 0.001632 |
| adapt_assoc_struct_named.test | RUN | 0.465591 | 1.202125 | 1.670475 | 0.001491 | 0.002043 | 0.001896 |
| adapt_assoc_struct_named_empty.test | RUN | 0.373381 | 0.941626 | 1.275188 | 0.001865 | 0.001996 | 0.001746 |
| adapt_assoc_struct.test | RUN | 0.424164 | 1.172399 | 1.534057 | 0.001810 | 0.002044 | 0.002022 |
| adapt_assoc_struct_empty.test | RUN | 0.366429 | 0.982655 | 1.253834 | 0.001742 | 0.002104 | 0.002090 |
| adapt_assoc_tpl_adt.test | RUN | 0.499930 | 1.303551 | 1.803814 | 0.001999 | 0.002325 | 0.001694 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.383860 | 0.939147 | 1.290247 | 0.001692 | 0.002144 | 0.002113 |
| adapt_assoc_tpl_struct.test | RUN | 0.413498 | 1.140302 | 1.478389 | 0.001838 | 0.002302 | 0.002052 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.365096 | 0.958749 | 1.274825 | 0.001874 | 0.001900 | 0.001742 |
| adapt_struct_named.test | RUN | 0.418735 | 1.179870 | 1.512459 | 0.001901 | 0.001944 | 0.001848 |
| adapt_struct_named_empty.test | RUN | 0.390160 | 0.942514 | 1.280648 | 0.001924 | 0.001780 | 0.001796 |
| adapt_struct.test | RUN | 0.455720 | 1.367413 | 1.716833 | 0.001728 | 0.002158 | 0.002090 |
| adapt_struct_empty.test | RUN | 0.366479 | 0.988877 | 1.276659 | 0.001874 | 0.002102 | 0.001973 |
| adapt_tpl_adt.test | RUN | 0.475810 | 1.511832 | 1.766378 | 0.001898 | 0.002279 | 0.001693 |
| adapt_tpl_adt_empty.test | RUN | 0.384320 | 0.968497 | 1.313386 | 0.001957 | 0.002079 | 0.002128 |
| adapt_tpl_struct.test | RUN | 0.393057 | 1.070480 | 1.414457 | 0.002089 | 0.002125 | 0.002152 |
| adapt_tpl_struct_empty.test | RUN | 0.369231 | 0.989303 | 1.305218 | 0.001716 | 0.001903 | 0.001777 |
| adt_attribute_proxy.test | RUN | 0.432038 | 0.965198 | 1.371558 | 0.001890 | 0.002126 | 0.001930 |
| define_struct.test | RUN | 0.514090 | 1.305427 | 1.798379 | 0.001682 | 0.001724 | 0.001803 |
| define_struct_empty.test | RUN | 0.440575 | 1.071858 | 1.486516 | 0.002048 | 0.002039 | 0.001793 |
| define_struct_move.test | RUN | 0.287166 | 0.646886 | 0.928417 | 0.001842 | 0.001947 | 0.002032 |
| define_struct_inline.test | RUN | 0.538240 | 1.606169 | 2.019736 | 0.002060 | 0.001976 | 0.002078 |
| define_struct_inline_empty.test | RUN | 0.442279 | 1.159530 | 1.484943 | 0.001659 | 0.002141 | 0.001688 |
| define_struct_inline_move.test | RUN | 0.289807 | 0.601953 | 0.928651 | 0.002143 | 0.001840 | 0.001812 |
| define_assoc_struct.test | RUN | 0.498446 | 1.249568 | 1.715140 | 0.002046 | 0.002010 | 0.002082 |
| define_assoc_struct_empty.test | RUN | 0.436835 | 1.070814 | 1.490089 | 0.001934 | 0.002219 | 0.002078 |
| define_assoc_struct_move.test | RUN | 0.283796 | 0.627471 | 0.934190 | 0.001912 | 0.002018 | 0.002097 |
| define_tpl_struct.test | RUN | 0.487163 | 1.246368 | 1.691729 | 0.002052 | 0.001938 | 0.001830 |
| define_tpl_struct_empty.test | RUN | 0.460056 | 1.134245 | 1.480885 | 0.001906 | 0.001864 | 0.002074 |
| define_tpl_struct_move.test | RUN | 0.298969 | 0.659077 | 0.916671 | 0.002072 | 0.002142 | 0.002080 |
| define_tpl_struct_inline.test | RUN | 0.524746 | 1.461512 | 1.838711 | 0.002136 | 0.002048 | 0.002204 |
| define_tpl_struct_inline_empty.test | RUN | 0.442050 | 1.077419 | 1.480202 | 0.001769 | 0.001781 | 0.002052 |
| define_tpl_struct_inline_move.test | RUN | 0.294549 | 0.641894 | 0.943681 | 0.001861 | 0.001846 | 0.002014 |
| define_assoc_tpl_struct.test | RUN | 0.500866 | 1.291257 | 1.711004 | 0.002024 | 0.002266 | 0.002067 |
| define_assoc_tpl_struct_empty.test | RUN | 0.441908 | 1.093006 | 1.520267 | 0.002005 | 0.002006 | 0.001692 |
| define_assoc_tpl_struct_move.test | RUN | 0.284309 | 0.632540 | 0.930575 | 0.001789 | 0.002175 | 0.002140 |
| std_tuple.test | RUN | 0.297887 | 0.705472 | 1.020451 | 0.001856 | 0.002132 | 0.001707 |
| std_tuple_iterator.test | RUN | 0.298591 | 0.741415 | 1.027949 | 0.001928 | 0.002194 | 0.002082 |
| ref_vector.test | RUN | 0.340768 | 0.755000 | 1.063117 | 0.001791 | 0.002041 | 0.002040 |
| flatten_view.test | RUN | 0.365806 | 0.940059 | 1.306308 | 0.001974 | 0.002260 | 0.002012 |
| github-159.test | COMPILE | 0.164884 | 0.354903 | 0.498027 | — | — | — |
| github-176.test | RUN | 0.336062 | 0.854346 | 1.111519 | 0.001910 | 0.002178 | 0.001908 |
| size.test | COMPILE | 0.281344 | 0.595951 | 0.846316 | — | — | — |
| fused.test | RUN | 0.399395 | 0.906198 | 1.290801 | 0.002273 | 0.001984 | 0.002115 |
| fused_function_object.test | RUN | 0.292820 | 0.654697 | 0.960810 | 0.001782 | 0.001822 | 0.001932 |
| fused_procedure.test | RUN | 0.388741 | 0.884863 | 1.248237 | 0.001850 | 0.001782 | 0.001863 |
| unfused.test | RUN | 0.306732 | 0.702055 | 0.965787 | 0.001642 | 0.002226 | 0.001990 |
| unfused_typed.test | RUN | 0.308303 | 0.743612 | 1.025409 | 0.001712 | 0.001914 | 0.002041 |
| make_fused.test | RUN | 0.402347 | 0.873541 | 1.274520 | 0.001784 | 0.001934 | 0.001865 |
| make_fused_function_object.test | RUN | 0.303921 | 0.702755 | 0.994522 | 0.001819 | 0.002142 | 0.001946 |
| make_fused_procedure.test | RUN | 0.381881 | 0.843363 | 1.213021 | 0.002019 | 0.001932 | 0.001998 |
| make_unfused.test | RUN | 0.302651 | 0.672625 | 0.960612 | 0.002080 | 0.002195 | 0.002028 |
| invoke.test | RUN | 0.794019 | 2.427795 | 3.307963 | 0.001897 | 0.001851 | 0.001868 |
| invoke_function_object.test | RUN | 0.360694 | 0.879747 | 1.302150 | 0.002190 | 0.002124 | 0.002050 |
| invoke_procedure.test | RUN | 0.626263 | 1.856508 | 2.484161 | 0.001750 | 0.001824 | 0.002118 |
| swap.test | RUN | 0.469941 | 1.093591 | 1.647154 | 0.001905 | 0.002038 | 0.002020 |
| is_sequence.test | COMPILE | 0.081391 | 0.164187 | 0.200248 | — | — | — |
| is_view.test | COMPILE | 0.079872 | 0.165995 | 0.201191 | — | — | — |
| pair_deque.test | COMPILE | 0.167991 | 0.366894 | 0.505960 | — | — | — |
| pair_list.test | COMPILE | 0.167268 | 0.348979 | 0.477123 | — | — | — |
| pair_map.test | COMPILE | 0.169827 | 0.358243 | 0.506947 | — | — | — |
| pair_set.test | COMPILE | 0.174472 | 0.370887 | 0.491433 | — | — | — |
| pair_vector.test | COMPILE | 0.174065 | 0.361601 | 0.483388 | — | — | — |
| pair_nest.test | COMPILE | 0.071454 | 0.147872 | 0.192259 | — | — | — |
| index_sequence.test | COMPILE | 0.059763 | 0.105362 | 0.137220 | — | — | — |
| and.test | COMPILE | 0.046176 | 0.079829 | 0.093461 | — | — | — |
| tag_of.test | COMPILE | 0.076970 | 0.152968 | 0.184553 | — | — | — |
| unused.test | COMPILE | 0.042530 | 0.095788 | 0.111353 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.068522 | 0.154386 | 0.193620 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.056649 | 0.142382 | 0.169932 | — | — | — |
| quick.test | RUN | 0.209349 | 0.444134 | 0.568043 | 0.000776 | 0.001339 | 0.001309 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.993×, 0.998× | 1.002× |
| clang | 1.002× | 1.002×, 1.003× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001279s | 0.001258s | 0.001252s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001232s | 0.001214s | 0.001258s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001282s | 0.001243s | 0.001275s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001265s | 0.001298s | 0.001324s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001286s | 0.001310s | 0.001316s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001257s | 0.001265s | 0.001341s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001282s | 0.001246s | 0.001317s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001286s | 0.001247s | 0.001297s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001304s | 0.001240s | 0.001252s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001288s | 0.001257s | 0.001307s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001259s | 0.001252s | 0.001289s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001298s | 0.001248s | 0.001256s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001259s | 0.001251s | 0.001280s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001278s | 0.001228s | 0.001293s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001317s | 0.001213s | 0.001323s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001263s | 0.001208s | 0.001301s | byte equality observed |
| adapt_struct.test | 10 | 0.001285s | 0.001259s | 0.001252s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001314s | 0.001259s | 0.001275s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001256s | 0.001300s | 0.001299s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001342s | 0.001269s | 0.001245s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001268s | 0.001273s | 0.001283s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001311s | 0.001329s | 0.001250s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001272s | 0.001268s | 0.001245s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001301s | 0.001298s | 0.001308s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001301s | 0.001275s | 0.001272s | byte equality observed |
| all.test | 10 | 0.001230s | 0.001251s | 0.001244s | byte equality observed |
| any.test | 10 | 0.001212s | 0.001247s | 0.001246s | byte equality observed |
| array.test | 10 | 0.001207s | 0.001258s | 0.001257s | byte equality observed |
| as_deque.test | 10 | 0.001222s | 0.001216s | 0.001262s | byte equality observed |
| as_list.test | 10 | 0.001241s | 0.001254s | 0.001255s | byte equality observed |
| as_map.test | 10 | 0.001236s | 0.001265s | 0.001257s | byte equality observed |
| as_map_assoc.test | 10 | 0.001316s | 0.001283s | 0.001248s | byte equality observed |
| as_set.test | 10 | 0.001313s | 0.001289s | 0.001257s | byte equality observed |
| as_vector.test | 10 | 0.001287s | 0.001327s | 0.001267s | byte equality observed |
| back_extended_deque.test | 10 | 0.001237s | 0.001219s | 0.001253s | byte equality observed |
| boost_array.test | 10 | 0.001216s | 0.001261s | 0.001299s | byte equality observed |
| boost_tuple.test | 10 | 0.001234s | 0.001241s | 0.001245s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001236s | 0.001217s | 0.001251s | byte equality observed |
| clear.test | 10 | 0.001247s | 0.001268s | 0.001233s | byte equality observed |
| cons.test | 10 | 0.001274s | 0.001296s | 0.001351s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001225s | 0.001237s | 0.001238s | byte equality observed |
| convert_deque.test | 10 | 0.001235s | 0.001245s | 0.001258s | byte equality observed |
| convert_list.test | 10 | 0.001234s | 0.001242s | 0.001220s | byte equality observed |
| convert_std_pair.test | 10 | 0.001287s | 0.001262s | 0.001218s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001238s | 0.001259s | 0.001233s | byte equality observed |
| convert_vector.test | 10 | 0.001253s | 0.001216s | 0.001269s | byte equality observed |
| copy.test | 10 | 0.001225s | 0.001208s | 0.001207s | byte equality observed |
| count.test | 10 | 0.001225s | 0.001222s | 0.001259s | byte equality observed |
| count_if.test | 7 | 0.001247s | 0.001219s | 0.001237s | byte equality observed |
| deduce_sequence.test | 9 | 0.001269s | 0.001228s | 0.001273s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001254s | 0.001244s | 0.001237s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001264s | 0.001321s | 0.001235s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001216s | 0.001225s | 0.001245s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001261s | 0.001228s | 0.001220s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001254s | 0.001200s | 0.001274s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001209s | 0.001205s | 0.001216s | byte equality observed |
| define_struct.test | 10 | 0.001268s | 0.001297s | 0.001285s | byte equality observed |
| define_struct_empty.test | 10 | 0.001250s | 0.001317s | 0.001255s | byte equality observed |
| define_struct_inline.test | 10 | 0.001315s | 0.001282s | 0.001284s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001266s | 0.001295s | 0.001254s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001211s | 0.001271s | 0.001216s | byte equality observed |
| define_struct_move.test | 8 | 0.001214s | 0.001217s | 0.001205s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001277s | 0.001264s | 0.001246s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001282s | 0.001321s | 0.001306s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001277s | 0.001277s | 0.001310s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001276s | 0.001263s | 0.001277s | byte equality observed |
| define_tpl_struct_inline_move.test | 9 | 0.001247s | 0.001207s | 0.001272s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001231s | 0.001233s | 0.001217s | byte equality observed |
| deque_comparison.test | 10 | 0.001227s | 0.001235s | 0.001228s | byte equality observed |
| deque_construction.test | 10 | 0.001227s | 0.001201s | 0.001218s | byte equality observed |
| deque_copy.test | 10 | 0.001255s | 0.001223s | 0.001282s | byte equality observed |
| deque_hash.test | 10 | 0.001233s | 0.001250s | 0.001206s | byte equality observed |
| deque_iterator.test | 10 | 0.001228s | 0.001207s | 0.001224s | byte equality observed |
| deque_make.test | 10 | 0.001230s | 0.001202s | 0.001258s | byte equality observed |
| deque_misc.test | 10 | 0.001260s | 0.001220s | 0.001204s | byte equality observed |
| deque_move.test | 10 | 0.001252s | 0.001219s | 0.001220s | byte equality observed |
| deque_mutate.test | 10 | 0.001243s | 0.001288s | 0.001220s | byte equality observed |
| deque_nest.test | 10 | 0.001227s | 0.001197s | 0.001195s | byte equality observed |
| deque_tie.test | 10 | 0.001255s | 0.001262s | 0.001197s | byte equality observed |
| deque_value_at.test | 10 | 0.001196s | 0.001265s | 0.001201s | byte equality observed |
| erase.test | 10 | 0.001255s | 0.001261s | 0.001264s | byte equality observed |
| erase_key.test | 10 | 0.001255s | 0.001277s | 0.001329s | byte equality observed |
| filter.test | 10 | 0.001246s | 0.001241s | 0.001285s | byte equality observed |
| filter_if.test | 10 | 0.001289s | 0.001278s | 0.001255s | byte equality observed |
| filter_view.test | 10 | 0.001292s | 0.001263s | 0.001307s | byte equality observed |
| find.test | 10 | 0.001278s | 0.001277s | 0.001318s | byte equality observed |
| find_if.test | 10 | 0.001270s | 0.001235s | 0.001301s | byte equality observed |
| flatten.test | 10 | 0.001216s | 0.001272s | 0.001315s | byte equality observed |
| flatten_view.test | 10 | 0.001252s | 0.001300s | 0.001304s | byte equality observed |
| fold.test | 10 | 0.001269s | 0.001312s | 0.001255s | byte equality observed |
| for_each.test | 10 | 0.001255s | 0.001265s | 0.001267s | byte equality observed |
| front_extended_deque.test | 10 | 0.001271s | 0.001336s | 0.001231s | byte equality observed |
| fused.test | 7 | 0.001220s | 0.001245s | 0.001239s | byte equality observed |
| fused_function_object.test | 9 | 0.001226s | 0.001196s | 0.001253s | byte equality observed |
| fused_procedure.test | 10 | 0.001236s | 0.001278s | 0.001257s | byte equality observed |
| github-176.test | 10 | 0.001263s | 0.001244s | 0.001244s | byte equality observed |
| hash.test | 10 | 0.001238s | 0.001220s | 0.001279s | byte equality observed |
| identity_view.test | 10 | 0.001291s | 0.001256s | 0.001313s | byte equality observed |
| insert.test | 10 | 0.001305s | 0.001306s | 0.001300s | byte equality observed |
| insert_range.test | 10 | 0.001283s | 0.001277s | 0.001288s | byte equality observed |
| invoke.test | 10 | 0.001272s | 0.001253s | 0.001210s | byte equality observed |
| invoke_function_object.test | 10 | 0.001256s | 0.001241s | 0.001191s | byte equality observed |
| invoke_procedure.test | 10 | 0.001240s | 0.001261s | 0.001292s | byte equality observed |
| io.test | 10 | 0.001384s | 0.001385s | 0.001404s | byte equality observed |
| iter_fold.test | 10 | 0.001240s | 0.001286s | 0.001267s | byte equality observed |
| iterator_range.test | 10 | 0.001290s | 0.001295s | 0.001254s | byte equality observed |
| join.test | 10 | 0.001231s | 0.001209s | 0.001197s | byte equality observed |
| joint_view.test | 10 | 0.001294s | 0.001293s | 0.001311s | byte equality observed |
| list_comparison.test | 10 | 0.001234s | 0.001217s | 0.001240s | byte equality observed |
| list_construction.test | 10 | 0.001237s | 0.001255s | 0.001251s | byte equality observed |
| list_copy.test | 8 | 0.001255s | 0.001272s | 0.001273s | byte equality observed |
| list_hash.test | 8 | 0.001219s | 0.001251s | 0.001259s | byte equality observed |
| list_iterator.test | 10 | 0.001250s | 0.001250s | 0.001276s | byte equality observed |
| list_make.test | 10 | 0.001246s | 0.001279s | 0.001248s | byte equality observed |
| list_misc.test | 10 | 0.001227s | 0.001214s | 0.001270s | byte equality observed |
| list_mutate.test | 10 | 0.001227s | 0.001187s | 0.001237s | byte equality observed |
| list_nest.test | 10 | 0.001200s | 0.001193s | 0.001216s | byte equality observed |
| list_tie.test | 10 | 0.001216s | 0.001200s | 0.001267s | byte equality observed |
| list_value_at.test | 10 | 0.001234s | 0.001191s | 0.001230s | byte equality observed |
| make_fused.test | 10 | 0.001200s | 0.001251s | 0.001236s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001227s | 0.001201s | 0.001217s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001208s | 0.001208s | 0.001214s | byte equality observed |
| make_list.test | 10 | 0.001218s | 0.001234s | 0.001319s | byte equality observed |
| make_unfused.test | 10 | 0.001260s | 0.001279s | 0.001223s | byte equality observed |
| make_vector.test | 10 | 0.001278s | 0.001251s | 0.001226s | byte equality observed |
| map.test | 10 | 0.001250s | 0.001244s | 0.001257s | byte equality observed |
| map_comparison.test | 10 | 0.001213s | 0.001231s | 0.001206s | byte equality observed |
| map_construction.test | 9 | 0.001200s | 0.001184s | 0.001268s | byte equality observed |
| map_copy.test | 10 | 0.001217s | 0.001235s | 0.001226s | byte equality observed |
| map_misc.test | 10 | 0.001241s | 0.001241s | 0.001215s | byte equality observed |
| map_move.test | 9 | 0.001250s | 0.001212s | 0.001241s | byte equality observed |
| map_mutate.test | 10 | 0.001266s | 0.001242s | 0.001246s | byte equality observed |
| map_tie.test | 10 | 0.001224s | 0.001191s | 0.001205s | byte equality observed |
| move.test | 10 | 0.001267s | 0.001213s | 0.001231s | byte equality observed |
| nil.test | 10 | 0.001213s | 0.001197s | 0.001247s | byte equality observed |
| none.test | 10 | 0.001241s | 0.001221s | 0.001213s | byte equality observed |
| nview.test | 10 | 0.001251s | 0.001216s | 0.001269s | byte equality observed |
| pop_back.test | 10 | 0.001295s | 0.001281s | 0.001284s | byte equality observed |
| pop_front.test | 10 | 0.001290s | 0.001350s | 0.001308s | byte equality observed |
| push_back.test | 10 | 0.001290s | 0.001312s | 0.001280s | byte equality observed |
| push_front.test | 10 | 0.001266s | 0.001232s | 0.001299s | byte equality observed |
| quick.test | 10 | 0.000572s | 0.001228s | 0.001201s | byte equality observed |
| ref_vector.test | 10 | 0.001282s | 0.001237s | 0.001215s | byte equality observed |
| remove.test | 10 | 0.001279s | 0.001247s | 0.001247s | byte equality observed |
| remove_if.test | 10 | 0.001261s | 0.001277s | 0.001248s | byte equality observed |
| repetitive_view.test | 10 | 0.001257s | 0.001237s | 0.001221s | byte equality observed |
| replace.test | 10 | 0.001264s | 0.001251s | 0.001254s | byte equality observed |
| replace_if.test | 10 | 0.001330s | 0.001252s | 0.001309s | byte equality observed |
| reverse.test | 9 | 0.001244s | 0.001249s | 0.001248s | byte equality observed |
| reverse_fold.test | 8 | 0.001222s | 0.001307s | 0.001243s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001234s | 0.001349s | 0.001224s | byte equality observed |
| reverse_view.test | 10 | 0.001280s | 0.001250s | 0.001242s | byte equality observed |
| segmented_find.test | 10 | 0.001205s | 0.001263s | 0.001246s | byte equality observed |
| segmented_find_if.test | 10 | 0.001230s | 0.001191s | 0.001252s | byte equality observed |
| segmented_fold.test | 10 | 0.001240s | 0.001236s | 0.001262s | byte equality observed |
| segmented_for_each.test | 10 | 0.001258s | 0.001254s | 0.001280s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001284s | 0.001240s | 0.001307s | byte equality observed |
| set.test | 10 | 0.001249s | 0.001244s | 0.001270s | byte equality observed |
| single_view.test | 10 | 0.001251s | 0.001300s | 0.001260s | byte equality observed |
| std_array.test | 10 | 0.001217s | 0.001240s | 0.001275s | byte equality observed |
| std_pair.test | 10 | 0.001267s | 0.001227s | 0.001269s | byte equality observed |
| std_tuple.test | 10 | 0.001252s | 0.001250s | 0.001270s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001259s | 0.001227s | 0.001249s | byte equality observed |
| swap.test | 10 | 0.001254s | 0.001270s | 0.001236s | byte equality observed |
| transform.test | 10 | 0.001309s | 0.001255s | 0.001262s | byte equality observed |
| transform_view.test | 10 | 0.001315s | 0.001268s | 0.001336s | byte equality observed |
| tuple_comparison.test | 10 | 0.001258s | 0.001198s | 0.001193s | byte equality observed |
| tuple_construction.test | 10 | 0.001242s | 0.001270s | 0.001194s | byte equality observed |
| tuple_conversion.test | 10 | 0.001234s | 0.001250s | 0.001219s | byte equality observed |
| tuple_copy.test | 10 | 0.001250s | 0.001231s | 0.001270s | byte equality observed |
| tuple_element.test | 10 | 0.001216s | 0.001246s | 0.001277s | byte equality observed |
| tuple_hash.test | 10 | 0.001256s | 0.001255s | 0.001266s | byte equality observed |
| tuple_make.test | 10 | 0.001258s | 0.001253s | 0.001246s | byte equality observed |
| tuple_misc.test | 10 | 0.001265s | 0.001217s | 0.001241s | byte equality observed |
| tuple_mutate.test | 10 | 0.001231s | 0.001233s | 0.001215s | byte equality observed |
| tuple_nest.test | 10 | 0.001259s | 0.001211s | 0.001256s | byte equality observed |
| tuple_tie.test | 10 | 0.001225s | 0.001195s | 0.001272s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001205s | 0.001279s | 0.001205s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001239s | 0.001214s | 0.001212s | byte equality observed |
| unfused.test | 10 | 0.001236s | 0.001189s | 0.001190s | byte equality observed |
| unfused_typed.test | 10 | 0.001215s | 0.001190s | 0.001203s | byte equality observed |
| vector_comparison.test | 10 | 0.001270s | 0.001261s | 0.001237s | byte equality observed |
| vector_construction.test | 10 | 0.001239s | 0.001246s | 0.001192s | byte equality observed |
| vector_conversion.test | 10 | 0.001233s | 0.001252s | 0.001228s | byte equality observed |
| vector_copy.test | 10 | 0.001292s | 0.001306s | 0.001212s | byte equality observed |
| vector_hash.test | 10 | 0.001248s | 0.001210s | 0.001248s | byte equality observed |
| vector_iterator.test | 10 | 0.001252s | 0.001243s | 0.001237s | byte equality observed |
| vector_make.test | 10 | 0.001255s | 0.001239s | 0.001224s | byte equality observed |
| vector_misc.test | 10 | 0.001257s | 0.001214s | 0.001304s | byte equality observed |
| vector_move.test | 9 | 0.001262s | 0.001265s | 0.001263s | byte equality observed |
| vector_mutate.test | 10 | 0.001222s | 0.001186s | 0.001230s | byte equality observed |
| vector_n.test | 10 | 0.001243s | 0.001235s | 0.001238s | byte equality observed |
| vector_nest.test | 10 | 0.001201s | 0.001255s | 0.001191s | byte equality observed |
| vector_tie.test | 10 | 0.001235s | 0.001261s | 0.001201s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001208s | 0.001207s | 0.001231s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001256s | 0.001246s | 0.001231s | byte equality observed |
| vector_value_at.test | 10 | 0.001239s | 0.001227s | 0.001215s | byte equality observed |
| zip.test | 10 | 0.001216s | 0.001270s | 0.001196s | byte equality observed |
| zip2.test | 10 | 0.001239s | 0.001265s | 0.001252s | byte equality observed |
| zip_ignore.test | 10 | 0.001242s | 0.001252s | 0.001279s | byte equality observed |
| zip_view.test | 10 | 0.001232s | 0.001249s | 0.001231s | byte equality observed |
| zip_view2.test | 10 | 0.001236s | 0.001235s | 0.001226s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001181s | 0.001201s | 0.001254s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
