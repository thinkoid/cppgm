# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.348674 | 0.757391 | 1.050546 | 0.001492 | 0.001555 | 0.001435 |
| any.test | RUN | 0.337027 | 0.702669 | 1.002694 | 0.001619 | 0.001567 | 0.001797 |
| clear.test | RUN | 0.243126 | 0.647545 | 0.779481 | 0.001620 | 0.001828 | 0.001713 |
| copy.test | RUN | 0.207952 | 0.478842 | 0.654279 | 0.001559 | 0.001837 | 0.001548 |
| count.test | RUN | 0.232307 | 0.530328 | 0.698381 | 0.001637 | 0.001852 | 0.001604 |
| count_if.test | RUN | 0.223405 | 0.492893 | 0.644791 | 0.001608 | 0.001776 | 0.001551 |
| erase.test | RUN | 0.319253 | 0.875454 | 1.074364 | 0.001706 | 0.001565 | 0.001347 |
| erase_key.test | RUN | 0.306892 | 0.877527 | 1.025775 | 0.001360 | 0.001583 | 0.001712 |
| filter.test | RUN | 0.280752 | 0.765979 | 0.909941 | 0.001809 | 0.001869 | 0.001720 |
| filter_if.test | RUN | 0.311835 | 0.898724 | 1.066291 | 0.001514 | 0.001312 | 0.001688 |
| find.test | RUN | 0.273844 | 0.580402 | 0.825386 | 0.001481 | 0.001867 | 0.001474 |
| find_if.test | RUN | 0.255210 | 0.559520 | 0.766937 | 0.001686 | 0.001582 | 0.001663 |
| fold.test | RUN | 0.274338 | 0.671751 | 0.917812 | 0.001828 | 0.001779 | 0.001570 |
| for_each.test | RUN | 0.244977 | 0.633958 | 0.808882 | 0.001476 | 0.001836 | 0.001761 |
| insert.test | RUN | 0.355459 | 1.093514 | 1.294042 | 0.001696 | 0.001900 | 0.001866 |
| insert_range.test | RUN | 0.353989 | 1.097109 | 1.306591 | 0.001515 | 0.001642 | 0.001452 |
| iter_fold.test | RUN | 0.421162 | 1.039105 | 1.518686 | 0.001858 | 0.001845 | 0.001808 |
| move.test | RUN | 0.211731 | 0.500808 | 0.661612 | 0.001835 | 0.001728 | 0.001382 |
| none.test | RUN | 0.343038 | 0.715502 | 1.029996 | 0.001580 | 0.001664 | 0.001376 |
| pop_back.test | RUN | 0.328615 | 0.920165 | 1.168982 | 0.001588 | 0.001775 | 0.001694 |
| pop_front.test | RUN | 0.284495 | 0.764997 | 0.944402 | 0.001788 | 0.001799 | 0.001668 |
| push_back.test | RUN | 0.351723 | 1.088442 | 1.258201 | 0.001726 | 0.001942 | 0.001730 |
| push_front.test | RUN | 0.309159 | 0.908308 | 1.082465 | 0.001614 | 0.001936 | 0.001785 |
| remove.test | RUN | 0.337698 | 1.021929 | 1.279693 | 0.001579 | 0.001700 | 0.001761 |
| remove_if.test | RUN | 0.317689 | 0.883535 | 1.090964 | 0.001728 | 0.002074 | 0.001578 |
| replace.test | RUN | 0.300487 | 0.830982 | 1.000543 | 0.001812 | 0.001883 | 0.001715 |
| replace_if.test | RUN | 0.289762 | 0.809715 | 0.973478 | 0.001756 | 0.001863 | 0.001778 |
| reverse_fold.test | RUN | 0.466294 | 1.158281 | 1.708835 | 0.001734 | 0.001797 | 0.001548 |
| reverse_iter_fold.test | RUN | 0.476759 | 1.215938 | 1.803477 | 0.002068 | 0.001800 | 0.001508 |
| reverse.test | RUN | 0.296523 | 0.883742 | 1.032839 | 0.001400 | 0.001880 | 0.001529 |
| segmented_for_each.test | RUN | 0.513509 | 1.612300 | 2.031969 | 0.001284 | 0.001914 | 0.001636 |
| segmented_find.test | RUN | 0.318092 | 0.846940 | 1.164708 | 0.001410 | 0.001806 | 0.001564 |
| segmented_find_if.test | RUN | 0.326229 | 0.847991 | 1.167719 | 0.001664 | 0.001604 | 0.001432 |
| segmented_fold.test | RUN | 0.394053 | 1.140889 | 1.484118 | 0.001841 | 0.001750 | 0.001700 |
| transform.test | RUN | 0.306991 | 0.902703 | 1.072421 | 0.001777 | 0.001800 | 0.001566 |
| join.test | RUN | 0.233728 | 0.558923 | 0.754373 | 0.001700 | 0.001810 | 0.001740 |
| zip.test | RUN | 0.402386 | 1.027447 | 1.433530 | 0.001788 | 0.001888 | 0.001622 |
| zip2.test | RUN | 0.404275 | 1.022081 | 1.383578 | 0.001682 | 0.001672 | 0.001772 |
| zip_ignore.test | RUN | 0.308551 | 0.692225 | 0.915516 | 0.001723 | 0.001679 | 0.001668 |
| flatten.test | RUN | 0.280110 | 0.789720 | 0.930532 | 0.001492 | 0.001869 | 0.001855 |
| ticket-5490.test | COMPILE | 0.154693 | 0.330373 | 0.413377 | — | — | — |
| as_deque.test | RUN | 0.283869 | 0.725460 | 0.996694 | 0.001621 | 0.001887 | 0.001812 |
| as_list.test | RUN | 0.318981 | 0.906190 | 1.094135 | 0.001594 | 0.002010 | 0.001628 |
| as_map.test | RUN | 0.308176 | 0.897339 | 1.080183 | 0.001346 | 0.001634 | 0.001544 |
| as_map_assoc.test | RUN | 0.302365 | 0.830258 | 0.992159 | 0.001490 | 0.001800 | 0.001637 |
| as_set.test | RUN | 0.353552 | 1.032137 | 1.220944 | 0.001601 | 0.001320 | 0.001761 |
| as_vector.test | RUN | 0.319191 | 0.921767 | 1.117286 | 0.001368 | 0.001686 | 0.001618 |
| boost_tuple.test | RUN | 0.314850 | 0.931525 | 1.101600 | 0.001674 | 0.001588 | 0.001484 |
| boost_tuple_iterator.test | RUN | 0.219205 | 0.557721 | 0.672926 | 0.001650 | 0.001716 | 0.001787 |
| cons.test | RUN | 0.394602 | 1.036900 | 1.270947 | 0.001590 | 0.001631 | 0.001402 |
| convert_boost_tuple.test | RUN | 0.253520 | 0.786201 | 0.849566 | 0.001681 | 0.001661 | 0.001365 |
| convert_deque.test | RUN | 0.255249 | 0.772120 | 0.843218 | 0.001512 | 0.001534 | 0.001520 |
| convert_list.test | RUN | 0.248404 | 0.800206 | 0.855156 | 0.001569 | 0.001614 | 0.001414 |
| convert_std_pair.test | RUN | 0.263663 | 0.785389 | 0.867452 | 0.001603 | 0.001675 | 0.001630 |
| convert_std_tuple.test | RUN | 0.247925 | 0.774337 | 0.847931 | 0.001587 | 0.001543 | 0.001525 |
| convert_vector.test | RUN | 0.252601 | 0.775563 | 0.854189 | 0.001371 | 0.001670 | 0.001572 |
| filter_view.test | RUN | 0.302774 | 0.830111 | 1.006493 | 0.001531 | 0.001805 | 0.001768 |
| hash.test | RUN | 0.301912 | 0.734224 | 0.976451 | 0.001385 | 0.001762 | 0.001745 |
| io.test | RUN | 0.312008 | 1.050004 | 1.145698 | 0.001556 | 0.002097 | 0.002080 |
| iterator_range.test | RUN | 0.281764 | 0.783777 | 0.966607 | 0.001576 | 0.001788 | 0.001605 |
| joint_view.test | RUN | 0.380495 | 1.333797 | 1.447691 | 0.001728 | 0.001986 | 0.001948 |
| list_comparison.test | RUN | 0.219718 | 0.529462 | 0.716333 | 0.001487 | 0.001762 | 0.001832 |
| list_construction.test | RUN | 0.219141 | 0.538303 | 0.700516 | 0.001479 | 0.001745 | 0.001585 |
| list_copy.test | RUN | 0.323651 | 0.957437 | 1.143496 | 0.001692 | 0.001606 | 0.001368 |
| list_iterator.test | RUN | 0.221073 | 0.515644 | 0.659955 | 0.001432 | 0.001806 | 0.001636 |
| list_hash.test | RUN | 0.298110 | 1.025495 | 0.979700 | 0.001541 | 0.001956 | 0.001783 |
| list_make.test | RUN | 0.226780 | 0.576412 | 0.739151 | 0.001782 | 0.001775 | 0.001670 |
| list_misc.test | RUN | 0.299063 | 0.687933 | 0.875313 | 0.001731 | 0.001837 | 0.001682 |
| list_mutate.test | RUN | 0.212273 | 0.441429 | 0.612948 | 0.001309 | 0.001669 | 0.001528 |
| list_nest.test | RUN | 0.409515 | 1.290680 | 1.650933 | 0.001600 | 0.001513 | 0.001790 |
| list_tie.test | RUN | 0.218177 | 0.518783 | 0.710352 | 0.001446 | 0.001638 | 0.001829 |
| list_value_at.test | RUN | 0.216959 | 0.505882 | 0.642691 | 0.001191 | 0.001801 | 0.001820 |
| deque_comparison.test | RUN | 0.220223 | 0.548536 | 0.696367 | 0.001472 | 0.001630 | 0.001706 |
| deque_construction.test | RUN | 0.220910 | 0.523454 | 0.714534 | 0.001736 | 0.001847 | 0.001732 |
| deque_copy.test | RUN | 0.317986 | 0.894633 | 1.086844 | 0.001411 | 0.001564 | 0.001790 |
| deque_iterator.test | RUN | 0.219960 | 0.564133 | 0.703002 | 0.001590 | 0.001479 | 0.001812 |
| deque_hash.test | RUN | 0.300470 | 0.977274 | 0.948030 | 0.001315 | 0.001871 | 0.001912 |
| deque_is_constructible.test | COMPILE | 0.120703 | 0.253961 | 0.320077 | — | — | — |
| deque_make.test | RUN | 0.226374 | 0.562956 | 0.697245 | 0.001315 | 0.001690 | 0.001784 |
| deque_misc.test | RUN | 0.291639 | 0.663371 | 0.868529 | 0.001506 | 0.001742 | 0.001764 |
| deque_move.test | RUN | 0.227890 | 0.589331 | 0.695106 | 0.001483 | 0.001630 | 0.001690 |
| deque_mutate.test | RUN | 0.202216 | 0.476481 | 0.597655 | 0.001662 | 0.001875 | 0.001774 |
| deque_nest.test | RUN | 0.622090 | 2.030766 | 2.616011 | 0.001536 | 0.001744 | 0.001787 |
| deque_tie.test | RUN | 0.216905 | 0.491815 | 0.635060 | 0.001748 | 0.001774 | 0.001722 |
| deque_value_at.test | RUN | 0.206088 | 0.483211 | 0.658805 | 0.001736 | 0.001811 | 0.001609 |
| front_extended_deque.test | RUN | 0.300198 | 0.735604 | 0.938271 | 0.001638 | 0.001876 | 0.001765 |
| back_extended_deque.test | RUN | 0.305180 | 0.713676 | 0.922267 | 0.001705 | 0.001848 | 0.001617 |
| make_list.test | RUN | 0.238550 | 0.581558 | 0.755971 | 0.001617 | 0.001896 | 0.001733 |
| make_vector.test | RUN | 0.229771 | 0.568202 | 0.701783 | 0.001581 | 0.001605 | 0.001735 |
| map.test | RUN | 0.305221 | 0.898366 | 1.037647 | 0.001792 | 0.001941 | 0.001671 |
| map_comparison.test | RUN | 0.227748 | 0.586202 | 0.719983 | 0.001642 | 0.001880 | 0.001741 |
| map_construction.test | RUN | 0.228675 | 0.533005 | 0.717331 | 0.001498 | 0.001594 | 0.001758 |
| map_copy.test | RUN | 0.274719 | 0.696580 | 0.838533 | 0.001530 | 0.001874 | 0.001654 |
| map_misc.test | RUN | 0.292927 | 0.681795 | 0.869135 | 0.001477 | 0.001654 | 0.001553 |
| map_move.test | RUN | 0.229080 | 0.567010 | 0.710665 | 0.001464 | 0.001597 | 0.001525 |
| map_mutate.test | RUN | 0.206638 | 0.475353 | 0.639960 | 0.001370 | 0.001738 | 0.001403 |
| map_tie.test | RUN | 0.218222 | 0.470229 | 0.613518 | 0.001610 | 0.001782 | 0.001786 |
| nil.test | RUN | 0.145174 | 0.328897 | 0.437277 | 0.001719 | 0.001874 | 0.001739 |
| nview.test | RUN | 0.281621 | 0.688237 | 0.875703 | 0.001717 | 0.001932 | 0.001822 |
| reverse_view.test | RUN | 0.360831 | 1.132716 | 1.345011 | 0.001439 | 0.002095 | 0.001890 |
| segmented_iterator_range.test | RUN | 0.444592 | 1.357609 | 1.635034 | 0.001784 | 0.001934 | 0.002694 |
| set.test | RUN | 0.277262 | 0.753524 | 0.922379 | 0.001586 | 0.001906 | 0.001718 |
| single_view.test | RUN | 0.258131 | 0.687546 | 0.858835 | 0.001772 | 0.001496 | 0.001800 |
| std_pair.test | RUN | 0.321333 | 0.878645 | 1.065601 | 0.001727 | 0.001856 | 0.001594 |
| boost_array.test | RUN | 0.267432 | 0.613893 | 0.831528 | 0.001655 | 0.001820 | 0.001692 |
| array.test | RUN | 0.272696 | 0.621212 | 0.795663 | 0.001596 | 0.001693 | 0.001775 |
| std_array.test | RUN | 0.271711 | 0.611581 | 0.798786 | 0.001746 | 0.001700 | 0.001651 |
| tuple_comparison.test | RUN | 0.237729 | 0.578964 | 0.731993 | 0.001713 | 0.001879 | 0.001426 |
| tuple_construction.test | RUN | 0.250624 | 0.567138 | 0.736690 | 0.001792 | 0.001818 | 0.001531 |
| tuple_conversion.test | RUN | 0.523779 | 1.758184 | 2.347980 | 0.001486 | 0.001918 | 0.001485 |
| tuple_copy.test | RUN | 0.351912 | 1.029422 | 1.286045 | 0.001515 | 0.001588 | 0.001605 |
| tuple_element.test | RUN | 0.224770 | 0.547966 | 0.708371 | 0.001710 | 0.001764 | 0.001709 |
| tuple_make.test | RUN | 0.251387 | 0.618785 | 0.772847 | 0.001638 | 0.001932 | 0.001754 |
| tuple_misc.test | RUN | 0.304526 | 0.698485 | 0.950250 | 0.001607 | 0.001417 | 0.001725 |
| tuple_mutate.test | RUN | 0.221611 | 0.497538 | 0.702861 | 0.001731 | 0.001460 | 0.001521 |
| tuple_nest.test | RUN | 0.894733 | 3.574379 | 4.557151 | 0.001615 | 0.001665 | 0.001800 |
| tuple_hash.test | RUN | 0.311965 | 1.008142 | 1.046522 | 0.001725 | 0.001559 | 0.001722 |
| tuple_tie.test | RUN | 0.233623 | 0.554347 | 0.706051 | 0.001834 | 0.001684 | 0.001658 |
| tuple_traits__maybe_variadic.test | RUN | 0.253066 | 0.680356 | 0.757299 | 0.001633 | 0.001737 | 0.001780 |
| tuple_traits__no_variadic.test | RUN | 0.284448 | 0.656941 | 0.842331 | 0.001520 | 0.001962 | 0.001747 |
| transform_view.test | RUN | 0.380002 | 1.096964 | 1.314316 | 0.001891 | 0.001622 | 0.001612 |
| identity_view.test | RUN | 0.359441 | 1.016283 | 1.238562 | 0.001617 | 0.001864 | 0.001499 |
| vector_comparison.test | RUN | 0.227732 | 0.592616 | 0.732715 | 0.001526 | 0.001696 | 0.001774 |
| vector_construction.test | RUN | 0.228286 | 0.535521 | 0.690760 | 0.001249 | 0.001746 | 0.001813 |
| vector_conversion.test | RUN | 0.651026 | 2.294941 | 3.053305 | 0.001593 | 0.001830 | 0.001738 |
| vector_copy.test | RUN | 0.338727 | 1.012436 | 1.273053 | 0.001571 | 0.001817 | 0.001830 |
| vector_iterator.test | RUN | 0.224689 | 0.568360 | 0.703156 | 0.001784 | 0.001910 | 0.001598 |
| vector_make.test | RUN | 0.234285 | 0.570965 | 0.703856 | 0.001504 | 0.001627 | 0.001832 |
| vector_misc.test | RUN | 0.293130 | 0.693571 | 0.885508 | 0.001494 | 0.001622 | 0.001590 |
| vector_move.test | RUN | 0.230909 | 0.582516 | 0.717149 | 0.001291 | 0.001724 | 0.001706 |
| vector_mutate.test | RUN | 0.203801 | 0.488862 | 0.612027 | 0.001651 | 0.001516 | 0.001832 |
| vector_n.test | RUN | 0.256587 | 0.580686 | 0.810374 | 0.001529 | 0.001521 | 0.001888 |
| vector_nest.test | RUN | 0.887997 | 3.742357 | 4.457808 | 0.001618 | 0.001586 | 0.001284 |
| vector_hash.test | RUN | 0.297175 | 0.910917 | 0.934375 | 0.001525 | 0.001939 | 0.001456 |
| vector_tie.test | RUN | 0.226227 | 0.528807 | 0.700656 | 0.001770 | 0.001809 | 0.001733 |
| vector_traits__maybe_variadic.test | RUN | 0.237607 | 0.640147 | 0.703468 | 0.001772 | 0.001798 | 0.001676 |
| vector_traits__no_variadic.test | RUN | 0.251269 | 0.661489 | 0.753590 | 0.001624 | 0.001753 | 0.001726 |
| vector_value_at.test | RUN | 0.210505 | 0.474336 | 0.647433 | 0.001161 | 0.001371 | 0.001671 |
| zip_view.test | RUN | 0.431227 | 1.200959 | 1.594752 | 0.001641 | 0.001824 | 0.001114 |
| zip_view2.test | RUN | 0.345890 | 0.881060 | 1.231174 | 0.001355 | 0.001672 | 0.001437 |
| zip_view_ignore.test | RUN | 0.323054 | 0.794070 | 1.103902 | 0.001505 | 0.001729 | 0.001588 |
| repetitive_view.test | RUN | 0.586338 | 1.530293 | 2.075331 | 0.001544 | 0.001608 | 0.001636 |
| deduce_sequence.test | RUN | 0.268453 | 0.640761 | 0.838201 | 0.001427 | 0.001752 | 0.001612 |
| adapt_adt_named.test | RUN | 0.314653 | 0.897119 | 1.021788 | 0.001492 | 0.001886 | 0.001766 |
| adapt_adt_named_empty.test | RUN | 0.272657 | 0.691780 | 0.882260 | 0.001384 | 0.001698 | 0.001747 |
| adapt_adt.test | RUN | 0.357386 | 1.178611 | 1.232673 | 0.001498 | 0.001569 | 0.001689 |
| adapt_adt_empty.test | RUN | 0.267674 | 0.744210 | 0.862045 | 0.001391 | 0.001662 | 0.001476 |
| adapt_assoc_adt_named.test | RUN | 0.345244 | 0.904225 | 1.145630 | 0.001321 | 0.001500 | 0.001417 |
| adapt_assoc_adt_named_empty.test | RUN | 0.281627 | 0.715401 | 0.845547 | 0.001539 | 0.001706 | 0.001629 |
| adapt_assoc_adt.test | RUN | 0.361695 | 0.958327 | 1.168297 | 0.001394 | 0.001748 | 0.001621 |
| adapt_assoc_adt_empty.test | RUN | 0.269838 | 0.718868 | 0.846796 | 0.001660 | 0.001623 | 0.001685 |
| adapt_assoc_struct_named.test | RUN | 0.349642 | 0.916008 | 1.074071 | 0.001554 | 0.001782 | 0.001601 |
| adapt_assoc_struct_named_empty.test | RUN | 0.272010 | 0.715102 | 0.860674 | 0.001704 | 0.001674 | 0.001675 |
| adapt_assoc_struct.test | RUN | 0.310720 | 0.870498 | 1.028468 | 0.001904 | 0.001757 | 0.001584 |
| adapt_assoc_struct_empty.test | RUN | 0.270823 | 0.730279 | 0.864799 | 0.001546 | 0.001330 | 0.001815 |
| adapt_assoc_tpl_adt.test | RUN | 0.339840 | 0.980406 | 1.208377 | 0.001500 | 0.001729 | 0.001814 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.267448 | 0.722062 | 0.859070 | 0.001298 | 0.001774 | 0.001729 |
| adapt_assoc_tpl_struct.test | RUN | 0.302634 | 0.831933 | 1.009638 | 0.001420 | 0.001812 | 0.001547 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.267191 | 0.718272 | 0.851397 | 0.001694 | 0.001743 | 0.001608 |
| adapt_struct_named.test | RUN | 0.304826 | 0.842444 | 1.018509 | 0.001420 | 0.001690 | 0.001808 |
| adapt_struct_named_empty.test | RUN | 0.267649 | 0.702297 | 0.857957 | 0.001476 | 0.001918 | 0.001589 |
| adapt_struct.test | RUN | 0.333433 | 0.975603 | 1.133459 | 0.001526 | 0.001861 | 0.001715 |
| adapt_struct_empty.test | RUN | 0.269088 | 0.701857 | 0.859833 | 0.001753 | 0.001830 | 0.001700 |
| adapt_tpl_adt.test | RUN | 0.338386 | 1.137594 | 1.194981 | 0.001468 | 0.001635 | 0.001517 |
| adapt_tpl_adt_empty.test | RUN | 0.274327 | 0.715651 | 0.848725 | 0.001568 | 0.001675 | 0.001720 |
| adapt_tpl_struct.test | RUN | 0.296251 | 0.804717 | 0.960353 | 0.001780 | 0.001832 | 0.001447 |
| adapt_tpl_struct_empty.test | RUN | 0.280660 | 0.702263 | 0.855267 | 0.001560 | 0.001621 | 0.001581 |
| adt_attribute_proxy.test | RUN | 0.315687 | 0.710609 | 0.916797 | 0.001824 | 0.001888 | 0.001638 |
| define_struct.test | RUN | 0.376634 | 0.973735 | 1.217097 | 0.001826 | 0.001760 | 0.001826 |
| define_struct_empty.test | RUN | 0.327285 | 0.803492 | 1.014938 | 0.001690 | 0.001393 | 0.001602 |
| define_struct_move.test | RUN | 0.214574 | 0.460627 | 0.606118 | 0.001718 | 0.001910 | 0.001411 |
| define_struct_inline.test | RUN | 0.408828 | 1.168241 | 1.373902 | 0.001540 | 0.001543 | 0.001781 |
| define_struct_inline_empty.test | RUN | 0.332160 | 0.795762 | 1.023515 | 0.001650 | 0.001710 | 0.001584 |
| define_struct_inline_move.test | RUN | 0.219264 | 0.472560 | 0.618316 | 0.001778 | 0.001750 | 0.001710 |
| define_assoc_struct.test | RUN | 0.360530 | 0.944618 | 1.168200 | 0.001498 | 0.001821 | 0.001666 |
| define_assoc_struct_empty.test | RUN | 0.331603 | 0.802707 | 1.019791 | 0.001610 | 0.001794 | 0.001711 |
| define_assoc_struct_move.test | RUN | 0.214583 | 0.453255 | 0.594421 | 0.001504 | 0.001764 | 0.001654 |
| define_tpl_struct.test | RUN | 0.369527 | 0.947999 | 1.147118 | 0.001631 | 0.001756 | 0.001502 |
| define_tpl_struct_empty.test | RUN | 0.330457 | 0.803181 | 1.005427 | 0.001353 | 0.001567 | 0.001654 |
| define_tpl_struct_move.test | RUN | 0.211943 | 0.487375 | 0.621424 | 0.001678 | 0.001743 | 0.001652 |
| define_tpl_struct_inline.test | RUN | 0.390443 | 1.092210 | 1.256462 | 0.001898 | 0.001552 | 0.001727 |
| define_tpl_struct_inline_empty.test | RUN | 0.341434 | 0.838275 | 0.976299 | 0.001585 | 0.001838 | 0.001734 |
| define_tpl_struct_inline_move.test | RUN | 0.215589 | 0.447976 | 0.621362 | 0.001538 | 0.001820 | 0.001759 |
| define_assoc_tpl_struct.test | RUN | 0.381988 | 0.939457 | 1.200903 | 0.001775 | 0.001864 | 0.001633 |
| define_assoc_tpl_struct_empty.test | RUN | 0.335159 | 0.800743 | 1.012031 | 0.001647 | 0.001350 | 0.001638 |
| define_assoc_tpl_struct_move.test | RUN | 0.219591 | 0.476740 | 0.606615 | 0.001485 | 0.001595 | 0.001748 |
| std_tuple.test | RUN | 0.221766 | 0.502423 | 0.662033 | 0.001508 | 0.001625 | 0.001650 |
| std_tuple_iterator.test | RUN | 0.222445 | 0.550898 | 0.675383 | 0.001527 | 0.001828 | 0.001587 |
| ref_vector.test | RUN | 0.250212 | 0.558781 | 0.715420 | 0.001780 | 0.001862 | 0.001724 |
| flatten_view.test | RUN | 0.263010 | 0.678823 | 0.831630 | 0.001608 | 0.001836 | 0.001794 |
| github-159.test | COMPILE | 0.122628 | 0.257051 | 0.323263 | — | — | — |
| github-176.test | RUN | 0.277379 | 0.617449 | 0.734697 | 0.001734 | 0.001908 | 0.001701 |
| size.test | COMPILE | 0.239494 | 0.432627 | 0.593506 | — | — | — |
| fused.test | RUN | 0.297873 | 0.654387 | 0.849909 | 0.001532 | 0.001446 | 0.001698 |
| fused_function_object.test | RUN | 0.220440 | 0.485004 | 0.648156 | 0.001644 | 0.001747 | 0.001604 |
| fused_procedure.test | RUN | 0.281989 | 0.631581 | 0.813518 | 0.001472 | 0.001810 | 0.001736 |
| unfused.test | RUN | 0.229952 | 0.505050 | 0.676533 | 0.001564 | 0.001658 | 0.001683 |
| unfused_typed.test | RUN | 0.228671 | 0.544103 | 0.671017 | 0.001638 | 0.001697 | 0.001767 |
| make_fused.test | RUN | 0.290838 | 0.637240 | 0.858905 | 0.001730 | 0.001564 | 0.001764 |
| make_fused_function_object.test | RUN | 0.219688 | 0.507639 | 0.637781 | 0.001536 | 0.001682 | 0.001631 |
| make_fused_procedure.test | RUN | 0.283924 | 0.638235 | 0.817146 | 0.001754 | 0.001706 | 0.001771 |
| make_unfused.test | RUN | 0.220950 | 0.502803 | 0.655278 | 0.001780 | 0.001841 | 0.001760 |
| invoke.test | RUN | 0.567460 | 1.789585 | 2.243905 | 0.001696 | 0.001555 | 0.001714 |
| invoke_function_object.test | RUN | 0.267616 | 0.651672 | 0.834538 | 0.001778 | 0.001714 | 0.001626 |
| invoke_procedure.test | RUN | 0.455820 | 1.356023 | 1.648801 | 0.001367 | 0.001609 | 0.001725 |
| swap.test | RUN | 0.349096 | 0.784452 | 1.098010 | 0.001415 | 0.001613 | 0.001674 |
| is_sequence.test | COMPILE | 0.059432 | 0.116319 | 0.138528 | — | — | — |
| is_view.test | COMPILE | 0.058911 | 0.120532 | 0.138203 | — | — | — |
| pair_deque.test | COMPILE | 0.124600 | 0.259635 | 0.346726 | — | — | — |
| pair_list.test | COMPILE | 0.121547 | 0.257003 | 0.351379 | — | — | — |
| pair_map.test | COMPILE | 0.128554 | 0.272362 | 0.314525 | — | — | — |
| pair_set.test | COMPILE | 0.131485 | 0.266306 | 0.333192 | — | — | — |
| pair_vector.test | COMPILE | 0.125536 | 0.266252 | 0.304944 | — | — | — |
| pair_nest.test | COMPILE | 0.051041 | 0.106835 | 0.137478 | — | — | — |
| index_sequence.test | COMPILE | 0.045830 | 0.077238 | 0.093482 | — | — | — |
| and.test | COMPILE | 0.034579 | 0.058568 | 0.066590 | — | — | — |
| tag_of.test | COMPILE | 0.058538 | 0.113574 | 0.126885 | — | — | — |
| unused.test | COMPILE | 0.031381 | 0.074520 | 0.076359 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.056641 | 0.113744 | 0.130468 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.044126 | 0.107511 | 0.118538 | — | — | — |
| quick.test | RUN | 0.164750 | 0.357528 | 0.403124 | 0.000502 | 0.001264 | 0.001215 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.006×, 1.002× | 1.000× |
| clang | 0.996× | 0.992×, 1.000× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001061s | 0.001008s | 0.001034s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001033s | 0.001024s | 0.001028s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001022s | 0.001020s | 0.001045s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001015s | 0.001005s | 0.001006s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001015s | 0.001031s | 0.001012s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001027s | 0.000999s | 0.001035s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001023s | 0.001031s | 0.000996s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001027s | 0.001008s | 0.001011s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001025s | 0.001026s | 0.001030s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001023s | 0.000994s | 0.000987s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001024s | 0.001024s | 0.001031s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001009s | 0.001012s | 0.001013s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001036s | 0.001020s | 0.001004s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001016s | 0.001021s | 0.000988s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001035s | 0.001026s | 0.001018s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001017s | 0.001057s | 0.000994s | byte equality observed |
| adapt_struct.test | 10 | 0.001041s | 0.001029s | 0.001040s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001023s | 0.001034s | 0.001002s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001019s | 0.001028s | 0.000995s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001023s | 0.001071s | 0.000984s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001028s | 0.001032s | 0.000999s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001022s | 0.001008s | 0.001015s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001007s | 0.001008s | 0.001003s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001012s | 0.001017s | 0.001022s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000996s | 0.000997s | 0.001011s | byte equality observed |
| all.test | 10 | 0.001003s | 0.000982s | 0.001007s | byte equality observed |
| any.test | 10 | 0.001005s | 0.000999s | 0.001002s | byte equality observed |
| array.test | 10 | 0.000991s | 0.001005s | 0.001008s | byte equality observed |
| as_deque.test | 10 | 0.001009s | 0.000987s | 0.001025s | byte equality observed |
| as_list.test | 10 | 0.001050s | 0.001053s | 0.001053s | byte equality observed |
| as_map.test | 10 | 0.001020s | 0.001030s | 0.001044s | byte equality observed |
| as_map_assoc.test | 10 | 0.001006s | 0.001063s | 0.001044s | byte equality observed |
| as_set.test | 10 | 0.001014s | 0.001020s | 0.001049s | byte equality observed |
| as_vector.test | 10 | 0.001021s | 0.001057s | 0.001022s | byte equality observed |
| back_extended_deque.test | 10 | 0.000996s | 0.000990s | 0.000998s | byte equality observed |
| boost_array.test | 10 | 0.001000s | 0.000985s | 0.000985s | byte equality observed |
| boost_tuple.test | 10 | 0.001019s | 0.001012s | 0.001010s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001000s | 0.001007s | 0.000988s | byte equality observed |
| clear.test | 10 | 0.001007s | 0.001017s | 0.000999s | byte equality observed |
| cons.test | 10 | 0.001026s | 0.001025s | 0.001021s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000998s | 0.001002s | 0.001028s | byte equality observed |
| convert_deque.test | 10 | 0.001014s | 0.001003s | 0.001021s | byte equality observed |
| convert_list.test | 10 | 0.001009s | 0.000995s | 0.000998s | byte equality observed |
| convert_std_pair.test | 10 | 0.001009s | 0.001005s | 0.001071s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001000s | 0.001016s | 0.000977s | byte equality observed |
| convert_vector.test | 10 | 0.001006s | 0.001022s | 0.000979s | byte equality observed |
| copy.test | 10 | 0.001011s | 0.001002s | 0.001000s | byte equality observed |
| count.test | 10 | 0.001020s | 0.000992s | 0.001013s | byte equality observed |
| count_if.test | 10 | 0.001032s | 0.000991s | 0.000998s | byte equality observed |
| deduce_sequence.test | 10 | 0.000992s | 0.000992s | 0.000999s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001021s | 0.001024s | 0.001019s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001012s | 0.001008s | 0.001015s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001002s | 0.000987s | 0.000998s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001026s | 0.001020s | 0.001023s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001021s | 0.000991s | 0.001000s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000994s | 0.001024s | 0.000982s | byte equality observed |
| define_struct.test | 10 | 0.001019s | 0.001017s | 0.001040s | byte equality observed |
| define_struct_empty.test | 10 | 0.000999s | 0.001007s | 0.001039s | byte equality observed |
| define_struct_inline.test | 10 | 0.001001s | 0.001023s | 0.001038s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001001s | 0.001021s | 0.001040s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000994s | 0.000981s | 0.001015s | byte equality observed |
| define_struct_move.test | 10 | 0.001007s | 0.000976s | 0.001007s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001028s | 0.000994s | 0.001010s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001011s | 0.000998s | 0.000998s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001014s | 0.001004s | 0.001008s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001003s | 0.000992s | 0.001007s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000978s | 0.000989s | 0.000991s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000974s | 0.001029s | 0.001002s | byte equality observed |
| deque_comparison.test | 10 | 0.000982s | 0.001021s | 0.000994s | byte equality observed |
| deque_construction.test | 10 | 0.000994s | 0.000992s | 0.001005s | byte equality observed |
| deque_copy.test | 10 | 0.000998s | 0.001020s | 0.000994s | byte equality observed |
| deque_hash.test | 10 | 0.001025s | 0.000997s | 0.001001s | byte equality observed |
| deque_iterator.test | 10 | 0.001003s | 0.001031s | 0.001011s | byte equality observed |
| deque_make.test | 10 | 0.001036s | 0.001010s | 0.000990s | byte equality observed |
| deque_misc.test | 10 | 0.000999s | 0.000994s | 0.000992s | byte equality observed |
| deque_move.test | 10 | 0.001026s | 0.001034s | 0.001023s | byte equality observed |
| deque_mutate.test | 10 | 0.000998s | 0.000989s | 0.000980s | byte equality observed |
| deque_nest.test | 10 | 0.001020s | 0.001019s | 0.000998s | byte equality observed |
| deque_tie.test | 10 | 0.000991s | 0.001013s | 0.000991s | byte equality observed |
| deque_value_at.test | 10 | 0.001017s | 0.001012s | 0.000992s | byte equality observed |
| erase.test | 10 | 0.001026s | 0.001034s | 0.001025s | byte equality observed |
| erase_key.test | 10 | 0.001028s | 0.001041s | 0.001029s | byte equality observed |
| filter.test | 10 | 0.001012s | 0.001037s | 0.001002s | byte equality observed |
| filter_if.test | 10 | 0.001018s | 0.001025s | 0.001048s | byte equality observed |
| filter_view.test | 10 | 0.001031s | 0.001038s | 0.001023s | byte equality observed |
| find.test | 10 | 0.001020s | 0.001052s | 0.001019s | byte equality observed |
| find_if.test | 10 | 0.001017s | 0.001033s | 0.001003s | byte equality observed |
| flatten.test | 10 | 0.001004s | 0.001012s | 0.001013s | byte equality observed |
| flatten_view.test | 10 | 0.000998s | 0.001022s | 0.001002s | byte equality observed |
| fold.test | 10 | 0.001037s | 0.001048s | 0.001012s | byte equality observed |
| for_each.test | 10 | 0.001022s | 0.001049s | 0.001033s | byte equality observed |
| front_extended_deque.test | 10 | 0.001003s | 0.000987s | 0.001016s | byte equality observed |
| fused.test | 10 | 0.000989s | 0.000982s | 0.000995s | byte equality observed |
| fused_function_object.test | 10 | 0.000991s | 0.000984s | 0.001043s | byte equality observed |
| fused_procedure.test | 10 | 0.000993s | 0.000997s | 0.001020s | byte equality observed |
| github-176.test | 10 | 0.000992s | 0.000994s | 0.001005s | byte equality observed |
| hash.test | 10 | 0.000989s | 0.001019s | 0.001009s | byte equality observed |
| identity_view.test | 10 | 0.001036s | 0.001026s | 0.001012s | byte equality observed |
| insert.test | 10 | 0.001027s | 0.001026s | 0.001031s | byte equality observed |
| insert_range.test | 10 | 0.001033s | 0.001038s | 0.001046s | byte equality observed |
| invoke.test | 10 | 0.000996s | 0.001004s | 0.001005s | byte equality observed |
| invoke_function_object.test | 10 | 0.000989s | 0.001002s | 0.000995s | byte equality observed |
| invoke_procedure.test | 10 | 0.001012s | 0.001025s | 0.001003s | byte equality observed |
| io.test | 10 | 0.001150s | 0.001125s | 0.001134s | byte equality observed |
| iter_fold.test | 10 | 0.001007s | 0.001011s | 0.001036s | byte equality observed |
| iterator_range.test | 10 | 0.001029s | 0.001052s | 0.001034s | byte equality observed |
| join.test | 10 | 0.001002s | 0.000997s | 0.000993s | byte equality observed |
| joint_view.test | 10 | 0.001057s | 0.001051s | 0.001046s | byte equality observed |
| list_comparison.test | 10 | 0.000988s | 0.000996s | 0.001007s | byte equality observed |
| list_construction.test | 10 | 0.000984s | 0.001032s | 0.001013s | byte equality observed |
| list_copy.test | 10 | 0.000996s | 0.000993s | 0.001008s | byte equality observed |
| list_hash.test | 10 | 0.001003s | 0.001018s | 0.001041s | byte equality observed |
| list_iterator.test | 10 | 0.001008s | 0.000991s | 0.000980s | byte equality observed |
| list_make.test | 10 | 0.001012s | 0.000999s | 0.001006s | byte equality observed |
| list_misc.test | 10 | 0.001016s | 0.001005s | 0.000997s | byte equality observed |
| list_mutate.test | 10 | 0.001012s | 0.001033s | 0.001000s | byte equality observed |
| list_nest.test | 10 | 0.000995s | 0.000984s | 0.000991s | byte equality observed |
| list_tie.test | 10 | 0.001010s | 0.001007s | 0.000986s | byte equality observed |
| list_value_at.test | 10 | 0.000990s | 0.001002s | 0.000995s | byte equality observed |
| make_fused.test | 10 | 0.000999s | 0.000988s | 0.001027s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000989s | 0.000995s | 0.000977s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001004s | 0.000983s | 0.001005s | byte equality observed |
| make_list.test | 10 | 0.000996s | 0.001029s | 0.001008s | byte equality observed |
| make_unfused.test | 10 | 0.000997s | 0.001031s | 0.000975s | byte equality observed |
| make_vector.test | 10 | 0.000998s | 0.001022s | 0.001005s | byte equality observed |
| map.test | 10 | 0.001026s | 0.001040s | 0.001022s | byte equality observed |
| map_comparison.test | 10 | 0.000993s | 0.000995s | 0.001001s | byte equality observed |
| map_construction.test | 10 | 0.000998s | 0.000989s | 0.001015s | byte equality observed |
| map_copy.test | 10 | 0.000999s | 0.000995s | 0.001036s | byte equality observed |
| map_misc.test | 10 | 0.001000s | 0.000992s | 0.001020s | byte equality observed |
| map_move.test | 10 | 0.001023s | 0.001003s | 0.001018s | byte equality observed |
| map_mutate.test | 10 | 0.000997s | 0.000982s | 0.000993s | byte equality observed |
| map_tie.test | 10 | 0.000973s | 0.000996s | 0.001004s | byte equality observed |
| move.test | 10 | 0.000989s | 0.001006s | 0.001045s | byte equality observed |
| nil.test | 10 | 0.001002s | 0.001019s | 0.000986s | byte equality observed |
| none.test | 10 | 0.001001s | 0.001004s | 0.000996s | byte equality observed |
| nview.test | 10 | 0.000992s | 0.001017s | 0.001010s | byte equality observed |
| pop_back.test | 10 | 0.001031s | 0.001043s | 0.001040s | byte equality observed |
| pop_front.test | 10 | 0.001026s | 0.001074s | 0.001009s | byte equality observed |
| push_back.test | 10 | 0.001035s | 0.001044s | 0.001020s | byte equality observed |
| push_front.test | 10 | 0.001054s | 0.001038s | 0.001025s | byte equality observed |
| quick.test | 10 | 0.000458s | 0.000971s | 0.000993s | byte equality observed |
| ref_vector.test | 10 | 0.001024s | 0.000990s | 0.001008s | byte equality observed |
| remove.test | 10 | 0.001046s | 0.001039s | 0.001026s | byte equality observed |
| remove_if.test | 10 | 0.001043s | 0.001035s | 0.001020s | byte equality observed |
| repetitive_view.test | 10 | 0.000988s | 0.000990s | 0.000989s | byte equality observed |
| replace.test | 10 | 0.001010s | 0.001019s | 0.001040s | byte equality observed |
| replace_if.test | 10 | 0.001028s | 0.001011s | 0.001009s | byte equality observed |
| reverse.test | 10 | 0.001050s | 0.001037s | 0.001017s | byte equality observed |
| reverse_fold.test | 10 | 0.001010s | 0.001007s | 0.001013s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001019s | 0.000993s | 0.001010s | byte equality observed |
| reverse_view.test | 10 | 0.001015s | 0.001000s | 0.001017s | byte equality observed |
| segmented_find.test | 10 | 0.001001s | 0.000985s | 0.000993s | byte equality observed |
| segmented_find_if.test | 10 | 0.001001s | 0.001059s | 0.000978s | byte equality observed |
| segmented_fold.test | 10 | 0.001032s | 0.001027s | 0.001045s | byte equality observed |
| segmented_for_each.test | 10 | 0.001023s | 0.001013s | 0.001026s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001031s | 0.001045s | 0.001055s | byte equality observed |
| set.test | 10 | 0.001036s | 0.001009s | 0.001029s | byte equality observed |
| single_view.test | 10 | 0.001031s | 0.001030s | 0.001018s | byte equality observed |
| std_array.test | 10 | 0.000986s | 0.000993s | 0.000990s | byte equality observed |
| std_pair.test | 10 | 0.001034s | 0.001019s | 0.001021s | byte equality observed |
| std_tuple.test | 10 | 0.001002s | 0.000995s | 0.000997s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001001s | 0.000975s | 0.000981s | byte equality observed |
| swap.test | 10 | 0.001015s | 0.000989s | 0.000974s | byte equality observed |
| transform.test | 10 | 0.001041s | 0.001066s | 0.001023s | byte equality observed |
| transform_view.test | 10 | 0.001039s | 0.001053s | 0.001032s | byte equality observed |
| tuple_comparison.test | 10 | 0.000987s | 0.001015s | 0.001020s | byte equality observed |
| tuple_construction.test | 10 | 0.000985s | 0.001024s | 0.001008s | byte equality observed |
| tuple_conversion.test | 10 | 0.000988s | 0.001028s | 0.001019s | byte equality observed |
| tuple_copy.test | 10 | 0.001004s | 0.001036s | 0.001010s | byte equality observed |
| tuple_element.test | 10 | 0.000995s | 0.001002s | 0.001028s | byte equality observed |
| tuple_hash.test | 10 | 0.000996s | 0.001001s | 0.001010s | byte equality observed |
| tuple_make.test | 10 | 0.001028s | 0.001035s | 0.000987s | byte equality observed |
| tuple_misc.test | 10 | 0.001026s | 0.000992s | 0.001005s | byte equality observed |
| tuple_mutate.test | 10 | 0.001001s | 0.000995s | 0.001005s | byte equality observed |
| tuple_nest.test | 10 | 0.001012s | 0.001004s | 0.000999s | byte equality observed |
| tuple_tie.test | 10 | 0.001019s | 0.000987s | 0.000985s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001008s | 0.001016s | 0.001001s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001014s | 0.000999s | 0.000994s | byte equality observed |
| unfused.test | 10 | 0.001004s | 0.000992s | 0.001026s | byte equality observed |
| unfused_typed.test | 10 | 0.000984s | 0.000991s | 0.001036s | byte equality observed |
| vector_comparison.test | 10 | 0.000991s | 0.000989s | 0.001005s | byte equality observed |
| vector_construction.test | 10 | 0.001001s | 0.000993s | 0.001014s | byte equality observed |
| vector_conversion.test | 10 | 0.000987s | 0.000996s | 0.001000s | byte equality observed |
| vector_copy.test | 10 | 0.001003s | 0.001012s | 0.000995s | byte equality observed |
| vector_hash.test | 10 | 0.000996s | 0.001005s | 0.000987s | byte equality observed |
| vector_iterator.test | 10 | 0.001002s | 0.001008s | 0.001021s | byte equality observed |
| vector_make.test | 10 | 0.001034s | 0.000980s | 0.001012s | byte equality observed |
| vector_misc.test | 10 | 0.000990s | 0.000992s | 0.001013s | byte equality observed |
| vector_move.test | 10 | 0.001024s | 0.001021s | 0.001014s | byte equality observed |
| vector_mutate.test | 10 | 0.000976s | 0.000987s | 0.000995s | byte equality observed |
| vector_n.test | 10 | 0.001037s | 0.001033s | 0.001032s | byte equality observed |
| vector_nest.test | 10 | 0.000966s | 0.000970s | 0.000977s | byte equality observed |
| vector_tie.test | 10 | 0.000986s | 0.001008s | 0.000989s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000999s | 0.000971s | 0.000996s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000993s | 0.000979s | 0.000999s | byte equality observed |
| vector_value_at.test | 10 | 0.001010s | 0.000992s | 0.000985s | byte equality observed |
| zip.test | 10 | 0.000996s | 0.000985s | 0.000998s | byte equality observed |
| zip2.test | 10 | 0.000977s | 0.000999s | 0.000995s | byte equality observed |
| zip_ignore.test | 10 | 0.000987s | 0.001005s | 0.001020s | byte equality observed |
| zip_view.test | 10 | 0.000995s | 0.001002s | 0.000970s | byte equality observed |
| zip_view2.test | 10 | 0.000998s | 0.000994s | 0.000998s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000988s | 0.001005s | 0.000998s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
