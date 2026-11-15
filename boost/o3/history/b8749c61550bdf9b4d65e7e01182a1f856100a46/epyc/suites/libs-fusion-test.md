# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.461299 | 0.975298 | 1.587522 | 0.001778 | 0.001785 | 0.001794 |
| any.test | RUN | 0.445029 | 0.926709 | 1.483631 | 0.001735 | 0.001928 | 0.001900 |
| clear.test | RUN | 0.325629 | 0.845425 | 1.204232 | 0.001782 | 0.001878 | 0.002113 |
| copy.test | RUN | 0.277444 | 0.647457 | 0.988940 | 0.001920 | 0.001932 | 0.002121 |
| count.test | RUN | 0.324404 | 0.718537 | 1.076359 | 0.002036 | 0.002007 | 0.001922 |
| count_if.test | RUN | 0.295081 | 0.667317 | 0.986409 | 0.001699 | 0.002088 | 0.002023 |
| erase.test | RUN | 0.423215 | 1.168251 | 1.575694 | 0.001892 | 0.002035 | 0.002320 |
| erase_key.test | RUN | 0.426328 | 1.167163 | 1.496745 | 0.001732 | 0.002004 | 0.001895 |
| filter.test | RUN | 0.377262 | 0.975649 | 1.360005 | 0.002064 | 0.002052 | 0.001890 |
| filter_if.test | RUN | 0.411897 | 1.159308 | 1.621083 | 0.001928 | 0.002216 | 0.002112 |
| find.test | RUN | 0.367770 | 0.826751 | 1.233897 | 0.001884 | 0.001889 | 0.001805 |
| find_if.test | RUN | 0.346125 | 0.731983 | 1.128566 | 0.001586 | 0.002069 | 0.002061 |
| fold.test | RUN | 0.383771 | 0.915536 | 1.390579 | 0.002074 | 0.002248 | 0.002041 |
| for_each.test | RUN | 0.331436 | 0.833621 | 1.209313 | 0.001731 | 0.002192 | 0.002188 |
| insert.test | RUN | 0.481673 | 1.470777 | 1.895440 | 0.002104 | 0.001898 | 0.002078 |
| insert_range.test | RUN | 0.485672 | 1.480535 | 1.904881 | 0.001734 | 0.001938 | 0.001778 |
| iter_fold.test | RUN | 0.589362 | 1.420828 | 2.225823 | 0.002022 | 0.002222 | 0.002143 |
| move.test | RUN | 0.291865 | 0.681312 | 0.977434 | 0.001962 | 0.001734 | 0.002100 |
| none.test | RUN | 0.469777 | 0.978296 | 1.572695 | 0.001772 | 0.001944 | 0.001801 |
| pop_back.test | RUN | 0.454954 | 1.261002 | 1.711642 | 0.001950 | 0.001970 | 0.002056 |
| pop_front.test | RUN | 0.381580 | 1.023129 | 1.418030 | 0.001716 | 0.002175 | 0.001656 |
| push_back.test | RUN | 0.471741 | 1.467148 | 1.840510 | 0.001978 | 0.002193 | 0.002152 |
| push_front.test | RUN | 0.423707 | 1.212688 | 1.593115 | 0.001911 | 0.001940 | 0.002186 |
| remove.test | RUN | 0.475912 | 1.377546 | 1.889952 | 0.001840 | 0.001803 | 0.002350 |
| remove_if.test | RUN | 0.423049 | 1.185613 | 1.620635 | 0.001762 | 0.002091 | 0.002162 |
| replace.test | RUN | 0.409919 | 1.124625 | 1.448906 | 0.002000 | 0.002134 | 0.002159 |
| replace_if.test | RUN | 0.388862 | 1.091767 | 1.484205 | 0.002156 | 0.002158 | 0.002190 |
| reverse_fold.test | RUN | 0.654365 | 1.605601 | 2.573490 | 0.001968 | 0.002203 | 0.001644 |
| reverse_iter_fold.test | RUN | 0.645180 | 1.670024 | 2.597160 | 0.001865 | 0.001901 | 0.002006 |
| reverse.test | RUN | 0.406055 | 1.181972 | 1.486570 | 0.002026 | 0.002004 | 0.001812 |
| segmented_for_each.test | RUN | 0.700671 | 2.163994 | 3.007016 | 0.002100 | 0.001769 | 0.002050 |
| segmented_find.test | RUN | 0.425770 | 1.165048 | 1.690743 | 0.001936 | 0.001831 | 0.001486 |
| segmented_find_if.test | RUN | 0.440596 | 1.203480 | 1.700871 | 0.001917 | 0.001940 | 0.001406 |
| segmented_fold.test | RUN | 0.553028 | 1.528634 | 2.175132 | 0.002038 | 0.002046 | 0.002114 |
| transform.test | RUN | 0.416411 | 1.209141 | 1.544582 | 0.001720 | 0.001961 | 0.002104 |
| join.test | RUN | 0.316946 | 0.754692 | 1.110148 | 0.002022 | 0.001925 | 0.002043 |
| zip.test | RUN | 0.548421 | 1.426950 | 2.100926 | 0.002072 | 0.002124 | 0.002093 |
| zip2.test | RUN | 0.548151 | 1.403575 | 1.994128 | 0.001895 | 0.002067 | 0.001956 |
| zip_ignore.test | RUN | 0.405117 | 0.948680 | 1.349096 | 0.001840 | 0.001932 | 0.002094 |
| flatten.test | RUN | 0.370903 | 1.009255 | 1.383484 | 0.001685 | 0.002203 | 0.001965 |
| ticket-5490.test | COMPILE | 0.206896 | 0.454524 | 0.597582 | — | — | — |
| as_deque.test | RUN | 0.383379 | 0.976186 | 1.478771 | 0.001810 | 0.002028 | 0.002104 |
| as_list.test | RUN | 0.425732 | 1.178037 | 1.549398 | 0.002104 | 0.002026 | 0.001771 |
| as_map.test | RUN | 0.420098 | 1.153615 | 1.609667 | 0.001786 | 0.002012 | 0.001747 |
| as_map_assoc.test | RUN | 0.415456 | 1.117254 | 1.516609 | 0.001796 | 0.001967 | 0.002089 |
| as_set.test | RUN | 0.482981 | 1.355280 | 1.874681 | 0.001891 | 0.001976 | 0.001857 |
| as_vector.test | RUN | 0.435375 | 1.237030 | 1.579390 | 0.001814 | 0.001650 | 0.001706 |
| boost_tuple.test | RUN | 0.430970 | 1.166714 | 1.630871 | 0.001769 | 0.001787 | 0.002078 |
| boost_tuple_iterator.test | RUN | 0.295838 | 0.734576 | 1.031601 | 0.001996 | 0.001796 | 0.001802 |
| cons.test | RUN | 0.534566 | 1.362982 | 1.911702 | 0.001906 | 0.001918 | 0.002151 |
| convert_boost_tuple.test | RUN | 0.335830 | 1.037066 | 1.255577 | 0.002072 | 0.001826 | 0.001853 |
| convert_deque.test | RUN | 0.340076 | 1.032609 | 1.271759 | 0.001644 | 0.001764 | 0.002190 |
| convert_list.test | RUN | 0.347207 | 1.064213 | 1.274789 | 0.001800 | 0.001900 | 0.001954 |
| convert_std_pair.test | RUN | 0.353546 | 1.041903 | 1.300270 | 0.001580 | 0.001871 | 0.001753 |
| convert_std_tuple.test | RUN | 0.338465 | 1.031035 | 1.273811 | 0.001966 | 0.001748 | 0.001828 |
| convert_vector.test | RUN | 0.345682 | 1.029549 | 1.225605 | 0.001716 | 0.001950 | 0.001911 |
| filter_view.test | RUN | 0.406375 | 1.085203 | 1.509113 | 0.001936 | 0.001829 | 0.002073 |
| hash.test | RUN | 0.419826 | 0.988703 | 1.480555 | 0.001568 | 0.001807 | 0.001707 |
| io.test | RUN | 0.434653 | 1.396092 | 1.719199 | 0.001950 | 0.002202 | 0.002348 |
| iterator_range.test | RUN | 0.382662 | 1.030686 | 1.434072 | 0.001744 | 0.002424 | 0.002016 |
| joint_view.test | RUN | 0.531658 | 1.730099 | 2.132561 | 0.002072 | 0.002033 | 0.002008 |
| list_comparison.test | RUN | 0.300913 | 0.723707 | 1.043281 | 0.001650 | 0.001914 | 0.001743 |
| list_construction.test | RUN | 0.297243 | 0.722251 | 1.043768 | 0.001845 | 0.001912 | 0.001926 |
| list_copy.test | RUN | 0.440478 | 1.278927 | 1.735109 | 0.001932 | 0.002074 | 0.002039 |
| list_iterator.test | RUN | 0.291657 | 0.704953 | 1.000889 | 0.001858 | 0.002132 | 0.002246 |
| list_hash.test | RUN | 0.407221 | 1.385090 | 1.435172 | 0.001747 | 0.002251 | 0.002106 |
| list_make.test | RUN | 0.312976 | 0.786291 | 1.090944 | 0.001968 | 0.001791 | 0.002029 |
| list_misc.test | RUN | 0.410461 | 0.933385 | 1.347850 | 0.002045 | 0.002139 | 0.002265 |
| list_mutate.test | RUN | 0.289899 | 0.626142 | 0.903690 | 0.001668 | 0.001966 | 0.002162 |
| list_nest.test | RUN | 0.572815 | 1.719122 | 2.436317 | 0.001767 | 0.001978 | 0.002034 |
| list_tie.test | RUN | 0.295177 | 0.693706 | 1.007181 | 0.001860 | 0.002120 | 0.002102 |
| list_value_at.test | RUN | 0.307729 | 0.712089 | 0.922930 | 0.001667 | 0.002061 | 0.002124 |
| deque_comparison.test | RUN | 0.298223 | 0.728822 | 1.092702 | 0.001848 | 0.001625 | 0.001742 |
| deque_construction.test | RUN | 0.302269 | 0.703467 | 1.024491 | 0.002012 | 0.002150 | 0.001926 |
| deque_copy.test | RUN | 0.421066 | 1.195094 | 1.619160 | 0.001809 | 0.001889 | 0.001900 |
| deque_iterator.test | RUN | 0.289340 | 0.753748 | 1.028790 | 0.001966 | 0.001905 | 0.002148 |
| deque_hash.test | RUN | 0.407243 | 1.304172 | 1.439915 | 0.001527 | 0.002160 | 0.001964 |
| deque_is_constructible.test | COMPILE | 0.159627 | 0.355147 | 0.476126 | — | — | — |
| deque_make.test | RUN | 0.301616 | 0.727358 | 1.067025 | 0.001842 | 0.002150 | 0.001875 |
| deque_misc.test | RUN | 0.393823 | 0.907635 | 1.273663 | 0.001842 | 0.001925 | 0.001864 |
| deque_move.test | RUN | 0.299654 | 0.776460 | 1.056559 | 0.001872 | 0.001777 | 0.002110 |
| deque_mutate.test | RUN | 0.280552 | 0.645690 | 0.904666 | 0.001842 | 0.001952 | 0.002158 |
| deque_nest.test | RUN | 0.838678 | 2.724078 | 3.811781 | 0.001823 | 0.001948 | 0.002340 |
| deque_tie.test | RUN | 0.281901 | 0.644564 | 0.998575 | 0.002010 | 0.002149 | 0.002132 |
| deque_value_at.test | RUN | 0.277449 | 0.681764 | 0.945473 | 0.001744 | 0.002012 | 0.001692 |
| front_extended_deque.test | RUN | 0.426673 | 0.957703 | 1.401042 | 0.002056 | 0.002120 | 0.002146 |
| back_extended_deque.test | RUN | 0.403237 | 1.021591 | 1.384771 | 0.001816 | 0.002110 | 0.002041 |
| make_list.test | RUN | 0.311729 | 0.759606 | 1.111602 | 0.002030 | 0.001988 | 0.002052 |
| make_vector.test | RUN | 0.312942 | 0.757171 | 1.032527 | 0.002074 | 0.001945 | 0.002092 |
| map.test | RUN | 0.410215 | 1.169275 | 1.595378 | 0.001950 | 0.001886 | 0.001946 |
| map_comparison.test | RUN | 0.325397 | 0.767335 | 1.044306 | 0.001831 | 0.001910 | 0.002089 |
| map_construction.test | RUN | 0.313956 | 0.712822 | 0.986685 | 0.001836 | 0.001697 | 0.002122 |
| map_copy.test | RUN | 0.375093 | 0.936338 | 1.299908 | 0.001958 | 0.002259 | 0.002079 |
| map_misc.test | RUN | 0.395234 | 0.933042 | 1.295920 | 0.001812 | 0.001980 | 0.001646 |
| map_move.test | RUN | 0.312139 | 0.773241 | 1.042792 | 0.001766 | 0.001809 | 0.001603 |
| map_mutate.test | RUN | 0.283223 | 0.627238 | 0.909857 | 0.001806 | 0.002118 | 0.001976 |
| map_tie.test | RUN | 0.286771 | 0.647286 | 0.942614 | 0.001894 | 0.001956 | 0.001996 |
| nil.test | RUN | 0.195628 | 0.432629 | 0.663699 | 0.002295 | 0.002062 | 0.001998 |
| nview.test | RUN | 0.387685 | 0.921124 | 1.306209 | 0.002022 | 0.002168 | 0.001866 |
| reverse_view.test | RUN | 0.504072 | 1.500719 | 1.992930 | 0.002190 | 0.002050 | 0.002064 |
| segmented_iterator_range.test | RUN | 0.595467 | 1.795457 | 2.443499 | 0.001976 | 0.002234 | 0.002082 |
| set.test | RUN | 0.372665 | 1.036963 | 1.347175 | 0.001722 | 0.001934 | 0.002202 |
| single_view.test | RUN | 0.355006 | 0.962548 | 1.230342 | 0.002019 | 0.002071 | 0.002331 |
| std_pair.test | RUN | 0.432739 | 1.147563 | 1.543743 | 0.002200 | 0.002144 | 0.001961 |
| boost_array.test | RUN | 0.372447 | 0.819382 | 1.211509 | 0.002022 | 0.002235 | 0.002270 |
| array.test | RUN | 0.360397 | 0.842923 | 1.191769 | 0.001798 | 0.001918 | 0.002120 |
| std_array.test | RUN | 0.370539 | 0.824193 | 1.189305 | 0.001893 | 0.002030 | 0.002009 |
| tuple_comparison.test | RUN | 0.333280 | 0.779550 | 1.113819 | 0.002082 | 0.002044 | 0.002078 |
| tuple_construction.test | RUN | 0.329881 | 0.749666 | 1.096249 | 0.002051 | 0.002184 | 0.001986 |
| tuple_conversion.test | RUN | 0.742636 | 2.348064 | 3.553237 | 0.001890 | 0.001939 | 0.001860 |
| tuple_copy.test | RUN | 0.474998 | 1.386824 | 1.884198 | 0.002372 | 0.001784 | 0.002016 |
| tuple_element.test | RUN | 0.323240 | 0.729939 | 1.059386 | 0.001838 | 0.002070 | 0.002057 |
| tuple_make.test | RUN | 0.336482 | 0.839709 | 1.179266 | 0.001952 | 0.001995 | 0.001914 |
| tuple_misc.test | RUN | 0.415169 | 0.976401 | 1.474060 | 0.002034 | 0.001956 | 0.002033 |
| tuple_mutate.test | RUN | 0.294334 | 0.692421 | 1.005279 | 0.002144 | 0.001912 | 0.002138 |
| tuple_nest.test | RUN | 1.215851 | 4.524100 | 6.595595 | 0.001962 | 0.001822 | 0.002052 |
| tuple_hash.test | RUN | 0.439461 | 1.336156 | 1.570937 | 0.001950 | 0.001867 | 0.001864 |
| tuple_tie.test | RUN | 0.325630 | 0.771031 | 1.073808 | 0.001752 | 0.001998 | 0.001934 |
| tuple_traits__maybe_variadic.test | RUN | 0.335295 | 0.912623 | 1.149122 | 0.001722 | 0.001890 | 0.002052 |
| tuple_traits__no_variadic.test | RUN | 0.398185 | 0.933933 | 1.251040 | 0.001854 | 0.002220 | 0.002156 |
| transform_view.test | RUN | 0.506177 | 1.474109 | 1.925386 | 0.002028 | 0.001900 | 0.001844 |
| identity_view.test | RUN | 0.480852 | 1.439057 | 1.866835 | 0.001941 | 0.002128 | 0.002118 |
| vector_comparison.test | RUN | 0.320921 | 0.750692 | 1.054012 | 0.002101 | 0.001920 | 0.002065 |
| vector_construction.test | RUN | 0.315476 | 0.698357 | 1.066027 | 0.001768 | 0.001896 | 0.002167 |
| vector_conversion.test | RUN | 0.883012 | 3.116697 | 4.490659 | 0.002082 | 0.002039 | 0.002132 |
| vector_copy.test | RUN | 0.469564 | 1.365397 | 1.871529 | 0.001788 | 0.002192 | 0.002093 |
| vector_iterator.test | RUN | 0.320231 | 0.746226 | 1.058986 | 0.001925 | 0.001914 | 0.002104 |
| vector_make.test | RUN | 0.324690 | 0.777435 | 1.085513 | 0.001846 | 0.001847 | 0.002022 |
| vector_misc.test | RUN | 0.389732 | 1.016816 | 1.309090 | 0.001730 | 0.002150 | 0.001737 |
| vector_move.test | RUN | 0.305420 | 0.761729 | 1.070186 | 0.001628 | 0.001757 | 0.001951 |
| vector_mutate.test | RUN | 0.277731 | 0.633627 | 0.927813 | 0.001720 | 0.001540 | 0.001748 |
| vector_n.test | RUN | 0.348833 | 0.789027 | 1.246271 | 0.002046 | 0.002168 | 0.002133 |
| vector_nest.test | RUN | 1.214586 | 4.772364 | 6.531139 | 0.002015 | 0.002112 | 0.002106 |
| vector_hash.test | RUN | 0.401221 | 1.307756 | 1.451577 | 0.001811 | 0.002006 | 0.001908 |
| vector_tie.test | RUN | 0.292204 | 0.702124 | 1.064119 | 0.002052 | 0.001984 | 0.002088 |
| vector_traits__maybe_variadic.test | RUN | 0.318527 | 0.871797 | 1.030437 | 0.002058 | 0.002036 | 0.002128 |
| vector_traits__no_variadic.test | RUN | 0.358144 | 0.871434 | 1.077470 | 0.001792 | 0.001992 | 0.002198 |
| vector_value_at.test | RUN | 0.284227 | 0.668877 | 0.993144 | 0.001825 | 0.001614 | 0.001798 |
| zip_view.test | RUN | 0.583096 | 1.614118 | 2.311187 | 0.001933 | 0.001924 | 0.001697 |
| zip_view2.test | RUN | 0.469478 | 1.186445 | 1.803280 | 0.002066 | 0.001937 | 0.001836 |
| zip_view_ignore.test | RUN | 0.459894 | 1.076069 | 1.659046 | 0.001771 | 0.001968 | 0.002165 |
| repetitive_view.test | RUN | 0.756811 | 2.025920 | 3.154381 | 0.001689 | 0.002089 | 0.001781 |
| deduce_sequence.test | RUN | 0.360773 | 0.867197 | 1.252988 | 0.001957 | 0.001841 | 0.002044 |
| adapt_adt_named.test | RUN | 0.435358 | 1.194620 | 1.531688 | 0.001748 | 0.002194 | 0.002130 |
| adapt_adt_named_empty.test | RUN | 0.382745 | 0.956649 | 1.259335 | 0.001775 | 0.002118 | 0.002170 |
| adapt_adt.test | RUN | 0.483706 | 1.581102 | 1.923913 | 0.001944 | 0.002224 | 0.002210 |
| adapt_adt_empty.test | RUN | 0.364609 | 0.966575 | 1.243002 | 0.001802 | 0.002148 | 0.002054 |
| adapt_assoc_adt_named.test | RUN | 0.494714 | 1.246277 | 1.699836 | 0.001858 | 0.002146 | 0.002190 |
| adapt_assoc_adt_named_empty.test | RUN | 0.372442 | 0.956664 | 1.278008 | 0.001923 | 0.001963 | 0.002215 |
| adapt_assoc_adt.test | RUN | 0.491650 | 1.297237 | 1.731637 | 0.001745 | 0.002170 | 0.001884 |
| adapt_assoc_adt_empty.test | RUN | 0.371021 | 0.943967 | 1.264687 | 0.001910 | 0.002057 | 0.001914 |
| adapt_assoc_struct_named.test | RUN | 0.481932 | 1.227530 | 1.612942 | 0.001827 | 0.002175 | 0.001924 |
| adapt_assoc_struct_named_empty.test | RUN | 0.373183 | 0.948948 | 1.287002 | 0.001864 | 0.002144 | 0.002087 |
| adapt_assoc_struct.test | RUN | 0.422300 | 1.166060 | 1.550499 | 0.001688 | 0.001973 | 0.001984 |
| adapt_assoc_struct_empty.test | RUN | 0.364766 | 0.937968 | 1.309782 | 0.002072 | 0.002188 | 0.002140 |
| adapt_assoc_tpl_adt.test | RUN | 0.506167 | 1.336390 | 1.792260 | 0.001863 | 0.002209 | 0.001774 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.378592 | 0.949357 | 1.294859 | 0.001936 | 0.002148 | 0.002158 |
| adapt_assoc_tpl_struct.test | RUN | 0.415325 | 1.151896 | 1.498155 | 0.002046 | 0.002130 | 0.002132 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.364330 | 0.958244 | 1.273493 | 0.001747 | 0.001862 | 0.001797 |
| adapt_struct_named.test | RUN | 0.434591 | 1.194388 | 1.516914 | 0.001908 | 0.002240 | 0.001894 |
| adapt_struct_named_empty.test | RUN | 0.379274 | 0.987090 | 1.320851 | 0.001663 | 0.001962 | 0.001993 |
| adapt_struct.test | RUN | 0.446614 | 1.285474 | 1.712094 | 0.001856 | 0.002170 | 0.002122 |
| adapt_struct_empty.test | RUN | 0.364087 | 0.957919 | 1.296450 | 0.002220 | 0.001908 | 0.002190 |
| adapt_tpl_adt.test | RUN | 0.477150 | 1.539863 | 1.787210 | 0.001908 | 0.001956 | 0.001864 |
| adapt_tpl_adt_empty.test | RUN | 0.374187 | 0.937847 | 1.301958 | 0.001914 | 0.002279 | 0.002144 |
| adapt_tpl_struct.test | RUN | 0.393518 | 1.102636 | 1.400644 | 0.001845 | 0.001772 | 0.001972 |
| adapt_tpl_struct_empty.test | RUN | 0.366917 | 0.951664 | 1.324966 | 0.001884 | 0.001972 | 0.001784 |
| adt_attribute_proxy.test | RUN | 0.422264 | 0.962818 | 1.362279 | 0.001969 | 0.002096 | 0.001768 |
| define_struct.test | RUN | 0.524543 | 1.311858 | 1.808741 | 0.001998 | 0.001972 | 0.001901 |
| define_struct_empty.test | RUN | 0.461785 | 1.079111 | 1.513833 | 0.002368 | 0.002076 | 0.002176 |
| define_struct_move.test | RUN | 0.287775 | 0.627349 | 0.921014 | 0.001808 | 0.001944 | 0.001670 |
| define_struct_inline.test | RUN | 0.542062 | 1.559917 | 1.967573 | 0.001972 | 0.002040 | 0.002120 |
| define_struct_inline_empty.test | RUN | 0.448592 | 1.115759 | 1.492852 | 0.001636 | 0.001858 | 0.001838 |
| define_struct_inline_move.test | RUN | 0.294682 | 0.594966 | 0.937184 | 0.001812 | 0.002080 | 0.001958 |
| define_assoc_struct.test | RUN | 0.482620 | 1.243873 | 1.692018 | 0.002088 | 0.002105 | 0.002089 |
| define_assoc_struct_empty.test | RUN | 0.448777 | 1.103681 | 1.478186 | 0.001842 | 0.001966 | 0.002050 |
| define_assoc_struct_move.test | RUN | 0.275926 | 0.594323 | 0.909797 | 0.002106 | 0.001996 | 0.002118 |
| define_tpl_struct.test | RUN | 0.478159 | 1.277778 | 1.707238 | 0.002083 | 0.001842 | 0.001684 |
| define_tpl_struct_empty.test | RUN | 0.452932 | 1.069989 | 1.490236 | 0.002042 | 0.002186 | 0.002265 |
| define_tpl_struct_move.test | RUN | 0.289254 | 0.660968 | 0.907075 | 0.001806 | 0.001804 | 0.001830 |
| define_tpl_struct_inline.test | RUN | 0.523696 | 1.483878 | 1.874040 | 0.002115 | 0.001978 | 0.002204 |
| define_tpl_struct_inline_empty.test | RUN | 0.441069 | 1.086568 | 1.532993 | 0.001819 | 0.002123 | 0.002154 |
| define_tpl_struct_inline_move.test | RUN | 0.286140 | 0.616262 | 0.933793 | 0.001926 | 0.002158 | 0.001911 |
| define_assoc_tpl_struct.test | RUN | 0.502615 | 1.266787 | 1.691756 | 0.002070 | 0.002186 | 0.002055 |
| define_assoc_tpl_struct_empty.test | RUN | 0.453838 | 1.070647 | 1.508624 | 0.001951 | 0.001852 | 0.001926 |
| define_assoc_tpl_struct_move.test | RUN | 0.298437 | 0.648985 | 0.906003 | 0.001841 | 0.001812 | 0.002031 |
| std_tuple.test | RUN | 0.304226 | 0.710313 | 1.021465 | 0.001804 | 0.001944 | 0.001993 |
| std_tuple_iterator.test | RUN | 0.295888 | 0.725629 | 1.017289 | 0.001808 | 0.002218 | 0.002077 |
| ref_vector.test | RUN | 0.333949 | 0.765137 | 1.089329 | 0.001879 | 0.002186 | 0.002076 |
| flatten_view.test | RUN | 0.359820 | 0.914256 | 1.279994 | 0.001875 | 0.002156 | 0.002117 |
| github-159.test | COMPILE | 0.163109 | 0.334158 | 0.500633 | — | — | — |
| github-176.test | RUN | 0.339915 | 0.819471 | 1.088220 | 0.002052 | 0.002027 | 0.002048 |
| size.test | COMPILE | 0.276390 | 0.592785 | 0.848130 | — | — | — |
| fused.test | RUN | 0.410926 | 0.880722 | 1.305335 | 0.001623 | 0.001644 | 0.001964 |
| fused_function_object.test | RUN | 0.298323 | 0.660131 | 0.987054 | 0.001914 | 0.001974 | 0.002170 |
| fused_procedure.test | RUN | 0.379522 | 0.860938 | 1.239756 | 0.001868 | 0.001894 | 0.001845 |
| unfused.test | RUN | 0.306218 | 0.710902 | 0.972328 | 0.001939 | 0.001623 | 0.001785 |
| unfused_typed.test | RUN | 0.308869 | 0.732179 | 1.038568 | 0.001770 | 0.002096 | 0.002092 |
| make_fused.test | RUN | 0.387104 | 0.875926 | 1.269588 | 0.001712 | 0.001572 | 0.002142 |
| make_fused_function_object.test | RUN | 0.308344 | 0.696472 | 0.967944 | 0.002020 | 0.001869 | 0.001779 |
| make_fused_procedure.test | RUN | 0.375176 | 0.854022 | 1.261807 | 0.001944 | 0.002052 | 0.001860 |
| make_unfused.test | RUN | 0.301065 | 0.690212 | 0.982726 | 0.002045 | 0.001934 | 0.002024 |
| invoke.test | RUN | 0.786754 | 2.410830 | 3.344736 | 0.001820 | 0.001947 | 0.002093 |
| invoke_function_object.test | RUN | 0.359151 | 0.887607 | 1.264092 | 0.002070 | 0.002194 | 0.002043 |
| invoke_procedure.test | RUN | 0.611408 | 1.790446 | 2.570020 | 0.001741 | 0.001875 | 0.002032 |
| swap.test | RUN | 0.458909 | 1.154662 | 1.545732 | 0.001840 | 0.002034 | 0.001932 |
| is_sequence.test | COMPILE | 0.082106 | 0.159752 | 0.202688 | — | — | — |
| is_view.test | COMPILE | 0.079218 | 0.167979 | 0.200686 | — | — | — |
| pair_deque.test | COMPILE | 0.167544 | 0.370242 | 0.457215 | — | — | — |
| pair_list.test | COMPILE | 0.167584 | 0.347509 | 0.470053 | — | — | — |
| pair_map.test | COMPILE | 0.172196 | 0.362870 | 0.488577 | — | — | — |
| pair_set.test | COMPILE | 0.171943 | 0.370472 | 0.467628 | — | — | — |
| pair_vector.test | COMPILE | 0.169887 | 0.362228 | 0.478166 | — | — | — |
| pair_nest.test | COMPILE | 0.069842 | 0.151291 | 0.199187 | — | — | — |
| index_sequence.test | COMPILE | 0.060246 | 0.102259 | 0.133729 | — | — | — |
| and.test | COMPILE | 0.045183 | 0.077475 | 0.093838 | — | — | — |
| tag_of.test | COMPILE | 0.076580 | 0.155359 | 0.187123 | — | — | — |
| unused.test | COMPILE | 0.041407 | 0.099564 | 0.107165 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.060562 | 0.147832 | 0.167930 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.056829 | 0.105806 | 0.170416 | — | — | — |
| quick.test | RUN | 0.211497 | 0.453354 | 0.559911 | 0.000681 | 0.001446 | 0.001427 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.008× | 1.005×, 1.011× | 1.006× |
| clang | 0.994× | 0.994×, 0.994× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001297s | 0.001275s | 0.001325s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001339s | 0.001267s | 0.001307s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001255s | 0.001215s | 0.001269s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001266s | 0.001210s | 0.001268s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001297s | 0.001276s | 0.001235s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001322s | 0.001250s | 0.001216s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001296s | 0.001250s | 0.001303s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001274s | 0.001301s | 0.001222s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001260s | 0.001321s | 0.001268s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001262s | 0.001295s | 0.001286s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001268s | 0.001282s | 0.001268s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001337s | 0.001310s | 0.001280s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001300s | 0.001268s | 0.001300s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001305s | 0.001218s | 0.001256s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001271s | 0.001258s | 0.001266s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001269s | 0.001282s | 0.001252s | byte equality observed |
| adapt_struct.test | 10 | 0.001282s | 0.001316s | 0.001316s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001264s | 0.001302s | 0.001286s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001283s | 0.001362s | 0.001289s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001285s | 0.001284s | 0.001336s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001309s | 0.001272s | 0.001268s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001287s | 0.001243s | 0.001285s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001274s | 0.001252s | 0.001258s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001321s | 0.001267s | 0.001249s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001279s | 0.001253s | 0.001190s | byte equality observed |
| all.test | 10 | 0.001261s | 0.001272s | 0.001221s | byte equality observed |
| any.test | 10 | 0.001216s | 0.001228s | 0.001233s | byte equality observed |
| array.test | 10 | 0.001233s | 0.001254s | 0.001239s | byte equality observed |
| as_deque.test | 10 | 0.001271s | 0.001262s | 0.001244s | byte equality observed |
| as_list.test | 10 | 0.001279s | 0.001273s | 0.001304s | byte equality observed |
| as_map.test | 10 | 0.001272s | 0.001319s | 0.001335s | byte equality observed |
| as_map_assoc.test | 10 | 0.001265s | 0.001310s | 0.001310s | byte equality observed |
| as_set.test | 10 | 0.001313s | 0.001301s | 0.001287s | byte equality observed |
| as_vector.test | 10 | 0.001297s | 0.001325s | 0.001291s | byte equality observed |
| back_extended_deque.test | 10 | 0.001289s | 0.001231s | 0.001197s | byte equality observed |
| boost_array.test | 10 | 0.001227s | 0.001198s | 0.001256s | byte equality observed |
| boost_tuple.test | 10 | 0.001267s | 0.001285s | 0.001257s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001253s | 0.001268s | 0.001262s | byte equality observed |
| clear.test | 10 | 0.001256s | 0.001323s | 0.001258s | byte equality observed |
| cons.test | 10 | 0.001280s | 0.001338s | 0.001234s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001237s | 0.001303s | 0.001261s | byte equality observed |
| convert_deque.test | 10 | 0.001279s | 0.001280s | 0.001266s | byte equality observed |
| convert_list.test | 10 | 0.001281s | 0.001261s | 0.001259s | byte equality observed |
| convert_std_pair.test | 10 | 0.001234s | 0.001308s | 0.001241s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001234s | 0.001248s | 0.001223s | byte equality observed |
| convert_vector.test | 10 | 0.001230s | 0.001230s | 0.001225s | byte equality observed |
| copy.test | 10 | 0.001261s | 0.001276s | 0.001257s | byte equality observed |
| count.test | 10 | 0.001266s | 0.001232s | 0.001251s | byte equality observed |
| count_if.test | 10 | 0.001270s | 0.001279s | 0.001226s | byte equality observed |
| deduce_sequence.test | 10 | 0.001217s | 0.001299s | 0.001304s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001274s | 0.001255s | 0.001272s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001274s | 0.001327s | 0.001296s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001239s | 0.001225s | 0.001250s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001260s | 0.001273s | 0.001212s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001232s | 0.001280s | 0.001226s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001233s | 0.001228s | 0.001236s | byte equality observed |
| define_struct.test | 10 | 0.001259s | 0.001232s | 0.001292s | byte equality observed |
| define_struct_empty.test | 10 | 0.001295s | 0.001287s | 0.001253s | byte equality observed |
| define_struct_inline.test | 10 | 0.001298s | 0.001261s | 0.001249s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001299s | 0.001238s | 0.001264s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001223s | 0.001233s | 0.001224s | byte equality observed |
| define_struct_move.test | 10 | 0.001236s | 0.001253s | 0.001232s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001264s | 0.001299s | 0.001279s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001267s | 0.001319s | 0.001234s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001243s | 0.001326s | 0.001291s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001236s | 0.001300s | 0.001281s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001200s | 0.001273s | 0.001234s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001232s | 0.001224s | 0.001223s | byte equality observed |
| deque_comparison.test | 9 | 0.001254s | 0.001244s | 0.001234s | byte equality observed |
| deque_construction.test | 10 | 0.001249s | 0.001206s | 0.001239s | byte equality observed |
| deque_copy.test | 10 | 0.001266s | 0.001233s | 0.001272s | byte equality observed |
| deque_hash.test | 10 | 0.001244s | 0.001246s | 0.001245s | byte equality observed |
| deque_iterator.test | 10 | 0.001236s | 0.001248s | 0.001223s | byte equality observed |
| deque_make.test | 10 | 0.001233s | 0.001316s | 0.001268s | byte equality observed |
| deque_misc.test | 10 | 0.001261s | 0.001255s | 0.001245s | byte equality observed |
| deque_move.test | 10 | 0.001265s | 0.001285s | 0.001252s | byte equality observed |
| deque_mutate.test | 10 | 0.001227s | 0.001221s | 0.001310s | byte equality observed |
| deque_nest.test | 10 | 0.001243s | 0.001250s | 0.001233s | byte equality observed |
| deque_tie.test | 10 | 0.001238s | 0.001301s | 0.001249s | byte equality observed |
| deque_value_at.test | 10 | 0.001249s | 0.001326s | 0.001258s | byte equality observed |
| erase.test | 10 | 0.001262s | 0.001256s | 0.001231s | byte equality observed |
| erase_key.test | 10 | 0.001304s | 0.001298s | 0.001280s | byte equality observed |
| filter.test | 10 | 0.001274s | 0.001285s | 0.001238s | byte equality observed |
| filter_if.test | 10 | 0.001274s | 0.001322s | 0.001277s | byte equality observed |
| filter_view.test | 10 | 0.001291s | 0.001264s | 0.001272s | byte equality observed |
| find.test | 10 | 0.001301s | 0.001285s | 0.001328s | byte equality observed |
| find_if.test | 10 | 0.001273s | 0.001262s | 0.001291s | byte equality observed |
| flatten.test | 10 | 0.001288s | 0.001256s | 0.001271s | byte equality observed |
| flatten_view.test | 10 | 0.001234s | 0.001243s | 0.001295s | byte equality observed |
| fold.test | 10 | 0.001296s | 0.001264s | 0.001335s | byte equality observed |
| for_each.test | 10 | 0.001255s | 0.001283s | 0.001289s | byte equality observed |
| front_extended_deque.test | 10 | 0.001230s | 0.001248s | 0.001270s | byte equality observed |
| fused.test | 10 | 0.001267s | 0.001228s | 0.001219s | byte equality observed |
| fused_function_object.test | 10 | 0.001252s | 0.001290s | 0.001243s | byte equality observed |
| fused_procedure.test | 10 | 0.001252s | 0.001221s | 0.001219s | byte equality observed |
| github-176.test | 10 | 0.001254s | 0.001239s | 0.001242s | byte equality observed |
| hash.test | 9 | 0.001237s | 0.001287s | 0.001213s | byte equality observed |
| identity_view.test | 10 | 0.001284s | 0.001299s | 0.001281s | byte equality observed |
| insert.test | 10 | 0.001288s | 0.001313s | 0.001330s | byte equality observed |
| insert_range.test | 10 | 0.001269s | 0.001279s | 0.001283s | byte equality observed |
| invoke.test | 10 | 0.001262s | 0.001254s | 0.001294s | byte equality observed |
| invoke_function_object.test | 10 | 0.001218s | 0.001220s | 0.001291s | byte equality observed |
| invoke_procedure.test | 9 | 0.001222s | 0.001284s | 0.001222s | byte equality observed |
| io.test | 8 | 0.001431s | 0.001433s | 0.001371s | byte equality observed |
| iter_fold.test | 10 | 0.001248s | 0.001257s | 0.001208s | byte equality observed |
| iterator_range.test | 9 | 0.001275s | 0.001286s | 0.001240s | byte equality observed |
| join.test | 10 | 0.001265s | 0.001286s | 0.001259s | byte equality observed |
| joint_view.test | 10 | 0.001319s | 0.001272s | 0.001319s | byte equality observed |
| list_comparison.test | 10 | 0.001240s | 0.001247s | 0.001253s | byte equality observed |
| list_construction.test | 10 | 0.001239s | 0.001289s | 0.001211s | byte equality observed |
| list_copy.test | 10 | 0.001222s | 0.001259s | 0.001267s | byte equality observed |
| list_hash.test | 10 | 0.001267s | 0.001264s | 0.001226s | byte equality observed |
| list_iterator.test | 10 | 0.001255s | 0.001247s | 0.001233s | byte equality observed |
| list_make.test | 10 | 0.001317s | 0.001268s | 0.001273s | byte equality observed |
| list_misc.test | 10 | 0.001251s | 0.001217s | 0.001299s | byte equality observed |
| list_mutate.test | 10 | 0.001241s | 0.001191s | 0.001192s | byte equality observed |
| list_nest.test | 10 | 0.001272s | 0.001214s | 0.001195s | byte equality observed |
| list_tie.test | 10 | 0.001235s | 0.001229s | 0.001239s | byte equality observed |
| list_value_at.test | 10 | 0.001211s | 0.001273s | 0.001235s | byte equality observed |
| make_fused.test | 10 | 0.001207s | 0.001252s | 0.001235s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001214s | 0.001291s | 0.001296s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001231s | 0.001255s | 0.001243s | byte equality observed |
| make_list.test | 10 | 0.001282s | 0.001290s | 0.001256s | byte equality observed |
| make_unfused.test | 10 | 0.001288s | 0.001263s | 0.001283s | byte equality observed |
| make_vector.test | 10 | 0.001289s | 0.001240s | 0.001235s | byte equality observed |
| map.test | 10 | 0.001275s | 0.001303s | 0.001281s | byte equality observed |
| map_comparison.test | 10 | 0.001263s | 0.001207s | 0.001243s | byte equality observed |
| map_construction.test | 10 | 0.001272s | 0.001201s | 0.001286s | byte equality observed |
| map_copy.test | 10 | 0.001236s | 0.001234s | 0.001240s | byte equality observed |
| map_misc.test | 10 | 0.001245s | 0.001285s | 0.001280s | byte equality observed |
| map_move.test | 9 | 0.001270s | 0.001262s | 0.001246s | byte equality observed |
| map_mutate.test | 10 | 0.001239s | 0.001244s | 0.001228s | byte equality observed |
| map_tie.test | 9 | 0.001202s | 0.001246s | 0.001209s | byte equality observed |
| move.test | 7 | 0.001230s | 0.001236s | 0.001203s | byte equality observed |
| nil.test | 9 | 0.001229s | 0.001268s | 0.001237s | byte equality observed |
| none.test | 10 | 0.001221s | 0.001276s | 0.001233s | byte equality observed |
| nview.test | 10 | 0.001249s | 0.001303s | 0.001228s | byte equality observed |
| pop_back.test | 10 | 0.001323s | 0.001301s | 0.001302s | byte equality observed |
| pop_front.test | 10 | 0.001326s | 0.001286s | 0.001259s | byte equality observed |
| push_back.test | 10 | 0.001346s | 0.001296s | 0.001273s | byte equality observed |
| push_front.test | 10 | 0.001330s | 0.001302s | 0.001297s | byte equality observed |
| quick.test | 10 | 0.000581s | 0.001244s | 0.001197s | byte equality observed |
| ref_vector.test | 10 | 0.001300s | 0.001251s | 0.001220s | byte equality observed |
| remove.test | 8 | 0.001280s | 0.001304s | 0.001300s | byte equality observed |
| remove_if.test | 10 | 0.001280s | 0.001309s | 0.001339s | byte equality observed |
| repetitive_view.test | 10 | 0.001244s | 0.001286s | 0.001192s | byte equality observed |
| replace.test | 10 | 0.001262s | 0.001239s | 0.001234s | byte equality observed |
| replace_if.test | 10 | 0.001306s | 0.001289s | 0.001314s | byte equality observed |
| reverse.test | 10 | 0.001282s | 0.001286s | 0.001292s | byte equality observed |
| reverse_fold.test | 10 | 0.001256s | 0.001312s | 0.001315s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001242s | 0.001269s | 0.001238s | byte equality observed |
| reverse_view.test | 10 | 0.001227s | 0.001322s | 0.001250s | byte equality observed |
| segmented_find.test | 10 | 0.001230s | 0.001293s | 0.001192s | byte equality observed |
| segmented_find_if.test | 10 | 0.001247s | 0.001233s | 0.001210s | byte equality observed |
| segmented_fold.test | 10 | 0.001282s | 0.001343s | 0.001270s | byte equality observed |
| segmented_for_each.test | 10 | 0.001302s | 0.001268s | 0.001233s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001330s | 0.001326s | 0.001286s | byte equality observed |
| set.test | 10 | 0.001286s | 0.001358s | 0.001256s | byte equality observed |
| single_view.test | 10 | 0.001284s | 0.001273s | 0.001263s | byte equality observed |
| std_array.test | 10 | 0.001256s | 0.001247s | 0.001213s | byte equality observed |
| std_pair.test | 10 | 0.001241s | 0.001242s | 0.001262s | byte equality observed |
| std_tuple.test | 10 | 0.001265s | 0.001228s | 0.001203s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001243s | 0.001303s | 0.001274s | byte equality observed |
| swap.test | 10 | 0.001231s | 0.001235s | 0.001264s | byte equality observed |
| transform.test | 10 | 0.001303s | 0.001272s | 0.001241s | byte equality observed |
| transform_view.test | 10 | 0.001321s | 0.001304s | 0.001321s | byte equality observed |
| tuple_comparison.test | 10 | 0.001265s | 0.001275s | 0.001247s | byte equality observed |
| tuple_construction.test | 10 | 0.001197s | 0.001238s | 0.001267s | byte equality observed |
| tuple_conversion.test | 10 | 0.001248s | 0.001220s | 0.001285s | byte equality observed |
| tuple_copy.test | 10 | 0.001267s | 0.001280s | 0.001217s | byte equality observed |
| tuple_element.test | 10 | 0.001272s | 0.001268s | 0.001268s | byte equality observed |
| tuple_hash.test | 10 | 0.001259s | 0.001268s | 0.001266s | byte equality observed |
| tuple_make.test | 10 | 0.001276s | 0.001256s | 0.001234s | byte equality observed |
| tuple_misc.test | 10 | 0.001287s | 0.001242s | 0.001223s | byte equality observed |
| tuple_mutate.test | 10 | 0.001263s | 0.001239s | 0.001208s | byte equality observed |
| tuple_nest.test | 10 | 0.001243s | 0.001253s | 0.001185s | byte equality observed |
| tuple_tie.test | 10 | 0.001238s | 0.001243s | 0.001279s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001244s | 0.001323s | 0.001257s | byte equality observed |
| tuple_traits__no_variadic.test | 9 | 0.001236s | 0.001283s | 0.001262s | byte equality observed |
| unfused.test | 10 | 0.001283s | 0.001239s | 0.001238s | byte equality observed |
| unfused_typed.test | 10 | 0.001286s | 0.001301s | 0.001236s | byte equality observed |
| vector_comparison.test | 10 | 0.001242s | 0.001263s | 0.001240s | byte equality observed |
| vector_construction.test | 10 | 0.001252s | 0.001243s | 0.001264s | byte equality observed |
| vector_conversion.test | 9 | 0.001274s | 0.001216s | 0.001279s | byte equality observed |
| vector_copy.test | 10 | 0.001262s | 0.001241s | 0.001292s | byte equality observed |
| vector_hash.test | 10 | 0.001261s | 0.001253s | 0.001196s | byte equality observed |
| vector_iterator.test | 9 | 0.001246s | 0.001228s | 0.001217s | byte equality observed |
| vector_make.test | 10 | 0.001252s | 0.001247s | 0.001243s | byte equality observed |
| vector_misc.test | 10 | 0.001280s | 0.001270s | 0.001266s | byte equality observed |
| vector_move.test | 10 | 0.001231s | 0.001304s | 0.001280s | byte equality observed |
| vector_mutate.test | 10 | 0.001229s | 0.001298s | 0.001294s | byte equality observed |
| vector_n.test | 10 | 0.001267s | 0.001252s | 0.001241s | byte equality observed |
| vector_nest.test | 10 | 0.001213s | 0.001305s | 0.001200s | byte equality observed |
| vector_tie.test | 10 | 0.001231s | 0.001261s | 0.001221s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001254s | 0.001209s | 0.001221s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001245s | 0.001213s | 0.001224s | byte equality observed |
| vector_value_at.test | 10 | 0.001216s | 0.001247s | 0.001206s | byte equality observed |
| zip.test | 10 | 0.001262s | 0.001183s | 0.001214s | byte equality observed |
| zip2.test | 10 | 0.001259s | 0.001218s | 0.001230s | byte equality observed |
| zip_ignore.test | 9 | 0.001212s | 0.001244s | 0.001276s | byte equality observed |
| zip_view.test | 10 | 0.001240s | 0.001215s | 0.001239s | byte equality observed |
| zip_view2.test | 10 | 0.001235s | 0.001264s | 0.001259s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001213s | 0.001210s | 0.001243s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
