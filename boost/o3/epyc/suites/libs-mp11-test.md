# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.050604 | 0.098779 | 0.189611 | — | — | — |
| complex_h.test | COMPILE | 0.203896 | 0.430114 | 0.678222 | — | — | — |
| mp_size.test | RUN | 0.234708 | 1.291039 | 0.916481 | 0.001846 | 0.001920 | 0.001688 |
| mp_size_2.test | RUN | 0.020949 | 0.046643 | 0.074814 | 0.000867 | 0.000778 | 0.001928 |
| mp_empty.test | RUN | 0.228937 | 0.807662 | 0.894342 | 0.001812 | 0.002188 | 0.001819 |
| mp_empty_2.test | RUN | 0.021051 | 0.047093 | 0.079043 | 0.000658 | 0.000664 | 0.001694 |
| mp_assign.test | RUN | 0.249255 | 1.654258 | 1.165246 | 0.001858 | 0.002064 | 0.001505 |
| mp_assign_2.test | RUN | 0.020288 | 0.046190 | 0.074945 | 0.000713 | 0.000930 | 0.001826 |
| mp_clear.test | RUN | 0.229233 | 0.747585 | 0.886609 | 0.001744 | 0.002046 | 0.002086 |
| mp_clear_2.test | RUN | 0.022061 | 0.051289 | 0.078906 | 0.000738 | 0.000762 | 0.001622 |
| mp_front.test | RUN | 0.239707 | 1.150750 | 0.912053 | 0.001860 | 0.002113 | 0.002088 |
| mp_front_2.test | RUN | 0.021219 | 0.048657 | 0.081572 | 0.000721 | 0.000728 | 0.002082 |
| mp_pop_front.test | RUN | 0.233487 | 1.237974 | 0.973222 | 0.001690 | 0.002044 | 0.002038 |
| mp_pop_front_2.test | RUN | 0.020863 | 0.048742 | 0.079175 | 0.000716 | 0.000858 | 0.001868 |
| mp_second.test | RUN | 0.228315 | 0.795879 | 0.929676 | 0.001690 | 0.002090 | 0.001872 |
| mp_second_2.test | RUN | 0.021423 | 0.048901 | 0.073840 | 0.000781 | 0.000827 | 0.002016 |
| mp_third.test | RUN | 0.223311 | 0.722483 | 0.813962 | 0.001675 | 0.002087 | 0.001690 |
| mp_third_2.test | RUN | 0.022748 | 0.049580 | 0.078161 | 0.000758 | 0.000690 | 0.001844 |
| mp_push_front.test | RUN | 0.293210 | 2.559887 | 1.479679 | 0.002012 | 0.002170 | 0.001991 |
| mp_push_front_2.test | RUN | 0.019847 | 0.046936 | 0.078644 | 0.000759 | 0.000781 | 0.001756 |
| mp_push_back.test | RUN | 0.294613 | 2.537861 | 1.522078 | 0.001871 | 0.002018 | 0.001663 |
| mp_push_back_2.test | RUN | 0.020946 | 0.051339 | 0.071372 | 0.000887 | 0.000819 | 0.001951 |
| mp_rename.test | RUN | 0.286811 | 2.340327 | 1.286167 | 0.002076 | 0.002110 | 0.001866 |
| mp_rename_2.test | RUN | 0.020500 | 0.052154 | 0.075697 | 0.000738 | 0.000849 | 0.002002 |
| mp_append.test | RUN | 0.291360 | 2.656868 | 1.422264 | 0.001772 | 0.001965 | 0.002041 |
| mp_append_2.test | RUN | 0.619418 | 5.862337 | 1.769972 | 0.001788 | 0.001802 | 0.002076 |
| mp_append_3.test | RUN | 0.021430 | 0.045218 | 0.074188 | 0.000747 | 0.000881 | 0.002010 |
| mp_append_sf.test | RUN | 0.222668 | 0.676576 | 0.813361 | 0.001811 | 0.001938 | 0.002062 |
| mp_replace_front.test | RUN | 0.266710 | 1.889040 | 1.206560 | 0.001851 | 0.002077 | 0.002162 |
| mp_replace_front_2.test | RUN | 0.020817 | 0.045992 | 0.079931 | 0.000694 | 0.000650 | 0.001912 |
| mp_replace_second.test | RUN | 0.264135 | 1.248212 | 1.054937 | 0.001646 | 0.001863 | 0.002152 |
| mp_replace_second_2.test | RUN | 0.020916 | 0.046043 | 0.078797 | 0.000707 | 0.000842 | 0.001681 |
| mp_replace_third.test | RUN | 0.253239 | 1.027675 | 1.019327 | 0.001984 | 0.001859 | 0.002050 |
| mp_replace_third_2.test | RUN | 0.020420 | 0.045850 | 0.081111 | 0.000707 | 0.000674 | 0.002112 |
| mp_apply_q.test | RUN | 0.281954 | 2.311500 | 1.314820 | 0.001799 | 0.001948 | 0.001966 |
| mp_apply_q_sf.test | RUN | 0.227333 | 0.701842 | 0.804102 | 0.002024 | 0.001979 | 0.002125 |
| mp_is_list.test | RUN | 0.237690 | 0.810907 | 0.858372 | 0.001811 | 0.001963 | 0.002082 |
| mp_list_c.test | RUN | 0.239219 | 0.975825 | 0.987380 | 0.001737 | 0.002062 | 0.002094 |
| mp_transform_front.test | RUN | 0.270306 | 1.878108 | 1.150903 | 0.001940 | 0.001916 | 0.001866 |
| mp_transform_front_2.test | RUN | 0.022942 | 0.048810 | 0.071946 | 0.000721 | 0.000682 | 0.002138 |
| mp_transform_second.test | RUN | 0.245229 | 1.648805 | 1.018922 | 0.001974 | 0.001650 | 0.001709 |
| mp_transform_second_2.test | RUN | 0.020476 | 0.045833 | 0.081112 | 0.000813 | 0.000907 | 0.001796 |
| mp_transform_third.test | RUN | 0.231332 | 1.291689 | 0.929910 | 0.001778 | 0.001910 | 0.002108 |
| mp_transform_third_2.test | RUN | 0.020784 | 0.047967 | 0.078949 | 0.000802 | 0.000797 | 0.001806 |
| mp_list_v.test | RUN | 0.019676 | 0.047555 | 0.071311 | 0.000683 | 0.000731 | 0.001760 |
| mp_rename_v.test | RUN | 0.020935 | 0.048471 | 0.067585 | 0.000650 | 0.000856 | 0.001793 |
| mp_is_value_list.test | RUN | 0.218799 | 0.520800 | 0.841866 | 0.002015 | 0.001799 | 0.002115 |
| mp_transform.test | RUN | 0.500219 | 3.927188 | 2.286000 | 0.002020 | 0.002096 | 0.001972 |
| mp_transform_2.test | RUN | 0.211193 | 0.457190 | 0.804899 | 0.001712 | 0.002110 | 0.001928 |
| mp_transform_q.test | RUN | 0.483322 | 3.674877 | 2.284893 | 0.002006 | 0.001796 | 0.002143 |
| mp_transform_q_2.test | RUN | 0.545132 | 1.237611 | 2.969612 | 0.001863 | 0.002056 | 0.001650 |
| mp_transform_sf.test | RUN | 0.229760 | 0.703581 | 0.896391 | 0.001958 | 0.001961 | 0.001876 |
| mp_transform_if.test | RUN | 0.276803 | 1.913782 | 1.280981 | 0.001694 | 0.001654 | 0.002122 |
| mp_transform_if_q.test | RUN | 0.290914 | 1.931301 | 1.278971 | 0.001964 | 0.002156 | 0.001937 |
| mp_filter.test | RUN | 0.254564 | 1.167667 | 1.011227 | 0.001929 | 0.001962 | 0.001589 |
| mp_fill.test | RUN | 0.246968 | 0.863247 | 0.927888 | 0.001958 | 0.002081 | 0.002005 |
| mp_fill_2.test | RUN | 0.037191 | 0.080206 | 0.140024 | 0.000676 | 0.000874 | 0.002022 |
| mp_count.test | RUN | 0.453162 | 2.060773 | 1.449456 | 0.001757 | 0.002080 | 0.001972 |
| mp_count_if.test | RUN | 0.448583 | 2.087892 | 1.630386 | 0.001780 | 0.002271 | 0.001974 |
| mp_count_if_q.test | RUN | 0.242635 | 1.367880 | 0.959081 | 0.001648 | 0.002141 | 0.002016 |
| mp_contains.test | RUN | 0.228442 | 0.816695 | 0.907838 | 0.001839 | 0.001999 | 0.002098 |
| mp_starts_with.test | RUN | 0.237603 | 0.817183 | 0.874136 | 0.001960 | 0.002149 | 0.002060 |
| mp_starts_with_sf.test | RUN | 0.231873 | 0.714783 | 0.863172 | 0.001651 | 0.001947 | 0.002134 |
| mp_repeat.test | RUN | 0.340776 | 3.371270 | 1.649125 | 0.002070 | 0.001776 | 0.001930 |
| mp_repeat_2.test | RUN | 0.038602 | 0.078638 | 0.139122 | 0.000922 | 0.000842 | 0.002018 |
| mp_repeat_3.test | RUN | 0.294402 | 0.461766 | 0.816914 | 0.001998 | 0.002234 | 0.002000 |
| mp_product.test | RUN | 0.267565 | 2.037170 | 1.160870 | 0.001774 | 0.002018 | 0.001996 |
| mp_drop.test | RUN | 0.291931 | 2.530514 | 1.367415 | 0.001708 | 0.001877 | 0.002083 |
| mp_drop_2.test | RUN | 0.037497 | 0.080240 | 0.139196 | 0.000680 | 0.000833 | 0.001866 |
| mp_iota.test | RUN | 0.276399 | 2.157912 | 1.176375 | 0.001974 | 0.001818 | 0.001958 |
| mp_iota_2.test | RUN | 0.296123 | 2.612467 | 1.375212 | 0.001861 | 0.002076 | 0.002044 |
| mp_at.test | RUN | 0.246015 | 1.137779 | 1.045580 | 0.001774 | 0.002014 | 0.002063 |
| mp_at_2.test | RUN | 0.036878 | 0.073606 | 0.144345 | 0.000838 | 0.000785 | 0.001900 |
| mp_at_sf.test | RUN | 0.232122 | 0.715366 | 0.825785 | 0.001726 | 0.002206 | 0.001896 |
| mp_take.test | RUN | 0.381050 | 3.300047 | 1.636284 | 0.002072 | 0.002036 | 0.002092 |
| mp_take_2.test | RUN | 0.037096 | 0.078078 | 0.140732 | 0.000843 | 0.000846 | 0.001787 |
| mp_slice.test | RUN | 0.439013 | 3.346068 | 2.030221 | 0.002004 | 0.001525 | 0.002017 |
| mp_slice_2.test | RUN | 0.037506 | 0.077131 | 0.122162 | 0.000827 | 0.000912 | 0.002092 |
| mp_replace.test | RUN | 0.284659 | 1.720480 | 1.320486 | 0.001980 | 0.001926 | 0.002042 |
| mp_replace_if.test | RUN | 0.280193 | 1.523730 | 1.253594 | 0.002016 | 0.002059 | 0.002112 |
| mp_replace_if_q.test | RUN | 0.273479 | 1.538593 | 1.254021 | 0.001914 | 0.002106 | 0.002128 |
| mp_copy_if.test | RUN | 0.275365 | 2.137771 | 1.192482 | 0.001964 | 0.002260 | 0.001970 |
| mp_copy_if_q.test | RUN | 0.275202 | 2.142135 | 1.190649 | 0.001988 | 0.002248 | 0.002120 |
| mp_remove.test | RUN | 0.270409 | 1.417148 | 1.217317 | 0.001928 | 0.002008 | 0.002134 |
| mp_remove_if.test | RUN | 0.284048 | 2.272605 | 1.251788 | 0.001528 | 0.002064 | 0.002108 |
| mp_remove_if_q.test | RUN | 0.288270 | 2.250021 | 1.256611 | 0.002048 | 0.002126 | 0.002100 |
| mp_partition.test | RUN | 0.288409 | 2.116857 | 1.340291 | 0.001928 | 0.001977 | 0.001961 |
| mp_partition_q.test | RUN | 0.289668 | 2.109090 | 1.356759 | 0.002016 | 0.001933 | 0.001942 |
| mp_sort.test | RUN | 0.270640 | 1.539289 | 1.162857 | 0.001533 | 0.002082 | 0.002158 |
| mp_sort_q.test | RUN | 0.265663 | 1.529866 | 1.214705 | 0.001904 | 0.002001 | 0.001926 |
| mp_find.test | RUN | 0.259954 | 1.649366 | 1.062335 | 0.001898 | 0.001992 | 0.001747 |
| mp_find_if.test | RUN | 0.251025 | 1.518948 | 0.952974 | 0.002114 | 0.001733 | 0.002071 |
| mp_find_if_q.test | RUN | 0.287367 | 1.732092 | 1.230007 | 0.002032 | 0.001989 | 0.002092 |
| mp_reverse.test | RUN | 0.558497 | 4.357148 | 2.217886 | 0.001918 | 0.002080 | 0.001835 |
| mp_fold.test | RUN | 0.905135 | 3.396568 | 5.382477 | 0.002037 | 0.002095 | 0.002070 |
| mp_fold_q.test | RUN | 0.257547 | 1.513710 | 1.160966 | 0.001712 | 0.002056 | 0.002046 |
| mp_fold_q_sf.test | RUN | 0.238568 | 0.747023 | 0.910740 | 0.001765 | 0.002108 | 0.002060 |
| mp_reverse_fold.test | RUN | 0.440274 | 3.306091 | 1.629227 | 0.002078 | 0.002032 | 0.002026 |
| mp_reverse_fold_q.test | RUN | 0.265917 | 1.791566 | 1.201791 | 0.001879 | 0.001946 | 0.002041 |
| mp_unique.test | RUN | 0.259205 | 1.680641 | 1.169115 | 0.002024 | 0.002228 | 0.001922 |
| mp_unique_if.test | RUN | 0.488449 | 3.385967 | 1.827062 | 0.001541 | 0.001956 | 0.001861 |
| mp_unique_if_q.test | RUN | 0.414547 | 3.367187 | 1.546988 | 0.001747 | 0.001846 | 0.001570 |
| mp_all_of.test | RUN | 0.611012 | 1.839702 | 1.949856 | 0.002085 | 0.001940 | 0.002118 |
| mp_all_of_q.test | RUN | 0.232125 | 0.778505 | 0.940065 | 0.001736 | 0.001920 | 0.001730 |
| mp_any_of.test | RUN | 0.595549 | 1.897581 | 1.979237 | 0.001711 | 0.002181 | 0.001782 |
| mp_any_of_q.test | RUN | 0.231306 | 0.824354 | 0.907410 | 0.001907 | 0.001916 | 0.001946 |
| mp_none_of.test | RUN | 0.630202 | 1.888184 | 1.996844 | 0.001936 | 0.001981 | 0.001706 |
| mp_none_of_q.test | RUN | 0.231501 | 0.826091 | 0.844321 | 0.002056 | 0.002150 | 0.001754 |
| mp_replace_at.test | RUN | 0.278752 | 1.583749 | 1.169825 | 0.002032 | 0.001986 | 0.001668 |
| mp_replace_at_c.test | RUN | 0.281996 | 1.672237 | 1.373309 | 0.001859 | 0.001886 | 0.002020 |
| mp_for_each.test | RUN | 0.271133 | 1.247018 | 1.514639 | 0.001727 | 0.002019 | 0.001719 |
| mp_insert.test | RUN | 0.426269 | 3.267230 | 1.898304 | 0.002032 | 0.001897 | 0.001938 |
| mp_insert_2.test | RUN | 0.038209 | 0.074703 | 0.143153 | 0.000744 | 0.000671 | 0.002089 |
| mp_erase.test | RUN | 0.452732 | 3.511648 | 2.170300 | 0.001961 | 0.002028 | 0.002140 |
| mp_erase_2.test | RUN | 0.037005 | 0.082957 | 0.116736 | 0.000880 | 0.000825 | 0.001974 |
| mp_with_index.test | RUN | 0.652181 | 7.238750 | 4.784807 | 0.002658 | 0.002405 | 0.002468 |
| mp_with_index_cx.test | RUN | 0.004328 | 0.021448 | 0.030362 | 0.000698 | 0.000872 | 0.001960 |
| mp_from_sequence.test | RUN | 0.279262 | 1.880657 | 1.327326 | 0.001787 | 0.001890 | 0.002062 |
| mp_from_sequence_2.test | RUN | 0.290224 | 2.211510 | 1.332241 | 0.001824 | 0.001842 | 0.002149 |
| mp_from_sequence_3.test | RUN | 0.252275 | 1.010676 | 0.989080 | 0.001922 | 0.002164 | 0.001956 |
| mp_min_element.test | RUN | 0.245222 | 0.918272 | 0.955951 | 0.001741 | 0.002051 | 0.001862 |
| mp_min_element_2.test | RUN | 0.040161 | 0.079397 | 0.135421 | 0.000768 | 0.000888 | 0.001473 |
| mp_min_element_q.test | RUN | 0.239508 | 0.895557 | 0.945301 | 0.001809 | 0.001961 | 0.001981 |
| mp_min_element_q_2.test | RUN | 0.037631 | 0.080697 | 0.136258 | 0.000662 | 0.000753 | 0.001933 |
| mp_max_element.test | RUN | 0.241064 | 0.907497 | 0.924156 | 0.001887 | 0.002164 | 0.001931 |
| mp_max_element_2.test | RUN | 0.038814 | 0.076467 | 0.129459 | 0.000657 | 0.000792 | 0.001964 |
| mp_max_element_q.test | RUN | 0.245161 | 0.918719 | 0.901455 | 0.001978 | 0.002119 | 0.001684 |
| mp_max_element_q_2.test | RUN | 0.035084 | 0.079777 | 0.136456 | 0.000791 | 0.000891 | 0.001631 |
| mp_nth_element.test | RUN | 0.266328 | 1.277881 | 1.171411 | 0.002052 | 0.002019 | 0.001622 |
| mp_nth_element_q.test | RUN | 0.256491 | 1.235877 | 1.156701 | 0.001960 | 0.001890 | 0.001738 |
| mp_back.test | RUN | 0.258360 | 1.040525 | 1.033257 | 0.001934 | 0.001862 | 0.001842 |
| mp_back_2.test | RUN | 0.038842 | 0.076033 | 0.141224 | 0.000722 | 0.000837 | 0.002052 |
| mp_pop_back.test | RUN | 0.685751 | 6.700099 | 2.108022 | 0.001559 | 0.002120 | 0.001827 |
| mp_pop_back_2.test | RUN | 0.037991 | 0.078829 | 0.131504 | 0.000691 | 0.000857 | 0.001686 |
| mp_flatten.test | RUN | 0.307457 | 2.414706 | 1.468883 | 0.001880 | 0.002080 | 0.001874 |
| mp_rotate_left.test | RUN | 0.306937 | 2.594377 | 1.474090 | 0.001854 | 0.001851 | 0.001644 |
| mp_rotate_right.test | RUN | 0.307762 | 2.604609 | 1.482643 | 0.001662 | 0.002172 | 0.001648 |
| mp_power_set.test | RUN | 0.303254 | 2.504286 | 1.461724 | 0.002010 | 0.001956 | 0.001835 |
| mp_partial_sum.test | RUN | 0.395526 | 3.274573 | 1.640858 | 0.001975 | 0.001910 | 0.002071 |
| mp_iterate.test | RUN | 0.273293 | 1.014134 | 1.197500 | 0.001819 | 0.001992 | 0.001908 |
| mp_pairwise_fold.test | RUN | 0.290122 | 2.295395 | 1.479119 | 0.001746 | 0.002224 | 0.002036 |
| mp_pairwise_fold_q.test | RUN | 0.234965 | 0.685980 | 0.860659 | 0.001927 | 0.001941 | 0.002108 |
| mp_sliding_fold.test | RUN | 0.553444 | 4.359011 | 2.664765 | 0.001982 | 0.002206 | 0.002150 |
| mp_sliding_fold_q.test | RUN | 0.557743 | 4.340078 | 2.674501 | 0.001826 | 0.001992 | 0.002103 |
| mp_intersperse.test | RUN | 0.279528 | 1.672704 | 1.316458 | 0.002019 | 0.002028 | 0.002032 |
| mp_split.test | RUN | 0.396697 | 3.159945 | 1.725548 | 0.001834 | 0.002026 | 0.001813 |
| mp_join.test | RUN | 0.312861 | 2.637569 | 1.565754 | 0.001778 | 0.002128 | 0.002080 |
| integral.test | RUN | 0.239283 | 1.189317 | 1.001222 | 0.001807 | 0.002049 | 0.002080 |
| mp_value.test | RUN | 0.016028 | 0.038675 | 0.061726 | 0.000754 | 0.000901 | 0.001902 |
| mp_identity.test | RUN | 0.235462 | 1.105705 | 0.907727 | 0.001763 | 0.002010 | 0.001711 |
| mp_inherit.test | RUN | 0.226502 | 0.798780 | 0.927129 | 0.001992 | 0.002062 | 0.002030 |
| mp_if.test | RUN | 0.224534 | 0.906372 | 0.896859 | 0.001663 | 0.001937 | 0.002030 |
| mp_if_sf.test | RUN | 0.217798 | 0.672803 | 0.795581 | 0.001906 | 0.001742 | 0.002044 |
| mp_eval_if.test | RUN | 0.228262 | 0.972598 | 0.912952 | 0.001792 | 0.001844 | 0.001964 |
| mp_eval_if_sf.test | RUN | 0.224050 | 0.704062 | 0.829624 | 0.001840 | 0.001894 | 0.001820 |
| mp_valid.test | RUN | 0.223932 | 0.702464 | 0.841199 | 0.001940 | 0.001976 | 0.002046 |
| mp_defer.test | RUN | 0.242628 | 1.172681 | 0.994362 | 0.001986 | 0.002052 | 0.002094 |
| mp_quote.test | RUN | 0.243202 | 1.174110 | 1.026901 | 0.001843 | 0.002179 | 0.001926 |
| mp_invoke_q.test | RUN | 0.261643 | 1.522478 | 1.110778 | 0.002355 | 0.001975 | 0.001858 |
| mp_invoke_q_sf.test | RUN | 0.211697 | 0.706834 | 0.836103 | 0.001853 | 0.001924 | 0.002078 |
| mp_quote_trait.test | RUN | 0.241331 | 1.285855 | 0.996688 | 0.001932 | 0.001739 | 0.001880 |
| mp_cond.test | RUN | 0.236647 | 0.780760 | 0.880747 | 0.002001 | 0.002098 | 0.001806 |
| mp_cond_sf.test | RUN | 0.213137 | 0.688807 | 0.837184 | 0.001904 | 0.001749 | 0.001819 |
| mp_not_fn.test | RUN | 0.216455 | 0.678332 | 0.841015 | 0.001767 | 0.002156 | 0.001946 |
| mp_eval_if_not.test | RUN | 0.227581 | 0.966116 | 0.886740 | 0.001882 | 0.001945 | 0.002214 |
| mp_eval_or.test | RUN | 0.222678 | 0.529683 | 0.855960 | 0.001651 | 0.002076 | 0.001942 |
| mp_compose.test | RUN | 0.241902 | 1.592349 | 1.102859 | 0.001772 | 0.002159 | 0.001702 |
| mp_valid_and_true.test | RUN | 0.225574 | 0.803953 | 0.903570 | 0.001594 | 0.002092 | 0.001820 |
| mp_compose_sf.test | COMPILE | 0.048634 | 0.100669 | 0.179117 | — | — | — |
| integer_sequence.test | RUN | 0.263034 | 1.542187 | 1.230097 | 0.001701 | 0.001862 | 0.001810 |
| tuple_for_each.test | RUN | 0.223076 | 0.587669 | 0.943896 | 0.001992 | 0.001933 | 0.002043 |
| tuple_for_each_cx.test | COMPILE | 0.041975 | 0.092316 | 0.152127 | — | — | — |
| tuple_apply.test | RUN | 0.225385 | 0.600283 | 0.936297 | 0.001918 | 0.002058 | 0.001642 |
| tuple_apply_cx.test | COMPILE | 0.063463 | 0.123065 | 0.221780 | — | — | — |
| construct_from_tuple.test | RUN | 0.226894 | 0.621093 | 0.907807 | 0.002008 | 0.002170 | 0.002077 |
| construct_from_tuple_cx.test | COMPILE | 0.061896 | 0.126805 | 0.189396 | — | — | — |
| tuple_transform.test | RUN | 0.368392 | 1.292879 | 1.747787 | 0.001859 | 0.001845 | 0.002008 |
| tuple_transform_2.test | RUN | 0.323521 | 0.969170 | 1.587566 | 0.001758 | 0.001944 | 0.001933 |
| tuple_transform_cx.test | COMPILE | 0.055526 | 0.115685 | 0.217551 | — | — | — |
| mp_set_contains.test | RUN | 0.232225 | 0.827656 | 0.917351 | 0.002043 | 0.001908 | 0.002057 |
| mp_set_push_back.test | RUN | 0.299692 | 2.483879 | 1.506253 | 0.001957 | 0.002104 | 0.001911 |
| mp_set_push_front.test | RUN | 0.384396 | 2.974191 | 1.676524 | 0.002072 | 0.001915 | 0.001998 |
| mp_is_set.test | RUN | 0.235851 | 0.835650 | 0.880586 | 0.002024 | 0.001940 | 0.002066 |
| mp_set_union.test | RUN | 0.285264 | 2.128867 | 1.396847 | 0.001729 | 0.002198 | 0.002075 |
| mp_set_union_sf.test | RUN | 0.221047 | 0.675471 | 0.829041 | 0.001842 | 0.002044 | 0.001597 |
| mp_set_difference.test | RUN | 0.265289 | 1.646401 | 1.166188 | 0.001790 | 0.001972 | 0.001946 |
| mp_set_difference_sf.test | RUN | 0.230449 | 0.662063 | 0.829107 | 0.001882 | 0.002114 | 0.001974 |
| mp_set_intersection.test | RUN | 0.266142 | 1.647547 | 1.141018 | 0.002100 | 0.002078 | 0.001976 |
| mp_set_intersection_sf.test | RUN | 0.225850 | 0.678556 | 0.818308 | 0.001879 | 0.002030 | 0.002048 |
| mp_all.test | RUN | 0.235373 | 0.832828 | 0.845384 | 0.001934 | 0.002156 | 0.002246 |
| mp_all_2.test | RUN | 0.634966 | 1.715850 | 1.942577 | 0.001935 | 0.002154 | 0.002085 |
| mp_and.test | RUN | 0.226375 | 0.814949 | 0.889095 | 0.001861 | 0.001949 | 0.001829 |
| mp_any.test | RUN | 0.232169 | 0.767627 | 0.870934 | 0.001487 | 0.002166 | 0.001704 |
| mp_any_2.test | RUN | 0.614461 | 1.726311 | 1.845406 | 0.001956 | 0.002170 | 0.002050 |
| mp_or.test | RUN | 0.233769 | 0.769796 | 0.944688 | 0.001689 | 0.001933 | 0.001918 |
| mp_same.test | RUN | 0.439421 | 1.335512 | 1.429875 | 0.001891 | 0.001637 | 0.001816 |
| mp_plus.test | RUN | 0.239299 | 0.941585 | 0.912118 | 0.001905 | 0.001990 | 0.002106 |
| mp_less.test | RUN | 0.233980 | 0.807224 | 0.856381 | 0.001980 | 0.002003 | 0.002059 |
| mp_min.test | RUN | 0.225485 | 0.755194 | 0.845858 | 0.001838 | 0.002147 | 0.001956 |
| mp_max.test | RUN | 0.226548 | 0.855978 | 0.870682 | 0.002063 | 0.001960 | 0.001950 |
| mp_similar.test | RUN | 0.233861 | 0.808344 | 0.871984 | 0.002050 | 0.002027 | 0.002105 |
| mp_map_find.test | RUN | 0.265344 | 1.503875 | 1.157571 | 0.001948 | 0.001602 | 0.002086 |
| mp_map_find_2.test | RUN | 0.245216 | 0.581708 | 0.986953 | 0.001582 | 0.002248 | 0.001684 |
| mp_map_find_3.test | RUN | 0.248459 | 0.576437 | 0.988556 | 0.002006 | 0.001984 | 0.001940 |
| mp_map_find_4.test | RUN | 0.230839 | 0.555141 | 0.933207 | 0.001823 | 0.001756 | 0.002093 |
| mp_map_contains.test | RUN | 0.237251 | 0.843267 | 0.924609 | 0.001816 | 0.001992 | 0.002150 |
| mp_map_insert.test | RUN | 0.312346 | 2.768282 | 1.584371 | 0.001962 | 0.002110 | 0.001704 |
| mp_map_replace.test | RUN | 0.403552 | 3.113387 | 1.865693 | 0.001860 | 0.002152 | 0.001954 |
| mp_map_erase.test | RUN | 0.298804 | 2.344911 | 1.527485 | 0.002015 | 0.002094 | 0.001823 |
| mp_map_update.test | RUN | 0.265429 | 1.521483 | 1.189561 | 0.001847 | 0.001988 | 0.001897 |
| mp_map_update_q.test | RUN | 0.265439 | 1.541071 | 1.161746 | 0.002128 | 0.001786 | 0.002088 |
| mp_map_keys.test | RUN | 0.262774 | 1.373085 | 1.164824 | 0.001818 | 0.001838 | 0.002042 |
| mp_is_map.test | RUN | 0.246517 | 0.842077 | 0.974191 | 0.001734 | 0.001830 | 0.001868 |
| mp_bind.test | RUN | 0.299254 | 2.435216 | 1.374068 | 0.001924 | 0.001794 | 0.001942 |
| mp_bind_q.test | RUN | 0.267660 | 1.507667 | 1.158738 | 0.001737 | 0.001956 | 0.001720 |
| mp_bind_front.test | RUN | 0.258103 | 1.662560 | 1.097475 | 0.002154 | 0.001704 | 0.001653 |
| mp_bind_back.test | RUN | 0.255971 | 1.669881 | 1.127866 | 0.001826 | 0.001758 | 0.001632 |
| mp_lambda.test | RUN | 0.570530 | 4.865879 | 2.730602 | 0.001722 | 0.001444 | 0.002052 |
| mpl.test | RUN | 0.507947 | 1.318071 | 2.234936 | 0.001866 | 0.002062 | 0.001765 |
| mpl_list.test | RUN | 0.296753 | 1.036005 | 1.092798 | 0.001947 | 0.001796 | 0.002116 |
| mpl_tuple.test | RUN | 0.297199 | 1.009007 | 1.120795 | 0.001854 | 0.001852 | 0.001780 |
| version.test | RUN | 0.149134 | 0.366711 | 0.579022 | 0.001884 | 0.002166 | 0.001528 |
| mp11_version.test | RUN | 0.180450 | 0.437171 | 0.631197 | 0.001754 | 0.001756 | 0.002013 |
| list_version.test | RUN | 0.150815 | 0.384400 | 0.560208 | 0.001613 | 0.002141 | 0.001929 |
| algorithm_version.test | RUN | 0.170084 | 0.399435 | 0.642889 | 0.001896 | 0.002252 | 0.001904 |
| integral_version.test | RUN | 0.150703 | 0.378889 | 0.573536 | 0.001815 | 0.001883 | 0.001809 |
| utility_version.test | RUN | 0.147746 | 0.375224 | 0.552713 | 0.001864 | 0.002113 | 0.001865 |
| function_version.test | RUN | 0.149527 | 0.374614 | 0.558189 | 0.001555 | 0.002115 | 0.001988 |
| map_version.test | RUN | 0.170413 | 0.413883 | 0.649692 | 0.001727 | 0.001921 | 0.002126 |
| set_version.test | RUN | 0.158908 | 0.382698 | 0.606778 | 0.001782 | 0.002068 | 0.001534 |
| bind_version.test | RUN | 0.168454 | 0.403176 | 0.608220 | 0.001527 | 0.002014 | 0.001826 |
| integer_sequence_version.test | RUN | 0.144195 | 0.375789 | 0.542008 | 0.001732 | 0.001839 | 0.001996 |
| tuple_version.test | RUN | 0.175461 | 0.410091 | 0.560043 | 0.001313 | 0.002065 | 0.001468 |
| mpl_version.test | RUN | 0.109136 | 0.303371 | 0.378033 | 0.001514 | 0.001497 | 0.001302 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.002×, 1.000× | 0.993× |
| clang | 1.091× | 1.094×, 1.088× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001138s | 0.001118s | 0.001137s | byte equality observed |
| bind_version.test | 10 | 0.001157s | 0.001118s | 0.001147s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001160s | 0.001152s | 0.001174s | byte equality observed |
| function_version.test | 10 | 0.001147s | 0.001126s | 0.001284s | byte equality observed |
| integer_sequence.test | 10 | 0.001144s | 0.001159s | 0.001228s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001137s | 0.001148s | 0.001244s | byte equality observed |
| integral.test | 10 | 0.001135s | 0.001164s | 0.001301s | byte equality observed |
| integral_version.test | 10 | 0.001148s | 0.001155s | 0.001229s | byte equality observed |
| list_version.test | 10 | 0.001132s | 0.001149s | 0.001218s | byte equality observed |
| map_version.test | 10 | 0.001140s | 0.001141s | 0.001218s | byte equality observed |
| mp11_version.test | 10 | 0.001166s | 0.001148s | 0.001183s | byte equality observed |
| mp_all.test | 10 | 0.001150s | 0.001160s | 0.001194s | byte equality observed |
| mp_all_2.test | 10 | 0.001218s | 0.001141s | 0.001240s | byte equality observed |
| mp_all_of.test | 10 | 0.001193s | 0.001138s | 0.001250s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001216s | 0.001134s | 0.001267s | byte equality observed |
| mp_and.test | 10 | 0.001228s | 0.001133s | 0.001214s | byte equality observed |
| mp_any.test | 10 | 0.001235s | 0.001126s | 0.001247s | byte equality observed |
| mp_any_2.test | 10 | 0.001225s | 0.001123s | 0.001222s | byte equality observed |
| mp_any_of.test | 10 | 0.001234s | 0.001136s | 0.001203s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001226s | 0.001149s | 0.001271s | byte equality observed |
| mp_append.test | 10 | 0.001228s | 0.001141s | 0.001211s | byte equality observed |
| mp_append_2.test | 10 | 0.001306s | 0.001231s | 0.001227s | byte equality observed |
| mp_append_3.test | 10 | 0.000557s | 0.000553s | 0.001198s | byte equality observed |
| mp_append_sf.test | 10 | 0.001234s | 0.001197s | 0.001221s | byte equality observed |
| mp_apply_q.test | 10 | 0.001235s | 0.001236s | 0.001236s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001246s | 0.001237s | 0.001254s | byte equality observed |
| mp_assign.test | 10 | 0.001240s | 0.001255s | 0.001217s | byte equality observed |
| mp_assign_2.test | 10 | 0.000563s | 0.000576s | 0.001216s | byte equality observed |
| mp_at.test | 10 | 0.001231s | 0.001234s | 0.001213s | byte equality observed |
| mp_at_2.test | 10 | 0.000570s | 0.000571s | 0.001191s | byte equality observed |
| mp_at_sf.test | 10 | 0.001279s | 0.001256s | 0.001253s | byte equality observed |
| mp_back.test | 10 | 0.001209s | 0.001221s | 0.001218s | byte equality observed |
| mp_back_2.test | 10 | 0.000567s | 0.000555s | 0.001300s | byte equality observed |
| mp_bind.test | 10 | 0.001239s | 0.001268s | 0.001245s | byte equality observed |
| mp_bind_back.test | 10 | 0.001239s | 0.001251s | 0.001234s | byte equality observed |
| mp_bind_front.test | 10 | 0.001240s | 0.001280s | 0.001253s | byte equality observed |
| mp_bind_q.test | 10 | 0.001243s | 0.001255s | 0.001292s | byte equality observed |
| mp_clear.test | 10 | 0.001255s | 0.001239s | 0.001192s | byte equality observed |
| mp_clear_2.test | 10 | 0.000570s | 0.000573s | 0.001291s | byte equality observed |
| mp_compose.test | 10 | 0.001212s | 0.001285s | 0.001208s | byte equality observed |
| mp_cond.test | 10 | 0.001226s | 0.001262s | 0.001219s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001261s | 0.001229s | 0.001290s | byte equality observed |
| mp_contains.test | 10 | 0.001223s | 0.001263s | 0.001219s | byte equality observed |
| mp_copy_if.test | 10 | 0.001230s | 0.001235s | 0.001250s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001242s | 0.001260s | 0.001253s | byte equality observed |
| mp_count.test | 10 | 0.001242s | 0.001269s | 0.001212s | byte equality observed |
| mp_count_if.test | 10 | 0.001237s | 0.001239s | 0.001250s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001227s | 0.001220s | 0.001241s | byte equality observed |
| mp_defer.test | 10 | 0.001236s | 0.001312s | 0.001294s | byte equality observed |
| mp_drop.test | 10 | 0.001243s | 0.001221s | 0.001250s | byte equality observed |
| mp_drop_2.test | 10 | 0.000558s | 0.000583s | 0.001207s | byte equality observed |
| mp_empty.test | 10 | 0.001240s | 0.001235s | 0.001194s | byte equality observed |
| mp_empty_2.test | 10 | 0.000570s | 0.000548s | 0.001230s | byte equality observed |
| mp_erase.test | 10 | 0.001245s | 0.001279s | 0.001210s | byte equality observed |
| mp_erase_2.test | 10 | 0.000569s | 0.000562s | 0.001158s | byte equality observed |
| mp_eval_if.test | 10 | 0.001201s | 0.001235s | 0.001184s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001236s | 0.001256s | 0.001222s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001260s | 0.001227s | 0.001200s | byte equality observed |
| mp_eval_or.test | 10 | 0.001244s | 0.001210s | 0.001211s | byte equality observed |
| mp_fill.test | 10 | 0.001255s | 0.001321s | 0.001169s | byte equality observed |
| mp_fill_2.test | 10 | 0.000556s | 0.000571s | 0.001215s | byte equality observed |
| mp_filter.test | 10 | 0.001215s | 0.001243s | 0.001254s | byte equality observed |
| mp_find.test | 10 | 0.001263s | 0.001295s | 0.001227s | byte equality observed |
| mp_find_if.test | 10 | 0.001220s | 0.001235s | 0.001225s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001212s | 0.001196s | 0.001223s | byte equality observed |
| mp_flatten.test | 10 | 0.001239s | 0.001227s | 0.001261s | byte equality observed |
| mp_fold.test | 10 | 0.001259s | 0.001208s | 0.001241s | byte equality observed |
| mp_fold_q.test | 10 | 0.001276s | 0.001234s | 0.001237s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001180s | 0.001267s | 0.001253s | byte equality observed |
| mp_for_each.test | 10 | 0.001213s | 0.001231s | 0.001226s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001211s | 0.001237s | 0.001251s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001260s | 0.001254s | 0.001277s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001227s | 0.001239s | 0.001255s | byte equality observed |
| mp_front.test | 10 | 0.001233s | 0.001255s | 0.001189s | byte equality observed |
| mp_front_2.test | 10 | 0.000559s | 0.000577s | 0.001299s | byte equality observed |
| mp_identity.test | 10 | 0.001209s | 0.001238s | 0.001211s | byte equality observed |
| mp_if.test | 10 | 0.001217s | 0.001235s | 0.001236s | byte equality observed |
| mp_if_sf.test | 10 | 0.001239s | 0.001276s | 0.001253s | byte equality observed |
| mp_inherit.test | 10 | 0.001214s | 0.001263s | 0.001246s | byte equality observed |
| mp_insert.test | 10 | 0.001265s | 0.001280s | 0.001195s | byte equality observed |
| mp_insert_2.test | 10 | 0.000550s | 0.000577s | 0.001287s | byte equality observed |
| mp_intersperse.test | 10 | 0.001254s | 0.001263s | 0.001223s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001234s | 0.001254s | 0.001256s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001264s | 0.001243s | 0.001238s | byte equality observed |
| mp_iota.test | 10 | 0.001221s | 0.001197s | 0.001235s | byte equality observed |
| mp_iota_2.test | 10 | 0.001228s | 0.001249s | 0.001199s | byte equality observed |
| mp_is_list.test | 10 | 0.001273s | 0.001250s | 0.001210s | byte equality observed |
| mp_is_map.test | 10 | 0.001234s | 0.001238s | 0.001246s | byte equality observed |
| mp_is_set.test | 10 | 0.001262s | 0.001296s | 0.001223s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001264s | 0.001319s | 0.001270s | byte equality observed |
| mp_iterate.test | 10 | 0.001213s | 0.001233s | 0.001191s | byte equality observed |
| mp_join.test | 10 | 0.001260s | 0.001221s | 0.001235s | byte equality observed |
| mp_lambda.test | 10 | 0.001235s | 0.001221s | 0.001241s | byte equality observed |
| mp_less.test | 10 | 0.001254s | 0.001181s | 0.001208s | byte equality observed |
| mp_list_c.test | 10 | 0.001261s | 0.001194s | 0.001235s | byte equality observed |
| mp_list_v.test | 10 | 0.000568s | 0.000568s | 0.001253s | byte equality observed |
| mp_map_contains.test | 10 | 0.001217s | 0.001257s | 0.001210s | byte equality observed |
| mp_map_erase.test | 10 | 0.001229s | 0.001242s | 0.001232s | byte equality observed |
| mp_map_find.test | 10 | 0.001224s | 0.001272s | 0.001210s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001267s | 0.001223s | 0.001224s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001202s | 0.001214s | 0.001220s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001228s | 0.001213s | 0.001222s | byte equality observed |
| mp_map_insert.test | 10 | 0.001228s | 0.001238s | 0.001250s | byte equality observed |
| mp_map_keys.test | 10 | 0.001254s | 0.001252s | 0.001233s | byte equality observed |
| mp_map_replace.test | 10 | 0.001239s | 0.001263s | 0.001221s | byte equality observed |
| mp_map_update.test | 10 | 0.001213s | 0.001256s | 0.001284s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001255s | 0.001202s | 0.001265s | byte equality observed |
| mp_max.test | 10 | 0.001231s | 0.001294s | 0.001226s | byte equality observed |
| mp_max_element.test | 10 | 0.001235s | 0.001227s | 0.001279s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000578s | 0.000577s | 0.001182s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001261s | 0.001268s | 0.001191s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000566s | 0.000575s | 0.001198s | byte equality observed |
| mp_min.test | 10 | 0.001194s | 0.001258s | 0.001236s | byte equality observed |
| mp_min_element.test | 10 | 0.001208s | 0.001239s | 0.001219s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000568s | 0.000562s | 0.001245s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001250s | 0.001246s | 0.001204s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000572s | 0.000558s | 0.001245s | byte equality observed |
| mp_none_of.test | 10 | 0.001234s | 0.001235s | 0.001217s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001212s | 0.001252s | 0.001217s | byte equality observed |
| mp_not_fn.test | 10 | 0.001217s | 0.001231s | 0.001202s | byte equality observed |
| mp_nth_element.test | 10 | 0.001240s | 0.001222s | 0.001219s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001230s | 0.001209s | 0.001248s | byte equality observed |
| mp_or.test | 10 | 0.001238s | 0.001272s | 0.001231s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001217s | 0.001225s | 0.001267s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001286s | 0.001256s | 0.001217s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001225s | 0.001257s | 0.001223s | byte equality observed |
| mp_partition.test | 10 | 0.001246s | 0.001248s | 0.001276s | byte equality observed |
| mp_partition_q.test | 10 | 0.001286s | 0.001240s | 0.001245s | byte equality observed |
| mp_plus.test | 10 | 0.001218s | 0.001226s | 0.001232s | byte equality observed |
| mp_pop_back.test | 10 | 0.001266s | 0.001262s | 0.001218s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000565s | 0.000580s | 0.001218s | byte equality observed |
| mp_pop_front.test | 10 | 0.001224s | 0.001266s | 0.001193s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000583s | 0.000550s | 0.001193s | byte equality observed |
| mp_power_set.test | 10 | 0.001220s | 0.001215s | 0.001231s | byte equality observed |
| mp_product.test | 10 | 0.001220s | 0.001223s | 0.001237s | byte equality observed |
| mp_push_back.test | 10 | 0.001245s | 0.001286s | 0.001227s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000561s | 0.000575s | 0.001228s | byte equality observed |
| mp_push_front.test | 10 | 0.001234s | 0.001263s | 0.001222s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000555s | 0.000584s | 0.001155s | byte equality observed |
| mp_quote.test | 10 | 0.001249s | 0.001257s | 0.001227s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001226s | 0.001247s | 0.001212s | byte equality observed |
| mp_remove.test | 10 | 0.001251s | 0.001241s | 0.001277s | byte equality observed |
| mp_remove_if.test | 10 | 0.001212s | 0.001268s | 0.001215s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001263s | 0.001225s | 0.001240s | byte equality observed |
| mp_rename.test | 10 | 0.001261s | 0.001274s | 0.001275s | byte equality observed |
| mp_rename_2.test | 10 | 0.000576s | 0.000578s | 0.001224s | byte equality observed |
| mp_rename_v.test | 10 | 0.000571s | 0.000569s | 0.001180s | byte equality observed |
| mp_repeat.test | 10 | 0.001276s | 0.001274s | 0.001212s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000577s | 0.000553s | 0.001200s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001271s | 0.001208s | 0.001207s | byte equality observed |
| mp_replace.test | 10 | 0.001213s | 0.001239s | 0.001269s | byte equality observed |
| mp_replace_at.test | 10 | 0.001218s | 0.001232s | 0.001252s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001227s | 0.001248s | 0.001267s | byte equality observed |
| mp_replace_front.test | 10 | 0.001242s | 0.001267s | 0.001229s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000558s | 0.000551s | 0.001200s | byte equality observed |
| mp_replace_if.test | 10 | 0.001208s | 0.001246s | 0.001221s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001223s | 0.001279s | 0.001225s | byte equality observed |
| mp_replace_second.test | 10 | 0.001229s | 0.001257s | 0.001226s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000556s | 0.000564s | 0.001207s | byte equality observed |
| mp_replace_third.test | 10 | 0.001225s | 0.001256s | 0.001215s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000571s | 0.000561s | 0.001269s | byte equality observed |
| mp_reverse.test | 10 | 0.001232s | 0.001248s | 0.001242s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001261s | 0.001239s | 0.001252s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001228s | 0.001216s | 0.001235s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001218s | 0.001236s | 0.001296s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001201s | 0.001265s | 0.001282s | byte equality observed |
| mp_same.test | 10 | 0.001211s | 0.001238s | 0.001238s | byte equality observed |
| mp_second.test | 10 | 0.001258s | 0.001272s | 0.001195s | byte equality observed |
| mp_second_2.test | 10 | 0.000556s | 0.000570s | 0.001186s | byte equality observed |
| mp_set_contains.test | 10 | 0.001200s | 0.001239s | 0.001211s | byte equality observed |
| mp_set_difference.test | 10 | 0.001186s | 0.001220s | 0.001252s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001206s | 0.001217s | 0.001202s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001198s | 0.001283s | 0.001207s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001216s | 0.001227s | 0.001200s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001204s | 0.001276s | 0.001228s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001269s | 0.001289s | 0.001216s | byte equality observed |
| mp_set_union.test | 10 | 0.001305s | 0.001248s | 0.001246s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001240s | 0.001227s | 0.001202s | byte equality observed |
| mp_similar.test | 10 | 0.001223s | 0.001274s | 0.001285s | byte equality observed |
| mp_size.test | 10 | 0.001219s | 0.001269s | 0.001200s | byte equality observed |
| mp_size_2.test | 10 | 0.000557s | 0.000585s | 0.001218s | byte equality observed |
| mp_slice.test | 10 | 0.001277s | 0.001240s | 0.001185s | byte equality observed |
| mp_slice_2.test | 10 | 0.000569s | 0.000561s | 0.001246s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001227s | 0.001255s | 0.001189s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001249s | 0.001232s | 0.001264s | byte equality observed |
| mp_sort.test | 10 | 0.001230s | 0.001214s | 0.001253s | byte equality observed |
| mp_sort_q.test | 10 | 0.001246s | 0.001205s | 0.001250s | byte equality observed |
| mp_split.test | 10 | 0.001245s | 0.001218s | 0.001287s | byte equality observed |
| mp_starts_with.test | 10 | 0.001269s | 0.001264s | 0.001223s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001232s | 0.001218s | 0.001253s | byte equality observed |
| mp_take.test | 10 | 0.001258s | 0.001262s | 0.001277s | byte equality observed |
| mp_take_2.test | 10 | 0.000574s | 0.000564s | 0.001189s | byte equality observed |
| mp_third.test | 10 | 0.001239s | 0.001255s | 0.001190s | byte equality observed |
| mp_third_2.test | 10 | 0.000564s | 0.000551s | 0.001156s | byte equality observed |
| mp_transform.test | 10 | 0.001242s | 0.001224s | 0.001180s | byte equality observed |
| mp_transform_2.test | 10 | 0.001195s | 0.001205s | 0.001173s | byte equality observed |
| mp_transform_front.test | 10 | 0.001256s | 0.001243s | 0.001161s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000564s | 0.000564s | 0.001265s | byte equality observed |
| mp_transform_if.test | 10 | 0.001194s | 0.001262s | 0.001225s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001242s | 0.001235s | 0.001232s | byte equality observed |
| mp_transform_q.test | 6 | 0.001264s | 0.001246s | 0.001205s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001252s | 0.001240s | 0.001197s | byte equality observed |
| mp_transform_second.test | 10 | 0.001207s | 0.001274s | 0.001238s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000570s | 0.000560s | 0.001197s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001247s | 0.001237s | 0.001237s | byte equality observed |
| mp_transform_third.test | 10 | 0.001237s | 0.001226s | 0.001201s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000558s | 0.000563s | 0.001291s | byte equality observed |
| mp_unique.test | 10 | 0.001220s | 0.001282s | 0.001212s | byte equality observed |
| mp_unique_if.test | 10 | 0.001241s | 0.001266s | 0.001264s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001252s | 0.001262s | 0.001272s | byte equality observed |
| mp_valid.test | 10 | 0.001229s | 0.001218s | 0.001205s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001229s | 0.001234s | 0.001231s | byte equality observed |
| mp_value.test | 10 | 0.000560s | 0.000576s | 0.001148s | byte equality observed |
| mp_with_index.test | 10 | 0.001663s | 0.001605s | 0.001513s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000557s | 0.000554s | 0.001204s | byte equality observed |
| mpl.test | 10 | 0.001235s | 0.001221s | 0.001207s | byte equality observed |
| mpl_list.test | 10 | 0.001225s | 0.001257s | 0.001256s | byte equality observed |
| mpl_tuple.test | 10 | 0.001231s | 0.001234s | 0.001256s | byte equality observed |
| mpl_version.test | 10 | 0.001271s | 0.001197s | 0.001240s | byte equality observed |
| set_version.test | 10 | 0.001237s | 0.001243s | 0.001225s | byte equality observed |
| tuple_apply.test | 10 | 0.001244s | 0.001264s | 0.001203s | byte equality observed |
| tuple_for_each.test | 10 | 0.001303s | 0.001264s | 0.001279s | byte equality observed |
| tuple_transform.test | 10 | 0.001233s | 0.001245s | 0.001234s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001207s | 0.001220s | 0.001248s | byte equality observed |
| tuple_version.test | 10 | 0.001243s | 0.001237s | 0.001252s | byte equality observed |
| utility_version.test | 10 | 0.001242s | 0.001224s | 0.001229s | byte equality observed |
| version.test | 10 | 0.001206s | 0.001196s | 0.001218s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
