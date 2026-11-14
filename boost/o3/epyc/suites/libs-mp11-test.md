# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.036252 | 0.071611 | 0.112526 | — | — | — |
| complex_h.test | COMPILE | 0.148612 | 0.314129 | 0.493300 | — | — | — |
| mp_size.test | RUN | 0.172464 | 0.957752 | 0.581359 | 0.001692 | 0.001810 | 0.001689 |
| mp_size_2.test | RUN | 0.015302 | 0.035506 | 0.052329 | 0.000582 | 0.000803 | 0.001734 |
| mp_empty.test | RUN | 0.162167 | 0.620343 | 0.592453 | 0.001752 | 0.001785 | 0.001576 |
| mp_empty_2.test | RUN | 0.015741 | 0.039870 | 0.058939 | 0.000607 | 0.000677 | 0.001537 |
| mp_assign.test | RUN | 0.186975 | 1.244296 | 0.799895 | 0.001513 | 0.001958 | 0.001565 |
| mp_assign_2.test | RUN | 0.016672 | 0.037427 | 0.050177 | 0.000693 | 0.000812 | 0.001520 |
| mp_clear.test | RUN | 0.157702 | 0.542071 | 0.598505 | 0.001385 | 0.001638 | 0.001669 |
| mp_clear_2.test | RUN | 0.015822 | 0.036335 | 0.050907 | 0.000615 | 0.000642 | 0.001757 |
| mp_front.test | RUN | 0.172816 | 0.856565 | 0.606473 | 0.001550 | 0.001796 | 0.001646 |
| mp_front_2.test | RUN | 0.015974 | 0.036948 | 0.058772 | 0.000575 | 0.000736 | 0.001729 |
| mp_pop_front.test | RUN | 0.172630 | 0.889924 | 0.667090 | 0.001580 | 0.001673 | 0.001629 |
| mp_pop_front_2.test | RUN | 0.016547 | 0.037301 | 0.052966 | 0.000636 | 0.000632 | 0.001469 |
| mp_second.test | RUN | 0.168215 | 0.573796 | 0.633869 | 0.001560 | 0.001642 | 0.001396 |
| mp_second_2.test | RUN | 0.015756 | 0.037908 | 0.054477 | 0.000691 | 0.000713 | 0.001796 |
| mp_third.test | RUN | 0.160224 | 0.539538 | 0.535443 | 0.001671 | 0.001868 | 0.001748 |
| mp_third_2.test | RUN | 0.016648 | 0.035499 | 0.059273 | 0.000591 | 0.000700 | 0.001593 |
| mp_push_front.test | RUN | 0.213334 | 1.881525 | 1.028416 | 0.001621 | 0.001739 | 0.001750 |
| mp_push_front_2.test | RUN | 0.015201 | 0.035571 | 0.051198 | 0.000695 | 0.000680 | 0.001696 |
| mp_push_back.test | RUN | 0.220627 | 1.885439 | 1.027202 | 0.001520 | 0.001659 | 0.001426 |
| mp_push_back_2.test | RUN | 0.016196 | 0.037309 | 0.052701 | 0.000740 | 0.000774 | 0.001762 |
| mp_rename.test | RUN | 0.213496 | 1.735853 | 0.846443 | 0.001689 | 0.001588 | 0.001736 |
| mp_rename_2.test | RUN | 0.015568 | 0.037173 | 0.057149 | 0.000623 | 0.000775 | 0.001812 |
| mp_append.test | RUN | 0.214330 | 1.981096 | 0.990508 | 0.001606 | 0.001971 | 0.001647 |
| mp_append_2.test | RUN | 0.439009 | 4.340217 | 1.302051 | 0.001657 | 0.001876 | 0.001474 |
| mp_append_3.test | RUN | 0.014514 | 0.035270 | 0.055032 | 0.000720 | 0.000646 | 0.001792 |
| mp_append_sf.test | RUN | 0.154255 | 0.496338 | 0.526019 | 0.001615 | 0.001816 | 0.001701 |
| mp_replace_front.test | RUN | 0.192334 | 1.405086 | 0.829564 | 0.001466 | 0.001678 | 0.001433 |
| mp_replace_front_2.test | RUN | 0.016714 | 0.037000 | 0.052652 | 0.000563 | 0.000731 | 0.001791 |
| mp_replace_second.test | RUN | 0.188475 | 0.921390 | 0.707078 | 0.001520 | 0.001870 | 0.001827 |
| mp_replace_second_2.test | RUN | 0.016181 | 0.037136 | 0.058583 | 0.000702 | 0.000770 | 0.001887 |
| mp_replace_third.test | RUN | 0.179588 | 0.740583 | 0.667086 | 0.001657 | 0.001945 | 0.001805 |
| mp_replace_third_2.test | RUN | 0.016256 | 0.037497 | 0.051585 | 0.000715 | 0.000702 | 0.001745 |
| mp_apply_q.test | RUN | 0.199641 | 1.720795 | 0.862256 | 0.001662 | 0.001770 | 0.001402 |
| mp_apply_q_sf.test | RUN | 0.164733 | 0.522777 | 0.575073 | 0.001646 | 0.001805 | 0.001362 |
| mp_is_list.test | RUN | 0.167454 | 0.603505 | 0.563464 | 0.001558 | 0.001743 | 0.001689 |
| mp_list_c.test | RUN | 0.172578 | 0.718364 | 0.641859 | 0.001640 | 0.001774 | 0.001828 |
| mp_transform_front.test | RUN | 0.192646 | 1.407533 | 0.768329 | 0.001564 | 0.001784 | 0.001443 |
| mp_transform_front_2.test | RUN | 0.016870 | 0.037006 | 0.050368 | 0.000613 | 0.000595 | 0.001744 |
| mp_transform_second.test | RUN | 0.175311 | 1.207036 | 0.668511 | 0.001484 | 0.001788 | 0.001516 |
| mp_transform_second_2.test | RUN | 0.015320 | 0.035816 | 0.056477 | 0.000635 | 0.000762 | 0.001782 |
| mp_transform_third.test | RUN | 0.166745 | 0.911982 | 0.649939 | 0.001379 | 0.001755 | 0.001845 |
| mp_transform_third_2.test | RUN | 0.015596 | 0.038237 | 0.057340 | 0.000559 | 0.000618 | 0.001590 |
| mp_list_v.test | RUN | 0.014602 | 0.036862 | 0.053434 | 0.000602 | 0.000749 | 0.001504 |
| mp_rename_v.test | RUN | 0.015480 | 0.037302 | 0.054300 | 0.000615 | 0.000610 | 0.001444 |
| mp_is_value_list.test | RUN | 0.156200 | 0.398449 | 0.530310 | 0.001680 | 0.001912 | 0.001852 |
| mp_transform.test | RUN | 0.356023 | 2.987867 | 1.602402 | 0.001800 | 0.001630 | 0.001881 |
| mp_transform_2.test | RUN | 0.153611 | 0.344146 | 0.538751 | 0.001412 | 0.001800 | 0.001771 |
| mp_transform_q.test | RUN | 0.351051 | 2.814084 | 1.543845 | 0.001698 | 0.001889 | 0.001808 |
| mp_transform_q_2.test | RUN | 0.393537 | 0.933155 | 2.061593 | 0.001631 | 0.001781 | 0.001344 |
| mp_transform_sf.test | RUN | 0.168857 | 0.528514 | 0.606342 | 0.001756 | 0.001847 | 0.001594 |
| mp_transform_if.test | RUN | 0.207425 | 1.406533 | 0.880070 | 0.001709 | 0.001809 | 0.001746 |
| mp_transform_if_q.test | RUN | 0.214600 | 1.410800 | 0.893488 | 0.001648 | 0.001846 | 0.001599 |
| mp_filter.test | RUN | 0.181969 | 0.862962 | 0.673218 | 0.001670 | 0.001755 | 0.001635 |
| mp_fill.test | RUN | 0.174450 | 0.651936 | 0.654962 | 0.001781 | 0.001680 | 0.001695 |
| mp_fill_2.test | RUN | 0.026909 | 0.056333 | 0.086912 | 0.000630 | 0.000758 | 0.001718 |
| mp_count.test | RUN | 0.335417 | 1.530025 | 1.004605 | 0.001691 | 0.001814 | 0.001767 |
| mp_count_if.test | RUN | 0.346196 | 1.558939 | 1.099884 | 0.001568 | 0.001690 | 0.001808 |
| mp_count_if_q.test | RUN | 0.183241 | 1.019638 | 0.627503 | 0.001262 | 0.001552 | 0.001713 |
| mp_contains.test | RUN | 0.176784 | 0.634803 | 0.577575 | 0.001522 | 0.001674 | 0.001788 |
| mp_starts_with.test | RUN | 0.170610 | 0.621046 | 0.613213 | 0.001474 | 0.001735 | 0.001538 |
| mp_starts_with_sf.test | RUN | 0.167612 | 0.551692 | 0.594197 | 0.001524 | 0.001559 | 0.001811 |
| mp_repeat.test | RUN | 0.253227 | 2.492941 | 1.053499 | 0.001774 | 0.001692 | 0.001721 |
| mp_repeat_2.test | RUN | 0.028017 | 0.054963 | 0.098029 | 0.000746 | 0.000767 | 0.001708 |
| mp_repeat_3.test | RUN | 0.217706 | 0.339459 | 0.574762 | 0.001602 | 0.001897 | 0.001655 |
| mp_product.test | RUN | 0.195572 | 1.529303 | 0.837965 | 0.001570 | 0.001880 | 0.001616 |
| mp_drop.test | RUN | 0.211367 | 1.879985 | 0.950716 | 0.001462 | 0.001578 | 0.001824 |
| mp_drop_2.test | RUN | 0.027716 | 0.058879 | 0.087338 | 0.000613 | 0.000790 | 0.001773 |
| mp_iota.test | RUN | 0.203513 | 1.603894 | 0.820671 | 0.001610 | 0.001767 | 0.001735 |
| mp_iota_2.test | RUN | 0.218484 | 1.910222 | 0.863533 | 0.001515 | 0.001886 | 0.001796 |
| mp_at.test | RUN | 0.182419 | 0.853916 | 0.684950 | 0.001521 | 0.001802 | 0.001781 |
| mp_at_2.test | RUN | 0.027116 | 0.054644 | 0.099554 | 0.000711 | 0.000632 | 0.001715 |
| mp_at_sf.test | RUN | 0.169668 | 0.531580 | 0.539532 | 0.001655 | 0.001842 | 0.001772 |
| mp_take.test | RUN | 0.276046 | 2.488065 | 1.113632 | 0.001741 | 0.001385 | 0.001830 |
| mp_take_2.test | RUN | 0.028214 | 0.058301 | 0.099029 | 0.000716 | 0.000735 | 0.001704 |
| mp_slice.test | RUN | 0.318335 | 2.505803 | 1.435342 | 0.001596 | 0.001800 | 0.001856 |
| mp_slice_2.test | RUN | 0.028231 | 0.058228 | 0.087355 | 0.000758 | 0.000771 | 0.001697 |
| mp_replace.test | RUN | 0.210022 | 1.282081 | 0.896803 | 0.001789 | 0.001809 | 0.001614 |
| mp_replace_if.test | RUN | 0.201894 | 1.131883 | 0.848186 | 0.001790 | 0.001783 | 0.001849 |
| mp_replace_if_q.test | RUN | 0.200168 | 1.125225 | 0.830672 | 0.001578 | 0.001854 | 0.001874 |
| mp_copy_if.test | RUN | 0.205797 | 1.591129 | 0.820704 | 0.001711 | 0.001854 | 0.001762 |
| mp_copy_if_q.test | RUN | 0.206449 | 1.595917 | 0.824034 | 0.001824 | 0.001777 | 0.001644 |
| mp_remove.test | RUN | 0.204742 | 1.079919 | 0.791182 | 0.001816 | 0.001881 | 0.001536 |
| mp_remove_if.test | RUN | 0.210822 | 1.712627 | 0.844539 | 0.001670 | 0.001870 | 0.001804 |
| mp_remove_if_q.test | RUN | 0.210910 | 1.693293 | 0.860270 | 0.001647 | 0.001668 | 0.001832 |
| mp_partition.test | RUN | 0.206236 | 1.598630 | 0.911960 | 0.001733 | 0.001582 | 0.001777 |
| mp_partition_q.test | RUN | 0.209334 | 1.587723 | 0.907745 | 0.001678 | 0.001780 | 0.001582 |
| mp_sort.test | RUN | 0.194991 | 1.139558 | 0.808039 | 0.001492 | 0.001758 | 0.001852 |
| mp_sort_q.test | RUN | 0.196590 | 1.130096 | 0.811077 | 0.001682 | 0.001528 | 0.001599 |
| mp_find.test | RUN | 0.193503 | 1.221314 | 0.680093 | 0.001702 | 0.001736 | 0.001940 |
| mp_find_if.test | RUN | 0.184981 | 1.116291 | 0.686915 | 0.001824 | 0.001800 | 0.001408 |
| mp_find_if_q.test | RUN | 0.200553 | 1.255435 | 0.832385 | 0.001605 | 0.001793 | 0.001876 |
| mp_reverse.test | RUN | 0.396285 | 3.320447 | 1.553118 | 0.001698 | 0.001760 | 0.001858 |
| mp_fold.test | RUN | 0.659600 | 2.607871 | 3.891807 | 0.001744 | 0.001803 | 0.001764 |
| mp_fold_q.test | RUN | 0.188930 | 1.103722 | 0.754635 | 0.001616 | 0.001863 | 0.001864 |
| mp_fold_q_sf.test | RUN | 0.179312 | 0.515380 | 0.611182 | 0.001504 | 0.001851 | 0.001851 |
| mp_reverse_fold.test | RUN | 0.316860 | 2.436052 | 1.103113 | 0.001529 | 0.001677 | 0.001751 |
| mp_reverse_fold_q.test | RUN | 0.195521 | 1.369670 | 0.803529 | 0.001742 | 0.001619 | 0.001850 |
| mp_unique.test | RUN | 0.195712 | 1.199896 | 0.786453 | 0.001524 | 0.001648 | 0.001774 |
| mp_unique_if.test | RUN | 0.342351 | 2.567750 | 1.267192 | 0.001734 | 0.001784 | 0.001754 |
| mp_unique_if_q.test | RUN | 0.298634 | 2.530770 | 1.058315 | 0.001729 | 0.001565 | 0.001639 |
| mp_all_of.test | RUN | 0.480082 | 1.391372 | 1.337434 | 0.001575 | 0.001852 | 0.001817 |
| mp_all_of_q.test | RUN | 0.166426 | 0.592770 | 0.637048 | 0.001567 | 0.001782 | 0.001648 |
| mp_any_of.test | RUN | 0.457270 | 1.430729 | 1.371372 | 0.001752 | 0.001904 | 0.001738 |
| mp_any_of_q.test | RUN | 0.180076 | 0.600987 | 0.622117 | 0.001682 | 0.001781 | 0.001700 |
| mp_none_of.test | RUN | 0.454555 | 1.453262 | 1.350178 | 0.001569 | 0.001768 | 0.001946 |
| mp_none_of_q.test | RUN | 0.174186 | 0.627674 | 0.558544 | 0.001604 | 0.001739 | 0.001695 |
| mp_replace_at.test | RUN | 0.208899 | 1.288716 | 0.894409 | 0.001739 | 0.001528 | 0.001800 |
| mp_replace_at_c.test | RUN | 0.205260 | 1.275236 | 0.875620 | 0.001592 | 0.001883 | 0.001548 |
| mp_for_each.test | RUN | 0.198906 | 0.891565 | 1.026477 | 0.001478 | 0.001688 | 0.001800 |
| mp_insert.test | RUN | 0.300493 | 2.494561 | 1.238370 | 0.001686 | 0.001825 | 0.001809 |
| mp_insert_2.test | RUN | 0.028726 | 0.055748 | 0.096731 | 0.000804 | 0.000709 | 0.001497 |
| mp_erase.test | RUN | 0.332006 | 2.644353 | 1.530069 | 0.001591 | 0.001677 | 0.001891 |
| mp_erase_2.test | RUN | 0.028161 | 0.060152 | 0.100383 | 0.000765 | 0.000799 | 0.001777 |
| mp_with_index.test | RUN | 0.433239 | 5.488607 | 3.392360 | 0.002118 | 0.002244 | 0.002274 |
| mp_with_index_cx.test | RUN | 0.003442 | 0.017970 | 0.026089 | 0.000746 | 0.000761 | 0.001630 |
| mp_from_sequence.test | RUN | 0.213885 | 1.439025 | 0.842912 | 0.001640 | 0.001804 | 0.001664 |
| mp_from_sequence_2.test | RUN | 0.217584 | 1.660504 | 0.934431 | 0.001599 | 0.001805 | 0.001915 |
| mp_from_sequence_3.test | RUN | 0.181695 | 0.727803 | 0.631891 | 0.001640 | 0.001736 | 0.001737 |
| mp_min_element.test | RUN | 0.173788 | 0.648212 | 0.639681 | 0.001531 | 0.001722 | 0.001514 |
| mp_min_element_2.test | RUN | 0.026758 | 0.057571 | 0.100213 | 0.000684 | 0.000700 | 0.001772 |
| mp_min_element_q.test | RUN | 0.181360 | 0.657472 | 0.590142 | 0.001415 | 0.001817 | 0.001542 |
| mp_min_element_q_2.test | RUN | 0.028334 | 0.059025 | 0.098232 | 0.000603 | 0.000717 | 0.001760 |
| mp_max_element.test | RUN | 0.180161 | 0.690008 | 0.624850 | 0.001372 | 0.001910 | 0.001719 |
| mp_max_element_2.test | RUN | 0.028815 | 0.057314 | 0.083053 | 0.000689 | 0.000796 | 0.001514 |
| mp_max_element_q.test | RUN | 0.173258 | 0.674751 | 0.633060 | 0.001531 | 0.001914 | 0.001802 |
| mp_max_element_q_2.test | RUN | 0.027426 | 0.057201 | 0.101650 | 0.000581 | 0.000811 | 0.001562 |
| mp_nth_element.test | RUN | 0.194519 | 0.932777 | 0.760935 | 0.001658 | 0.001592 | 0.001632 |
| mp_nth_element_q.test | RUN | 0.191937 | 0.949857 | 0.779175 | 0.001566 | 0.001653 | 0.001777 |
| mp_back.test | RUN | 0.190640 | 0.784966 | 0.743756 | 0.001596 | 0.001495 | 0.001488 |
| mp_back_2.test | RUN | 0.028313 | 0.055482 | 0.098833 | 0.000497 | 0.000607 | 0.001495 |
| mp_pop_back.test | RUN | 0.506636 | 5.099629 | 1.464324 | 0.001590 | 0.001748 | 0.001552 |
| mp_pop_back_2.test | RUN | 0.028440 | 0.055068 | 0.091449 | 0.000749 | 0.000577 | 0.001442 |
| mp_flatten.test | RUN | 0.239879 | 1.794289 | 1.044929 | 0.001701 | 0.001861 | 0.001399 |
| mp_rotate_left.test | RUN | 0.243926 | 1.941659 | 1.004083 | 0.001626 | 0.001323 | 0.001679 |
| mp_rotate_right.test | RUN | 0.217830 | 1.932180 | 1.017000 | 0.001690 | 0.001694 | 0.001374 |
| mp_power_set.test | RUN | 0.216452 | 1.885196 | 1.017759 | 0.001728 | 0.001884 | 0.001694 |
| mp_partial_sum.test | RUN | 0.282143 | 2.510869 | 1.150838 | 0.001651 | 0.001781 | 0.001815 |
| mp_iterate.test | RUN | 0.195275 | 0.756673 | 0.802421 | 0.001469 | 0.001828 | 0.001695 |
| mp_pairwise_fold.test | RUN | 0.217794 | 1.711195 | 1.016491 | 0.001552 | 0.001944 | 0.001541 |
| mp_pairwise_fold_q.test | RUN | 0.172165 | 0.530074 | 0.645965 | 0.001804 | 0.001879 | 0.001998 |
| mp_sliding_fold.test | RUN | 0.396606 | 3.287350 | 1.937725 | 0.001634 | 0.001819 | 0.001743 |
| mp_sliding_fold_q.test | RUN | 0.399361 | 3.278875 | 1.917578 | 0.001506 | 0.001757 | 0.001726 |
| mp_intersperse.test | RUN | 0.209411 | 1.226608 | 0.907555 | 0.001619 | 0.001819 | 0.001809 |
| mp_split.test | RUN | 0.285585 | 2.390620 | 1.214743 | 0.001512 | 0.001838 | 0.001386 |
| mp_join.test | RUN | 0.230701 | 1.969424 | 1.082246 | 0.001628 | 0.001884 | 0.001862 |
| integral.test | RUN | 0.178901 | 0.884351 | 0.678831 | 0.001346 | 0.002018 | 0.001492 |
| mp_value.test | RUN | 0.012319 | 0.032206 | 0.047242 | 0.000714 | 0.000689 | 0.001672 |
| mp_identity.test | RUN | 0.172814 | 0.820632 | 0.666631 | 0.001576 | 0.001858 | 0.001873 |
| mp_inherit.test | RUN | 0.164256 | 0.582235 | 0.617263 | 0.001484 | 0.001844 | 0.001457 |
| mp_if.test | RUN | 0.166954 | 0.679482 | 0.620620 | 0.001692 | 0.001822 | 0.001804 |
| mp_if_sf.test | RUN | 0.155367 | 0.493311 | 0.559064 | 0.001594 | 0.001678 | 0.001801 |
| mp_eval_if.test | RUN | 0.170559 | 0.719827 | 0.625260 | 0.001649 | 0.001664 | 0.001786 |
| mp_eval_if_sf.test | RUN | 0.157744 | 0.512784 | 0.564617 | 0.001640 | 0.001834 | 0.001584 |
| mp_valid.test | RUN | 0.163868 | 0.522436 | 0.575815 | 0.003253 | 0.001651 | 0.001784 |
| mp_defer.test | RUN | 0.180722 | 0.854689 | 0.680283 | 0.001398 | 0.001951 | 0.001786 |
| mp_quote.test | RUN | 0.177669 | 0.880110 | 0.702641 | 0.001773 | 0.001869 | 0.001874 |
| mp_invoke_q.test | RUN | 0.192049 | 1.133643 | 0.764838 | 0.001860 | 0.001900 | 0.001067 |
| mp_invoke_q_sf.test | RUN | 0.158608 | 0.496888 | 0.581312 | 0.001661 | 0.001944 | 0.001862 |
| mp_quote_trait.test | RUN | 0.172842 | 0.956206 | 0.632207 | 0.001626 | 0.001737 | 0.001808 |
| mp_cond.test | RUN | 0.167157 | 0.598052 | 0.590831 | 0.001664 | 0.001554 | 0.001782 |
| mp_cond_sf.test | RUN | 0.161221 | 0.512357 | 0.561824 | 0.001728 | 0.001906 | 0.001466 |
| mp_not_fn.test | RUN | 0.165493 | 0.523669 | 0.520284 | 0.001643 | 0.001608 | 0.001676 |
| mp_eval_if_not.test | RUN | 0.173112 | 0.708926 | 0.632474 | 0.001804 | 0.001851 | 0.001805 |
| mp_eval_or.test | RUN | 0.167156 | 0.396050 | 0.602603 | 0.001842 | 0.001923 | 0.001523 |
| mp_compose.test | RUN | 0.201970 | 1.165824 | 0.745839 | 0.001814 | 0.001717 | 0.001827 |
| mp_valid_and_true.test | RUN | 0.199040 | 0.613168 | 0.566814 | 0.001676 | 0.001779 | 0.001398 |
| mp_compose_sf.test | COMPILE | 0.052460 | 0.073897 | 0.146159 | — | — | — |
| integer_sequence.test | RUN | 0.196925 | 1.158188 | 0.822221 | 0.001554 | 0.001649 | 0.001847 |
| tuple_for_each.test | RUN | 0.167224 | 0.442452 | 0.599211 | 0.001551 | 0.001976 | 0.001775 |
| tuple_for_each_cx.test | COMPILE | 0.030876 | 0.065964 | 0.110913 | — | — | — |
| tuple_apply.test | RUN | 0.169053 | 0.447043 | 0.632908 | 0.001862 | 0.001502 | 0.001823 |
| tuple_apply_cx.test | COMPILE | 0.045804 | 0.088627 | 0.152973 | — | — | — |
| construct_from_tuple.test | RUN | 0.172290 | 0.470226 | 0.577181 | 0.001700 | 0.001924 | 0.001667 |
| construct_from_tuple_cx.test | COMPILE | 0.044881 | 0.091091 | 0.133431 | — | — | — |
| tuple_transform.test | RUN | 0.268490 | 0.962502 | 1.223953 | 0.001748 | 0.001538 | 0.001471 |
| tuple_transform_2.test | RUN | 0.234798 | 0.736518 | 1.112456 | 0.001721 | 0.001710 | 0.001496 |
| tuple_transform_cx.test | COMPILE | 0.039698 | 0.083711 | 0.126731 | — | — | — |
| mp_set_contains.test | RUN | 0.169148 | 0.619327 | 0.618131 | 0.002016 | 0.001696 | 0.001767 |
| mp_set_push_back.test | RUN | 0.225840 | 1.857306 | 1.015128 | 0.001800 | 0.001908 | 0.001850 |
| mp_set_push_front.test | RUN | 0.281145 | 2.251146 | 1.135223 | 0.001620 | 0.001858 | 0.001598 |
| mp_is_set.test | RUN | 0.173315 | 0.625540 | 0.634412 | 0.001785 | 0.001806 | 0.001868 |
| mp_set_union.test | RUN | 0.214457 | 1.588678 | 0.952698 | 0.002040 | 0.001880 | 0.001606 |
| mp_set_union_sf.test | RUN | 0.165468 | 0.488330 | 0.581728 | 0.001540 | 0.001889 | 0.001628 |
| mp_set_difference.test | RUN | 0.201038 | 1.253037 | 0.822042 | 0.001749 | 0.001832 | 0.001798 |
| mp_set_difference_sf.test | RUN | 0.166075 | 0.520780 | 0.589098 | 0.001494 | 0.001822 | 0.001424 |
| mp_set_intersection.test | RUN | 0.191781 | 1.249650 | 0.806349 | 0.001703 | 0.001794 | 0.001854 |
| mp_set_intersection_sf.test | RUN | 0.160561 | 0.484134 | 0.584660 | 0.001357 | 0.001917 | 0.001614 |
| mp_all.test | RUN | 0.168974 | 0.614396 | 0.575829 | 0.001774 | 0.001625 | 0.001819 |
| mp_all_2.test | RUN | 0.472523 | 1.342282 | 1.360385 | 0.001764 | 0.001864 | 0.001634 |
| mp_and.test | RUN | 0.165531 | 0.585517 | 0.604190 | 0.001647 | 0.001794 | 0.001750 |
| mp_any.test | RUN | 0.164579 | 0.619810 | 0.584752 | 0.001274 | 0.001638 | 0.001657 |
| mp_any_2.test | RUN | 0.470964 | 1.351752 | 1.348826 | 0.001622 | 0.001795 | 0.001605 |
| mp_or.test | RUN | 0.168382 | 0.619722 | 0.582969 | 0.001811 | 0.001916 | 0.001688 |
| mp_same.test | RUN | 0.332894 | 1.017997 | 0.897968 | 0.001319 | 0.001840 | 0.001722 |
| mp_plus.test | RUN | 0.173318 | 0.727486 | 0.628261 | 0.001379 | 0.001724 | 0.001740 |
| mp_less.test | RUN | 0.169437 | 0.608852 | 0.586619 | 0.001688 | 0.001796 | 0.001894 |
| mp_min.test | RUN | 0.164118 | 0.561062 | 0.569328 | 0.001652 | 0.001734 | 0.001788 |
| mp_max.test | RUN | 0.168616 | 0.632294 | 0.592802 | 0.001277 | 0.001780 | 0.001761 |
| mp_similar.test | RUN | 0.165375 | 0.619094 | 0.594091 | 0.001567 | 0.001797 | 0.001854 |
| mp_map_find.test | RUN | 0.193064 | 1.115006 | 0.776273 | 0.001600 | 0.001584 | 0.001815 |
| mp_map_find_2.test | RUN | 0.182235 | 0.467277 | 0.686519 | 0.001606 | 0.001793 | 0.001674 |
| mp_map_find_3.test | RUN | 0.181052 | 0.435103 | 0.632725 | 0.001518 | 0.001481 | 0.001607 |
| mp_map_find_4.test | RUN | 0.172202 | 0.420646 | 0.607387 | 0.001394 | 0.001690 | 0.001815 |
| mp_map_contains.test | RUN | 0.175227 | 0.621872 | 0.618613 | 0.001757 | 0.001924 | 0.001822 |
| mp_map_insert.test | RUN | 0.228353 | 2.081130 | 1.039822 | 0.001594 | 0.001856 | 0.001750 |
| mp_map_replace.test | RUN | 0.297340 | 2.358180 | 1.275015 | 0.001357 | 0.001877 | 0.001825 |
| mp_map_erase.test | RUN | 0.226807 | 1.750054 | 1.066968 | 0.001584 | 0.001892 | 0.001616 |
| mp_map_update.test | RUN | 0.199189 | 1.163061 | 0.792635 | 0.001785 | 0.001828 | 0.001451 |
| mp_map_update_q.test | RUN | 0.199826 | 1.127551 | 0.804737 | 0.001771 | 0.001531 | 0.001786 |
| mp_map_keys.test | RUN | 0.195257 | 1.006564 | 0.786915 | 0.001581 | 0.001838 | 0.001837 |
| mp_is_map.test | RUN | 0.187919 | 0.620940 | 0.660362 | 0.001596 | 0.001719 | 0.001814 |
| mp_bind.test | RUN | 0.220488 | 1.841335 | 0.938286 | 0.001798 | 0.001792 | 0.001823 |
| mp_bind_q.test | RUN | 0.196136 | 1.134550 | 0.779596 | 0.001772 | 0.001685 | 0.001516 |
| mp_bind_front.test | RUN | 0.192238 | 1.236895 | 0.761481 | 0.001578 | 0.001730 | 0.001606 |
| mp_bind_back.test | RUN | 0.189454 | 1.258236 | 0.755471 | 0.001520 | 0.001549 | 0.001867 |
| mp_lambda.test | RUN | 0.419711 | 3.703293 | 1.919366 | 0.001510 | 0.001384 | 0.001751 |
| mpl.test | RUN | 0.386004 | 1.017902 | 1.533165 | 0.001819 | 0.001759 | 0.001495 |
| mpl_list.test | RUN | 0.214149 | 0.753349 | 0.745824 | 0.001698 | 0.001780 | 0.001788 |
| mpl_tuple.test | RUN | 0.215991 | 0.753392 | 0.746926 | 0.001594 | 0.001554 | 0.001839 |
| version.test | RUN | 0.107607 | 0.282584 | 0.388529 | 0.001670 | 0.001796 | 0.001695 |
| mp11_version.test | RUN | 0.138114 | 0.313914 | 0.406823 | 0.001528 | 0.001694 | 0.001800 |
| list_version.test | RUN | 0.111383 | 0.284718 | 0.385074 | 0.001491 | 0.001714 | 0.001829 |
| algorithm_version.test | RUN | 0.129881 | 0.300462 | 0.421108 | 0.001489 | 0.001782 | 0.001514 |
| integral_version.test | RUN | 0.107242 | 0.270483 | 0.366288 | 0.001680 | 0.001543 | 0.001806 |
| utility_version.test | RUN | 0.112578 | 0.281210 | 0.393059 | 0.001331 | 0.001654 | 0.001712 |
| function_version.test | RUN | 0.115742 | 0.273558 | 0.391763 | 0.001527 | 0.001688 | 0.001844 |
| map_version.test | RUN | 0.129145 | 0.302593 | 0.412118 | 0.001620 | 0.001689 | 0.001777 |
| set_version.test | RUN | 0.117632 | 0.278894 | 0.400286 | 0.001555 | 0.001709 | 0.001520 |
| bind_version.test | RUN | 0.126620 | 0.301335 | 0.427049 | 0.001504 | 0.001608 | 0.001740 |
| integer_sequence_version.test | RUN | 0.111952 | 0.268142 | 0.330412 | 0.001370 | 0.001572 | 0.001384 |
| tuple_version.test | RUN | 0.125313 | 0.303477 | 0.351857 | 0.001301 | 0.001684 | 0.001318 |
| mpl_version.test | RUN | 0.097110 | 0.210359 | 0.363070 | 0.001284 | 0.001305 | 0.001356 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.012× | 1.028×, 0.997× | 0.998× |
| clang | 1.029×† | 0.968×, 1.089× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000958s | 0.000984s | 0.000980s | byte equality observed |
| bind_version.test | 10 | 0.000960s | 0.000971s | 0.000987s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000981s | 0.000983s | 0.000977s | byte equality observed |
| function_version.test | 10 | 0.000976s | 0.000994s | 0.001041s | byte equality observed |
| integer_sequence.test | 10 | 0.000958s | 0.001003s | 0.000984s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000966s | 0.000979s | 0.001006s | byte equality observed |
| integral.test | 10 | 0.000967s | 0.001004s | 0.000988s | byte equality observed |
| integral_version.test | 10 | 0.000976s | 0.000983s | 0.001062s | byte equality observed |
| list_version.test | 10 | 0.000953s | 0.000966s | 0.001016s | byte equality observed |
| map_version.test | 10 | 0.000982s | 0.000979s | 0.001015s | byte equality observed |
| mp11_version.test | 10 | 0.000969s | 0.000977s | 0.000997s | byte equality observed |
| mp_all.test | 10 | 0.000960s | 0.000982s | 0.000994s | byte equality observed |
| mp_all_2.test | 10 | 0.000992s | 0.000986s | 0.001020s | byte equality observed |
| mp_all_of.test | 10 | 0.000972s | 0.000994s | 0.001042s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000984s | 0.000995s | 0.001015s | byte equality observed |
| mp_and.test | 10 | 0.000990s | 0.000997s | 0.001038s | byte equality observed |
| mp_any.test | 10 | 0.001017s | 0.000983s | 0.001033s | byte equality observed |
| mp_any_2.test | 10 | 0.000976s | 0.000994s | 0.001027s | byte equality observed |
| mp_any_of.test | 10 | 0.001000s | 0.001010s | 0.001000s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001008s | 0.001012s | 0.001013s | byte equality observed |
| mp_append.test | 10 | 0.001007s | 0.001000s | 0.001038s | byte equality observed |
| mp_append_2.test | 10 | 0.001038s | 0.001055s | 0.001022s | byte equality observed |
| mp_append_3.test | 10 | 0.000462s | 0.000459s | 0.000971s | byte equality observed |
| mp_append_sf.test | 10 | 0.001018s | 0.001012s | 0.001006s | byte equality observed |
| mp_apply_q.test | 10 | 0.001008s | 0.001013s | 0.001025s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000994s | 0.001015s | 0.000992s | byte equality observed |
| mp_assign.test | 10 | 0.001029s | 0.001011s | 0.000989s | byte equality observed |
| mp_assign_2.test | 10 | 0.000465s | 0.000460s | 0.001017s | byte equality observed |
| mp_at.test | 10 | 0.001035s | 0.000999s | 0.001008s | byte equality observed |
| mp_at_2.test | 10 | 0.000466s | 0.000463s | 0.000999s | byte equality observed |
| mp_at_sf.test | 10 | 0.001012s | 0.000995s | 0.001004s | byte equality observed |
| mp_back.test | 10 | 0.001014s | 0.001038s | 0.001001s | byte equality observed |
| mp_back_2.test | 10 | 0.000467s | 0.000456s | 0.000966s | byte equality observed |
| mp_bind.test | 10 | 0.001020s | 0.001016s | 0.001021s | byte equality observed |
| mp_bind_back.test | 10 | 0.000994s | 0.001026s | 0.000976s | byte equality observed |
| mp_bind_front.test | 10 | 0.001044s | 0.001010s | 0.001009s | byte equality observed |
| mp_bind_q.test | 10 | 0.001009s | 0.001017s | 0.000982s | byte equality observed |
| mp_clear.test | 10 | 0.001008s | 0.001010s | 0.000992s | byte equality observed |
| mp_clear_2.test | 10 | 0.000465s | 0.000461s | 0.000994s | byte equality observed |
| mp_compose.test | 10 | 0.001009s | 0.000984s | 0.001014s | byte equality observed |
| mp_cond.test | 10 | 0.001014s | 0.000970s | 0.001029s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001005s | 0.000975s | 0.000989s | byte equality observed |
| mp_contains.test | 10 | 0.001007s | 0.000978s | 0.000999s | byte equality observed |
| mp_copy_if.test | 10 | 0.001015s | 0.000981s | 0.001006s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001016s | 0.000999s | 0.001021s | byte equality observed |
| mp_count.test | 10 | 0.001020s | 0.000982s | 0.001027s | byte equality observed |
| mp_count_if.test | 10 | 0.000995s | 0.000996s | 0.001015s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000985s | 0.001003s | 0.001003s | byte equality observed |
| mp_defer.test | 10 | 0.000999s | 0.000988s | 0.000992s | byte equality observed |
| mp_drop.test | 10 | 0.001012s | 0.001033s | 0.001001s | byte equality observed |
| mp_drop_2.test | 10 | 0.000463s | 0.000450s | 0.000991s | byte equality observed |
| mp_empty.test | 10 | 0.001014s | 0.001015s | 0.001025s | byte equality observed |
| mp_empty_2.test | 10 | 0.000456s | 0.000456s | 0.000954s | byte equality observed |
| mp_erase.test | 10 | 0.001049s | 0.001037s | 0.000987s | byte equality observed |
| mp_erase_2.test | 10 | 0.000463s | 0.000459s | 0.000988s | byte equality observed |
| mp_eval_if.test | 10 | 0.001030s | 0.000994s | 0.001036s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001007s | 0.000996s | 0.000994s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001028s | 0.000999s | 0.001020s | byte equality observed |
| mp_eval_or.test | 10 | 0.001039s | 0.001004s | 0.001015s | byte equality observed |
| mp_fill.test | 10 | 0.001038s | 0.001033s | 0.000994s | byte equality observed |
| mp_fill_2.test | 10 | 0.000459s | 0.000459s | 0.000973s | byte equality observed |
| mp_filter.test | 10 | 0.001021s | 0.000998s | 0.000989s | byte equality observed |
| mp_find.test | 10 | 0.001018s | 0.001027s | 0.000992s | byte equality observed |
| mp_find_if.test | 10 | 0.001007s | 0.000973s | 0.000995s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001013s | 0.000997s | 0.000985s | byte equality observed |
| mp_flatten.test | 10 | 0.000987s | 0.000988s | 0.001006s | byte equality observed |
| mp_fold.test | 10 | 0.001017s | 0.001014s | 0.001008s | byte equality observed |
| mp_fold_q.test | 10 | 0.001019s | 0.000992s | 0.001001s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001027s | 0.000971s | 0.001003s | byte equality observed |
| mp_for_each.test | 10 | 0.001030s | 0.000990s | 0.000997s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001023s | 0.000988s | 0.001000s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001004s | 0.000986s | 0.001007s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001011s | 0.000986s | 0.000998s | byte equality observed |
| mp_front.test | 10 | 0.001036s | 0.001014s | 0.000983s | byte equality observed |
| mp_front_2.test | 10 | 0.000460s | 0.000454s | 0.000957s | byte equality observed |
| mp_identity.test | 10 | 0.001014s | 0.000996s | 0.000993s | byte equality observed |
| mp_if.test | 10 | 0.001014s | 0.000986s | 0.001006s | byte equality observed |
| mp_if_sf.test | 10 | 0.001010s | 0.001014s | 0.001004s | byte equality observed |
| mp_inherit.test | 10 | 0.001005s | 0.000991s | 0.000977s | byte equality observed |
| mp_insert.test | 10 | 0.001045s | 0.001032s | 0.000984s | byte equality observed |
| mp_insert_2.test | 10 | 0.000467s | 0.000465s | 0.000967s | byte equality observed |
| mp_intersperse.test | 10 | 0.001024s | 0.001003s | 0.000977s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001036s | 0.001027s | 0.000987s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001011s | 0.001025s | 0.000976s | byte equality observed |
| mp_iota.test | 10 | 0.000998s | 0.000993s | 0.000989s | byte equality observed |
| mp_iota_2.test | 10 | 0.001014s | 0.000997s | 0.000993s | byte equality observed |
| mp_is_list.test | 10 | 0.001048s | 0.000988s | 0.000989s | byte equality observed |
| mp_is_map.test | 10 | 0.000992s | 0.001018s | 0.001028s | byte equality observed |
| mp_is_set.test | 10 | 0.001011s | 0.001000s | 0.000996s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001018s | 0.001002s | 0.000986s | byte equality observed |
| mp_iterate.test | 10 | 0.001026s | 0.001030s | 0.001004s | byte equality observed |
| mp_join.test | 10 | 0.001034s | 0.001000s | 0.001000s | byte equality observed |
| mp_lambda.test | 10 | 0.001049s | 0.001015s | 0.001019s | byte equality observed |
| mp_less.test | 10 | 0.000996s | 0.000990s | 0.001005s | byte equality observed |
| mp_list_c.test | 10 | 0.001014s | 0.000981s | 0.001008s | byte equality observed |
| mp_list_v.test | 10 | 0.000463s | 0.000454s | 0.000984s | byte equality observed |
| mp_map_contains.test | 10 | 0.000990s | 0.001012s | 0.000975s | byte equality observed |
| mp_map_erase.test | 10 | 0.001050s | 0.001018s | 0.000992s | byte equality observed |
| mp_map_find.test | 10 | 0.000992s | 0.001023s | 0.001026s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001007s | 0.000984s | 0.000990s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000994s | 0.001006s | 0.000993s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001007s | 0.000975s | 0.001011s | byte equality observed |
| mp_map_insert.test | 10 | 0.001002s | 0.001019s | 0.001011s | byte equality observed |
| mp_map_keys.test | 10 | 0.001004s | 0.000980s | 0.001003s | byte equality observed |
| mp_map_replace.test | 10 | 0.001020s | 0.000995s | 0.000966s | byte equality observed |
| mp_map_update.test | 10 | 0.001005s | 0.000976s | 0.000968s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001039s | 0.000980s | 0.000969s | byte equality observed |
| mp_max.test | 10 | 0.001031s | 0.001001s | 0.000980s | byte equality observed |
| mp_max_element.test | 10 | 0.001020s | 0.001002s | 0.000990s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000462s | 0.000456s | 0.001002s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001023s | 0.001029s | 0.000996s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000460s | 0.000461s | 0.001003s | byte equality observed |
| mp_min.test | 10 | 0.001015s | 0.001018s | 0.000985s | byte equality observed |
| mp_min_element.test | 10 | 0.001049s | 0.001004s | 0.000995s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000471s | 0.000467s | 0.000968s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001036s | 0.001024s | 0.000992s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000469s | 0.000445s | 0.000963s | byte equality observed |
| mp_none_of.test | 10 | 0.001012s | 0.001038s | 0.001010s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000984s | 0.000993s | 0.000995s | byte equality observed |
| mp_not_fn.test | 10 | 0.000994s | 0.001028s | 0.000991s | byte equality observed |
| mp_nth_element.test | 10 | 0.001010s | 0.001005s | 0.000998s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001017s | 0.001010s | 0.001001s | byte equality observed |
| mp_or.test | 10 | 0.001013s | 0.001020s | 0.001024s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001061s | 0.000992s | 0.001003s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001022s | 0.001001s | 0.000991s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001021s | 0.000980s | 0.000994s | byte equality observed |
| mp_partition.test | 10 | 0.001045s | 0.001006s | 0.000981s | byte equality observed |
| mp_partition_q.test | 10 | 0.001024s | 0.001023s | 0.000995s | byte equality observed |
| mp_plus.test | 10 | 0.001001s | 0.001007s | 0.001000s | byte equality observed |
| mp_pop_back.test | 10 | 0.001044s | 0.001015s | 0.001007s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000459s | 0.000463s | 0.000966s | byte equality observed |
| mp_pop_front.test | 10 | 0.001019s | 0.001022s | 0.000973s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000465s | 0.000448s | 0.000964s | byte equality observed |
| mp_power_set.test | 10 | 0.000986s | 0.001000s | 0.000998s | byte equality observed |
| mp_product.test | 10 | 0.001021s | 0.001021s | 0.000990s | byte equality observed |
| mp_push_back.test | 10 | 0.001048s | 0.001020s | 0.001001s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000470s | 0.000466s | 0.000988s | byte equality observed |
| mp_push_front.test | 10 | 0.001030s | 0.001069s | 0.001027s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000463s | 0.000463s | 0.000986s | byte equality observed |
| mp_quote.test | 10 | 0.000992s | 0.000992s | 0.000995s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001011s | 0.000997s | 0.000975s | byte equality observed |
| mp_remove.test | 10 | 0.001039s | 0.000994s | 0.000976s | byte equality observed |
| mp_remove_if.test | 10 | 0.001029s | 0.001017s | 0.000983s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001011s | 0.001001s | 0.000983s | byte equality observed |
| mp_rename.test | 10 | 0.001020s | 0.001022s | 0.000984s | byte equality observed |
| mp_rename_2.test | 10 | 0.000471s | 0.000470s | 0.000973s | byte equality observed |
| mp_rename_v.test | 10 | 0.000468s | 0.000468s | 0.001012s | byte equality observed |
| mp_repeat.test | 10 | 0.001042s | 0.001035s | 0.001004s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000460s | 0.000475s | 0.000963s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000991s | 0.001063s | 0.000963s | byte equality observed |
| mp_replace.test | 10 | 0.001019s | 0.000996s | 0.001008s | byte equality observed |
| mp_replace_at.test | 10 | 0.000998s | 0.001017s | 0.000982s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000997s | 0.001025s | 0.001006s | byte equality observed |
| mp_replace_front.test | 10 | 0.001027s | 0.001050s | 0.000993s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000467s | 0.000472s | 0.000989s | byte equality observed |
| mp_replace_if.test | 10 | 0.001060s | 0.000994s | 0.000979s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001008s | 0.001056s | 0.001014s | byte equality observed |
| mp_replace_second.test | 10 | 0.001018s | 0.001042s | 0.001013s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000467s | 0.000464s | 0.000969s | byte equality observed |
| mp_replace_third.test | 10 | 0.001043s | 0.001036s | 0.000998s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000475s | 0.000452s | 0.000989s | byte equality observed |
| mp_reverse.test | 10 | 0.001052s | 0.001044s | 0.001019s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001035s | 0.000999s | 0.001017s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000993s | 0.000999s | 0.001012s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000995s | 0.001023s | 0.000979s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001031s | 0.000992s | 0.000992s | byte equality observed |
| mp_same.test | 10 | 0.001005s | 0.001025s | 0.000980s | byte equality observed |
| mp_second.test | 10 | 0.001010s | 0.001022s | 0.000993s | byte equality observed |
| mp_second_2.test | 10 | 0.000465s | 0.000456s | 0.000985s | byte equality observed |
| mp_set_contains.test | 10 | 0.001027s | 0.000995s | 0.001013s | byte equality observed |
| mp_set_difference.test | 10 | 0.001026s | 0.001029s | 0.001005s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001018s | 0.001020s | 0.001026s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001024s | 0.001032s | 0.000997s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001012s | 0.001021s | 0.001000s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001043s | 0.001049s | 0.000989s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001059s | 0.001051s | 0.000988s | byte equality observed |
| mp_set_union.test | 10 | 0.001000s | 0.001056s | 0.000993s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001010s | 0.001019s | 0.000989s | byte equality observed |
| mp_similar.test | 10 | 0.001047s | 0.001054s | 0.001011s | byte equality observed |
| mp_size.test | 10 | 0.001000s | 0.001036s | 0.001013s | byte equality observed |
| mp_size_2.test | 10 | 0.000460s | 0.000469s | 0.000982s | byte equality observed |
| mp_slice.test | 10 | 0.001041s | 0.001029s | 0.001011s | byte equality observed |
| mp_slice_2.test | 10 | 0.000464s | 0.000451s | 0.000974s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001056s | 0.001023s | 0.000999s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001040s | 0.001039s | 0.001011s | byte equality observed |
| mp_sort.test | 10 | 0.001025s | 0.001004s | 0.001026s | byte equality observed |
| mp_sort_q.test | 10 | 0.001026s | 0.001016s | 0.000999s | byte equality observed |
| mp_split.test | 10 | 0.001034s | 0.001034s | 0.001027s | byte equality observed |
| mp_starts_with.test | 10 | 0.001008s | 0.001052s | 0.001020s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001023s | 0.001028s | 0.001005s | byte equality observed |
| mp_take.test | 10 | 0.001048s | 0.001030s | 0.001007s | byte equality observed |
| mp_take_2.test | 10 | 0.000470s | 0.000463s | 0.000979s | byte equality observed |
| mp_third.test | 10 | 0.001017s | 0.001018s | 0.001014s | byte equality observed |
| mp_third_2.test | 10 | 0.000465s | 0.000463s | 0.001002s | byte equality observed |
| mp_transform.test | 10 | 0.001036s | 0.001007s | 0.000992s | byte equality observed |
| mp_transform_2.test | 10 | 0.000992s | 0.000994s | 0.000978s | byte equality observed |
| mp_transform_front.test | 10 | 0.001023s | 0.001021s | 0.000991s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000465s | 0.000466s | 0.000977s | byte equality observed |
| mp_transform_if.test | 10 | 0.000992s | 0.001010s | 0.000986s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001001s | 0.001075s | 0.001000s | byte equality observed |
| mp_transform_q.test | 10 | 0.001045s | 0.001020s | 0.001004s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001023s | 0.001021s | 0.001027s | byte equality observed |
| mp_transform_second.test | 10 | 0.001030s | 0.001036s | 0.000994s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000461s | 0.000461s | 0.000985s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001009s | 0.001043s | 0.000999s | byte equality observed |
| mp_transform_third.test | 10 | 0.001030s | 0.001009s | 0.001002s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000472s | 0.000458s | 0.000960s | byte equality observed |
| mp_unique.test | 10 | 0.001042s | 0.001038s | 0.001018s | byte equality observed |
| mp_unique_if.test | 10 | 0.001036s | 0.001013s | 0.000981s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001048s | 0.001007s | 0.000985s | byte equality observed |
| mp_valid.test | 10 | 0.001017s | 0.000996s | 0.000993s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001012s | 0.001032s | 0.000979s | byte equality observed |
| mp_value.test | 10 | 0.000467s | 0.000464s | 0.000988s | byte equality observed |
| mp_with_index.test | 10 | 0.001365s | 0.001338s | 0.001287s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000459s | 0.000459s | 0.000971s | byte equality observed |
| mpl.test | 10 | 0.001016s | 0.001005s | 0.001019s | byte equality observed |
| mpl_list.test | 10 | 0.001013s | 0.001018s | 0.001002s | byte equality observed |
| mpl_tuple.test | 10 | 0.001002s | 0.001022s | 0.001009s | byte equality observed |
| mpl_version.test | 10 | 0.001005s | 0.001014s | 0.001009s | byte equality observed |
| set_version.test | 10 | 0.001018s | 0.000992s | 0.000992s | byte equality observed |
| tuple_apply.test | 10 | 0.001021s | 0.001029s | 0.000992s | byte equality observed |
| tuple_for_each.test | 10 | 0.001013s | 0.000999s | 0.001010s | byte equality observed |
| tuple_transform.test | 10 | 0.001040s | 0.001051s | 0.001011s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001043s | 0.001037s | 0.000987s | byte equality observed |
| tuple_version.test | 10 | 0.001011s | 0.001010s | 0.000987s | byte equality observed |
| utility_version.test | 10 | 0.001031s | 0.001027s | 0.000984s | byte equality observed |
| version.test | 10 | 0.001020s | 0.000982s | 0.000990s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
