# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.027577 | 0.057301 | 0.076501 | — | — | — |
| complex_h.test | COMPILE | 0.112318 | 0.250394 | 0.287691 | — | — | — |
| mp_size.test | RUN | 0.134823 | 0.819330 | 0.415241 | 0.001464 | 0.001706 | 0.001438 |
| mp_size_2.test | RUN | 0.012210 | 0.029975 | 0.036175 | 0.000629 | 0.000744 | 0.001458 |
| mp_empty.test | RUN | 0.127803 | 0.533146 | 0.389521 | 0.001196 | 0.001792 | 0.001244 |
| mp_empty_2.test | RUN | 0.012685 | 0.030764 | 0.041722 | 0.000576 | 0.000762 | 0.001595 |
| mp_assign.test | RUN | 0.143425 | 1.070087 | 0.508680 | 0.001259 | 0.001575 | 0.001414 |
| mp_assign_2.test | RUN | 0.012633 | 0.030909 | 0.042541 | 0.000541 | 0.000754 | 0.001412 |
| mp_clear.test | RUN | 0.123737 | 0.442765 | 0.374737 | 0.001361 | 0.001544 | 0.001488 |
| mp_clear_2.test | RUN | 0.012468 | 0.031439 | 0.040688 | 0.000587 | 0.000747 | 0.001344 |
| mp_front.test | RUN | 0.136663 | 0.693988 | 0.432151 | 0.001516 | 0.001542 | 0.001642 |
| mp_front_2.test | RUN | 0.011889 | 0.030518 | 0.044242 | 0.000485 | 0.000627 | 0.001136 |
| mp_pop_front.test | RUN | 0.132559 | 0.724040 | 0.427879 | 0.001480 | 0.001572 | 0.001394 |
| mp_pop_front_2.test | RUN | 0.012289 | 0.029810 | 0.039327 | 0.000661 | 0.000716 | 0.001310 |
| mp_second.test | RUN | 0.128485 | 0.431716 | 0.411877 | 0.001497 | 0.002832 | 0.001450 |
| mp_second_2.test | RUN | 0.012911 | 0.030238 | 0.041551 | 0.000519 | 0.000653 | 0.001462 |
| mp_third.test | RUN | 0.127650 | 0.430039 | 0.393008 | 0.001346 | 0.001639 | 0.001505 |
| mp_third_2.test | RUN | 0.011056 | 0.026795 | 0.040386 | 0.000496 | 0.000522 | 0.001352 |
| mp_push_front.test | RUN | 0.166041 | 1.424006 | 0.730352 | 0.001137 | 0.001560 | 0.001430 |
| mp_push_front_2.test | RUN | 0.012209 | 0.027647 | 0.040275 | 0.000471 | 0.000662 | 0.001236 |
| mp_push_back.test | RUN | 0.167864 | 1.427219 | 0.723744 | 0.001285 | 0.001648 | 0.001457 |
| mp_push_back_2.test | RUN | 0.012132 | 0.028504 | 0.039999 | 0.000589 | 0.000686 | 0.001251 |
| mp_rename.test | RUN | 0.158698 | 1.314573 | 0.590970 | 0.001372 | 0.001432 | 0.001403 |
| mp_rename_2.test | RUN | 0.011979 | 0.028396 | 0.042660 | 0.000789 | 0.000655 | 0.001609 |
| mp_append.test | RUN | 0.178143 | 1.487318 | 0.673130 | 0.001606 | 0.001686 | 0.001637 |
| mp_append_2.test | RUN | 0.374804 | 3.391579 | 0.905854 | 0.001404 | 0.001750 | 0.001475 |
| mp_append_3.test | RUN | 0.012790 | 0.026655 | 0.043141 | 0.000738 | 0.000710 | 0.001548 |
| mp_append_sf.test | RUN | 0.172407 | 0.360712 | 0.356203 | 0.001602 | 0.001510 | 0.001400 |
| mp_replace_front.test | RUN | 0.163227 | 1.088036 | 0.540829 | 0.001656 | 0.001542 | 0.001395 |
| mp_replace_front_2.test | RUN | 0.014255 | 0.028812 | 0.044854 | 0.000550 | 0.000768 | 0.001366 |
| mp_replace_second.test | RUN | 0.148479 | 0.719266 | 0.509288 | 0.001505 | 0.001386 | 0.001695 |
| mp_replace_second_2.test | RUN | 0.012799 | 0.029491 | 0.043570 | 0.000563 | 0.000735 | 0.001593 |
| mp_replace_third.test | RUN | 0.140011 | 0.578776 | 0.443688 | 0.001367 | 0.001548 | 0.001612 |
| mp_replace_third_2.test | RUN | 0.011818 | 0.026468 | 0.044463 | 0.000538 | 0.000590 | 0.001538 |
| mp_apply_q.test | RUN | 0.161507 | 1.297271 | 0.597090 | 0.001564 | 0.001394 | 0.001366 |
| mp_apply_q_sf.test | RUN | 0.138262 | 0.381503 | 0.378133 | 0.001607 | 0.001530 | 0.001365 |
| mp_is_list.test | RUN | 0.141931 | 0.443472 | 0.376854 | 0.001522 | 0.001698 | 0.001321 |
| mp_list_c.test | RUN | 0.150452 | 0.561249 | 0.433140 | 0.001398 | 0.001600 | 0.001433 |
| mp_transform_front.test | RUN | 0.158210 | 1.086404 | 0.496652 | 0.001516 | 0.001495 | 0.001422 |
| mp_transform_front_2.test | RUN | 0.012606 | 0.028787 | 0.041575 | 0.000777 | 0.000714 | 0.001501 |
| mp_transform_second.test | RUN | 0.150785 | 0.921705 | 0.476228 | 0.001693 | 0.001403 | 0.001638 |
| mp_transform_second_2.test | RUN | 0.012048 | 0.029417 | 0.042121 | 0.000751 | 0.000695 | 0.001551 |
| mp_transform_third.test | RUN | 0.146432 | 0.705026 | 0.429938 | 0.001589 | 0.001558 | 0.001324 |
| mp_transform_third_2.test | RUN | 0.014031 | 0.027216 | 0.041202 | 0.000484 | 0.000630 | 0.001354 |
| mp_list_v.test | RUN | 0.012957 | 0.028144 | 0.042075 | 0.000544 | 0.000557 | 0.001544 |
| mp_rename_v.test | RUN | 0.013444 | 0.026949 | 0.040545 | 0.000520 | 0.000615 | 0.001542 |
| mp_is_value_list.test | RUN | 0.126942 | 0.276000 | 0.358977 | 0.001590 | 0.001568 | 0.001630 |
| mp_transform.test | RUN | 0.278678 | 2.296089 | 1.148505 | 0.001694 | 0.001699 | 0.001687 |
| mp_transform_2.test | RUN | 0.127460 | 0.247465 | 0.333530 | 0.001551 | 0.001620 | 0.001513 |
| mp_transform_q.test | RUN | 0.281878 | 2.186905 | 1.079450 | 0.001632 | 0.001806 | 0.001389 |
| mp_transform_q_2.test | RUN | 0.298788 | 0.690693 | 1.508170 | 0.001487 | 0.001578 | 0.001207 |
| mp_transform_sf.test | RUN | 0.134318 | 0.392015 | 0.406426 | 0.001413 | 0.001810 | 0.001577 |
| mp_transform_if.test | RUN | 0.161421 | 1.126459 | 0.620126 | 0.001337 | 0.001570 | 0.001591 |
| mp_transform_if_q.test | RUN | 0.167955 | 1.122726 | 0.635879 | 0.001467 | 0.001746 | 0.001444 |
| mp_filter.test | RUN | 0.146757 | 0.648720 | 0.476898 | 0.001958 | 0.001598 | 0.001379 |
| mp_fill.test | RUN | 0.140731 | 0.482038 | 0.428180 | 0.001555 | 0.001594 | 0.001692 |
| mp_fill_2.test | RUN | 0.021079 | 0.044134 | 0.065423 | 0.000672 | 0.000740 | 0.001578 |
| mp_count.test | RUN | 0.334410 | 1.138301 | 0.698646 | 0.001397 | 0.001440 | 0.001446 |
| mp_count_if.test | RUN | 0.298970 | 1.172431 | 0.741018 | 0.001270 | 0.001558 | 0.001668 |
| mp_count_if_q.test | RUN | 0.144822 | 0.761513 | 0.442406 | 0.001369 | 0.001499 | 0.001579 |
| mp_contains.test | RUN | 0.132874 | 0.468932 | 0.423137 | 0.001321 | 0.001492 | 0.001566 |
| mp_starts_with.test | RUN | 0.134228 | 0.460324 | 0.423059 | 0.001375 | 0.001640 | 0.001268 |
| mp_starts_with_sf.test | RUN | 0.131248 | 0.399044 | 0.377650 | 0.001322 | 0.001462 | 0.001446 |
| mp_repeat.test | RUN | 0.190242 | 1.965766 | 0.766767 | 0.001656 | 0.001381 | 0.001312 |
| mp_repeat_2.test | RUN | 0.021404 | 0.043233 | 0.062701 | 0.000596 | 0.000732 | 0.001314 |
| mp_repeat_3.test | RUN | 0.166563 | 0.270865 | 0.386153 | 0.001464 | 0.001670 | 0.001610 |
| mp_product.test | RUN | 0.151653 | 1.180055 | 0.576470 | 0.001378 | 0.001646 | 0.001390 |
| mp_drop.test | RUN | 0.157590 | 1.478129 | 0.648452 | 0.001227 | 0.001648 | 0.001376 |
| mp_drop_2.test | RUN | 0.021360 | 0.044311 | 0.062755 | 0.000637 | 0.000695 | 0.001464 |
| mp_iota.test | RUN | 0.152043 | 1.239511 | 0.569230 | 0.001562 | 0.001595 | 0.001507 |
| mp_iota_2.test | RUN | 0.163965 | 1.471868 | 0.642124 | 0.001515 | 0.001793 | 0.001500 |
| mp_at.test | RUN | 0.142645 | 0.621303 | 0.464943 | 0.001436 | 0.001368 | 0.001432 |
| mp_at_2.test | RUN | 0.021079 | 0.043138 | 0.068202 | 0.000529 | 0.000535 | 0.001582 |
| mp_at_sf.test | RUN | 0.141451 | 0.384852 | 0.402102 | 0.001471 | 0.001527 | 0.001241 |
| mp_take.test | RUN | 0.220442 | 1.950206 | 0.740347 | 0.001470 | 0.001710 | 0.001459 |
| mp_take_2.test | RUN | 0.021898 | 0.042615 | 0.064065 | 0.000686 | 0.000790 | 0.001386 |
| mp_slice.test | RUN | 0.253096 | 2.020753 | 0.942118 | 0.001587 | 0.001753 | 0.001326 |
| mp_slice_2.test | RUN | 0.020877 | 0.044543 | 0.062741 | 0.000624 | 0.000595 | 0.001481 |
| mp_replace.test | RUN | 0.169973 | 1.018637 | 0.601683 | 0.001736 | 0.001383 | 0.001469 |
| mp_replace_if.test | RUN | 0.165000 | 0.910371 | 0.568613 | 0.001410 | 0.001616 | 0.001239 |
| mp_replace_if_q.test | RUN | 0.164026 | 0.911272 | 0.553057 | 0.001388 | 0.001682 | 0.001495 |
| mp_copy_if.test | RUN | 0.170550 | 1.256557 | 0.572332 | 0.001562 | 0.001226 | 0.001543 |
| mp_copy_if_q.test | RUN | 0.170860 | 1.260328 | 0.582685 | 0.001704 | 0.001646 | 0.001497 |
| mp_remove.test | RUN | 0.172592 | 0.857894 | 0.578978 | 0.001406 | 0.001748 | 0.001349 |
| mp_remove_if.test | RUN | 0.178406 | 1.308208 | 0.609746 | 0.001379 | 0.001754 | 0.001501 |
| mp_remove_if_q.test | RUN | 0.171636 | 1.308622 | 0.589600 | 0.001565 | 0.001453 | 0.001426 |
| mp_partition.test | RUN | 0.164093 | 1.228868 | 0.614923 | 0.001734 | 0.001509 | 0.001396 |
| mp_partition_q.test | RUN | 0.167236 | 1.229814 | 0.612397 | 0.001424 | 0.001555 | 0.001220 |
| mp_sort.test | RUN | 0.157102 | 0.870191 | 0.541603 | 0.001712 | 0.001796 | 0.001720 |
| mp_sort_q.test | RUN | 0.165842 | 0.876776 | 0.540406 | 0.001490 | 0.001582 | 0.001337 |
| mp_find.test | RUN | 0.164890 | 0.931144 | 0.469055 | 0.001734 | 0.001620 | 0.001318 |
| mp_find_if.test | RUN | 0.158680 | 0.862462 | 0.464743 | 0.001338 | 0.001477 | 0.001189 |
| mp_find_if_q.test | RUN | 0.171921 | 1.007771 | 0.536806 | 0.001427 | 0.001829 | 0.001360 |
| mp_reverse.test | RUN | 0.308163 | 2.612143 | 1.062292 | 0.001665 | 0.001727 | 0.001504 |
| mp_fold.test | RUN | 0.503905 | 2.028213 | 2.811020 | 0.001617 | 0.001738 | 0.001348 |
| mp_fold_q.test | RUN | 0.149697 | 0.892284 | 0.508073 | 0.001658 | 0.001594 | 0.001510 |
| mp_fold_q_sf.test | RUN | 0.136527 | 0.409414 | 0.408106 | 0.001392 | 0.001688 | 0.001549 |
| mp_reverse_fold.test | RUN | 0.240302 | 1.951136 | 0.734476 | 0.001438 | 0.001620 | 0.001492 |
| mp_reverse_fold_q.test | RUN | 0.153959 | 1.040746 | 0.550171 | 0.001314 | 0.001658 | 0.001448 |
| mp_unique.test | RUN | 0.150363 | 0.946709 | 0.517315 | 0.001484 | 0.001759 | 0.001450 |
| mp_unique_if.test | RUN | 0.267442 | 2.040327 | 0.820823 | 0.001414 | 0.001226 | 0.001519 |
| mp_unique_if_q.test | RUN | 0.220962 | 1.972871 | 0.710562 | 0.001443 | 0.001588 | 0.001293 |
| mp_all_of.test | RUN | 0.366414 | 1.113019 | 0.886809 | 0.001631 | 0.001782 | 0.001526 |
| mp_all_of_q.test | RUN | 0.143662 | 0.489889 | 0.390454 | 0.001586 | 0.001712 | 0.001528 |
| mp_any_of.test | RUN | 0.375400 | 1.147720 | 0.883800 | 0.001496 | 0.001557 | 0.001392 |
| mp_any_of_q.test | RUN | 0.139497 | 0.464286 | 0.393411 | 0.001786 | 0.001712 | 0.001570 |
| mp_none_of.test | RUN | 0.375593 | 1.115043 | 0.883243 | 0.001532 | 0.001712 | 0.001545 |
| mp_none_of_q.test | RUN | 0.144441 | 0.461374 | 0.403594 | 0.001508 | 0.001465 | 0.001559 |
| mp_replace_at.test | RUN | 0.172712 | 0.966631 | 0.600850 | 0.001862 | 0.001499 | 0.001511 |
| mp_replace_at_c.test | RUN | 0.175929 | 0.976900 | 0.611885 | 0.001666 | 0.001388 | 0.001420 |
| mp_for_each.test | RUN | 0.174504 | 0.649728 | 0.628073 | 0.001358 | 0.001764 | 0.001335 |
| mp_insert.test | RUN | 0.242686 | 1.903463 | 0.848375 | 0.001661 | 0.001729 | 0.001298 |
| mp_insert_2.test | RUN | 0.023328 | 0.042608 | 0.062943 | 0.000492 | 0.000667 | 0.001192 |
| mp_erase.test | RUN | 0.266158 | 2.028330 | 1.043443 | 0.001726 | 0.001650 | 0.001386 |
| mp_erase_2.test | RUN | 0.022015 | 0.041350 | 0.058669 | 0.000544 | 0.000680 | 0.001439 |
| mp_with_index.test | RUN | 0.348055 | 4.079968 | 2.147147 | 0.001837 | 0.002125 | 0.001566 |
| mp_with_index_cx.test | RUN | 0.003452 | 0.014632 | 0.022410 | 0.000588 | 0.000656 | 0.001228 |
| mp_from_sequence.test | RUN | 0.178536 | 1.054938 | 0.564197 | 0.001413 | 0.001550 | 0.001282 |
| mp_from_sequence_2.test | RUN | 0.179906 | 1.260108 | 0.617064 | 0.001464 | 0.001616 | 0.001732 |
| mp_from_sequence_3.test | RUN | 0.154757 | 0.550435 | 0.429072 | 0.001709 | 0.001730 | 0.001536 |
| mp_min_element.test | RUN | 0.154080 | 0.503019 | 0.417193 | 0.001642 | 0.001580 | 0.001515 |
| mp_min_element_2.test | RUN | 0.022628 | 0.044309 | 0.066120 | 0.000729 | 0.000632 | 0.001458 |
| mp_min_element_q.test | RUN | 0.148631 | 0.516901 | 0.424884 | 0.001711 | 0.001723 | 0.001463 |
| mp_min_element_q_2.test | RUN | 0.023453 | 0.042643 | 0.062200 | 0.000672 | 0.000691 | 0.001479 |
| mp_max_element.test | RUN | 0.149515 | 0.512133 | 0.418226 | 0.001479 | 0.001552 | 0.001449 |
| mp_max_element_2.test | RUN | 0.022977 | 0.044704 | 0.067725 | 0.000562 | 0.000664 | 0.001211 |
| mp_max_element_q.test | RUN | 0.152481 | 0.519342 | 0.412764 | 0.001393 | 0.001603 | 0.001460 |
| mp_max_element_q_2.test | RUN | 0.022942 | 0.042337 | 0.059100 | 0.000613 | 0.000673 | 0.001400 |
| mp_nth_element.test | RUN | 0.160322 | 0.707034 | 0.489079 | 0.001593 | 0.001551 | 0.001103 |
| mp_nth_element_q.test | RUN | 0.152810 | 0.696608 | 0.488125 | 0.001275 | 0.001556 | 0.001166 |
| mp_back.test | RUN | 0.158572 | 0.602247 | 0.477486 | 0.001447 | 0.001553 | 0.001374 |
| mp_back_2.test | RUN | 0.023120 | 0.043120 | 0.063663 | 0.000571 | 0.000515 | 0.001370 |
| mp_pop_back.test | RUN | 0.369742 | 4.007964 | 1.038700 | 0.001405 | 0.001560 | 0.001474 |
| mp_pop_back_2.test | RUN | 0.022339 | 0.044438 | 0.061076 | 0.000676 | 0.000716 | 0.001390 |
| mp_flatten.test | RUN | 0.176840 | 1.433801 | 0.671786 | 0.001555 | 0.001610 | 0.001378 |
| mp_rotate_left.test | RUN | 0.171456 | 1.542404 | 0.653244 | 0.001477 | 0.001755 | 0.001587 |
| mp_rotate_right.test | RUN | 0.171986 | 1.549349 | 0.691414 | 0.001468 | 0.001640 | 0.001430 |
| mp_power_set.test | RUN | 0.168819 | 1.400626 | 0.703738 | 0.001475 | 0.001947 | 0.001419 |
| mp_partial_sum.test | RUN | 0.215397 | 1.942297 | 0.794656 | 0.001642 | 0.001669 | 0.001321 |
| mp_iterate.test | RUN | 0.154053 | 0.574220 | 0.547609 | 0.001296 | 0.001631 | 0.001258 |
| mp_pairwise_fold.test | RUN | 0.172250 | 1.363918 | 0.715124 | 0.001426 | 0.001736 | 0.001407 |
| mp_pairwise_fold_q.test | RUN | 0.133879 | 0.400944 | 0.399712 | 0.001660 | 0.001630 | 0.001462 |
| mp_sliding_fold.test | RUN | 0.302633 | 2.515180 | 1.280527 | 0.001516 | 0.001762 | 0.001490 |
| mp_sliding_fold_q.test | RUN | 0.304099 | 2.548201 | 1.289794 | 0.001486 | 0.001565 | 0.001310 |
| mp_intersperse.test | RUN | 0.165876 | 0.964114 | 0.592761 | 0.001452 | 0.001739 | 0.001434 |
| mp_split.test | RUN | 0.227579 | 1.826344 | 0.847699 | 0.001655 | 0.001666 | 0.001374 |
| mp_join.test | RUN | 0.187368 | 1.522811 | 0.711367 | 0.001709 | 0.001744 | 0.001461 |
| integral.test | RUN | 0.145360 | 0.692563 | 0.443892 | 0.001448 | 0.001708 | 0.001297 |
| mp_value.test | RUN | 0.009828 | 0.027115 | 0.034734 | 0.000757 | 0.000523 | 0.001426 |
| mp_identity.test | RUN | 0.141137 | 0.619457 | 0.433049 | 0.001702 | 0.001458 | 0.001261 |
| mp_inherit.test | RUN | 0.136527 | 0.441402 | 0.390591 | 0.001772 | 0.001673 | 0.001476 |
| mp_if.test | RUN | 0.133706 | 0.498035 | 0.404156 | 0.001782 | 0.001655 | 0.001123 |
| mp_if_sf.test | RUN | 0.135036 | 0.362721 | 0.335125 | 0.001661 | 0.001475 | 0.001512 |
| mp_eval_if.test | RUN | 0.147818 | 0.521485 | 0.391800 | 0.001592 | 0.001547 | 0.001538 |
| mp_eval_if_sf.test | RUN | 0.133672 | 0.369893 | 0.361558 | 0.001533 | 0.001446 | 0.001441 |
| mp_valid.test | RUN | 0.131867 | 0.377715 | 0.354286 | 0.001740 | 0.001464 | 0.001813 |
| mp_defer.test | RUN | 0.145770 | 0.630428 | 0.468430 | 0.001668 | 0.001656 | 0.001347 |
| mp_quote.test | RUN | 0.151478 | 0.639147 | 0.473814 | 0.001761 | 0.001553 | 0.001679 |
| mp_invoke_q.test | RUN | 0.168497 | 0.843365 | 0.516403 | 0.001630 | 0.001749 | 0.001538 |
| mp_invoke_q_sf.test | RUN | 0.138259 | 0.383152 | 0.379996 | 0.001700 | 0.001446 | 0.001544 |
| mp_quote_trait.test | RUN | 0.149712 | 0.720510 | 0.458746 | 0.001625 | 0.001388 | 0.001716 |
| mp_cond.test | RUN | 0.137409 | 0.433547 | 0.407906 | 0.001689 | 0.001615 | 0.001541 |
| mp_cond_sf.test | RUN | 0.132513 | 0.407547 | 0.381255 | 0.001770 | 0.001366 | 0.001615 |
| mp_not_fn.test | RUN | 0.137044 | 0.387824 | 0.378898 | 0.001475 | 0.001658 | 0.001498 |
| mp_eval_if_not.test | RUN | 0.145395 | 0.546616 | 0.431615 | 0.001626 | 0.001522 | 0.001534 |
| mp_eval_or.test | RUN | 0.139101 | 0.288228 | 0.404778 | 0.001411 | 0.001617 | 0.001233 |
| mp_compose.test | RUN | 0.146307 | 0.906492 | 0.494255 | 0.001421 | 0.001523 | 0.001648 |
| mp_valid_and_true.test | RUN | 0.134149 | 0.458206 | 0.379819 | 0.001393 | 0.001706 | 0.001311 |
| mp_compose_sf.test | COMPILE | 0.032665 | 0.056442 | 0.094028 | — | — | — |
| integer_sequence.test | RUN | 0.160830 | 0.894671 | 0.580572 | 0.001454 | 0.001375 | 0.001442 |
| tuple_for_each.test | RUN | 0.139549 | 0.328905 | 0.399154 | 0.001317 | 0.001227 | 0.001704 |
| tuple_for_each_cx.test | COMPILE | 0.025303 | 0.046784 | 0.073884 | — | — | — |
| tuple_apply.test | RUN | 0.141556 | 0.333918 | 0.417134 | 0.001644 | 0.001558 | 0.001409 |
| tuple_apply_cx.test | COMPILE | 0.037726 | 0.063418 | 0.102754 | — | — | — |
| construct_from_tuple.test | RUN | 0.131816 | 0.341759 | 0.382911 | 0.001549 | 0.001574 | 0.001615 |
| construct_from_tuple_cx.test | COMPILE | 0.035614 | 0.067421 | 0.097192 | — | — | — |
| tuple_transform.test | RUN | 0.203731 | 0.700406 | 0.764400 | 0.001528 | 0.001634 | 0.001583 |
| tuple_transform_2.test | RUN | 0.181727 | 0.504628 | 0.667429 | 0.001674 | 0.001492 | 0.001403 |
| tuple_transform_cx.test | COMPILE | 0.028923 | 0.062105 | 0.097509 | — | — | — |
| mp_set_contains.test | RUN | 0.132976 | 0.455214 | 0.388563 | 0.001429 | 0.001696 | 0.001379 |
| mp_set_push_back.test | RUN | 0.176447 | 1.429473 | 0.681560 | 0.001441 | 0.001457 | 0.001658 |
| mp_set_push_front.test | RUN | 0.211112 | 1.729897 | 0.801863 | 0.001291 | 0.001652 | 0.001409 |
| mp_is_set.test | RUN | 0.127994 | 0.454145 | 0.422734 | 0.001463 | 0.001716 | 0.001658 |
| mp_set_union.test | RUN | 0.160848 | 1.208894 | 0.657347 | 0.001515 | 0.001746 | 0.001275 |
| mp_set_union_sf.test | RUN | 0.129114 | 0.381933 | 0.383017 | 0.001339 | 0.001588 | 0.001276 |
| mp_set_difference.test | RUN | 0.143813 | 0.997089 | 0.553129 | 0.001351 | 0.001685 | 0.001489 |
| mp_set_difference_sf.test | RUN | 0.124322 | 0.382149 | 0.371021 | 0.001559 | 0.001863 | 0.001266 |
| mp_set_intersection.test | RUN | 0.148773 | 0.972937 | 0.544443 | 0.001557 | 0.001593 | 0.001578 |
| mp_set_intersection_sf.test | RUN | 0.130286 | 0.396291 | 0.370870 | 0.001286 | 0.001530 | 0.001322 |
| mp_all.test | RUN | 0.131310 | 0.466927 | 0.392469 | 0.001388 | 0.001497 | 0.001564 |
| mp_all_2.test | RUN | 0.365713 | 1.021790 | 0.943127 | 0.001694 | 0.001796 | 0.001708 |
| mp_and.test | RUN | 0.134051 | 0.485859 | 0.390784 | 0.001500 | 0.001480 | 0.001534 |
| mp_any.test | RUN | 0.136998 | 0.477903 | 0.400496 | 0.001343 | 0.001564 | 0.001617 |
| mp_any_2.test | RUN | 0.374594 | 1.014447 | 0.914047 | 0.001612 | 0.001666 | 0.001316 |
| mp_or.test | RUN | 0.139977 | 0.470938 | 0.417256 | 0.001640 | 0.001667 | 0.001638 |
| mp_same.test | RUN | 0.273151 | 0.824271 | 0.687068 | 0.001155 | 0.001751 | 0.001273 |
| mp_plus.test | RUN | 0.139962 | 0.588657 | 0.453736 | 0.001468 | 0.001522 | 0.001485 |
| mp_less.test | RUN | 0.146693 | 0.485052 | 0.397706 | 0.001720 | 0.001452 | 0.001612 |
| mp_min.test | RUN | 0.140113 | 0.449611 | 0.375784 | 0.001539 | 0.001588 | 0.001340 |
| mp_max.test | RUN | 0.140541 | 0.479011 | 0.404450 | 0.001414 | 0.001472 | 0.001561 |
| mp_similar.test | RUN | 0.138021 | 0.451934 | 0.399326 | 0.001223 | 0.001524 | 0.001418 |
| mp_map_find.test | RUN | 0.162381 | 0.841462 | 0.522648 | 0.001724 | 0.001448 | 0.001602 |
| mp_map_find_2.test | RUN | 0.154723 | 0.339038 | 0.459775 | 0.001670 | 0.001422 | 0.001504 |
| mp_map_find_3.test | RUN | 0.155222 | 0.331511 | 0.439564 | 0.001425 | 0.001404 | 0.001345 |
| mp_map_find_4.test | RUN | 0.146243 | 0.299587 | 0.412120 | 0.001344 | 0.001365 | 0.001179 |
| mp_map_contains.test | RUN | 0.141212 | 0.465840 | 0.407555 | 0.001676 | 0.001718 | 0.001462 |
| mp_map_insert.test | RUN | 0.192041 | 1.588256 | 0.728344 | 0.001657 | 0.001725 | 0.001260 |
| mp_map_replace.test | RUN | 0.263268 | 1.850335 | 0.831128 | 0.001504 | 0.001852 | 0.001363 |
| mp_map_erase.test | RUN | 0.185168 | 1.367329 | 0.700466 | 0.001372 | 0.001514 | 0.001171 |
| mp_map_update.test | RUN | 0.187859 | 0.874444 | 0.541967 | 0.001692 | 0.001756 | 0.001502 |
| mp_map_update_q.test | RUN | 0.161490 | 0.908782 | 0.527500 | 0.001528 | 0.001828 | 0.002372 |
| mp_map_keys.test | RUN | 0.159066 | 0.808361 | 0.509971 | 0.001568 | 0.001815 | 0.002635 |
| mp_is_map.test | RUN | 0.151052 | 0.487251 | 0.418609 | 0.001342 | 0.001390 | 0.002144 |
| mp_bind.test | RUN | 0.180839 | 1.468571 | 0.662375 | 0.001666 | 0.001837 | 0.001370 |
| mp_bind_q.test | RUN | 0.157041 | 0.913025 | 0.486259 | 0.001682 | 0.001789 | 0.001275 |
| mp_bind_front.test | RUN | 0.151371 | 0.974444 | 0.488817 | 0.001257 | 0.001518 | 0.001284 |
| mp_bind_back.test | RUN | 0.150195 | 0.995992 | 0.492041 | 0.001109 | 0.001735 | 0.001119 |
| mp_lambda.test | RUN | 0.317591 | 3.070832 | 1.324764 | 0.001386 | 0.001224 | 0.001431 |
| mpl.test | RUN | 0.294864 | 0.780530 | 1.037458 | 0.001719 | 0.003183 | 0.001442 |
| mpl_list.test | RUN | 0.171683 | 0.613694 | 0.482551 | 0.001346 | 0.001766 | 0.001051 |
| mpl_tuple.test | RUN | 0.166785 | 0.590426 | 0.469921 | 0.001318 | 0.003429 | 0.001438 |
| version.test | RUN | 0.083361 | 0.218684 | 0.248154 | 0.001517 | 0.001659 | 0.001189 |
| mp11_version.test | RUN | 0.103599 | 0.236632 | 0.280738 | 0.001258 | 0.001376 | 0.001185 |
| list_version.test | RUN | 0.085694 | 0.213255 | 0.257515 | 0.001286 | 0.001501 | 0.001276 |
| algorithm_version.test | RUN | 0.099995 | 0.225822 | 0.271116 | 0.001609 | 0.001746 | 0.001073 |
| integral_version.test | RUN | 0.083291 | 0.213377 | 0.245655 | 0.001415 | 0.001386 | 0.001204 |
| utility_version.test | RUN | 0.083963 | 0.223173 | 0.243914 | 0.001423 | 0.001494 | 0.001346 |
| function_version.test | RUN | 0.087502 | 0.214553 | 0.247007 | 0.001292 | 0.001597 | 0.001395 |
| map_version.test | RUN | 0.096924 | 0.230256 | 0.266397 | 0.001486 | 0.001317 | 0.001140 |
| set_version.test | RUN | 0.089098 | 0.227202 | 0.254584 | 0.001504 | 0.001532 | 0.001120 |
| bind_version.test | RUN | 0.097903 | 0.231797 | 0.259843 | 0.001460 | 0.001600 | 0.001461 |
| integer_sequence_version.test | RUN | 0.085355 | 0.222339 | 0.243179 | 0.001431 | 0.001525 | 0.001135 |
| tuple_version.test | RUN | 0.094268 | 0.235448 | 0.249221 | 0.001288 | 0.001455 | 0.001005 |
| mpl_version.test | RUN | 0.071847 | 0.173920 | 0.183752 | 0.001175 | 0.001248 | 0.001221 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.013× | 0.996×, 1.029× | 0.990× |
| clang | 1.085× | 1.090×, 1.079× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000847s | 0.000848s | 0.000894s | byte equality observed |
| bind_version.test | 10 | 0.000846s | 0.000865s | 0.000901s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000865s | 0.000906s | 0.000887s | byte equality observed |
| function_version.test | 10 | 0.000870s | 0.000834s | 0.000884s | byte equality observed |
| integer_sequence.test | 10 | 0.000853s | 0.000848s | 0.000868s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000869s | 0.000860s | 0.000861s | byte equality observed |
| integral.test | 10 | 0.000881s | 0.000853s | 0.000873s | byte equality observed |
| integral_version.test | 10 | 0.000869s | 0.000878s | 0.000892s | byte equality observed |
| list_version.test | 10 | 0.000860s | 0.000882s | 0.000897s | byte equality observed |
| map_version.test | 10 | 0.000871s | 0.000892s | 0.000877s | byte equality observed |
| mp11_version.test | 10 | 0.000874s | 0.000861s | 0.000894s | byte equality observed |
| mp_all.test | 10 | 0.000871s | 0.000865s | 0.000909s | byte equality observed |
| mp_all_2.test | 10 | 0.000881s | 0.000884s | 0.000904s | byte equality observed |
| mp_all_of.test | 10 | 0.000869s | 0.000885s | 0.000896s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000858s | 0.000869s | 0.000887s | byte equality observed |
| mp_and.test | 10 | 0.000877s | 0.000873s | 0.000886s | byte equality observed |
| mp_any.test | 10 | 0.000866s | 0.000870s | 0.000887s | byte equality observed |
| mp_any_2.test | 10 | 0.000854s | 0.000863s | 0.000868s | byte equality observed |
| mp_any_of.test | 10 | 0.000864s | 0.000860s | 0.000859s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000870s | 0.000879s | 0.000872s | byte equality observed |
| mp_append.test | 10 | 0.000879s | 0.000889s | 0.000870s | byte equality observed |
| mp_append_2.test | 10 | 0.000897s | 0.000905s | 0.000867s | byte equality observed |
| mp_append_3.test | 10 | 0.000397s | 0.000463s | 0.000852s | byte equality observed |
| mp_append_sf.test | 10 | 0.000861s | 0.000887s | 0.000882s | byte equality observed |
| mp_apply_q.test | 10 | 0.000867s | 0.000883s | 0.000878s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000875s | 0.000853s | 0.000860s | byte equality observed |
| mp_assign.test | 10 | 0.000864s | 0.000873s | 0.000869s | byte equality observed |
| mp_assign_2.test | 10 | 0.000396s | 0.000390s | 0.000853s | byte equality observed |
| mp_at.test | 10 | 0.000895s | 0.000877s | 0.000858s | byte equality observed |
| mp_at_2.test | 10 | 0.000397s | 0.000392s | 0.000832s | byte equality observed |
| mp_at_sf.test | 10 | 0.000860s | 0.000874s | 0.000865s | byte equality observed |
| mp_back.test | 10 | 0.000887s | 0.000880s | 0.000862s | byte equality observed |
| mp_back_2.test | 10 | 0.000403s | 0.000391s | 0.000834s | byte equality observed |
| mp_bind.test | 10 | 0.000873s | 0.000891s | 0.000855s | byte equality observed |
| mp_bind_back.test | 10 | 0.000887s | 0.000844s | 0.000843s | byte equality observed |
| mp_bind_front.test | 10 | 0.000857s | 0.000865s | 0.000859s | byte equality observed |
| mp_bind_q.test | 10 | 0.000877s | 0.000881s | 0.000874s | byte equality observed |
| mp_clear.test | 10 | 0.000886s | 0.000876s | 0.000880s | byte equality observed |
| mp_clear_2.test | 10 | 0.000399s | 0.000392s | 0.000848s | byte equality observed |
| mp_compose.test | 10 | 0.000873s | 0.000858s | 0.000854s | byte equality observed |
| mp_cond.test | 10 | 0.000873s | 0.000890s | 0.000848s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000873s | 0.000859s | 0.000859s | byte equality observed |
| mp_contains.test | 10 | 0.000881s | 0.000860s | 0.000857s | byte equality observed |
| mp_copy_if.test | 10 | 0.000873s | 0.000866s | 0.000853s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000863s | 0.000877s | 0.000860s | byte equality observed |
| mp_count.test | 10 | 0.000870s | 0.000855s | 0.000859s | byte equality observed |
| mp_count_if.test | 10 | 0.000852s | 0.000868s | 0.000859s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000866s | 0.000881s | 0.000860s | byte equality observed |
| mp_defer.test | 10 | 0.000872s | 0.000875s | 0.000874s | byte equality observed |
| mp_drop.test | 10 | 0.000879s | 0.000883s | 0.000866s | byte equality observed |
| mp_drop_2.test | 10 | 0.000398s | 0.000400s | 0.000859s | byte equality observed |
| mp_empty.test | 10 | 0.000879s | 0.000878s | 0.000872s | byte equality observed |
| mp_empty_2.test | 10 | 0.000400s | 0.000402s | 0.000874s | byte equality observed |
| mp_erase.test | 10 | 0.000904s | 0.000903s | 0.000892s | byte equality observed |
| mp_erase_2.test | 10 | 0.000398s | 0.000392s | 0.000851s | byte equality observed |
| mp_eval_if.test | 10 | 0.000843s | 0.000860s | 0.000866s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000850s | 0.000894s | 0.000891s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000855s | 0.000856s | 0.000864s | byte equality observed |
| mp_eval_or.test | 10 | 0.000873s | 0.000865s | 0.000870s | byte equality observed |
| mp_fill.test | 10 | 0.000876s | 0.000866s | 0.000877s | byte equality observed |
| mp_fill_2.test | 10 | 0.000399s | 0.000389s | 0.000841s | byte equality observed |
| mp_filter.test | 10 | 0.000877s | 0.000859s | 0.000878s | byte equality observed |
| mp_find.test | 10 | 0.000879s | 0.000856s | 0.000870s | byte equality observed |
| mp_find_if.test | 10 | 0.000860s | 0.000887s | 0.000856s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000868s | 0.000853s | 0.000896s | byte equality observed |
| mp_flatten.test | 10 | 0.000870s | 0.000870s | 0.000892s | byte equality observed |
| mp_fold.test | 10 | 0.000895s | 0.000858s | 0.000877s | byte equality observed |
| mp_fold_q.test | 10 | 0.000868s | 0.000872s | 0.000868s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000858s | 0.000876s | 0.000852s | byte equality observed |
| mp_for_each.test | 10 | 0.000865s | 0.000864s | 0.000889s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000853s | 0.000860s | 0.000859s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000848s | 0.000856s | 0.000881s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000855s | 0.000847s | 0.000865s | byte equality observed |
| mp_front.test | 10 | 0.000869s | 0.000872s | 0.000894s | byte equality observed |
| mp_front_2.test | 10 | 0.000397s | 0.000393s | 0.000856s | byte equality observed |
| mp_identity.test | 10 | 0.000847s | 0.000866s | 0.000874s | byte equality observed |
| mp_if.test | 10 | 0.000851s | 0.000859s | 0.000889s | byte equality observed |
| mp_if_sf.test | 10 | 0.000859s | 0.000860s | 0.000871s | byte equality observed |
| mp_inherit.test | 10 | 0.000855s | 0.000860s | 0.000870s | byte equality observed |
| mp_insert.test | 10 | 0.000882s | 0.000879s | 0.000892s | byte equality observed |
| mp_insert_2.test | 10 | 0.000388s | 0.000397s | 0.000869s | byte equality observed |
| mp_intersperse.test | 10 | 0.000870s | 0.000860s | 0.000887s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000868s | 0.000848s | 0.000897s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000860s | 0.000854s | 0.000882s | byte equality observed |
| mp_iota.test | 10 | 0.000852s | 0.000860s | 0.000892s | byte equality observed |
| mp_iota_2.test | 10 | 0.000858s | 0.000857s | 0.000883s | byte equality observed |
| mp_is_list.test | 10 | 0.000862s | 0.000873s | 0.000876s | byte equality observed |
| mp_is_map.test | 10 | 0.000856s | 0.000858s | 0.000879s | byte equality observed |
| mp_is_set.test | 10 | 0.000857s | 0.000864s | 0.000863s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000844s | 0.000858s | 0.000889s | byte equality observed |
| mp_iterate.test | 10 | 0.000834s | 0.000826s | 0.000884s | byte equality observed |
| mp_join.test | 10 | 0.000852s | 0.000853s | 0.000872s | byte equality observed |
| mp_lambda.test | 10 | 0.000878s | 0.000860s | 0.000857s | byte equality observed |
| mp_less.test | 10 | 0.000849s | 0.000862s | 0.000881s | byte equality observed |
| mp_list_c.test | 10 | 0.000862s | 0.000850s | 0.000887s | byte equality observed |
| mp_list_v.test | 10 | 0.000394s | 0.000404s | 0.000857s | byte equality observed |
| mp_map_contains.test | 10 | 0.000882s | 0.000870s | 0.000889s | byte equality observed |
| mp_map_erase.test | 10 | 0.000889s | 0.000856s | 0.000880s | byte equality observed |
| mp_map_find.test | 10 | 0.000867s | 0.000871s | 0.000870s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000854s | 0.000863s | 0.000892s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000864s | 0.000852s | 0.000887s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000848s | 0.000854s | 0.000870s | byte equality observed |
| mp_map_insert.test | 10 | 0.000878s | 0.000869s | 0.000888s | byte equality observed |
| mp_map_keys.test | 10 | 0.000875s | 0.000850s | 0.000899s | byte equality observed |
| mp_map_replace.test | 10 | 0.000884s | 0.000850s | 0.000869s | byte equality observed |
| mp_map_update.test | 10 | 0.000870s | 0.000859s | 0.000872s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000873s | 0.000846s | 0.000863s | byte equality observed |
| mp_max.test | 10 | 0.000863s | 0.000847s | 0.000865s | byte equality observed |
| mp_max_element.test | 10 | 0.000875s | 0.000874s | 0.000887s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000397s | 0.000389s | 0.000884s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000873s | 0.000873s | 0.000891s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000396s | 0.000387s | 0.000863s | byte equality observed |
| mp_min.test | 10 | 0.000845s | 0.000869s | 0.000894s | byte equality observed |
| mp_min_element.test | 10 | 0.000878s | 0.000860s | 0.000880s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000389s | 0.000385s | 0.000863s | byte equality observed |
| mp_min_element_q.test | 7 | 0.000870s | 0.000865s | 0.000905s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000392s | 0.000397s | 0.000854s | byte equality observed |
| mp_none_of.test | 10 | 0.000855s | 0.000856s | 0.000869s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000850s | 0.000874s | 0.000883s | byte equality observed |
| mp_not_fn.test | 10 | 0.000853s | 0.000861s | 0.000898s | byte equality observed |
| mp_nth_element.test | 10 | 0.000844s | 0.000869s | 0.000885s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000853s | 0.000851s | 0.000875s | byte equality observed |
| mp_or.test | 10 | 0.000841s | 0.000887s | 0.000867s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000855s | 0.000857s | 0.000865s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000867s | 0.000859s | 0.000883s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000879s | 0.000867s | 0.000880s | byte equality observed |
| mp_partition.test | 10 | 0.000841s | 0.000876s | 0.000884s | byte equality observed |
| mp_partition_q.test | 10 | 0.000875s | 0.000884s | 0.000869s | byte equality observed |
| mp_plus.test | 10 | 0.000867s | 0.000864s | 0.000869s | byte equality observed |
| mp_pop_back.test | 10 | 0.000912s | 0.000863s | 0.000879s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000402s | 0.000394s | 0.000873s | byte equality observed |
| mp_pop_front.test | 10 | 0.000875s | 0.000857s | 0.000888s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000395s | 0.000384s | 0.000863s | byte equality observed |
| mp_power_set.test | 10 | 0.000863s | 0.000839s | 0.000882s | byte equality observed |
| mp_product.test | 10 | 0.000860s | 0.000858s | 0.000880s | byte equality observed |
| mp_push_back.test | 10 | 0.000884s | 0.000866s | 0.000869s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000401s | 0.000397s | 0.000847s | byte equality observed |
| mp_push_front.test | 10 | 0.000874s | 0.000881s | 0.000875s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000396s | 0.000402s | 0.000867s | byte equality observed |
| mp_quote.test | 10 | 0.000853s | 0.000859s | 0.000877s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000864s | 0.000857s | 0.000876s | byte equality observed |
| mp_remove.test | 10 | 0.000857s | 0.000856s | 0.000861s | byte equality observed |
| mp_remove_if.test | 10 | 0.000851s | 0.000870s | 0.000864s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000860s | 0.000869s | 0.000862s | byte equality observed |
| mp_rename.test | 10 | 0.000866s | 0.000880s | 0.000868s | byte equality observed |
| mp_rename_2.test | 10 | 0.000391s | 0.000396s | 0.000865s | byte equality observed |
| mp_rename_v.test | 10 | 0.000393s | 0.000389s | 0.000854s | byte equality observed |
| mp_repeat.test | 10 | 0.000895s | 0.000894s | 0.000856s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000388s | 0.000403s | 0.000851s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000846s | 0.000854s | 0.000868s | byte equality observed |
| mp_replace.test | 10 | 0.000860s | 0.000857s | 0.000860s | byte equality observed |
| mp_replace_at.test | 10 | 0.000851s | 0.000862s | 0.000854s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000852s | 0.000852s | 0.000844s | byte equality observed |
| mp_replace_front.test | 10 | 0.000873s | 0.000871s | 0.000833s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000384s | 0.000392s | 0.000838s | byte equality observed |
| mp_replace_if.test | 10 | 0.000854s | 0.000874s | 0.000842s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000863s | 0.000851s | 0.000872s | byte equality observed |
| mp_replace_second.test | 10 | 0.000861s | 0.000861s | 0.000864s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000391s | 0.000395s | 0.000831s | byte equality observed |
| mp_replace_third.test | 10 | 0.000862s | 0.000876s | 0.000852s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000389s | 0.000388s | 0.000847s | byte equality observed |
| mp_reverse.test | 10 | 0.000881s | 0.000861s | 0.000847s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000891s | 0.000872s | 0.000830s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000855s | 0.000880s | 0.000845s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000861s | 0.000881s | 0.000835s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000860s | 0.000865s | 0.000848s | byte equality observed |
| mp_same.test | 10 | 0.000877s | 0.000859s | 0.000856s | byte equality observed |
| mp_second.test | 10 | 0.000853s | 0.000864s | 0.000838s | byte equality observed |
| mp_second_2.test | 10 | 0.000400s | 0.000405s | 0.000835s | byte equality observed |
| mp_set_contains.test | 10 | 0.000864s | 0.000869s | 0.000862s | byte equality observed |
| mp_set_difference.test | 10 | 0.000859s | 0.000869s | 0.000844s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000851s | 0.000866s | 0.000869s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000858s | 0.000884s | 0.000844s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000864s | 0.000876s | 0.000861s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000865s | 0.000878s | 0.000855s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000866s | 0.000884s | 0.000852s | byte equality observed |
| mp_set_union.test | 10 | 0.000861s | 0.000894s | 0.000849s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000852s | 0.000893s | 0.000850s | byte equality observed |
| mp_similar.test | 10 | 0.000850s | 0.000889s | 0.000854s | byte equality observed |
| mp_size.test | 10 | 0.000871s | 0.000892s | 0.000840s | byte equality observed |
| mp_size_2.test | 10 | 0.000387s | 0.000404s | 0.000827s | byte equality observed |
| mp_slice.test | 10 | 0.000882s | 0.000913s | 0.000849s | byte equality observed |
| mp_slice_2.test | 10 | 0.000387s | 0.000407s | 0.000833s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000859s | 0.000899s | 0.000850s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000890s | 0.000894s | 0.000857s | byte equality observed |
| mp_sort.test | 10 | 0.000852s | 0.000871s | 0.000850s | byte equality observed |
| mp_sort_q.test | 10 | 0.000854s | 0.000866s | 0.000841s | byte equality observed |
| mp_split.test | 10 | 0.000866s | 0.000880s | 0.000826s | byte equality observed |
| mp_starts_with.test | 10 | 0.000844s | 0.000866s | 0.000856s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000845s | 0.000867s | 0.000846s | byte equality observed |
| mp_take.test | 10 | 0.000882s | 0.000873s | 0.000850s | byte equality observed |
| mp_take_2.test | 10 | 0.000399s | 0.000398s | 0.000836s | byte equality observed |
| mp_third.test | 10 | 0.000857s | 0.000876s | 0.000847s | byte equality observed |
| mp_third_2.test | 10 | 0.000389s | 0.000399s | 0.000837s | byte equality observed |
| mp_transform.test | 10 | 0.000866s | 0.000873s | 0.000856s | byte equality observed |
| mp_transform_2.test | 10 | 0.000833s | 0.000842s | 0.000841s | byte equality observed |
| mp_transform_front.test | 10 | 0.000862s | 0.000878s | 0.000860s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000389s | 0.000389s | 0.000817s | byte equality observed |
| mp_transform_if.test | 10 | 0.000848s | 0.000842s | 0.000852s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000852s | 0.000861s | 0.000839s | byte equality observed |
| mp_transform_q.test | 10 | 0.000865s | 0.000886s | 0.000842s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000872s | 0.000874s | 0.000849s | byte equality observed |
| mp_transform_second.test | 10 | 0.000873s | 0.000905s | 0.000849s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000385s | 0.000403s | 0.000830s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000854s | 0.000889s | 0.000865s | byte equality observed |
| mp_transform_third.test | 10 | 0.000866s | 0.000900s | 0.000856s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000395s | 0.000406s | 0.000842s | byte equality observed |
| mp_unique.test | 10 | 0.000866s | 0.000889s | 0.000870s | byte equality observed |
| mp_unique_if.test | 10 | 0.000866s | 0.000894s | 0.000859s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000867s | 0.000899s | 0.000848s | byte equality observed |
| mp_valid.test | 10 | 0.000847s | 0.000870s | 0.000877s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000867s | 0.000886s | 0.000855s | byte equality observed |
| mp_value.test | 10 | 0.000390s | 0.000401s | 0.000844s | byte equality observed |
| mp_with_index.test | 10 | 0.001232s | 0.001241s | 0.001145s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000394s | 0.000403s | 0.000840s | byte equality observed |
| mpl.test | 10 | 0.000875s | 0.000879s | 0.000845s | byte equality observed |
| mpl_list.test | 10 | 0.000855s | 0.000884s | 0.000866s | byte equality observed |
| mpl_tuple.test | 10 | 0.000871s | 0.000889s | 0.000873s | byte equality observed |
| mpl_version.test | 10 | 0.000852s | 0.000878s | 0.000857s | byte equality observed |
| set_version.test | 10 | 0.000860s | 0.000853s | 0.000864s | byte equality observed |
| tuple_apply.test | 10 | 0.000854s | 0.000882s | 0.000880s | byte equality observed |
| tuple_for_each.test | 10 | 0.000852s | 0.000863s | 0.000865s | byte equality observed |
| tuple_transform.test | 10 | 0.000858s | 0.000864s | 0.000863s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000848s | 0.000888s | 0.000843s | byte equality observed |
| tuple_version.test | 10 | 0.000857s | 0.000863s | 0.000871s | byte equality observed |
| utility_version.test | 10 | 0.000886s | 0.000843s | 0.000847s | byte equality observed |
| version.test | 10 | 0.000859s | 0.000855s | 0.000865s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
