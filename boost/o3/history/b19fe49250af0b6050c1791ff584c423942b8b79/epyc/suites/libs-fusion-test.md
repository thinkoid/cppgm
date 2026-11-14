# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.349584 | 0.734014 | 1.003137 | 0.001487 | 0.001688 | 0.001614 |
| any.test | RUN | 0.344029 | 0.698224 | 0.990523 | 0.001333 | 0.001534 | 0.001262 |
| clear.test | RUN | 0.246479 | 0.646041 | 0.801425 | 0.001517 | 0.001794 | 0.001770 |
| copy.test | RUN | 0.209276 | 0.486796 | 0.648762 | 0.001685 | 0.001656 | 0.001738 |
| count.test | RUN | 0.233803 | 0.530564 | 0.729433 | 0.002038 | 0.001912 | 0.001471 |
| count_if.test | RUN | 0.221885 | 0.497962 | 0.665991 | 0.001490 | 0.001826 | 0.001223 |
| erase.test | RUN | 0.317157 | 0.873352 | 1.063976 | 0.001375 | 0.001722 | 0.001480 |
| erase_key.test | RUN | 0.300112 | 0.879358 | 1.012636 | 0.001640 | 0.001704 | 0.001715 |
| filter.test | RUN | 0.276270 | 0.723593 | 0.911131 | 0.001869 | 0.001952 | 0.001710 |
| filter_if.test | RUN | 0.302240 | 0.860868 | 1.061568 | 0.001602 | 0.001828 | 0.001772 |
| find.test | RUN | 0.263809 | 0.627149 | 0.821520 | 0.001453 | 0.001596 | 0.001188 |
| find_if.test | RUN | 0.250337 | 0.564749 | 0.767187 | 0.001682 | 0.001680 | 0.001578 |
| fold.test | RUN | 0.274601 | 0.693786 | 0.910033 | 0.001622 | 0.001922 | 0.001536 |
| for_each.test | RUN | 0.246621 | 0.634189 | 0.798342 | 0.001776 | 0.002059 | 0.001791 |
| insert.test | RUN | 0.361756 | 1.083850 | 1.275088 | 0.001694 | 0.001840 | 0.001787 |
| insert_range.test | RUN | 0.359271 | 1.092029 | 1.283909 | 0.001410 | 0.001561 | 0.001498 |
| iter_fold.test | RUN | 0.421324 | 1.047144 | 1.496327 | 0.001838 | 0.001936 | 0.001789 |
| move.test | RUN | 0.217312 | 0.505695 | 0.647446 | 0.001755 | 0.001651 | 0.001754 |
| none.test | RUN | 0.352969 | 0.711014 | 1.036320 | 0.001484 | 0.001918 | 0.001534 |
| pop_back.test | RUN | 0.333449 | 0.950228 | 1.161364 | 0.001690 | 0.001858 | 0.001599 |
| pop_front.test | RUN | 0.285947 | 0.778536 | 0.919070 | 0.001792 | 0.001847 | 0.001627 |
| push_back.test | RUN | 0.357651 | 1.100440 | 1.241239 | 0.001886 | 0.001916 | 0.002078 |
| push_front.test | RUN | 0.313570 | 0.922235 | 1.061366 | 0.001555 | 0.001836 | 0.001650 |
| remove.test | RUN | 0.354025 | 1.027378 | 1.240458 | 0.001605 | 0.001864 | 0.001740 |
| remove_if.test | RUN | 0.310886 | 0.870126 | 1.081376 | 0.001549 | 0.001790 | 0.001616 |
| replace.test | RUN | 0.297897 | 0.837498 | 0.983115 | 0.001747 | 0.001909 | 0.001776 |
| replace_if.test | RUN | 0.295163 | 0.848324 | 0.964040 | 0.001868 | 0.001824 | 0.001746 |
| reverse_fold.test | RUN | 0.460529 | 1.186902 | 1.676597 | 0.001620 | 0.001700 | 0.001702 |
| reverse_iter_fold.test | RUN | 0.488922 | 1.231940 | 1.797253 | 0.001836 | 0.001780 | 0.001253 |
| reverse.test | RUN | 0.302409 | 0.852594 | 1.020688 | 0.001543 | 0.001839 | 0.001688 |
| segmented_for_each.test | RUN | 0.509779 | 1.669932 | 2.038548 | 0.001612 | 0.001797 | 0.001430 |
| segmented_find.test | RUN | 0.321186 | 0.870449 | 1.175783 | 0.001559 | 0.001930 | 0.001197 |
| segmented_find_if.test | RUN | 0.318087 | 0.867164 | 1.178886 | 0.001580 | 0.001737 | 0.001690 |
| segmented_fold.test | RUN | 0.394604 | 1.153544 | 1.443532 | 0.001743 | 0.001972 | 0.001680 |
| transform.test | RUN | 0.306076 | 0.910370 | 1.056313 | 0.001730 | 0.001933 | 0.001749 |
| join.test | RUN | 0.233763 | 0.561206 | 0.763094 | 0.001726 | 0.001742 | 0.001714 |
| zip.test | RUN | 0.415891 | 1.070040 | 1.402344 | 0.001713 | 0.001874 | 0.001766 |
| zip2.test | RUN | 0.401918 | 1.001295 | 1.366435 | 0.001535 | 0.001652 | 0.001314 |
| zip_ignore.test | RUN | 0.302167 | 0.714579 | 0.909092 | 0.001761 | 0.001636 | 0.001567 |
| flatten.test | RUN | 0.278327 | 0.752139 | 0.936087 | 0.001511 | 0.001752 | 0.001484 |
| ticket-5490.test | COMPILE | 0.154484 | 0.339199 | 0.430250 | — | — | — |
| as_deque.test | RUN | 0.286568 | 0.723366 | 1.004492 | 0.001606 | 0.001894 | 0.001660 |
| as_list.test | RUN | 0.320281 | 0.887067 | 1.066500 | 0.001609 | 0.001930 | 0.001663 |
| as_map.test | RUN | 0.302625 | 0.879751 | 1.067009 | 0.001629 | 0.002048 | 0.001632 |
| as_map_assoc.test | RUN | 0.311678 | 0.822388 | 1.027082 | 0.001436 | 0.001617 | 0.001647 |
| as_set.test | RUN | 0.347148 | 1.049679 | 1.250423 | 0.001616 | 0.001738 | 0.001509 |
| as_vector.test | RUN | 0.313062 | 0.912800 | 1.115829 | 0.001449 | 0.001620 | 0.001936 |
| boost_tuple.test | RUN | 0.323945 | 0.939247 | 1.042476 | 0.001592 | 0.001784 | 0.001448 |
| boost_tuple_iterator.test | RUN | 0.223608 | 0.555313 | 0.664360 | 0.001565 | 0.001780 | 0.001620 |
| cons.test | RUN | 0.409788 | 1.018626 | 1.280464 | 0.001051 | 0.001722 | 0.001651 |
| convert_boost_tuple.test | RUN | 0.252783 | 0.773513 | 0.837136 | 0.001626 | 0.001725 | 0.001827 |
| convert_deque.test | RUN | 0.255436 | 0.775657 | 0.840070 | 0.001565 | 0.001602 | 0.001444 |
| convert_list.test | RUN | 0.255733 | 0.792753 | 0.854004 | 0.001611 | 0.001688 | 0.001618 |
| convert_std_pair.test | RUN | 0.263073 | 0.761651 | 0.855366 | 0.001590 | 0.001418 | 0.001613 |
| convert_std_tuple.test | RUN | 0.254505 | 0.743259 | 0.840701 | 0.001578 | 0.001824 | 0.001502 |
| convert_vector.test | RUN | 0.251801 | 0.760773 | 0.839025 | 0.001426 | 0.001755 | 0.001696 |
| filter_view.test | RUN | 0.306378 | 0.817787 | 1.027287 | 0.001465 | 0.001835 | 0.001633 |
| hash.test | RUN | 0.298001 | 0.727189 | 0.954257 | 0.001914 | 0.001796 | 0.001748 |
| io.test | RUN | 0.315872 | 1.005672 | 1.144594 | 0.001565 | 0.001984 | 0.001696 |
| iterator_range.test | RUN | 0.286880 | 0.773308 | 0.972232 | 0.001562 | 0.001712 | 0.001724 |
| joint_view.test | RUN | 0.391700 | 1.288720 | 1.412101 | 0.002042 | 0.001626 | 0.001692 |
| list_comparison.test | RUN | 0.231227 | 0.553986 | 0.720197 | 0.001577 | 0.001750 | 0.001245 |
| list_construction.test | RUN | 0.219909 | 0.508553 | 0.678469 | 0.001600 | 0.001548 | 0.001678 |
| list_copy.test | RUN | 0.322195 | 0.947575 | 1.164057 | 0.001471 | 0.001880 | 0.001678 |
| list_iterator.test | RUN | 0.224864 | 0.518015 | 0.654701 | 0.001682 | 0.001564 | 0.001621 |
| list_hash.test | RUN | 0.298611 | 1.009605 | 0.966646 | 0.001526 | 0.001783 | 0.001535 |
| list_make.test | RUN | 0.234125 | 0.575635 | 0.757450 | 0.001728 | 0.001726 | 0.001617 |
| list_misc.test | RUN | 0.304854 | 0.652403 | 0.885915 | 0.001644 | 0.001846 | 0.001418 |
| list_mutate.test | RUN | 0.209205 | 0.461902 | 0.622822 | 0.001380 | 0.001618 | 0.001675 |
| list_nest.test | RUN | 0.412029 | 1.301843 | 1.634052 | 0.001425 | 0.001740 | 0.001500 |
| list_tie.test | RUN | 0.222173 | 0.542429 | 0.692318 | 0.001615 | 0.001806 | 0.001694 |
| list_value_at.test | RUN | 0.214536 | 0.481636 | 0.640811 | 0.001647 | 0.001728 | 0.001477 |
| deque_comparison.test | RUN | 0.230872 | 0.545132 | 0.687067 | 0.001545 | 0.001684 | 0.001225 |
| deque_construction.test | RUN | 0.223719 | 0.508875 | 0.722370 | 0.001533 | 0.001903 | 0.001324 |
| deque_copy.test | RUN | 0.318513 | 0.866758 | 1.091794 | 0.001367 | 0.001546 | 0.001742 |
| deque_iterator.test | RUN | 0.219773 | 0.571597 | 0.694503 | 0.001574 | 0.001616 | 0.001748 |
| deque_hash.test | RUN | 0.302026 | 0.965355 | 0.934792 | 0.001333 | 0.001935 | 0.001719 |
| deque_is_constructible.test | COMPILE | 0.121722 | 0.253656 | 0.311328 | — | — | — |
| deque_make.test | RUN | 0.224441 | 0.548866 | 0.702863 | 0.001737 | 0.001680 | 0.001710 |
| deque_misc.test | RUN | 0.293160 | 0.686390 | 0.858578 | 0.001625 | 0.001678 | 0.001462 |
| deque_move.test | RUN | 0.222931 | 0.551827 | 0.678155 | 0.001523 | 0.001796 | 0.001626 |
| deque_mutate.test | RUN | 0.206376 | 0.464600 | 0.584239 | 0.001746 | 0.001830 | 0.001666 |
| deque_nest.test | RUN | 0.612342 | 2.112142 | 2.549231 | 0.001646 | 0.001856 | 0.001593 |
| deque_tie.test | RUN | 0.208025 | 0.473530 | 0.663956 | 0.001360 | 0.001630 | 0.001678 |
| deque_value_at.test | RUN | 0.211103 | 0.505216 | 0.629509 | 0.001596 | 0.001664 | 0.001647 |
| front_extended_deque.test | RUN | 0.301146 | 0.736977 | 0.919826 | 0.001651 | 0.001902 | 0.001708 |
| back_extended_deque.test | RUN | 0.297145 | 0.732595 | 0.951375 | 0.001563 | 0.001830 | 0.001740 |
| make_list.test | RUN | 0.229672 | 0.570149 | 0.718057 | 0.001691 | 0.001940 | 0.001699 |
| make_vector.test | RUN | 0.231458 | 0.568056 | 0.713445 | 0.001649 | 0.001900 | 0.001595 |
| map.test | RUN | 0.304948 | 0.870500 | 1.019446 | 0.001627 | 0.001918 | 0.001433 |
| map_comparison.test | RUN | 0.227589 | 0.563469 | 0.681938 | 0.001661 | 0.001548 | 0.001708 |
| map_construction.test | RUN | 0.235614 | 0.543865 | 0.715869 | 0.001422 | 0.001927 | 0.001646 |
| map_copy.test | RUN | 0.283345 | 0.688830 | 0.858637 | 0.001701 | 0.001968 | 0.001733 |
| map_misc.test | RUN | 0.293271 | 0.706868 | 0.855181 | 0.001797 | 0.001707 | 0.001558 |
| map_move.test | RUN | 0.232663 | 0.609941 | 0.703195 | 0.001353 | 0.001755 | 0.001235 |
| map_mutate.test | RUN | 0.205667 | 0.476118 | 0.622410 | 0.001281 | 0.001749 | 0.001499 |
| map_tie.test | RUN | 0.213826 | 0.466597 | 0.601522 | 0.001655 | 0.001733 | 0.001684 |
| nil.test | RUN | 0.143459 | 0.328831 | 0.403118 | 0.001603 | 0.001881 | 0.001726 |
| nview.test | RUN | 0.283633 | 0.681220 | 0.905330 | 0.001875 | 0.001934 | 0.001692 |
| reverse_view.test | RUN | 0.363775 | 1.133509 | 1.288472 | 0.001866 | 0.001861 | 0.001724 |
| segmented_iterator_range.test | RUN | 0.438477 | 1.344792 | 1.603869 | 0.001679 | 0.001583 | 0.001437 |
| set.test | RUN | 0.277319 | 0.792782 | 0.930074 | 0.001636 | 0.001613 | 0.001787 |
| single_view.test | RUN | 0.253740 | 0.714472 | 0.815419 | 0.001662 | 0.001805 | 0.001661 |
| std_pair.test | RUN | 0.325330 | 0.887777 | 1.079556 | 0.001916 | 0.001938 | 0.001630 |
| boost_array.test | RUN | 0.273861 | 0.634327 | 0.807619 | 0.001744 | 0.001974 | 0.001783 |
| array.test | RUN | 0.271499 | 0.617815 | 0.792814 | 0.001570 | 0.001798 | 0.001799 |
| std_array.test | RUN | 0.271050 | 0.620097 | 0.815384 | 0.001468 | 0.001501 | 0.001516 |
| tuple_comparison.test | RUN | 0.244674 | 0.578216 | 0.725283 | 0.001684 | 0.001930 | 0.001509 |
| tuple_construction.test | RUN | 0.248111 | 0.593532 | 0.744501 | 0.001744 | 0.001788 | 0.001456 |
| tuple_conversion.test | RUN | 0.531384 | 1.784948 | 2.398343 | 0.001364 | 0.001756 | 0.001592 |
| tuple_copy.test | RUN | 0.359465 | 1.048959 | 1.300218 | 0.001550 | 0.001835 | 0.001441 |
| tuple_element.test | RUN | 0.230674 | 0.509008 | 0.686164 | 0.001615 | 0.001956 | 0.001353 |
| tuple_make.test | RUN | 0.249103 | 0.608962 | 0.760539 | 0.001752 | 0.001902 | 0.001637 |
| tuple_misc.test | RUN | 0.317336 | 0.738723 | 0.923040 | 0.001764 | 0.001784 | 0.001727 |
| tuple_mutate.test | RUN | 0.220027 | 0.496097 | 0.657343 | 0.001857 | 0.001546 | 0.001711 |
| tuple_nest.test | RUN | 0.884616 | 3.659519 | 4.556511 | 0.001666 | 0.001962 | 0.001700 |
| tuple_hash.test | RUN | 0.325027 | 1.013509 | 1.039643 | 0.001886 | 0.001820 | 0.001444 |
| tuple_tie.test | RUN | 0.234678 | 0.574684 | 0.708647 | 0.001690 | 0.001914 | 0.001500 |
| tuple_traits__maybe_variadic.test | RUN | 0.255349 | 0.666702 | 0.752760 | 0.001364 | 0.001792 | 0.001674 |
| tuple_traits__no_variadic.test | RUN | 0.284105 | 0.656146 | 0.859897 | 0.001699 | 0.001926 | 0.001666 |
| transform_view.test | RUN | 0.369927 | 1.132066 | 1.304204 | 0.001726 | 0.001656 | 0.001521 |
| identity_view.test | RUN | 0.356829 | 1.024706 | 1.238006 | 0.001854 | 0.001661 | 0.001530 |
| vector_comparison.test | RUN | 0.240225 | 0.587625 | 0.742569 | 0.001503 | 0.001686 | 0.001774 |
| vector_construction.test | RUN | 0.231866 | 0.519494 | 0.694953 | 0.001584 | 0.002023 | 0.001763 |
| vector_conversion.test | RUN | 0.633451 | 2.317906 | 3.029159 | 0.001667 | 0.001898 | 0.001722 |
| vector_copy.test | RUN | 0.340404 | 1.011431 | 1.255474 | 0.001645 | 0.001784 | 0.001680 |
| vector_iterator.test | RUN | 0.218942 | 0.561857 | 0.701653 | 0.001805 | 0.001954 | 0.001406 |
| vector_make.test | RUN | 0.230008 | 0.577208 | 0.703756 | 0.001418 | 0.001752 | 0.001732 |
| vector_misc.test | RUN | 0.293984 | 0.739446 | 0.916964 | 0.001410 | 0.001630 | 0.001578 |
| vector_move.test | RUN | 0.226243 | 0.567274 | 0.665941 | 0.001649 | 0.001641 | 0.001745 |
| vector_mutate.test | RUN | 0.206405 | 0.472889 | 0.598134 | 0.001260 | 0.001788 | 0.001686 |
| vector_n.test | RUN | 0.258924 | 0.583652 | 0.774462 | 0.001814 | 0.001950 | 0.001734 |
| vector_nest.test | RUN | 0.880407 | 3.700761 | 4.521184 | 0.001736 | 0.001477 | 0.001856 |
| vector_hash.test | RUN | 0.304513 | 1.012826 | 0.970457 | 0.001776 | 0.001839 | 0.001671 |
| vector_tie.test | RUN | 0.216726 | 0.512573 | 0.654618 | 0.001743 | 0.001686 | 0.001693 |
| vector_traits__maybe_variadic.test | RUN | 0.238630 | 0.603871 | 0.663046 | 0.001792 | 0.001703 | 0.001717 |
| vector_traits__no_variadic.test | RUN | 0.262407 | 0.639953 | 0.762502 | 0.001702 | 0.001632 | 0.001585 |
| vector_value_at.test | RUN | 0.211538 | 0.468083 | 0.624192 | 0.001367 | 0.001942 | 0.001795 |
| zip_view.test | RUN | 0.450889 | 1.138904 | 1.592367 | 0.001393 | 0.001393 | 0.001656 |
| zip_view2.test | RUN | 0.362543 | 0.944650 | 1.233273 | 0.001563 | 0.001815 | 0.001369 |
| zip_view_ignore.test | RUN | 0.325949 | 0.829526 | 1.094799 | 0.001770 | 0.001749 | 0.001303 |
| repetitive_view.test | RUN | 0.555520 | 1.531616 | 2.073676 | 0.001795 | 0.001949 | 0.001472 |
| deduce_sequence.test | RUN | 0.273471 | 0.656195 | 0.893599 | 0.001545 | 0.001725 | 0.001558 |
| adapt_adt_named.test | RUN | 0.323363 | 0.888477 | 1.045755 | 0.001375 | 0.001793 | 0.001550 |
| adapt_adt_named_empty.test | RUN | 0.284200 | 0.702025 | 0.859244 | 0.001722 | 0.001690 | 0.001805 |
| adapt_adt.test | RUN | 0.367489 | 1.165208 | 1.244076 | 0.001559 | 0.001951 | 0.001740 |
| adapt_adt_empty.test | RUN | 0.274887 | 0.725127 | 0.875486 | 0.001835 | 0.001716 | 0.001760 |
| adapt_assoc_adt_named.test | RUN | 0.369653 | 0.915514 | 1.137151 | 0.001676 | 0.001980 | 0.001754 |
| adapt_assoc_adt_named_empty.test | RUN | 0.290365 | 0.710187 | 0.858388 | 0.001545 | 0.001745 | 0.001778 |
| adapt_assoc_adt.test | RUN | 0.359402 | 0.946900 | 1.182536 | 0.001608 | 0.001850 | 0.001631 |
| adapt_assoc_adt_empty.test | RUN | 0.276857 | 0.723332 | 0.857276 | 0.001615 | 0.001794 | 0.001503 |
| adapt_assoc_struct_named.test | RUN | 0.357562 | 0.909509 | 1.112703 | 0.001336 | 0.001892 | 0.001572 |
| adapt_assoc_struct_named_empty.test | RUN | 0.277266 | 0.692526 | 0.849603 | 0.001696 | 0.001921 | 0.001792 |
| adapt_assoc_struct.test | RUN | 0.313595 | 0.869474 | 1.020907 | 0.001689 | 0.001858 | 0.001658 |
| adapt_assoc_struct_empty.test | RUN | 0.268338 | 0.703819 | 0.852651 | 0.001771 | 0.001717 | 0.001764 |
| adapt_assoc_tpl_adt.test | RUN | 0.373897 | 1.001098 | 1.207224 | 0.001531 | 0.001928 | 0.001529 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.281802 | 0.734303 | 0.850140 | 0.001586 | 0.002046 | 0.001724 |
| adapt_assoc_tpl_struct.test | RUN | 0.303683 | 0.836078 | 1.029255 | 0.001788 | 0.001539 | 0.001747 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.273499 | 0.725065 | 0.842401 | 0.001440 | 0.001784 | 0.001459 |
| adapt_struct_named.test | RUN | 0.312529 | 0.855687 | 1.008283 | 0.001720 | 0.001630 | 0.001776 |
| adapt_struct_named_empty.test | RUN | 0.278518 | 0.703604 | 0.863265 | 0.001630 | 0.001761 | 0.001732 |
| adapt_struct.test | RUN | 0.343524 | 0.993144 | 1.120607 | 0.001840 | 0.001950 | 0.001744 |
| adapt_struct_empty.test | RUN | 0.270547 | 0.726462 | 0.862472 | 0.001774 | 0.001764 | 0.001760 |
| adapt_tpl_adt.test | RUN | 0.355566 | 1.134733 | 1.152219 | 0.001213 | 0.001848 | 0.001743 |
| adapt_tpl_adt_empty.test | RUN | 0.279720 | 0.706586 | 0.871665 | 0.001724 | 0.001937 | 0.001634 |
| adapt_tpl_struct.test | RUN | 0.288516 | 0.803241 | 0.966343 | 0.001709 | 0.001814 | 0.001620 |
| adapt_tpl_struct_empty.test | RUN | 0.274092 | 0.738127 | 0.877619 | 0.002052 | 0.001770 | 0.001409 |
| adt_attribute_proxy.test | RUN | 0.317348 | 0.701488 | 0.909399 | 0.001718 | 0.001942 | 0.001642 |
| define_struct.test | RUN | 0.375745 | 0.984622 | 1.206038 | 0.001774 | 0.001592 | 0.001537 |
| define_struct_empty.test | RUN | 0.340240 | 0.818592 | 1.015973 | 0.001553 | 0.001735 | 0.001672 |
| define_struct_move.test | RUN | 0.214989 | 0.462777 | 0.597929 | 0.001726 | 0.001885 | 0.001309 |
| define_struct_inline.test | RUN | 0.398200 | 1.186392 | 1.348209 | 0.001572 | 0.001780 | 0.001676 |
| define_struct_inline_empty.test | RUN | 0.326587 | 0.834534 | 1.007259 | 0.001836 | 0.001816 | 0.001464 |
| define_struct_inline_move.test | RUN | 0.213788 | 0.449476 | 0.621009 | 0.001556 | 0.001875 | 0.001741 |
| define_assoc_struct.test | RUN | 0.364592 | 0.926748 | 1.155938 | 0.001786 | 0.001826 | 0.001720 |
| define_assoc_struct_empty.test | RUN | 0.326779 | 0.802713 | 1.021893 | 0.001580 | 0.001949 | 0.001658 |
| define_assoc_struct_move.test | RUN | 0.210218 | 0.453144 | 0.579730 | 0.001976 | 0.001795 | 0.001679 |
| define_tpl_struct.test | RUN | 0.367140 | 0.954710 | 1.106404 | 0.001711 | 0.001817 | 0.001596 |
| define_tpl_struct_empty.test | RUN | 0.337047 | 0.804769 | 1.004775 | 0.001710 | 0.001578 | 0.001649 |
| define_tpl_struct_move.test | RUN | 0.216310 | 0.491793 | 0.619419 | 0.001610 | 0.001709 | 0.001394 |
| define_tpl_struct_inline.test | RUN | 0.383017 | 1.111055 | 1.254094 | 0.001752 | 0.001926 | 0.001670 |
| define_tpl_struct_inline_empty.test | RUN | 0.326953 | 0.850619 | 1.000646 | 0.001580 | 0.001661 | 0.001693 |
| define_tpl_struct_inline_move.test | RUN | 0.214732 | 0.450038 | 0.625370 | 0.001632 | 0.001823 | 0.001637 |
| define_assoc_tpl_struct.test | RUN | 0.372314 | 0.947868 | 1.171176 | 0.001814 | 0.001884 | 0.001745 |
| define_assoc_tpl_struct_empty.test | RUN | 0.328234 | 0.808352 | 1.010931 | 0.001409 | 0.001544 | 0.001331 |
| define_assoc_tpl_struct_move.test | RUN | 0.211411 | 0.455389 | 0.588177 | 0.001691 | 0.001879 | 0.001736 |
| std_tuple.test | RUN | 0.221853 | 0.541559 | 0.669997 | 0.001731 | 0.001667 | 0.001231 |
| std_tuple_iterator.test | RUN | 0.223982 | 0.552564 | 0.659810 | 0.001588 | 0.001890 | 0.001650 |
| ref_vector.test | RUN | 0.249342 | 0.555276 | 0.712287 | 0.001703 | 0.001912 | 0.001751 |
| flatten_view.test | RUN | 0.268294 | 0.694468 | 0.848334 | 0.001689 | 0.001508 | 0.001615 |
| github-159.test | COMPILE | 0.119352 | 0.252087 | 0.321671 | — | — | — |
| github-176.test | RUN | 0.250111 | 0.605556 | 0.730843 | 0.001704 | 0.001946 | 0.001718 |
| size.test | COMPILE | 0.212586 | 0.451456 | 0.550951 | — | — | — |
| fused.test | RUN | 0.292273 | 0.655060 | 0.857922 | 0.001640 | 0.001883 | 0.001644 |
| fused_function_object.test | RUN | 0.218738 | 0.486910 | 0.620941 | 0.001538 | 0.001771 | 0.001432 |
| fused_procedure.test | RUN | 0.281402 | 0.629975 | 0.848594 | 0.001585 | 0.001779 | 0.001558 |
| unfused.test | RUN | 0.227891 | 0.510188 | 0.688079 | 0.001531 | 0.001574 | 0.001631 |
| unfused_typed.test | RUN | 0.228400 | 0.543681 | 0.697632 | 0.001714 | 0.001826 | 0.001703 |
| make_fused.test | RUN | 0.291956 | 0.638918 | 0.863150 | 0.001651 | 0.001815 | 0.001792 |
| make_fused_function_object.test | RUN | 0.220518 | 0.503253 | 0.637491 | 0.001357 | 0.001600 | 0.001556 |
| make_fused_procedure.test | RUN | 0.286931 | 0.634906 | 0.819037 | 0.001699 | 0.001792 | 0.001716 |
| make_unfused.test | RUN | 0.221936 | 0.500956 | 0.650310 | 0.001654 | 0.001917 | 0.001728 |
| invoke.test | RUN | 0.565740 | 1.772031 | 2.220690 | 0.001668 | 0.001770 | 0.001776 |
| invoke_function_object.test | RUN | 0.270784 | 0.660693 | 0.835438 | 0.001834 | 0.001768 | 0.001689 |
| invoke_procedure.test | RUN | 0.463480 | 1.328136 | 1.696069 | 0.001483 | 0.001758 | 0.001744 |
| swap.test | RUN | 0.341055 | 0.802036 | 1.014756 | 0.001458 | 0.001807 | 0.001871 |
| is_sequence.test | COMPILE | 0.062195 | 0.121539 | 0.135663 | — | — | — |
| is_view.test | COMPILE | 0.057975 | 0.122487 | 0.138355 | — | — | — |
| pair_deque.test | COMPILE | 0.125804 | 0.256791 | 0.313954 | — | — | — |
| pair_list.test | COMPILE | 0.121408 | 0.253891 | 0.321782 | — | — | — |
| pair_map.test | COMPILE | 0.131303 | 0.267836 | 0.331839 | — | — | — |
| pair_set.test | COMPILE | 0.128471 | 0.274908 | 0.315036 | — | — | — |
| pair_vector.test | COMPILE | 0.129593 | 0.269756 | 0.319825 | — | — | — |
| pair_nest.test | COMPILE | 0.046615 | 0.110664 | 0.130553 | — | — | — |
| index_sequence.test | COMPILE | 0.046805 | 0.081242 | 0.097057 | — | — | — |
| and.test | COMPILE | 0.030462 | 0.064885 | 0.071583 | — | — | — |
| tag_of.test | COMPILE | 0.056914 | 0.115015 | 0.128116 | — | — | — |
| unused.test | COMPILE | 0.031669 | 0.072622 | 0.077558 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.058292 | 0.114319 | 0.127279 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.050330 | 0.075952 | 0.107032 | — | — | — |
| quick.test | RUN | 0.165280 | 0.376110 | 0.397173 | 0.000505 | 0.001248 | 0.001203 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.995×, 1.005× | 0.989× |
| clang | 1.005× | 1.007×, 1.004× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001044s | 0.001053s | 0.001029s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001026s | 0.001005s | 0.001015s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001024s | 0.001044s | 0.001009s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001020s | 0.001019s | 0.001008s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001015s | 0.001039s | 0.001014s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001011s | 0.000997s | 0.001009s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001012s | 0.001013s | 0.001011s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001015s | 0.001016s | 0.001013s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001013s | 0.001006s | 0.001017s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000999s | 0.000996s | 0.001017s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001006s | 0.001001s | 0.001024s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001009s | 0.001007s | 0.001010s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001026s | 0.001018s | 0.001027s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001002s | 0.001011s | 0.001038s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001029s | 0.001028s | 0.001028s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001032s | 0.001033s | 0.001036s | byte equality observed |
| adapt_struct.test | 10 | 0.001043s | 0.001035s | 0.001018s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001012s | 0.001031s | 0.001033s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001011s | 0.001028s | 0.001032s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001024s | 0.001009s | 0.001004s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001036s | 0.001018s | 0.001048s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001017s | 0.001008s | 0.001015s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001008s | 0.000994s | 0.001012s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001018s | 0.001005s | 0.000999s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001006s | 0.001016s | 0.000986s | byte equality observed |
| all.test | 10 | 0.001016s | 0.001001s | 0.001004s | byte equality observed |
| any.test | 10 | 0.000984s | 0.000986s | 0.000991s | byte equality observed |
| array.test | 10 | 0.001007s | 0.000971s | 0.001003s | byte equality observed |
| as_deque.test | 10 | 0.001023s | 0.001015s | 0.000969s | byte equality observed |
| as_list.test | 10 | 0.001044s | 0.001012s | 0.001026s | byte equality observed |
| as_map.test | 10 | 0.001039s | 0.001024s | 0.001036s | byte equality observed |
| as_map_assoc.test | 10 | 0.001029s | 0.000996s | 0.001034s | byte equality observed |
| as_set.test | 10 | 0.001024s | 0.001021s | 0.001021s | byte equality observed |
| as_vector.test | 10 | 0.001034s | 0.001019s | 0.001067s | byte equality observed |
| back_extended_deque.test | 10 | 0.000998s | 0.000980s | 0.001019s | byte equality observed |
| boost_array.test | 10 | 0.001000s | 0.000996s | 0.001024s | byte equality observed |
| boost_tuple.test | 10 | 0.001030s | 0.001024s | 0.001024s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001007s | 0.000995s | 0.001010s | byte equality observed |
| clear.test | 10 | 0.001031s | 0.001009s | 0.001002s | byte equality observed |
| cons.test | 10 | 0.001040s | 0.001017s | 0.001046s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001005s | 0.001003s | 0.000983s | byte equality observed |
| convert_deque.test | 10 | 0.001002s | 0.001015s | 0.001010s | byte equality observed |
| convert_list.test | 10 | 0.001005s | 0.000996s | 0.001047s | byte equality observed |
| convert_std_pair.test | 10 | 0.001007s | 0.000983s | 0.001041s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001010s | 0.000995s | 0.000991s | byte equality observed |
| convert_vector.test | 10 | 0.001007s | 0.001001s | 0.000997s | byte equality observed |
| copy.test | 10 | 0.000983s | 0.000979s | 0.000998s | byte equality observed |
| count.test | 10 | 0.001007s | 0.000996s | 0.001024s | byte equality observed |
| count_if.test | 10 | 0.000998s | 0.000996s | 0.001002s | byte equality observed |
| deduce_sequence.test | 10 | 0.000987s | 0.000979s | 0.001004s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001033s | 0.001007s | 0.001018s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001014s | 0.000985s | 0.001008s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001001s | 0.000985s | 0.001007s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001033s | 0.001011s | 0.001038s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001008s | 0.000999s | 0.001009s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001001s | 0.000997s | 0.000991s | byte equality observed |
| define_struct.test | 10 | 0.001023s | 0.001030s | 0.001029s | byte equality observed |
| define_struct_empty.test | 10 | 0.001007s | 0.000984s | 0.001019s | byte equality observed |
| define_struct_inline.test | 10 | 0.001018s | 0.001004s | 0.001037s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001016s | 0.001005s | 0.001006s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000989s | 0.000986s | 0.000983s | byte equality observed |
| define_struct_move.test | 10 | 0.000994s | 0.000978s | 0.001001s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001026s | 0.000992s | 0.001014s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001013s | 0.000995s | 0.001019s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001024s | 0.001000s | 0.001022s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001019s | 0.001034s | 0.001013s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000998s | 0.000980s | 0.000991s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001000s | 0.000998s | 0.000988s | byte equality observed |
| deque_comparison.test | 10 | 0.000994s | 0.001014s | 0.001016s | byte equality observed |
| deque_construction.test | 10 | 0.000998s | 0.001025s | 0.001000s | byte equality observed |
| deque_copy.test | 10 | 0.000997s | 0.001024s | 0.001004s | byte equality observed |
| deque_hash.test | 10 | 0.001007s | 0.000988s | 0.001018s | byte equality observed |
| deque_iterator.test | 10 | 0.000991s | 0.001003s | 0.001015s | byte equality observed |
| deque_make.test | 10 | 0.000986s | 0.001009s | 0.001018s | byte equality observed |
| deque_misc.test | 10 | 0.000990s | 0.001001s | 0.000991s | byte equality observed |
| deque_move.test | 10 | 0.001007s | 0.001002s | 0.000999s | byte equality observed |
| deque_mutate.test | 10 | 0.001002s | 0.001009s | 0.000999s | byte equality observed |
| deque_nest.test | 10 | 0.000995s | 0.000985s | 0.001003s | byte equality observed |
| deque_tie.test | 10 | 0.000988s | 0.000982s | 0.000988s | byte equality observed |
| deque_value_at.test | 10 | 0.000994s | 0.000986s | 0.001020s | byte equality observed |
| erase.test | 10 | 0.001027s | 0.001011s | 0.001043s | byte equality observed |
| erase_key.test | 10 | 0.001048s | 0.001028s | 0.001054s | byte equality observed |
| filter.test | 10 | 0.001044s | 0.001020s | 0.001045s | byte equality observed |
| filter_if.test | 10 | 0.001027s | 0.001021s | 0.001067s | byte equality observed |
| filter_view.test | 10 | 0.001030s | 0.001019s | 0.001041s | byte equality observed |
| find.test | 10 | 0.001019s | 0.001016s | 0.001026s | byte equality observed |
| find_if.test | 10 | 0.001003s | 0.001007s | 0.001012s | byte equality observed |
| flatten.test | 10 | 0.001000s | 0.000988s | 0.001018s | byte equality observed |
| flatten_view.test | 10 | 0.001011s | 0.001001s | 0.001014s | byte equality observed |
| fold.test | 10 | 0.001020s | 0.001018s | 0.001032s | byte equality observed |
| for_each.test | 10 | 0.001021s | 0.001016s | 0.001026s | byte equality observed |
| front_extended_deque.test | 10 | 0.001001s | 0.001017s | 0.001022s | byte equality observed |
| fused.test | 10 | 0.000999s | 0.001001s | 0.001024s | byte equality observed |
| fused_function_object.test | 10 | 0.000982s | 0.001004s | 0.001019s | byte equality observed |
| fused_procedure.test | 10 | 0.000997s | 0.000984s | 0.000999s | byte equality observed |
| github-176.test | 10 | 0.000982s | 0.001006s | 0.001032s | byte equality observed |
| hash.test | 10 | 0.000998s | 0.001007s | 0.001016s | byte equality observed |
| identity_view.test | 10 | 0.001013s | 0.001013s | 0.001012s | byte equality observed |
| insert.test | 10 | 0.001023s | 0.001020s | 0.001029s | byte equality observed |
| insert_range.test | 10 | 0.001020s | 0.001029s | 0.001038s | byte equality observed |
| invoke.test | 10 | 0.001006s | 0.000991s | 0.001021s | byte equality observed |
| invoke_function_object.test | 10 | 0.000994s | 0.000997s | 0.001031s | byte equality observed |
| invoke_procedure.test | 10 | 0.000997s | 0.001024s | 0.001002s | byte equality observed |
| io.test | 10 | 0.001141s | 0.001118s | 0.001124s | byte equality observed |
| iter_fold.test | 10 | 0.001005s | 0.001023s | 0.001037s | byte equality observed |
| iterator_range.test | 10 | 0.001023s | 0.001022s | 0.001048s | byte equality observed |
| join.test | 10 | 0.001006s | 0.000980s | 0.001004s | byte equality observed |
| joint_view.test | 10 | 0.001052s | 0.001041s | 0.001058s | byte equality observed |
| list_comparison.test | 10 | 0.000982s | 0.000991s | 0.001004s | byte equality observed |
| list_construction.test | 10 | 0.000981s | 0.000997s | 0.001022s | byte equality observed |
| list_copy.test | 10 | 0.000987s | 0.000993s | 0.000992s | byte equality observed |
| list_hash.test | 10 | 0.001015s | 0.001006s | 0.001023s | byte equality observed |
| list_iterator.test | 10 | 0.000994s | 0.000977s | 0.000986s | byte equality observed |
| list_make.test | 10 | 0.001014s | 0.000977s | 0.000997s | byte equality observed |
| list_misc.test | 10 | 0.000995s | 0.001012s | 0.001017s | byte equality observed |
| list_mutate.test | 10 | 0.000982s | 0.000981s | 0.000988s | byte equality observed |
| list_nest.test | 10 | 0.000994s | 0.000996s | 0.001025s | byte equality observed |
| list_tie.test | 10 | 0.000990s | 0.000979s | 0.001014s | byte equality observed |
| list_value_at.test | 10 | 0.001005s | 0.000983s | 0.001013s | byte equality observed |
| make_fused.test | 10 | 0.000978s | 0.000976s | 0.000988s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001007s | 0.000973s | 0.000982s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000999s | 0.000990s | 0.001008s | byte equality observed |
| make_list.test | 10 | 0.000992s | 0.000986s | 0.001013s | byte equality observed |
| make_unfused.test | 10 | 0.001037s | 0.000989s | 0.000977s | byte equality observed |
| make_vector.test | 10 | 0.001001s | 0.000976s | 0.001005s | byte equality observed |
| map.test | 10 | 0.001028s | 0.001032s | 0.001023s | byte equality observed |
| map_comparison.test | 10 | 0.000982s | 0.000995s | 0.001002s | byte equality observed |
| map_construction.test | 10 | 0.000972s | 0.000996s | 0.001041s | byte equality observed |
| map_copy.test | 10 | 0.000987s | 0.000974s | 0.001038s | byte equality observed |
| map_misc.test | 10 | 0.000990s | 0.000979s | 0.001003s | byte equality observed |
| map_move.test | 10 | 0.001020s | 0.001001s | 0.001032s | byte equality observed |
| map_mutate.test | 10 | 0.000989s | 0.000975s | 0.001009s | byte equality observed |
| map_tie.test | 10 | 0.000991s | 0.001036s | 0.001012s | byte equality observed |
| move.test | 10 | 0.001011s | 0.001017s | 0.000996s | byte equality observed |
| nil.test | 10 | 0.001007s | 0.000977s | 0.000993s | byte equality observed |
| none.test | 10 | 0.001016s | 0.000987s | 0.001016s | byte equality observed |
| nview.test | 10 | 0.000993s | 0.001013s | 0.000992s | byte equality observed |
| pop_back.test | 10 | 0.001022s | 0.001018s | 0.001042s | byte equality observed |
| pop_front.test | 10 | 0.001010s | 0.001036s | 0.001018s | byte equality observed |
| push_back.test | 10 | 0.001014s | 0.000997s | 0.001026s | byte equality observed |
| push_front.test | 10 | 0.001035s | 0.001039s | 0.001008s | byte equality observed |
| quick.test | 10 | 0.000454s | 0.000954s | 0.000993s | byte equality observed |
| ref_vector.test | 10 | 0.001012s | 0.001006s | 0.000995s | byte equality observed |
| remove.test | 10 | 0.001030s | 0.001022s | 0.001042s | byte equality observed |
| remove_if.test | 10 | 0.001034s | 0.001010s | 0.001017s | byte equality observed |
| repetitive_view.test | 10 | 0.000976s | 0.000979s | 0.000990s | byte equality observed |
| replace.test | 10 | 0.001017s | 0.001003s | 0.001038s | byte equality observed |
| replace_if.test | 10 | 0.001023s | 0.001013s | 0.001031s | byte equality observed |
| reverse.test | 10 | 0.001032s | 0.000992s | 0.001018s | byte equality observed |
| reverse_fold.test | 10 | 0.001032s | 0.001020s | 0.001022s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001008s | 0.001017s | 0.001039s | byte equality observed |
| reverse_view.test | 10 | 0.001020s | 0.001050s | 0.001024s | byte equality observed |
| segmented_find.test | 10 | 0.001007s | 0.000978s | 0.001002s | byte equality observed |
| segmented_find_if.test | 10 | 0.001001s | 0.000992s | 0.001001s | byte equality observed |
| segmented_fold.test | 10 | 0.001032s | 0.001019s | 0.001032s | byte equality observed |
| segmented_for_each.test | 10 | 0.001032s | 0.001006s | 0.001030s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001050s | 0.001054s | 0.001029s | byte equality observed |
| set.test | 10 | 0.001023s | 0.001031s | 0.001028s | byte equality observed |
| single_view.test | 10 | 0.001007s | 0.001001s | 0.001011s | byte equality observed |
| std_array.test | 10 | 0.000973s | 0.001011s | 0.001009s | byte equality observed |
| std_pair.test | 10 | 0.001016s | 0.001012s | 0.001022s | byte equality observed |
| std_tuple.test | 10 | 0.000999s | 0.001001s | 0.001007s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000978s | 0.000972s | 0.000990s | byte equality observed |
| swap.test | 10 | 0.000990s | 0.001012s | 0.000997s | byte equality observed |
| transform.test | 10 | 0.001025s | 0.001019s | 0.001018s | byte equality observed |
| transform_view.test | 10 | 0.001037s | 0.001044s | 0.001047s | byte equality observed |
| tuple_comparison.test | 10 | 0.001009s | 0.000968s | 0.000986s | byte equality observed |
| tuple_construction.test | 10 | 0.000995s | 0.001006s | 0.000991s | byte equality observed |
| tuple_conversion.test | 10 | 0.000991s | 0.000988s | 0.001020s | byte equality observed |
| tuple_copy.test | 10 | 0.001015s | 0.001027s | 0.000989s | byte equality observed |
| tuple_element.test | 10 | 0.000986s | 0.001009s | 0.001018s | byte equality observed |
| tuple_hash.test | 10 | 0.000993s | 0.001023s | 0.001037s | byte equality observed |
| tuple_make.test | 10 | 0.001029s | 0.001025s | 0.001035s | byte equality observed |
| tuple_misc.test | 10 | 0.000996s | 0.001014s | 0.000988s | byte equality observed |
| tuple_mutate.test | 10 | 0.001017s | 0.001055s | 0.001044s | byte equality observed |
| tuple_nest.test | 10 | 0.000975s | 0.000980s | 0.000998s | byte equality observed |
| tuple_tie.test | 10 | 0.000983s | 0.000988s | 0.001015s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001002s | 0.000969s | 0.001025s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001000s | 0.000963s | 0.001011s | byte equality observed |
| unfused.test | 10 | 0.001011s | 0.000988s | 0.001038s | byte equality observed |
| unfused_typed.test | 10 | 0.001010s | 0.000970s | 0.001005s | byte equality observed |
| vector_comparison.test | 10 | 0.001025s | 0.001002s | 0.000998s | byte equality observed |
| vector_construction.test | 10 | 0.000995s | 0.000976s | 0.001009s | byte equality observed |
| vector_conversion.test | 10 | 0.000990s | 0.001035s | 0.001002s | byte equality observed |
| vector_copy.test | 10 | 0.001016s | 0.000986s | 0.000987s | byte equality observed |
| vector_hash.test | 10 | 0.000987s | 0.001004s | 0.001020s | byte equality observed |
| vector_iterator.test | 10 | 0.000995s | 0.000992s | 0.000981s | byte equality observed |
| vector_make.test | 10 | 0.000981s | 0.000973s | 0.000992s | byte equality observed |
| vector_misc.test | 10 | 0.000985s | 0.000964s | 0.001060s | byte equality observed |
| vector_move.test | 10 | 0.001012s | 0.001003s | 0.001017s | byte equality observed |
| vector_mutate.test | 10 | 0.000981s | 0.000993s | 0.000991s | byte equality observed |
| vector_n.test | 10 | 0.001021s | 0.001004s | 0.001029s | byte equality observed |
| vector_nest.test | 10 | 0.000992s | 0.000972s | 0.001008s | byte equality observed |
| vector_tie.test | 10 | 0.001008s | 0.000985s | 0.001031s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000984s | 0.000989s | 0.001006s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000989s | 0.000994s | 0.001021s | byte equality observed |
| vector_value_at.test | 10 | 0.000996s | 0.001004s | 0.000983s | byte equality observed |
| zip.test | 10 | 0.000994s | 0.000980s | 0.000988s | byte equality observed |
| zip2.test | 10 | 0.000999s | 0.000992s | 0.000982s | byte equality observed |
| zip_ignore.test | 10 | 0.000973s | 0.000993s | 0.001014s | byte equality observed |
| zip_view.test | 10 | 0.000977s | 0.001003s | 0.001003s | byte equality observed |
| zip_view2.test | 10 | 0.000995s | 0.001008s | 0.000987s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000978s | 0.000977s | 0.000981s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
