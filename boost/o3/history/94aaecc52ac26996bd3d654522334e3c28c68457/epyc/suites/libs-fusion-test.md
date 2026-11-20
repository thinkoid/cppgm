# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.458411 | 1.014211 | 1.582576 | 0.001534 | 0.001834 | 0.001830 |
| any.test | RUN | 0.446693 | 0.945987 | 1.529461 | 0.001953 | 0.001836 | 0.002088 |
| clear.test | RUN | 0.326232 | 0.860135 | 1.230150 | 0.001704 | 0.002067 | 0.002122 |
| copy.test | RUN | 0.275831 | 0.642868 | 0.962376 | 0.001898 | 0.002110 | 0.002130 |
| count.test | RUN | 0.314466 | 0.719479 | 1.103477 | 0.001872 | 0.002080 | 0.002010 |
| count_if.test | RUN | 0.296372 | 0.673246 | 0.972766 | 0.001854 | 0.002037 | 0.002065 |
| erase.test | RUN | 0.411626 | 1.165951 | 1.581348 | 0.001698 | 0.001974 | 0.001708 |
| erase_key.test | RUN | 0.397143 | 1.171619 | 1.491377 | 0.001856 | 0.002060 | 0.001797 |
| filter.test | RUN | 0.361610 | 0.985968 | 1.370542 | 0.001646 | 0.002192 | 0.002240 |
| filter_if.test | RUN | 0.408003 | 1.144122 | 1.595333 | 0.001752 | 0.002000 | 0.002108 |
| find.test | RUN | 0.342186 | 0.841797 | 1.258455 | 0.001718 | 0.001901 | 0.001713 |
| find_if.test | RUN | 0.327572 | 0.785409 | 1.174500 | 0.001828 | 0.001866 | 0.001824 |
| fold.test | RUN | 0.378929 | 0.954356 | 1.350072 | 0.002000 | 0.002171 | 0.001898 |
| for_each.test | RUN | 0.341751 | 0.893764 | 1.213173 | 0.001986 | 0.002192 | 0.002152 |
| insert.test | RUN | 0.477957 | 1.478057 | 1.930564 | 0.001775 | 0.001902 | 0.001920 |
| insert_range.test | RUN | 0.479374 | 1.504462 | 1.943049 | 0.001770 | 0.001906 | 0.001706 |
| iter_fold.test | RUN | 0.557003 | 1.430169 | 2.249984 | 0.001940 | 0.002136 | 0.002111 |
| move.test | RUN | 0.282152 | 0.696286 | 1.005512 | 0.001820 | 0.002148 | 0.002088 |
| none.test | RUN | 0.456517 | 0.939540 | 1.570162 | 0.002114 | 0.002232 | 0.001898 |
| pop_back.test | RUN | 0.436653 | 1.258929 | 1.760313 | 0.001794 | 0.002189 | 0.002038 |
| pop_front.test | RUN | 0.377843 | 1.053867 | 1.420555 | 0.002116 | 0.002058 | 0.001906 |
| push_back.test | RUN | 0.476031 | 1.503292 | 1.895941 | 0.001951 | 0.002224 | 0.002199 |
| push_front.test | RUN | 0.414230 | 1.273677 | 1.597206 | 0.002098 | 0.001974 | 0.002206 |
| remove.test | RUN | 0.456621 | 1.382352 | 1.895161 | 0.001839 | 0.002106 | 0.001953 |
| remove_if.test | RUN | 0.406567 | 1.176189 | 1.632588 | 0.001930 | 0.001996 | 0.001862 |
| replace.test | RUN | 0.399740 | 1.143765 | 1.491190 | 0.001831 | 0.002138 | 0.002052 |
| replace_if.test | RUN | 0.390640 | 1.153929 | 1.475673 | 0.002254 | 0.002004 | 0.002174 |
| reverse_fold.test | RUN | 0.623920 | 1.580245 | 2.520105 | 0.002105 | 0.001820 | 0.001862 |
| reverse_iter_fold.test | RUN | 0.659670 | 1.652051 | 2.678007 | 0.001954 | 0.002088 | 0.001699 |
| reverse.test | RUN | 0.398823 | 1.156204 | 1.515185 | 0.002028 | 0.002175 | 0.001900 |
| segmented_for_each.test | RUN | 0.695440 | 2.191960 | 3.085707 | 0.001894 | 0.001864 | 0.001781 |
| segmented_find.test | RUN | 0.419348 | 1.162018 | 1.778832 | 0.002043 | 0.002162 | 0.001641 |
| segmented_find_if.test | RUN | 0.429646 | 1.190780 | 1.759407 | 0.001816 | 0.001793 | 0.002100 |
| segmented_fold.test | RUN | 0.533755 | 1.571697 | 2.151507 | 0.001878 | 0.002224 | 0.002150 |
| transform.test | RUN | 0.426812 | 1.212788 | 1.613384 | 0.001919 | 0.002158 | 0.002211 |
| join.test | RUN | 0.313505 | 0.754238 | 1.146260 | 0.001922 | 0.002124 | 0.002111 |
| zip.test | RUN | 0.561416 | 1.381236 | 2.093565 | 0.002095 | 0.002178 | 0.002063 |
| zip2.test | RUN | 0.537073 | 1.371658 | 2.038575 | 0.002083 | 0.001998 | 0.001876 |
| zip_ignore.test | RUN | 0.406611 | 0.940153 | 1.373119 | 0.002036 | 0.001852 | 0.001883 |
| flatten.test | RUN | 0.389921 | 1.078113 | 1.400857 | 0.001806 | 0.002160 | 0.002068 |
| ticket-5490.test | COMPILE | 0.200777 | 0.466422 | 0.595764 | — | — | — |
| as_deque.test | RUN | 0.384558 | 0.966279 | 1.486470 | 0.002138 | 0.002018 | 0.001964 |
| as_list.test | RUN | 0.430156 | 1.191035 | 1.602353 | 0.001896 | 0.002088 | 0.002017 |
| as_map.test | RUN | 0.420471 | 1.170390 | 1.622040 | 0.001758 | 0.001590 | 0.001954 |
| as_map_assoc.test | RUN | 0.418987 | 1.107736 | 1.480976 | 0.001751 | 0.001970 | 0.002262 |
| as_set.test | RUN | 0.486528 | 1.379236 | 1.888629 | 0.001922 | 0.001864 | 0.001436 |
| as_vector.test | RUN | 0.446384 | 1.218851 | 1.679365 | 0.001634 | 0.001911 | 0.001802 |
| boost_tuple.test | RUN | 0.424852 | 1.210513 | 1.584874 | 0.001831 | 0.001827 | 0.002074 |
| boost_tuple_iterator.test | RUN | 0.289245 | 0.751643 | 1.009269 | 0.001748 | 0.001879 | 0.002104 |
| cons.test | RUN | 0.526501 | 1.356782 | 1.949285 | 0.001800 | 0.001983 | 0.001984 |
| convert_boost_tuple.test | RUN | 0.339392 | 1.046658 | 1.267755 | 0.001391 | 0.001581 | 0.001608 |
| convert_deque.test | RUN | 0.342163 | 1.013471 | 1.245056 | 0.001784 | 0.001779 | 0.001658 |
| convert_list.test | RUN | 0.344193 | 1.039093 | 1.283314 | 0.001801 | 0.001710 | 0.001993 |
| convert_std_pair.test | RUN | 0.356472 | 1.039345 | 1.294549 | 0.001968 | 0.001964 | 0.001826 |
| convert_std_tuple.test | RUN | 0.339306 | 1.017805 | 1.261502 | 0.001832 | 0.001823 | 0.002021 |
| convert_vector.test | RUN | 0.332483 | 1.028587 | 1.229014 | 0.001719 | 0.001734 | 0.001911 |
| filter_view.test | RUN | 0.401009 | 1.111123 | 1.518831 | 0.002060 | 0.001969 | 0.001904 |
| hash.test | RUN | 0.396133 | 0.999945 | 1.487840 | 0.001927 | 0.002072 | 0.002011 |
| io.test | RUN | 0.415515 | 1.377370 | 1.736630 | 0.001900 | 0.002430 | 0.002378 |
| iterator_range.test | RUN | 0.381957 | 1.040511 | 1.433249 | 0.001718 | 0.002115 | 0.001982 |
| joint_view.test | RUN | 0.516309 | 1.758923 | 2.129758 | 0.002080 | 0.001970 | 0.002020 |
| list_comparison.test | RUN | 0.303810 | 0.716696 | 1.069061 | 0.001819 | 0.002078 | 0.001754 |
| list_construction.test | RUN | 0.297130 | 0.722347 | 1.055375 | 0.002000 | 0.001712 | 0.001879 |
| list_copy.test | RUN | 0.449647 | 1.278976 | 1.760792 | 0.001842 | 0.001923 | 0.002117 |
| list_iterator.test | RUN | 0.300602 | 0.751156 | 1.003518 | 0.001788 | 0.001780 | 0.001860 |
| list_hash.test | RUN | 0.397166 | 1.358765 | 1.466708 | 0.002014 | 0.002096 | 0.002056 |
| list_make.test | RUN | 0.310924 | 0.773008 | 1.125319 | 0.001468 | 0.001932 | 0.002120 |
| list_misc.test | RUN | 0.392233 | 0.944998 | 1.346934 | 0.001870 | 0.002051 | 0.002112 |
| list_mutate.test | RUN | 0.272741 | 0.602141 | 0.904581 | 0.002048 | 0.001996 | 0.001938 |
| list_nest.test | RUN | 0.550610 | 1.720666 | 2.444226 | 0.001876 | 0.001821 | 0.002101 |
| list_tie.test | RUN | 0.292576 | 0.703048 | 1.010024 | 0.002131 | 0.001734 | 0.002099 |
| list_value_at.test | RUN | 0.282376 | 0.679243 | 0.959990 | 0.001762 | 0.001951 | 0.002150 |
| deque_comparison.test | RUN | 0.296703 | 0.757571 | 1.097955 | 0.001700 | 0.001885 | 0.001648 |
| deque_construction.test | RUN | 0.297610 | 0.707103 | 1.040725 | 0.001974 | 0.001941 | 0.002066 |
| deque_copy.test | RUN | 0.423416 | 1.225785 | 1.678597 | 0.001994 | 0.001812 | 0.002053 |
| deque_iterator.test | RUN | 0.292124 | 0.776960 | 0.984476 | 0.001770 | 0.002088 | 0.001964 |
| deque_hash.test | RUN | 0.404129 | 1.269826 | 1.531210 | 0.001872 | 0.002214 | 0.002125 |
| deque_is_constructible.test | COMPILE | 0.163770 | 0.349631 | 0.489108 | — | — | — |
| deque_make.test | RUN | 0.297615 | 0.753174 | 1.055737 | 0.002072 | 0.001973 | 0.002117 |
| deque_misc.test | RUN | 0.396312 | 0.888537 | 1.307558 | 0.001884 | 0.001767 | 0.001874 |
| deque_move.test | RUN | 0.301446 | 0.784515 | 1.060644 | 0.001757 | 0.001884 | 0.001799 |
| deque_mutate.test | RUN | 0.284754 | 0.630477 | 0.892486 | 0.001742 | 0.001949 | 0.001791 |
| deque_nest.test | RUN | 0.833771 | 2.725763 | 3.794093 | 0.001956 | 0.002020 | 0.002050 |
| deque_tie.test | RUN | 0.274314 | 0.695109 | 1.020030 | 0.001545 | 0.001919 | 0.002040 |
| deque_value_at.test | RUN | 0.271861 | 0.631461 | 0.957090 | 0.001716 | 0.001987 | 0.001734 |
| front_extended_deque.test | RUN | 0.422822 | 0.939007 | 1.376136 | 0.002080 | 0.002066 | 0.002058 |
| back_extended_deque.test | RUN | 0.400177 | 0.951115 | 1.422160 | 0.001746 | 0.002002 | 0.002169 |
| make_list.test | RUN | 0.323609 | 0.821313 | 1.122734 | 0.001972 | 0.002164 | 0.002214 |
| make_vector.test | RUN | 0.321160 | 0.773996 | 1.075483 | 0.001767 | 0.002331 | 0.002077 |
| map.test | RUN | 0.412988 | 1.168722 | 1.512929 | 0.001919 | 0.002007 | 0.002136 |
| map_comparison.test | RUN | 0.311024 | 0.755748 | 1.069296 | 0.001808 | 0.002186 | 0.002064 |
| map_construction.test | RUN | 0.310890 | 0.747424 | 1.055920 | 0.001727 | 0.002192 | 0.001813 |
| map_copy.test | RUN | 0.369624 | 0.948671 | 1.291368 | 0.001909 | 0.002156 | 0.001906 |
| map_misc.test | RUN | 0.387557 | 0.914341 | 1.311255 | 0.001826 | 0.002116 | 0.002122 |
| map_move.test | RUN | 0.304755 | 0.770134 | 1.081957 | 0.001910 | 0.001821 | 0.001768 |
| map_mutate.test | RUN | 0.283475 | 0.644067 | 0.892248 | 0.001698 | 0.001785 | 0.001801 |
| map_tie.test | RUN | 0.282148 | 0.640673 | 0.941924 | 0.001792 | 0.001938 | 0.002081 |
| nil.test | RUN | 0.195168 | 0.462852 | 0.668748 | 0.002037 | 0.001891 | 0.002067 |
| nview.test | RUN | 0.377704 | 0.922446 | 1.322653 | 0.001868 | 0.002109 | 0.002063 |
| reverse_view.test | RUN | 0.490430 | 1.482864 | 1.989113 | 0.001997 | 0.002144 | 0.002064 |
| segmented_iterator_range.test | RUN | 0.574797 | 1.715273 | 2.436398 | 0.001824 | 0.002079 | 0.001950 |
| set.test | RUN | 0.361928 | 1.026666 | 1.396298 | 0.001984 | 0.001810 | 0.002122 |
| single_view.test | RUN | 0.342007 | 0.926742 | 1.265789 | 0.002004 | 0.001986 | 0.002051 |
| std_pair.test | RUN | 0.427664 | 1.165196 | 1.556107 | 0.001887 | 0.001809 | 0.002102 |
| boost_array.test | RUN | 0.365724 | 0.825169 | 1.226071 | 0.001769 | 0.002122 | 0.001774 |
| array.test | RUN | 0.368249 | 0.855843 | 1.216535 | 0.001796 | 0.001402 | 0.001959 |
| std_array.test | RUN | 0.359909 | 0.832911 | 1.225996 | 0.001895 | 0.002020 | 0.002112 |
| tuple_comparison.test | RUN | 0.320475 | 0.785747 | 1.137136 | 0.001862 | 0.002064 | 0.001984 |
| tuple_construction.test | RUN | 0.328423 | 0.798315 | 1.101370 | 0.001888 | 0.002192 | 0.002027 |
| tuple_conversion.test | RUN | 0.720462 | 2.302808 | 3.514244 | 0.001535 | 0.002064 | 0.001728 |
| tuple_copy.test | RUN | 0.498471 | 1.372402 | 1.922029 | 0.001726 | 0.001868 | 0.001946 |
| tuple_element.test | RUN | 0.298829 | 0.738673 | 1.085666 | 0.001956 | 0.002132 | 0.002052 |
| tuple_make.test | RUN | 0.323323 | 0.829926 | 1.175868 | 0.001840 | 0.002064 | 0.001805 |
| tuple_misc.test | RUN | 0.423068 | 0.992106 | 1.390557 | 0.001999 | 0.002001 | 0.001957 |
| tuple_mutate.test | RUN | 0.283839 | 0.667387 | 1.048495 | 0.002000 | 0.002002 | 0.001582 |
| tuple_nest.test | RUN | 1.197662 | 4.622740 | 6.542016 | 0.001842 | 0.001906 | 0.002010 |
| tuple_hash.test | RUN | 0.441715 | 1.345521 | 1.510890 | 0.002060 | 0.002050 | 0.001938 |
| tuple_tie.test | RUN | 0.308733 | 0.764451 | 1.110397 | 0.001832 | 0.002120 | 0.002138 |
| tuple_traits__maybe_variadic.test | RUN | 0.345031 | 0.896969 | 1.218637 | 0.002095 | 0.001947 | 0.001990 |
| tuple_traits__no_variadic.test | RUN | 0.396613 | 0.936135 | 1.209906 | 0.001748 | 0.002185 | 0.002056 |
| transform_view.test | RUN | 0.479677 | 1.486640 | 1.977590 | 0.001910 | 0.001850 | 0.001934 |
| identity_view.test | RUN | 0.470652 | 1.394739 | 1.801881 | 0.002070 | 0.001882 | 0.001885 |
| vector_comparison.test | RUN | 0.300072 | 0.803840 | 1.060741 | 0.001684 | 0.001994 | 0.002062 |
| vector_construction.test | RUN | 0.309911 | 0.703392 | 1.016470 | 0.001778 | 0.002140 | 0.002065 |
| vector_conversion.test | RUN | 0.847397 | 3.058127 | 4.674492 | 0.002090 | 0.001995 | 0.002042 |
| vector_copy.test | RUN | 0.456620 | 1.370090 | 1.898490 | 0.001617 | 0.001850 | 0.001878 |
| vector_iterator.test | RUN | 0.301310 | 0.739429 | 0.979482 | 0.002034 | 0.002016 | 0.002081 |
| vector_make.test | RUN | 0.308679 | 0.782819 | 1.059529 | 0.001858 | 0.002167 | 0.002115 |
| vector_misc.test | RUN | 0.402937 | 0.964275 | 1.321897 | 0.001684 | 0.001795 | 0.001640 |
| vector_move.test | RUN | 0.302735 | 0.773445 | 1.087330 | 0.001882 | 0.001786 | 0.002012 |
| vector_mutate.test | RUN | 0.273338 | 0.664750 | 0.936918 | 0.001769 | 0.001906 | 0.001672 |
| vector_n.test | RUN | 0.346043 | 0.812871 | 1.241612 | 0.002092 | 0.002134 | 0.002184 |
| vector_nest.test | RUN | 1.216644 | 4.808438 | 6.601048 | 0.002056 | 0.002032 | 0.001853 |
| vector_hash.test | RUN | 0.404596 | 1.292244 | 1.489684 | 0.001936 | 0.002162 | 0.002328 |
| vector_tie.test | RUN | 0.293871 | 0.720592 | 1.015139 | 0.001833 | 0.002122 | 0.002088 |
| vector_traits__maybe_variadic.test | RUN | 0.328096 | 0.799865 | 1.050329 | 0.002048 | 0.002168 | 0.002137 |
| vector_traits__no_variadic.test | RUN | 0.357332 | 0.900170 | 1.183086 | 0.001941 | 0.001898 | 0.002164 |
| vector_value_at.test | RUN | 0.279274 | 0.642912 | 0.942772 | 0.001555 | 0.001849 | 0.001818 |
| zip_view.test | RUN | 0.600027 | 1.565636 | 2.395516 | 0.001762 | 0.001958 | 0.001768 |
| zip_view2.test | RUN | 0.465710 | 1.293336 | 1.867242 | 0.001643 | 0.001954 | 0.001865 |
| zip_view_ignore.test | RUN | 0.440932 | 1.148432 | 1.666200 | 0.001858 | 0.001800 | 0.001571 |
| repetitive_view.test | RUN | 0.753585 | 2.054634 | 3.019194 | 0.001778 | 0.002170 | 0.001864 |
| deduce_sequence.test | RUN | 0.352818 | 0.851067 | 1.287821 | 0.001681 | 0.001952 | 0.001964 |
| adapt_adt_named.test | RUN | 0.433806 | 1.182735 | 1.539472 | 0.001858 | 0.001932 | 0.002114 |
| adapt_adt_named_empty.test | RUN | 0.366660 | 1.004200 | 1.274585 | 0.001818 | 0.002061 | 0.002023 |
| adapt_adt.test | RUN | 0.464036 | 1.534037 | 1.850126 | 0.001902 | 0.002106 | 0.002126 |
| adapt_adt_empty.test | RUN | 0.366835 | 0.979345 | 1.307837 | 0.001970 | 0.001891 | 0.002018 |
| adapt_assoc_adt_named.test | RUN | 0.466691 | 1.233832 | 1.717270 | 0.001877 | 0.002116 | 0.002043 |
| adapt_assoc_adt_named_empty.test | RUN | 0.372773 | 0.938620 | 1.262196 | 0.001829 | 0.002156 | 0.002036 |
| adapt_assoc_adt.test | RUN | 0.490612 | 1.290671 | 1.735592 | 0.001755 | 0.002162 | 0.002024 |
| adapt_assoc_adt_empty.test | RUN | 0.361509 | 0.976149 | 1.297890 | 0.001898 | 0.001959 | 0.001957 |
| adapt_assoc_struct_named.test | RUN | 0.463880 | 1.222863 | 1.642244 | 0.001810 | 0.001988 | 0.002168 |
| adapt_assoc_struct_named_empty.test | RUN | 0.360405 | 0.939575 | 1.313466 | 0.001784 | 0.002216 | 0.002056 |
| adapt_assoc_struct.test | RUN | 0.423730 | 1.159042 | 1.521365 | 0.001708 | 0.001946 | 0.002070 |
| adapt_assoc_struct_empty.test | RUN | 0.366423 | 0.954610 | 1.294031 | 0.002074 | 0.001988 | 0.002042 |
| adapt_assoc_tpl_adt.test | RUN | 0.489661 | 1.341979 | 1.734192 | 0.001730 | 0.002096 | 0.002020 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.363288 | 0.948164 | 1.282212 | 0.001664 | 0.002149 | 0.001992 |
| adapt_assoc_tpl_struct.test | RUN | 0.409886 | 1.160285 | 1.494397 | 0.001845 | 0.002010 | 0.001957 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.373951 | 0.972261 | 1.282552 | 0.001911 | 0.001688 | 0.001694 |
| adapt_struct_named.test | RUN | 0.413351 | 1.171120 | 1.494152 | 0.002023 | 0.001862 | 0.002072 |
| adapt_struct_named_empty.test | RUN | 0.370059 | 1.002039 | 1.279586 | 0.001806 | 0.001938 | 0.001961 |
| adapt_struct.test | RUN | 0.443834 | 1.304801 | 1.694763 | 0.001835 | 0.001938 | 0.002110 |
| adapt_struct_empty.test | RUN | 0.363304 | 0.974421 | 1.281651 | 0.001910 | 0.001822 | 0.002096 |
| adapt_tpl_adt.test | RUN | 0.465553 | 1.514019 | 1.750174 | 0.001766 | 0.001908 | 0.001573 |
| adapt_tpl_adt_empty.test | RUN | 0.370437 | 0.984486 | 1.254019 | 0.001948 | 0.002186 | 0.002038 |
| adapt_tpl_struct.test | RUN | 0.383223 | 1.061317 | 1.439966 | 0.001879 | 0.001690 | 0.001560 |
| adapt_tpl_struct_empty.test | RUN | 0.363188 | 1.004139 | 1.279507 | 0.001932 | 0.001955 | 0.002003 |
| adt_attribute_proxy.test | RUN | 0.418351 | 0.949522 | 1.391032 | 0.001437 | 0.002145 | 0.001802 |
| define_struct.test | RUN | 0.492508 | 1.295896 | 1.799325 | 0.001842 | 0.001872 | 0.002026 |
| define_struct_empty.test | RUN | 0.437795 | 1.060915 | 1.507585 | 0.002030 | 0.002054 | 0.002046 |
| define_struct_move.test | RUN | 0.286482 | 0.641528 | 0.904296 | 0.001918 | 0.002040 | 0.001634 |
| define_struct_inline.test | RUN | 0.528032 | 1.562034 | 2.029935 | 0.001581 | 0.001954 | 0.001949 |
| define_struct_inline_empty.test | RUN | 0.436532 | 1.114157 | 1.517896 | 0.001885 | 0.002106 | 0.002098 |
| define_struct_inline_move.test | RUN | 0.288050 | 0.590641 | 0.904270 | 0.002053 | 0.002094 | 0.001994 |
| define_assoc_struct.test | RUN | 0.476823 | 1.257227 | 1.721753 | 0.002021 | 0.002156 | 0.001950 |
| define_assoc_struct_empty.test | RUN | 0.438398 | 1.085704 | 1.508106 | 0.002034 | 0.001888 | 0.002012 |
| define_assoc_struct_move.test | RUN | 0.281015 | 0.599256 | 0.893368 | 0.001825 | 0.002158 | 0.002081 |
| define_tpl_struct.test | RUN | 0.490549 | 1.272048 | 1.680516 | 0.002022 | 0.001948 | 0.001755 |
| define_tpl_struct_empty.test | RUN | 0.439353 | 1.075427 | 1.509975 | 0.001727 | 0.001883 | 0.002134 |
| define_tpl_struct_move.test | RUN | 0.289257 | 0.660812 | 0.928205 | 0.001860 | 0.001666 | 0.001748 |
| define_tpl_struct_inline.test | RUN | 0.503608 | 1.503861 | 1.901993 | 0.002000 | 0.002155 | 0.002082 |
| define_tpl_struct_inline_empty.test | RUN | 0.437724 | 1.115604 | 1.502805 | 0.001618 | 0.001894 | 0.002133 |
| define_tpl_struct_inline_move.test | RUN | 0.281146 | 0.597803 | 0.938549 | 0.002020 | 0.002087 | 0.001950 |
| define_assoc_tpl_struct.test | RUN | 0.484572 | 1.269345 | 1.788796 | 0.002031 | 0.002094 | 0.002068 |
| define_assoc_tpl_struct_empty.test | RUN | 0.439748 | 1.100150 | 1.489127 | 0.001507 | 0.001938 | 0.001872 |
| define_assoc_tpl_struct_move.test | RUN | 0.277964 | 0.615654 | 0.957422 | 0.001611 | 0.001895 | 0.002100 |
| std_tuple.test | RUN | 0.286508 | 0.718740 | 0.994619 | 0.001784 | 0.002022 | 0.001708 |
| std_tuple_iterator.test | RUN | 0.282823 | 0.745776 | 1.059433 | 0.001976 | 0.002174 | 0.002038 |
| ref_vector.test | RUN | 0.331116 | 0.782926 | 1.115276 | 0.002050 | 0.001994 | 0.002160 |
| flatten_view.test | RUN | 0.348854 | 0.916803 | 1.300324 | 0.001891 | 0.001968 | 0.002192 |
| github-159.test | COMPILE | 0.159542 | 0.348425 | 0.512135 | — | — | — |
| github-176.test | RUN | 0.332758 | 0.818237 | 1.109228 | 0.001904 | 0.002152 | 0.002214 |
| size.test | COMPILE | 0.278514 | 0.605433 | 0.874445 | — | — | — |
| fused.test | RUN | 0.384802 | 0.910942 | 1.302958 | 0.001775 | 0.001878 | 0.001826 |
| fused_function_object.test | RUN | 0.291544 | 0.666671 | 0.998623 | 0.002076 | 0.002078 | 0.002064 |
| fused_procedure.test | RUN | 0.372924 | 0.852743 | 1.276740 | 0.001724 | 0.002124 | 0.002114 |
| unfused.test | RUN | 0.299847 | 0.682148 | 0.988145 | 0.001842 | 0.002172 | 0.001915 |
| unfused_typed.test | RUN | 0.302119 | 0.748883 | 1.039173 | 0.001841 | 0.001884 | 0.002080 |
| make_fused.test | RUN | 0.400341 | 0.877492 | 1.301712 | 0.002016 | 0.001746 | 0.001810 |
| make_fused_function_object.test | RUN | 0.289290 | 0.675184 | 0.943333 | 0.001998 | 0.001951 | 0.001632 |
| make_fused_procedure.test | RUN | 0.383735 | 0.837800 | 1.299955 | 0.001744 | 0.001988 | 0.002026 |
| make_unfused.test | RUN | 0.292521 | 0.702577 | 1.013503 | 0.002072 | 0.001840 | 0.001992 |
| invoke.test | RUN | 0.751919 | 2.427796 | 3.359064 | 0.002043 | 0.001788 | 0.002153 |
| invoke_function_object.test | RUN | 0.354972 | 0.879768 | 1.302474 | 0.002101 | 0.002178 | 0.002128 |
| invoke_procedure.test | RUN | 0.602291 | 1.782638 | 2.471594 | 0.001701 | 0.001784 | 0.001801 |
| swap.test | RUN | 0.461429 | 1.123186 | 1.566135 | 0.001991 | 0.002016 | 0.002115 |
| is_sequence.test | COMPILE | 0.078052 | 0.163871 | 0.199874 | — | — | — |
| is_view.test | COMPILE | 0.076152 | 0.159573 | 0.201181 | — | — | — |
| pair_deque.test | COMPILE | 0.164059 | 0.388909 | 0.458668 | — | — | — |
| pair_list.test | COMPILE | 0.161744 | 0.347075 | 0.456680 | — | — | — |
| pair_map.test | COMPILE | 0.170478 | 0.361527 | 0.537911 | — | — | — |
| pair_set.test | COMPILE | 0.171405 | 0.363194 | 0.468439 | — | — | — |
| pair_vector.test | COMPILE | 0.169503 | 0.354192 | 0.491285 | — | — | — |
| pair_nest.test | COMPILE | 0.067454 | 0.147170 | 0.198341 | — | — | — |
| index_sequence.test | COMPILE | 0.059597 | 0.107161 | 0.136847 | — | — | — |
| and.test | COMPILE | 0.045907 | 0.077763 | 0.098093 | — | — | — |
| tag_of.test | COMPILE | 0.074654 | 0.153777 | 0.178946 | — | — | — |
| unused.test | COMPILE | 0.041725 | 0.094193 | 0.111949 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.077252 | 0.152118 | 0.200441 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.048233 | 0.096290 | 0.194095 | — | — | — |
| quick.test | RUN | 0.203040 | 0.447176 | 0.582065 | 0.000566 | 0.001320 | 0.001312 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.999×, 1.002× | 0.999× |
| clang | 0.996× | 1.005×, 0.988× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001267s | 0.001253s | 0.001248s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001296s | 0.001288s | 0.001276s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001300s | 0.001281s | 0.001284s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001249s | 0.001250s | 0.001247s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001268s | 0.001283s | 0.001336s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001320s | 0.001325s | 0.001315s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001288s | 0.001309s | 0.001321s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001283s | 0.001248s | 0.001311s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001291s | 0.001256s | 0.001306s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001317s | 0.001291s | 0.001283s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001303s | 0.001260s | 0.001296s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001311s | 0.001351s | 0.001263s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001312s | 0.001331s | 0.001283s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001322s | 0.001242s | 0.001273s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001310s | 0.001253s | 0.001294s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001278s | 0.001291s | 0.001242s | byte equality observed |
| adapt_struct.test | 10 | 0.001299s | 0.001292s | 0.001293s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001266s | 0.001325s | 0.001334s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001322s | 0.001305s | 0.001335s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001335s | 0.001249s | 0.001309s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001300s | 0.001271s | 0.001301s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001292s | 0.001296s | 0.001301s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001342s | 0.001259s | 0.001330s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001298s | 0.001229s | 0.001276s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001261s | 0.001214s | 0.001225s | byte equality observed |
| all.test | 10 | 0.001243s | 0.001204s | 0.001269s | byte equality observed |
| any.test | 10 | 0.001257s | 0.001236s | 0.001262s | byte equality observed |
| array.test | 10 | 0.001263s | 0.001255s | 0.001251s | byte equality observed |
| as_deque.test | 10 | 0.001224s | 0.001266s | 0.001268s | byte equality observed |
| as_list.test | 10 | 0.001282s | 0.001298s | 0.001320s | byte equality observed |
| as_map.test | 10 | 0.001266s | 0.001281s | 0.001329s | byte equality observed |
| as_map_assoc.test | 10 | 0.001307s | 0.001263s | 0.001301s | byte equality observed |
| as_set.test | 10 | 0.001302s | 0.001355s | 0.001296s | byte equality observed |
| as_vector.test | 10 | 0.001293s | 0.001268s | 0.001302s | byte equality observed |
| back_extended_deque.test | 10 | 0.001220s | 0.001306s | 0.001251s | byte equality observed |
| boost_array.test | 10 | 0.001259s | 0.001238s | 0.001303s | byte equality observed |
| boost_tuple.test | 10 | 0.001252s | 0.001244s | 0.001271s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001240s | 0.001213s | 0.001255s | byte equality observed |
| clear.test | 10 | 0.001263s | 0.001287s | 0.001279s | byte equality observed |
| cons.test | 10 | 0.001273s | 0.001247s | 0.001326s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001261s | 0.001256s | 0.001209s | byte equality observed |
| convert_deque.test | 10 | 0.001240s | 0.001235s | 0.001249s | byte equality observed |
| convert_list.test | 10 | 0.001252s | 0.001207s | 0.001270s | byte equality observed |
| convert_std_pair.test | 10 | 0.001247s | 0.001204s | 0.001273s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001225s | 0.001222s | 0.001268s | byte equality observed |
| convert_vector.test | 10 | 0.001235s | 0.001251s | 0.001276s | byte equality observed |
| copy.test | 10 | 0.001273s | 0.001228s | 0.001253s | byte equality observed |
| count.test | 10 | 0.001243s | 0.001222s | 0.001283s | byte equality observed |
| count_if.test | 10 | 0.001268s | 0.001215s | 0.001213s | byte equality observed |
| deduce_sequence.test | 10 | 0.001264s | 0.001202s | 0.001290s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001276s | 0.001274s | 0.001309s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001279s | 0.001256s | 0.001282s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001299s | 0.001255s | 0.001237s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001267s | 0.001228s | 0.001270s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001292s | 0.001252s | 0.001320s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001268s | 0.001236s | 0.001255s | byte equality observed |
| define_struct.test | 10 | 0.001279s | 0.001289s | 0.001326s | byte equality observed |
| define_struct_empty.test | 10 | 0.001248s | 0.001246s | 0.001334s | byte equality observed |
| define_struct_inline.test | 10 | 0.001297s | 0.001326s | 0.001272s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001241s | 0.001247s | 0.001242s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001241s | 0.001237s | 0.001248s | byte equality observed |
| define_struct_move.test | 10 | 0.001215s | 0.001234s | 0.001333s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001278s | 0.001258s | 0.001289s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001304s | 0.001303s | 0.001341s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001304s | 0.001307s | 0.001332s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001279s | 0.001293s | 0.001319s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001249s | 0.001282s | 0.001244s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001252s | 0.001227s | 0.001268s | byte equality observed |
| deque_comparison.test | 10 | 0.001284s | 0.001246s | 0.001249s | byte equality observed |
| deque_construction.test | 10 | 0.001310s | 0.001261s | 0.001296s | byte equality observed |
| deque_copy.test | 10 | 0.001240s | 0.001277s | 0.001295s | byte equality observed |
| deque_hash.test | 10 | 0.001256s | 0.001293s | 0.001317s | byte equality observed |
| deque_iterator.test | 10 | 0.001232s | 0.001251s | 0.001331s | byte equality observed |
| deque_make.test | 10 | 0.001275s | 0.001239s | 0.001256s | byte equality observed |
| deque_misc.test | 10 | 0.001281s | 0.001224s | 0.001257s | byte equality observed |
| deque_move.test | 10 | 0.001241s | 0.001243s | 0.001264s | byte equality observed |
| deque_mutate.test | 10 | 0.001231s | 0.001230s | 0.001334s | byte equality observed |
| deque_nest.test | 10 | 0.001226s | 0.001211s | 0.001244s | byte equality observed |
| deque_tie.test | 10 | 0.001260s | 0.001238s | 0.001330s | byte equality observed |
| deque_value_at.test | 10 | 0.001257s | 0.001218s | 0.001279s | byte equality observed |
| erase.test | 10 | 0.001271s | 0.001234s | 0.001270s | byte equality observed |
| erase_key.test | 10 | 0.001298s | 0.001365s | 0.001323s | byte equality observed |
| filter.test | 10 | 0.001307s | 0.001265s | 0.001309s | byte equality observed |
| filter_if.test | 10 | 0.001320s | 0.001330s | 0.001340s | byte equality observed |
| filter_view.test | 10 | 0.001267s | 0.001283s | 0.001307s | byte equality observed |
| find.test | 10 | 0.001308s | 0.001289s | 0.001277s | byte equality observed |
| find_if.test | 10 | 0.001301s | 0.001260s | 0.001272s | byte equality observed |
| flatten.test | 10 | 0.001307s | 0.001226s | 0.001304s | byte equality observed |
| flatten_view.test | 10 | 0.001266s | 0.001248s | 0.001349s | byte equality observed |
| fold.test | 10 | 0.001274s | 0.001236s | 0.001298s | byte equality observed |
| for_each.test | 10 | 0.001277s | 0.001273s | 0.001268s | byte equality observed |
| front_extended_deque.test | 10 | 0.001233s | 0.001214s | 0.001261s | byte equality observed |
| fused.test | 10 | 0.001253s | 0.001203s | 0.001305s | byte equality observed |
| fused_function_object.test | 10 | 0.001276s | 0.001217s | 0.001290s | byte equality observed |
| fused_procedure.test | 10 | 0.001282s | 0.001205s | 0.001300s | byte equality observed |
| github-176.test | 10 | 0.001251s | 0.001231s | 0.001313s | byte equality observed |
| hash.test | 10 | 0.001281s | 0.001216s | 0.001283s | byte equality observed |
| identity_view.test | 10 | 0.001298s | 0.001244s | 0.001291s | byte equality observed |
| insert.test | 10 | 0.001322s | 0.001270s | 0.001372s | byte equality observed |
| insert_range.test | 10 | 0.001310s | 0.001295s | 0.001360s | byte equality observed |
| invoke.test | 10 | 0.001298s | 0.001200s | 0.001266s | byte equality observed |
| invoke_function_object.test | 10 | 0.001250s | 0.001204s | 0.001292s | byte equality observed |
| invoke_procedure.test | 10 | 0.001243s | 0.001192s | 0.001260s | byte equality observed |
| io.test | 10 | 0.001403s | 0.001453s | 0.001443s | byte equality observed |
| iter_fold.test | 8 | 0.001288s | 0.001242s | 0.001270s | byte equality observed |
| iterator_range.test | 10 | 0.001299s | 0.001271s | 0.001290s | byte equality observed |
| join.test | 10 | 0.001271s | 0.001242s | 0.001234s | byte equality observed |
| joint_view.test | 10 | 0.001324s | 0.001309s | 0.001316s | byte equality observed |
| list_comparison.test | 10 | 0.001272s | 0.001222s | 0.001282s | byte equality observed |
| list_construction.test | 10 | 0.001231s | 0.001221s | 0.001211s | byte equality observed |
| list_copy.test | 10 | 0.001240s | 0.001242s | 0.001216s | byte equality observed |
| list_hash.test | 10 | 0.001257s | 0.001290s | 0.001243s | byte equality observed |
| list_iterator.test | 10 | 0.001234s | 0.001221s | 0.001245s | byte equality observed |
| list_make.test | 10 | 0.001256s | 0.001213s | 0.001274s | byte equality observed |
| list_misc.test | 10 | 0.001277s | 0.001180s | 0.001284s | byte equality observed |
| list_mutate.test | 10 | 0.001228s | 0.001217s | 0.001296s | byte equality observed |
| list_nest.test | 9 | 0.001269s | 0.001255s | 0.001270s | byte equality observed |
| list_tie.test | 10 | 0.001297s | 0.001243s | 0.001260s | byte equality observed |
| list_value_at.test | 10 | 0.001277s | 0.001241s | 0.001231s | byte equality observed |
| make_fused.test | 10 | 0.001222s | 0.001240s | 0.001280s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001301s | 0.001238s | 0.001324s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001268s | 0.001252s | 0.001268s | byte equality observed |
| make_list.test | 10 | 0.001233s | 0.001195s | 0.001237s | byte equality observed |
| make_unfused.test | 10 | 0.001270s | 0.001184s | 0.001260s | byte equality observed |
| make_vector.test | 10 | 0.001241s | 0.001223s | 0.001269s | byte equality observed |
| map.test | 10 | 0.001271s | 0.001256s | 0.001268s | byte equality observed |
| map_comparison.test | 9 | 0.001272s | 0.001189s | 0.001235s | byte equality observed |
| map_construction.test | 10 | 0.001255s | 0.001226s | 0.001264s | byte equality observed |
| map_copy.test | 7 | 0.001249s | 0.001270s | 0.001289s | byte equality observed |
| map_misc.test | 10 | 0.001302s | 0.001267s | 0.001218s | byte equality observed |
| map_move.test | 10 | 0.001251s | 0.001260s | 0.001246s | byte equality observed |
| map_mutate.test | 10 | 0.001245s | 0.001203s | 0.001249s | byte equality observed |
| map_tie.test | 10 | 0.001270s | 0.001174s | 0.001232s | byte equality observed |
| move.test | 10 | 0.001276s | 0.001281s | 0.001243s | byte equality observed |
| nil.test | 9 | 0.001252s | 0.001254s | 0.001282s | byte equality observed |
| none.test | 10 | 0.001256s | 0.001272s | 0.001302s | byte equality observed |
| nview.test | 10 | 0.001254s | 0.001215s | 0.001255s | byte equality observed |
| pop_back.test | 8 | 0.001283s | 0.001245s | 0.001261s | byte equality observed |
| pop_front.test | 10 | 0.001253s | 0.001238s | 0.001317s | byte equality observed |
| push_back.test | 10 | 0.001260s | 0.001268s | 0.001268s | byte equality observed |
| push_front.test | 10 | 0.001287s | 0.001269s | 0.001286s | byte equality observed |
| quick.test | 10 | 0.000576s | 0.001224s | 0.001219s | byte equality observed |
| ref_vector.test | 10 | 0.001269s | 0.001217s | 0.001283s | byte equality observed |
| remove.test | 10 | 0.001279s | 0.001254s | 0.001310s | byte equality observed |
| remove_if.test | 10 | 0.001300s | 0.001268s | 0.001345s | byte equality observed |
| repetitive_view.test | 10 | 0.001244s | 0.001209s | 0.001286s | byte equality observed |
| replace.test | 10 | 0.001252s | 0.001273s | 0.001247s | byte equality observed |
| replace_if.test | 10 | 0.001291s | 0.001255s | 0.001274s | byte equality observed |
| reverse.test | 10 | 0.001292s | 0.001276s | 0.001314s | byte equality observed |
| reverse_fold.test | 10 | 0.001296s | 0.001301s | 0.001272s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001303s | 0.001239s | 0.001324s | byte equality observed |
| reverse_view.test | 10 | 0.001281s | 0.001270s | 0.001307s | byte equality observed |
| segmented_find.test | 10 | 0.001244s | 0.001224s | 0.001243s | byte equality observed |
| segmented_find_if.test | 10 | 0.001221s | 0.001291s | 0.001281s | byte equality observed |
| segmented_fold.test | 10 | 0.001328s | 0.001276s | 0.001276s | byte equality observed |
| segmented_for_each.test | 10 | 0.001263s | 0.001281s | 0.001309s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001322s | 0.001314s | 0.001299s | byte equality observed |
| set.test | 10 | 0.001335s | 0.001338s | 0.001285s | byte equality observed |
| single_view.test | 10 | 0.001272s | 0.001265s | 0.001294s | byte equality observed |
| std_array.test | 10 | 0.001232s | 0.001304s | 0.001242s | byte equality observed |
| std_pair.test | 10 | 0.001225s | 0.001262s | 0.001299s | byte equality observed |
| std_tuple.test | 10 | 0.001220s | 0.001277s | 0.001234s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001215s | 0.001200s | 0.001256s | byte equality observed |
| swap.test | 10 | 0.001268s | 0.001222s | 0.001285s | byte equality observed |
| transform.test | 10 | 0.001250s | 0.001235s | 0.001317s | byte equality observed |
| transform_view.test | 10 | 0.001294s | 0.001271s | 0.001313s | byte equality observed |
| tuple_comparison.test | 10 | 0.001265s | 0.001218s | 0.001252s | byte equality observed |
| tuple_construction.test | 9 | 0.001203s | 0.001255s | 0.001270s | byte equality observed |
| tuple_conversion.test | 10 | 0.001236s | 0.001238s | 0.001240s | byte equality observed |
| tuple_copy.test | 9 | 0.001250s | 0.001221s | 0.001282s | byte equality observed |
| tuple_element.test | 10 | 0.001273s | 0.001224s | 0.001272s | byte equality observed |
| tuple_hash.test | 10 | 0.001236s | 0.001291s | 0.001276s | byte equality observed |
| tuple_make.test | 10 | 0.001269s | 0.001214s | 0.001277s | byte equality observed |
| tuple_misc.test | 10 | 0.001308s | 0.001218s | 0.001260s | byte equality observed |
| tuple_mutate.test | 10 | 0.001251s | 0.001283s | 0.001239s | byte equality observed |
| tuple_nest.test | 10 | 0.001255s | 0.001215s | 0.001261s | byte equality observed |
| tuple_tie.test | 10 | 0.001237s | 0.001222s | 0.001291s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001246s | 0.001263s | 0.001267s | byte equality observed |
| tuple_traits__no_variadic.test | 9 | 0.001235s | 0.001252s | 0.001251s | byte equality observed |
| unfused.test | 10 | 0.001268s | 0.001234s | 0.001228s | byte equality observed |
| unfused_typed.test | 9 | 0.001236s | 0.001260s | 0.001302s | byte equality observed |
| vector_comparison.test | 10 | 0.001261s | 0.001225s | 0.001268s | byte equality observed |
| vector_construction.test | 9 | 0.001239s | 0.001211s | 0.001227s | byte equality observed |
| vector_conversion.test | 10 | 0.001228s | 0.001269s | 0.001242s | byte equality observed |
| vector_copy.test | 10 | 0.001275s | 0.001227s | 0.001244s | byte equality observed |
| vector_hash.test | 10 | 0.001263s | 0.001257s | 0.001248s | byte equality observed |
| vector_iterator.test | 9 | 0.001275s | 0.001258s | 0.001217s | byte equality observed |
| vector_make.test | 10 | 0.001259s | 0.001253s | 0.001274s | byte equality observed |
| vector_misc.test | 10 | 0.001239s | 0.001216s | 0.001316s | byte equality observed |
| vector_move.test | 10 | 0.001259s | 0.001241s | 0.001264s | byte equality observed |
| vector_mutate.test | 10 | 0.001228s | 0.001271s | 0.001250s | byte equality observed |
| vector_n.test | 10 | 0.001268s | 0.001250s | 0.001297s | byte equality observed |
| vector_nest.test | 10 | 0.001236s | 0.001228s | 0.001302s | byte equality observed |
| vector_tie.test | 10 | 0.001213s | 0.001265s | 0.001257s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001271s | 0.001246s | 0.001259s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001230s | 0.001262s | 0.001238s | byte equality observed |
| vector_value_at.test | 10 | 0.001294s | 0.001238s | 0.001280s | byte equality observed |
| zip.test | 10 | 0.001233s | 0.001267s | 0.001215s | byte equality observed |
| zip2.test | 10 | 0.001257s | 0.001268s | 0.001210s | byte equality observed |
| zip_ignore.test | 10 | 0.001256s | 0.001203s | 0.001240s | byte equality observed |
| zip_view.test | 10 | 0.001283s | 0.001200s | 0.001270s | byte equality observed |
| zip_view2.test | 10 | 0.001258s | 0.001223s | 0.001257s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001207s | 0.001266s | 0.001258s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
