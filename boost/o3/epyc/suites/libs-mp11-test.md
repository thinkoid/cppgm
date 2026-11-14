# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.037179 | 0.075551 | 0.114957 | — | — | — |
| complex_h.test | COMPILE | 0.153376 | 0.323630 | 0.495436 | — | — | — |
| mp_size.test | RUN | 0.175646 | 1.001934 | 0.623355 | 0.001842 | 0.001960 | 0.001787 |
| mp_size_2.test | RUN | 0.015976 | 0.036573 | 0.052749 | 0.000667 | 0.000846 | 0.001768 |
| mp_empty.test | RUN | 0.172071 | 0.618589 | 0.560584 | 0.001606 | 0.001958 | 0.001660 |
| mp_empty_2.test | RUN | 0.015696 | 0.039823 | 0.060130 | 0.000602 | 0.000841 | 0.001599 |
| mp_assign.test | RUN | 0.194023 | 1.303228 | 0.724887 | 0.001747 | 0.001914 | 0.001590 |
| mp_assign_2.test | RUN | 0.016645 | 0.038251 | 0.068505 | 0.000624 | 0.000845 | 0.001741 |
| mp_clear.test | RUN | 0.166778 | 0.570918 | 0.601360 | 0.001628 | 0.001888 | 0.001764 |
| mp_clear_2.test | RUN | 0.015235 | 0.039626 | 0.059905 | 0.000628 | 0.000649 | 0.001740 |
| mp_front.test | RUN | 0.178868 | 0.888724 | 0.692406 | 0.001582 | 0.002009 | 0.001766 |
| mp_front_2.test | RUN | 0.016048 | 0.038343 | 0.053056 | 0.000634 | 0.000731 | 0.001488 |
| mp_pop_front.test | RUN | 0.174606 | 0.944614 | 0.655713 | 0.001623 | 0.001874 | 0.001730 |
| mp_pop_front_2.test | RUN | 0.016444 | 0.038858 | 0.050593 | 0.000614 | 0.000685 | 0.001850 |
| mp_second.test | RUN | 0.175439 | 0.615914 | 0.589320 | 0.001524 | 0.001465 | 0.001638 |
| mp_second_2.test | RUN | 0.014684 | 0.038764 | 0.060036 | 0.000638 | 0.000733 | 0.001848 |
| mp_third.test | RUN | 0.173138 | 0.544295 | 0.583378 | 0.001660 | 0.001660 | 0.001794 |
| mp_third_2.test | RUN | 0.016218 | 0.038892 | 0.060061 | 0.000603 | 0.000809 | 0.001534 |
| mp_push_front.test | RUN | 0.213005 | 1.991669 | 0.964131 | 0.001602 | 0.001910 | 0.001832 |
| mp_push_front_2.test | RUN | 0.014823 | 0.036283 | 0.054437 | 0.000617 | 0.000797 | 0.001528 |
| mp_push_back.test | RUN | 0.222192 | 1.981559 | 1.053476 | 0.001744 | 0.001596 | 0.001498 |
| mp_push_back_2.test | RUN | 0.016670 | 0.036962 | 0.059325 | 0.000704 | 0.000863 | 0.001412 |
| mp_rename.test | RUN | 0.213138 | 1.822360 | 0.927699 | 0.001535 | 0.001592 | 0.001655 |
| mp_rename_2.test | RUN | 0.016104 | 0.040107 | 0.059470 | 0.000698 | 0.000809 | 0.001754 |
| mp_append.test | RUN | 0.224764 | 2.110935 | 0.984035 | 0.001642 | 0.001699 | 0.001721 |
| mp_append_2.test | RUN | 0.452444 | 4.725363 | 1.322516 | 0.001473 | 0.001905 | 0.001555 |
| mp_append_3.test | RUN | 0.016784 | 0.038544 | 0.053437 | 0.000623 | 0.000793 | 0.001819 |
| mp_append_sf.test | RUN | 0.156108 | 0.516221 | 0.542528 | 0.001730 | 0.001680 | 0.001766 |
| mp_replace_front.test | RUN | 0.204251 | 1.486021 | 0.854623 | 0.001635 | 0.001934 | 0.001632 |
| mp_replace_front_2.test | RUN | 0.016338 | 0.037092 | 0.053314 | 0.000586 | 0.000868 | 0.001777 |
| mp_replace_second.test | RUN | 0.196472 | 0.951564 | 0.713784 | 0.001729 | 0.001951 | 0.001816 |
| mp_replace_second_2.test | RUN | 0.016247 | 0.040557 | 0.050009 | 0.000574 | 0.000822 | 0.001543 |
| mp_replace_third.test | RUN | 0.184551 | 0.783614 | 0.711643 | 0.001629 | 0.002034 | 0.001669 |
| mp_replace_third_2.test | RUN | 0.016106 | 0.039531 | 0.057658 | 0.000592 | 0.000820 | 0.001567 |
| mp_apply_q.test | RUN | 0.208041 | 1.793446 | 0.903396 | 0.001622 | 0.001627 | 0.001379 |
| mp_apply_q_sf.test | RUN | 0.169231 | 0.558461 | 0.575783 | 0.001433 | 0.001904 | 0.001749 |
| mp_is_list.test | RUN | 0.173753 | 0.647945 | 0.598415 | 0.001703 | 0.001894 | 0.001846 |
| mp_list_c.test | RUN | 0.182702 | 0.762516 | 0.681372 | 0.001444 | 0.001866 | 0.001845 |
| mp_transform_front.test | RUN | 0.194726 | 1.489253 | 0.805841 | 0.001760 | 0.001807 | 0.001563 |
| mp_transform_front_2.test | RUN | 0.015817 | 0.037173 | 0.051344 | 0.000625 | 0.000847 | 0.002024 |
| mp_transform_second.test | RUN | 0.187281 | 1.230209 | 0.693945 | 0.001611 | 0.001897 | 0.001698 |
| mp_transform_second_2.test | RUN | 0.016183 | 0.040112 | 0.062313 | 0.000611 | 0.000800 | 0.001828 |
| mp_transform_third.test | RUN | 0.183202 | 0.961411 | 0.625699 | 0.001684 | 0.001976 | 0.001896 |
| mp_transform_third_2.test | RUN | 0.015994 | 0.040063 | 0.054672 | 0.000506 | 0.000687 | 0.001517 |
| mp_list_v.test | RUN | 0.016187 | 0.039905 | 0.056515 | 0.000570 | 0.000759 | 0.001776 |
| mp_rename_v.test | RUN | 0.017099 | 0.039918 | 0.055028 | 0.000695 | 0.000567 | 0.001620 |
| mp_is_value_list.test | RUN | 0.168091 | 0.396353 | 0.529681 | 0.001869 | 0.001914 | 0.001861 |
| mp_transform.test | RUN | 0.371337 | 3.037300 | 1.647975 | 0.001766 | 0.001823 | 0.001572 |
| mp_transform_2.test | RUN | 0.158054 | 0.363758 | 0.500374 | 0.001674 | 0.001833 | 0.001823 |
| mp_transform_q.test | RUN | 0.364632 | 2.983334 | 1.604078 | 0.001883 | 0.001614 | 0.001764 |
| mp_transform_q_2.test | RUN | 0.403129 | 0.996343 | 2.071740 | 0.001760 | 0.001933 | 0.001547 |
| mp_transform_sf.test | RUN | 0.175865 | 0.547684 | 0.610621 | 0.001723 | 0.001908 | 0.001732 |
| mp_transform_if.test | RUN | 0.216174 | 1.476725 | 0.891963 | 0.001597 | 0.001746 | 0.001796 |
| mp_transform_if_q.test | RUN | 0.218159 | 1.502110 | 0.889344 | 0.001622 | 0.001628 | 0.001537 |
| mp_filter.test | RUN | 0.196373 | 0.875829 | 0.697764 | 0.001492 | 0.001849 | 0.001729 |
| mp_fill.test | RUN | 0.183267 | 0.683381 | 0.656255 | 0.001774 | 0.001658 | 0.001804 |
| mp_fill_2.test | RUN | 0.028408 | 0.057555 | 0.084805 | 0.000612 | 0.000815 | 0.001796 |
| mp_count.test | RUN | 0.345448 | 1.592105 | 1.045978 | 0.001698 | 0.001974 | 0.001844 |
| mp_count_if.test | RUN | 0.366305 | 1.636679 | 1.085542 | 0.001523 | 0.001879 | 0.001543 |
| mp_count_if_q.test | RUN | 0.184305 | 1.063646 | 0.652007 | 0.001892 | 0.001862 | 0.001818 |
| mp_contains.test | RUN | 0.180232 | 0.661339 | 0.591724 | 0.001652 | 0.001977 | 0.001738 |
| mp_starts_with.test | RUN | 0.178524 | 0.619580 | 0.607387 | 0.001890 | 0.001575 | 0.001624 |
| mp_starts_with_sf.test | RUN | 0.175944 | 0.544317 | 0.567508 | 0.001590 | 0.001870 | 0.001789 |
| mp_repeat.test | RUN | 0.248260 | 2.600722 | 1.081878 | 0.001875 | 0.001893 | 0.001762 |
| mp_repeat_2.test | RUN | 0.028002 | 0.059001 | 0.100159 | 0.000761 | 0.000826 | 0.001779 |
| mp_repeat_3.test | RUN | 0.228261 | 0.354919 | 0.583177 | 0.001633 | 0.001987 | 0.001742 |
| mp_product.test | RUN | 0.202762 | 1.614923 | 0.766285 | 0.001542 | 0.001880 | 0.001599 |
| mp_drop.test | RUN | 0.224295 | 1.970812 | 0.862049 | 0.001850 | 0.001798 | 0.001410 |
| mp_drop_2.test | RUN | 0.028358 | 0.061824 | 0.095171 | 0.000597 | 0.000854 | 0.001711 |
| mp_iota.test | RUN | 0.208393 | 1.617146 | 0.850924 | 0.001802 | 0.001529 | 0.001724 |
| mp_iota_2.test | RUN | 0.222612 | 1.983787 | 0.952712 | 0.001546 | 0.001967 | 0.001577 |
| mp_at.test | RUN | 0.182250 | 0.884134 | 0.660401 | 0.001413 | 0.001860 | 0.001598 |
| mp_at_2.test | RUN | 0.028273 | 0.056992 | 0.096965 | 0.000632 | 0.000748 | 0.001774 |
| mp_at_sf.test | RUN | 0.175963 | 0.545372 | 0.616594 | 0.001828 | 0.001720 | 0.001743 |
| mp_take.test | RUN | 0.285955 | 2.531488 | 1.089826 | 0.001865 | 0.001894 | 0.001838 |
| mp_take_2.test | RUN | 0.028421 | 0.058248 | 0.097862 | 0.000765 | 0.000814 | 0.001594 |
| mp_slice.test | RUN | 0.329663 | 2.575322 | 1.421931 | 0.001652 | 0.001931 | 0.001737 |
| mp_slice_2.test | RUN | 0.027907 | 0.059187 | 0.098531 | 0.000766 | 0.000782 | 0.001832 |
| mp_replace.test | RUN | 0.218252 | 1.331734 | 0.933657 | 0.001672 | 0.001689 | 0.001660 |
| mp_replace_if.test | RUN | 0.209135 | 1.175382 | 0.829670 | 0.001770 | 0.001634 | 0.001828 |
| mp_replace_if_q.test | RUN | 0.208060 | 1.158058 | 0.863807 | 0.001902 | 0.001911 | 0.001898 |
| mp_copy_if.test | RUN | 0.215584 | 1.638167 | 0.812499 | 0.001763 | 0.001776 | 0.001782 |
| mp_copy_if_q.test | RUN | 0.212640 | 1.673675 | 0.799575 | 0.001873 | 0.001918 | 0.001561 |
| mp_remove.test | RUN | 0.210653 | 1.093445 | 0.834871 | 0.001660 | 0.001672 | 0.001823 |
| mp_remove_if.test | RUN | 0.216482 | 1.733316 | 0.843764 | 0.001570 | 0.001896 | 0.001870 |
| mp_remove_if_q.test | RUN | 0.221369 | 1.756701 | 0.839579 | 0.001818 | 0.001684 | 0.001844 |
| mp_partition.test | RUN | 0.221023 | 1.624652 | 0.960502 | 0.001868 | 0.001612 | 0.001762 |
| mp_partition_q.test | RUN | 0.217228 | 1.610152 | 0.925926 | 0.001718 | 0.001667 | 0.001797 |
| mp_sort.test | RUN | 0.203672 | 1.198511 | 0.820884 | 0.001622 | 0.001926 | 0.001926 |
| mp_sort_q.test | RUN | 0.204096 | 1.190739 | 0.831570 | 0.001774 | 0.001784 | 0.001817 |
| mp_find.test | RUN | 0.202392 | 1.266694 | 0.704445 | 0.001839 | 0.001864 | 0.001510 |
| mp_find_if.test | RUN | 0.190901 | 1.167514 | 0.687955 | 0.001812 | 0.001457 | 0.001848 |
| mp_find_if_q.test | RUN | 0.211127 | 1.301437 | 0.827242 | 0.001748 | 0.001913 | 0.001818 |
| mp_reverse.test | RUN | 0.405767 | 3.381357 | 1.627850 | 0.001788 | 0.001862 | 0.001802 |
| mp_fold.test | RUN | 0.674491 | 2.683040 | 3.951425 | 0.001347 | 0.001864 | 0.001752 |
| mp_fold_q.test | RUN | 0.202044 | 1.130653 | 0.758315 | 0.001725 | 0.001936 | 0.001911 |
| mp_fold_q_sf.test | RUN | 0.174393 | 0.532006 | 0.587053 | 0.001564 | 0.001935 | 0.001632 |
| mp_reverse_fold.test | RUN | 0.329417 | 2.535647 | 1.118754 | 0.001687 | 0.001991 | 0.001815 |
| mp_reverse_fold_q.test | RUN | 0.201587 | 1.428681 | 0.830200 | 0.001741 | 0.001860 | 0.001804 |
| mp_unique.test | RUN | 0.209677 | 1.257575 | 0.823681 | 0.001622 | 0.001873 | 0.001719 |
| mp_unique_if.test | RUN | 0.354523 | 2.635108 | 1.268820 | 0.001546 | 0.001806 | 0.001502 |
| mp_unique_if_q.test | RUN | 0.298547 | 2.627533 | 1.055302 | 0.001573 | 0.001782 | 0.001442 |
| mp_all_of.test | RUN | 0.481748 | 1.466059 | 1.326635 | 0.001879 | 0.001782 | 0.001808 |
| mp_all_of_q.test | RUN | 0.185768 | 0.636841 | 0.645088 | 0.001908 | 0.001903 | 0.001672 |
| mp_any_of.test | RUN | 0.499297 | 1.520268 | 1.363725 | 0.001826 | 0.001895 | 0.001625 |
| mp_any_of_q.test | RUN | 0.180032 | 0.643822 | 0.607563 | 0.001820 | 0.001872 | 0.001540 |
| mp_none_of.test | RUN | 0.478318 | 1.521602 | 1.313022 | 0.001590 | 0.001897 | 0.001710 |
| mp_none_of_q.test | RUN | 0.179434 | 0.630247 | 0.551259 | 0.001793 | 0.001862 | 0.001614 |
| mp_replace_at.test | RUN | 0.209267 | 1.264319 | 0.846529 | 0.001756 | 0.001692 | 0.001773 |
| mp_replace_at_c.test | RUN | 0.215842 | 1.269032 | 0.855867 | 0.001648 | 0.001734 | 0.001912 |
| mp_for_each.test | RUN | 0.208480 | 0.903023 | 1.007890 | 0.001600 | 0.001807 | 0.001816 |
| mp_insert.test | RUN | 0.313370 | 2.567312 | 1.259993 | 0.001886 | 0.001858 | 0.001657 |
| mp_insert_2.test | RUN | 0.028183 | 0.055137 | 0.097567 | 0.000627 | 0.000611 | 0.001737 |
| mp_erase.test | RUN | 0.337542 | 2.741370 | 1.531564 | 0.001813 | 0.001857 | 0.001900 |
| mp_erase_2.test | RUN | 0.028029 | 0.057955 | 0.102284 | 0.000646 | 0.000688 | 0.001698 |
| mp_with_index.test | RUN | 0.442454 | 5.612264 | 3.428061 | 0.002448 | 0.002422 | 0.001873 |
| mp_with_index_cx.test | RUN | 0.003865 | 0.018983 | 0.026658 | 0.000578 | 0.000858 | 0.001620 |
| mp_from_sequence.test | RUN | 0.218624 | 1.458623 | 0.881426 | 0.001765 | 0.001932 | 0.001731 |
| mp_from_sequence_2.test | RUN | 0.232500 | 1.694846 | 0.962543 | 0.001723 | 0.001668 | 0.001834 |
| mp_from_sequence_3.test | RUN | 0.191606 | 0.772694 | 0.719012 | 0.001770 | 0.001833 | 0.001768 |
| mp_min_element.test | RUN | 0.184132 | 0.704439 | 0.596984 | 0.001621 | 0.001907 | 0.001841 |
| mp_min_element_2.test | RUN | 0.029835 | 0.060381 | 0.099714 | 0.000606 | 0.000787 | 0.001740 |
| mp_min_element_q.test | RUN | 0.185040 | 0.694167 | 0.633542 | 0.001896 | 0.001624 | 0.001772 |
| mp_min_element_q_2.test | RUN | 0.028784 | 0.058971 | 0.094357 | 0.000797 | 0.000835 | 0.001682 |
| mp_max_element.test | RUN | 0.184799 | 0.695366 | 0.631895 | 0.001760 | 0.001888 | 0.001713 |
| mp_max_element_2.test | RUN | 0.029330 | 0.060487 | 0.095116 | 0.000659 | 0.000753 | 0.001673 |
| mp_max_element_q.test | RUN | 0.188938 | 0.692612 | 0.621143 | 0.001762 | 0.001933 | 0.001598 |
| mp_max_element_q_2.test | RUN | 0.028799 | 0.061596 | 0.090422 | 0.000783 | 0.000831 | 0.001506 |
| mp_nth_element.test | RUN | 0.204569 | 0.975044 | 0.798299 | 0.001751 | 0.001652 | 0.001466 |
| mp_nth_element_q.test | RUN | 0.205630 | 0.955328 | 0.791495 | 0.001568 | 0.001871 | 0.001460 |
| mp_back.test | RUN | 0.195022 | 0.817358 | 0.692310 | 0.001746 | 0.001684 | 0.001958 |
| mp_back_2.test | RUN | 0.028558 | 0.060026 | 0.099180 | 0.000628 | 0.000792 | 0.001789 |
| mp_pop_back.test | RUN | 0.507022 | 5.321142 | 1.487571 | 0.001842 | 0.001795 | 0.001863 |
| mp_pop_back_2.test | RUN | 0.029260 | 0.060407 | 0.091196 | 0.000770 | 0.000896 | 0.001760 |
| mp_flatten.test | RUN | 0.232057 | 1.882114 | 0.993058 | 0.001904 | 0.001892 | 0.001774 |
| mp_rotate_left.test | RUN | 0.239535 | 2.010683 | 1.015586 | 0.001774 | 0.001930 | 0.001458 |
| mp_rotate_right.test | RUN | 0.235682 | 2.049394 | 0.999269 | 0.001621 | 0.001915 | 0.001519 |
| mp_power_set.test | RUN | 0.230097 | 1.918090 | 0.991056 | 0.001804 | 0.001838 | 0.001698 |
| mp_partial_sum.test | RUN | 0.293815 | 2.564867 | 1.149673 | 0.001592 | 0.001907 | 0.001481 |
| mp_iterate.test | RUN | 0.201646 | 0.791473 | 0.799890 | 0.001733 | 0.001791 | 0.001788 |
| mp_pairwise_fold.test | RUN | 0.232876 | 1.732488 | 1.037979 | 0.001638 | 0.001922 | 0.001460 |
| mp_pairwise_fold_q.test | RUN | 0.188293 | 0.532025 | 0.626934 | 0.001909 | 0.001770 | 0.001872 |
| mp_sliding_fold.test | RUN | 0.414831 | 3.355613 | 1.893338 | 0.001692 | 0.001982 | 0.001895 |
| mp_sliding_fold_q.test | RUN | 0.410485 | 3.384307 | 1.879919 | 0.001698 | 0.001609 | 0.001626 |
| mp_intersperse.test | RUN | 0.213283 | 1.269245 | 0.914393 | 0.001974 | 0.001866 | 0.001856 |
| mp_split.test | RUN | 0.291344 | 2.431545 | 1.229823 | 0.001838 | 0.001872 | 0.001525 |
| mp_join.test | RUN | 0.241849 | 2.035045 | 1.083365 | 0.001615 | 0.001831 | 0.001867 |
| integral.test | RUN | 0.185605 | 0.896043 | 0.669743 | 0.001857 | 0.001976 | 0.001960 |
| mp_value.test | RUN | 0.012932 | 0.033921 | 0.042657 | 0.000804 | 0.000648 | 0.001866 |
| mp_identity.test | RUN | 0.184586 | 0.831364 | 0.653770 | 0.001634 | 0.001848 | 0.001675 |
| mp_inherit.test | RUN | 0.180050 | 0.611389 | 0.611454 | 0.001668 | 0.001870 | 0.001802 |
| mp_if.test | RUN | 0.179874 | 0.682390 | 0.595589 | 0.001742 | 0.001785 | 0.001766 |
| mp_if_sf.test | RUN | 0.165888 | 0.518791 | 0.557806 | 0.001799 | 0.001653 | 0.001818 |
| mp_eval_if.test | RUN | 0.181370 | 0.746408 | 0.612444 | 0.001692 | 0.001688 | 0.001631 |
| mp_eval_if_sf.test | RUN | 0.170426 | 0.525525 | 0.574665 | 0.001899 | 0.001806 | 0.001768 |
| mp_valid.test | RUN | 0.177697 | 0.533168 | 0.570720 | 0.001688 | 0.001548 | 0.001808 |
| mp_defer.test | RUN | 0.191484 | 0.882410 | 0.661366 | 0.001632 | 0.001958 | 0.001829 |
| mp_quote.test | RUN | 0.186969 | 0.883603 | 0.710968 | 0.001834 | 0.002008 | 0.001788 |
| mp_invoke_q.test | RUN | 0.198893 | 1.174688 | 0.776660 | 0.001690 | 0.001880 | 0.001850 |
| mp_invoke_q_sf.test | RUN | 0.173200 | 0.522816 | 0.537334 | 0.001551 | 0.002110 | 0.001689 |
| mp_quote_trait.test | RUN | 0.186548 | 0.961236 | 0.665245 | 0.001902 | 0.001690 | 0.001760 |
| mp_cond.test | RUN | 0.171521 | 0.601372 | 0.591772 | 0.001860 | 0.001710 | 0.001658 |
| mp_cond_sf.test | RUN | 0.169350 | 0.524213 | 0.536182 | 0.001708 | 0.001966 | 0.001547 |
| mp_not_fn.test | RUN | 0.169536 | 0.508868 | 0.548810 | 0.001578 | 0.001516 | 0.001492 |
| mp_eval_if_not.test | RUN | 0.179816 | 0.744708 | 0.622201 | 0.001936 | 0.001960 | 0.001813 |
| mp_eval_or.test | RUN | 0.167114 | 0.417017 | 0.568629 | 0.001742 | 0.001876 | 0.001699 |
| mp_compose.test | RUN | 0.192652 | 1.175332 | 0.746260 | 0.001871 | 0.001896 | 0.001866 |
| mp_valid_and_true.test | RUN | 0.172950 | 0.622024 | 0.606175 | 0.001393 | 0.001930 | 0.001571 |
| mp_compose_sf.test | COMPILE | 0.042546 | 0.075584 | 0.121332 | — | — | — |
| integer_sequence.test | RUN | 0.205083 | 1.179153 | 0.838071 | 0.001711 | 0.001632 | 0.001618 |
| tuple_for_each.test | RUN | 0.178337 | 0.454176 | 0.641533 | 0.001660 | 0.001936 | 0.001658 |
| tuple_for_each_cx.test | COMPILE | 0.032301 | 0.068397 | 0.095537 | — | — | — |
| tuple_apply.test | RUN | 0.184749 | 0.459151 | 0.627444 | 0.001879 | 0.001949 | 0.001934 |
| tuple_apply_cx.test | COMPILE | 0.050036 | 0.093132 | 0.154329 | — | — | — |
| construct_from_tuple.test | RUN | 0.182111 | 0.479083 | 0.612250 | 0.001889 | 0.001808 | 0.001462 |
| construct_from_tuple_cx.test | COMPILE | 0.047886 | 0.094054 | 0.129957 | — | — | — |
| tuple_transform.test | RUN | 0.283285 | 0.983020 | 1.222488 | 0.001678 | 0.001791 | 0.001595 |
| tuple_transform_2.test | RUN | 0.250885 | 0.741124 | 1.119051 | 0.001914 | 0.001688 | 0.001511 |
| tuple_transform_cx.test | COMPILE | 0.040024 | 0.084971 | 0.127283 | — | — | — |
| mp_set_contains.test | RUN | 0.174589 | 0.636265 | 0.617776 | 0.001686 | 0.001772 | 0.001792 |
| mp_set_push_back.test | RUN | 0.231031 | 1.882286 | 1.009513 | 0.001892 | 0.001892 | 0.001818 |
| mp_set_push_front.test | RUN | 0.282687 | 2.268144 | 1.120564 | 0.001663 | 0.001911 | 0.001700 |
| mp_is_set.test | RUN | 0.176095 | 0.628329 | 0.618672 | 0.001803 | 0.001865 | 0.001776 |
| mp_set_union.test | RUN | 0.215699 | 1.616457 | 0.959800 | 0.001678 | 0.001888 | 0.001814 |
| mp_set_union_sf.test | RUN | 0.171216 | 0.500282 | 0.582517 | 0.001847 | 0.001937 | 0.001710 |
| mp_set_difference.test | RUN | 0.200593 | 1.257768 | 0.824518 | 0.001661 | 0.001942 | 0.001555 |
| mp_set_difference_sf.test | RUN | 0.170774 | 0.516189 | 0.550133 | 0.001611 | 0.001870 | 0.001860 |
| mp_set_intersection.test | RUN | 0.199786 | 1.250846 | 0.796014 | 0.001663 | 0.001648 | 0.001847 |
| mp_set_intersection_sf.test | RUN | 0.173088 | 0.499414 | 0.554758 | 0.001845 | 0.001940 | 0.001825 |
| mp_all.test | RUN | 0.175558 | 0.625078 | 0.588445 | 0.001824 | 0.001893 | 0.001896 |
| mp_all_2.test | RUN | 0.502621 | 1.367040 | 1.343661 | 0.001825 | 0.001910 | 0.001957 |
| mp_and.test | RUN | 0.178742 | 0.626206 | 0.591202 | 0.001829 | 0.001769 | 0.001742 |
| mp_any.test | RUN | 0.182355 | 0.634792 | 0.580405 | 0.001689 | 0.001790 | 0.001671 |
| mp_any_2.test | RUN | 0.484757 | 1.326419 | 1.353586 | 0.001868 | 0.001869 | 0.001693 |
| mp_or.test | RUN | 0.184272 | 0.613868 | 0.594910 | 0.001790 | 0.001791 | 0.001726 |
| mp_same.test | RUN | 0.349850 | 1.082360 | 0.935347 | 0.001634 | 0.001906 | 0.001733 |
| mp_plus.test | RUN | 0.179198 | 0.730957 | 0.646049 | 0.001617 | 0.001854 | 0.001633 |
| mp_less.test | RUN | 0.180877 | 0.626811 | 0.586599 | 0.001833 | 0.001694 | 0.001807 |
| mp_min.test | RUN | 0.170393 | 0.586046 | 0.611707 | 0.001748 | 0.001984 | 0.001713 |
| mp_max.test | RUN | 0.178432 | 0.650526 | 0.615609 | 0.001532 | 0.001759 | 0.001699 |
| mp_similar.test | RUN | 0.169911 | 0.644562 | 0.591247 | 0.001567 | 0.002010 | 0.001434 |
| mp_map_find.test | RUN | 0.198562 | 1.146320 | 0.808080 | 0.001834 | 0.001975 | 0.001905 |
| mp_map_find_2.test | RUN | 0.191248 | 0.450553 | 0.655861 | 0.001872 | 0.001913 | 0.001888 |
| mp_map_find_3.test | RUN | 0.188060 | 0.420751 | 0.692203 | 0.001537 | 0.001891 | 0.001560 |
| mp_map_find_4.test | RUN | 0.178536 | 0.431927 | 0.637033 | 0.001606 | 0.001630 | 0.001740 |
| mp_map_contains.test | RUN | 0.187303 | 0.654810 | 0.590217 | 0.001872 | 0.001915 | 0.001816 |
| mp_map_insert.test | RUN | 0.237760 | 2.143148 | 1.101132 | 0.001645 | 0.001908 | 0.001648 |
| mp_map_replace.test | RUN | 0.299066 | 2.406611 | 1.277473 | 0.001962 | 0.001956 | 0.001459 |
| mp_map_erase.test | RUN | 0.231845 | 1.816721 | 1.056330 | 0.001616 | 0.001848 | 0.001792 |
| mp_map_update.test | RUN | 0.207670 | 1.193369 | 0.857650 | 0.001725 | 0.001902 | 0.001761 |
| mp_map_update_q.test | RUN | 0.201787 | 1.170699 | 0.821186 | 0.001901 | 0.001922 | 0.001625 |
| mp_map_keys.test | RUN | 0.204338 | 1.045028 | 0.807011 | 0.001592 | 0.001617 | 0.001517 |
| mp_is_map.test | RUN | 0.187965 | 0.634304 | 0.685333 | 0.001754 | 0.001880 | 0.001517 |
| mp_bind.test | RUN | 0.225393 | 1.865433 | 0.999738 | 0.001806 | 0.001696 | 0.001778 |
| mp_bind_q.test | RUN | 0.204290 | 1.158781 | 0.780439 | 0.001638 | 0.001622 | 0.001752 |
| mp_bind_front.test | RUN | 0.194972 | 1.324160 | 0.755274 | 0.001540 | 0.001828 | 0.001758 |
| mp_bind_back.test | RUN | 0.198673 | 1.303621 | 0.784398 | 0.001759 | 0.001730 | 0.001539 |
| mp_lambda.test | RUN | 0.428390 | 3.854396 | 1.972884 | 0.001688 | 0.001430 | 0.001702 |
| mpl.test | RUN | 0.397648 | 1.016826 | 1.632130 | 0.001967 | 0.001678 | 0.001740 |
| mpl_list.test | RUN | 0.228191 | 0.776843 | 0.753934 | 0.001634 | 0.001850 | 0.001712 |
| mpl_tuple.test | RUN | 0.232133 | 0.772468 | 0.761106 | 0.001809 | 0.001681 | 0.001722 |
| version.test | RUN | 0.114900 | 0.282412 | 0.367133 | 0.001919 | 0.001802 | 0.001492 |
| mp11_version.test | RUN | 0.144615 | 0.330644 | 0.466009 | 0.001684 | 0.001630 | 0.001625 |
| list_version.test | RUN | 0.118747 | 0.286183 | 0.382673 | 0.001345 | 0.001883 | 0.001549 |
| algorithm_version.test | RUN | 0.133385 | 0.312141 | 0.425550 | 0.001436 | 0.001851 | 0.001400 |
| integral_version.test | RUN | 0.111783 | 0.275513 | 0.372236 | 0.001752 | 0.001802 | 0.001716 |
| utility_version.test | RUN | 0.116462 | 0.274332 | 0.386571 | 0.001745 | 0.001327 | 0.001640 |
| function_version.test | RUN | 0.121438 | 0.290980 | 0.383670 | 0.001406 | 0.001836 | 0.001810 |
| map_version.test | RUN | 0.132622 | 0.303497 | 0.435438 | 0.001856 | 0.001732 | 0.001653 |
| set_version.test | RUN | 0.121293 | 0.289104 | 0.411093 | 0.001814 | 0.001559 | 0.001502 |
| bind_version.test | RUN | 0.130360 | 0.308513 | 0.412711 | 0.001342 | 0.001563 | 0.001628 |
| integer_sequence_version.test | RUN | 0.112313 | 0.280614 | 0.350976 | 0.001850 | 0.001750 | 0.001424 |
| tuple_version.test | RUN | 0.129176 | 0.309488 | 0.322540 | 0.001467 | 0.001646 | 0.001406 |
| mpl_version.test | RUN | 0.095620 | 0.234623 | 0.393258 | 0.001404 | 0.001487 | 0.001351 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 0.998×, 1.009× | 1.001× |
| clang | 1.093× | 1.087×, 1.099× | 1.037× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000965s | 0.000985s | 0.000976s | byte equality observed |
| bind_version.test | 10 | 0.000959s | 0.000987s | 0.000998s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000985s | 0.000967s | 0.000969s | byte equality observed |
| function_version.test | 10 | 0.000956s | 0.000989s | 0.000980s | byte equality observed |
| integer_sequence.test | 10 | 0.000974s | 0.000975s | 0.000982s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000969s | 0.000969s | 0.001011s | byte equality observed |
| integral.test | 10 | 0.000965s | 0.000978s | 0.001010s | byte equality observed |
| integral_version.test | 10 | 0.000979s | 0.000967s | 0.001023s | byte equality observed |
| list_version.test | 10 | 0.000963s | 0.000973s | 0.000982s | byte equality observed |
| map_version.test | 10 | 0.000963s | 0.001005s | 0.001003s | byte equality observed |
| mp11_version.test | 10 | 0.000984s | 0.001003s | 0.000998s | byte equality observed |
| mp_all.test | 10 | 0.000992s | 0.001011s | 0.000998s | byte equality observed |
| mp_all_2.test | 10 | 0.000991s | 0.001027s | 0.001027s | byte equality observed |
| mp_all_of.test | 10 | 0.000996s | 0.001002s | 0.001000s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001015s | 0.000996s | 0.000998s | byte equality observed |
| mp_and.test | 10 | 0.001004s | 0.001059s | 0.001009s | byte equality observed |
| mp_any.test | 10 | 0.001022s | 0.001025s | 0.001004s | byte equality observed |
| mp_any_2.test | 10 | 0.001017s | 0.000994s | 0.001020s | byte equality observed |
| mp_any_of.test | 10 | 0.001021s | 0.001012s | 0.001033s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001014s | 0.001017s | 0.000997s | byte equality observed |
| mp_append.test | 10 | 0.001010s | 0.001033s | 0.001008s | byte equality observed |
| mp_append_2.test | 10 | 0.001040s | 0.001051s | 0.001005s | byte equality observed |
| mp_append_3.test | 10 | 0.000471s | 0.000472s | 0.000991s | byte equality observed |
| mp_append_sf.test | 10 | 0.001003s | 0.001040s | 0.000985s | byte equality observed |
| mp_apply_q.test | 10 | 0.001016s | 0.001015s | 0.001022s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001019s | 0.001035s | 0.001032s | byte equality observed |
| mp_assign.test | 10 | 0.001008s | 0.001046s | 0.000991s | byte equality observed |
| mp_assign_2.test | 10 | 0.000462s | 0.000468s | 0.000963s | byte equality observed |
| mp_at.test | 10 | 0.001038s | 0.001050s | 0.000993s | byte equality observed |
| mp_at_2.test | 10 | 0.000460s | 0.000467s | 0.001001s | byte equality observed |
| mp_at_sf.test | 10 | 0.001034s | 0.001021s | 0.000999s | byte equality observed |
| mp_back.test | 10 | 0.001029s | 0.001020s | 0.000996s | byte equality observed |
| mp_back_2.test | 10 | 0.000462s | 0.000471s | 0.000973s | byte equality observed |
| mp_bind.test | 10 | 0.001025s | 0.001056s | 0.001007s | byte equality observed |
| mp_bind_back.test | 10 | 0.001027s | 0.001004s | 0.001029s | byte equality observed |
| mp_bind_front.test | 10 | 0.001007s | 0.001017s | 0.000989s | byte equality observed |
| mp_bind_q.test | 10 | 0.001016s | 0.001027s | 0.001010s | byte equality observed |
| mp_clear.test | 10 | 0.001035s | 0.001028s | 0.001000s | byte equality observed |
| mp_clear_2.test | 10 | 0.000458s | 0.000466s | 0.000997s | byte equality observed |
| mp_compose.test | 10 | 0.001003s | 0.001027s | 0.000985s | byte equality observed |
| mp_cond.test | 10 | 0.000993s | 0.001031s | 0.001016s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000985s | 0.001033s | 0.001009s | byte equality observed |
| mp_contains.test | 10 | 0.000993s | 0.001039s | 0.000976s | byte equality observed |
| mp_copy_if.test | 10 | 0.001026s | 0.001001s | 0.000976s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000991s | 0.001043s | 0.000994s | byte equality observed |
| mp_count.test | 10 | 0.000998s | 0.001030s | 0.000999s | byte equality observed |
| mp_count_if.test | 10 | 0.000988s | 0.001036s | 0.000994s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001011s | 0.001058s | 0.001002s | byte equality observed |
| mp_defer.test | 10 | 0.000988s | 0.001020s | 0.001030s | byte equality observed |
| mp_drop.test | 10 | 0.001010s | 0.001050s | 0.000981s | byte equality observed |
| mp_drop_2.test | 10 | 0.000462s | 0.000476s | 0.000979s | byte equality observed |
| mp_empty.test | 10 | 0.001036s | 0.001046s | 0.000987s | byte equality observed |
| mp_empty_2.test | 10 | 0.000460s | 0.000460s | 0.000986s | byte equality observed |
| mp_erase.test | 10 | 0.001059s | 0.001034s | 0.000997s | byte equality observed |
| mp_erase_2.test | 10 | 0.000464s | 0.000469s | 0.000980s | byte equality observed |
| mp_eval_if.test | 10 | 0.000995s | 0.001037s | 0.000976s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000996s | 0.001048s | 0.000969s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001017s | 0.001014s | 0.001003s | byte equality observed |
| mp_eval_or.test | 10 | 0.000989s | 0.001058s | 0.001010s | byte equality observed |
| mp_fill.test | 10 | 0.001014s | 0.001038s | 0.000992s | byte equality observed |
| mp_fill_2.test | 10 | 0.000465s | 0.000463s | 0.000946s | byte equality observed |
| mp_filter.test | 10 | 0.000997s | 0.001006s | 0.000972s | byte equality observed |
| mp_find.test | 10 | 0.001005s | 0.001020s | 0.000970s | byte equality observed |
| mp_find_if.test | 10 | 0.001001s | 0.001029s | 0.000984s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001018s | 0.001028s | 0.001014s | byte equality observed |
| mp_flatten.test | 10 | 0.001018s | 0.000998s | 0.001015s | byte equality observed |
| mp_fold.test | 10 | 0.001048s | 0.001008s | 0.001006s | byte equality observed |
| mp_fold_q.test | 10 | 0.001020s | 0.001031s | 0.000984s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001000s | 0.001045s | 0.000996s | byte equality observed |
| mp_for_each.test | 10 | 0.000986s | 0.001020s | 0.001037s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000979s | 0.001046s | 0.001025s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001000s | 0.001020s | 0.000996s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001003s | 0.001005s | 0.000980s | byte equality observed |
| mp_front.test | 10 | 0.001015s | 0.001001s | 0.000998s | byte equality observed |
| mp_front_2.test | 10 | 0.000467s | 0.000463s | 0.000995s | byte equality observed |
| mp_identity.test | 10 | 0.001005s | 0.001012s | 0.000996s | byte equality observed |
| mp_if.test | 10 | 0.001010s | 0.001020s | 0.001002s | byte equality observed |
| mp_if_sf.test | 10 | 0.001000s | 0.000995s | 0.001033s | byte equality observed |
| mp_inherit.test | 10 | 0.000996s | 0.001033s | 0.001034s | byte equality observed |
| mp_insert.test | 10 | 0.001052s | 0.001019s | 0.000998s | byte equality observed |
| mp_insert_2.test | 10 | 0.000469s | 0.000473s | 0.000973s | byte equality observed |
| mp_intersperse.test | 10 | 0.001023s | 0.001010s | 0.000989s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001002s | 0.001017s | 0.000992s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000994s | 0.001034s | 0.001019s | byte equality observed |
| mp_iota.test | 10 | 0.000986s | 0.001035s | 0.001029s | byte equality observed |
| mp_iota_2.test | 10 | 0.001006s | 0.001024s | 0.001024s | byte equality observed |
| mp_is_list.test | 10 | 0.001003s | 0.001013s | 0.001030s | byte equality observed |
| mp_is_map.test | 10 | 0.001001s | 0.001001s | 0.000985s | byte equality observed |
| mp_is_set.test | 10 | 0.000992s | 0.001017s | 0.001002s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001016s | 0.001039s | 0.001000s | byte equality observed |
| mp_iterate.test | 10 | 0.000998s | 0.001021s | 0.001009s | byte equality observed |
| mp_join.test | 10 | 0.001017s | 0.001035s | 0.001004s | byte equality observed |
| mp_lambda.test | 10 | 0.001030s | 0.001014s | 0.000990s | byte equality observed |
| mp_less.test | 10 | 0.000993s | 0.001001s | 0.000989s | byte equality observed |
| mp_list_c.test | 10 | 0.001022s | 0.001017s | 0.001014s | byte equality observed |
| mp_list_v.test | 10 | 0.000468s | 0.000466s | 0.000992s | byte equality observed |
| mp_map_contains.test | 10 | 0.000995s | 0.000997s | 0.000998s | byte equality observed |
| mp_map_erase.test | 10 | 0.001005s | 0.000980s | 0.001018s | byte equality observed |
| mp_map_find.test | 10 | 0.000993s | 0.000998s | 0.000983s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001012s | 0.000994s | 0.000987s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001002s | 0.001007s | 0.001004s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000998s | 0.000999s | 0.001034s | byte equality observed |
| mp_map_insert.test | 10 | 0.000996s | 0.001020s | 0.000987s | byte equality observed |
| mp_map_keys.test | 10 | 0.000997s | 0.001041s | 0.001016s | byte equality observed |
| mp_map_replace.test | 10 | 0.001038s | 0.001027s | 0.001032s | byte equality observed |
| mp_map_update.test | 10 | 0.001002s | 0.001049s | 0.001017s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000999s | 0.000978s | 0.001041s | byte equality observed |
| mp_max.test | 10 | 0.001013s | 0.000998s | 0.001029s | byte equality observed |
| mp_max_element.test | 10 | 0.001027s | 0.001015s | 0.001028s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000473s | 0.000464s | 0.001001s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001038s | 0.001022s | 0.000986s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000465s | 0.000462s | 0.001000s | byte equality observed |
| mp_min.test | 10 | 0.001006s | 0.001009s | 0.001015s | byte equality observed |
| mp_min_element.test | 10 | 0.001036s | 0.001030s | 0.001042s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000468s | 0.000465s | 0.000976s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001034s | 0.001024s | 0.001008s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000460s | 0.000472s | 0.001007s | byte equality observed |
| mp_none_of.test | 10 | 0.001019s | 0.001044s | 0.001002s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001004s | 0.001030s | 0.001027s | byte equality observed |
| mp_not_fn.test | 10 | 0.001004s | 0.001017s | 0.001012s | byte equality observed |
| mp_nth_element.test | 10 | 0.001012s | 0.001044s | 0.001034s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001014s | 0.001020s | 0.000996s | byte equality observed |
| mp_or.test | 10 | 0.001009s | 0.001000s | 0.001008s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001014s | 0.001013s | 0.001026s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001007s | 0.001029s | 0.001011s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001012s | 0.001026s | 0.001008s | byte equality observed |
| mp_partition.test | 10 | 0.001025s | 0.001040s | 0.001038s | byte equality observed |
| mp_partition_q.test | 10 | 0.001002s | 0.001020s | 0.001013s | byte equality observed |
| mp_plus.test | 10 | 0.001004s | 0.001026s | 0.001010s | byte equality observed |
| mp_pop_back.test | 10 | 0.001039s | 0.001047s | 0.000983s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000468s | 0.000467s | 0.000982s | byte equality observed |
| mp_pop_front.test | 10 | 0.001016s | 0.001029s | 0.000983s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000463s | 0.000464s | 0.000979s | byte equality observed |
| mp_power_set.test | 10 | 0.001011s | 0.000999s | 0.000978s | byte equality observed |
| mp_product.test | 10 | 0.000986s | 0.001020s | 0.000984s | byte equality observed |
| mp_push_back.test | 10 | 0.000999s | 0.001023s | 0.000984s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000466s | 0.000467s | 0.000971s | byte equality observed |
| mp_push_front.test | 10 | 0.001038s | 0.001027s | 0.000983s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000465s | 0.000475s | 0.000992s | byte equality observed |
| mp_quote.test | 10 | 0.000994s | 0.001020s | 0.001033s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000981s | 0.001021s | 0.001029s | byte equality observed |
| mp_remove.test | 10 | 0.000992s | 0.001018s | 0.001023s | byte equality observed |
| mp_remove_if.test | 10 | 0.001010s | 0.001045s | 0.001030s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001002s | 0.001002s | 0.000982s | byte equality observed |
| mp_rename.test | 10 | 0.001014s | 0.001036s | 0.000996s | byte equality observed |
| mp_rename_2.test | 10 | 0.000479s | 0.000472s | 0.000971s | byte equality observed |
| mp_rename_v.test | 10 | 0.000471s | 0.000461s | 0.000971s | byte equality observed |
| mp_repeat.test | 10 | 0.001038s | 0.001083s | 0.001000s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000467s | 0.000454s | 0.000994s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001014s | 0.001009s | 0.000972s | byte equality observed |
| mp_replace.test | 10 | 0.001026s | 0.001019s | 0.000976s | byte equality observed |
| mp_replace_at.test | 10 | 0.000992s | 0.001020s | 0.000991s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000996s | 0.001018s | 0.000993s | byte equality observed |
| mp_replace_front.test | 10 | 0.001018s | 0.000985s | 0.000999s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000465s | 0.000462s | 0.000977s | byte equality observed |
| mp_replace_if.test | 10 | 0.000996s | 0.001021s | 0.000988s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001000s | 0.001006s | 0.001019s | byte equality observed |
| mp_replace_second.test | 10 | 0.001025s | 0.001022s | 0.000993s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000467s | 0.000464s | 0.000995s | byte equality observed |
| mp_replace_third.test | 10 | 0.001014s | 0.001026s | 0.001008s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000471s | 0.000461s | 0.000998s | byte equality observed |
| mp_reverse.test | 10 | 0.001029s | 0.001032s | 0.000998s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001027s | 0.001037s | 0.001002s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001028s | 0.001009s | 0.000985s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001005s | 0.001033s | 0.000998s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001018s | 0.001013s | 0.000980s | byte equality observed |
| mp_same.test | 10 | 0.001022s | 0.001004s | 0.000986s | byte equality observed |
| mp_second.test | 10 | 0.001019s | 0.001011s | 0.000992s | byte equality observed |
| mp_second_2.test | 10 | 0.000462s | 0.000460s | 0.000984s | byte equality observed |
| mp_set_contains.test | 10 | 0.000995s | 0.001006s | 0.000975s | byte equality observed |
| mp_set_difference.test | 10 | 0.001005s | 0.001039s | 0.000979s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001016s | 0.001030s | 0.001009s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000992s | 0.001033s | 0.000993s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000987s | 0.000990s | 0.000997s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001003s | 0.001009s | 0.001025s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001035s | 0.001046s | 0.001002s | byte equality observed |
| mp_set_union.test | 10 | 0.000998s | 0.001022s | 0.001036s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001031s | 0.001027s | 0.001005s | byte equality observed |
| mp_similar.test | 10 | 0.001011s | 0.001040s | 0.000992s | byte equality observed |
| mp_size.test | 10 | 0.001011s | 0.001032s | 0.000983s | byte equality observed |
| mp_size_2.test | 10 | 0.000463s | 0.000459s | 0.000993s | byte equality observed |
| mp_slice.test | 10 | 0.001036s | 0.001048s | 0.000997s | byte equality observed |
| mp_slice_2.test | 10 | 0.000462s | 0.000464s | 0.000975s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001023s | 0.001025s | 0.000993s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001027s | 0.001002s | 0.000965s | byte equality observed |
| mp_sort.test | 10 | 0.001009s | 0.001013s | 0.000967s | byte equality observed |
| mp_sort_q.test | 10 | 0.001013s | 0.001004s | 0.000988s | byte equality observed |
| mp_split.test | 10 | 0.001015s | 0.000998s | 0.001030s | byte equality observed |
| mp_starts_with.test | 10 | 0.000991s | 0.000998s | 0.001023s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000988s | 0.001015s | 0.000993s | byte equality observed |
| mp_take.test | 10 | 0.001015s | 0.001041s | 0.001008s | byte equality observed |
| mp_take_2.test | 10 | 0.000462s | 0.000453s | 0.000965s | byte equality observed |
| mp_third.test | 10 | 0.001036s | 0.001016s | 0.001000s | byte equality observed |
| mp_third_2.test | 10 | 0.000460s | 0.000461s | 0.001000s | byte equality observed |
| mp_transform.test | 10 | 0.001034s | 0.001023s | 0.000985s | byte equality observed |
| mp_transform_2.test | 10 | 0.000994s | 0.000968s | 0.000960s | byte equality observed |
| mp_transform_front.test | 10 | 0.001025s | 0.001032s | 0.001013s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000465s | 0.000475s | 0.000946s | byte equality observed |
| mp_transform_if.test | 10 | 0.000990s | 0.001007s | 0.001023s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000982s | 0.001004s | 0.001048s | byte equality observed |
| mp_transform_q.test | 10 | 0.001015s | 0.001018s | 0.001049s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001005s | 0.001006s | 0.001007s | byte equality observed |
| mp_transform_second.test | 10 | 0.001025s | 0.001006s | 0.000994s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000463s | 0.000466s | 0.000971s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000984s | 0.001030s | 0.001000s | byte equality observed |
| mp_transform_third.test | 10 | 0.000997s | 0.000987s | 0.001014s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000464s | 0.000467s | 0.000960s | byte equality observed |
| mp_unique.test | 10 | 0.001008s | 0.001015s | 0.001023s | byte equality observed |
| mp_unique_if.test | 10 | 0.001036s | 0.001077s | 0.001019s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001027s | 0.001008s | 0.001023s | byte equality observed |
| mp_valid.test | 10 | 0.000994s | 0.001002s | 0.001038s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001016s | 0.001044s | 0.000996s | byte equality observed |
| mp_value.test | 10 | 0.000469s | 0.000467s | 0.000991s | byte equality observed |
| mp_with_index.test | 10 | 0.001367s | 0.001354s | 0.001269s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000463s | 0.000469s | 0.000967s | byte equality observed |
| mpl.test | 10 | 0.001024s | 0.001004s | 0.001017s | byte equality observed |
| mpl_list.test | 10 | 0.000998s | 0.001005s | 0.001029s | byte equality observed |
| mpl_tuple.test | 10 | 0.000984s | 0.001009s | 0.001002s | byte equality observed |
| mpl_version.test | 10 | 0.001012s | 0.001019s | 0.000993s | byte equality observed |
| set_version.test | 10 | 0.001002s | 0.000996s | 0.000972s | byte equality observed |
| tuple_apply.test | 10 | 0.001003s | 0.000983s | 0.000986s | byte equality observed |
| tuple_for_each.test | 10 | 0.001004s | 0.001004s | 0.000992s | byte equality observed |
| tuple_transform.test | 10 | 0.001026s | 0.001022s | 0.001004s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000987s | 0.001001s | 0.000999s | byte equality observed |
| tuple_version.test | 10 | 0.001000s | 0.000995s | 0.000978s | byte equality observed |
| utility_version.test | 10 | 0.001005s | 0.001010s | 0.000997s | byte equality observed |
| version.test | 10 | 0.000997s | 0.000996s | 0.001005s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
