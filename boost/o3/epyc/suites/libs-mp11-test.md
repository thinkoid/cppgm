# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.035517 | 0.072119 | 0.132320 | — | — | — |
| complex_h.test | COMPILE | 0.153658 | 0.319255 | 0.504725 | — | — | — |
| mp_size.test | RUN | 0.177861 | 0.940701 | 0.575132 | 0.001479 | 0.001888 | 0.001795 |
| mp_size_2.test | RUN | 0.015892 | 0.035383 | 0.055350 | 0.000763 | 0.000821 | 0.001710 |
| mp_empty.test | RUN | 0.169344 | 0.631656 | 0.609588 | 0.001622 | 0.002033 | 0.001594 |
| mp_empty_2.test | RUN | 0.015392 | 0.040059 | 0.061542 | 0.000550 | 0.000831 | 0.001408 |
| mp_assign.test | RUN | 0.194653 | 1.296272 | 0.787793 | 0.001347 | 0.001636 | 0.001735 |
| mp_assign_2.test | RUN | 0.016501 | 0.037895 | 0.051772 | 0.000790 | 0.000751 | 0.001736 |
| mp_clear.test | RUN | 0.165670 | 0.609552 | 0.537451 | 0.001795 | 0.001887 | 0.001797 |
| mp_clear_2.test | RUN | 0.015741 | 0.039310 | 0.062458 | 0.000605 | 0.000852 | 0.002023 |
| mp_front.test | RUN | 0.177236 | 0.871060 | 0.685178 | 0.001637 | 0.001783 | 0.002102 |
| mp_front_2.test | RUN | 0.014207 | 0.038152 | 0.063051 | 0.000623 | 0.000838 | 0.001915 |
| mp_pop_front.test | RUN | 0.183723 | 0.931477 | 0.664791 | 0.001597 | 0.001727 | 0.001520 |
| mp_pop_front_2.test | RUN | 0.014923 | 0.038055 | 0.055000 | 0.000648 | 0.000793 | 0.001777 |
| mp_second.test | RUN | 0.173035 | 0.599625 | 0.619212 | 0.001522 | 0.001810 | 0.001686 |
| mp_second_2.test | RUN | 0.015413 | 0.037625 | 0.066482 | 0.000676 | 0.000627 | 0.001790 |
| mp_third.test | RUN | 0.168658 | 0.518913 | 0.608630 | 0.001556 | 0.001809 | 0.001859 |
| mp_third_2.test | RUN | 0.015973 | 0.038641 | 0.054272 | 0.000660 | 0.000830 | 0.001423 |
| mp_push_front.test | RUN | 0.224819 | 1.981478 | 0.969434 | 0.001547 | 0.002024 | 0.001665 |
| mp_push_front_2.test | RUN | 0.014120 | 0.037754 | 0.055010 | 0.000584 | 0.000601 | 0.001615 |
| mp_push_back.test | RUN | 0.218687 | 1.992738 | 1.008359 | 0.001611 | 0.001832 | 0.001525 |
| mp_push_back_2.test | RUN | 0.016430 | 0.051282 | 0.058998 | 0.000668 | 0.000807 | 0.001714 |
| mp_rename.test | RUN | 0.217959 | 1.788201 | 0.898347 | 0.001830 | 0.001620 | 0.001622 |
| mp_rename_2.test | RUN | 0.015426 | 0.038188 | 0.058032 | 0.000819 | 0.000811 | 0.001779 |
| mp_append.test | RUN | 0.224503 | 2.044440 | 0.964458 | 0.001838 | 0.001356 | 0.001743 |
| mp_append_2.test | RUN | 0.454756 | 4.545377 | 1.257437 | 0.001875 | 0.001808 | 0.001409 |
| mp_append_3.test | RUN | 0.016813 | 0.036757 | 0.047445 | 0.000755 | 0.000662 | 0.001420 |
| mp_append_sf.test | RUN | 0.174229 | 0.495009 | 0.571651 | 0.001675 | 0.001912 | 0.001763 |
| mp_replace_front.test | RUN | 0.208264 | 1.450333 | 0.793686 | 0.001561 | 0.001749 | 0.001641 |
| mp_replace_front_2.test | RUN | 0.016398 | 0.037490 | 0.058951 | 0.000630 | 0.000767 | 0.001483 |
| mp_replace_second.test | RUN | 0.200607 | 0.947652 | 0.782973 | 0.001592 | 0.001730 | 0.001807 |
| mp_replace_second_2.test | RUN | 0.015859 | 0.039589 | 0.050371 | 0.000604 | 0.000840 | 0.001423 |
| mp_replace_third.test | RUN | 0.189453 | 0.785122 | 0.681672 | 0.001869 | 0.001550 | 0.001828 |
| mp_replace_third_2.test | RUN | 0.016085 | 0.032759 | 0.053060 | 0.000811 | 0.000667 | 0.001672 |
| mp_apply_q.test | RUN | 0.215393 | 1.791236 | 0.862594 | 0.001442 | 0.001884 | 0.001357 |
| mp_apply_q_sf.test | RUN | 0.169942 | 0.527939 | 0.581241 | 0.001943 | 0.001789 | 0.001646 |
| mp_is_list.test | RUN | 0.175165 | 0.619816 | 0.581558 | 0.001599 | 0.001780 | 0.001694 |
| mp_list_c.test | RUN | 0.182398 | 0.750475 | 0.639699 | 0.001698 | 0.001835 | 0.001670 |
| mp_transform_front.test | RUN | 0.201675 | 1.433691 | 0.776988 | 0.001475 | 0.001848 | 0.001760 |
| mp_transform_front_2.test | RUN | 0.016084 | 0.039904 | 0.053342 | 0.000753 | 0.000869 | 0.001462 |
| mp_transform_second.test | RUN | 0.196524 | 1.232124 | 0.737205 | 0.001639 | 0.001684 | 0.001451 |
| mp_transform_second_2.test | RUN | 0.017117 | 0.039676 | 0.050949 | 0.000745 | 0.000811 | 0.001588 |
| mp_transform_third.test | RUN | 0.186205 | 0.966059 | 0.610958 | 0.001597 | 0.001890 | 0.001676 |
| mp_transform_third_2.test | RUN | 0.016652 | 0.035938 | 0.059309 | 0.000604 | 0.000810 | 0.001676 |
| mp_list_v.test | RUN | 0.016739 | 0.035716 | 0.053346 | 0.000584 | 0.000810 | 0.001722 |
| mp_rename_v.test | RUN | 0.015908 | 0.036004 | 0.051957 | 0.000654 | 0.000827 | 0.001530 |
| mp_is_value_list.test | RUN | 0.168909 | 0.399035 | 0.557371 | 0.001882 | 0.001730 | 0.001676 |
| mp_transform.test | RUN | 0.364276 | 2.993933 | 1.605145 | 0.001911 | 0.001960 | 0.001648 |
| mp_transform_2.test | RUN | 0.160251 | 0.347901 | 0.502652 | 0.001642 | 0.001922 | 0.001256 |
| mp_transform_q.test | RUN | 0.359144 | 2.916102 | 1.508268 | 0.001570 | 0.001834 | 0.001678 |
| mp_transform_q_2.test | RUN | 0.417384 | 0.933025 | 1.986952 | 0.001862 | 0.001824 | 0.001580 |
| mp_transform_sf.test | RUN | 0.181510 | 0.549739 | 0.586879 | 0.001791 | 0.001902 | 0.001783 |
| mp_transform_if.test | RUN | 0.220164 | 1.469943 | 0.863134 | 0.001795 | 0.001965 | 0.001685 |
| mp_transform_if_q.test | RUN | 0.217119 | 1.446363 | 0.878500 | 0.001576 | 0.001733 | 0.001677 |
| mp_filter.test | RUN | 0.202681 | 0.870544 | 0.689524 | 0.001859 | 0.001756 | 0.001511 |
| mp_fill.test | RUN | 0.191937 | 0.658254 | 0.599436 | 0.001379 | 0.001828 | 0.001768 |
| mp_fill_2.test | RUN | 0.029368 | 0.061163 | 0.085633 | 0.000761 | 0.000802 | 0.001744 |
| mp_count.test | RUN | 0.369424 | 1.609149 | 0.998235 | 0.001786 | 0.001744 | 0.001697 |
| mp_count_if.test | RUN | 0.373699 | 1.604853 | 1.109699 | 0.001563 | 0.001969 | 0.001652 |
| mp_count_if_q.test | RUN | 0.199677 | 1.038370 | 0.628573 | 0.001636 | 0.001625 | 0.001816 |
| mp_contains.test | RUN | 0.193364 | 0.609005 | 0.586236 | 0.001530 | 0.001888 | 0.001488 |
| mp_starts_with.test | RUN | 0.184879 | 0.619545 | 0.627152 | 0.001883 | 0.001911 | 0.001623 |
| mp_starts_with_sf.test | RUN | 0.183111 | 0.543577 | 0.601161 | 0.001574 | 0.001879 | 0.001784 |
| mp_repeat.test | RUN | 0.257261 | 2.612234 | 1.059705 | 0.001786 | 0.001964 | 0.001573 |
| mp_repeat_2.test | RUN | 0.028398 | 0.060759 | 0.102291 | 0.000791 | 0.000744 | 0.001726 |
| mp_repeat_3.test | RUN | 0.227255 | 0.355639 | 0.550877 | 0.001808 | 0.001996 | 0.001735 |
| mp_product.test | RUN | 0.202544 | 1.633568 | 0.805628 | 0.001639 | 0.002018 | 0.001689 |
| mp_drop.test | RUN | 0.227075 | 1.981726 | 0.853605 | 0.001496 | 0.001881 | 0.001703 |
| mp_drop_2.test | RUN | 0.029421 | 0.059091 | 0.098269 | 0.000632 | 0.000807 | 0.001808 |
| mp_iota.test | RUN | 0.206863 | 1.679314 | 0.790964 | 0.001771 | 0.001798 | 0.001726 |
| mp_iota_2.test | RUN | 0.217300 | 2.013088 | 0.942567 | 0.001413 | 0.001964 | 0.001617 |
| mp_at.test | RUN | 0.181988 | 0.862867 | 0.681390 | 0.001391 | 0.001876 | 0.001726 |
| mp_at_2.test | RUN | 0.027690 | 0.058269 | 0.096382 | 0.000612 | 0.000642 | 0.001600 |
| mp_at_sf.test | RUN | 0.174820 | 0.543430 | 0.589222 | 0.001650 | 0.001718 | 0.001729 |
| mp_take.test | RUN | 0.282692 | 2.554156 | 1.109148 | 0.001955 | 0.001769 | 0.001839 |
| mp_take_2.test | RUN | 0.027801 | 0.056516 | 0.079979 | 0.000739 | 0.000812 | 0.001577 |
| mp_slice.test | RUN | 0.332710 | 2.591306 | 1.397653 | 0.001277 | 0.001993 | 0.001444 |
| mp_slice_2.test | RUN | 0.029593 | 0.059587 | 0.099311 | 0.000729 | 0.000766 | 0.001788 |
| mp_replace.test | RUN | 0.225046 | 1.324748 | 0.881745 | 0.001749 | 0.001708 | 0.001698 |
| mp_replace_if.test | RUN | 0.209739 | 1.174728 | 0.858174 | 0.001996 | 0.001575 | 0.001668 |
| mp_replace_if_q.test | RUN | 0.220467 | 1.162649 | 0.829514 | 0.001823 | 0.001908 | 0.001821 |
| mp_copy_if.test | RUN | 0.215769 | 1.638159 | 0.788562 | 0.001748 | 0.001557 | 0.001646 |
| mp_copy_if_q.test | RUN | 0.215917 | 1.646095 | 0.823119 | 0.001853 | 0.001668 | 0.001674 |
| mp_remove.test | RUN | 0.218998 | 1.105847 | 0.839743 | 0.001747 | 0.002037 | 0.001688 |
| mp_remove_if.test | RUN | 0.223710 | 1.763788 | 0.838517 | 0.001772 | 0.001860 | 0.001658 |
| mp_remove_if_q.test | RUN | 0.219891 | 1.735742 | 0.839949 | 0.001606 | 0.001590 | 0.001921 |
| mp_partition.test | RUN | 0.218868 | 1.630102 | 0.912983 | 0.001773 | 0.001720 | 0.001770 |
| mp_partition_q.test | RUN | 0.218666 | 1.625561 | 0.927165 | 0.001615 | 0.001927 | 0.001790 |
| mp_sort.test | RUN | 0.199650 | 1.168495 | 0.757927 | 0.001766 | 0.001936 | 0.001932 |
| mp_sort_q.test | RUN | 0.198923 | 1.178423 | 0.763623 | 0.001547 | 0.001842 | 0.001769 |
| mp_find.test | RUN | 0.200189 | 1.278946 | 0.735464 | 0.001681 | 0.001966 | 0.001608 |
| mp_find_if.test | RUN | 0.196067 | 1.184697 | 0.694906 | 0.001763 | 0.001922 | 0.001484 |
| mp_find_if_q.test | RUN | 0.211181 | 1.297677 | 0.816386 | 0.001736 | 0.001818 | 0.001904 |
| mp_reverse.test | RUN | 0.393889 | 3.352625 | 1.529627 | 0.001734 | 0.001966 | 0.001924 |
| mp_fold.test | RUN | 0.671426 | 2.677521 | 3.887275 | 0.001712 | 0.001982 | 0.001860 |
| mp_fold_q.test | RUN | 0.194887 | 1.130672 | 0.794840 | 0.001692 | 0.002006 | 0.001682 |
| mp_fold_q_sf.test | RUN | 0.185531 | 0.531167 | 0.616916 | 0.001913 | 0.001957 | 0.001834 |
| mp_reverse_fold.test | RUN | 0.331442 | 2.523431 | 1.081508 | 0.001769 | 0.001732 | 0.001524 |
| mp_reverse_fold_q.test | RUN | 0.206910 | 1.414410 | 0.805882 | 0.001826 | 0.001873 | 0.001776 |
| mp_unique.test | RUN | 0.200797 | 1.266318 | 0.788948 | 0.001433 | 0.001866 | 0.001859 |
| mp_unique_if.test | RUN | 0.372137 | 2.615867 | 1.206438 | 0.001550 | 0.001746 | 0.001737 |
| mp_unique_if_q.test | RUN | 0.323948 | 2.572254 | 1.032054 | 0.001542 | 0.001798 | 0.001738 |
| mp_all_of.test | RUN | 0.512263 | 1.493793 | 1.343496 | 0.002208 | 0.001796 | 0.001886 |
| mp_all_of_q.test | RUN | 0.200188 | 0.631721 | 0.603391 | 0.001618 | 0.001874 | 0.001922 |
| mp_any_of.test | RUN | 0.503144 | 1.510604 | 1.338275 | 0.001494 | 0.001910 | 0.001453 |
| mp_any_of_q.test | RUN | 0.179232 | 0.632937 | 0.597411 | 0.001778 | 0.001873 | 0.001880 |
| mp_none_of.test | RUN | 0.473272 | 1.522927 | 1.273596 | 0.001599 | 0.001784 | 0.001704 |
| mp_none_of_q.test | RUN | 0.178853 | 0.645415 | 0.607295 | 0.001784 | 0.001738 | 0.001681 |
| mp_replace_at.test | RUN | 0.206586 | 1.265742 | 0.918656 | 0.001814 | 0.001621 | 0.001813 |
| mp_replace_at_c.test | RUN | 0.217645 | 1.271029 | 0.891347 | 0.001713 | 0.001743 | 0.001605 |
| mp_for_each.test | RUN | 0.208583 | 0.808450 | 1.044922 | 0.001564 | 0.001614 | 0.001837 |
| mp_insert.test | RUN | 0.302363 | 2.488544 | 1.256117 | 0.001702 | 0.001849 | 0.001773 |
| mp_insert_2.test | RUN | 0.028420 | 0.055355 | 0.094506 | 0.000660 | 0.000661 | 0.001700 |
| mp_erase.test | RUN | 0.347020 | 2.661816 | 1.536064 | 0.001682 | 0.001928 | 0.001662 |
| mp_erase_2.test | RUN | 0.028179 | 0.060591 | 0.095874 | 0.000668 | 0.000874 | 0.001720 |
| mp_with_index.test | RUN | 0.441492 | 5.541558 | 3.337241 | 0.002216 | 0.002216 | 0.003127 |
| mp_with_index_cx.test | RUN | 0.003627 | 0.019549 | 0.027232 | 0.000781 | 0.000833 | 0.001506 |
| mp_from_sequence.test | RUN | 0.204755 | 1.419678 | 0.855024 | 0.001828 | 0.001892 | 0.001782 |
| mp_from_sequence_2.test | RUN | 0.218421 | 1.710854 | 0.932642 | 0.001589 | 0.001909 | 0.001607 |
| mp_from_sequence_3.test | RUN | 0.194030 | 0.749027 | 0.677392 | 0.001558 | 0.001998 | 0.001690 |
| mp_min_element.test | RUN | 0.182146 | 0.682783 | 0.600758 | 0.001629 | 0.001485 | 0.001806 |
| mp_min_element_2.test | RUN | 0.028144 | 0.054779 | 0.099901 | 0.000736 | 0.000864 | 0.001783 |
| mp_min_element_q.test | RUN | 0.180593 | 0.673794 | 0.613239 | 0.001648 | 0.001739 | 0.001644 |
| mp_min_element_q_2.test | RUN | 0.028932 | 0.061494 | 0.100358 | 0.000700 | 0.000792 | 0.001554 |
| mp_max_element.test | RUN | 0.178274 | 0.704218 | 0.623475 | 0.001599 | 0.001972 | 0.001529 |
| mp_max_element_2.test | RUN | 0.028453 | 0.058129 | 0.088803 | 0.000745 | 0.000737 | 0.001762 |
| mp_max_element_q.test | RUN | 0.182972 | 0.685628 | 0.609241 | 0.001774 | 0.001982 | 0.001738 |
| mp_max_element_q_2.test | RUN | 0.027315 | 0.059025 | 0.101433 | 0.000601 | 0.000785 | 0.001473 |
| mp_nth_element.test | RUN | 0.200094 | 0.957528 | 0.798004 | 0.001601 | 0.001778 | 0.001770 |
| mp_nth_element_q.test | RUN | 0.200040 | 0.957825 | 0.722051 | 0.001652 | 0.001887 | 0.001440 |
| mp_back.test | RUN | 0.194528 | 0.810748 | 0.718355 | 0.001526 | 0.001895 | 0.001573 |
| mp_back_2.test | RUN | 0.027096 | 0.059227 | 0.098433 | 0.000596 | 0.000718 | 0.001721 |
| mp_pop_back.test | RUN | 0.507862 | 5.165588 | 1.432119 | 0.001620 | 0.001476 | 0.001333 |
| mp_pop_back_2.test | RUN | 0.028098 | 0.054918 | 0.080507 | 0.000799 | 0.000752 | 0.001692 |
| mp_flatten.test | RUN | 0.234577 | 1.830209 | 1.017108 | 0.001651 | 0.002006 | 0.001365 |
| mp_rotate_left.test | RUN | 0.232875 | 1.974687 | 0.989234 | 0.001597 | 0.001984 | 0.001430 |
| mp_rotate_right.test | RUN | 0.230723 | 1.976934 | 0.995326 | 0.001632 | 0.001682 | 0.001746 |
| mp_power_set.test | RUN | 0.221775 | 1.912419 | 0.983847 | 0.001787 | 0.001880 | 0.001742 |
| mp_partial_sum.test | RUN | 0.289051 | 2.549600 | 1.105914 | 0.001928 | 0.001510 | 0.001658 |
| mp_iterate.test | RUN | 0.205898 | 0.774745 | 0.808038 | 0.001528 | 0.001796 | 0.001766 |
| mp_pairwise_fold.test | RUN | 0.231085 | 1.715494 | 0.994318 | 0.001599 | 0.001974 | 0.001660 |
| mp_pairwise_fold_q.test | RUN | 0.178129 | 0.531350 | 0.567705 | 0.001895 | 0.001814 | 0.001660 |
| mp_sliding_fold.test | RUN | 0.421343 | 3.352553 | 1.807479 | 0.001789 | 0.001521 | 0.001655 |
| mp_sliding_fold_q.test | RUN | 0.418776 | 3.350504 | 1.810408 | 0.001852 | 0.001881 | 0.001739 |
| mp_intersperse.test | RUN | 0.209718 | 1.248879 | 0.892558 | 0.001759 | 0.001942 | 0.001822 |
| mp_split.test | RUN | 0.293508 | 2.406018 | 1.214817 | 0.001796 | 0.001853 | 0.001737 |
| mp_join.test | RUN | 0.235559 | 1.995723 | 1.063783 | 0.001546 | 0.001688 | 0.001771 |
| integral.test | RUN | 0.185921 | 0.909515 | 0.632427 | 0.001438 | 0.001983 | 0.001824 |
| mp_value.test | RUN | 0.011765 | 0.031443 | 0.048578 | 0.000604 | 0.000696 | 0.001682 |
| mp_identity.test | RUN | 0.177784 | 0.838767 | 0.630610 | 0.001673 | 0.001977 | 0.001752 |
| mp_inherit.test | RUN | 0.168844 | 0.592986 | 0.599011 | 0.001725 | 0.001619 | 0.001753 |
| mp_if.test | RUN | 0.171067 | 0.695396 | 0.585734 | 0.001624 | 0.001684 | 0.001730 |
| mp_if_sf.test | RUN | 0.163320 | 0.504765 | 0.531534 | 0.001827 | 0.001791 | 0.001664 |
| mp_eval_if.test | RUN | 0.172579 | 0.729763 | 0.600602 | 0.001667 | 0.001527 | 0.001812 |
| mp_eval_if_sf.test | RUN | 0.167577 | 0.529926 | 0.546196 | 0.001521 | 0.001838 | 0.001874 |
| mp_valid.test | RUN | 0.167176 | 0.519212 | 0.555070 | 0.001546 | 0.001438 | 0.001800 |
| mp_defer.test | RUN | 0.180937 | 0.869081 | 0.662055 | 0.001782 | 0.001936 | 0.001824 |
| mp_quote.test | RUN | 0.190337 | 0.923749 | 0.674185 | 0.001658 | 0.001930 | 0.001820 |
| mp_invoke_q.test | RUN | 0.195618 | 1.170278 | 0.750499 | 0.001803 | 0.001897 | 0.001847 |
| mp_invoke_q_sf.test | RUN | 0.166702 | 0.540858 | 0.549949 | 0.001530 | 0.002051 | 0.001643 |
| mp_quote_trait.test | RUN | 0.187997 | 1.027273 | 0.671429 | 0.001647 | 0.001846 | 0.001885 |
| mp_cond.test | RUN | 0.177909 | 0.592782 | 0.576364 | 0.001721 | 0.001581 | 0.001784 |
| mp_cond_sf.test | RUN | 0.167457 | 0.518707 | 0.569916 | 0.001812 | 0.001823 | 0.001535 |
| mp_not_fn.test | RUN | 0.164106 | 0.532244 | 0.515673 | 0.001623 | 0.001929 | 0.001540 |
| mp_eval_if_not.test | RUN | 0.175951 | 0.722076 | 0.632159 | 0.001774 | 0.001905 | 0.001434 |
| mp_eval_or.test | RUN | 0.169989 | 0.391810 | 0.575362 | 0.001648 | 0.001907 | 0.001830 |
| mp_compose.test | RUN | 0.184518 | 1.202424 | 0.765690 | 0.001852 | 0.001821 | 0.001713 |
| mp_valid_and_true.test | RUN | 0.174120 | 0.618327 | 0.600373 | 0.001498 | 0.002002 | 0.001697 |
| mp_compose_sf.test | COMPILE | 0.042174 | 0.079241 | 0.129557 | — | — | — |
| integer_sequence.test | RUN | 0.202648 | 1.180008 | 0.805297 | 0.001547 | 0.001685 | 0.001614 |
| tuple_for_each.test | RUN | 0.171779 | 0.459683 | 0.608838 | 0.001526 | 0.001746 | 0.001769 |
| tuple_for_each_cx.test | COMPILE | 0.031430 | 0.070327 | 0.110652 | — | — | — |
| tuple_apply.test | RUN | 0.175206 | 0.458825 | 0.581901 | 0.001923 | 0.001810 | 0.001646 |
| tuple_apply_cx.test | COMPILE | 0.045618 | 0.097558 | 0.152962 | — | — | — |
| construct_from_tuple.test | RUN | 0.183843 | 0.490827 | 0.595142 | 0.001878 | 0.001690 | 0.001660 |
| construct_from_tuple_cx.test | COMPILE | 0.048839 | 0.097275 | 0.151240 | — | — | — |
| tuple_transform.test | RUN | 0.282687 | 0.983745 | 1.185506 | 0.001805 | 0.001980 | 0.001402 |
| tuple_transform_2.test | RUN | 0.253210 | 0.727413 | 1.031563 | 0.001738 | 0.001943 | 0.001724 |
| tuple_transform_cx.test | COMPILE | 0.040513 | 0.094101 | 0.149002 | — | — | — |
| mp_set_contains.test | RUN | 0.184566 | 0.635758 | 0.612004 | 0.001810 | 0.001610 | 0.001670 |
| mp_set_push_back.test | RUN | 0.232117 | 1.898432 | 1.016720 | 0.001854 | 0.001963 | 0.001716 |
| mp_set_push_front.test | RUN | 0.286502 | 2.284766 | 1.133078 | 0.001644 | 0.001845 | 0.001570 |
| mp_is_set.test | RUN | 0.183743 | 0.638456 | 0.622152 | 0.001801 | 0.001926 | 0.001763 |
| mp_set_union.test | RUN | 0.226229 | 1.633782 | 0.926799 | 0.001665 | 0.001950 | 0.001556 |
| mp_set_union_sf.test | RUN | 0.175017 | 0.506290 | 0.579538 | 0.001648 | 0.001922 | 0.001710 |
| mp_set_difference.test | RUN | 0.207861 | 1.224523 | 0.806157 | 0.001463 | 0.001910 | 0.001427 |
| mp_set_difference_sf.test | RUN | 0.176410 | 0.506654 | 0.570271 | 0.001828 | 0.001514 | 0.001650 |
| mp_set_intersection.test | RUN | 0.202613 | 1.246325 | 0.791163 | 0.001861 | 0.001950 | 0.001824 |
| mp_set_intersection_sf.test | RUN | 0.174129 | 0.506285 | 0.555864 | 0.001593 | 0.001792 | 0.001450 |
| mp_all.test | RUN | 0.176334 | 0.612627 | 0.602700 | 0.001803 | 0.001729 | 0.001464 |
| mp_all_2.test | RUN | 0.496200 | 1.346085 | 1.331666 | 0.001796 | 0.002103 | 0.001741 |
| mp_and.test | RUN | 0.174309 | 0.625287 | 0.605729 | 0.001819 | 0.001517 | 0.001864 |
| mp_any.test | RUN | 0.181642 | 0.583212 | 0.577085 | 0.001610 | 0.001789 | 0.001900 |
| mp_any_2.test | RUN | 0.487632 | 1.414097 | 1.311646 | 0.001402 | 0.001778 | 0.001447 |
| mp_or.test | RUN | 0.182358 | 0.646202 | 0.566940 | 0.001732 | 0.001548 | 0.001794 |
| mp_same.test | RUN | 0.344045 | 1.100636 | 0.892299 | 0.001607 | 0.001590 | 0.001539 |
| mp_plus.test | RUN | 0.181512 | 0.717793 | 0.683291 | 0.001730 | 0.001838 | 0.001716 |
| mp_less.test | RUN | 0.180147 | 0.659138 | 0.614019 | 0.001881 | 0.001726 | 0.001600 |
| mp_min.test | RUN | 0.174614 | 0.590916 | 0.617713 | 0.001848 | 0.001578 | 0.001678 |
| mp_max.test | RUN | 0.181988 | 0.658406 | 0.636168 | 0.001596 | 0.001902 | 0.001656 |
| mp_similar.test | RUN | 0.179960 | 0.644223 | 0.634797 | 0.001702 | 0.001592 | 0.001741 |
| mp_map_find.test | RUN | 0.206315 | 1.171031 | 0.804266 | 0.001772 | 0.001862 | 0.001792 |
| mp_map_find_2.test | RUN | 0.193667 | 0.473050 | 0.686605 | 0.001771 | 0.001906 | 0.001590 |
| mp_map_find_3.test | RUN | 0.190349 | 0.437204 | 0.686403 | 0.001582 | 0.001910 | 0.001538 |
| mp_map_find_4.test | RUN | 0.190666 | 0.434761 | 0.602746 | 0.001604 | 0.001590 | 0.001579 |
| mp_map_contains.test | RUN | 0.183219 | 0.641563 | 0.616893 | 0.001878 | 0.002013 | 0.001892 |
| mp_map_insert.test | RUN | 0.241422 | 2.112915 | 1.093903 | 0.001728 | 0.001739 | 0.001660 |
| mp_map_replace.test | RUN | 0.307970 | 2.396477 | 1.243351 | 0.001644 | 0.002126 | 0.001450 |
| mp_map_erase.test | RUN | 0.232185 | 1.780941 | 1.031544 | 0.001710 | 0.001854 | 0.001657 |
| mp_map_update.test | RUN | 0.209525 | 1.181298 | 0.824621 | 0.001821 | 0.002056 | 0.001429 |
| mp_map_update_q.test | RUN | 0.209131 | 1.182433 | 0.808158 | 0.001760 | 0.001837 | 0.001496 |
| mp_map_keys.test | RUN | 0.203802 | 1.044650 | 0.807090 | 0.001622 | 0.001929 | 0.001866 |
| mp_is_map.test | RUN | 0.188861 | 0.637268 | 0.667415 | 0.001632 | 0.001932 | 0.001380 |
| mp_bind.test | RUN | 0.226360 | 1.882796 | 0.951172 | 0.001886 | 0.001852 | 0.001824 |
| mp_bind_q.test | RUN | 0.202746 | 1.179098 | 0.782215 | 0.001891 | 0.001808 | 0.001308 |
| mp_bind_front.test | RUN | 0.201300 | 1.317543 | 0.728096 | 0.001660 | 0.001963 | 0.001890 |
| mp_bind_back.test | RUN | 0.202813 | 1.313905 | 0.767851 | 0.001554 | 0.001913 | 0.001862 |
| mp_lambda.test | RUN | 0.428628 | 3.876112 | 1.891204 | 0.001931 | 0.001398 | 0.001499 |
| mpl.test | RUN | 0.399746 | 1.041922 | 1.549324 | 0.001949 | 0.001960 | 0.001812 |
| mpl_list.test | RUN | 0.231521 | 0.764246 | 0.746961 | 0.001546 | 0.001934 | 0.001540 |
| mpl_tuple.test | RUN | 0.229053 | 0.777093 | 0.740424 | 0.001617 | 0.001885 | 0.001742 |
| version.test | RUN | 0.115599 | 0.282624 | 0.361610 | 0.001868 | 0.001936 | 0.001749 |
| mp11_version.test | RUN | 0.139940 | 0.338002 | 0.456898 | 0.001644 | 0.001872 | 0.001753 |
| list_version.test | RUN | 0.117367 | 0.279274 | 0.364559 | 0.001675 | 0.001427 | 0.001617 |
| algorithm_version.test | RUN | 0.133241 | 0.300700 | 0.406873 | 0.001787 | 0.001839 | 0.001835 |
| integral_version.test | RUN | 0.113036 | 0.288879 | 0.369135 | 0.001790 | 0.001802 | 0.002142 |
| utility_version.test | RUN | 0.117987 | 0.263083 | 0.394874 | 0.001778 | 0.001966 | 0.001808 |
| function_version.test | RUN | 0.122777 | 0.302592 | 0.368689 | 0.001635 | 0.001982 | 0.001770 |
| map_version.test | RUN | 0.131145 | 0.306617 | 0.402450 | 0.001823 | 0.001881 | 0.001725 |
| set_version.test | RUN | 0.123803 | 0.300794 | 0.358535 | 0.001836 | 0.001686 | 0.001608 |
| bind_version.test | RUN | 0.134239 | 0.304158 | 0.428539 | 0.001646 | 0.001970 | 0.001730 |
| integer_sequence_version.test | RUN | 0.113136 | 0.280626 | 0.366994 | 0.001532 | 0.001956 | 0.001311 |
| tuple_version.test | RUN | 0.128791 | 0.319465 | 0.377746 | 0.001490 | 0.001984 | 0.001236 |
| mpl_version.test | RUN | 0.101329 | 0.288416 | 0.359194 | 0.001462 | 0.001474 | 0.001294 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.981× | 0.959×, 1.003× | 1.008× |
| clang | 1.106×† | 1.135×, 1.077× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000997s | 0.000971s | 0.000981s | byte equality observed |
| bind_version.test | 10 | 0.001005s | 0.000949s | 0.001053s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001001s | 0.000955s | 0.001013s | byte equality observed |
| function_version.test | 10 | 0.001006s | 0.000950s | 0.000995s | byte equality observed |
| integer_sequence.test | 10 | 0.000998s | 0.000960s | 0.000993s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000998s | 0.000954s | 0.001032s | byte equality observed |
| integral.test | 10 | 0.001019s | 0.000963s | 0.001015s | byte equality observed |
| integral_version.test | 10 | 0.001029s | 0.000954s | 0.001004s | byte equality observed |
| list_version.test | 10 | 0.001022s | 0.000956s | 0.000982s | byte equality observed |
| map_version.test | 10 | 0.000995s | 0.000966s | 0.001000s | byte equality observed |
| mp11_version.test | 10 | 0.001007s | 0.000997s | 0.001010s | byte equality observed |
| mp_all.test | 10 | 0.000987s | 0.000982s | 0.001028s | byte equality observed |
| mp_all_2.test | 10 | 0.001001s | 0.000981s | 0.000985s | byte equality observed |
| mp_all_of.test | 10 | 0.001004s | 0.001012s | 0.001009s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001002s | 0.001002s | 0.001005s | byte equality observed |
| mp_and.test | 10 | 0.000999s | 0.001003s | 0.001027s | byte equality observed |
| mp_any.test | 10 | 0.000989s | 0.001015s | 0.001012s | byte equality observed |
| mp_any_2.test | 10 | 0.000984s | 0.001008s | 0.000990s | byte equality observed |
| mp_any_of.test | 10 | 0.000991s | 0.001000s | 0.001012s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000981s | 0.001026s | 0.000991s | byte equality observed |
| mp_append.test | 10 | 0.001026s | 0.001014s | 0.001004s | byte equality observed |
| mp_append_2.test | 10 | 0.001063s | 0.001024s | 0.001007s | byte equality observed |
| mp_append_3.test | 10 | 0.000477s | 0.000462s | 0.001022s | byte equality observed |
| mp_append_sf.test | 10 | 0.001021s | 0.001003s | 0.001006s | byte equality observed |
| mp_apply_q.test | 10 | 0.001020s | 0.001015s | 0.001038s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001022s | 0.001007s | 0.001030s | byte equality observed |
| mp_assign.test | 10 | 0.001007s | 0.001001s | 0.001001s | byte equality observed |
| mp_assign_2.test | 10 | 0.000467s | 0.000454s | 0.000998s | byte equality observed |
| mp_at.test | 10 | 0.001032s | 0.001002s | 0.001003s | byte equality observed |
| mp_at_2.test | 10 | 0.000465s | 0.000451s | 0.000979s | byte equality observed |
| mp_at_sf.test | 10 | 0.001032s | 0.001029s | 0.000983s | byte equality observed |
| mp_back.test | 10 | 0.001018s | 0.001044s | 0.000981s | byte equality observed |
| mp_back_2.test | 10 | 0.000472s | 0.000455s | 0.000984s | byte equality observed |
| mp_bind.test | 10 | 0.001021s | 0.001023s | 0.000996s | byte equality observed |
| mp_bind_back.test | 10 | 0.001033s | 0.001011s | 0.000991s | byte equality observed |
| mp_bind_front.test | 10 | 0.001027s | 0.000999s | 0.000991s | byte equality observed |
| mp_bind_q.test | 10 | 0.001011s | 0.000997s | 0.001022s | byte equality observed |
| mp_clear.test | 10 | 0.001019s | 0.001006s | 0.000977s | byte equality observed |
| mp_clear_2.test | 10 | 0.000464s | 0.000475s | 0.000995s | byte equality observed |
| mp_compose.test | 10 | 0.001007s | 0.001020s | 0.001012s | byte equality observed |
| mp_cond.test | 10 | 0.001034s | 0.001041s | 0.001022s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001012s | 0.001006s | 0.001016s | byte equality observed |
| mp_contains.test | 10 | 0.000984s | 0.001017s | 0.001009s | byte equality observed |
| mp_copy_if.test | 10 | 0.000984s | 0.000996s | 0.001061s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000994s | 0.001042s | 0.001024s | byte equality observed |
| mp_count.test | 10 | 0.001010s | 0.000994s | 0.001020s | byte equality observed |
| mp_count_if.test | 10 | 0.000990s | 0.001012s | 0.001004s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001020s | 0.000982s | 0.001007s | byte equality observed |
| mp_defer.test | 10 | 0.001017s | 0.000987s | 0.000988s | byte equality observed |
| mp_drop.test | 10 | 0.001032s | 0.000997s | 0.000985s | byte equality observed |
| mp_drop_2.test | 10 | 0.000470s | 0.000459s | 0.000991s | byte equality observed |
| mp_empty.test | 10 | 0.001033s | 0.001012s | 0.001006s | byte equality observed |
| mp_empty_2.test | 10 | 0.000465s | 0.000462s | 0.000995s | byte equality observed |
| mp_erase.test | 10 | 0.001032s | 0.001025s | 0.001003s | byte equality observed |
| mp_erase_2.test | 10 | 0.000464s | 0.000462s | 0.000961s | byte equality observed |
| mp_eval_if.test | 10 | 0.000992s | 0.000999s | 0.000992s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001003s | 0.000989s | 0.000991s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000999s | 0.001030s | 0.001017s | byte equality observed |
| mp_eval_or.test | 10 | 0.000991s | 0.001027s | 0.000964s | byte equality observed |
| mp_fill.test | 10 | 0.001015s | 0.001022s | 0.000984s | byte equality observed |
| mp_fill_2.test | 10 | 0.000466s | 0.000460s | 0.000988s | byte equality observed |
| mp_filter.test | 10 | 0.001007s | 0.001029s | 0.001010s | byte equality observed |
| mp_find.test | 10 | 0.001021s | 0.001033s | 0.001010s | byte equality observed |
| mp_find_if.test | 10 | 0.001021s | 0.001008s | 0.001012s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001010s | 0.001029s | 0.000996s | byte equality observed |
| mp_flatten.test | 10 | 0.001000s | 0.001002s | 0.001020s | byte equality observed |
| mp_fold.test | 10 | 0.001039s | 0.000999s | 0.000992s | byte equality observed |
| mp_fold_q.test | 10 | 0.001012s | 0.001021s | 0.001008s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001000s | 0.001046s | 0.001002s | byte equality observed |
| mp_for_each.test | 10 | 0.001014s | 0.000987s | 0.001001s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001016s | 0.001020s | 0.001033s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001014s | 0.001035s | 0.001007s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000995s | 0.001001s | 0.000998s | byte equality observed |
| mp_front.test | 10 | 0.001019s | 0.001032s | 0.001033s | byte equality observed |
| mp_front_2.test | 10 | 0.000463s | 0.000457s | 0.000981s | byte equality observed |
| mp_identity.test | 10 | 0.001017s | 0.001028s | 0.001021s | byte equality observed |
| mp_if.test | 10 | 0.001020s | 0.000985s | 0.001012s | byte equality observed |
| mp_if_sf.test | 10 | 0.001010s | 0.000979s | 0.001013s | byte equality observed |
| mp_inherit.test | 10 | 0.001018s | 0.000988s | 0.001060s | byte equality observed |
| mp_insert.test | 10 | 0.001025s | 0.001019s | 0.001018s | byte equality observed |
| mp_insert_2.test | 10 | 0.000472s | 0.000457s | 0.000991s | byte equality observed |
| mp_intersperse.test | 10 | 0.001031s | 0.000994s | 0.001032s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001014s | 0.000970s | 0.000995s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001037s | 0.000979s | 0.000997s | byte equality observed |
| mp_iota.test | 10 | 0.001004s | 0.001015s | 0.001011s | byte equality observed |
| mp_iota_2.test | 10 | 0.001024s | 0.000996s | 0.001016s | byte equality observed |
| mp_is_list.test | 10 | 0.000993s | 0.000996s | 0.001048s | byte equality observed |
| mp_is_map.test | 10 | 0.000999s | 0.000995s | 0.001010s | byte equality observed |
| mp_is_set.test | 10 | 0.000990s | 0.000995s | 0.001065s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001005s | 0.000981s | 0.001044s | byte equality observed |
| mp_iterate.test | 10 | 0.001019s | 0.000999s | 0.001036s | byte equality observed |
| mp_join.test | 10 | 0.001023s | 0.001006s | 0.001085s | byte equality observed |
| mp_lambda.test | 10 | 0.001026s | 0.001011s | 0.001064s | byte equality observed |
| mp_less.test | 10 | 0.001012s | 0.000974s | 0.001041s | byte equality observed |
| mp_list_c.test | 10 | 0.001041s | 0.001000s | 0.001006s | byte equality observed |
| mp_list_v.test | 10 | 0.000470s | 0.000467s | 0.001045s | byte equality observed |
| mp_map_contains.test | 10 | 0.001020s | 0.001025s | 0.001007s | byte equality observed |
| mp_map_erase.test | 10 | 0.001007s | 0.001010s | 0.001010s | byte equality observed |
| mp_map_find.test | 10 | 0.001001s | 0.001021s | 0.001027s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001016s | 0.001018s | 0.001050s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001029s | 0.001003s | 0.001068s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001008s | 0.001013s | 0.001017s | byte equality observed |
| mp_map_insert.test | 10 | 0.001020s | 0.001029s | 0.001038s | byte equality observed |
| mp_map_keys.test | 10 | 0.001012s | 0.000997s | 0.001010s | byte equality observed |
| mp_map_replace.test | 10 | 0.001026s | 0.001008s | 0.001009s | byte equality observed |
| mp_map_update.test | 10 | 0.001005s | 0.000993s | 0.001077s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001015s | 0.000990s | 0.001026s | byte equality observed |
| mp_max.test | 10 | 0.001032s | 0.001028s | 0.001029s | byte equality observed |
| mp_max_element.test | 10 | 0.001026s | 0.001005s | 0.001063s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000467s | 0.000449s | 0.001018s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001038s | 0.001046s | 0.000995s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000469s | 0.000464s | 0.001007s | byte equality observed |
| mp_min.test | 10 | 0.001014s | 0.000997s | 0.001032s | byte equality observed |
| mp_min_element.test | 10 | 0.001024s | 0.001037s | 0.001066s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000467s | 0.000463s | 0.001087s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001038s | 0.001030s | 0.001017s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000463s | 0.000455s | 0.001033s | byte equality observed |
| mp_none_of.test | 10 | 0.001004s | 0.001006s | 0.001054s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001013s | 0.000995s | 0.001052s | byte equality observed |
| mp_not_fn.test | 10 | 0.001036s | 0.001008s | 0.001007s | byte equality observed |
| mp_nth_element.test | 10 | 0.001025s | 0.001056s | 0.001046s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001015s | 0.001024s | 0.001016s | byte equality observed |
| mp_or.test | 10 | 0.001050s | 0.001001s | 0.001043s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001041s | 0.000994s | 0.001035s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001008s | 0.001030s | 0.001036s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001035s | 0.001002s | 0.001033s | byte equality observed |
| mp_partition.test | 10 | 0.001031s | 0.000982s | 0.001039s | byte equality observed |
| mp_partition_q.test | 10 | 0.001012s | 0.000992s | 0.001015s | byte equality observed |
| mp_plus.test | 10 | 0.000999s | 0.000989s | 0.000988s | byte equality observed |
| mp_pop_back.test | 10 | 0.001035s | 0.001023s | 0.001010s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000463s | 0.000460s | 0.001018s | byte equality observed |
| mp_pop_front.test | 10 | 0.001027s | 0.001048s | 0.001010s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000470s | 0.000459s | 0.000999s | byte equality observed |
| mp_power_set.test | 10 | 0.001035s | 0.000995s | 0.001018s | byte equality observed |
| mp_product.test | 10 | 0.001008s | 0.001014s | 0.000993s | byte equality observed |
| mp_push_back.test | 10 | 0.001024s | 0.001035s | 0.001002s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000465s | 0.000463s | 0.000989s | byte equality observed |
| mp_push_front.test | 10 | 0.001046s | 0.001033s | 0.001001s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000472s | 0.000457s | 0.001014s | byte equality observed |
| mp_quote.test | 10 | 0.001027s | 0.001031s | 0.001020s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000995s | 0.000987s | 0.001011s | byte equality observed |
| mp_remove.test | 10 | 0.001022s | 0.001000s | 0.001033s | byte equality observed |
| mp_remove_if.test | 10 | 0.001040s | 0.000980s | 0.001060s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001008s | 0.000980s | 0.000992s | byte equality observed |
| mp_rename.test | 10 | 0.001025s | 0.001017s | 0.001012s | byte equality observed |
| mp_rename_2.test | 10 | 0.000471s | 0.000462s | 0.000992s | byte equality observed |
| mp_rename_v.test | 10 | 0.000464s | 0.000448s | 0.001009s | byte equality observed |
| mp_repeat.test | 10 | 0.001042s | 0.001059s | 0.001004s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000459s | 0.000459s | 0.001028s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001044s | 0.001002s | 0.001031s | byte equality observed |
| mp_replace.test | 10 | 0.001020s | 0.001018s | 0.001061s | byte equality observed |
| mp_replace_at.test | 10 | 0.001032s | 0.001010s | 0.001088s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001013s | 0.000985s | 0.001033s | byte equality observed |
| mp_replace_front.test | 10 | 0.001033s | 0.001017s | 0.000997s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000464s | 0.000467s | 0.000987s | byte equality observed |
| mp_replace_if.test | 10 | 0.001011s | 0.001023s | 0.000988s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001012s | 0.001004s | 0.000993s | byte equality observed |
| mp_replace_second.test | 10 | 0.001008s | 0.001025s | 0.001050s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000464s | 0.000461s | 0.000984s | byte equality observed |
| mp_replace_third.test | 10 | 0.001032s | 0.001044s | 0.001039s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000470s | 0.000472s | 0.001015s | byte equality observed |
| mp_reverse.test | 10 | 0.001063s | 0.001027s | 0.001008s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001019s | 0.001048s | 0.001009s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000995s | 0.001000s | 0.001008s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001045s | 0.001008s | 0.001022s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001000s | 0.001000s | 0.001010s | byte equality observed |
| mp_same.test | 10 | 0.001000s | 0.000993s | 0.001061s | byte equality observed |
| mp_second.test | 10 | 0.001025s | 0.001032s | 0.001021s | byte equality observed |
| mp_second_2.test | 10 | 0.000467s | 0.000457s | 0.001007s | byte equality observed |
| mp_set_contains.test | 10 | 0.001031s | 0.001011s | 0.001014s | byte equality observed |
| mp_set_difference.test | 10 | 0.001019s | 0.001019s | 0.001011s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001004s | 0.000982s | 0.001050s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001005s | 0.001029s | 0.001004s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001029s | 0.001020s | 0.001042s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000992s | 0.001052s | 0.001029s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001034s | 0.001005s | 0.001039s | byte equality observed |
| mp_set_union.test | 10 | 0.001016s | 0.000998s | 0.001008s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001025s | 0.001002s | 0.001019s | byte equality observed |
| mp_similar.test | 10 | 0.000997s | 0.001021s | 0.001042s | byte equality observed |
| mp_size.test | 10 | 0.001017s | 0.001014s | 0.001005s | byte equality observed |
| mp_size_2.test | 10 | 0.000468s | 0.000460s | 0.001011s | byte equality observed |
| mp_slice.test | 10 | 0.001058s | 0.001050s | 0.001012s | byte equality observed |
| mp_slice_2.test | 10 | 0.000464s | 0.000467s | 0.000993s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001047s | 0.001030s | 0.000993s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001067s | 0.001011s | 0.001000s | byte equality observed |
| mp_sort.test | 10 | 0.001013s | 0.000992s | 0.001069s | byte equality observed |
| mp_sort_q.test | 10 | 0.001011s | 0.001037s | 0.001001s | byte equality observed |
| mp_split.test | 10 | 0.001017s | 0.001015s | 0.001069s | byte equality observed |
| mp_starts_with.test | 10 | 0.001008s | 0.001005s | 0.001047s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000982s | 0.001041s | 0.001040s | byte equality observed |
| mp_take.test | 10 | 0.001035s | 0.001008s | 0.001062s | byte equality observed |
| mp_take_2.test | 10 | 0.000462s | 0.000468s | 0.001011s | byte equality observed |
| mp_third.test | 10 | 0.001049s | 0.001043s | 0.001018s | byte equality observed |
| mp_third_2.test | 10 | 0.000464s | 0.000458s | 0.000999s | byte equality observed |
| mp_transform.test | 10 | 0.001028s | 0.001009s | 0.001016s | byte equality observed |
| mp_transform_2.test | 10 | 0.001006s | 0.000985s | 0.001014s | byte equality observed |
| mp_transform_front.test | 10 | 0.001041s | 0.001026s | 0.001016s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000471s | 0.000462s | 0.001018s | byte equality observed |
| mp_transform_if.test | 10 | 0.001024s | 0.001021s | 0.001008s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001025s | 0.001027s | 0.001051s | byte equality observed |
| mp_transform_q.test | 10 | 0.001019s | 0.001018s | 0.001030s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000991s | 0.001020s | 0.001008s | byte equality observed |
| mp_transform_second.test | 10 | 0.001017s | 0.001023s | 0.000997s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000462s | 0.000468s | 0.001029s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001013s | 0.001010s | 0.001021s | byte equality observed |
| mp_transform_third.test | 10 | 0.001028s | 0.001019s | 0.001059s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000457s | 0.000453s | 0.001060s | byte equality observed |
| mp_unique.test | 10 | 0.001001s | 0.001034s | 0.001020s | byte equality observed |
| mp_unique_if.test | 10 | 0.001041s | 0.001008s | 0.001069s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001023s | 0.000990s | 0.001052s | byte equality observed |
| mp_valid.test | 10 | 0.001016s | 0.000982s | 0.000990s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001021s | 0.001006s | 0.001030s | byte equality observed |
| mp_value.test | 10 | 0.000472s | 0.000461s | 0.000977s | byte equality observed |
| mp_with_index.test | 10 | 0.001354s | 0.001336s | 0.001283s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000477s | 0.000460s | 0.000974s | byte equality observed |
| mpl.test | 10 | 0.001037s | 0.000984s | 0.001013s | byte equality observed |
| mpl_list.test | 10 | 0.001005s | 0.000982s | 0.001012s | byte equality observed |
| mpl_tuple.test | 10 | 0.001020s | 0.000997s | 0.001041s | byte equality observed |
| mpl_version.test | 10 | 0.001004s | 0.001030s | 0.001046s | byte equality observed |
| set_version.test | 10 | 0.001011s | 0.000994s | 0.001070s | byte equality observed |
| tuple_apply.test | 10 | 0.001024s | 0.001024s | 0.001073s | byte equality observed |
| tuple_for_each.test | 10 | 0.001020s | 0.001007s | 0.001103s | byte equality observed |
| tuple_transform.test | 10 | 0.001020s | 0.001040s | 0.001071s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001005s | 0.001011s | 0.000990s | byte equality observed |
| tuple_version.test | 10 | 0.001001s | 0.001006s | 0.001017s | byte equality observed |
| utility_version.test | 10 | 0.001030s | 0.000983s | 0.001041s | byte equality observed |
| version.test | 10 | 0.001005s | 0.001008s | 0.001019s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
