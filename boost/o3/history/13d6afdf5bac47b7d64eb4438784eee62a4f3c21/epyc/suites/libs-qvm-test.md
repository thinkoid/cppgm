# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.277264 | 0.652158 | 0.776651 | 0.002240 | 0.002230 | 0.002078 |
| mat_traits_array_test.test | RUN | 0.229315 | 0.654498 | 0.637901 | 0.001864 | 0.001597 | 0.001573 |
| mat_traits_std_array_test.test | RUN | 0.232682 | 0.506974 | 0.624798 | 0.001547 | 0.001626 | 0.001652 |
| vec_traits_array_test.test | RUN | 0.195904 | 0.509148 | 0.535169 | 0.001546 | 0.001618 | 0.001664 |
| vec_traits_gnuc_test.test | RUN | 0.313883 | 0.632228 | 1.050351 | 0.001673 | 0.001766 | 0.001720 |
| vec_traits_std_array_test.test | RUN | 0.166898 | 0.396608 | 0.532761 | 0.001725 | 0.001634 | 0.001741 |
| quat_traits_array_test.test | RUN | 0.164576 | 0.532331 | 0.518644 | 0.001601 | 0.001695 | 0.001656 |
| quat_traits_std_array_test.test | RUN | 0.165535 | 0.412089 | 0.525886 | 0.001355 | 0.001619 | 0.001708 |
| access_m_test.test | RUN | 0.270450 | 0.958533 | 1.185847 | 0.001566 | 0.001811 | 0.001860 |
| access_m_fail1.test | COMPILE_FAIL | 0.026544 | 0.041291 | 0.088932 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.025614 | 0.042346 | 0.085193 | — | — | — |
| access_q_test.test | RUN | 0.229981 | 0.487747 | 0.725050 | 0.001810 | 0.001846 | 0.001723 |
| access_q_fail.test | COMPILE_FAIL | 0.021469 | 0.032293 | 0.058391 | — | — | — |
| access_v_test.test | RUN | 0.227697 | 0.517140 | 0.685245 | 0.001525 | 0.001778 | 0.001802 |
| access_v_fail1.test | COMPILE_FAIL | 0.017680 | 0.032192 | 0.061271 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.018224 | 0.032800 | 0.059936 | — | — | — |
| assign_test.test | RUN | 0.337621 | 0.824137 | 1.244092 | 0.001428 | 0.001963 | 0.001530 |
| to_string_test.test | RUN | 0.380824 | 1.332445 | 6.915063 | 0.001628 | 0.001631 | 0.001900 |
| cmp_vv_test.test | RUN | 0.283765 | 0.645537 | 0.834778 | 0.001626 | 0.001854 | 0.001764 |
| cross_test.test | RUN | 0.272561 | 0.560411 | 0.874905 | 0.001832 | 0.001760 | 0.001863 |
| div_eq_vs_test.test | RUN | 0.284978 | 0.560365 | 0.838528 | 0.001583 | 0.001762 | 0.001860 |
| div_vs_test.test | RUN | 0.276458 | 0.693067 | 0.902060 | 0.001766 | 0.001855 | 0.001658 |
| dot_vv_test.test | RUN | 0.266779 | 0.630580 | 0.803016 | 0.001568 | 0.001555 | 0.001617 |
| eq_vv_test.test | RUN | 0.293715 | 0.686421 | 0.887108 | 0.001591 | 0.001557 | 0.001676 |
| mag_v_test.test | RUN | 0.255627 | 0.582757 | 0.742670 | 0.001566 | 0.001788 | 0.001654 |
| mag_sqr_v_test.test | RUN | 0.256046 | 0.541489 | 0.784217 | 0.001532 | 0.001948 | 0.001694 |
| minus_v_test.test | RUN | 0.260106 | 0.622980 | 0.864448 | 0.001541 | 0.001828 | 0.001620 |
| minus_eq_vv_test.test | RUN | 0.260399 | 0.648166 | 0.843811 | 0.001600 | 0.001806 | 0.001650 |
| minus_vv_test.test | RUN | 0.277879 | 0.700886 | 0.822443 | 0.001652 | 0.001830 | 0.001606 |
| mul_eq_vs_test.test | RUN | 0.258958 | 0.557659 | 0.834014 | 0.001752 | 0.001711 | 0.001544 |
| mul_vs_test.test | RUN | 0.268230 | 0.681059 | 0.882686 | 0.001594 | 0.001758 | 0.001665 |
| mul_sv_test.test | RUN | 0.268524 | 0.689237 | 0.842467 | 0.001430 | 0.001871 | 0.001674 |
| mul_vm_test.test | RUN | 0.361425 | 1.214644 | 1.345913 | 0.001709 | 0.001833 | 0.001552 |
| normalize_v_test.test | RUN | 0.269786 | 0.822558 | 0.833336 | 0.001566 | 0.001746 | 0.001686 |
| plus_eq_vv_test.test | RUN | 0.255768 | 0.659380 | 0.858627 | 0.001294 | 0.001609 | 0.001589 |
| plus_vv_test.test | RUN | 0.263459 | 0.709500 | 0.886143 | 0.001301 | 0.001902 | 0.001577 |
| scalar_cast_v_test.test | RUN | 0.246682 | 0.523562 | 0.779963 | 0.001612 | 0.001795 | 0.001674 |
| vec_index_test.test | RUN | 0.214169 | 0.526886 | 0.689573 | 0.001762 | 0.001809 | 0.001627 |
| vec_register_test.test | RUN | 0.140706 | 0.478428 | 0.512362 | 0.001624 | 0.001756 | 0.001714 |
| cmp_mm_test.test | RUN | 0.402916 | 1.502813 | 1.701502 | 0.001751 | 0.001672 | 0.001930 |
| determinant_test.test | RUN | 0.297286 | 0.789939 | 0.955071 | 0.001738 | 0.001845 | 0.001737 |
| div_eq_ms_test.test | RUN | 0.297410 | 0.719346 | 1.063738 | 0.001585 | 0.001893 | 0.001830 |
| div_ms_test.test | RUN | 0.349374 | 1.137598 | 1.308373 | 0.001395 | 0.001908 | 0.001521 |
| eq_mm_test.test | RUN | 0.409765 | 1.383120 | 1.612834 | 0.002664 | 0.001547 | 0.001577 |
| minus_m_test.test | RUN | 0.353226 | 1.118463 | 1.262995 | 0.001757 | 0.001909 | 0.001647 |
| minus_eq_mm_test.test | RUN | 0.336708 | 1.024443 | 1.198886 | 0.001504 | 0.001763 | 0.001712 |
| minus_mm_test.test | RUN | 0.368646 | 1.338136 | 1.393740 | 0.001784 | 0.001924 | 0.001816 |
| mul_eq_mm_test.test | RUN | 0.314643 | 0.974614 | 1.076245 | 0.001797 | 0.001954 | 0.001589 |
| mul_eq_ms_test.test | RUN | 0.300669 | 0.720351 | 1.091265 | 0.001818 | 0.001939 | 0.001700 |
| mul_mm_test.test | RUN | 0.423791 | 2.125042 | 1.721130 | 0.001725 | 0.001786 | 0.001537 |
| mul_ms_test.test | RUN | 0.355626 | 1.139402 | 1.355664 | 0.001526 | 0.001866 | 0.001628 |
| mul_sm_test.test | RUN | 0.358775 | 1.120633 | 1.371471 | 0.001808 | 0.002034 | 0.001721 |
| mul_mv_test.test | RUN | 0.378365 | 1.215885 | 1.399406 | 0.001772 | 0.001582 | 0.001940 |
| inverse_m_test.test | RUN | 0.477020 | 2.188212 | 1.886925 | 0.001904 | 0.001854 | 0.001737 |
| plus_eq_mm_test.test | RUN | 0.337425 | 1.059931 | 1.217033 | 0.001643 | 0.001836 | 0.001866 |
| plus_mm_test.test | RUN | 0.383609 | 1.298518 | 1.402653 | 0.001582 | 0.001869 | 0.001590 |
| scalar_cast_m_test.test | RUN | 0.296965 | 0.595702 | 0.884949 | 0.001782 | 0.001887 | 0.001726 |
| mat_index_test.test | RUN | 0.232041 | 0.561246 | 0.767555 | 0.001580 | 0.001683 | 0.001709 |
| cmp_qq_test.test | RUN | 0.251561 | 0.536683 | 0.762542 | 0.001608 | 0.001528 | 0.001607 |
| conjugate_test.test | RUN | 0.257598 | 0.553157 | 0.773772 | 0.001729 | 0.001854 | 0.001596 |
| normalize_q_test.test | RUN | 0.264371 | 0.625240 | 0.798943 | 0.001842 | 0.001681 | 0.001735 |
| div_eq_qs_test.test | RUN | 0.249167 | 0.500539 | 0.772906 | 0.001681 | 0.001660 | 0.001772 |
| div_qs_test.test | RUN | 0.257366 | 0.552175 | 0.781663 | 0.001623 | 0.001790 | 0.001636 |
| dot_qq_test.test | RUN | 0.256381 | 0.532046 | 0.786050 | 0.001835 | 0.001847 | 0.001594 |
| eq_qq_test.test | RUN | 0.260924 | 0.578974 | 0.795225 | 0.001711 | 0.001666 | 0.001908 |
| inverse_q_test.test | RUN | 0.309580 | 0.735678 | 0.969945 | 0.002076 | 0.001587 | 0.001819 |
| mag_q_test.test | RUN | 0.250993 | 0.576365 | 0.774286 | 0.001745 | 0.001859 | 0.001877 |
| mag_sqr_q_test.test | RUN | 0.254611 | 0.526687 | 0.770794 | 0.001556 | 0.001856 | 0.001473 |
| minus_q_test.test | RUN | 0.256726 | 0.540984 | 0.721181 | 0.001652 | 0.001909 | 0.001820 |
| minus_eq_qq_test.test | RUN | 0.266382 | 0.539955 | 0.764981 | 0.001509 | 0.001777 | 0.001948 |
| minus_qq_test.test | RUN | 0.260721 | 0.557315 | 0.748786 | 0.001715 | 0.001563 | 0.001661 |
| mul_eq_qs_test.test | RUN | 0.253526 | 0.514629 | 0.758428 | 0.001754 | 0.001860 | 0.001676 |
| mul_qs_test.test | RUN | 0.257301 | 0.544312 | 0.754359 | 0.001719 | 0.001942 | 0.001812 |
| mul_qv_test.test | RUN | 0.315540 | 0.746959 | 0.999468 | 0.001804 | 0.001922 | 0.001920 |
| mul_qq_test.test | RUN | 0.306530 | 0.747791 | 0.983579 | 0.001805 | 0.001653 | 0.001614 |
| mul_eq_qq_test.test | RUN | 0.303100 | 0.759331 | 0.975324 | 0.001826 | 0.001912 | 0.001650 |
| plus_eq_qq_test.test | RUN | 0.259346 | 0.532748 | 0.747918 | 0.001774 | 0.001679 | 0.001792 |
| plus_qq_test.test | RUN | 0.256820 | 0.545492 | 0.768776 | 0.001794 | 0.001838 | 0.001775 |
| scalar_cast_q_test.test | RUN | 0.252106 | 0.509550 | 0.768519 | 0.001662 | 0.001723 | 0.001741 |
| slerp_test.test | RUN | 0.276071 | 1.059943 | 0.893954 | 0.017810 | 0.014738 | 0.015630 |
| convert_to_test.test | RUN | 0.374077 | 0.975297 | 1.393886 | 0.001796 | 0.001778 | 0.001846 |
| rot_mat_test.test | RUN | 0.533154 | 4.266514 | 4.250984 | 0.045287 | 0.038970 | 0.035792 |
| rot_quat_test.test | RUN | 0.315141 | 0.922809 | 0.995668 | 0.001688 | 0.001772 | 0.001888 |
| rotx_mat_test.test | RUN | 0.351274 | 1.134164 | 1.273329 | 0.001600 | 0.002003 | 0.001506 |
| rotx_quat_test.test | RUN | 0.306941 | 0.750776 | 0.936303 | 0.001812 | 0.001937 | 0.001811 |
| roty_mat_test.test | RUN | 0.347658 | 1.159047 | 1.183624 | 0.001824 | 0.001902 | 0.001917 |
| roty_quat_test.test | RUN | 0.299951 | 0.748212 | 0.940442 | 0.001487 | 0.001981 | 0.001882 |
| rotz_mat_test.test | RUN | 0.364197 | 1.268038 | 1.362539 | 0.001814 | 0.001783 | 0.001764 |
| rotz_quat_test.test | RUN | 0.305549 | 0.779462 | 0.896357 | 0.001574 | 0.001704 | 0.001768 |
| zero_vec_test.test | RUN | 0.267993 | 0.645379 | 0.777785 | 0.001873 | 0.001590 | 0.001762 |
| zero_mat_test.test | RUN | 0.330332 | 1.053531 | 1.104482 | 0.001798 | 0.001890 | 0.001483 |
| zero_quat_test.test | RUN | 0.250540 | 0.555723 | 0.710185 | 0.001457 | 0.001808 | 0.001768 |
| identity_mat_test.test | RUN | 0.298542 | 0.771893 | 0.966319 | 0.001581 | 0.001890 | 0.001620 |
| identity_quat_test.test | RUN | 0.248664 | 0.522124 | 0.722841 | 0.001782 | 0.001891 | 0.001830 |
| col_test.test | RUN | 0.470774 | 1.657425 | 2.125962 | 0.001613 | 0.001758 | 0.001784 |
| col_mat_test.test | RUN | 0.306919 | 0.764983 | 0.989194 | 0.001698 | 0.001797 | 0.001830 |
| neg_col_test.test | RUN | 0.352956 | 1.052576 | 1.275294 | 0.001777 | 0.001938 | 0.001717 |
| neg_row_test.test | RUN | 0.364965 | 1.084216 | 1.321085 | 0.001812 | 0.001756 | 0.001532 |
| del_col_test.test | RUN | 0.375775 | 1.170451 | 1.317739 | 0.001621 | 0.001944 | 0.001768 |
| del_row_test.test | RUN | 0.372705 | 1.157773 | 1.289310 | 0.001699 | 0.001881 | 0.001719 |
| del_row_col_test.test | RUN | 0.522120 | 2.203985 | 2.505650 | 0.001870 | 0.001940 | 0.001634 |
| swap_cols_test.test | RUN | 0.688902 | 2.945631 | 3.032175 | 0.001620 | 0.001789 | 0.001842 |
| swap_rows_test.test | RUN | 0.739248 | 3.036776 | 3.032120 | 0.002005 | 0.001784 | 0.001936 |
| diag_test.test | RUN | 0.321559 | 0.780917 | 1.167951 | 0.001640 | 0.001862 | 0.001669 |
| diag_mat_test.test | RUN | 0.330297 | 0.787535 | 0.972642 | 0.001668 | 0.001908 | 0.001931 |
| row_test.test | RUN | 0.475473 | 1.622267 | 2.053963 | 0.001601 | 0.001938 | 0.001864 |
| row_mat_test.test | RUN | 0.307556 | 0.724202 | 0.991894 | 0.001727 | 0.001874 | 0.001580 |
| transpose_test.test | RUN | 0.364263 | 1.123855 | 1.364691 | 0.001751 | 0.001460 | 0.001588 |
| translation_test.test | RUN | 0.291914 | 0.714334 | 1.034986 | 0.001660 | 0.001528 | 0.001678 |
| translation_mat_test.test | RUN | 0.331013 | 0.738431 | 1.091823 | 0.001616 | 0.001580 | 0.001617 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.111433 | 0.204312 | 0.329466 | — | — | — |
| swizzle2_test2.test | RUN | 0.137742 | 0.312396 | 0.405806 | 0.001724 | 0.001599 | 0.001440 |
| swizzle2_test3.test | RUN | 0.133333 | 0.323817 | 0.423066 | 0.001562 | 0.001916 | 0.001602 |
| swizzle2_test4.test | RUN | 0.132882 | 0.305889 | 0.408856 | 0.001582 | 0.001968 | 0.001509 |
| swizzle2_test.test | RUN | 0.425384 | 0.854504 | 1.370077 | 0.001770 | 0.001685 | 0.001828 |
| swizzle3_test2.test | RUN | 0.151337 | 0.333322 | 0.474686 | 0.001674 | 0.001751 | 0.001658 |
| swizzle3_test3.test | RUN | 0.152249 | 0.327302 | 0.474455 | 0.001517 | 0.001755 | 0.001454 |
| swizzle3_test4.test | RUN | 0.147861 | 0.324610 | 0.488010 | 0.001574 | 0.001692 | 0.001818 |
| swizzle3_test.test | RUN | 0.418479 | 0.864821 | 1.417040 | 0.001752 | 0.001706 | 0.001820 |
| swizzle4_test2.test | RUN | 0.249784 | 0.464453 | 0.837538 | 0.001757 | 0.001927 | 0.001700 |
| swizzle4_test3.test | RUN | 0.255702 | 0.485095 | 0.781546 | 0.001619 | 0.001839 | 0.001487 |
| swizzle4_test4.test | RUN | 0.257839 | 0.471011 | 0.787301 | 0.001567 | 0.001462 | 0.001833 |
| swizzle4_test.test | RUN | 0.435374 | 0.967385 | 1.395710 | 0.001535 | 0.001891 | 0.001865 |
| deduce_scalar_test.test | COMPILE | 0.023296 | 0.049524 | 0.075650 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.161575 | 0.356206 | 0.521517 | 0.001526 | 0.001635 | 0.001592 |
| deduce_scalar_mv_test.test | RUN | 0.191036 | 0.425554 | 0.571005 | 0.001462 | 0.001759 | 0.001942 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.017913 | 0.030176 | 0.057788 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.019063 | 0.041636 | 0.064939 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.020067 | 0.039059 | 0.063389 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.017863 | 0.040398 | 0.061906 | — | — | — |
| interop_test.test | RUN | 0.196583 | 0.521679 | 0.827257 | 0.000719 | 0.000858 | 0.001328 |
| transform_test.test | RUN | 0.387871 | 0.715058 | 1.121351 | 0.001331 | 0.001470 | 0.001250 |
| projection_test.test | RUN | 0.243754 | 0.596421 | 0.827990 | 0.001393 | 0.001414 | 0.001369 |
| scalar_traits_test.test | COMPILE | 0.020265 | 0.042598 | 0.069856 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.893× | 0.908×, 0.877× | 1.001× |
| clang | 1.002×† | 1.013×, 0.992× | 1.053× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001009s | 0.000981s | 0.001005s | byte equality observed |
| access_q_test.test | 10 | 0.000989s | 0.001003s | 0.001070s | byte equality observed |
| access_v_test.test | 10 | 0.001013s | 0.001022s | 0.001049s | byte equality observed |
| assign_test.test | 10 | 0.001001s | 0.001018s | 0.001095s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001011s | 0.001013s | 0.001058s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001012s | 0.000985s | 0.001007s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001006s | 0.001008s | 0.001016s | byte equality observed |
| col_mat_test.test | 10 | 0.000989s | 0.001005s | 0.001088s | byte equality observed |
| col_test.test | 10 | 0.000994s | 0.001024s | 0.001113s | byte equality observed |
| conjugate_test.test | 10 | 0.001011s | 0.001001s | 0.001108s | byte equality observed |
| convert_to_test.test | 10 | 0.001033s | 0.000993s | 0.001081s | byte equality observed |
| cross_test.test | 10 | 0.001004s | 0.001013s | 0.001123s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001004s | 0.001000s | 0.001090s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001041s | 0.000999s | 0.001123s | byte equality observed |
| del_col_test.test | 10 | 0.001005s | 0.001007s | 0.001080s | byte equality observed |
| del_row_col_test.test | 10 | 0.001009s | 0.000992s | 0.001078s | byte equality observed |
| del_row_test.test | 10 | 0.001025s | 0.001001s | 0.001097s | byte equality observed |
| determinant_test.test | 10 | 0.001014s | 0.000996s | 0.001079s | byte equality observed |
| diag_mat_test.test | 10 | 0.001001s | 0.001004s | 0.001101s | byte equality observed |
| diag_test.test | 10 | 0.001030s | 0.001008s | 0.000988s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001021s | 0.001001s | 0.001082s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001023s | 0.001064s | 0.001121s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001029s | 0.001022s | 0.001123s | byte equality observed |
| div_ms_test.test | 10 | 0.001006s | 0.001022s | 0.001102s | byte equality observed |
| div_qs_test.test | 10 | 0.001016s | 0.001000s | 0.001117s | byte equality observed |
| div_vs_test.test | 10 | 0.001023s | 0.001014s | 0.001075s | byte equality observed |
| dot_qq_test.test | 10 | 0.001030s | 0.001007s | 0.001078s | byte equality observed |
| dot_vv_test.test | 10 | 0.001058s | 0.000972s | 0.001098s | byte equality observed |
| eq_mm_test.test | 10 | 0.001028s | 0.001024s | 0.001108s | byte equality observed |
| eq_qq_test.test | 10 | 0.001010s | 0.001030s | 0.001099s | byte equality observed |
| eq_vv_test.test | 10 | 0.000997s | 0.000992s | 0.001083s | byte equality observed |
| identity_mat_test.test | 10 | 0.001012s | 0.000999s | 0.001100s | byte equality observed |
| identity_quat_test.test | 10 | 0.001022s | 0.001008s | 0.001081s | byte equality observed |
| interop_test.test | 10 | 0.000460s | 0.000459s | 0.001077s | byte equality observed |
| inverse_m_test.test | 10 | 0.001047s | 0.001068s | 0.001121s | byte equality observed |
| inverse_q_test.test | 10 | 0.001003s | 0.001021s | 0.001080s | byte equality observed |
| mag_q_test.test | 10 | 0.001027s | 0.000995s | 0.001096s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001011s | 0.000995s | 0.001113s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000983s | 0.000982s | 0.001114s | byte equality observed |
| mag_v_test.test | 10 | 0.001005s | 0.001014s | 0.001099s | byte equality observed |
| mat_index_test.test | 10 | 0.000999s | 0.000977s | 0.001135s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000992s | 0.000987s | 0.001060s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000987s | 0.000985s | 0.000998s | byte equality observed |
| math_test.test | 10 | 0.001515s | 0.001471s | 0.001418s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001005s | 0.001025s | 0.001055s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001033s | 0.000978s | 0.001073s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001016s | 0.001046s | 0.001076s | byte equality observed |
| minus_m_test.test | 10 | 0.001005s | 0.001022s | 0.001111s | byte equality observed |
| minus_mm_test.test | 10 | 0.000997s | 0.000988s | 0.001052s | byte equality observed |
| minus_q_test.test | 10 | 0.001003s | 0.001049s | 0.001094s | byte equality observed |
| minus_qq_test.test | 10 | 0.001008s | 0.001009s | 0.001028s | byte equality observed |
| minus_v_test.test | 10 | 0.001027s | 0.001001s | 0.001063s | byte equality observed |
| minus_vv_test.test | 10 | 0.000997s | 0.001015s | 0.001045s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001013s | 0.001054s | 0.001067s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001028s | 0.001020s | 0.001048s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001027s | 0.001021s | 0.001101s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001019s | 0.000997s | 0.001091s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001008s | 0.001031s | 0.001058s | byte equality observed |
| mul_mm_test.test | 10 | 0.001043s | 0.001012s | 0.001035s | byte equality observed |
| mul_ms_test.test | 10 | 0.001051s | 0.001030s | 0.001062s | byte equality observed |
| mul_mv_test.test | 10 | 0.001028s | 0.001020s | 0.001033s | byte equality observed |
| mul_qq_test.test | 10 | 0.001053s | 0.001007s | 0.001109s | byte equality observed |
| mul_qs_test.test | 10 | 0.001009s | 0.000999s | 0.001061s | byte equality observed |
| mul_qv_test.test | 10 | 0.001027s | 0.001013s | 0.001100s | byte equality observed |
| mul_sm_test.test | 10 | 0.001005s | 0.000993s | 0.001070s | byte equality observed |
| mul_sv_test.test | 10 | 0.000979s | 0.001007s | 0.001048s | byte equality observed |
| mul_vm_test.test | 10 | 0.001024s | 0.001000s | 0.000983s | byte equality observed |
| mul_vs_test.test | 10 | 0.001015s | 0.000975s | 0.001107s | byte equality observed |
| neg_col_test.test | 10 | 0.001021s | 0.000994s | 0.001077s | byte equality observed |
| neg_row_test.test | 10 | 0.001074s | 0.000971s | 0.001078s | byte equality observed |
| normalize_q_test.test | 10 | 0.001047s | 0.000990s | 0.001111s | byte equality observed |
| normalize_v_test.test | 10 | 0.001032s | 0.001006s | 0.001072s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001029s | 0.001002s | 0.001095s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001035s | 0.000999s | 0.001087s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001009s | 0.000999s | 0.001057s | byte equality observed |
| plus_mm_test.test | 10 | 0.001023s | 0.000979s | 0.001094s | byte equality observed |
| plus_qq_test.test | 10 | 0.001024s | 0.001014s | 0.001112s | byte equality observed |
| plus_vv_test.test | 10 | 0.001007s | 0.001033s | 0.001082s | byte equality observed |
| projection_test.test | 10 | 0.001006s | 0.001039s | 0.001116s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001038s | 0.001041s | 0.001081s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000974s | 0.001003s | 0.001089s | byte equality observed |
| rot_mat_test.test | 1 | 0.030907s | 0.025298s | 0.025489s | byte equality observed |
| rot_quat_test.test | 10 | 0.000958s | 0.000968s | 0.001003s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001040s | 0.000986s | 0.001076s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001081s | 0.001044s | 0.001123s | byte equality observed |
| roty_mat_test.test | 10 | 0.001094s | 0.001034s | 0.001133s | byte equality observed |
| roty_quat_test.test | 10 | 0.001053s | 0.001002s | 0.001040s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001099s | 0.001028s | 0.001099s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001067s | 0.001017s | 0.001029s | byte equality observed |
| row_mat_test.test | 10 | 0.001025s | 0.001014s | 0.001100s | byte equality observed |
| row_test.test | 10 | 0.001075s | 0.001007s | 0.001108s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001068s | 0.000999s | 0.001075s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001088s | 0.000988s | 0.001080s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001057s | 0.000959s | 0.001093s | byte equality observed |
| slerp_test.test | 2 | 0.013726s | 0.011059s | 0.012640s | byte equality observed |
| swap_cols_test.test | 10 | 0.001006s | 0.000965s | 0.001038s | byte equality observed |
| swap_rows_test.test | 10 | 0.001115s | 0.000997s | 0.000971s | byte equality observed |
| swizzle2_test.test | 10 | 0.001072s | 0.001023s | 0.001019s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001089s | 0.000991s | 0.001058s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001104s | 0.001016s | 0.001076s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001119s | 0.001025s | 0.001087s | byte equality observed |
| swizzle3_test.test | 10 | 0.001130s | 0.001018s | 0.001066s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001113s | 0.001019s | 0.001096s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001093s | 0.001024s | 0.001034s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001086s | 0.001018s | 0.001070s | byte equality observed |
| swizzle4_test.test | 10 | 0.001079s | 0.001028s | 0.001105s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001003s | 0.000977s | 0.001045s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001086s | 0.000984s | 0.001050s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001034s | 0.000983s | 0.001045s | byte equality observed |
| to_string_test.test | 10 | 0.001071s | 0.001050s | 0.001076s | byte equality observed |
| transform_test.test | 10 | 0.001035s | 0.001023s | 0.001036s | byte equality observed |
| translation_mat_test.test | 10 | 0.001112s | 0.001019s | 0.001013s | byte equality observed |
| translation_test.test | 10 | 0.001080s | 0.001012s | 0.001069s | byte equality observed |
| transpose_test.test | 10 | 0.001100s | 0.000992s | 0.001087s | byte equality observed |
| vec_index_test.test | 10 | 0.001116s | 0.001021s | 0.001113s | byte equality observed |
| vec_register_test.test | 10 | 0.001093s | 0.001025s | 0.001110s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001092s | 0.001065s | 0.001074s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001079s | 0.001054s | 0.001075s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001098s | 0.001021s | 0.001097s | byte equality observed |
| zero_mat_test.test | 10 | 0.001032s | 0.001022s | 0.001082s | byte equality observed |
| zero_quat_test.test | 10 | 0.001083s | 0.001017s | 0.001115s | byte equality observed |
| zero_vec_test.test | 10 | 0.001103s | 0.000980s | 0.001074s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
