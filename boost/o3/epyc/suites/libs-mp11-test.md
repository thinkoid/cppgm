# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.028037 | 0.055875 | 0.081403 | — | — | — |
| complex_h.test | COMPILE | 0.124644 | 0.243051 | 0.301032 | — | — | — |
| mp_size.test | RUN | 0.145565 | 0.771393 | 0.436106 | 0.001500 | 0.001724 | 0.001458 |
| mp_size_2.test | RUN | 0.012442 | 0.029162 | 0.040868 | 0.000934 | 0.000770 | 0.001538 |
| mp_empty.test | RUN | 0.139397 | 0.492164 | 0.411238 | 0.001369 | 0.001687 | 0.002742 |
| mp_empty_2.test | RUN | 0.013998 | 0.028686 | 0.044638 | 0.000537 | 0.000709 | 0.001500 |
| mp_assign.test | RUN | 0.154979 | 0.984719 | 0.552020 | 0.001513 | 0.001628 | 0.001619 |
| mp_assign_2.test | RUN | 0.014292 | 0.030325 | 0.045490 | 0.000675 | 0.000762 | 0.002370 |
| mp_clear.test | RUN | 0.134209 | 0.436953 | 0.435042 | 0.001550 | 0.001684 | 0.001434 |
| mp_clear_2.test | RUN | 0.013262 | 0.031054 | 0.043143 | 0.000685 | 0.000772 | 0.001586 |
| mp_front.test | RUN | 0.141929 | 0.682207 | 0.433827 | 0.001514 | 0.001775 | 0.001424 |
| mp_front_2.test | RUN | 0.012974 | 0.030013 | 0.043654 | 0.000572 | 0.000759 | 0.001404 |
| mp_pop_front.test | RUN | 0.141422 | 0.726199 | 0.447807 | 0.001478 | 0.001292 | 0.001603 |
| mp_pop_front_2.test | RUN | 0.013088 | 0.030649 | 0.044840 | 0.000753 | 0.000734 | 0.001616 |
| mp_second.test | RUN | 0.141053 | 0.464604 | 0.424937 | 0.001547 | 0.001772 | 0.001680 |
| mp_second_2.test | RUN | 0.013440 | 0.031308 | 0.043431 | 0.000687 | 0.000747 | 0.001508 |
| mp_third.test | RUN | 0.144619 | 0.439888 | 0.397118 | 0.001434 | 0.001834 | 0.001638 |
| mp_third_2.test | RUN | 0.012044 | 0.031345 | 0.043815 | 0.000685 | 0.000718 | 0.001339 |
| mp_push_front.test | RUN | 0.176304 | 1.543103 | 0.748416 | 0.001478 | 0.001602 | 0.001613 |
| mp_push_front_2.test | RUN | 0.012528 | 0.031928 | 0.043048 | 0.000546 | 0.000756 | 0.001474 |
| mp_push_back.test | RUN | 0.182410 | 1.548545 | 0.730781 | 0.001680 | 0.001808 | 0.001660 |
| mp_push_back_2.test | RUN | 0.013471 | 0.031286 | 0.045419 | 0.000710 | 0.000802 | 0.001516 |
| mp_rename.test | RUN | 0.164655 | 1.424692 | 0.645479 | 0.001525 | 0.001572 | 0.001335 |
| mp_rename_2.test | RUN | 0.012587 | 0.033125 | 0.043560 | 0.000526 | 0.000768 | 0.001628 |
| mp_append.test | RUN | 0.173482 | 1.614360 | 0.728033 | 0.001405 | 0.001617 | 0.001481 |
| mp_append_2.test | RUN | 0.344822 | 3.691024 | 1.009206 | 0.001683 | 0.001777 | 0.001256 |
| mp_append_3.test | RUN | 0.013396 | 0.028341 | 0.040104 | 0.000647 | 0.000690 | 0.001508 |
| mp_append_sf.test | RUN | 0.133293 | 0.391292 | 0.383267 | 0.001748 | 0.001820 | 0.001435 |
| mp_replace_front.test | RUN | 0.162374 | 1.158491 | 0.613756 | 0.001392 | 0.001632 | 0.001502 |
| mp_replace_front_2.test | RUN | 0.013658 | 0.032072 | 0.041926 | 0.000656 | 0.000667 | 0.001548 |
| mp_replace_second.test | RUN | 0.157392 | 0.761970 | 0.524262 | 0.001656 | 0.001758 | 0.001806 |
| mp_replace_second_2.test | RUN | 0.013576 | 0.035225 | 0.044776 | 0.000572 | 0.000744 | 0.001524 |
| mp_replace_third.test | RUN | 0.151638 | 0.620541 | 0.507786 | 0.001664 | 0.001864 | 0.001667 |
| mp_replace_third_2.test | RUN | 0.012555 | 0.031481 | 0.041067 | 0.000521 | 0.000650 | 0.003433 |
| mp_apply_q.test | RUN | 0.158862 | 1.453436 | 0.675711 | 0.001441 | 0.003353 | 0.001379 |
| mp_apply_q_sf.test | RUN | 0.134085 | 0.422657 | 0.410534 | 0.001532 | 0.001828 | 0.001640 |
| mp_is_list.test | RUN | 0.137516 | 0.500051 | 0.397424 | 0.001461 | 0.001786 | 0.001641 |
| mp_list_c.test | RUN | 0.141149 | 0.635880 | 0.485023 | 0.001546 | 0.001733 | 0.001659 |
| mp_transform_front.test | RUN | 0.162869 | 1.220172 | 0.572990 | 0.001410 | 0.001614 | 0.001468 |
| mp_transform_front_2.test | RUN | 0.013835 | 0.029705 | 0.043191 | 0.000567 | 0.000736 | 0.001554 |
| mp_transform_second.test | RUN | 0.168749 | 1.003873 | 0.521442 | 0.001567 | 0.001665 | 0.001336 |
| mp_transform_second_2.test | RUN | 0.012953 | 0.030996 | 0.045060 | 0.000849 | 0.000682 | 0.001590 |
| mp_transform_third.test | RUN | 0.148260 | 0.750027 | 0.477331 | 0.001612 | 0.001481 | 0.001296 |
| mp_transform_third_2.test | RUN | 0.013444 | 0.032445 | 0.042580 | 0.000547 | 0.000782 | 0.001519 |
| mp_list_v.test | RUN | 0.014209 | 0.031829 | 0.043400 | 0.000543 | 0.000613 | 0.001676 |
| mp_rename_v.test | RUN | 0.013560 | 0.031240 | 0.042477 | 0.000567 | 0.000617 | 0.001520 |
| mp_is_value_list.test | RUN | 0.133383 | 0.311033 | 0.382198 | 0.001580 | 0.001837 | 0.001722 |
| mp_transform.test | RUN | 0.303910 | 2.413105 | 1.222118 | 0.002228 | 0.001524 | 0.001475 |
| mp_transform_2.test | RUN | 0.128998 | 0.266805 | 0.353577 | 0.001494 | 0.001710 | 0.001655 |
| mp_transform_q.test | RUN | 0.294854 | 2.298257 | 1.193035 | 0.001759 | 0.001553 | 0.001630 |
| mp_transform_q_2.test | RUN | 0.308830 | 0.747846 | 1.535267 | 0.001678 | 0.001572 | 0.001486 |
| mp_transform_sf.test | RUN | 0.145010 | 0.427555 | 0.443165 | 0.001497 | 0.001542 | 0.001653 |
| mp_transform_if.test | RUN | 0.172904 | 1.161515 | 0.629189 | 0.001704 | 0.001469 | 0.001249 |
| mp_transform_if_q.test | RUN | 0.172463 | 1.136014 | 0.648972 | 0.001406 | 0.001610 | 0.001594 |
| mp_filter.test | RUN | 0.151360 | 0.681912 | 0.473690 | 0.001439 | 0.001426 | 0.001286 |
| mp_fill.test | RUN | 0.143914 | 0.526722 | 0.469013 | 0.001450 | 0.001796 | 0.001622 |
| mp_fill_2.test | RUN | 0.022361 | 0.044361 | 0.061238 | 0.000718 | 0.000752 | 0.001553 |
| mp_count.test | RUN | 0.285290 | 1.219918 | 0.740845 | 0.001695 | 0.001606 | 0.001361 |
| mp_count_if.test | RUN | 0.295805 | 1.247867 | 0.823550 | 0.001715 | 0.001854 | 0.001652 |
| mp_count_if_q.test | RUN | 0.151890 | 0.813744 | 0.471664 | 0.001387 | 0.001543 | 0.001450 |
| mp_contains.test | RUN | 0.143012 | 0.493309 | 0.446599 | 0.001444 | 0.001898 | 0.001869 |
| mp_starts_with.test | RUN | 0.144227 | 0.508757 | 0.437170 | 0.001510 | 0.002008 | 0.001554 |
| mp_starts_with_sf.test | RUN | 0.140638 | 0.442215 | 0.414254 | 0.001515 | 0.001554 | 0.001691 |
| mp_repeat.test | RUN | 0.199654 | 2.101551 | 0.821720 | 0.001495 | 0.001773 | 0.001593 |
| mp_repeat_2.test | RUN | 0.022795 | 0.048252 | 0.066840 | 0.000779 | 0.000798 | 0.001439 |
| mp_repeat_3.test | RUN | 0.178406 | 0.278937 | 0.415712 | 0.001454 | 0.001758 | 0.001617 |
| mp_product.test | RUN | 0.164029 | 1.246073 | 0.621328 | 0.001501 | 0.001785 | 0.001346 |
| mp_drop.test | RUN | 0.181733 | 1.528978 | 0.710792 | 0.002418 | 0.001745 | 0.001755 |
| mp_drop_2.test | RUN | 0.023521 | 0.048466 | 0.067464 | 0.000628 | 0.000790 | 0.001472 |
| mp_iota.test | RUN | 0.177627 | 1.304832 | 0.617094 | 0.001540 | 0.003690 | 0.001622 |
| mp_iota_2.test | RUN | 0.181831 | 1.560668 | 0.696926 | 0.001342 | 0.001718 | 0.001544 |
| mp_at.test | RUN | 0.154340 | 0.740955 | 0.494036 | 0.001462 | 0.001526 | 0.001644 |
| mp_at_2.test | RUN | 0.023947 | 0.046519 | 0.067039 | 0.000572 | 0.001004 | 0.001715 |
| mp_at_sf.test | RUN | 0.142398 | 0.400879 | 0.445363 | 0.001424 | 0.001674 | 0.001468 |
| mp_take.test | RUN | 0.233281 | 2.022040 | 0.793431 | 0.001656 | 0.001744 | 0.001590 |
| mp_take_2.test | RUN | 0.023010 | 0.045211 | 0.072571 | 0.000548 | 0.000748 | 0.001690 |
| mp_slice.test | RUN | 0.260476 | 2.103147 | 1.056025 | 0.001363 | 0.001907 | 0.001547 |
| mp_slice_2.test | RUN | 0.024136 | 0.046736 | 0.070799 | 0.000702 | 0.000582 | 0.001796 |
| mp_replace.test | RUN | 0.177776 | 1.052669 | 0.675643 | 0.001862 | 0.001487 | 0.001535 |
| mp_replace_if.test | RUN | 0.169874 | 0.940344 | 0.587157 | 0.001760 | 0.001794 | 0.001525 |
| mp_replace_if_q.test | RUN | 0.168007 | 0.938176 | 0.604533 | 0.001466 | 0.001924 | 0.001666 |
| mp_copy_if.test | RUN | 0.176698 | 1.350246 | 0.582039 | 0.001781 | 0.001725 | 0.001759 |
| mp_copy_if_q.test | RUN | 0.173630 | 1.339316 | 0.578679 | 0.001737 | 0.001846 | 0.001613 |
| mp_remove.test | RUN | 0.167309 | 0.935209 | 0.604303 | 0.001828 | 0.001954 | 0.001540 |
| mp_remove_if.test | RUN | 0.174148 | 1.440218 | 0.604275 | 0.001447 | 0.001838 | 0.001624 |
| mp_remove_if_q.test | RUN | 0.175504 | 1.429948 | 0.622704 | 0.001708 | 0.001531 | 0.001604 |
| mp_partition.test | RUN | 0.187351 | 1.339329 | 0.666717 | 0.001744 | 0.001883 | 0.001480 |
| mp_partition_q.test | RUN | 0.183247 | 1.350578 | 0.642271 | 0.001521 | 0.001748 | 0.001586 |
| mp_sort.test | RUN | 0.167853 | 0.993197 | 0.598912 | 0.001822 | 0.001841 | 0.001608 |
| mp_sort_q.test | RUN | 0.169175 | 0.951528 | 0.587447 | 0.001664 | 0.001661 | 0.001322 |
| mp_find.test | RUN | 0.172541 | 1.024885 | 0.509115 | 0.001786 | 0.001789 | 0.001372 |
| mp_find_if.test | RUN | 0.162564 | 0.954917 | 0.499733 | 0.001712 | 0.001720 | 0.001263 |
| mp_find_if_q.test | RUN | 0.179336 | 1.018617 | 0.572930 | 0.001462 | 0.001734 | 0.001587 |
| mp_reverse.test | RUN | 0.320428 | 2.771328 | 1.170118 | 0.001900 | 0.001623 | 0.001782 |
| mp_fold.test | RUN | 0.542970 | 2.181454 | 3.087962 | 0.001636 | 0.001793 | 0.001694 |
| mp_fold_q.test | RUN | 0.163168 | 0.939395 | 0.534224 | 0.001676 | 0.001804 | 0.001672 |
| mp_fold_q_sf.test | RUN | 0.148945 | 0.442147 | 0.414228 | 0.001413 | 0.001876 | 0.001734 |
| mp_reverse_fold.test | RUN | 0.256719 | 2.011580 | 0.852159 | 0.001468 | 0.001686 | 0.001764 |
| mp_reverse_fold_q.test | RUN | 0.164307 | 1.125527 | 0.607074 | 0.001615 | 0.001748 | 0.001792 |
| mp_unique.test | RUN | 0.161669 | 0.992297 | 0.603095 | 0.001303 | 0.001888 | 0.001756 |
| mp_unique_if.test | RUN | 0.275675 | 2.088221 | 0.952546 | 0.001528 | 0.001582 | 0.001744 |
| mp_unique_if_q.test | RUN | 0.238443 | 2.033334 | 0.805447 | 0.001482 | 0.001430 | 0.001690 |
| mp_all_of.test | RUN | 0.404145 | 1.166433 | 0.992231 | 0.001576 | 0.001882 | 0.001712 |
| mp_all_of_q.test | RUN | 0.145274 | 0.513808 | 0.404362 | 0.001651 | 0.001778 | 0.001716 |
| mp_any_of.test | RUN | 0.403469 | 1.244047 | 0.970419 | 0.001464 | 0.001832 | 0.001369 |
| mp_any_of_q.test | RUN | 0.144280 | 0.485810 | 0.412282 | 0.001740 | 0.001597 | 0.001692 |
| mp_none_of.test | RUN | 0.421845 | 1.227519 | 0.944560 | 0.001708 | 0.001833 | 0.001603 |
| mp_none_of_q.test | RUN | 0.153746 | 0.518612 | 0.420781 | 0.001725 | 0.001522 | 0.001475 |
| mp_replace_at.test | RUN | 0.182064 | 1.007023 | 0.616590 | 0.001516 | 0.001782 | 0.001712 |
| mp_replace_at_c.test | RUN | 0.173452 | 1.002084 | 0.667904 | 0.001503 | 0.001404 | 0.001310 |
| mp_for_each.test | RUN | 0.170410 | 0.696232 | 0.686746 | 0.001444 | 0.001640 | 0.001412 |
| mp_insert.test | RUN | 0.254359 | 2.079585 | 0.978885 | 0.001570 | 0.001680 | 0.001664 |
| mp_insert_2.test | RUN | 0.022801 | 0.044400 | 0.065550 | 0.000663 | 0.000732 | 0.001374 |
| mp_erase.test | RUN | 0.270651 | 2.241374 | 1.060440 | 0.001546 | 0.001838 | 0.001535 |
| mp_erase_2.test | RUN | 0.022859 | 0.044431 | 0.068095 | 0.000732 | 0.000790 | 0.001702 |
| mp_with_index.test | RUN | 0.329635 | 4.378209 | 2.406906 | 0.001966 | 0.002178 | 0.001944 |
| mp_with_index_cx.test | RUN | 0.003622 | 0.016129 | 0.024202 | 0.000676 | 0.000749 | 0.001606 |
| mp_from_sequence.test | RUN | 0.174454 | 1.142832 | 0.635977 | 0.001744 | 0.001677 | 0.001724 |
| mp_from_sequence_2.test | RUN | 0.190086 | 1.387707 | 0.677223 | 0.001710 | 0.001822 | 0.001698 |
| mp_from_sequence_3.test | RUN | 0.156390 | 0.627855 | 0.486722 | 0.001574 | 0.001919 | 0.001628 |
| mp_min_element.test | RUN | 0.154445 | 0.529342 | 0.428796 | 0.001649 | 0.001731 | 0.002498 |
| mp_min_element_2.test | RUN | 0.023240 | 0.046035 | 0.070453 | 0.000612 | 0.000722 | 0.001438 |
| mp_min_element_q.test | RUN | 0.154136 | 0.521592 | 0.470295 | 0.001688 | 0.001554 | 0.001352 |
| mp_min_element_q_2.test | RUN | 0.022929 | 0.045161 | 0.067651 | 0.000524 | 0.000690 | 0.001694 |
| mp_max_element.test | RUN | 0.154444 | 0.537912 | 0.506643 | 0.001534 | 0.001798 | 0.001555 |
| mp_max_element_2.test | RUN | 0.022748 | 0.046704 | 0.093461 | 0.000546 | 0.000607 | 0.001306 |
| mp_max_element_q.test | RUN | 0.149274 | 0.556742 | 0.432381 | 0.001620 | 0.001791 | 0.001927 |
| mp_max_element_q_2.test | RUN | 0.023889 | 0.046485 | 0.067183 | 0.000772 | 0.000747 | 0.001544 |
| mp_nth_element.test | RUN | 0.166231 | 0.759449 | 0.572600 | 0.001806 | 0.001587 | 0.001600 |
| mp_nth_element_q.test | RUN | 0.159995 | 0.750367 | 0.571334 | 0.001412 | 0.001558 | 0.001486 |
| mp_back.test | RUN | 0.161038 | 0.637614 | 0.522458 | 0.001536 | 0.001882 | 0.001692 |
| mp_back_2.test | RUN | 0.022732 | 0.043910 | 0.072462 | 0.000502 | 0.000603 | 0.001217 |
| mp_pop_back.test | RUN | 0.375658 | 4.178086 | 1.117202 | 0.001548 | 0.001818 | 0.001540 |
| mp_pop_back_2.test | RUN | 0.022776 | 0.044717 | 0.065043 | 0.000498 | 0.000597 | 0.001639 |
| mp_flatten.test | RUN | 0.183561 | 1.464858 | 0.739104 | 0.001527 | 0.001751 | 0.001715 |
| mp_rotate_left.test | RUN | 0.177527 | 1.585971 | 0.715163 | 0.001692 | 0.001882 | 0.001406 |
| mp_rotate_right.test | RUN | 0.177762 | 1.611034 | 0.736269 | 0.001422 | 0.001798 | 0.001721 |
| mp_power_set.test | RUN | 0.183090 | 1.482821 | 0.726038 | 0.001735 | 0.001706 | 0.001685 |
| mp_partial_sum.test | RUN | 0.234460 | 2.008914 | 0.840930 | 0.002836 | 0.001672 | 0.001622 |
| mp_iterate.test | RUN | 0.165697 | 0.613225 | 0.584341 | 0.001777 | 0.001738 | 0.001604 |
| mp_pairwise_fold.test | RUN | 0.178347 | 1.391648 | 0.736746 | 0.001513 | 0.001845 | 0.001740 |
| mp_pairwise_fold_q.test | RUN | 0.180915 | 0.401348 | 0.440735 | 0.001780 | 0.001759 | 0.001806 |
| mp_sliding_fold.test | RUN | 0.329730 | 2.653017 | 1.391901 | 0.001582 | 0.001634 | 0.001609 |
| mp_sliding_fold_q.test | RUN | 0.317601 | 2.646766 | 1.410031 | 0.001510 | 0.001680 | 0.001444 |
| mp_intersperse.test | RUN | 0.177462 | 0.985344 | 0.662786 | 0.001710 | 0.001755 | 0.001759 |
| mp_split.test | RUN | 0.238772 | 1.905240 | 0.945467 | 0.001759 | 0.001811 | 0.001431 |
| mp_join.test | RUN | 0.195603 | 1.629109 | 0.826964 | 0.001766 | 0.001763 | 0.001703 |
| integral.test | RUN | 0.148875 | 0.728867 | 0.464718 | 0.001500 | 0.001807 | 0.001498 |
| mp_value.test | RUN | 0.010615 | 0.024806 | 0.038852 | 0.000722 | 0.000561 | 0.001678 |
| mp_identity.test | RUN | 0.145008 | 0.657249 | 0.476423 | 0.001852 | 0.001790 | 0.001652 |
| mp_inherit.test | RUN | 0.138084 | 0.471049 | 0.434567 | 0.001660 | 0.001654 | 0.001642 |
| mp_if.test | RUN | 0.139881 | 0.538637 | 0.401345 | 0.001666 | 0.001814 | 0.001533 |
| mp_if_sf.test | RUN | 0.133325 | 0.407912 | 0.392281 | 0.001682 | 0.001774 | 0.001615 |
| mp_eval_if.test | RUN | 0.140885 | 0.564521 | 0.430796 | 0.001664 | 0.001597 | 0.001371 |
| mp_eval_if_sf.test | RUN | 0.134369 | 0.415874 | 0.361457 | 0.001656 | 0.001491 | 0.001371 |
| mp_valid.test | RUN | 0.138307 | 0.433312 | 0.374612 | 0.001688 | 0.001760 | 0.001548 |
| mp_defer.test | RUN | 0.146511 | 0.706427 | 0.449228 | 0.001746 | 0.001506 | 0.001574 |
| mp_quote.test | RUN | 0.146551 | 0.710328 | 0.462234 | 0.001557 | 0.001780 | 0.001516 |
| mp_invoke_q.test | RUN | 0.159535 | 0.906182 | 0.511869 | 0.001669 | 0.001813 | 0.001392 |
| mp_invoke_q_sf.test | RUN | 0.133748 | 0.417134 | 0.379154 | 0.001464 | 0.001609 | 0.001427 |
| mp_quote_trait.test | RUN | 0.145531 | 0.776391 | 0.461378 | 0.001726 | 0.001506 | 0.001480 |
| mp_cond.test | RUN | 0.140375 | 0.467131 | 0.397760 | 0.001750 | 0.001672 | 0.001421 |
| mp_cond_sf.test | RUN | 0.131558 | 0.415801 | 0.380228 | 0.001746 | 0.001413 | 0.001373 |
| mp_not_fn.test | RUN | 0.131839 | 0.403233 | 0.380722 | 0.001504 | 0.001744 | 0.001365 |
| mp_eval_if_not.test | RUN | 0.144191 | 0.575313 | 0.429402 | 0.001612 | 0.001688 | 0.001335 |
| mp_eval_or.test | RUN | 0.137370 | 0.303637 | 0.389045 | 0.001508 | 0.001754 | 0.001286 |
| mp_compose.test | RUN | 0.149708 | 0.944602 | 0.493598 | 0.001552 | 0.001693 | 0.001328 |
| mp_valid_and_true.test | RUN | 0.137223 | 0.472939 | 0.394435 | 0.001467 | 0.001790 | 0.001404 |
| mp_compose_sf.test | COMPILE | 0.032663 | 0.057956 | 0.086671 | — | — | — |
| integer_sequence.test | RUN | 0.159798 | 0.919657 | 0.594906 | 0.001396 | 0.002779 | 0.001647 |
| tuple_for_each.test | RUN | 0.142710 | 0.355263 | 0.437661 | 0.001401 | 0.001501 | 0.001656 |
| tuple_for_each_cx.test | COMPILE | 0.026011 | 0.052209 | 0.069738 | — | — | — |
| tuple_apply.test | RUN | 0.138881 | 0.355323 | 0.420793 | 0.001551 | 0.001270 | 0.001456 |
| tuple_apply_cx.test | COMPILE | 0.036798 | 0.068335 | 0.099964 | — | — | — |
| construct_from_tuple.test | RUN | 0.139563 | 0.364548 | 0.426484 | 0.001560 | 0.001886 | 0.001354 |
| construct_from_tuple_cx.test | COMPILE | 0.038589 | 0.070576 | 0.097373 | — | — | — |
| tuple_transform.test | RUN | 0.234394 | 0.768524 | 0.802271 | 0.001690 | 0.001821 | 0.001263 |
| tuple_transform_2.test | RUN | 0.196652 | 0.563029 | 0.730051 | 0.001503 | 0.001693 | 0.001433 |
| tuple_transform_cx.test | COMPILE | 0.034678 | 0.067495 | 0.099144 | — | — | — |
| mp_set_contains.test | RUN | 0.149435 | 0.489718 | 0.415776 | 0.001584 | 0.001785 | 0.001373 |
| mp_set_push_back.test | RUN | 0.188578 | 1.530909 | 0.709448 | 0.001922 | 0.001713 | 0.001546 |
| mp_set_push_front.test | RUN | 0.228952 | 1.820622 | 0.835990 | 0.001575 | 0.001481 | 0.001229 |
| mp_is_set.test | RUN | 0.146661 | 0.497778 | 0.430120 | 0.001802 | 0.001720 | 0.001620 |
| mp_set_union.test | RUN | 0.181712 | 1.276216 | 0.685120 | 0.001715 | 0.001854 | 0.001369 |
| mp_set_union_sf.test | RUN | 0.141061 | 0.400184 | 0.397313 | 0.001532 | 0.001807 | 0.001601 |
| mp_set_difference.test | RUN | 0.163824 | 1.014070 | 0.571592 | 0.001759 | 0.001645 | 0.001502 |
| mp_set_difference_sf.test | RUN | 0.138959 | 0.390393 | 0.376572 | 0.001402 | 0.001381 | 0.001403 |
| mp_set_intersection.test | RUN | 0.165402 | 1.010806 | 0.545645 | 0.001682 | 0.001940 | 0.001614 |
| mp_set_intersection_sf.test | RUN | 0.141224 | 0.390072 | 0.375764 | 0.001530 | 0.001461 | 0.001514 |
| mp_all.test | RUN | 0.141069 | 0.481498 | 0.392820 | 0.001801 | 0.001645 | 0.001397 |
| mp_all_2.test | RUN | 0.410654 | 1.057224 | 0.942474 | 0.001776 | 0.001846 | 0.001548 |
| mp_and.test | RUN | 0.141936 | 0.492084 | 0.388469 | 0.001699 | 0.001613 | 0.001590 |
| mp_any.test | RUN | 0.139843 | 0.494803 | 0.408047 | 0.001424 | 0.001814 | 0.001628 |
| mp_any_2.test | RUN | 0.419092 | 1.051845 | 0.942961 | 0.001503 | 0.001784 | 0.001539 |
| mp_or.test | RUN | 0.144496 | 0.504305 | 0.412867 | 0.001680 | 0.001831 | 0.001634 |
| mp_same.test | RUN | 0.273517 | 0.843537 | 0.647654 | 0.001240 | 0.001713 | 0.001382 |
| mp_plus.test | RUN | 0.148445 | 0.593275 | 0.448503 | 0.001386 | 0.001655 | 0.001493 |
| mp_less.test | RUN | 0.138514 | 0.497030 | 0.381018 | 0.001791 | 0.001702 | 0.001631 |
| mp_min.test | RUN | 0.134123 | 0.453158 | 0.402518 | 0.001642 | 0.001783 | 0.001200 |
| mp_max.test | RUN | 0.141190 | 0.494976 | 0.404040 | 0.001497 | 0.001728 | 0.001348 |
| mp_similar.test | RUN | 0.140506 | 0.481014 | 0.412963 | 0.001511 | 0.001642 | 0.001601 |
| mp_map_find.test | RUN | 0.169821 | 0.893668 | 0.541347 | 0.001619 | 0.001502 | 0.001578 |
| mp_map_find_2.test | RUN | 0.154569 | 0.356430 | 0.465197 | 0.001633 | 0.001650 | 0.001396 |
| mp_map_find_3.test | RUN | 0.150081 | 0.344876 | 0.445713 | 0.001506 | 0.001798 | 0.001619 |
| mp_map_find_4.test | RUN | 0.141655 | 0.335825 | 0.424419 | 0.001342 | 0.001459 | 0.001384 |
| mp_map_contains.test | RUN | 0.148703 | 0.496892 | 0.411461 | 0.001750 | 0.001866 | 0.001645 |
| mp_map_insert.test | RUN | 0.189584 | 1.696885 | 0.759283 | 0.001720 | 0.001763 | 0.001529 |
| mp_map_replace.test | RUN | 0.251430 | 1.907608 | 0.904556 | 0.001554 | 0.001789 | 0.001468 |
| mp_map_erase.test | RUN | 0.184650 | 1.424255 | 0.750038 | 0.001665 | 0.001823 | 0.001217 |
| mp_map_update.test | RUN | 0.193305 | 0.938799 | 0.572503 | 0.001836 | 0.001795 | 0.001265 |
| mp_map_update_q.test | RUN | 0.162170 | 0.934404 | 0.587920 | 0.001648 | 0.001497 | 0.001537 |
| mp_map_keys.test | RUN | 0.161003 | 0.835655 | 0.581325 | 0.001521 | 0.001804 | 0.001281 |
| mp_is_map.test | RUN | 0.148053 | 0.494145 | 0.450896 | 0.001486 | 0.001740 | 0.001593 |
| mp_bind.test | RUN | 0.182083 | 1.500051 | 0.689965 | 0.001789 | 0.001526 | 0.001606 |
| mp_bind_q.test | RUN | 0.156846 | 0.930441 | 0.515499 | 0.001616 | 0.001535 | 0.001761 |
| mp_bind_front.test | RUN | 0.155284 | 1.000335 | 0.507657 | 0.001430 | 0.001646 | 0.001412 |
| mp_bind_back.test | RUN | 0.157266 | 1.018693 | 0.518522 | 0.001367 | 0.001768 | 0.001505 |
| mp_lambda.test | RUN | 0.332055 | 3.075005 | 1.388646 | 0.001231 | 0.001308 | 0.001401 |
| mpl.test | RUN | 0.307834 | 0.798857 | 1.069783 | 0.001720 | 0.001762 | 0.001406 |
| mpl_list.test | RUN | 0.184000 | 0.596412 | 0.517620 | 0.001575 | 0.001584 | 0.001686 |
| mpl_tuple.test | RUN | 0.178935 | 0.599426 | 0.492761 | 0.001226 | 0.001676 | 0.001453 |
| version.test | RUN | 0.089069 | 0.229437 | 0.264831 | 0.001774 | 0.001570 | 0.001452 |
| mp11_version.test | RUN | 0.109011 | 0.245779 | 0.288813 | 0.001521 | 0.001781 | 0.001305 |
| list_version.test | RUN | 0.095535 | 0.227384 | 0.259765 | 0.001518 | 0.001428 | 0.001405 |
| algorithm_version.test | RUN | 0.111587 | 0.243247 | 0.277264 | 0.001794 | 0.001630 | 0.001425 |
| integral_version.test | RUN | 0.092696 | 0.216733 | 0.249184 | 0.001737 | 0.001492 | 0.001263 |
| utility_version.test | RUN | 0.092632 | 0.223613 | 0.244824 | 0.001502 | 0.001414 | 0.001453 |
| function_version.test | RUN | 0.092505 | 0.231277 | 0.271182 | 0.001255 | 0.001670 | 0.001528 |
| map_version.test | RUN | 0.109604 | 0.237788 | 0.279932 | 0.001660 | 0.001603 | 0.001283 |
| set_version.test | RUN | 0.094572 | 0.230082 | 0.260341 | 0.001780 | 0.001459 | 0.001557 |
| bind_version.test | RUN | 0.102725 | 0.234991 | 0.281571 | 0.001348 | 0.001664 | 0.001270 |
| integer_sequence_version.test | RUN | 0.090771 | 0.225033 | 0.187918 | 0.001524 | 0.001659 | 0.001303 |
| tuple_version.test | RUN | 0.109348 | 0.234886 | 0.265987 | 0.001182 | 0.001590 | 0.001141 |
| mpl_version.test | RUN | 0.076748 | 0.180074 | 0.275556 | 0.001247 | 0.001323 | 0.001116 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.010× | 1.004×, 1.016× | 1.026× |
| clang | 1.078× | 1.080×, 1.076× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000867s | 0.000875s | 0.000919s | byte equality observed |
| bind_version.test | 10 | 0.000862s | 0.000869s | 0.000889s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000870s | 0.000887s | 0.000903s | byte equality observed |
| function_version.test | 10 | 0.000874s | 0.000886s | 0.000913s | byte equality observed |
| integer_sequence.test | 10 | 0.000867s | 0.000897s | 0.000888s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000867s | 0.000892s | 0.000918s | byte equality observed |
| integral.test | 10 | 0.000885s | 0.000907s | 0.000929s | byte equality observed |
| integral_version.test | 10 | 0.000879s | 0.000900s | 0.000886s | byte equality observed |
| list_version.test | 10 | 0.000897s | 0.000905s | 0.000900s | byte equality observed |
| map_version.test | 10 | 0.000901s | 0.000897s | 0.000916s | byte equality observed |
| mp11_version.test | 10 | 0.000904s | 0.000882s | 0.000882s | byte equality observed |
| mp_all.test | 10 | 0.000907s | 0.000902s | 0.000875s | byte equality observed |
| mp_all_2.test | 10 | 0.000908s | 0.000911s | 0.000861s | byte equality observed |
| mp_all_of.test | 10 | 0.000891s | 0.000904s | 0.000873s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000911s | 0.000906s | 0.000875s | byte equality observed |
| mp_and.test | 10 | 0.000896s | 0.000896s | 0.000866s | byte equality observed |
| mp_any.test | 10 | 0.000896s | 0.000899s | 0.000846s | byte equality observed |
| mp_any_2.test | 10 | 0.000894s | 0.000879s | 0.000870s | byte equality observed |
| mp_any_of.test | 10 | 0.000900s | 0.000884s | 0.000886s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000897s | 0.000873s | 0.000886s | byte equality observed |
| mp_append.test | 10 | 0.000903s | 0.000919s | 0.000898s | byte equality observed |
| mp_append_2.test | 10 | 0.000937s | 0.000905s | 0.000876s | byte equality observed |
| mp_append_3.test | 10 | 0.000424s | 0.000415s | 0.000895s | byte equality observed |
| mp_append_sf.test | 10 | 0.000933s | 0.000905s | 0.000883s | byte equality observed |
| mp_apply_q.test | 10 | 0.000906s | 0.000906s | 0.000893s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000901s | 0.000911s | 0.000884s | byte equality observed |
| mp_assign.test | 10 | 0.000892s | 0.000910s | 0.000884s | byte equality observed |
| mp_assign_2.test | 10 | 0.000416s | 0.000408s | 0.000888s | byte equality observed |
| mp_at.test | 10 | 0.000918s | 0.000892s | 0.000898s | byte equality observed |
| mp_at_2.test | 10 | 0.000411s | 0.000394s | 0.000891s | byte equality observed |
| mp_at_sf.test | 10 | 0.000887s | 0.000897s | 0.000906s | byte equality observed |
| mp_back.test | 10 | 0.000909s | 0.000892s | 0.000889s | byte equality observed |
| mp_back_2.test | 10 | 0.000422s | 0.000397s | 0.000859s | byte equality observed |
| mp_bind.test | 10 | 0.000909s | 0.000893s | 0.000891s | byte equality observed |
| mp_bind_back.test | 10 | 0.000909s | 0.000910s | 0.000917s | byte equality observed |
| mp_bind_front.test | 10 | 0.000902s | 0.000885s | 0.000906s | byte equality observed |
| mp_bind_q.test | 10 | 0.000900s | 0.000895s | 0.000929s | byte equality observed |
| mp_clear.test | 10 | 0.000915s | 0.000912s | 0.000896s | byte equality observed |
| mp_clear_2.test | 10 | 0.000417s | 0.000426s | 0.000893s | byte equality observed |
| mp_compose.test | 10 | 0.000896s | 0.000923s | 0.000901s | byte equality observed |
| mp_cond.test | 10 | 0.000900s | 0.000933s | 0.000911s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000912s | 0.000911s | 0.000907s | byte equality observed |
| mp_contains.test | 10 | 0.000909s | 0.000911s | 0.000889s | byte equality observed |
| mp_copy_if.test | 10 | 0.000908s | 0.000912s | 0.000906s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000887s | 0.000916s | 0.000877s | byte equality observed |
| mp_count.test | 10 | 0.000904s | 0.000912s | 0.000893s | byte equality observed |
| mp_count_if.test | 10 | 0.000892s | 0.000907s | 0.000904s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000889s | 0.000913s | 0.000895s | byte equality observed |
| mp_defer.test | 10 | 0.000899s | 0.000918s | 0.000895s | byte equality observed |
| mp_drop.test | 10 | 0.000901s | 0.000921s | 0.000880s | byte equality observed |
| mp_drop_2.test | 10 | 0.000414s | 0.000407s | 0.000856s | byte equality observed |
| mp_empty.test | 10 | 0.000900s | 0.000916s | 0.000872s | byte equality observed |
| mp_empty_2.test | 10 | 0.000409s | 0.000411s | 0.000856s | byte equality observed |
| mp_erase.test | 10 | 0.000925s | 0.000930s | 0.000909s | byte equality observed |
| mp_erase_2.test | 10 | 0.000417s | 0.000409s | 0.000886s | byte equality observed |
| mp_eval_if.test | 10 | 0.000892s | 0.000900s | 0.000915s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000885s | 0.000891s | 0.000891s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000879s | 0.000880s | 0.000909s | byte equality observed |
| mp_eval_or.test | 10 | 0.000882s | 0.000909s | 0.000900s | byte equality observed |
| mp_fill.test | 10 | 0.000906s | 0.000908s | 0.000904s | byte equality observed |
| mp_fill_2.test | 10 | 0.000411s | 0.000411s | 0.000869s | byte equality observed |
| mp_filter.test | 10 | 0.000909s | 0.000913s | 0.000874s | byte equality observed |
| mp_find.test | 10 | 0.000902s | 0.000904s | 0.000883s | byte equality observed |
| mp_find_if.test | 10 | 0.000896s | 0.000898s | 0.000879s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000896s | 0.000894s | 0.000885s | byte equality observed |
| mp_flatten.test | 10 | 0.000908s | 0.000883s | 0.000888s | byte equality observed |
| mp_fold.test | 10 | 0.000929s | 0.000884s | 0.000900s | byte equality observed |
| mp_fold_q.test | 10 | 0.000910s | 0.000893s | 0.000873s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000902s | 0.000886s | 0.000908s | byte equality observed |
| mp_for_each.test | 10 | 0.000904s | 0.000860s | 0.000877s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000889s | 0.000898s | 0.000893s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000897s | 0.000874s | 0.000866s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000904s | 0.000903s | 0.000884s | byte equality observed |
| mp_front.test | 10 | 0.000902s | 0.000890s | 0.000866s | byte equality observed |
| mp_front_2.test | 10 | 0.000409s | 0.000409s | 0.000875s | byte equality observed |
| mp_identity.test | 10 | 0.000896s | 0.000876s | 0.000879s | byte equality observed |
| mp_if.test | 10 | 0.000919s | 0.000892s | 0.000873s | byte equality observed |
| mp_if_sf.test | 10 | 0.000899s | 0.000887s | 0.000904s | byte equality observed |
| mp_inherit.test | 10 | 0.000922s | 0.000890s | 0.000902s | byte equality observed |
| mp_insert.test | 10 | 0.000931s | 0.000921s | 0.000898s | byte equality observed |
| mp_insert_2.test | 10 | 0.000420s | 0.000403s | 0.000887s | byte equality observed |
| mp_intersperse.test | 10 | 0.000919s | 0.000885s | 0.000903s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000895s | 0.000925s | 0.000910s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000911s | 0.000897s | 0.000903s | byte equality observed |
| mp_iota.test | 10 | 0.000910s | 0.000889s | 0.000906s | byte equality observed |
| mp_iota_2.test | 10 | 0.000892s | 0.000908s | 0.000937s | byte equality observed |
| mp_is_list.test | 10 | 0.000900s | 0.000938s | 0.000907s | byte equality observed |
| mp_is_map.test | 10 | 0.000897s | 0.000931s | 0.000889s | byte equality observed |
| mp_is_set.test | 10 | 0.000884s | 0.000913s | 0.000891s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000887s | 0.000888s | 0.000893s | byte equality observed |
| mp_iterate.test | 10 | 0.000905s | 0.000894s | 0.000901s | byte equality observed |
| mp_join.test | 10 | 0.000916s | 0.000962s | 0.000896s | byte equality observed |
| mp_lambda.test | 10 | 0.000920s | 0.000925s | 0.000910s | byte equality observed |
| mp_less.test | 10 | 0.000892s | 0.000943s | 0.000890s | byte equality observed |
| mp_list_c.test | 10 | 0.000882s | 0.000921s | 0.000907s | byte equality observed |
| mp_list_v.test | 10 | 0.000406s | 0.000421s | 0.000862s | byte equality observed |
| mp_map_contains.test | 10 | 0.000909s | 0.000935s | 0.000896s | byte equality observed |
| mp_map_erase.test | 10 | 0.000878s | 0.000893s | 0.000881s | byte equality observed |
| mp_map_find.test | 10 | 0.000904s | 0.000954s | 0.000900s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000894s | 0.000915s | 0.000897s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000900s | 0.000913s | 0.000894s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000888s | 0.000930s | 0.000902s | byte equality observed |
| mp_map_insert.test | 10 | 0.000881s | 0.000906s | 0.000902s | byte equality observed |
| mp_map_keys.test | 10 | 0.000892s | 0.000896s | 0.000909s | byte equality observed |
| mp_map_replace.test | 10 | 0.000907s | 0.000911s | 0.000906s | byte equality observed |
| mp_map_update.test | 10 | 0.000901s | 0.000903s | 0.000919s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000882s | 0.000910s | 0.000909s | byte equality observed |
| mp_max.test | 10 | 0.000897s | 0.000911s | 0.000891s | byte equality observed |
| mp_max_element.test | 10 | 0.000897s | 0.000904s | 0.000905s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000408s | 0.000407s | 0.000889s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000888s | 0.000896s | 0.000910s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000404s | 0.000406s | 0.000870s | byte equality observed |
| mp_min.test | 10 | 0.000894s | 0.000908s | 0.000902s | byte equality observed |
| mp_min_element.test | 10 | 0.000902s | 0.000939s | 0.000880s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000408s | 0.000415s | 0.000884s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000918s | 0.000930s | 0.000897s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000410s | 0.000413s | 0.000885s | byte equality observed |
| mp_none_of.test | 10 | 0.000918s | 0.000890s | 0.000885s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000900s | 0.000900s | 0.000891s | byte equality observed |
| mp_not_fn.test | 10 | 0.000906s | 0.000888s | 0.000893s | byte equality observed |
| mp_nth_element.test | 10 | 0.000902s | 0.000882s | 0.000884s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000909s | 0.000887s | 0.000896s | byte equality observed |
| mp_or.test | 10 | 0.000909s | 0.000889s | 0.000871s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000904s | 0.000907s | 0.000890s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000907s | 0.000903s | 0.000898s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000921s | 0.000926s | 0.000888s | byte equality observed |
| mp_partition.test | 10 | 0.000894s | 0.000901s | 0.000902s | byte equality observed |
| mp_partition_q.test | 10 | 0.000887s | 0.000930s | 0.000882s | byte equality observed |
| mp_plus.test | 10 | 0.000896s | 0.000917s | 0.000894s | byte equality observed |
| mp_pop_back.test | 10 | 0.000933s | 0.000929s | 0.000883s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000412s | 0.000410s | 0.000869s | byte equality observed |
| mp_pop_front.test | 10 | 0.000915s | 0.000925s | 0.000897s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000421s | 0.000412s | 0.000854s | byte equality observed |
| mp_power_set.test | 10 | 0.000914s | 0.000905s | 0.000895s | byte equality observed |
| mp_product.test | 10 | 0.000909s | 0.000909s | 0.000931s | byte equality observed |
| mp_push_back.test | 10 | 0.000911s | 0.000907s | 0.000886s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000420s | 0.000407s | 0.000878s | byte equality observed |
| mp_push_front.test | 10 | 0.000921s | 0.000919s | 0.000900s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000414s | 0.000416s | 0.000880s | byte equality observed |
| mp_quote.test | 10 | 0.000889s | 0.000893s | 0.000879s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000899s | 0.000882s | 0.000885s | byte equality observed |
| mp_remove.test | 10 | 0.000914s | 0.000887s | 0.000912s | byte equality observed |
| mp_remove_if.test | 10 | 0.000905s | 0.000900s | 0.000896s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000896s | 0.000892s | 0.000888s | byte equality observed |
| mp_rename.test | 10 | 0.000915s | 0.000932s | 0.000879s | byte equality observed |
| mp_rename_2.test | 10 | 0.000414s | 0.000414s | 0.000871s | byte equality observed |
| mp_rename_v.test | 10 | 0.000418s | 0.000414s | 0.000867s | byte equality observed |
| mp_repeat.test | 10 | 0.000932s | 0.000937s | 0.000889s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000414s | 0.000407s | 0.000893s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000892s | 0.000930s | 0.000893s | byte equality observed |
| mp_replace.test | 10 | 0.000897s | 0.000917s | 0.000923s | byte equality observed |
| mp_replace_at.test | 10 | 0.000900s | 0.000916s | 0.000912s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000897s | 0.000931s | 0.000915s | byte equality observed |
| mp_replace_front.test | 10 | 0.000913s | 0.000904s | 0.000910s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000417s | 0.000421s | 0.000878s | byte equality observed |
| mp_replace_if.test | 10 | 0.000903s | 0.000924s | 0.000901s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000909s | 0.000896s | 0.000887s | byte equality observed |
| mp_replace_second.test | 10 | 0.000917s | 0.000901s | 0.000902s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000419s | 0.000424s | 0.000900s | byte equality observed |
| mp_replace_third.test | 10 | 0.000906s | 0.000927s | 0.000911s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000412s | 0.000421s | 0.000871s | byte equality observed |
| mp_reverse.test | 10 | 0.000932s | 0.000939s | 0.000896s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000914s | 0.000906s | 0.000904s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000887s | 0.000891s | 0.000887s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000890s | 0.000941s | 0.000884s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000884s | 0.000913s | 0.000871s | byte equality observed |
| mp_same.test | 10 | 0.000904s | 0.000903s | 0.000866s | byte equality observed |
| mp_second.test | 10 | 0.000893s | 0.000918s | 0.000889s | byte equality observed |
| mp_second_2.test | 10 | 0.000414s | 0.000412s | 0.000856s | byte equality observed |
| mp_set_contains.test | 10 | 0.000892s | 0.000916s | 0.000881s | byte equality observed |
| mp_set_difference.test | 10 | 0.000902s | 0.000893s | 0.000874s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000903s | 0.000897s | 0.000869s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000898s | 0.000913s | 0.000871s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000892s | 0.000899s | 0.000863s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000905s | 0.000944s | 0.000865s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000925s | 0.000919s | 0.000881s | byte equality observed |
| mp_set_union.test | 10 | 0.000898s | 0.000937s | 0.000873s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000902s | 0.000923s | 0.000879s | byte equality observed |
| mp_similar.test | 10 | 0.000887s | 0.000900s | 0.000877s | byte equality observed |
| mp_size.test | 10 | 0.000914s | 0.000912s | 0.000878s | byte equality observed |
| mp_size_2.test | 10 | 0.000417s | 0.000415s | 0.000869s | byte equality observed |
| mp_slice.test | 10 | 0.000938s | 0.000922s | 0.000883s | byte equality observed |
| mp_slice_2.test | 10 | 0.000410s | 0.000424s | 0.000858s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000934s | 0.000932s | 0.000881s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000927s | 0.000933s | 0.000877s | byte equality observed |
| mp_sort.test | 10 | 0.000905s | 0.000926s | 0.000871s | byte equality observed |
| mp_sort_q.test | 10 | 0.000911s | 0.000894s | 0.000863s | byte equality observed |
| mp_split.test | 10 | 0.000936s | 0.000887s | 0.000904s | byte equality observed |
| mp_starts_with.test | 10 | 0.000900s | 0.000894s | 0.000896s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000904s | 0.000898s | 0.000871s | byte equality observed |
| mp_take.test | 10 | 0.000914s | 0.000914s | 0.000869s | byte equality observed |
| mp_take_2.test | 10 | 0.000422s | 0.000402s | 0.000866s | byte equality observed |
| mp_third.test | 10 | 0.000922s | 0.000909s | 0.000876s | byte equality observed |
| mp_third_2.test | 10 | 0.000413s | 0.000409s | 0.000870s | byte equality observed |
| mp_transform.test | 10 | 0.000911s | 0.000942s | 0.000888s | byte equality observed |
| mp_transform_2.test | 10 | 0.000891s | 0.000873s | 0.000852s | byte equality observed |
| mp_transform_front.test | 10 | 0.000920s | 0.000915s | 0.000887s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000412s | 0.000406s | 0.000866s | byte equality observed |
| mp_transform_if.test | 10 | 0.000906s | 0.000893s | 0.000876s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000918s | 0.000884s | 0.000890s | byte equality observed |
| mp_transform_q.test | 10 | 0.000932s | 0.000915s | 0.000887s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000905s | 0.000893s | 0.000890s | byte equality observed |
| mp_transform_second.test | 10 | 0.000932s | 0.000929s | 0.000901s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000420s | 0.000405s | 0.000872s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000929s | 0.000899s | 0.000903s | byte equality observed |
| mp_transform_third.test | 10 | 0.000910s | 0.000927s | 0.000900s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000423s | 0.000418s | 0.000868s | byte equality observed |
| mp_unique.test | 10 | 0.000919s | 0.000933s | 0.000892s | byte equality observed |
| mp_unique_if.test | 10 | 0.000938s | 0.000911s | 0.000910s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000929s | 0.000930s | 0.000888s | byte equality observed |
| mp_valid.test | 10 | 0.000902s | 0.000891s | 0.000889s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000913s | 0.000920s | 0.000916s | byte equality observed |
| mp_value.test | 10 | 0.000425s | 0.000414s | 0.000884s | byte equality observed |
| mp_with_index.test | 10 | 0.001320s | 0.001284s | 0.001202s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000415s | 0.000412s | 0.000872s | byte equality observed |
| mpl.test | 10 | 0.000921s | 0.000910s | 0.000889s | byte equality observed |
| mpl_list.test | 10 | 0.000913s | 0.000921s | 0.000876s | byte equality observed |
| mpl_tuple.test | 10 | 0.000925s | 0.000904s | 0.000906s | byte equality observed |
| mpl_version.test | 10 | 0.000908s | 0.000932s | 0.000893s | byte equality observed |
| set_version.test | 10 | 0.000899s | 0.000919s | 0.000916s | byte equality observed |
| tuple_apply.test | 10 | 0.000921s | 0.000905s | 0.000916s | byte equality observed |
| tuple_for_each.test | 10 | 0.000906s | 0.000913s | 0.000886s | byte equality observed |
| tuple_transform.test | 10 | 0.000898s | 0.000924s | 0.000905s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000921s | 0.000925s | 0.000899s | byte equality observed |
| tuple_version.test | 10 | 0.000889s | 0.000913s | 0.000883s | byte equality observed |
| utility_version.test | 10 | 0.000907s | 0.000894s | 0.000891s | byte equality observed |
| version.test | 10 | 0.000917s | 0.000881s | 0.000871s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43624536445).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
