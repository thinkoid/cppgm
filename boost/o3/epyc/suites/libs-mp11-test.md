# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.038128 | 0.072164 | 0.114551 | — | — | — |
| complex_h.test | COMPILE | 0.159394 | 0.320456 | 0.506919 | — | — | — |
| mp_size.test | RUN | 0.180165 | 0.966964 | 0.629974 | 0.001826 | 0.001823 | 0.001500 |
| mp_size_2.test | RUN | 0.015866 | 0.036031 | 0.056002 | 0.000759 | 0.000699 | 0.001330 |
| mp_empty.test | RUN | 0.175900 | 0.599261 | 0.548147 | 0.001666 | 0.001884 | 0.001890 |
| mp_empty_2.test | RUN | 0.016326 | 0.037997 | 0.058986 | 0.000590 | 0.000724 | 0.001730 |
| mp_assign.test | RUN | 0.197171 | 1.264201 | 0.771232 | 0.001661 | 0.001856 | 0.001750 |
| mp_assign_2.test | RUN | 0.016881 | 0.036081 | 0.052086 | 0.000741 | 0.000823 | 0.001599 |
| mp_clear.test | RUN | 0.180976 | 0.579423 | 0.534374 | 0.001376 | 0.001819 | 0.001654 |
| mp_clear_2.test | RUN | 0.016546 | 0.038118 | 0.058230 | 0.000600 | 0.000585 | 0.001782 |
| mp_front.test | RUN | 0.185677 | 0.837072 | 0.654726 | 0.001812 | 0.002027 | 0.001826 |
| mp_front_2.test | RUN | 0.016644 | 0.035381 | 0.059464 | 0.000592 | 0.000770 | 0.001480 |
| mp_pop_front.test | RUN | 0.181519 | 0.914708 | 0.610005 | 0.001664 | 0.001558 | 0.001584 |
| mp_pop_front_2.test | RUN | 0.016917 | 0.037107 | 0.060583 | 0.000611 | 0.000767 | 0.001588 |
| mp_second.test | RUN | 0.180053 | 0.581817 | 0.612947 | 0.001657 | 0.001655 | 0.001630 |
| mp_second_2.test | RUN | 0.017535 | 0.037630 | 0.058906 | 0.000707 | 0.000789 | 0.001646 |
| mp_third.test | RUN | 0.168170 | 0.542242 | 0.586581 | 0.001728 | 0.001934 | 0.001753 |
| mp_third_2.test | RUN | 0.016100 | 0.036659 | 0.053785 | 0.000752 | 0.000787 | 0.001598 |
| mp_push_front.test | RUN | 0.233787 | 1.908495 | 0.961476 | 0.001607 | 0.001826 | 0.001830 |
| mp_push_front_2.test | RUN | 0.017322 | 0.035687 | 0.058655 | 0.000651 | 0.000813 | 0.001644 |
| mp_push_back.test | RUN | 0.229436 | 1.889158 | 1.034707 | 0.001748 | 0.001625 | 0.001751 |
| mp_push_back_2.test | RUN | 0.017539 | 0.039057 | 0.061275 | 0.000781 | 0.000804 | 0.001760 |
| mp_rename.test | RUN | 0.213594 | 1.730627 | 0.914749 | 0.001639 | 0.001619 | 0.001688 |
| mp_rename_2.test | RUN | 0.016044 | 0.037193 | 0.057694 | 0.000619 | 0.000806 | 0.001680 |
| mp_append.test | RUN | 0.224202 | 1.999601 | 0.994790 | 0.001892 | 0.001938 | 0.001628 |
| mp_append_2.test | RUN | 0.465227 | 4.464461 | 1.281436 | 0.001552 | 0.001512 | 0.001648 |
| mp_append_3.test | RUN | 0.017137 | 0.036077 | 0.050895 | 0.000795 | 0.000741 | 0.001740 |
| mp_append_sf.test | RUN | 0.176713 | 0.503748 | 0.557218 | 0.001486 | 0.001827 | 0.001711 |
| mp_replace_front.test | RUN | 0.203964 | 1.417366 | 0.789236 | 0.001970 | 0.001848 | 0.001452 |
| mp_replace_front_2.test | RUN | 0.017728 | 0.037213 | 0.060352 | 0.000542 | 0.000789 | 0.001628 |
| mp_replace_second.test | RUN | 0.200347 | 0.930932 | 0.737596 | 0.001551 | 0.001760 | 0.001813 |
| mp_replace_second_2.test | RUN | 0.016113 | 0.037335 | 0.054720 | 0.000787 | 0.000770 | 0.001462 |
| mp_replace_third.test | RUN | 0.197832 | 0.741807 | 0.684821 | 0.001802 | 0.001949 | 0.001846 |
| mp_replace_third_2.test | RUN | 0.016519 | 0.039762 | 0.059422 | 0.000982 | 0.000661 | 0.001831 |
| mp_apply_q.test | RUN | 0.212062 | 1.723163 | 0.849099 | 0.001875 | 0.001755 | 0.001495 |
| mp_apply_q_sf.test | RUN | 0.178941 | 0.522699 | 0.550050 | 0.001428 | 0.001873 | 0.001719 |
| mp_is_list.test | RUN | 0.180851 | 0.611551 | 0.604092 | 0.001792 | 0.001890 | 0.001782 |
| mp_list_c.test | RUN | 0.182029 | 0.725247 | 0.614927 | 0.001813 | 0.001678 | 0.001894 |
| mp_transform_front.test | RUN | 0.214198 | 1.421611 | 0.740824 | 0.001714 | 0.001756 | 0.001792 |
| mp_transform_front_2.test | RUN | 0.016504 | 0.035409 | 0.058708 | 0.000646 | 0.000660 | 0.001580 |
| mp_transform_second.test | RUN | 0.212534 | 1.232141 | 0.726282 | 0.001628 | 0.001792 | 0.001491 |
| mp_transform_second_2.test | RUN | 0.016373 | 0.036045 | 0.062155 | 0.000745 | 0.000806 | 0.001496 |
| mp_transform_third.test | RUN | 0.186880 | 0.953408 | 0.671766 | 0.001764 | 0.001712 | 0.001881 |
| mp_transform_third_2.test | RUN | 0.016038 | 0.036778 | 0.055898 | 0.000778 | 0.000635 | 0.001349 |
| mp_list_v.test | RUN | 0.017248 | 0.036758 | 0.056766 | 0.000800 | 0.000716 | 0.001686 |
| mp_rename_v.test | RUN | 0.017579 | 0.036561 | 0.054943 | 0.000587 | 0.000730 | 0.001512 |
| mp_is_value_list.test | RUN | 0.167379 | 0.383806 | 0.526906 | 0.001893 | 0.001754 | 0.001924 |
| mp_transform.test | RUN | 0.376672 | 3.003983 | 1.621229 | 0.001995 | 0.001710 | 0.001704 |
| mp_transform_2.test | RUN | 0.166470 | 0.341332 | 0.539875 | 0.002118 | 0.001808 | 0.001664 |
| mp_transform_q.test | RUN | 0.368507 | 2.857229 | 1.561814 | 0.001674 | 0.001874 | 0.001830 |
| mp_transform_q_2.test | RUN | 0.406920 | 0.946002 | 2.052428 | 0.001684 | 0.001872 | 0.001385 |
| mp_transform_sf.test | RUN | 0.181677 | 0.527792 | 0.599770 | 0.001830 | 0.001807 | 0.001863 |
| mp_transform_if.test | RUN | 0.228759 | 1.410841 | 0.853295 | 0.001473 | 0.001579 | 0.001772 |
| mp_transform_if_q.test | RUN | 0.219296 | 1.438587 | 0.887408 | 0.001808 | 0.001556 | 0.001626 |
| mp_filter.test | RUN | 0.192416 | 0.861841 | 0.667772 | 0.001616 | 0.001916 | 0.001697 |
| mp_fill.test | RUN | 0.181204 | 0.657171 | 0.636591 | 0.001625 | 0.001892 | 0.001777 |
| mp_fill_2.test | RUN | 0.030217 | 0.055990 | 0.098617 | 0.000817 | 0.000764 | 0.001866 |
| mp_count.test | RUN | 0.374564 | 1.539138 | 0.983928 | 0.001742 | 0.001638 | 0.001558 |
| mp_count_if.test | RUN | 0.376431 | 1.578382 | 1.126798 | 0.001835 | 0.001888 | 0.001764 |
| mp_count_if_q.test | RUN | 0.196066 | 1.021714 | 0.622946 | 0.001596 | 0.001926 | 0.001572 |
| mp_contains.test | RUN | 0.185935 | 0.633525 | 0.578329 | 0.001669 | 0.001782 | 0.001562 |
| mp_starts_with.test | RUN | 0.188767 | 0.595548 | 0.620794 | 0.001674 | 0.001752 | 0.001603 |
| mp_starts_with_sf.test | RUN | 0.178448 | 0.527985 | 0.541287 | 0.001570 | 0.001769 | 0.001920 |
| mp_repeat.test | RUN | 0.257713 | 2.534702 | 1.125362 | 0.001841 | 0.001769 | 0.001815 |
| mp_repeat_2.test | RUN | 0.030033 | 0.059479 | 0.100188 | 0.000758 | 0.000834 | 0.001843 |
| mp_repeat_3.test | RUN | 0.240363 | 0.348239 | 0.561240 | 0.001684 | 0.001930 | 0.001642 |
| mp_product.test | RUN | 0.212571 | 1.535123 | 0.779797 | 0.001623 | 0.001867 | 0.001555 |
| mp_drop.test | RUN | 0.222117 | 1.909638 | 0.919198 | 0.001610 | 0.001608 | 0.001817 |
| mp_drop_2.test | RUN | 0.029833 | 0.060231 | 0.099963 | 0.000619 | 0.000780 | 0.001468 |
| mp_iota.test | RUN | 0.222618 | 1.612456 | 0.852984 | 0.001830 | 0.001846 | 0.001748 |
| mp_iota_2.test | RUN | 0.234105 | 1.957872 | 0.882434 | 0.001611 | 0.001884 | 0.001615 |
| mp_at.test | RUN | 0.193900 | 0.853188 | 0.695531 | 0.001623 | 0.001596 | 0.001812 |
| mp_at_2.test | RUN | 0.030792 | 0.054916 | 0.098040 | 0.000591 | 0.000535 | 0.001727 |
| mp_at_sf.test | RUN | 0.181373 | 0.540476 | 0.576031 | 0.001587 | 0.001517 | 0.001691 |
| mp_take.test | RUN | 0.290498 | 2.493480 | 1.064550 | 0.001587 | 0.001642 | 0.001884 |
| mp_take_2.test | RUN | 0.028340 | 0.055909 | 0.100852 | 0.000770 | 0.000792 | 0.001838 |
| mp_slice.test | RUN | 0.333002 | 2.536979 | 1.392221 | 0.001695 | 0.001868 | 0.001557 |
| mp_slice_2.test | RUN | 0.028536 | 0.059519 | 0.101482 | 0.000687 | 0.000695 | 0.001709 |
| mp_replace.test | RUN | 0.222870 | 1.302778 | 0.921746 | 0.001836 | 0.001509 | 0.001654 |
| mp_replace_if.test | RUN | 0.211401 | 1.119766 | 0.818578 | 0.001805 | 0.001804 | 0.001650 |
| mp_replace_if_q.test | RUN | 0.214893 | 1.151991 | 0.853404 | 0.001601 | 0.002078 | 0.001866 |
| mp_copy_if.test | RUN | 0.218412 | 1.554150 | 0.823161 | 0.001775 | 0.001668 | 0.001564 |
| mp_copy_if_q.test | RUN | 0.213632 | 1.553249 | 0.827383 | 0.001825 | 0.001875 | 0.001358 |
| mp_remove.test | RUN | 0.217543 | 1.086378 | 0.780567 | 0.001731 | 0.001861 | 0.001766 |
| mp_remove_if.test | RUN | 0.227604 | 1.703439 | 0.826569 | 0.001690 | 0.001915 | 0.001865 |
| mp_remove_if_q.test | RUN | 0.223578 | 1.663067 | 0.855048 | 0.001564 | 0.001982 | 0.001788 |
| mp_partition.test | RUN | 0.218062 | 1.573707 | 0.885796 | 0.001796 | 0.001546 | 0.001772 |
| mp_partition_q.test | RUN | 0.221974 | 1.590542 | 0.926492 | 0.001722 | 0.001946 | 0.001568 |
| mp_sort.test | RUN | 0.211058 | 1.142597 | 0.764527 | 0.001555 | 0.001860 | 0.001748 |
| mp_sort_q.test | RUN | 0.210387 | 1.130318 | 0.807720 | 0.001468 | 0.001808 | 0.001357 |
| mp_find.test | RUN | 0.207488 | 1.221447 | 0.683698 | 0.001817 | 0.001730 | 0.001487 |
| mp_find_if.test | RUN | 0.196856 | 1.116050 | 0.684094 | 0.001702 | 0.001897 | 0.001442 |
| mp_find_if_q.test | RUN | 0.217557 | 1.275818 | 0.835021 | 0.001668 | 0.001853 | 0.001838 |
| mp_reverse.test | RUN | 0.412087 | 3.280249 | 1.509084 | 0.001856 | 0.001648 | 0.001851 |
| mp_fold.test | RUN | 0.680164 | 2.598270 | 3.902390 | 0.001888 | 0.001812 | 0.001916 |
| mp_fold_q.test | RUN | 0.198857 | 1.147183 | 0.789516 | 0.001740 | 0.001974 | 0.001815 |
| mp_fold_q_sf.test | RUN | 0.183976 | 0.540806 | 0.614011 | 0.001650 | 0.001901 | 0.001824 |
| mp_reverse_fold.test | RUN | 0.330963 | 2.421062 | 1.077623 | 0.001605 | 0.001702 | 0.001813 |
| mp_reverse_fold_q.test | RUN | 0.212463 | 1.359807 | 0.822605 | 0.001654 | 0.001760 | 0.001678 |
| mp_unique.test | RUN | 0.212376 | 1.225865 | 0.806852 | 0.001658 | 0.001958 | 0.001434 |
| mp_unique_if.test | RUN | 0.371462 | 2.583457 | 1.258466 | 0.001586 | 0.001910 | 0.001529 |
| mp_unique_if_q.test | RUN | 0.299722 | 2.560314 | 1.015668 | 0.001689 | 0.001603 | 0.001783 |
| mp_all_of.test | RUN | 0.492503 | 1.394450 | 1.385086 | 0.001842 | 0.001800 | 0.001942 |
| mp_all_of_q.test | RUN | 0.189931 | 0.584978 | 0.605039 | 0.001428 | 0.001815 | 0.001860 |
| mp_any_of.test | RUN | 0.490168 | 1.483789 | 1.288434 | 0.001683 | 0.001854 | 0.001715 |
| mp_any_of_q.test | RUN | 0.185839 | 0.600487 | 0.612319 | 0.001845 | 0.001913 | 0.001916 |
| mp_none_of.test | RUN | 0.483923 | 1.479829 | 1.271607 | 0.001898 | 0.001675 | 0.001820 |
| mp_none_of_q.test | RUN | 0.181395 | 0.621163 | 0.609330 | 0.001690 | 0.001911 | 0.001709 |
| mp_replace_at.test | RUN | 0.215274 | 1.209638 | 0.935872 | 0.002168 | 0.001738 | 0.001808 |
| mp_replace_at_c.test | RUN | 0.217053 | 1.197747 | 0.896574 | 0.001597 | 0.001644 | 0.001488 |
| mp_for_each.test | RUN | 0.215437 | 0.900511 | 1.006635 | 0.001628 | 0.001542 | 0.001852 |
| mp_insert.test | RUN | 0.310471 | 2.498617 | 1.280734 | 0.001840 | 0.001880 | 0.001906 |
| mp_insert_2.test | RUN | 0.029577 | 0.057906 | 0.096196 | 0.000742 | 0.000587 | 0.001601 |
| mp_erase.test | RUN | 0.344413 | 2.649020 | 1.448538 | 0.001398 | 0.001980 | 0.001702 |
| mp_erase_2.test | RUN | 0.028592 | 0.054478 | 0.097993 | 0.000667 | 0.000795 | 0.001705 |
| mp_with_index.test | RUN | 0.434746 | 5.514513 | 3.351825 | 0.002400 | 0.002264 | 0.002119 |
| mp_with_index_cx.test | RUN | 0.003748 | 0.018814 | 0.027185 | 0.000659 | 0.000747 | 0.001798 |
| mp_from_sequence.test | RUN | 0.210733 | 1.443821 | 0.848582 | 0.001836 | 0.001942 | 0.001709 |
| mp_from_sequence_2.test | RUN | 0.224161 | 1.700784 | 0.973098 | 0.001672 | 0.001694 | 0.001830 |
| mp_from_sequence_3.test | RUN | 0.192033 | 0.745418 | 0.699997 | 0.001636 | 0.001838 | 0.001440 |
| mp_min_element.test | RUN | 0.185855 | 0.671425 | 0.658024 | 0.001710 | 0.001750 | 0.001752 |
| mp_min_element_2.test | RUN | 0.028092 | 0.057836 | 0.097225 | 0.000633 | 0.000716 | 0.001600 |
| mp_min_element_q.test | RUN | 0.183085 | 0.673305 | 0.602934 | 0.001891 | 0.001866 | 0.001584 |
| mp_min_element_q_2.test | RUN | 0.030765 | 0.058812 | 0.103139 | 0.000795 | 0.000779 | 0.001852 |
| mp_max_element.test | RUN | 0.190210 | 0.677764 | 0.622883 | 0.001626 | 0.001834 | 0.001786 |
| mp_max_element_2.test | RUN | 0.028695 | 0.057951 | 0.094889 | 0.000614 | 0.000752 | 0.001448 |
| mp_max_element_q.test | RUN | 0.187175 | 0.674927 | 0.593475 | 0.001598 | 0.001920 | 0.001830 |
| mp_max_element_q_2.test | RUN | 0.028864 | 0.058374 | 0.086608 | 0.000747 | 0.000668 | 0.001794 |
| mp_nth_element.test | RUN | 0.204164 | 0.925325 | 0.781242 | 0.001858 | 0.001823 | 0.001416 |
| mp_nth_element_q.test | RUN | 0.212688 | 0.932216 | 0.774838 | 0.001382 | 0.001758 | 0.001640 |
| mp_back.test | RUN | 0.207742 | 0.789167 | 0.674120 | 0.001890 | 0.001577 | 0.001506 |
| mp_back_2.test | RUN | 0.028161 | 0.054796 | 0.101870 | 0.000580 | 0.000561 | 0.001698 |
| mp_pop_back.test | RUN | 0.509069 | 5.078417 | 1.469353 | 0.001626 | 0.001516 | 0.001806 |
| mp_pop_back_2.test | RUN | 0.032217 | 0.053728 | 0.083301 | 0.000784 | 0.000669 | 0.001888 |
| mp_flatten.test | RUN | 0.232016 | 1.810966 | 1.008947 | 0.001638 | 0.001824 | 0.001673 |
| mp_rotate_left.test | RUN | 0.236254 | 1.941825 | 0.997021 | 0.001882 | 0.001867 | 0.001625 |
| mp_rotate_right.test | RUN | 0.242035 | 1.930220 | 1.020866 | 0.001696 | 0.001473 | 0.001324 |
| mp_power_set.test | RUN | 0.237023 | 1.871377 | 1.006292 | 0.001988 | 0.001902 | 0.001550 |
| mp_partial_sum.test | RUN | 0.301899 | 2.474084 | 1.137629 | 0.001598 | 0.001740 | 0.001364 |
| mp_iterate.test | RUN | 0.214245 | 0.757102 | 0.799496 | 0.001865 | 0.001839 | 0.001718 |
| mp_pairwise_fold.test | RUN | 0.235223 | 1.713439 | 1.008119 | 0.001642 | 0.001870 | 0.001848 |
| mp_pairwise_fold_q.test | RUN | 0.183440 | 0.523589 | 0.584414 | 0.002175 | 0.001794 | 0.001894 |
| mp_sliding_fold.test | RUN | 0.420123 | 3.247336 | 1.858998 | 0.001870 | 0.001852 | 0.001930 |
| mp_sliding_fold_q.test | RUN | 0.421899 | 3.237363 | 1.859098 | 0.001659 | 0.001712 | 0.001601 |
| mp_intersperse.test | RUN | 0.224489 | 1.222274 | 0.883066 | 0.001751 | 0.001831 | 0.001816 |
| mp_split.test | RUN | 0.307391 | 2.334713 | 1.216600 | 0.001664 | 0.001837 | 0.001565 |
| mp_join.test | RUN | 0.234082 | 1.969421 | 1.078440 | 0.001620 | 0.001900 | 0.001831 |
| integral.test | RUN | 0.181698 | 0.886524 | 0.668444 | 0.001695 | 0.001658 | 0.001864 |
| mp_value.test | RUN | 0.012583 | 0.031244 | 0.042671 | 0.000762 | 0.000757 | 0.001886 |
| mp_identity.test | RUN | 0.181594 | 0.809286 | 0.617287 | 0.001686 | 0.001823 | 0.001794 |
| mp_inherit.test | RUN | 0.175654 | 0.584109 | 0.612387 | 0.001686 | 0.001825 | 0.001776 |
| mp_if.test | RUN | 0.174205 | 0.662727 | 0.602113 | 0.001599 | 0.001911 | 0.001867 |
| mp_if_sf.test | RUN | 0.172071 | 0.489373 | 0.533974 | 0.001626 | 0.001744 | 0.001803 |
| mp_eval_if.test | RUN | 0.181830 | 0.710748 | 0.639594 | 0.001820 | 0.001659 | 0.001275 |
| mp_eval_if_sf.test | RUN | 0.171225 | 0.498360 | 0.519141 | 0.001842 | 0.001640 | 0.001839 |
| mp_valid.test | RUN | 0.176412 | 0.522743 | 0.544040 | 0.001564 | 0.001686 | 0.001846 |
| mp_defer.test | RUN | 0.187343 | 0.851437 | 0.593344 | 0.001728 | 0.001833 | 0.001784 |
| mp_quote.test | RUN | 0.190243 | 0.860554 | 0.665697 | 0.001901 | 0.001893 | 0.001952 |
| mp_invoke_q.test | RUN | 0.212858 | 1.122183 | 0.764898 | 0.001525 | 0.001773 | 0.001516 |
| mp_invoke_q_sf.test | RUN | 0.172076 | 0.503974 | 0.575927 | 0.001848 | 0.001848 | 0.001542 |
| mp_quote_trait.test | RUN | 0.186731 | 0.945169 | 0.658114 | 0.001843 | 0.001810 | 0.001860 |
| mp_cond.test | RUN | 0.177043 | 0.577157 | 0.608903 | 0.001540 | 0.001764 | 0.001473 |
| mp_cond_sf.test | RUN | 0.172095 | 0.515273 | 0.568951 | 0.001540 | 0.001734 | 0.001404 |
| mp_not_fn.test | RUN | 0.166396 | 0.509623 | 0.538332 | 0.001838 | 0.001737 | 0.001601 |
| mp_eval_if_not.test | RUN | 0.182114 | 0.712318 | 0.609801 | 0.001796 | 0.001782 | 0.001854 |
| mp_eval_or.test | RUN | 0.171997 | 0.393237 | 0.544319 | 0.001830 | 0.001883 | 0.001841 |
| mp_compose.test | RUN | 0.189783 | 1.171155 | 0.736672 | 0.001624 | 0.001687 | 0.001750 |
| mp_valid_and_true.test | RUN | 0.172402 | 0.593818 | 0.589562 | 0.001717 | 0.001800 | 0.001597 |
| mp_compose_sf.test | COMPILE | 0.044544 | 0.074651 | 0.146347 | — | — | — |
| integer_sequence.test | RUN | 0.201255 | 1.146412 | 0.785314 | 0.001678 | 0.001605 | 0.001747 |
| tuple_for_each.test | RUN | 0.177384 | 0.429739 | 0.584626 | 0.001660 | 0.001752 | 0.001354 |
| tuple_for_each_cx.test | COMPILE | 0.034994 | 0.064711 | 0.113750 | — | — | — |
| tuple_apply.test | RUN | 0.179382 | 0.428950 | 0.644677 | 0.001563 | 0.001787 | 0.001720 |
| tuple_apply_cx.test | COMPILE | 0.046038 | 0.085289 | 0.155601 | — | — | — |
| construct_from_tuple.test | RUN | 0.180452 | 0.474129 | 0.649090 | 0.001802 | 0.001736 | 0.001753 |
| construct_from_tuple_cx.test | COMPILE | 0.045925 | 0.092555 | 0.133054 | — | — | — |
| tuple_transform.test | RUN | 0.286511 | 0.941376 | 1.225720 | 0.001637 | 0.001834 | 0.001430 |
| tuple_transform_2.test | RUN | 0.255356 | 0.704115 | 1.086396 | 0.001836 | 0.001621 | 0.001577 |
| tuple_transform_cx.test | COMPILE | 0.041176 | 0.086461 | 0.151358 | — | — | — |
| mp_set_contains.test | RUN | 0.181057 | 0.612170 | 0.619116 | 0.001730 | 0.001519 | 0.001674 |
| mp_set_push_back.test | RUN | 0.233466 | 1.847059 | 1.005068 | 0.001926 | 0.001926 | 0.001881 |
| mp_set_push_front.test | RUN | 0.288773 | 2.191490 | 1.145344 | 0.001660 | 0.001751 | 0.001664 |
| mp_is_set.test | RUN | 0.180182 | 0.612372 | 0.641197 | 0.001766 | 0.001844 | 0.001763 |
| mp_set_union.test | RUN | 0.217089 | 1.568583 | 0.936751 | 0.001653 | 0.001894 | 0.001468 |
| mp_set_union_sf.test | RUN | 0.173265 | 0.486074 | 0.585842 | 0.001844 | 0.001839 | 0.001734 |
| mp_set_difference.test | RUN | 0.204503 | 1.229616 | 0.807479 | 0.001982 | 0.001855 | 0.001531 |
| mp_set_difference_sf.test | RUN | 0.172256 | 0.498308 | 0.580841 | 0.001615 | 0.001621 | 0.001838 |
| mp_set_intersection.test | RUN | 0.211311 | 1.205265 | 0.803310 | 0.001829 | 0.001400 | 0.001854 |
| mp_set_intersection_sf.test | RUN | 0.176152 | 0.494052 | 0.559195 | 0.001864 | 0.001721 | 0.001746 |
| mp_all.test | RUN | 0.180383 | 0.616705 | 0.614067 | 0.001742 | 0.001463 | 0.001712 |
| mp_all_2.test | RUN | 0.491918 | 1.283889 | 1.357242 | 0.001873 | 0.001904 | 0.001692 |
| mp_and.test | RUN | 0.178576 | 0.584596 | 0.596502 | 0.001844 | 0.001738 | 0.001847 |
| mp_any.test | RUN | 0.182178 | 0.599311 | 0.623258 | 0.001604 | 0.001770 | 0.001947 |
| mp_any_2.test | RUN | 0.491609 | 1.291470 | 1.297262 | 0.001715 | 0.001950 | 0.001719 |
| mp_or.test | RUN | 0.183118 | 0.608727 | 0.618150 | 0.001799 | 0.001948 | 0.001781 |
| mp_same.test | RUN | 0.339159 | 1.006730 | 0.981867 | 0.001653 | 0.001703 | 0.001509 |
| mp_plus.test | RUN | 0.183950 | 0.691002 | 0.626759 | 0.001638 | 0.001562 | 0.001748 |
| mp_less.test | RUN | 0.182459 | 0.605894 | 0.549755 | 0.001800 | 0.001774 | 0.001673 |
| mp_min.test | RUN | 0.176653 | 0.562578 | 0.604866 | 0.001663 | 0.001839 | 0.001282 |
| mp_max.test | RUN | 0.178275 | 0.606812 | 0.614930 | 0.001670 | 0.001894 | 0.001420 |
| mp_similar.test | RUN | 0.178582 | 0.605495 | 0.604936 | 0.001529 | 0.001776 | 0.001872 |
| mp_map_find.test | RUN | 0.204393 | 1.098550 | 0.787469 | 0.001900 | 0.001631 | 0.001796 |
| mp_map_find_2.test | RUN | 0.198065 | 0.431385 | 0.647743 | 0.001768 | 0.001955 | 0.001453 |
| mp_map_find_3.test | RUN | 0.195634 | 0.426927 | 0.676688 | 0.001376 | 0.001867 | 0.001679 |
| mp_map_find_4.test | RUN | 0.180348 | 0.409085 | 0.631255 | 0.001512 | 0.001592 | 0.001714 |
| mp_map_contains.test | RUN | 0.186984 | 0.622076 | 0.604801 | 0.001822 | 0.001890 | 0.001821 |
| mp_map_insert.test | RUN | 0.241453 | 2.039879 | 1.059970 | 0.001808 | 0.001855 | 0.001371 |
| mp_map_replace.test | RUN | 0.303997 | 2.305090 | 1.241747 | 0.001678 | 0.001926 | 0.001754 |
| mp_map_erase.test | RUN | 0.236479 | 1.729182 | 1.053225 | 0.001545 | 0.001934 | 0.001536 |
| mp_map_update.test | RUN | 0.211683 | 1.137022 | 0.815060 | 0.001844 | 0.001846 | 0.001626 |
| mp_map_update_q.test | RUN | 0.214031 | 1.145619 | 0.823016 | 0.001821 | 0.001602 | 0.001458 |
| mp_map_keys.test | RUN | 0.209595 | 1.019295 | 0.797495 | 0.001574 | 0.001749 | 0.001688 |
| mp_is_map.test | RUN | 0.197733 | 0.618639 | 0.640476 | 0.001856 | 0.001739 | 0.001734 |
| mp_bind.test | RUN | 0.238084 | 1.816239 | 0.908749 | 0.001838 | 0.001658 | 0.001819 |
| mp_bind_q.test | RUN | 0.200960 | 1.123984 | 0.784418 | 0.001840 | 0.001599 | 0.001645 |
| mp_bind_front.test | RUN | 0.205429 | 1.246150 | 0.764579 | 0.001680 | 0.001609 | 0.001446 |
| mp_bind_back.test | RUN | 0.204602 | 1.230481 | 0.722869 | 0.001899 | 0.001724 | 0.001352 |
| mp_lambda.test | RUN | 0.428292 | 3.710719 | 1.908202 | 0.001820 | 0.001412 | 0.001721 |
| mpl.test | RUN | 0.401895 | 1.006647 | 1.523223 | 0.001662 | 0.001855 | 0.001569 |
| mpl_list.test | RUN | 0.222580 | 0.746952 | 0.735384 | 0.001636 | 0.001822 | 0.001687 |
| mpl_tuple.test | RUN | 0.228126 | 0.754708 | 0.739862 | 0.001666 | 0.001694 | 0.001652 |
| version.test | RUN | 0.115371 | 0.278921 | 0.386148 | 0.001641 | 0.001768 | 0.001515 |
| mp11_version.test | RUN | 0.135533 | 0.314854 | 0.449848 | 0.001601 | 0.001685 | 0.001563 |
| list_version.test | RUN | 0.116027 | 0.289026 | 0.363263 | 0.001802 | 0.001863 | 0.001694 |
| algorithm_version.test | RUN | 0.131984 | 0.292055 | 0.417677 | 0.001750 | 0.001786 | 0.001524 |
| integral_version.test | RUN | 0.116257 | 0.282400 | 0.378215 | 0.001745 | 0.001667 | 0.001554 |
| utility_version.test | RUN | 0.119791 | 0.275138 | 0.365155 | 0.001606 | 0.001878 | 0.001594 |
| function_version.test | RUN | 0.120762 | 0.277012 | 0.367941 | 0.001689 | 0.001768 | 0.001728 |
| map_version.test | RUN | 0.133372 | 0.309439 | 0.419441 | 0.001798 | 0.001643 | 0.001287 |
| set_version.test | RUN | 0.121974 | 0.279939 | 0.375866 | 0.001710 | 0.001850 | 0.001625 |
| bind_version.test | RUN | 0.126976 | 0.301618 | 0.418496 | 0.001618 | 0.001602 | 0.001506 |
| integer_sequence_version.test | RUN | 0.116341 | 0.281448 | 0.311780 | 0.001715 | 0.001596 | 0.001352 |
| tuple_version.test | RUN | 0.132564 | 0.301871 | 0.358448 | 0.001354 | 0.001912 | 0.001207 |
| mpl_version.test | RUN | 0.099500 | 0.238093 | 0.367099 | 0.001400 | 0.001474 | 0.001227 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.054×† | 1.098×, 1.010× | 1.009× |
| clang | 1.065×† | 1.098×, 1.031× | 1.049× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001021s | 0.001005s | 0.000984s | byte equality observed |
| bind_version.test | 10 | 0.000988s | 0.000993s | 0.001010s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001010s | 0.000996s | 0.001034s | byte equality observed |
| function_version.test | 10 | 0.000976s | 0.001050s | 0.001016s | byte equality observed |
| integer_sequence.test | 10 | 0.000997s | 0.001032s | 0.000988s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001011s | 0.001029s | 0.001002s | byte equality observed |
| integral.test | 10 | 0.000995s | 0.001046s | 0.000978s | byte equality observed |
| integral_version.test | 10 | 0.000998s | 0.000999s | 0.000993s | byte equality observed |
| list_version.test | 10 | 0.001021s | 0.001016s | 0.001017s | byte equality observed |
| map_version.test | 10 | 0.000985s | 0.001007s | 0.001004s | byte equality observed |
| mp11_version.test | 10 | 0.001021s | 0.001030s | 0.001032s | byte equality observed |
| mp_all.test | 10 | 0.001029s | 0.001025s | 0.001009s | byte equality observed |
| mp_all_2.test | 5 | 0.001002s | 0.001061s | 0.001036s | byte equality observed |
| mp_all_of.test | 10 | 0.000994s | 0.001008s | 0.001003s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000990s | 0.001043s | 0.000990s | byte equality observed |
| mp_and.test | 10 | 0.001010s | 0.001094s | 0.001027s | byte equality observed |
| mp_any.test | 10 | 0.000999s | 0.001006s | 0.001004s | byte equality observed |
| mp_any_2.test | 10 | 0.000988s | 0.001097s | 0.001026s | byte equality observed |
| mp_any_of.test | 10 | 0.000990s | 0.000987s | 0.001017s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000997s | 0.001034s | 0.001034s | byte equality observed |
| mp_append.test | 10 | 0.001028s | 0.001083s | 0.001047s | byte equality observed |
| mp_append_2.test | 10 | 0.001028s | 0.001108s | 0.001035s | byte equality observed |
| mp_append_3.test | 10 | 0.000470s | 0.000484s | 0.001017s | byte equality observed |
| mp_append_sf.test | 10 | 0.001015s | 0.001080s | 0.001036s | byte equality observed |
| mp_apply_q.test | 10 | 0.000990s | 0.001091s | 0.001036s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000998s | 0.001096s | 0.001016s | byte equality observed |
| mp_assign.test | 10 | 0.001013s | 0.001127s | 0.001009s | byte equality observed |
| mp_assign_2.test | 10 | 0.000463s | 0.000491s | 0.000989s | byte equality observed |
| mp_at.test | 10 | 0.001035s | 0.001150s | 0.001006s | byte equality observed |
| mp_at_2.test | 10 | 0.000462s | 0.000486s | 0.001007s | byte equality observed |
| mp_at_sf.test | 10 | 0.001038s | 0.001083s | 0.001004s | byte equality observed |
| mp_back.test | 10 | 0.001032s | 0.001115s | 0.001028s | byte equality observed |
| mp_back_2.test | 10 | 0.000469s | 0.000485s | 0.000981s | byte equality observed |
| mp_bind.test | 10 | 0.001010s | 0.001126s | 0.001014s | byte equality observed |
| mp_bind_back.test | 10 | 0.001007s | 0.001120s | 0.001008s | byte equality observed |
| mp_bind_front.test | 10 | 0.001009s | 0.001098s | 0.001008s | byte equality observed |
| mp_bind_q.test | 10 | 0.001021s | 0.001107s | 0.001025s | byte equality observed |
| mp_clear.test | 10 | 0.001017s | 0.001122s | 0.000997s | byte equality observed |
| mp_clear_2.test | 10 | 0.000463s | 0.000490s | 0.000989s | byte equality observed |
| mp_compose.test | 10 | 0.000994s | 0.001103s | 0.001004s | byte equality observed |
| mp_cond.test | 10 | 0.001017s | 0.001107s | 0.001016s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001005s | 0.001091s | 0.001019s | byte equality observed |
| mp_contains.test | 10 | 0.001013s | 0.001082s | 0.001054s | byte equality observed |
| mp_copy_if.test | 10 | 0.001001s | 0.001040s | 0.001009s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001003s | 0.001004s | 0.001015s | byte equality observed |
| mp_count.test | 10 | 0.001022s | 0.001001s | 0.001044s | byte equality observed |
| mp_count_if.test | 10 | 0.001022s | 0.001020s | 0.000996s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001014s | 0.001095s | 0.001004s | byte equality observed |
| mp_defer.test | 10 | 0.001009s | 0.001080s | 0.001005s | byte equality observed |
| mp_drop.test | 10 | 0.001033s | 0.001100s | 0.001012s | byte equality observed |
| mp_drop_2.test | 10 | 0.000465s | 0.000489s | 0.000972s | byte equality observed |
| mp_empty.test | 10 | 0.001030s | 0.001074s | 0.001012s | byte equality observed |
| mp_empty_2.test | 10 | 0.000468s | 0.000496s | 0.000998s | byte equality observed |
| mp_erase.test | 10 | 0.001065s | 0.001132s | 0.001018s | byte equality observed |
| mp_erase_2.test | 10 | 0.000466s | 0.000497s | 0.000983s | byte equality observed |
| mp_eval_if.test | 10 | 0.001002s | 0.001110s | 0.001019s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001006s | 0.001091s | 0.001004s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001021s | 0.001079s | 0.001002s | byte equality observed |
| mp_eval_or.test | 10 | 0.001039s | 0.001018s | 0.000993s | byte equality observed |
| mp_fill.test | 10 | 0.001024s | 0.001119s | 0.001003s | byte equality observed |
| mp_fill_2.test | 10 | 0.000463s | 0.000496s | 0.000990s | byte equality observed |
| mp_filter.test | 10 | 0.001013s | 0.001087s | 0.001032s | byte equality observed |
| mp_find.test | 10 | 0.001018s | 0.001095s | 0.001030s | byte equality observed |
| mp_find_if.test | 10 | 0.001008s | 0.001120s | 0.001022s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001005s | 0.001122s | 0.001002s | byte equality observed |
| mp_flatten.test | 10 | 0.000988s | 0.001088s | 0.001007s | byte equality observed |
| mp_fold.test | 10 | 0.001025s | 0.001101s | 0.001028s | byte equality observed |
| mp_fold_q.test | 10 | 0.000989s | 0.001091s | 0.001035s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000991s | 0.001094s | 0.001018s | byte equality observed |
| mp_for_each.test | 10 | 0.000994s | 0.001078s | 0.001000s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001018s | 0.001104s | 0.001013s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001012s | 0.001084s | 0.001022s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001021s | 0.001085s | 0.001031s | byte equality observed |
| mp_front.test | 10 | 0.001028s | 0.001114s | 0.001008s | byte equality observed |
| mp_front_2.test | 10 | 0.000470s | 0.000490s | 0.001006s | byte equality observed |
| mp_identity.test | 10 | 0.001021s | 0.001117s | 0.001002s | byte equality observed |
| mp_if.test | 10 | 0.001002s | 0.001126s | 0.001051s | byte equality observed |
| mp_if_sf.test | 10 | 0.001003s | 0.001142s | 0.001030s | byte equality observed |
| mp_inherit.test | 10 | 0.001037s | 0.001096s | 0.001029s | byte equality observed |
| mp_insert.test | 10 | 0.001036s | 0.001102s | 0.001020s | byte equality observed |
| mp_insert_2.test | 10 | 0.000470s | 0.000492s | 0.000977s | byte equality observed |
| mp_intersperse.test | 10 | 0.001006s | 0.001109s | 0.001010s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001017s | 0.001110s | 0.001027s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000993s | 0.001082s | 0.001028s | byte equality observed |
| mp_iota.test | 10 | 0.001044s | 0.001101s | 0.001027s | byte equality observed |
| mp_iota_2.test | 10 | 0.001030s | 0.001126s | 0.000987s | byte equality observed |
| mp_is_list.test | 10 | 0.001063s | 0.001073s | 0.001031s | byte equality observed |
| mp_is_map.test | 10 | 0.001038s | 0.001072s | 0.001024s | byte equality observed |
| mp_is_set.test | 10 | 0.001014s | 0.001093s | 0.001014s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001025s | 0.001101s | 0.001009s | byte equality observed |
| mp_iterate.test | 10 | 0.001020s | 0.001100s | 0.001014s | byte equality observed |
| mp_join.test | 10 | 0.001029s | 0.001136s | 0.000991s | byte equality observed |
| mp_lambda.test | 10 | 0.001037s | 0.001074s | 0.000990s | byte equality observed |
| mp_less.test | 10 | 0.001012s | 0.001087s | 0.001022s | byte equality observed |
| mp_list_c.test | 10 | 0.001044s | 0.001131s | 0.000998s | byte equality observed |
| mp_list_v.test | 10 | 0.000466s | 0.000481s | 0.000991s | byte equality observed |
| mp_map_contains.test | 10 | 0.001011s | 0.001078s | 0.001001s | byte equality observed |
| mp_map_erase.test | 10 | 0.001040s | 0.001103s | 0.000994s | byte equality observed |
| mp_map_find.test | 10 | 0.001014s | 0.001069s | 0.000997s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000996s | 0.001013s | 0.001012s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001028s | 0.001081s | 0.001014s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001039s | 0.001043s | 0.001028s | byte equality observed |
| mp_map_insert.test | 10 | 0.001050s | 0.001123s | 0.001044s | byte equality observed |
| mp_map_keys.test | 10 | 0.001048s | 0.001093s | 0.001056s | byte equality observed |
| mp_map_replace.test | 10 | 0.001032s | 0.001107s | 0.001019s | byte equality observed |
| mp_map_update.test | 10 | 0.001027s | 0.001059s | 0.001024s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001027s | 0.001093s | 0.000992s | byte equality observed |
| mp_max.test | 10 | 0.001003s | 0.001099s | 0.000992s | byte equality observed |
| mp_max_element.test | 10 | 0.001015s | 0.001132s | 0.000991s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000468s | 0.000505s | 0.001007s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001014s | 0.001133s | 0.001009s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000471s | 0.000499s | 0.000998s | byte equality observed |
| mp_min.test | 10 | 0.001007s | 0.001116s | 0.001006s | byte equality observed |
| mp_min_element.test | 10 | 0.001030s | 0.001140s | 0.001031s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000471s | 0.000499s | 0.000992s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001039s | 0.001150s | 0.001008s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000462s | 0.000497s | 0.000993s | byte equality observed |
| mp_none_of.test | 10 | 0.000987s | 0.001121s | 0.000999s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000987s | 0.001112s | 0.000975s | byte equality observed |
| mp_not_fn.test | 10 | 0.001028s | 0.001098s | 0.000993s | byte equality observed |
| mp_nth_element.test | 10 | 0.000994s | 0.001118s | 0.000997s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001018s | 0.001086s | 0.001022s | byte equality observed |
| mp_or.test | 10 | 0.001027s | 0.001081s | 0.001027s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000998s | 0.001060s | 0.001055s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000998s | 0.001082s | 0.001023s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001023s | 0.001089s | 0.001011s | byte equality observed |
| mp_partition.test | 10 | 0.000982s | 0.001108s | 0.001003s | byte equality observed |
| mp_partition_q.test | 10 | 0.001025s | 0.001111s | 0.001043s | byte equality observed |
| mp_plus.test | 10 | 0.001014s | 0.001109s | 0.001004s | byte equality observed |
| mp_pop_back.test | 10 | 0.001088s | 0.001131s | 0.001030s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000451s | 0.000485s | 0.000991s | byte equality observed |
| mp_pop_front.test | 10 | 0.001045s | 0.001146s | 0.000994s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000468s | 0.000499s | 0.001001s | byte equality observed |
| mp_power_set.test | 10 | 0.001007s | 0.001119s | 0.000993s | byte equality observed |
| mp_product.test | 10 | 0.001011s | 0.001092s | 0.001042s | byte equality observed |
| mp_push_back.test | 10 | 0.001017s | 0.001096s | 0.000996s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000476s | 0.000491s | 0.000986s | byte equality observed |
| mp_push_front.test | 10 | 0.001040s | 0.001118s | 0.001023s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000461s | 0.000503s | 0.000985s | byte equality observed |
| mp_quote.test | 10 | 0.000994s | 0.001088s | 0.001004s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001004s | 0.001102s | 0.001009s | byte equality observed |
| mp_remove.test | 10 | 0.001028s | 0.001151s | 0.001011s | byte equality observed |
| mp_remove_if.test | 10 | 0.001004s | 0.001131s | 0.001026s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001024s | 0.001117s | 0.001040s | byte equality observed |
| mp_rename.test | 10 | 0.001081s | 0.001146s | 0.001030s | byte equality observed |
| mp_rename_2.test | 10 | 0.000482s | 0.000504s | 0.000998s | byte equality observed |
| mp_rename_v.test | 10 | 0.000474s | 0.000504s | 0.001046s | byte equality observed |
| mp_repeat.test | 10 | 0.001063s | 0.001150s | 0.001032s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000482s | 0.000483s | 0.001000s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001038s | 0.001087s | 0.001020s | byte equality observed |
| mp_replace.test | 10 | 0.001066s | 0.001116s | 0.000982s | byte equality observed |
| mp_replace_at.test | 10 | 0.001077s | 0.001129s | 0.001009s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001013s | 0.001120s | 0.001042s | byte equality observed |
| mp_replace_front.test | 10 | 0.001064s | 0.001127s | 0.001019s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000481s | 0.000492s | 0.000999s | byte equality observed |
| mp_replace_if.test | 10 | 0.001069s | 0.001101s | 0.001031s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001023s | 0.001062s | 0.001037s | byte equality observed |
| mp_replace_second.test | 10 | 0.001066s | 0.001029s | 0.001009s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000474s | 0.000475s | 0.000968s | byte equality observed |
| mp_replace_third.test | 10 | 0.001067s | 0.001085s | 0.001006s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000469s | 0.000492s | 0.000988s | byte equality observed |
| mp_reverse.test | 10 | 0.001040s | 0.001126s | 0.001001s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001028s | 0.001118s | 0.001015s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001040s | 0.001100s | 0.001017s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001004s | 0.001134s | 0.001050s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001038s | 0.001133s | 0.001028s | byte equality observed |
| mp_same.test | 10 | 0.001037s | 0.001098s | 0.000990s | byte equality observed |
| mp_second.test | 10 | 0.001053s | 0.001122s | 0.001024s | byte equality observed |
| mp_second_2.test | 10 | 0.000468s | 0.000503s | 0.000977s | byte equality observed |
| mp_set_contains.test | 10 | 0.001014s | 0.001117s | 0.001037s | byte equality observed |
| mp_set_difference.test | 10 | 0.001029s | 0.001116s | 0.000992s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001026s | 0.001105s | 0.001015s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001032s | 0.001066s | 0.001056s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000994s | 0.001074s | 0.001012s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001022s | 0.001073s | 0.001045s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001022s | 0.001121s | 0.001004s | byte equality observed |
| mp_set_union.test | 10 | 0.001015s | 0.001093s | 0.001023s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001041s | 0.001088s | 0.001032s | byte equality observed |
| mp_similar.test | 10 | 0.001012s | 0.001115s | 0.001037s | byte equality observed |
| mp_size.test | 10 | 0.001061s | 0.001101s | 0.001009s | byte equality observed |
| mp_size_2.test | 10 | 0.000460s | 0.000496s | 0.001002s | byte equality observed |
| mp_slice.test | 10 | 0.001076s | 0.001151s | 0.001029s | byte equality observed |
| mp_slice_2.test | 10 | 0.000469s | 0.000498s | 0.000976s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001069s | 0.001123s | 0.001023s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001051s | 0.001130s | 0.001019s | byte equality observed |
| mp_sort.test | 10 | 0.001024s | 0.001098s | 0.001077s | byte equality observed |
| mp_sort_q.test | 10 | 0.001009s | 0.001092s | 0.001027s | byte equality observed |
| mp_split.test | 10 | 0.001024s | 0.001103s | 0.001074s | byte equality observed |
| mp_starts_with.test | 10 | 0.001010s | 0.001113s | 0.001041s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001014s | 0.001113s | 0.001036s | byte equality observed |
| mp_take.test | 10 | 0.001056s | 0.001115s | 0.001042s | byte equality observed |
| mp_take_2.test | 10 | 0.000477s | 0.000486s | 0.000981s | byte equality observed |
| mp_third.test | 10 | 0.001031s | 0.001110s | 0.001000s | byte equality observed |
| mp_third_2.test | 10 | 0.000471s | 0.000485s | 0.001001s | byte equality observed |
| mp_transform.test | 10 | 0.001076s | 0.001078s | 0.001043s | byte equality observed |
| mp_transform_2.test | 10 | 0.001026s | 0.001060s | 0.000980s | byte equality observed |
| mp_transform_front.test | 10 | 0.001056s | 0.001141s | 0.001024s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000475s | 0.000504s | 0.001022s | byte equality observed |
| mp_transform_if.test | 10 | 0.001053s | 0.001129s | 0.001029s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001059s | 0.001169s | 0.000974s | byte equality observed |
| mp_transform_q.test | 10 | 0.001048s | 0.001186s | 0.000999s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001063s | 0.001174s | 0.001034s | byte equality observed |
| mp_transform_second.test | 10 | 0.001040s | 0.001180s | 0.001031s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000475s | 0.000507s | 0.001029s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001018s | 0.001173s | 0.001028s | byte equality observed |
| mp_transform_third.test | 10 | 0.001042s | 0.001112s | 0.001049s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000478s | 0.000480s | 0.000985s | byte equality observed |
| mp_unique.test | 10 | 0.001056s | 0.001150s | 0.001023s | byte equality observed |
| mp_unique_if.test | 10 | 0.001062s | 0.001132s | 0.001015s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001095s | 0.001131s | 0.001036s | byte equality observed |
| mp_valid.test | 10 | 0.001057s | 0.001146s | 0.001005s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001044s | 0.001187s | 0.001051s | byte equality observed |
| mp_value.test | 10 | 0.000470s | 0.000508s | 0.001015s | byte equality observed |
| mp_with_index.test | 10 | 0.001444s | 0.001516s | 0.001292s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000483s | 0.000501s | 0.000989s | byte equality observed |
| mpl.test | 10 | 0.001100s | 0.001146s | 0.001060s | byte equality observed |
| mpl_list.test | 10 | 0.001134s | 0.001176s | 0.001014s | byte equality observed |
| mpl_tuple.test | 10 | 0.001058s | 0.001154s | 0.001011s | byte equality observed |
| mpl_version.test | 10 | 0.001037s | 0.001130s | 0.001019s | byte equality observed |
| set_version.test | 10 | 0.001081s | 0.001130s | 0.001018s | byte equality observed |
| tuple_apply.test | 10 | 0.001037s | 0.001151s | 0.001026s | byte equality observed |
| tuple_for_each.test | 10 | 0.001069s | 0.001164s | 0.001047s | byte equality observed |
| tuple_transform.test | 10 | 0.001062s | 0.001135s | 0.001006s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001105s | 0.001126s | 0.001052s | byte equality observed |
| tuple_version.test | 10 | 0.001005s | 0.001106s | 0.001051s | byte equality observed |
| utility_version.test | 10 | 0.001088s | 0.001083s | 0.001019s | byte equality observed |
| version.test | 10 | 0.001077s | 0.001098s | 0.001067s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
