# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.358627 | 0.770510 | 1.030711 | 0.001614 | 0.001640 | 0.001448 |
| any.test | RUN | 0.351410 | 0.743747 | 0.991857 | 0.001812 | 0.001574 | 0.001664 |
| clear.test | RUN | 0.252166 | 0.680256 | 0.805342 | 0.001552 | 0.001924 | 0.001810 |
| copy.test | RUN | 0.215143 | 0.499227 | 0.660770 | 0.001626 | 0.001961 | 0.001661 |
| count.test | RUN | 0.246608 | 0.566273 | 0.742088 | 0.001826 | 0.002004 | 0.001802 |
| count_if.test | RUN | 0.226911 | 0.514931 | 0.673918 | 0.001632 | 0.001793 | 0.001626 |
| erase.test | RUN | 0.326965 | 0.934463 | 1.070520 | 0.001582 | 0.001997 | 0.001764 |
| erase_key.test | RUN | 0.311259 | 0.917335 | 1.025173 | 0.001851 | 0.001907 | 0.001342 |
| filter.test | RUN | 0.284729 | 0.742665 | 0.942130 | 0.001892 | 0.002005 | 0.001786 |
| filter_if.test | RUN | 0.323153 | 0.889878 | 1.107239 | 0.001604 | 0.001882 | 0.001780 |
| find.test | RUN | 0.283334 | 0.632280 | 0.836062 | 0.001609 | 0.001609 | 0.001528 |
| find_if.test | RUN | 0.260102 | 0.580053 | 0.770502 | 0.001823 | 0.001957 | 0.001718 |
| fold.test | RUN | 0.287694 | 0.701846 | 0.969416 | 0.001854 | 0.001961 | 0.001787 |
| for_each.test | RUN | 0.261437 | 0.643966 | 0.816296 | 0.001686 | 0.002043 | 0.001712 |
| insert.test | RUN | 0.371882 | 1.162677 | 1.310218 | 0.001659 | 0.001678 | 0.001774 |
| insert_range.test | RUN | 0.380835 | 1.140596 | 1.329907 | 0.001649 | 0.001736 | 0.001804 |
| iter_fold.test | RUN | 0.445364 | 1.140726 | 1.570512 | 0.001854 | 0.002031 | 0.001826 |
| move.test | RUN | 0.225029 | 0.528626 | 0.686090 | 0.001794 | 0.002006 | 0.001723 |
| none.test | RUN | 0.358208 | 0.756730 | 1.008132 | 0.001601 | 0.001768 | 0.001820 |
| pop_back.test | RUN | 0.361334 | 0.999748 | 1.165702 | 0.001577 | 0.001851 | 0.001644 |
| pop_front.test | RUN | 0.308355 | 0.802425 | 0.947417 | 0.001830 | 0.002074 | 0.001826 |
| push_back.test | RUN | 0.370570 | 1.165864 | 1.261216 | 0.001719 | 0.002062 | 0.001378 |
| push_front.test | RUN | 0.326631 | 0.937434 | 1.067636 | 0.002024 | 0.001874 | 0.001523 |
| remove.test | RUN | 0.352948 | 1.102634 | 1.292773 | 0.001615 | 0.001838 | 0.001703 |
| remove_if.test | RUN | 0.329635 | 0.939405 | 1.076508 | 0.001834 | 0.002016 | 0.001660 |
| replace.test | RUN | 0.307591 | 0.868526 | 0.986375 | 0.001864 | 0.002018 | 0.001441 |
| replace_if.test | RUN | 0.311341 | 0.869297 | 0.971052 | 0.001879 | 0.001870 | 0.001658 |
| reverse_fold.test | RUN | 0.492456 | 1.260658 | 1.713181 | 0.001857 | 0.001667 | 0.001864 |
| reverse_iter_fold.test | RUN | 0.504832 | 1.312432 | 1.811392 | 0.001770 | 0.001783 | 0.001794 |
| reverse.test | RUN | 0.304369 | 0.911823 | 1.038286 | 0.001742 | 0.002078 | 0.001582 |
| segmented_for_each.test | RUN | 0.550410 | 1.789118 | 2.044347 | 0.001902 | 0.002056 | 0.001570 |
| segmented_find.test | RUN | 0.339410 | 0.898539 | 1.171879 | 0.001574 | 0.001854 | 0.001751 |
| segmented_find_if.test | RUN | 0.335789 | 0.908265 | 1.162116 | 0.001912 | 0.001891 | 0.001795 |
| segmented_fold.test | RUN | 0.409035 | 1.222952 | 1.457777 | 0.001942 | 0.002014 | 0.001820 |
| transform.test | RUN | 0.320052 | 0.965601 | 1.075941 | 0.001585 | 0.001846 | 0.001898 |
| join.test | RUN | 0.244355 | 0.597114 | 0.761223 | 0.001750 | 0.001842 | 0.001678 |
| zip.test | RUN | 0.427948 | 1.160022 | 1.430075 | 0.001730 | 0.001953 | 0.001750 |
| zip2.test | RUN | 0.414084 | 1.081368 | 1.385845 | 0.001689 | 0.001849 | 0.001574 |
| zip_ignore.test | RUN | 0.316689 | 0.712574 | 0.923959 | 0.001559 | 0.001590 | 0.001467 |
| flatten.test | RUN | 0.276964 | 0.815118 | 0.929297 | 0.001448 | 0.002073 | 0.001694 |
| ticket-5490.test | COMPILE | 0.155722 | 0.346656 | 0.398189 | — | — | — |
| as_deque.test | RUN | 0.290533 | 0.774011 | 1.008180 | 0.001748 | 0.001887 | 0.001892 |
| as_list.test | RUN | 0.324253 | 0.938832 | 1.057777 | 0.001854 | 0.001790 | 0.001713 |
| as_map.test | RUN | 0.321026 | 0.937519 | 1.058023 | 0.001380 | 0.001986 | 0.001724 |
| as_map_assoc.test | RUN | 0.322637 | 0.867515 | 1.007549 | 0.001783 | 0.001619 | 0.001725 |
| as_set.test | RUN | 0.379518 | 1.085363 | 1.260295 | 0.002080 | 0.001630 | 0.001780 |
| as_vector.test | RUN | 0.331463 | 0.965941 | 1.079206 | 0.001786 | 0.001521 | 0.001811 |
| boost_tuple.test | RUN | 0.336850 | 0.925977 | 1.095019 | 0.001393 | 0.001839 | 0.001490 |
| boost_tuple_iterator.test | RUN | 0.237541 | 0.548557 | 0.675729 | 0.001795 | 0.001797 | 0.001814 |
| cons.test | RUN | 0.425200 | 1.062280 | 1.291819 | 0.001780 | 0.001675 | 0.001632 |
| convert_boost_tuple.test | RUN | 0.264591 | 0.802855 | 0.851749 | 0.001860 | 0.001652 | 0.001628 |
| convert_deque.test | RUN | 0.265363 | 0.800850 | 0.855866 | 0.001435 | 0.001555 | 0.001535 |
| convert_list.test | RUN | 0.263517 | 0.819977 | 0.854272 | 0.001550 | 0.001617 | 0.001704 |
| convert_std_pair.test | RUN | 0.272575 | 0.807528 | 0.861337 | 0.001686 | 0.001835 | 0.001641 |
| convert_std_tuple.test | RUN | 0.259676 | 0.788664 | 0.853839 | 0.001770 | 0.001663 | 0.001714 |
| convert_vector.test | RUN | 0.259970 | 0.804221 | 0.854067 | 0.001305 | 0.001810 | 0.001421 |
| filter_view.test | RUN | 0.315654 | 0.855226 | 0.986646 | 0.001839 | 0.001866 | 0.001866 |
| hash.test | RUN | 0.312614 | 0.745666 | 0.981506 | 0.001538 | 0.001955 | 0.001633 |
| io.test | RUN | 0.326949 | 1.072479 | 1.162488 | 0.001751 | 0.002041 | 0.002060 |
| iterator_range.test | RUN | 0.287266 | 0.833199 | 0.952742 | 0.001904 | 0.001924 | 0.001750 |
| joint_view.test | RUN | 0.402623 | 1.341195 | 1.430377 | 0.001888 | 0.002031 | 0.001834 |
| list_comparison.test | RUN | 0.231696 | 0.576559 | 0.694546 | 0.001780 | 0.001603 | 0.001514 |
| list_construction.test | RUN | 0.228166 | 0.548285 | 0.661496 | 0.001515 | 0.001834 | 0.001472 |
| list_copy.test | RUN | 0.342388 | 1.021160 | 1.198181 | 0.001780 | 0.001732 | 0.001728 |
| list_iterator.test | RUN | 0.234722 | 0.571675 | 0.693450 | 0.001780 | 0.001653 | 0.001659 |
| list_hash.test | RUN | 0.311414 | 1.031492 | 0.957131 | 0.001578 | 0.001845 | 0.001732 |
| list_make.test | RUN | 0.237974 | 0.612960 | 0.728333 | 0.001847 | 0.001880 | 0.001841 |
| list_misc.test | RUN | 0.302814 | 0.716000 | 0.895059 | 0.001559 | 0.001795 | 0.001545 |
| list_mutate.test | RUN | 0.225281 | 0.484915 | 0.593748 | 0.001652 | 0.001915 | 0.001760 |
| list_nest.test | RUN | 0.430098 | 1.328550 | 1.629108 | 0.001528 | 0.001718 | 0.001597 |
| list_tie.test | RUN | 0.229141 | 0.561032 | 0.663759 | 0.001530 | 0.001906 | 0.001773 |
| list_value_at.test | RUN | 0.229322 | 0.508186 | 0.642857 | 0.001299 | 0.001968 | 0.001785 |
| deque_comparison.test | RUN | 0.229106 | 0.579894 | 0.716440 | 0.001596 | 0.001938 | 0.001555 |
| deque_construction.test | RUN | 0.228725 | 0.544451 | 0.676676 | 0.001807 | 0.002000 | 0.001654 |
| deque_copy.test | RUN | 0.321700 | 0.920545 | 1.124295 | 0.001482 | 0.001746 | 0.001679 |
| deque_iterator.test | RUN | 0.225570 | 0.590619 | 0.670016 | 0.001614 | 0.001790 | 0.001704 |
| deque_hash.test | RUN | 0.307902 | 1.009511 | 0.991586 | 0.001519 | 0.001808 | 0.001814 |
| deque_is_constructible.test | COMPILE | 0.124492 | 0.261202 | 0.324185 | — | — | — |
| deque_make.test | RUN | 0.228161 | 0.576705 | 0.704483 | 0.001820 | 0.002098 | 0.001811 |
| deque_misc.test | RUN | 0.302234 | 0.723580 | 0.918345 | 0.001582 | 0.001728 | 0.001588 |
| deque_move.test | RUN | 0.230649 | 0.580693 | 0.650869 | 0.001372 | 0.001876 | 0.001973 |
| deque_mutate.test | RUN | 0.207797 | 0.478223 | 0.630268 | 0.001732 | 0.001917 | 0.001486 |
| deque_nest.test | RUN | 0.627377 | 2.202206 | 2.648713 | 0.001758 | 0.001879 | 0.001663 |
| deque_tie.test | RUN | 0.215667 | 0.496741 | 0.676760 | 0.001805 | 0.002002 | 0.001692 |
| deque_value_at.test | RUN | 0.208445 | 0.524345 | 0.634594 | 0.001220 | 0.002050 | 0.001646 |
| front_extended_deque.test | RUN | 0.315644 | 0.727244 | 0.950869 | 0.001820 | 0.001864 | 0.001776 |
| back_extended_deque.test | RUN | 0.310998 | 0.763589 | 0.924095 | 0.001448 | 0.001945 | 0.001312 |
| make_list.test | RUN | 0.232647 | 0.588098 | 0.761953 | 0.001729 | 0.001952 | 0.001776 |
| make_vector.test | RUN | 0.239139 | 0.580635 | 0.693940 | 0.001844 | 0.001979 | 0.001906 |
| map.test | RUN | 0.318128 | 0.900736 | 1.046612 | 0.001842 | 0.001869 | 0.001475 |
| map_comparison.test | RUN | 0.231407 | 0.579382 | 0.690283 | 0.001502 | 0.001945 | 0.001796 |
| map_construction.test | RUN | 0.233327 | 0.568279 | 0.714333 | 0.001568 | 0.001843 | 0.001650 |
| map_copy.test | RUN | 0.276274 | 0.729068 | 0.863003 | 0.001773 | 0.004858 | 0.001872 |
| map_misc.test | RUN | 0.295904 | 0.732331 | 0.905884 | 0.001588 | 0.001685 | 0.001745 |
| map_move.test | RUN | 0.233690 | 0.618235 | 0.694989 | 0.001815 | 0.001336 | 0.001812 |
| map_mutate.test | RUN | 0.215865 | 0.520117 | 0.623632 | 0.001490 | 0.001975 | 0.001472 |
| map_tie.test | RUN | 0.222607 | 0.492786 | 0.638438 | 0.001744 | 0.001808 | 0.001781 |
| nil.test | RUN | 0.149222 | 0.336281 | 0.444745 | 0.001842 | 0.001948 | 0.001662 |
| nview.test | RUN | 0.299772 | 0.717722 | 0.896457 | 0.001800 | 0.001912 | 0.001774 |
| reverse_view.test | RUN | 0.384693 | 1.155096 | 1.312141 | 0.001882 | 0.001648 | 0.001758 |
| segmented_iterator_range.test | RUN | 0.461671 | 1.415418 | 1.661652 | 0.001648 | 0.002089 | 0.001770 |
| set.test | RUN | 0.277215 | 0.808246 | 0.917980 | 0.001865 | 0.001865 | 0.001765 |
| single_view.test | RUN | 0.260086 | 0.718531 | 0.833401 | 0.001786 | 0.001779 | 0.001571 |
| std_pair.test | RUN | 0.327964 | 0.920222 | 1.074464 | 0.001778 | 0.002044 | 0.001575 |
| boost_array.test | RUN | 0.282727 | 0.615270 | 0.798216 | 0.001752 | 0.001895 | 0.001618 |
| array.test | RUN | 0.277675 | 0.635849 | 0.799641 | 0.001708 | 0.001972 | 0.001789 |
| std_array.test | RUN | 0.287752 | 0.646511 | 0.812158 | 0.001752 | 0.001853 | 0.001558 |
| tuple_comparison.test | RUN | 0.249615 | 0.609193 | 0.745689 | 0.001820 | 0.001914 | 0.001748 |
| tuple_construction.test | RUN | 0.256533 | 0.616152 | 0.739798 | 0.001810 | 0.001806 | 0.001632 |
| tuple_conversion.test | RUN | 0.548641 | 1.855902 | 2.389971 | 0.001813 | 0.001986 | 0.001657 |
| tuple_copy.test | RUN | 0.376823 | 1.084854 | 1.294603 | 0.001311 | 0.002032 | 0.001433 |
| tuple_element.test | RUN | 0.243808 | 0.541336 | 0.719004 | 0.001522 | 0.001895 | 0.001654 |
| tuple_make.test | RUN | 0.258204 | 0.640907 | 0.785778 | 0.001854 | 0.002034 | 0.001910 |
| tuple_misc.test | RUN | 0.327712 | 0.761456 | 0.971881 | 0.001801 | 0.001529 | 0.001823 |
| tuple_mutate.test | RUN | 0.228820 | 0.527650 | 0.694403 | 0.001826 | 0.001678 | 0.001780 |
| tuple_nest.test | RUN | 0.930275 | 3.822038 | 4.644834 | 0.001684 | 0.001699 | 0.001776 |
| tuple_hash.test | RUN | 0.324547 | 1.096111 | 1.017523 | 0.001870 | 0.001946 | 0.001779 |
| tuple_tie.test | RUN | 0.242014 | 0.619547 | 0.753412 | 0.001620 | 0.001752 | 0.001654 |
| tuple_traits__maybe_variadic.test | RUN | 0.271417 | 0.752045 | 0.800472 | 0.001760 | 0.001730 | 0.001848 |
| tuple_traits__no_variadic.test | RUN | 0.282049 | 0.712115 | 0.866731 | 0.001813 | 0.001996 | 0.001636 |
| transform_view.test | RUN | 0.373136 | 1.177149 | 1.347772 | 0.001898 | 0.001888 | 0.001667 |
| identity_view.test | RUN | 0.360315 | 1.070974 | 1.268088 | 0.001476 | 0.001994 | 0.001834 |
| vector_comparison.test | RUN | 0.233449 | 0.585705 | 0.710160 | 0.001849 | 0.001761 | 0.001820 |
| vector_construction.test | RUN | 0.235785 | 0.556393 | 0.752309 | 0.001846 | 0.001898 | 0.001759 |
| vector_conversion.test | RUN | 0.655234 | 2.435735 | 3.092137 | 0.001832 | 0.001819 | 0.001830 |
| vector_copy.test | RUN | 0.350042 | 1.035286 | 1.310542 | 0.001690 | 0.001942 | 0.001584 |
| vector_iterator.test | RUN | 0.222625 | 0.577407 | 0.652643 | 0.001909 | 0.002082 | 0.001747 |
| vector_make.test | RUN | 0.232950 | 0.591042 | 0.711295 | 0.001802 | 0.001829 | 0.001808 |
| vector_misc.test | RUN | 0.307511 | 0.725328 | 0.899665 | 0.001665 | 0.001843 | 0.001754 |
| vector_move.test | RUN | 0.236369 | 0.617873 | 0.718089 | 0.001608 | 0.001732 | 0.001806 |
| vector_mutate.test | RUN | 0.212817 | 0.490438 | 0.630633 | 0.001398 | 0.001797 | 0.001592 |
| vector_n.test | RUN | 0.265211 | 0.627584 | 0.841421 | 0.001902 | 0.001958 | 0.001834 |
| vector_nest.test | RUN | 0.910741 | 3.955291 | 4.687239 | 0.001803 | 0.001642 | 0.001809 |
| vector_hash.test | RUN | 0.303645 | 1.034987 | 0.957835 | 0.001700 | 0.001998 | 0.001672 |
| vector_tie.test | RUN | 0.222110 | 0.545790 | 0.702650 | 0.001749 | 0.001742 | 0.001460 |
| vector_traits__maybe_variadic.test | RUN | 0.247630 | 0.649568 | 0.747561 | 0.001814 | 0.001926 | 0.001782 |
| vector_traits__no_variadic.test | RUN | 0.258674 | 0.661669 | 0.768376 | 0.001744 | 0.001910 | 0.001634 |
| vector_value_at.test | RUN | 0.213796 | 0.500848 | 0.664176 | 0.001470 | 0.001884 | 0.001555 |
| zip_view.test | RUN | 0.457832 | 1.208829 | 1.687933 | 0.001770 | 0.001440 | 0.001844 |
| zip_view2.test | RUN | 0.355529 | 0.972183 | 1.271267 | 0.001350 | 0.001966 | 0.001417 |
| zip_view_ignore.test | RUN | 0.346742 | 0.915954 | 1.148485 | 0.001285 | 0.001896 | 0.001637 |
| repetitive_view.test | RUN | 0.572825 | 1.663374 | 2.086911 | 0.001563 | 0.001918 | 0.001453 |
| deduce_sequence.test | RUN | 0.277701 | 0.711322 | 0.847792 | 0.001750 | 0.001825 | 0.001761 |
| adapt_adt_named.test | RUN | 0.327583 | 0.980907 | 1.097340 | 0.001684 | 0.001981 | 0.001776 |
| adapt_adt_named_empty.test | RUN | 0.287166 | 0.756153 | 0.862736 | 0.001614 | 0.001734 | 0.001512 |
| adapt_adt.test | RUN | 0.363542 | 1.244135 | 1.277295 | 0.001637 | 0.001971 | 0.001516 |
| adapt_adt_empty.test | RUN | 0.281353 | 0.749715 | 0.906189 | 0.001822 | 0.001758 | 0.001812 |
| adapt_assoc_adt_named.test | RUN | 0.366506 | 0.954078 | 1.128358 | 0.001591 | 0.001841 | 0.001707 |
| adapt_assoc_adt_named_empty.test | RUN | 0.285456 | 0.729893 | 0.869286 | 0.001716 | 0.001745 | 0.001564 |
| adapt_assoc_adt.test | RUN | 0.378855 | 1.046216 | 1.193192 | 0.001782 | 0.002058 | 0.001619 |
| adapt_assoc_adt_empty.test | RUN | 0.284855 | 0.765074 | 0.860726 | 0.001712 | 0.002101 | 0.001743 |
| adapt_assoc_struct_named.test | RUN | 0.361584 | 0.940561 | 1.131462 | 0.001687 | 0.001718 | 0.001828 |
| adapt_assoc_struct_named_empty.test | RUN | 0.284003 | 0.745888 | 0.850638 | 0.001581 | 0.002036 | 0.001733 |
| adapt_assoc_struct.test | RUN | 0.329543 | 0.909783 | 1.052941 | 0.001638 | 0.002070 | 0.001544 |
| adapt_assoc_struct_empty.test | RUN | 0.282619 | 0.734728 | 0.877059 | 0.001616 | 0.002005 | 0.001616 |
| adapt_assoc_tpl_adt.test | RUN | 0.390430 | 1.046042 | 1.229270 | 0.001727 | 0.001861 | 0.001767 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.289579 | 0.766378 | 0.868121 | 0.001815 | 0.002005 | 0.001796 |
| adapt_assoc_tpl_struct.test | RUN | 0.315645 | 0.899519 | 1.008068 | 0.001490 | 0.001579 | 0.001521 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.285612 | 0.763244 | 0.867737 | 0.001696 | 0.001780 | 0.001673 |
| adapt_struct_named.test | RUN | 0.330227 | 0.920352 | 1.017136 | 0.001852 | 0.001853 | 0.003061 |
| adapt_struct_named_empty.test | RUN | 0.285936 | 0.763557 | 0.857281 | 0.001579 | 0.001619 | 0.001643 |
| adapt_struct.test | RUN | 0.354516 | 1.045490 | 1.186304 | 0.001876 | 0.001814 | 0.001872 |
| adapt_struct_empty.test | RUN | 0.286132 | 0.763367 | 0.882180 | 0.001815 | 0.001998 | 0.001730 |
| adapt_tpl_adt.test | RUN | 0.356360 | 1.198551 | 1.220343 | 0.001807 | 0.001897 | 0.001535 |
| adapt_tpl_adt_empty.test | RUN | 0.280248 | 0.763715 | 0.874443 | 0.001719 | 0.002041 | 0.001838 |
| adapt_tpl_struct.test | RUN | 0.305377 | 0.839136 | 0.973290 | 0.001788 | 0.001745 | 0.001646 |
| adapt_tpl_struct_empty.test | RUN | 0.283900 | 0.781037 | 0.873726 | 0.001567 | 0.004988 | 0.001708 |
| adt_attribute_proxy.test | RUN | 0.327878 | 0.756192 | 0.936096 | 0.001548 | 0.001932 | 0.001844 |
| define_struct.test | RUN | 0.394768 | 1.077633 | 1.238395 | 0.001772 | 0.001835 | 0.001664 |
| define_struct_empty.test | RUN | 0.342389 | 0.863258 | 1.033282 | 0.001830 | 0.001804 | 0.001516 |
| define_struct_move.test | RUN | 0.215610 | 0.496737 | 0.583876 | 0.001672 | 0.002104 | 0.001816 |
| define_struct_inline.test | RUN | 0.420127 | 1.272909 | 1.373236 | 0.001798 | 0.001850 | 0.001877 |
| define_struct_inline_empty.test | RUN | 0.346932 | 0.886980 | 1.028228 | 0.001525 | 0.001841 | 0.001606 |
| define_struct_inline_move.test | RUN | 0.228252 | 0.467668 | 0.621095 | 0.001746 | 0.001614 | 0.001601 |
| define_assoc_struct.test | RUN | 0.376426 | 0.997720 | 1.164375 | 0.001724 | 0.001988 | 0.001866 |
| define_assoc_struct_empty.test | RUN | 0.348416 | 0.837420 | 1.019328 | 0.001806 | 0.001858 | 0.001898 |
| define_assoc_struct_move.test | RUN | 0.217310 | 0.490304 | 0.610890 | 0.001698 | 0.001872 | 0.001675 |
| define_tpl_struct.test | RUN | 0.378152 | 0.995769 | 1.181313 | 0.001800 | 0.001980 | 0.001558 |
| define_tpl_struct_empty.test | RUN | 0.338992 | 0.872732 | 1.033703 | 0.001627 | 0.001916 | 0.001702 |
| define_tpl_struct_move.test | RUN | 0.221907 | 0.470119 | 0.627393 | 0.001731 | 0.001833 | 0.001855 |
| define_tpl_struct_inline.test | RUN | 0.388343 | 1.169511 | 1.272568 | 0.001820 | 0.002008 | 0.001563 |
| define_tpl_struct_inline_empty.test | RUN | 0.325014 | 0.833785 | 1.004283 | 0.001702 | 0.001706 | 0.001878 |
| define_tpl_struct_inline_move.test | RUN | 0.221574 | 0.496021 | 0.633033 | 0.001331 | 0.001866 | 0.001584 |
| define_assoc_tpl_struct.test | RUN | 0.327153 | 0.997408 | 1.195829 | 0.001318 | 0.001916 | 0.001810 |
| define_assoc_tpl_struct_empty.test | RUN | 0.336990 | 0.831257 | 1.016568 | 0.001862 | 0.001860 | 0.001634 |
| define_assoc_tpl_struct_move.test | RUN | 0.213131 | 0.476741 | 0.614176 | 0.001833 | 0.001819 | 0.001792 |
| std_tuple.test | RUN | 0.219116 | 0.527227 | 0.698475 | 0.001443 | 0.001796 | 0.001526 |
| std_tuple_iterator.test | RUN | 0.217930 | 0.559108 | 0.680687 | 0.001361 | 0.001904 | 0.001804 |
| ref_vector.test | RUN | 0.255519 | 0.579717 | 0.743638 | 0.001746 | 0.001792 | 0.001902 |
| flatten_view.test | RUN | 0.271527 | 0.717077 | 0.889314 | 0.001276 | 0.001815 | 0.001808 |
| github-159.test | COMPILE | 0.121136 | 0.272139 | 0.336234 | — | — | — |
| github-176.test | RUN | 0.258032 | 0.641695 | 0.732947 | 0.001396 | 0.001844 | 0.001794 |
| size.test | COMPILE | 0.214755 | 0.440834 | 0.590287 | — | — | — |
| fused.test | RUN | 0.304083 | 0.684417 | 0.901346 | 0.001636 | 0.001776 | 0.001924 |
| fused_function_object.test | RUN | 0.218109 | 0.531851 | 0.642940 | 0.001836 | 0.001742 | 0.001825 |
| fused_procedure.test | RUN | 0.282095 | 0.629524 | 0.831388 | 0.001488 | 0.001981 | 0.001703 |
| unfused.test | RUN | 0.235259 | 0.533755 | 0.684893 | 0.001546 | 0.001836 | 0.001624 |
| unfused_typed.test | RUN | 0.232915 | 0.572659 | 0.725141 | 0.001724 | 0.001744 | 0.001667 |
| make_fused.test | RUN | 0.300867 | 0.681163 | 0.867837 | 0.001596 | 0.001786 | 0.001729 |
| make_fused_function_object.test | RUN | 0.224735 | 0.502948 | 0.674595 | 0.001726 | 0.001778 | 0.001722 |
| make_fused_procedure.test | RUN | 0.293259 | 0.656697 | 0.859094 | 0.001534 | 0.001800 | 0.001783 |
| make_unfused.test | RUN | 0.233492 | 0.515645 | 0.656854 | 0.001886 | 0.001991 | 0.001868 |
| invoke.test | RUN | 0.604412 | 1.889794 | 2.356538 | 0.001512 | 0.001555 | 0.001831 |
| invoke_function_object.test | RUN | 0.276912 | 0.678731 | 0.872949 | 0.001608 | 0.001838 | 0.001871 |
| invoke_procedure.test | RUN | 0.468458 | 1.407042 | 1.672111 | 0.001770 | 0.001872 | 0.001944 |
| swap.test | RUN | 0.355499 | 0.845756 | 1.111352 | 0.001795 | 0.002032 | 0.001638 |
| is_sequence.test | COMPILE | 0.059858 | 0.125554 | 0.134741 | — | — | — |
| is_view.test | COMPILE | 0.061147 | 0.124208 | 0.140741 | — | — | — |
| pair_deque.test | COMPILE | 0.127873 | 0.265396 | 0.355327 | — | — | — |
| pair_list.test | COMPILE | 0.124866 | 0.269669 | 0.340388 | — | — | — |
| pair_map.test | COMPILE | 0.129871 | 0.283212 | 0.333842 | — | — | — |
| pair_set.test | COMPILE | 0.134857 | 0.279757 | 0.345189 | — | — | — |
| pair_vector.test | COMPILE | 0.129397 | 0.271073 | 0.325471 | — | — | — |
| pair_nest.test | COMPILE | 0.053060 | 0.110850 | 0.130751 | — | — | — |
| index_sequence.test | COMPILE | 0.045850 | 0.079211 | 0.103608 | — | — | — |
| and.test | COMPILE | 0.035762 | 0.062675 | 0.068654 | — | — | — |
| tag_of.test | COMPILE | 0.058521 | 0.118998 | 0.125584 | — | — | — |
| unused.test | COMPILE | 0.030237 | 0.075087 | 0.077382 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.058131 | 0.106969 | 0.116173 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.036612 | 0.107732 | 0.092966 | — | — | — |
| quick.test | RUN | 0.172367 | 0.403958 | 0.449989 | 0.000566 | 0.001383 | 0.001308 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.000×, 1.004× | 1.012× |
| clang | 1.002× | 0.994×, 1.011× | 0.982× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001025s | 0.001032s | 0.001024s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001003s | 0.001047s | 0.001040s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001041s | 0.001041s | 0.001028s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001017s | 0.001057s | 0.001035s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001016s | 0.001044s | 0.001011s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001014s | 0.001030s | 0.001037s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001016s | 0.001015s | 0.001022s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001027s | 0.001024s | 0.001017s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001033s | 0.001018s | 0.001032s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001029s | 0.001041s | 0.001025s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001028s | 0.001003s | 0.001008s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001034s | 0.001015s | 0.001025s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001031s | 0.001035s | 0.001018s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001014s | 0.001014s | 0.000994s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001052s | 0.001051s | 0.001063s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001012s | 0.000998s | 0.001030s | byte equality observed |
| adapt_struct.test | 10 | 0.001045s | 0.001027s | 0.001073s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001022s | 0.001008s | 0.001026s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001005s | 0.001029s | 0.001050s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001022s | 0.001020s | 0.001053s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001018s | 0.001043s | 0.001057s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001039s | 0.001025s | 0.001045s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001040s | 0.001026s | 0.001045s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001034s | 0.001047s | 0.001024s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001007s | 0.001016s | 0.001015s | byte equality observed |
| all.test | 10 | 0.000981s | 0.001021s | 0.000997s | byte equality observed |
| any.test | 10 | 0.001016s | 0.001050s | 0.001027s | byte equality observed |
| array.test | 10 | 0.001002s | 0.001005s | 0.001012s | byte equality observed |
| as_deque.test | 10 | 0.000992s | 0.000994s | 0.001053s | byte equality observed |
| as_list.test | 10 | 0.001066s | 0.001053s | 0.001055s | byte equality observed |
| as_map.test | 10 | 0.001041s | 0.001031s | 0.001025s | byte equality observed |
| as_map_assoc.test | 10 | 0.001036s | 0.001051s | 0.001028s | byte equality observed |
| as_set.test | 10 | 0.001053s | 0.001022s | 0.001057s | byte equality observed |
| as_vector.test | 10 | 0.001044s | 0.001020s | 0.001047s | byte equality observed |
| back_extended_deque.test | 10 | 0.001007s | 0.001027s | 0.000980s | byte equality observed |
| boost_array.test | 10 | 0.001050s | 0.000999s | 0.001012s | byte equality observed |
| boost_tuple.test | 10 | 0.001028s | 0.001035s | 0.001035s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001018s | 0.001020s | 0.000990s | byte equality observed |
| clear.test | 10 | 0.001039s | 0.001013s | 0.001016s | byte equality observed |
| cons.test | 10 | 0.001037s | 0.001021s | 0.001044s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001000s | 0.001030s | 0.000991s | byte equality observed |
| convert_deque.test | 10 | 0.001003s | 0.001033s | 0.001000s | byte equality observed |
| convert_list.test | 10 | 0.001020s | 0.001004s | 0.000981s | byte equality observed |
| convert_std_pair.test | 10 | 0.001015s | 0.001028s | 0.001033s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000999s | 0.000990s | 0.001029s | byte equality observed |
| convert_vector.test | 10 | 0.000994s | 0.001044s | 0.001005s | byte equality observed |
| copy.test | 10 | 0.001007s | 0.001041s | 0.000999s | byte equality observed |
| count.test | 10 | 0.001000s | 0.001012s | 0.000988s | byte equality observed |
| count_if.test | 10 | 0.000993s | 0.001024s | 0.001038s | byte equality observed |
| deduce_sequence.test | 10 | 0.001010s | 0.001006s | 0.000988s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001026s | 0.001028s | 0.001023s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001015s | 0.001036s | 0.001010s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001015s | 0.001005s | 0.001027s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001021s | 0.001034s | 0.001029s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001027s | 0.001040s | 0.001017s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000997s | 0.000991s | 0.000997s | byte equality observed |
| define_struct.test | 10 | 0.001035s | 0.001023s | 0.000995s | byte equality observed |
| define_struct_empty.test | 10 | 0.000999s | 0.000998s | 0.001006s | byte equality observed |
| define_struct_inline.test | 10 | 0.001044s | 0.001027s | 0.001024s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001030s | 0.001078s | 0.001010s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001008s | 0.001041s | 0.001001s | byte equality observed |
| define_struct_move.test | 10 | 0.001026s | 0.001006s | 0.001027s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001016s | 0.001033s | 0.001000s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001062s | 0.001052s | 0.001025s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001033s | 0.001052s | 0.001052s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001001s | 0.001038s | 0.001031s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000996s | 0.001008s | 0.001022s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000993s | 0.001019s | 0.000983s | byte equality observed |
| deque_comparison.test | 10 | 0.001008s | 0.000983s | 0.000985s | byte equality observed |
| deque_construction.test | 10 | 0.000998s | 0.000998s | 0.000985s | byte equality observed |
| deque_copy.test | 10 | 0.000990s | 0.001029s | 0.000995s | byte equality observed |
| deque_hash.test | 10 | 0.000999s | 0.001018s | 0.001028s | byte equality observed |
| deque_iterator.test | 10 | 0.001001s | 0.000991s | 0.001037s | byte equality observed |
| deque_make.test | 10 | 0.000999s | 0.001003s | 0.000988s | byte equality observed |
| deque_misc.test | 10 | 0.001018s | 0.001046s | 0.001008s | byte equality observed |
| deque_move.test | 10 | 0.001013s | 0.001018s | 0.001029s | byte equality observed |
| deque_mutate.test | 10 | 0.001013s | 0.001008s | 0.001005s | byte equality observed |
| deque_nest.test | 10 | 0.001017s | 0.001042s | 0.000987s | byte equality observed |
| deque_tie.test | 10 | 0.001007s | 0.001007s | 0.001008s | byte equality observed |
| deque_value_at.test | 10 | 0.000981s | 0.001019s | 0.001002s | byte equality observed |
| erase.test | 10 | 0.001017s | 0.001035s | 0.001014s | byte equality observed |
| erase_key.test | 10 | 0.001025s | 0.001046s | 0.001020s | byte equality observed |
| filter.test | 10 | 0.001040s | 0.001025s | 0.001001s | byte equality observed |
| filter_if.test | 10 | 0.001040s | 0.001027s | 0.001022s | byte equality observed |
| filter_view.test | 10 | 0.001053s | 0.001044s | 0.001022s | byte equality observed |
| find.test | 10 | 0.001061s | 0.001040s | 0.001043s | byte equality observed |
| find_if.test | 10 | 0.001023s | 0.001040s | 0.001031s | byte equality observed |
| flatten.test | 10 | 0.001048s | 0.001026s | 0.001026s | byte equality observed |
| flatten_view.test | 10 | 0.001024s | 0.001044s | 0.001026s | byte equality observed |
| fold.test | 10 | 0.001035s | 0.001047s | 0.001032s | byte equality observed |
| for_each.test | 10 | 0.001046s | 0.001021s | 0.001056s | byte equality observed |
| front_extended_deque.test | 10 | 0.000985s | 0.000994s | 0.000983s | byte equality observed |
| fused.test | 10 | 0.001041s | 0.001021s | 0.001048s | byte equality observed |
| fused_function_object.test | 10 | 0.000997s | 0.001028s | 0.001004s | byte equality observed |
| fused_procedure.test | 10 | 0.000987s | 0.001003s | 0.001024s | byte equality observed |
| github-176.test | 10 | 0.001006s | 0.001037s | 0.001015s | byte equality observed |
| hash.test | 10 | 0.000995s | 0.001055s | 0.000998s | byte equality observed |
| identity_view.test | 10 | 0.001052s | 0.001044s | 0.001024s | byte equality observed |
| insert.test | 10 | 0.001054s | 0.001072s | 0.001032s | byte equality observed |
| insert_range.test | 10 | 0.001056s | 0.001054s | 0.001033s | byte equality observed |
| invoke.test | 10 | 0.001000s | 0.001021s | 0.001026s | byte equality observed |
| invoke_function_object.test | 10 | 0.001003s | 0.001008s | 0.000995s | byte equality observed |
| invoke_procedure.test | 10 | 0.001007s | 0.001006s | 0.001018s | byte equality observed |
| io.test | 10 | 0.001160s | 0.001151s | 0.001131s | byte equality observed |
| iter_fold.test | 10 | 0.001024s | 0.001033s | 0.001055s | byte equality observed |
| iterator_range.test | 10 | 0.001047s | 0.001043s | 0.001048s | byte equality observed |
| join.test | 10 | 0.001008s | 0.001029s | 0.001013s | byte equality observed |
| joint_view.test | 10 | 0.001082s | 0.001074s | 0.001070s | byte equality observed |
| list_comparison.test | 10 | 0.001007s | 0.001016s | 0.000998s | byte equality observed |
| list_construction.test | 10 | 0.001001s | 0.000995s | 0.001058s | byte equality observed |
| list_copy.test | 10 | 0.001009s | 0.001006s | 0.000974s | byte equality observed |
| list_hash.test | 10 | 0.001011s | 0.001012s | 0.001011s | byte equality observed |
| list_iterator.test | 10 | 0.000998s | 0.000988s | 0.001007s | byte equality observed |
| list_make.test | 10 | 0.001020s | 0.001016s | 0.001029s | byte equality observed |
| list_misc.test | 10 | 0.001015s | 0.001013s | 0.000961s | byte equality observed |
| list_mutate.test | 10 | 0.000992s | 0.001046s | 0.001014s | byte equality observed |
| list_nest.test | 10 | 0.001019s | 0.001028s | 0.001041s | byte equality observed |
| list_tie.test | 10 | 0.000997s | 0.001044s | 0.000965s | byte equality observed |
| list_value_at.test | 10 | 0.001040s | 0.001026s | 0.001000s | byte equality observed |
| make_fused.test | 10 | 0.000990s | 0.001005s | 0.001017s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001002s | 0.000985s | 0.000997s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001004s | 0.001014s | 0.001022s | byte equality observed |
| make_list.test | 10 | 0.001020s | 0.001001s | 0.001008s | byte equality observed |
| make_unfused.test | 10 | 0.001009s | 0.001021s | 0.001014s | byte equality observed |
| make_vector.test | 10 | 0.001008s | 0.001018s | 0.001028s | byte equality observed |
| map.test | 10 | 0.001038s | 0.001033s | 0.001032s | byte equality observed |
| map_comparison.test | 10 | 0.000979s | 0.001014s | 0.001010s | byte equality observed |
| map_construction.test | 10 | 0.000986s | 0.001009s | 0.000995s | byte equality observed |
| map_copy.test | 10 | 0.000999s | 0.000992s | 0.001010s | byte equality observed |
| map_misc.test | 10 | 0.001006s | 0.000988s | 0.001011s | byte equality observed |
| map_move.test | 10 | 0.001038s | 0.001030s | 0.001045s | byte equality observed |
| map_mutate.test | 10 | 0.001002s | 0.000992s | 0.001026s | byte equality observed |
| map_tie.test | 10 | 0.001023s | 0.001018s | 0.001022s | byte equality observed |
| move.test | 10 | 0.001023s | 0.001039s | 0.001005s | byte equality observed |
| nil.test | 10 | 0.001003s | 0.000978s | 0.000999s | byte equality observed |
| none.test | 10 | 0.001002s | 0.001016s | 0.000997s | byte equality observed |
| nview.test | 10 | 0.001018s | 0.001023s | 0.001002s | byte equality observed |
| pop_back.test | 10 | 0.001071s | 0.001035s | 0.001034s | byte equality observed |
| pop_front.test | 10 | 0.001024s | 0.001033s | 0.001068s | byte equality observed |
| push_back.test | 10 | 0.001021s | 0.001061s | 0.001041s | byte equality observed |
| push_front.test | 10 | 0.001046s | 0.001016s | 0.001049s | byte equality observed |
| quick.test | 10 | 0.000457s | 0.000996s | 0.000967s | byte equality observed |
| ref_vector.test | 10 | 0.001023s | 0.000996s | 0.001011s | byte equality observed |
| remove.test | 10 | 0.001047s | 0.001014s | 0.001032s | byte equality observed |
| remove_if.test | 10 | 0.001037s | 0.001073s | 0.001054s | byte equality observed |
| repetitive_view.test | 10 | 0.000998s | 0.001005s | 0.001004s | byte equality observed |
| replace.test | 10 | 0.001023s | 0.001021s | 0.001045s | byte equality observed |
| replace_if.test | 10 | 0.001055s | 0.001017s | 0.001053s | byte equality observed |
| reverse.test | 10 | 0.001034s | 0.001030s | 0.001063s | byte equality observed |
| reverse_fold.test | 10 | 0.001014s | 0.001003s | 0.001042s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001013s | 0.001024s | 0.001017s | byte equality observed |
| reverse_view.test | 10 | 0.001017s | 0.001024s | 0.001024s | byte equality observed |
| segmented_find.test | 10 | 0.001008s | 0.001001s | 0.001016s | byte equality observed |
| segmented_find_if.test | 10 | 0.001048s | 0.001017s | 0.001014s | byte equality observed |
| segmented_fold.test | 10 | 0.001056s | 0.001054s | 0.001034s | byte equality observed |
| segmented_for_each.test | 10 | 0.001032s | 0.001063s | 0.001038s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001058s | 0.001048s | 0.001040s | byte equality observed |
| set.test | 10 | 0.001024s | 0.001030s | 0.001015s | byte equality observed |
| single_view.test | 10 | 0.001048s | 0.001030s | 0.001022s | byte equality observed |
| std_array.test | 10 | 0.000989s | 0.000969s | 0.000991s | byte equality observed |
| std_pair.test | 10 | 0.001043s | 0.001049s | 0.001038s | byte equality observed |
| std_tuple.test | 10 | 0.001006s | 0.000998s | 0.001013s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001006s | 0.000976s | 0.001006s | byte equality observed |
| swap.test | 10 | 0.001023s | 0.001010s | 0.000988s | byte equality observed |
| transform.test | 10 | 0.001033s | 0.001024s | 0.001033s | byte equality observed |
| transform_view.test | 10 | 0.001044s | 0.001056s | 0.001047s | byte equality observed |
| tuple_comparison.test | 10 | 0.000996s | 0.001007s | 0.001022s | byte equality observed |
| tuple_construction.test | 10 | 0.001027s | 0.000999s | 0.001019s | byte equality observed |
| tuple_conversion.test | 10 | 0.001015s | 0.000980s | 0.001016s | byte equality observed |
| tuple_copy.test | 10 | 0.001005s | 0.000999s | 0.001027s | byte equality observed |
| tuple_element.test | 10 | 0.001010s | 0.001012s | 0.001035s | byte equality observed |
| tuple_hash.test | 10 | 0.001013s | 0.001020s | 0.000999s | byte equality observed |
| tuple_make.test | 10 | 0.001018s | 0.001020s | 0.001002s | byte equality observed |
| tuple_misc.test | 10 | 0.001021s | 0.001009s | 0.001003s | byte equality observed |
| tuple_mutate.test | 10 | 0.001006s | 0.001014s | 0.001034s | byte equality observed |
| tuple_nest.test | 10 | 0.001015s | 0.001005s | 0.001021s | byte equality observed |
| tuple_tie.test | 10 | 0.001004s | 0.000989s | 0.001010s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001005s | 0.001020s | 0.001015s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001016s | 0.000987s | 0.001039s | byte equality observed |
| unfused.test | 10 | 0.001022s | 0.001007s | 0.001055s | byte equality observed |
| unfused_typed.test | 10 | 0.001027s | 0.000988s | 0.001019s | byte equality observed |
| vector_comparison.test | 10 | 0.001031s | 0.000987s | 0.001003s | byte equality observed |
| vector_construction.test | 10 | 0.001005s | 0.000998s | 0.001009s | byte equality observed |
| vector_conversion.test | 10 | 0.001010s | 0.001012s | 0.001023s | byte equality observed |
| vector_copy.test | 10 | 0.001036s | 0.000993s | 0.001030s | byte equality observed |
| vector_hash.test | 10 | 0.001006s | 0.000983s | 0.001018s | byte equality observed |
| vector_iterator.test | 10 | 0.001016s | 0.001005s | 0.001036s | byte equality observed |
| vector_make.test | 10 | 0.000997s | 0.001001s | 0.001010s | byte equality observed |
| vector_misc.test | 10 | 0.001008s | 0.001014s | 0.001036s | byte equality observed |
| vector_move.test | 10 | 0.001025s | 0.001006s | 0.001031s | byte equality observed |
| vector_mutate.test | 10 | 0.001002s | 0.000971s | 0.001010s | byte equality observed |
| vector_n.test | 10 | 0.001022s | 0.001029s | 0.001038s | byte equality observed |
| vector_nest.test | 10 | 0.001029s | 0.001013s | 0.001008s | byte equality observed |
| vector_tie.test | 10 | 0.001031s | 0.001001s | 0.001018s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001027s | 0.001020s | 0.001019s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001025s | 0.001030s | 0.001025s | byte equality observed |
| vector_value_at.test | 10 | 0.001003s | 0.001016s | 0.001010s | byte equality observed |
| zip.test | 10 | 0.001014s | 0.001000s | 0.001001s | byte equality observed |
| zip2.test | 10 | 0.001016s | 0.000989s | 0.001005s | byte equality observed |
| zip_ignore.test | 10 | 0.001011s | 0.000995s | 0.001053s | byte equality observed |
| zip_view.test | 10 | 0.001016s | 0.001013s | 0.001010s | byte equality observed |
| zip_view2.test | 10 | 0.000987s | 0.000995s | 0.001007s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001010s | 0.001014s | 0.001027s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
