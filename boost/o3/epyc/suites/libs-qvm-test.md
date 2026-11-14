# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.243185 | 0.644191 | 0.761731 | 0.002146 | 0.002217 | 0.002146 |
| mat_traits_array_test.test | RUN | 0.191165 | 0.654562 | 0.615217 | 0.001735 | 0.001594 | 0.001310 |
| mat_traits_std_array_test.test | RUN | 0.198173 | 0.495625 | 0.618036 | 0.001519 | 0.001523 | 0.001299 |
| vec_traits_array_test.test | RUN | 0.170220 | 0.491251 | 0.528498 | 0.001560 | 0.001775 | 0.001307 |
| vec_traits_gnuc_test.test | RUN | 0.308456 | 0.608523 | 1.041888 | 0.001366 | 0.001595 | 0.001445 |
| vec_traits_std_array_test.test | RUN | 0.165771 | 0.388636 | 0.518963 | 0.001633 | 0.001640 | 0.001440 |
| quat_traits_array_test.test | RUN | 0.168121 | 0.515466 | 0.512947 | 0.001538 | 0.001659 | 0.001542 |
| quat_traits_std_array_test.test | RUN | 0.168520 | 0.395606 | 0.531334 | 0.001529 | 0.001722 | 0.001744 |
| access_m_test.test | RUN | 0.282517 | 0.942314 | 1.150999 | 0.001682 | 0.001840 | 0.001639 |
| access_m_fail1.test | COMPILE_FAIL | 0.026114 | 0.042695 | 0.086868 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.026379 | 0.040812 | 0.085988 | — | — | — |
| access_q_test.test | RUN | 0.228693 | 0.487355 | 0.684296 | 0.001611 | 0.001704 | 0.001586 |
| access_q_fail.test | COMPILE_FAIL | 0.020826 | 0.035404 | 0.068257 | — | — | — |
| access_v_test.test | RUN | 0.233660 | 0.506541 | 0.672779 | 0.001505 | 0.001746 | 0.001359 |
| access_v_fail1.test | COMPILE_FAIL | 0.019400 | 0.031062 | 0.061926 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.018734 | 0.031610 | 0.059293 | — | — | — |
| assign_test.test | RUN | 0.341245 | 0.785493 | 1.249101 | 0.001577 | 0.001861 | 0.001526 |
| to_string_test.test | RUN | 0.384453 | 1.277701 | 6.654011 | 0.001406 | 0.001748 | 0.001632 |
| cmp_vv_test.test | RUN | 0.279276 | 0.633334 | 0.856211 | 0.001564 | 0.001880 | 0.001462 |
| cross_test.test | RUN | 0.277063 | 0.610392 | 0.855541 | 0.001485 | 0.001899 | 0.001566 |
| div_eq_vs_test.test | RUN | 0.261458 | 0.541011 | 0.773904 | 0.001703 | 0.001868 | 0.001652 |
| div_vs_test.test | RUN | 0.263252 | 0.650893 | 0.868923 | 0.001615 | 0.001864 | 0.001544 |
| dot_vv_test.test | RUN | 0.256403 | 0.594080 | 0.809325 | 0.001472 | 0.001828 | 0.001642 |
| eq_vv_test.test | RUN | 0.280224 | 0.659407 | 0.829276 | 0.001507 | 0.001562 | 0.001865 |
| mag_v_test.test | RUN | 0.252592 | 0.556875 | 0.793600 | 0.001787 | 0.001826 | 0.001834 |
| mag_sqr_v_test.test | RUN | 0.250407 | 0.550128 | 0.799681 | 0.001582 | 0.001894 | 0.001676 |
| minus_v_test.test | RUN | 0.257432 | 0.635615 | 0.846463 | 0.001546 | 0.001858 | 0.001759 |
| minus_eq_vv_test.test | RUN | 0.255903 | 0.617384 | 0.767802 | 0.001621 | 0.001747 | 0.001554 |
| minus_vv_test.test | RUN | 0.264886 | 0.669422 | 0.863647 | 0.001571 | 0.001632 | 0.001610 |
| mul_eq_vs_test.test | RUN | 0.256087 | 0.552122 | 0.832942 | 0.001614 | 0.001900 | 0.001509 |
| mul_vs_test.test | RUN | 0.277435 | 0.664117 | 0.897639 | 0.001331 | 0.001925 | 0.001634 |
| mul_sv_test.test | RUN | 0.279132 | 0.664419 | 0.830336 | 0.001382 | 0.001802 | 0.001570 |
| mul_vm_test.test | RUN | 0.382205 | 1.188055 | 1.337116 | 0.001524 | 0.001755 | 0.001701 |
| normalize_v_test.test | RUN | 0.275218 | 0.815165 | 0.906170 | 0.001850 | 0.001659 | 0.001621 |
| plus_eq_vv_test.test | RUN | 0.266968 | 0.629103 | 0.759765 | 0.001614 | 0.001624 | 0.001675 |
| plus_vv_test.test | RUN | 0.272783 | 0.670834 | 0.863849 | 0.001474 | 0.001840 | 0.001407 |
| scalar_cast_v_test.test | RUN | 0.258581 | 0.507418 | 0.773884 | 0.001499 | 0.001632 | 0.001542 |
| vec_index_test.test | RUN | 0.220887 | 0.522084 | 0.663945 | 0.001494 | 0.001694 | 0.001418 |
| vec_register_test.test | RUN | 0.145551 | 0.450054 | 0.499849 | 0.001619 | 0.001614 | 0.001429 |
| cmp_mm_test.test | RUN | 0.417482 | 1.444450 | 1.647677 | 0.001739 | 0.001924 | 0.001679 |
| determinant_test.test | RUN | 0.300231 | 0.745509 | 0.947488 | 0.001888 | 0.001725 | 0.001570 |
| div_eq_ms_test.test | RUN | 0.298181 | 0.708439 | 1.080149 | 0.001614 | 0.001882 | 0.001652 |
| div_ms_test.test | RUN | 0.357466 | 1.097488 | 1.295820 | 0.001735 | 0.001753 | 0.001680 |
| eq_mm_test.test | RUN | 0.407882 | 1.339178 | 1.583180 | 0.001854 | 0.001643 | 0.001490 |
| minus_m_test.test | RUN | 0.345973 | 1.082126 | 1.203013 | 0.001648 | 0.001739 | 0.001679 |
| minus_eq_mm_test.test | RUN | 0.332116 | 1.015675 | 1.163379 | 0.001275 | 0.001784 | 0.001764 |
| minus_mm_test.test | RUN | 0.367732 | 1.265846 | 1.364122 | 0.001842 | 0.001868 | 0.001802 |
| mul_eq_mm_test.test | RUN | 0.313522 | 0.936632 | 1.018992 | 0.001810 | 0.001819 | 0.001804 |
| mul_eq_ms_test.test | RUN | 0.314359 | 0.694782 | 1.104718 | 0.001762 | 0.001814 | 0.001902 |
| mul_mm_test.test | RUN | 0.442017 | 2.088612 | 1.708898 | 0.001817 | 0.001869 | 0.001894 |
| mul_ms_test.test | RUN | 0.372689 | 1.101894 | 1.334257 | 0.001591 | 0.001746 | 0.001737 |
| mul_sm_test.test | RUN | 0.364739 | 1.096557 | 1.319904 | 0.001770 | 0.001783 | 0.001732 |
| mul_mv_test.test | RUN | 0.369798 | 1.167211 | 1.320836 | 0.001717 | 0.001781 | 0.001596 |
| inverse_m_test.test | RUN | 0.468975 | 2.158481 | 1.890900 | 0.001730 | 0.001791 | 0.001547 |
| plus_eq_mm_test.test | RUN | 0.323261 | 1.037252 | 1.110021 | 0.001604 | 0.001818 | 0.001728 |
| plus_mm_test.test | RUN | 0.372379 | 1.260292 | 1.360433 | 0.001668 | 0.001884 | 0.001539 |
| scalar_cast_m_test.test | RUN | 0.287064 | 0.593730 | 0.831356 | 0.001652 | 0.001830 | 0.001675 |
| mat_index_test.test | RUN | 0.239839 | 0.557537 | 0.716652 | 0.001578 | 0.001728 | 0.001846 |
| cmp_qq_test.test | RUN | 0.256175 | 0.513578 | 0.696430 | 0.001762 | 0.001351 | 0.001777 |
| conjugate_test.test | RUN | 0.246714 | 0.536161 | 0.761181 | 0.001830 | 0.001864 | 0.001628 |
| normalize_q_test.test | RUN | 0.254963 | 0.595237 | 0.787321 | 0.001672 | 0.001710 | 0.001840 |
| div_eq_qs_test.test | RUN | 0.258304 | 0.506571 | 0.738567 | 0.001610 | 0.001416 | 0.001731 |
| div_qs_test.test | RUN | 0.258298 | 0.542288 | 0.745592 | 0.001799 | 0.001769 | 0.001861 |
| dot_qq_test.test | RUN | 0.248937 | 0.526038 | 0.764336 | 0.001706 | 0.001838 | 0.001721 |
| eq_qq_test.test | RUN | 0.259101 | 0.565141 | 0.774968 | 0.001740 | 0.001758 | 0.001932 |
| inverse_q_test.test | RUN | 0.308819 | 0.732875 | 0.920031 | 0.001599 | 0.001551 | 0.001845 |
| mag_q_test.test | RUN | 0.262839 | 0.550089 | 0.710426 | 0.001876 | 0.001584 | 0.001729 |
| mag_sqr_q_test.test | RUN | 0.248502 | 0.526829 | 0.752951 | 0.001600 | 0.001862 | 0.001715 |
| minus_q_test.test | RUN | 0.259681 | 0.540018 | 0.756509 | 0.001617 | 0.001870 | 0.001780 |
| minus_eq_qq_test.test | RUN | 0.241170 | 0.525907 | 0.686522 | 0.001652 | 0.001527 | 0.001700 |
| minus_qq_test.test | RUN | 0.253931 | 0.543941 | 0.764568 | 0.001724 | 0.001609 | 0.001894 |
| mul_eq_qs_test.test | RUN | 0.249207 | 0.497082 | 0.739498 | 0.001560 | 0.001914 | 0.001736 |
| mul_qs_test.test | RUN | 0.249190 | 0.539887 | 0.745633 | 0.001750 | 0.001932 | 0.001781 |
| mul_qv_test.test | RUN | 0.300607 | 0.729378 | 0.976044 | 0.001788 | 0.001634 | 0.001722 |
| mul_qq_test.test | RUN | 0.297866 | 0.742635 | 0.930384 | 0.001816 | 0.001686 | 0.001783 |
| mul_eq_qq_test.test | RUN | 0.302685 | 0.732930 | 0.920648 | 0.001516 | 0.001758 | 0.001598 |
| plus_eq_qq_test.test | RUN | 0.256598 | 0.536724 | 0.734625 | 0.001853 | 0.001821 | 0.001728 |
| plus_qq_test.test | RUN | 0.248563 | 0.543078 | 0.746992 | 0.001735 | 0.001824 | 0.001677 |
| scalar_cast_q_test.test | RUN | 0.247713 | 0.513389 | 0.724638 | 0.001814 | 0.001576 | 0.001762 |
| slerp_test.test | RUN | 0.268095 | 1.013597 | 0.872215 | 0.018746 | 0.014913 | 0.015753 |
| convert_to_test.test | RUN | 0.372746 | 0.945220 | 1.346309 | 0.001800 | 0.001626 | 0.001701 |
| rot_mat_test.test | RUN | 0.548773 | 4.171745 | 4.136829 | 0.044458 | 0.039628 | 0.035278 |
| rot_quat_test.test | RUN | 0.320077 | 0.854212 | 0.950974 | 0.001606 | 0.001776 | 0.001776 |
| rotx_mat_test.test | RUN | 0.353126 | 1.120569 | 1.213982 | 0.001840 | 0.001896 | 0.001716 |
| rotx_quat_test.test | RUN | 0.309456 | 0.733454 | 0.902858 | 0.002020 | 0.002372 | 0.001703 |
| roty_mat_test.test | RUN | 0.360301 | 1.130696 | 1.265194 | 0.001846 | 0.001745 | 0.001903 |
| roty_quat_test.test | RUN | 0.310784 | 0.728845 | 0.815573 | 0.001568 | 0.001873 | 0.001856 |
| rotz_mat_test.test | RUN | 0.365185 | 1.275166 | 1.302334 | 0.001828 | 0.001626 | 0.001845 |
| rotz_quat_test.test | RUN | 0.310262 | 0.733767 | 0.840326 | 0.001793 | 0.001779 | 0.001699 |
| zero_vec_test.test | RUN | 0.262226 | 0.635770 | 0.759790 | 0.001622 | 0.001696 | 0.001617 |
| zero_mat_test.test | RUN | 0.318812 | 1.036214 | 1.088045 | 0.001804 | 0.001852 | 0.001595 |
| zero_quat_test.test | RUN | 0.255508 | 0.533109 | 0.735679 | 0.001618 | 0.001781 | 0.001781 |
| identity_mat_test.test | RUN | 0.304316 | 0.784883 | 0.963521 | 0.001876 | 0.001609 | 0.001646 |
| identity_quat_test.test | RUN | 0.247840 | 0.508334 | 0.737008 | 0.001836 | 0.001924 | 0.001547 |
| col_test.test | RUN | 0.471463 | 1.645486 | 2.099799 | 0.001846 | 0.001665 | 0.001734 |
| col_mat_test.test | RUN | 0.316692 | 0.747181 | 1.019149 | 0.001578 | 0.001772 | 0.001715 |
| neg_col_test.test | RUN | 0.371949 | 1.015854 | 1.287248 | 0.001436 | 0.001912 | 0.001551 |
| neg_row_test.test | RUN | 0.380662 | 1.067980 | 1.270131 | 0.001818 | 0.001886 | 0.001437 |
| del_col_test.test | RUN | 0.395498 | 1.158527 | 1.325884 | 0.001804 | 0.001948 | 0.001630 |
| del_row_test.test | RUN | 0.379454 | 1.177135 | 1.278108 | 0.001862 | 0.001780 | 0.001876 |
| del_row_col_test.test | RUN | 0.526718 | 2.191386 | 2.496110 | 0.001832 | 0.001838 | 0.001829 |
| swap_cols_test.test | RUN | 0.688229 | 2.827780 | 2.999328 | 0.001684 | 0.001692 | 0.001838 |
| swap_rows_test.test | RUN | 0.730892 | 3.014185 | 2.981727 | 0.001870 | 0.001578 | 0.001710 |
| diag_test.test | RUN | 0.317743 | 0.780477 | 1.155065 | 0.001834 | 0.001820 | 0.001836 |
| diag_mat_test.test | RUN | 0.332019 | 0.760765 | 0.962446 | 0.001656 | 0.001730 | 0.001703 |
| row_test.test | RUN | 0.478639 | 1.591277 | 1.987472 | 0.001657 | 0.001852 | 0.001743 |
| row_mat_test.test | RUN | 0.309588 | 0.722673 | 0.972195 | 0.001747 | 0.001690 | 0.001666 |
| transpose_test.test | RUN | 0.367194 | 1.101924 | 1.312547 | 0.001628 | 0.001804 | 0.001471 |
| translation_test.test | RUN | 0.290109 | 0.687572 | 0.957450 | 0.001534 | 0.001689 | 0.001740 |
| translation_mat_test.test | RUN | 0.336468 | 0.714833 | 1.049097 | 0.001860 | 0.001651 | 0.001586 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.112636 | 0.213575 | 0.280226 | — | — | — |
| swizzle2_test2.test | RUN | 0.130830 | 0.306341 | 0.415481 | 0.001600 | 0.001340 | 0.001521 |
| swizzle2_test3.test | RUN | 0.130031 | 0.302518 | 0.411278 | 0.001579 | 0.001758 | 0.001324 |
| swizzle2_test4.test | RUN | 0.132575 | 0.306375 | 0.419728 | 0.001345 | 0.001862 | 0.001504 |
| swizzle2_test.test | RUN | 0.426664 | 0.849854 | 1.347318 | 0.001594 | 0.001617 | 0.001852 |
| swizzle3_test2.test | RUN | 0.153810 | 0.325572 | 0.476672 | 0.001815 | 0.001725 | 0.001896 |
| swizzle3_test3.test | RUN | 0.150609 | 0.332484 | 0.458229 | 0.001495 | 0.001588 | 0.001592 |
| swizzle3_test4.test | RUN | 0.150529 | 0.317089 | 0.457876 | 0.001555 | 0.001868 | 0.001507 |
| swizzle3_test.test | RUN | 0.422773 | 0.866842 | 1.375663 | 0.001535 | 0.001446 | 0.001759 |
| swizzle4_test2.test | RUN | 0.245321 | 0.470162 | 0.818498 | 0.001783 | 0.001890 | 0.001741 |
| swizzle4_test3.test | RUN | 0.247581 | 0.477442 | 0.788475 | 0.001496 | 0.001623 | 0.001602 |
| swizzle4_test4.test | RUN | 0.254146 | 0.465110 | 0.731034 | 0.001478 | 0.001505 | 0.001641 |
| swizzle4_test.test | RUN | 0.430138 | 0.947288 | 1.403545 | 0.001443 | 0.001723 | 0.001676 |
| deduce_scalar_test.test | COMPILE | 0.021498 | 0.046390 | 0.072392 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.160994 | 0.375854 | 0.476505 | 0.001606 | 0.001234 | 0.001556 |
| deduce_scalar_mv_test.test | RUN | 0.193802 | 0.396661 | 0.613393 | 0.001440 | 0.001528 | 0.001673 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.018036 | 0.030410 | 0.048185 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.019391 | 0.041014 | 0.060223 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.019598 | 0.039803 | 0.056984 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.017995 | 0.039015 | 0.058929 | — | — | — |
| interop_test.test | RUN | 0.199245 | 0.515815 | 0.863341 | 0.000645 | 0.000545 | 0.001184 |
| transform_test.test | RUN | 0.383744 | 0.777453 | 1.199984 | 0.001264 | 0.001368 | 0.001239 |
| projection_test.test | RUN | 0.227654 | 0.493626 | 0.671600 | 0.001482 | 0.001416 | 0.001298 |
| scalar_traits_test.test | COMPILE | 0.020240 | 0.042563 | 0.067195 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.023×† | 1.104×, 0.942× | 0.998× |
| clang | 0.961× | 0.959×, 0.964× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001015s | 0.001002s | 0.000991s | byte equality observed |
| access_q_test.test | 10 | 0.001020s | 0.001068s | 0.001010s | byte equality observed |
| access_v_test.test | 10 | 0.001030s | 0.001097s | 0.001028s | byte equality observed |
| assign_test.test | 10 | 0.001022s | 0.001096s | 0.001023s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001035s | 0.001129s | 0.001023s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001089s | 0.001108s | 0.001001s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001026s | 0.001088s | 0.001022s | byte equality observed |
| col_mat_test.test | 10 | 0.001049s | 0.001094s | 0.001008s | byte equality observed |
| col_test.test | 10 | 0.001028s | 0.001149s | 0.001005s | byte equality observed |
| conjugate_test.test | 10 | 0.001011s | 0.001037s | 0.001021s | byte equality observed |
| convert_to_test.test | 10 | 0.001015s | 0.001074s | 0.001009s | byte equality observed |
| cross_test.test | 10 | 0.001010s | 0.001043s | 0.001046s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001024s | 0.001003s | 0.001043s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001021s | 0.001092s | 0.001036s | byte equality observed |
| del_col_test.test | 10 | 0.001016s | 0.001080s | 0.001040s | byte equality observed |
| del_row_col_test.test | 10 | 0.001072s | 0.001013s | 0.000996s | byte equality observed |
| del_row_test.test | 10 | 0.001012s | 0.001113s | 0.001029s | byte equality observed |
| determinant_test.test | 10 | 0.001048s | 0.001097s | 0.001020s | byte equality observed |
| diag_mat_test.test | 10 | 0.001038s | 0.001097s | 0.000995s | byte equality observed |
| diag_test.test | 10 | 0.001009s | 0.001099s | 0.001005s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001008s | 0.001125s | 0.000997s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001029s | 0.001146s | 0.001013s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001027s | 0.001102s | 0.001007s | byte equality observed |
| div_ms_test.test | 10 | 0.001016s | 0.001113s | 0.001000s | byte equality observed |
| div_qs_test.test | 10 | 0.001031s | 0.001080s | 0.001015s | byte equality observed |
| div_vs_test.test | 10 | 0.001011s | 0.001082s | 0.000995s | byte equality observed |
| dot_qq_test.test | 10 | 0.001047s | 0.001077s | 0.000989s | byte equality observed |
| dot_vv_test.test | 10 | 0.000998s | 0.001079s | 0.001026s | byte equality observed |
| eq_mm_test.test | 10 | 0.001034s | 0.001098s | 0.001002s | byte equality observed |
| eq_qq_test.test | 10 | 0.001016s | 0.001123s | 0.001034s | byte equality observed |
| eq_vv_test.test | 10 | 0.001038s | 0.001084s | 0.001041s | byte equality observed |
| identity_mat_test.test | 10 | 0.001019s | 0.001073s | 0.000985s | byte equality observed |
| identity_quat_test.test | 10 | 0.001022s | 0.001108s | 0.001026s | byte equality observed |
| interop_test.test | 10 | 0.000470s | 0.000480s | 0.000973s | byte equality observed |
| inverse_m_test.test | 10 | 0.001125s | 0.001142s | 0.001034s | byte equality observed |
| inverse_q_test.test | 10 | 0.001048s | 0.001044s | 0.000971s | byte equality observed |
| mag_q_test.test | 10 | 0.001021s | 0.001049s | 0.001011s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001040s | 0.001092s | 0.001053s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001038s | 0.001092s | 0.001038s | byte equality observed |
| mag_v_test.test | 10 | 0.001032s | 0.001069s | 0.001020s | byte equality observed |
| mat_index_test.test | 10 | 0.001013s | 0.001026s | 0.001006s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001037s | 0.001005s | 0.000998s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001020s | 0.001033s | 0.001018s | byte equality observed |
| math_test.test | 10 | 0.001562s | 0.001593s | 0.001365s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001003s | 0.001066s | 0.001019s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001028s | 0.001070s | 0.001032s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001020s | 0.001063s | 0.001023s | byte equality observed |
| minus_m_test.test | 10 | 0.001022s | 0.001074s | 0.001041s | byte equality observed |
| minus_mm_test.test | 10 | 0.001026s | 0.001073s | 0.001046s | byte equality observed |
| minus_q_test.test | 10 | 0.001018s | 0.001085s | 0.001015s | byte equality observed |
| minus_qq_test.test | 10 | 0.001019s | 0.001088s | 0.001006s | byte equality observed |
| minus_v_test.test | 10 | 0.001015s | 0.001092s | 0.001011s | byte equality observed |
| minus_vv_test.test | 10 | 0.001040s | 0.001055s | 0.001014s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001046s | 0.001138s | 0.000980s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001025s | 0.001104s | 0.001000s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001019s | 0.001079s | 0.001024s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001015s | 0.001020s | 0.001028s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001045s | 0.001000s | 0.001046s | byte equality observed |
| mul_mm_test.test | 10 | 0.001041s | 0.001089s | 0.001013s | byte equality observed |
| mul_ms_test.test | 10 | 0.001027s | 0.001019s | 0.001007s | byte equality observed |
| mul_mv_test.test | 10 | 0.001038s | 0.001082s | 0.000995s | byte equality observed |
| mul_qq_test.test | 10 | 0.001034s | 0.001154s | 0.001013s | byte equality observed |
| mul_qs_test.test | 10 | 0.001008s | 0.001075s | 0.001009s | byte equality observed |
| mul_qv_test.test | 10 | 0.001035s | 0.001097s | 0.001003s | byte equality observed |
| mul_sm_test.test | 10 | 0.001006s | 0.001086s | 0.000984s | byte equality observed |
| mul_sv_test.test | 10 | 0.001008s | 0.001092s | 0.000997s | byte equality observed |
| mul_vm_test.test | 10 | 0.001005s | 0.001120s | 0.000987s | byte equality observed |
| mul_vs_test.test | 10 | 0.001000s | 0.001077s | 0.000999s | byte equality observed |
| neg_col_test.test | 10 | 0.001004s | 0.001102s | 0.000987s | byte equality observed |
| neg_row_test.test | 10 | 0.001011s | 0.000991s | 0.001004s | byte equality observed |
| normalize_q_test.test | 10 | 0.001009s | 0.001090s | 0.001013s | byte equality observed |
| normalize_v_test.test | 10 | 0.001026s | 0.001094s | 0.001038s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001007s | 0.001124s | 0.001055s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001015s | 0.001107s | 0.001036s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001002s | 0.001101s | 0.000996s | byte equality observed |
| plus_mm_test.test | 10 | 0.001024s | 0.001074s | 0.001018s | byte equality observed |
| plus_qq_test.test | 10 | 0.000991s | 0.001134s | 0.001009s | byte equality observed |
| plus_vv_test.test | 10 | 0.001002s | 0.001106s | 0.001035s | byte equality observed |
| projection_test.test | 10 | 0.001026s | 0.001096s | 0.001046s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001004s | 0.001089s | 0.001035s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000997s | 0.001088s | 0.000989s | byte equality observed |
| rot_mat_test.test | 1 | 0.029107s | 0.025700s | 0.026009s | byte equality observed |
| rot_quat_test.test | 10 | 0.001013s | 0.001017s | 0.000979s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001041s | 0.001040s | 0.001008s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001045s | 0.001075s | 0.001005s | byte equality observed |
| roty_mat_test.test | 10 | 0.001051s | 0.001088s | 0.001025s | byte equality observed |
| roty_quat_test.test | 10 | 0.001023s | 0.001095s | 0.001037s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001035s | 0.001121s | 0.001048s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001023s | 0.001131s | 0.001065s | byte equality observed |
| row_mat_test.test | 10 | 0.001012s | 0.001094s | 0.001030s | byte equality observed |
| row_test.test | 10 | 0.001064s | 0.001111s | 0.001005s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001047s | 0.001080s | 0.001049s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001002s | 0.001056s | 0.001032s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001014s | 0.001061s | 0.000969s | byte equality observed |
| slerp_test.test | 2 | 0.014060s | 0.011541s | 0.012008s | byte equality observed |
| swap_cols_test.test | 10 | 0.000991s | 0.001077s | 0.000959s | byte equality observed |
| swap_rows_test.test | 10 | 0.001057s | 0.001082s | 0.001004s | byte equality observed |
| swizzle2_test.test | 10 | 0.001035s | 0.001048s | 0.001055s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001056s | 0.001040s | 0.001032s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001034s | 0.001091s | 0.001038s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001034s | 0.001056s | 0.001051s | byte equality observed |
| swizzle3_test.test | 10 | 0.001023s | 0.001036s | 0.001064s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001018s | 0.001069s | 0.001019s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001011s | 0.001107s | 0.001003s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001017s | 0.001066s | 0.001024s | byte equality observed |
| swizzle4_test.test | 10 | 0.001015s | 0.001082s | 0.001045s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001032s | 0.001069s | 0.001019s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001021s | 0.001080s | 0.001037s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001034s | 0.001101s | 0.001054s | byte equality observed |
| to_string_test.test | 10 | 0.001064s | 0.001098s | 0.001072s | byte equality observed |
| transform_test.test | 10 | 0.000999s | 0.001079s | 0.001056s | byte equality observed |
| translation_mat_test.test | 10 | 0.001015s | 0.001063s | 0.001045s | byte equality observed |
| translation_test.test | 10 | 0.001006s | 0.001096s | 0.001008s | byte equality observed |
| transpose_test.test | 10 | 0.001035s | 0.001051s | 0.001031s | byte equality observed |
| vec_index_test.test | 10 | 0.001023s | 0.001076s | 0.001040s | byte equality observed |
| vec_register_test.test | 10 | 0.001032s | 0.001016s | 0.001017s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001024s | 0.001097s | 0.001024s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001044s | 0.001132s | 0.001038s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001020s | 0.001089s | 0.001019s | byte equality observed |
| zero_mat_test.test | 10 | 0.001039s | 0.001087s | 0.001045s | byte equality observed |
| zero_quat_test.test | 10 | 0.001048s | 0.001093s | 0.001046s | byte equality observed |
| zero_vec_test.test | 10 | 0.001037s | 0.001057s | 0.001020s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
