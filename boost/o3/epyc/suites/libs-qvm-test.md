# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.197664 | 0.493041 | 0.531199 | 0.001810 | 0.001897 | 0.002108 |
| mat_traits_array_test.test | RUN | 0.151584 | 0.477299 | 0.411887 | 0.001671 | 0.001364 | 0.001199 |
| mat_traits_std_array_test.test | RUN | 0.150336 | 0.369178 | 0.414381 | 0.001400 | 0.001527 | 0.001420 |
| vec_traits_array_test.test | RUN | 0.137745 | 0.377288 | 0.350509 | 0.001390 | 0.001401 | 0.001267 |
| vec_traits_gnuc_test.test | RUN | 0.239781 | 0.475167 | 0.661108 | 0.001299 | 0.001437 | 0.001604 |
| vec_traits_std_array_test.test | RUN | 0.128345 | 0.290127 | 0.349237 | 0.001520 | 0.001682 | 0.001307 |
| quat_traits_array_test.test | RUN | 0.127326 | 0.411922 | 0.343514 | 0.001215 | 0.001425 | 0.001600 |
| quat_traits_std_array_test.test | RUN | 0.126183 | 0.310319 | 0.349592 | 0.001364 | 0.001591 | 0.001789 |
| access_m_test.test | RUN | 0.206866 | 0.687017 | 0.800802 | 0.001410 | 0.001656 | 0.001323 |
| access_m_fail1.test | COMPILE_FAIL | 0.020694 | 0.032806 | 0.056303 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.020214 | 0.032259 | 0.055141 | — | — | — |
| access_q_test.test | RUN | 0.174942 | 0.371958 | 0.464887 | 0.001366 | 0.001535 | 0.001666 |
| access_q_fail.test | COMPILE_FAIL | 0.015744 | 0.026627 | 0.045460 | — | — | — |
| access_v_test.test | RUN | 0.173409 | 0.376630 | 0.467686 | 0.001322 | 0.001596 | 0.001564 |
| access_v_fail1.test | COMPILE_FAIL | 0.014749 | 0.023398 | 0.044923 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.014141 | 0.023519 | 0.044965 | — | — | — |
| assign_test.test | RUN | 0.254231 | 0.600707 | 0.831260 | 0.001707 | 0.002740 | 0.001504 |
| to_string_test.test | RUN | 0.287801 | 0.985316 | 5.001177 | 0.001407 | 0.001540 | 0.001611 |
| cmp_vv_test.test | RUN | 0.211172 | 0.512126 | 0.571027 | 0.001166 | 0.001516 | 0.001770 |
| cross_test.test | RUN | 0.204697 | 0.482291 | 0.573527 | 0.001377 | 0.001519 | 0.001489 |
| div_eq_vs_test.test | RUN | 0.193548 | 0.428806 | 0.569543 | 0.001749 | 0.001480 | 0.001426 |
| div_vs_test.test | RUN | 0.198843 | 0.502082 | 0.592070 | 0.001248 | 0.001683 | 0.001436 |
| dot_vv_test.test | RUN | 0.195417 | 0.452579 | 0.533435 | 0.001391 | 0.001505 | 0.001502 |
| eq_vv_test.test | RUN | 0.209919 | 0.510937 | 0.620342 | 0.001315 | 0.001505 | 0.001662 |
| mag_v_test.test | RUN | 0.189943 | 0.424345 | 0.544883 | 0.001757 | 0.001772 | 0.001380 |
| mag_sqr_v_test.test | RUN | 0.192630 | 0.426165 | 0.506399 | 0.001446 | 0.001631 | 0.001499 |
| minus_v_test.test | RUN | 0.196240 | 0.491477 | 0.578073 | 0.001455 | 0.001664 | 0.001259 |
| minus_eq_vv_test.test | RUN | 0.194256 | 0.484423 | 0.529852 | 0.001216 | 0.001691 | 0.001479 |
| minus_vv_test.test | RUN | 0.203732 | 0.520066 | 0.600150 | 0.001711 | 0.001652 | 0.001265 |
| mul_eq_vs_test.test | RUN | 0.192115 | 0.429110 | 0.571476 | 0.001440 | 0.001717 | 0.001634 |
| mul_vs_test.test | RUN | 0.202896 | 0.515504 | 0.585566 | 0.001390 | 0.001551 | 0.001438 |
| mul_sv_test.test | RUN | 0.205543 | 0.515312 | 0.606419 | 0.001262 | 0.001662 | 0.001606 |
| mul_vm_test.test | RUN | 0.285205 | 0.926846 | 0.881014 | 0.001346 | 0.001556 | 0.001494 |
| normalize_v_test.test | RUN | 0.214090 | 0.631316 | 0.609421 | 0.001349 | 0.001622 | 0.001631 |
| plus_eq_vv_test.test | RUN | 0.191839 | 0.490382 | 0.582011 | 0.001585 | 0.001391 | 0.001416 |
| plus_vv_test.test | RUN | 0.199929 | 0.531041 | 0.604769 | 0.001216 | 0.001784 | 0.001405 |
| scalar_cast_v_test.test | RUN | 0.190838 | 0.386674 | 0.533445 | 0.001328 | 0.001557 | 0.001368 |
| vec_index_test.test | RUN | 0.169715 | 0.387811 | 0.471450 | 0.001538 | 0.001524 | 0.001375 |
| vec_register_test.test | RUN | 0.111530 | 0.346453 | 0.351669 | 0.001601 | 0.001480 | 0.001509 |
| cmp_mm_test.test | RUN | 0.323910 | 1.113169 | 1.246877 | 0.001626 | 0.001666 | 0.001773 |
| determinant_test.test | RUN | 0.233039 | 0.590012 | 0.653625 | 0.001473 | 0.001425 | 0.001754 |
| div_eq_ms_test.test | RUN | 0.237441 | 0.523224 | 0.752786 | 0.001557 | 0.002007 | 0.001755 |
| div_ms_test.test | RUN | 0.271512 | 0.845685 | 0.917265 | 0.001534 | 0.001373 | 0.001805 |
| eq_mm_test.test | RUN | 0.318784 | 1.036322 | 1.170286 | 0.001680 | 0.001487 | 0.001639 |
| minus_m_test.test | RUN | 0.266948 | 0.835372 | 0.865992 | 0.001600 | 0.001609 | 0.001488 |
| minus_eq_mm_test.test | RUN | 0.256859 | 0.778918 | 0.818749 | 0.001471 | 0.001690 | 0.001564 |
| minus_mm_test.test | RUN | 0.291021 | 0.978566 | 0.953579 | 0.001595 | 0.001745 | 0.001698 |
| mul_eq_mm_test.test | RUN | 0.246379 | 0.732825 | 0.717450 | 0.001621 | 0.001607 | 0.001610 |
| mul_eq_ms_test.test | RUN | 0.241329 | 0.529525 | 0.724172 | 0.001530 | 0.001785 | 0.001730 |
| mul_mm_test.test | RUN | 0.319843 | 1.692619 | 1.180543 | 0.001670 | 0.001567 | 0.001644 |
| mul_ms_test.test | RUN | 0.275094 | 0.937524 | 0.939517 | 0.001382 | 0.001749 | 0.001577 |
| mul_sm_test.test | RUN | 0.280600 | 0.900452 | 0.925219 | 0.001600 | 0.001605 | 0.001544 |
| mul_mv_test.test | RUN | 0.287604 | 0.960329 | 0.894879 | 0.001522 | 0.001707 | 0.001535 |
| inverse_m_test.test | RUN | 0.373322 | 1.656781 | 1.341395 | 0.001547 | 0.001520 | 0.001545 |
| plus_eq_mm_test.test | RUN | 0.262376 | 0.801772 | 0.828468 | 0.001539 | 0.001650 | 0.001742 |
| plus_mm_test.test | RUN | 0.284018 | 0.971891 | 0.957775 | 0.001577 | 0.001588 | 0.001722 |
| scalar_cast_m_test.test | RUN | 0.219635 | 0.443420 | 0.600928 | 0.001578 | 0.001584 | 0.001675 |
| mat_index_test.test | RUN | 0.181080 | 0.428788 | 0.523898 | 0.001399 | 0.001686 | 0.001688 |
| cmp_qq_test.test | RUN | 0.193424 | 0.398755 | 0.504507 | 0.001616 | 0.001600 | 0.001530 |
| conjugate_test.test | RUN | 0.191753 | 0.410843 | 0.504144 | 0.001294 | 0.001571 | 0.001741 |
| normalize_q_test.test | RUN | 0.196980 | 0.462223 | 0.523643 | 0.001422 | 0.001454 | 0.001661 |
| div_eq_qs_test.test | RUN | 0.191718 | 0.381525 | 0.496151 | 0.001313 | 0.001605 | 0.001656 |
| div_qs_test.test | RUN | 0.194847 | 0.423947 | 0.511669 | 0.001560 | 0.001598 | 0.001682 |
| dot_qq_test.test | RUN | 0.199348 | 0.405186 | 0.512038 | 0.001280 | 0.001716 | 0.001793 |
| eq_qq_test.test | RUN | 0.198010 | 0.417035 | 0.516802 | 0.001356 | 0.001654 | 0.001764 |
| inverse_q_test.test | RUN | 0.238505 | 0.554722 | 0.641051 | 0.001700 | 0.001511 | 0.001754 |
| mag_q_test.test | RUN | 0.192331 | 0.414396 | 0.481480 | 0.001493 | 0.001401 | 0.001636 |
| mag_sqr_q_test.test | RUN | 0.195886 | 0.412004 | 0.508318 | 0.001490 | 0.001816 | 0.001802 |
| minus_q_test.test | RUN | 0.199654 | 0.414883 | 0.521033 | 0.001489 | 0.001700 | 0.001704 |
| minus_eq_qq_test.test | RUN | 0.193201 | 0.419257 | 0.496693 | 0.001686 | 0.001573 | 0.001644 |
| minus_qq_test.test | RUN | 0.191456 | 0.428155 | 0.520332 | 0.001492 | 0.001526 | 0.001605 |
| mul_eq_qs_test.test | RUN | 0.190204 | 0.395101 | 0.505171 | 0.001419 | 0.001682 | 0.001569 |
| mul_qs_test.test | RUN | 0.192347 | 0.412920 | 0.496476 | 0.001514 | 0.001666 | 0.001709 |
| mul_qv_test.test | RUN | 0.233498 | 0.563658 | 0.645289 | 0.001672 | 0.001536 | 0.001753 |
| mul_qq_test.test | RUN | 0.226585 | 0.549910 | 0.652079 | 0.001359 | 0.001383 | 0.001388 |
| mul_eq_qq_test.test | RUN | 0.230470 | 0.571449 | 0.637045 | 0.001654 | 0.001565 | 0.001656 |
| plus_eq_qq_test.test | RUN | 0.192291 | 0.407811 | 0.489197 | 0.001420 | 0.003181 | 0.001701 |
| plus_qq_test.test | RUN | 0.233795 | 0.435200 | 0.509588 | 0.001627 | 0.001355 | 0.001955 |
| scalar_cast_q_test.test | RUN | 0.225704 | 0.412200 | 0.550417 | 0.001318 | 0.001529 | 0.001760 |
| slerp_test.test | RUN | 0.209659 | 0.779198 | 0.643300 | 0.014685 | 0.011958 | 0.013840 |
| convert_to_test.test | RUN | 0.288398 | 0.702197 | 0.995692 | 0.001672 | 0.001311 | 0.001750 |
| rot_mat_test.test | RUN | 0.406897 | 3.253956 | 3.014897 | 0.031462 | 0.031576 | 0.028014 |
| rot_quat_test.test | RUN | 0.236460 | 0.675021 | 0.668143 | 0.001643 | 0.001726 | 0.001819 |
| rotx_mat_test.test | RUN | 0.266518 | 0.886608 | 0.867335 | 0.001414 | 0.001650 | 0.001724 |
| rotx_quat_test.test | RUN | 0.237306 | 0.562736 | 0.627771 | 0.001698 | 0.001616 | 0.001671 |
| roty_mat_test.test | RUN | 0.268759 | 0.896482 | 0.907270 | 0.001710 | 0.001588 | 0.001768 |
| roty_quat_test.test | RUN | 0.228579 | 0.592960 | 0.626848 | 0.001624 | 0.001726 | 0.001776 |
| rotz_mat_test.test | RUN | 0.274053 | 0.991065 | 0.869997 | 0.001505 | 0.001461 | 0.001742 |
| rotz_quat_test.test | RUN | 0.236746 | 0.557075 | 0.656229 | 0.001540 | 0.001606 | 0.001576 |
| zero_vec_test.test | RUN | 0.201026 | 0.487167 | 0.568909 | 0.001638 | 0.001448 | 0.001614 |
| zero_mat_test.test | RUN | 0.243038 | 0.783887 | 0.738416 | 0.001252 | 0.001643 | 0.001440 |
| zero_quat_test.test | RUN | 0.189992 | 0.415569 | 0.496127 | 0.001488 | 0.001335 | 0.001581 |
| identity_mat_test.test | RUN | 0.232933 | 0.595133 | 0.640040 | 0.001398 | 0.001449 | 0.001320 |
| identity_quat_test.test | RUN | 0.194936 | 0.391475 | 0.480864 | 0.001522 | 0.001642 | 0.001732 |
| col_test.test | RUN | 0.356843 | 1.225815 | 1.475189 | 0.001602 | 0.001692 | 0.001699 |
| col_mat_test.test | RUN | 0.230971 | 0.557794 | 0.666576 | 0.001633 | 0.001606 | 0.001678 |
| neg_col_test.test | RUN | 0.275861 | 0.761868 | 0.886905 | 0.001399 | 0.001638 | 0.001470 |
| neg_row_test.test | RUN | 0.284851 | 0.813821 | 0.879081 | 0.001626 | 0.001626 | 0.001358 |
| del_col_test.test | RUN | 0.286883 | 0.906089 | 0.906025 | 0.001615 | 0.001716 | 0.001737 |
| del_row_test.test | RUN | 0.284789 | 0.862002 | 0.920801 | 0.001596 | 0.001791 | 0.001690 |
| del_row_col_test.test | RUN | 0.395317 | 1.609372 | 1.718242 | 0.001598 | 0.001652 | 0.001717 |
| swap_cols_test.test | RUN | 0.517513 | 2.154387 | 2.152125 | 0.001581 | 0.001540 | 0.001793 |
| swap_rows_test.test | RUN | 0.566257 | 2.229694 | 2.134529 | 0.001367 | 0.001641 | 0.001672 |
| diag_test.test | RUN | 0.246743 | 0.615451 | 0.772977 | 0.001840 | 0.001658 | 0.001758 |
| diag_mat_test.test | RUN | 0.257627 | 0.576370 | 0.712428 | 0.001592 | 0.001658 | 0.001741 |
| row_test.test | RUN | 0.364055 | 1.217181 | 1.458889 | 0.001569 | 0.001380 | 0.001405 |
| row_mat_test.test | RUN | 0.238889 | 0.568742 | 0.670738 | 0.001774 | 0.001555 | 0.001732 |
| transpose_test.test | RUN | 0.341595 | 0.830374 | 0.907061 | 0.001558 | 0.001658 | 0.001666 |
| translation_test.test | RUN | 0.278513 | 0.532921 | 0.687586 | 0.001047 | 0.001459 | 0.001692 |
| translation_mat_test.test | RUN | 0.249894 | 0.555641 | 0.739270 | 0.001658 | 0.001382 | 0.001387 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.083581 | 0.157810 | 0.193150 | — | — | — |
| swizzle2_test2.test | RUN | 0.107055 | 0.231228 | 0.285686 | 0.001198 | 0.001374 | 0.001329 |
| swizzle2_test3.test | RUN | 0.106067 | 0.242188 | 0.296629 | 0.001225 | 0.001447 | 0.001449 |
| swizzle2_test4.test | RUN | 0.107315 | 0.232858 | 0.275207 | 0.001476 | 0.001622 | 0.001450 |
| swizzle2_test.test | RUN | 0.328724 | 0.642479 | 0.865591 | 0.001548 | 0.001481 | 0.001685 |
| swizzle3_test2.test | RUN | 0.114352 | 0.246474 | 0.313375 | 0.001286 | 0.001578 | 0.001551 |
| swizzle3_test3.test | RUN | 0.114642 | 0.245234 | 0.311167 | 0.001366 | 0.001366 | 0.001440 |
| swizzle3_test4.test | RUN | 0.113138 | 0.243332 | 0.305149 | 0.001243 | 0.001440 | 0.001370 |
| swizzle3_test.test | RUN | 0.348250 | 0.650821 | 0.864921 | 0.001465 | 0.001414 | 0.001652 |
| swizzle4_test2.test | RUN | 0.217465 | 0.355477 | 0.484548 | 0.001271 | 0.001668 | 0.001751 |
| swizzle4_test3.test | RUN | 0.218144 | 0.350926 | 0.491493 | 0.001336 | 0.001253 | 0.001454 |
| swizzle4_test4.test | RUN | 0.196446 | 0.351637 | 0.479897 | 0.001432 | 0.001214 | 0.001750 |
| swizzle4_test.test | RUN | 0.333611 | 0.694695 | 0.954688 | 0.001447 | 0.001568 | 0.001730 |
| deduce_scalar_test.test | COMPILE | 0.017331 | 0.036690 | 0.055891 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.125949 | 0.277406 | 0.330721 | 0.001512 | 0.001437 | 0.001202 |
| deduce_scalar_mv_test.test | RUN | 0.150935 | 0.301555 | 0.411773 | 0.001223 | 0.001463 | 0.001791 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.014576 | 0.023569 | 0.046779 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.015719 | 0.032672 | 0.045498 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.015972 | 0.030418 | 0.045613 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015055 | 0.030203 | 0.045281 | — | — | — |
| interop_test.test | RUN | 0.147314 | 0.381683 | 0.572346 | 0.000521 | 0.000649 | 0.001615 |
| transform_test.test | RUN | 0.293619 | 0.582318 | 0.802633 | 0.001183 | 0.001170 | 0.001230 |
| projection_test.test | RUN | 0.198460 | 0.372519 | 0.495994 | 0.001176 | 0.001226 | 0.001316 |
| scalar_traits_test.test | COMPILE | 0.016947 | 0.032755 | 0.051876 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968× | 0.978×, 0.958× | 1.004× |
| clang | 0.987× | 1.000×, 0.975× | 0.982× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000923s | 0.000887s | 0.000876s | byte equality observed |
| access_q_test.test | 10 | 0.000913s | 0.000887s | 0.000873s | byte equality observed |
| access_v_test.test | 10 | 0.000910s | 0.000873s | 0.000906s | byte equality observed |
| assign_test.test | 10 | 0.000911s | 0.000919s | 0.000873s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000915s | 0.000898s | 0.000883s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000907s | 0.000875s | 0.000902s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000914s | 0.000856s | 0.000883s | byte equality observed |
| col_mat_test.test | 10 | 0.000897s | 0.000884s | 0.000889s | byte equality observed |
| col_test.test | 10 | 0.000903s | 0.000887s | 0.000891s | byte equality observed |
| conjugate_test.test | 10 | 0.000905s | 0.000877s | 0.000896s | byte equality observed |
| convert_to_test.test | 10 | 0.000907s | 0.000873s | 0.000917s | byte equality observed |
| cross_test.test | 10 | 0.000901s | 0.000888s | 0.000906s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000902s | 0.000871s | 0.000889s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000911s | 0.000867s | 0.000896s | byte equality observed |
| del_col_test.test | 10 | 0.000904s | 0.000868s | 0.000893s | byte equality observed |
| del_row_col_test.test | 10 | 0.000899s | 0.000903s | 0.000890s | byte equality observed |
| del_row_test.test | 10 | 0.000901s | 0.000873s | 0.000931s | byte equality observed |
| determinant_test.test | 10 | 0.000904s | 0.000899s | 0.000916s | byte equality observed |
| diag_mat_test.test | 10 | 0.000897s | 0.000871s | 0.000908s | byte equality observed |
| diag_test.test | 10 | 0.000895s | 0.000881s | 0.000896s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000896s | 0.000873s | 0.000903s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000898s | 0.000845s | 0.000884s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000891s | 0.000843s | 0.000904s | byte equality observed |
| div_ms_test.test | 10 | 0.000900s | 0.000870s | 0.000902s | byte equality observed |
| div_qs_test.test | 10 | 0.000896s | 0.000886s | 0.000897s | byte equality observed |
| div_vs_test.test | 10 | 0.000895s | 0.000857s | 0.000911s | byte equality observed |
| dot_qq_test.test | 10 | 0.000889s | 0.000855s | 0.000909s | byte equality observed |
| dot_vv_test.test | 10 | 0.000898s | 0.000851s | 0.000914s | byte equality observed |
| eq_mm_test.test | 10 | 0.000905s | 0.000869s | 0.000917s | byte equality observed |
| eq_qq_test.test | 10 | 0.000927s | 0.000883s | 0.000921s | byte equality observed |
| eq_vv_test.test | 10 | 0.000917s | 0.000870s | 0.000904s | byte equality observed |
| identity_mat_test.test | 10 | 0.000914s | 0.000873s | 0.000892s | byte equality observed |
| identity_quat_test.test | 10 | 0.000914s | 0.000855s | 0.000899s | byte equality observed |
| interop_test.test | 10 | 0.000423s | 0.000395s | 0.000871s | byte equality observed |
| inverse_m_test.test | 10 | 0.000981s | 0.000907s | 0.000929s | byte equality observed |
| inverse_q_test.test | 10 | 0.000929s | 0.000865s | 0.000887s | byte equality observed |
| mag_q_test.test | 10 | 0.000917s | 0.000844s | 0.000892s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000906s | 0.000871s | 0.000894s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000914s | 0.000837s | 0.000889s | byte equality observed |
| mag_v_test.test | 10 | 0.000900s | 0.000856s | 0.000879s | byte equality observed |
| mat_index_test.test | 10 | 0.000916s | 0.000855s | 0.000893s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000921s | 0.000883s | 0.000898s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000916s | 0.000898s | 0.000908s | byte equality observed |
| math_test.test | 10 | 0.001334s | 0.001282s | 0.001152s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000898s | 0.000879s | 0.000910s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000894s | 0.000900s | 0.000897s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000925s | 0.000903s | 0.000897s | byte equality observed |
| minus_m_test.test | 10 | 0.000915s | 0.000899s | 0.000910s | byte equality observed |
| minus_mm_test.test | 10 | 0.000914s | 0.000901s | 0.000881s | byte equality observed |
| minus_q_test.test | 10 | 0.000919s | 0.000901s | 0.000883s | byte equality observed |
| minus_qq_test.test | 10 | 0.000917s | 0.000890s | 0.000867s | byte equality observed |
| minus_v_test.test | 10 | 0.000907s | 0.000907s | 0.000885s | byte equality observed |
| minus_vv_test.test | 10 | 0.000924s | 0.000889s | 0.000891s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000896s | 0.000886s | 0.000869s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000908s | 0.000869s | 0.000890s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000906s | 0.000902s | 0.000884s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000907s | 0.000895s | 0.000859s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000888s | 0.000895s | 0.000878s | byte equality observed |
| mul_mm_test.test | 10 | 0.000911s | 0.000918s | 0.000863s | byte equality observed |
| mul_ms_test.test | 10 | 0.000883s | 0.000879s | 0.000857s | byte equality observed |
| mul_mv_test.test | 10 | 0.000891s | 0.000868s | 0.000861s | byte equality observed |
| mul_qq_test.test | 10 | 0.000910s | 0.000877s | 0.000884s | byte equality observed |
| mul_qs_test.test | 10 | 0.000899s | 0.000884s | 0.000867s | byte equality observed |
| mul_qv_test.test | 10 | 0.000908s | 0.000887s | 0.000876s | byte equality observed |
| mul_sm_test.test | 10 | 0.000901s | 0.000876s | 0.000868s | byte equality observed |
| mul_sv_test.test | 10 | 0.000892s | 0.000873s | 0.000875s | byte equality observed |
| mul_vm_test.test | 10 | 0.000893s | 0.000881s | 0.000881s | byte equality observed |
| mul_vs_test.test | 10 | 0.000888s | 0.000879s | 0.000869s | byte equality observed |
| neg_col_test.test | 10 | 0.000890s | 0.000865s | 0.000884s | byte equality observed |
| neg_row_test.test | 10 | 0.000913s | 0.000850s | 0.000871s | byte equality observed |
| normalize_q_test.test | 10 | 0.000907s | 0.000887s | 0.000866s | byte equality observed |
| normalize_v_test.test | 10 | 0.000926s | 0.000866s | 0.000870s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000898s | 0.000870s | 0.000877s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000918s | 0.000889s | 0.000886s | byte equality observed |
| plus_eq_vv_test.test | 8 | 0.000900s | 0.000895s | 0.000894s | byte equality observed |
| plus_mm_test.test | 10 | 0.000905s | 0.000884s | 0.000900s | byte equality observed |
| plus_qq_test.test | 10 | 0.000910s | 0.000879s | 0.000904s | byte equality observed |
| plus_vv_test.test | 10 | 0.000900s | 0.000889s | 0.000898s | byte equality observed |
| projection_test.test | 10 | 0.000917s | 0.000881s | 0.000893s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000896s | 0.000891s | 0.000874s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000888s | 0.000874s | 0.000873s | byte equality observed |
| rot_mat_test.test | 1 | 0.019576s | 0.020524s | 0.019374s | byte equality observed |
| rot_quat_test.test | 10 | 0.000876s | 0.000873s | 0.000868s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000908s | 0.000905s | 0.000908s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000895s | 0.000895s | 0.000902s | byte equality observed |
| roty_mat_test.test | 10 | 0.000928s | 0.000886s | 0.000922s | byte equality observed |
| roty_quat_test.test | 10 | 0.000901s | 0.000887s | 0.000918s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000920s | 0.000902s | 0.000920s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000913s | 0.000908s | 0.000902s | byte equality observed |
| row_mat_test.test | 10 | 0.000892s | 0.000877s | 0.000933s | byte equality observed |
| row_test.test | 10 | 0.000903s | 0.000886s | 0.000918s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000885s | 0.000868s | 0.000900s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000908s | 0.000880s | 0.000922s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000863s | 0.000882s | 0.000869s | byte equality observed |
| slerp_test.test | 2 | 0.010121s | 0.008142s | 0.008804s | byte equality observed |
| swap_cols_test.test | 10 | 0.000877s | 0.000865s | 0.000868s | byte equality observed |
| swap_rows_test.test | 10 | 0.000912s | 0.000871s | 0.000913s | byte equality observed |
| swizzle2_test.test | 10 | 0.000890s | 0.000889s | 0.000909s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000923s | 0.000873s | 0.000902s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000907s | 0.000877s | 0.000912s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000892s | 0.000880s | 0.000909s | byte equality observed |
| swizzle3_test.test | 10 | 0.000888s | 0.000865s | 0.000903s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000899s | 0.000888s | 0.000916s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000885s | 0.000869s | 0.000883s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000887s | 0.000862s | 0.000908s | byte equality observed |
| swizzle4_test.test | 10 | 0.000906s | 0.000896s | 0.000889s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000891s | 0.000854s | 0.000887s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000891s | 0.000865s | 0.000895s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000893s | 0.000881s | 0.000876s | byte equality observed |
| to_string_test.test | 10 | 0.000943s | 0.000887s | 0.000943s | byte equality observed |
| transform_test.test | 10 | 0.000949s | 0.000867s | 0.000890s | byte equality observed |
| translation_mat_test.test | 10 | 0.000905s | 0.000867s | 0.000901s | byte equality observed |
| translation_test.test | 10 | 0.000899s | 0.000856s | 0.000916s | byte equality observed |
| transpose_test.test | 10 | 0.000898s | 0.000864s | 0.000891s | byte equality observed |
| vec_index_test.test | 10 | 0.000896s | 0.000873s | 0.000902s | byte equality observed |
| vec_register_test.test | 10 | 0.000899s | 0.000871s | 0.000914s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000914s | 0.000870s | 0.000900s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000878s | 0.000889s | 0.000919s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000898s | 0.000861s | 0.000895s | byte equality observed |
| zero_mat_test.test | 10 | 0.000900s | 0.000890s | 0.000905s | byte equality observed |
| zero_quat_test.test | 10 | 0.000901s | 0.000876s | 0.000889s | byte equality observed |
| zero_vec_test.test | 10 | 0.000883s | 0.000882s | 0.000890s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
