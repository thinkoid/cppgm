# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.202639 | 0.490803 | 0.487212 | 0.002014 | 0.001682 | 0.001783 |
| mat_traits_array_test.test | RUN | 0.158867 | 0.480579 | 0.377790 | 0.001605 | 0.001110 | 0.001340 |
| mat_traits_std_array_test.test | RUN | 0.159730 | 0.383125 | 0.373543 | 0.001316 | 0.001474 | 0.001047 |
| vec_traits_array_test.test | RUN | 0.138684 | 0.382058 | 0.323407 | 0.001222 | 0.001455 | 0.001163 |
| vec_traits_gnuc_test.test | RUN | 0.241829 | 0.442406 | 0.595259 | 0.001912 | 0.001458 | 0.001341 |
| vec_traits_std_array_test.test | RUN | 0.129709 | 0.285218 | 0.316902 | 0.001570 | 0.001340 | 0.001225 |
| quat_traits_array_test.test | RUN | 0.124375 | 0.382935 | 0.314757 | 0.001177 | 0.001436 | 0.001256 |
| quat_traits_std_array_test.test | RUN | 0.124345 | 0.287927 | 0.311663 | 0.001481 | 0.001369 | 0.001284 |
| access_m_test.test | RUN | 0.221373 | 0.691223 | 0.768805 | 0.001548 | 0.001795 | 0.001326 |
| access_m_fail1.test | COMPILE_FAIL | 0.021084 | 0.030534 | 0.051499 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.021180 | 0.031919 | 0.056725 | — | — | — |
| access_q_test.test | RUN | 0.185519 | 0.355783 | 0.472868 | 0.001387 | 0.001792 | 0.001467 |
| access_q_fail.test | COMPILE_FAIL | 0.016330 | 0.025827 | 0.064730 | — | — | — |
| access_v_test.test | RUN | 0.185764 | 0.380609 | 0.419605 | 0.001496 | 0.001604 | 0.001335 |
| access_v_fail1.test | COMPILE_FAIL | 0.015043 | 0.024169 | 0.040970 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013876 | 0.023186 | 0.039960 | — | — | — |
| assign_test.test | RUN | 0.279177 | 0.618768 | 0.775345 | 0.001618 | 0.001807 | 0.001504 |
| to_string_test.test | RUN | 0.311999 | 1.013875 | 4.625251 | 0.001415 | 0.003608 | 0.001450 |
| cmp_vv_test.test | RUN | 0.230608 | 0.509035 | 0.512753 | 0.001129 | 0.001662 | 0.001345 |
| cross_test.test | RUN | 0.226672 | 0.454429 | 0.524361 | 0.001488 | 0.001862 | 0.001728 |
| div_eq_vs_test.test | RUN | 0.196545 | 0.440285 | 0.520765 | 0.001588 | 0.003918 | 0.002224 |
| div_vs_test.test | RUN | 0.211977 | 0.601296 | 0.557928 | 0.001426 | 0.001485 | 0.001558 |
| dot_vv_test.test | RUN | 0.202754 | 0.546503 | 0.527828 | 0.001723 | 0.001404 | 0.001547 |
| eq_vv_test.test | RUN | 0.226507 | 0.530605 | 0.559051 | 0.001400 | 0.001701 | 0.001526 |
| mag_v_test.test | RUN | 0.207151 | 0.439241 | 0.504546 | 0.001829 | 0.001856 | 0.001391 |
| mag_sqr_v_test.test | RUN | 0.202214 | 0.434793 | 0.505165 | 0.001614 | 0.001683 | 0.001508 |
| minus_v_test.test | RUN | 0.208773 | 0.498464 | 0.517261 | 0.001346 | 0.001682 | 0.001538 |
| minus_eq_vv_test.test | RUN | 0.203828 | 0.478047 | 0.511897 | 0.001360 | 0.001502 | 0.001313 |
| minus_vv_test.test | RUN | 0.210884 | 0.512160 | 0.550588 | 0.001695 | 0.001714 | 0.001547 |
| mul_eq_vs_test.test | RUN | 0.201869 | 0.416412 | 0.503526 | 0.001458 | 0.001576 | 0.001358 |
| mul_vs_test.test | RUN | 0.201958 | 0.495172 | 0.581565 | 0.001475 | 0.001716 | 0.001273 |
| mul_sv_test.test | RUN | 0.203638 | 0.509816 | 0.595058 | 0.001308 | 0.001651 | 0.001430 |
| mul_vm_test.test | RUN | 0.287287 | 0.891532 | 0.832441 | 0.001338 | 0.001571 | 0.001358 |
| normalize_v_test.test | RUN | 0.216526 | 0.612059 | 0.567638 | 0.001504 | 0.001751 | 0.001426 |
| plus_eq_vv_test.test | RUN | 0.203565 | 0.494327 | 0.522409 | 0.001534 | 0.001651 | 0.001440 |
| plus_vv_test.test | RUN | 0.213607 | 0.549847 | 0.545420 | 0.001236 | 0.001765 | 0.001303 |
| scalar_cast_v_test.test | RUN | 0.189439 | 0.443271 | 0.469925 | 0.001712 | 0.001551 | 0.001465 |
| vec_index_test.test | RUN | 0.165327 | 0.445965 | 0.424793 | 0.001549 | 0.001135 | 0.001186 |
| vec_register_test.test | RUN | 0.107748 | 0.389963 | 0.313809 | 0.001616 | 0.001500 | 0.001449 |
| cmp_mm_test.test | RUN | 0.319736 | 1.104911 | 1.128567 | 0.001670 | 0.001790 | 0.001601 |
| determinant_test.test | RUN | 0.247228 | 0.566795 | 0.607220 | 0.001768 | 0.001561 | 0.001341 |
| div_eq_ms_test.test | RUN | 0.250323 | 0.545587 | 0.683653 | 0.001636 | 0.001588 | 0.001668 |
| div_ms_test.test | RUN | 0.291048 | 0.868466 | 0.846783 | 0.001426 | 0.001390 | 0.001591 |
| eq_mm_test.test | RUN | 0.331670 | 1.032612 | 1.079153 | 0.001736 | 0.001383 | 0.001527 |
| minus_m_test.test | RUN | 0.286888 | 0.848690 | 0.821453 | 0.001698 | 0.001726 | 0.001300 |
| minus_eq_mm_test.test | RUN | 0.269722 | 0.783754 | 0.758594 | 0.001422 | 0.001464 | 0.001369 |
| minus_mm_test.test | RUN | 0.303322 | 0.990312 | 0.898690 | 0.001776 | 0.001707 | 0.001613 |
| mul_eq_mm_test.test | RUN | 0.274012 | 0.699009 | 0.683759 | 0.001572 | 0.001508 | 0.001514 |
| mul_eq_ms_test.test | RUN | 0.275293 | 0.508799 | 0.677991 | 0.001525 | 0.001690 | 0.001704 |
| mul_mm_test.test | RUN | 0.347455 | 1.604887 | 1.131884 | 0.001764 | 0.001556 | 0.001537 |
| mul_ms_test.test | RUN | 0.300499 | 0.852438 | 0.887130 | 0.001509 | 0.001750 | 0.001552 |
| mul_sm_test.test | RUN | 0.300419 | 0.888030 | 0.880547 | 0.001769 | 0.001798 | 0.001487 |
| mul_mv_test.test | RUN | 0.311127 | 0.938001 | 0.873530 | 0.001692 | 0.001329 | 0.001648 |
| inverse_m_test.test | RUN | 0.420116 | 1.734935 | 1.266572 | 0.001944 | 0.001867 | 0.001614 |
| plus_eq_mm_test.test | RUN | 0.284360 | 0.841301 | 0.788341 | 0.001820 | 0.001838 | 0.001608 |
| plus_mm_test.test | RUN | 0.309883 | 1.025562 | 0.917901 | 0.001426 | 0.001784 | 0.001552 |
| scalar_cast_m_test.test | RUN | 0.245265 | 0.476930 | 0.577568 | 0.001524 | 0.001841 | 0.001687 |
| mat_index_test.test | RUN | 0.200910 | 0.450395 | 0.500604 | 0.001706 | 0.001632 | 0.001783 |
| cmp_qq_test.test | RUN | 0.207326 | 0.399023 | 0.495698 | 0.001784 | 0.001565 | 0.001476 |
| conjugate_test.test | RUN | 0.208109 | 0.394517 | 0.519169 | 0.001441 | 0.001653 | 0.001431 |
| normalize_q_test.test | RUN | 0.211545 | 0.427928 | 0.525746 | 0.001482 | 0.001518 | 0.001721 |
| div_eq_qs_test.test | RUN | 0.200719 | 0.372133 | 0.502952 | 0.001609 | 0.001205 | 0.001674 |
| div_qs_test.test | RUN | 0.187441 | 0.403964 | 0.525064 | 0.001572 | 0.001748 | 0.001845 |
| dot_qq_test.test | RUN | 0.190439 | 0.409218 | 0.529924 | 0.001413 | 0.001690 | 0.001593 |
| eq_qq_test.test | RUN | 0.193958 | 0.422719 | 0.534340 | 0.001618 | 0.001605 | 0.001569 |
| inverse_q_test.test | RUN | 0.232869 | 0.557864 | 0.659943 | 0.001696 | 0.001829 | 0.001686 |
| mag_q_test.test | RUN | 0.188979 | 0.414179 | 0.505237 | 0.001706 | 0.001510 | 0.001900 |
| mag_sqr_q_test.test | RUN | 0.193607 | 0.409488 | 0.498592 | 0.001426 | 0.001790 | 0.001566 |
| minus_q_test.test | RUN | 0.200915 | 0.427421 | 0.524336 | 0.001624 | 0.001804 | 0.001615 |
| minus_eq_qq_test.test | RUN | 0.187809 | 0.426436 | 0.482710 | 0.001750 | 0.001832 | 0.001676 |
| minus_qq_test.test | RUN | 0.186142 | 0.443312 | 0.509602 | 0.001706 | 0.001794 | 0.001590 |
| mul_eq_qs_test.test | RUN | 0.187963 | 0.409821 | 0.488334 | 0.001442 | 0.001810 | 0.001598 |
| mul_qs_test.test | RUN | 0.203783 | 0.436607 | 0.508992 | 0.001702 | 0.001646 | 0.001735 |
| mul_qv_test.test | RUN | 0.255582 | 0.573843 | 0.637834 | 0.001608 | 0.001770 | 0.001862 |
| mul_qq_test.test | RUN | 0.247509 | 0.586529 | 0.642230 | 0.001494 | 0.001800 | 0.001458 |
| mul_eq_qq_test.test | RUN | 0.250742 | 0.579578 | 0.626022 | 0.001450 | 0.001781 | 0.001402 |
| plus_eq_qq_test.test | RUN | 0.215053 | 0.429844 | 0.489280 | 0.001788 | 0.001780 | 0.001844 |
| plus_qq_test.test | RUN | 0.212711 | 0.442288 | 0.558417 | 0.001762 | 0.001572 | 0.001630 |
| scalar_cast_q_test.test | RUN | 0.211823 | 0.401076 | 0.508404 | 0.002030 | 0.001502 | 0.001487 |
| slerp_test.test | RUN | 0.227428 | 0.772527 | 0.619956 | 0.014866 | 0.011620 | 0.013119 |
| convert_to_test.test | RUN | 0.310959 | 0.702813 | 0.966488 | 0.001885 | 0.001609 | 0.001788 |
| rot_mat_test.test | RUN | 0.457999 | 3.359794 | 3.017830 | 0.031185 | 0.032306 | 0.028906 |
| rot_quat_test.test | RUN | 0.262593 | 0.656056 | 0.674503 | 0.001532 | 0.001819 | 0.001726 |
| rotx_mat_test.test | RUN | 0.295047 | 0.890743 | 0.917084 | 0.001800 | 0.001902 | 0.001801 |
| rotx_quat_test.test | RUN | 0.268639 | 0.559654 | 0.673242 | 0.001849 | 0.001770 | 0.001688 |
| roty_mat_test.test | RUN | 0.296176 | 0.968368 | 0.887760 | 0.001595 | 0.001692 | 0.001383 |
| roty_quat_test.test | RUN | 0.264697 | 0.668172 | 0.579980 | 0.001518 | 0.001733 | 0.001680 |
| rotz_mat_test.test | RUN | 0.304889 | 1.069514 | 0.839265 | 0.001889 | 0.001416 | 0.001715 |
| rotz_quat_test.test | RUN | 0.243577 | 0.595913 | 0.624607 | 0.001457 | 0.001612 | 0.001688 |
| zero_vec_test.test | RUN | 0.208919 | 0.522923 | 0.542360 | 0.001618 | 0.001634 | 0.001338 |
| zero_mat_test.test | RUN | 0.254376 | 0.836613 | 0.784620 | 0.001582 | 0.001727 | 0.001701 |
| zero_quat_test.test | RUN | 0.188108 | 0.437750 | 0.521377 | 0.001484 | 0.001612 | 0.001310 |
| identity_mat_test.test | RUN | 0.235589 | 0.626196 | 0.637068 | 0.001314 | 0.001713 | 0.001489 |
| identity_quat_test.test | RUN | 0.196265 | 0.396455 | 0.511234 | 0.001575 | 0.001688 | 0.001662 |
| col_test.test | RUN | 0.351156 | 1.190055 | 1.483450 | 0.001576 | 0.001648 | 0.001623 |
| col_mat_test.test | RUN | 0.235430 | 0.552665 | 0.687865 | 0.001578 | 0.001570 | 0.001850 |
| neg_col_test.test | RUN | 0.270417 | 0.766840 | 0.894454 | 0.001461 | 0.001606 | 0.001473 |
| neg_row_test.test | RUN | 0.287800 | 0.782192 | 0.877383 | 0.001707 | 0.001828 | 0.001699 |
| del_col_test.test | RUN | 0.288143 | 0.876788 | 0.885533 | 0.001662 | 0.001682 | 0.001621 |
| del_row_test.test | RUN | 0.286015 | 0.889493 | 0.860964 | 0.001586 | 0.001738 | 0.001609 |
| del_row_col_test.test | RUN | 0.399640 | 1.675999 | 1.620007 | 0.001718 | 0.001501 | 0.001734 |
| swap_cols_test.test | RUN | 0.530217 | 2.268823 | 2.059236 | 0.001858 | 0.001644 | 0.001593 |
| swap_rows_test.test | RUN | 0.595350 | 2.330931 | 2.078938 | 0.001826 | 0.001760 | 0.001697 |
| diag_test.test | RUN | 0.268572 | 0.639149 | 0.792324 | 0.001618 | 0.001762 | 0.001613 |
| diag_mat_test.test | RUN | 0.274012 | 0.643299 | 0.660265 | 0.001628 | 0.001696 | 0.001809 |
| row_test.test | RUN | 0.397414 | 1.288798 | 1.441743 | 0.001746 | 0.001450 | 0.001724 |
| row_mat_test.test | RUN | 0.259626 | 0.564108 | 0.671505 | 0.001719 | 0.001472 | 0.001726 |
| transpose_test.test | RUN | 0.312962 | 0.817829 | 0.916421 | 0.001776 | 0.001530 | 0.001669 |
| translation_test.test | RUN | 0.260813 | 0.514026 | 0.697741 | 0.001494 | 0.001411 | 0.001575 |
| translation_mat_test.test | RUN | 0.284659 | 0.539519 | 0.727492 | 0.001637 | 0.001818 | 0.001252 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.094325 | 0.153088 | 0.194451 | — | — | — |
| swizzle2_test2.test | RUN | 0.116069 | 0.228470 | 0.274622 | 0.001472 | 0.001608 | 0.001455 |
| swizzle2_test3.test | RUN | 0.113681 | 0.245421 | 0.275119 | 0.001493 | 0.001964 | 0.001258 |
| swizzle2_test4.test | RUN | 0.115780 | 0.249653 | 0.269287 | 0.001523 | 0.001732 | 0.001257 |
| swizzle2_test.test | RUN | 0.430733 | 0.666348 | 0.830288 | 0.001700 | 0.001724 | 0.001855 |
| swizzle3_test2.test | RUN | 0.178473 | 0.251052 | 0.296828 | 0.001770 | 0.001834 | 0.001610 |
| swizzle3_test3.test | RUN | 0.174984 | 0.246119 | 0.299928 | 0.001382 | 0.001573 | 0.001352 |
| swizzle3_test4.test | RUN | 0.156676 | 0.259966 | 0.295746 | 0.001510 | 0.001975 | 0.001247 |
| swizzle3_test.test | RUN | 0.349889 | 0.688202 | 0.861853 | 0.001438 | 0.001390 | 0.001712 |
| swizzle4_test2.test | RUN | 0.204348 | 0.372446 | 0.505027 | 0.001433 | 0.001745 | 0.001672 |
| swizzle4_test3.test | RUN | 0.210653 | 0.374742 | 0.499553 | 0.001466 | 0.001666 | 0.001359 |
| swizzle4_test4.test | RUN | 0.209312 | 0.384719 | 0.518555 | 0.001368 | 0.001397 | 0.001822 |
| swizzle4_test.test | RUN | 0.340425 | 0.759242 | 0.920059 | 0.001438 | 0.001659 | 0.001797 |
| deduce_scalar_test.test | COMPILE | 0.019347 | 0.035850 | 0.053120 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.131809 | 0.312201 | 0.340576 | 0.001481 | 0.001378 | 0.001819 |
| deduce_scalar_mv_test.test | RUN | 0.152599 | 0.342887 | 0.425250 | 0.001418 | 0.001440 | 0.001627 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.014952 | 0.023927 | 0.042259 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.015006 | 0.035503 | 0.047831 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.015276 | 0.036257 | 0.047312 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.015526 | 0.035026 | 0.047764 | — | — | — |
| interop_test.test | RUN | 0.142006 | 0.392385 | 0.568703 | 0.000617 | 0.000630 | 0.001323 |
| transform_test.test | RUN | 0.318640 | 0.590304 | 0.813595 | 0.001281 | 0.001240 | 0.001124 |
| projection_test.test | RUN | 0.220149 | 0.399592 | 0.456740 | 0.001186 | 0.001252 | 0.001227 |
| scalar_traits_test.test | COMPILE | 0.016281 | 0.035671 | 0.053014 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.977×, 1.000× | 0.996× |
| clang | 0.966× | 0.983×, 0.949× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000881s | 0.000867s | 0.000883s | byte equality observed |
| access_q_test.test | 10 | 0.000842s | 0.000868s | 0.000871s | byte equality observed |
| access_v_test.test | 10 | 0.000868s | 0.000865s | 0.000858s | byte equality observed |
| assign_test.test | 10 | 0.000850s | 0.000880s | 0.000854s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000857s | 0.000859s | 0.000865s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000849s | 0.000856s | 0.000835s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000835s | 0.000868s | 0.000837s | byte equality observed |
| col_mat_test.test | 10 | 0.000853s | 0.000859s | 0.000858s | byte equality observed |
| col_test.test | 10 | 0.000862s | 0.000872s | 0.000863s | byte equality observed |
| conjugate_test.test | 10 | 0.000862s | 0.000877s | 0.000844s | byte equality observed |
| convert_to_test.test | 10 | 0.000884s | 0.000861s | 0.000879s | byte equality observed |
| cross_test.test | 10 | 0.000862s | 0.000888s | 0.000845s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000870s | 0.000861s | 0.000852s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000877s | 0.000863s | 0.000842s | byte equality observed |
| del_col_test.test | 10 | 0.000887s | 0.000852s | 0.000844s | byte equality observed |
| del_row_col_test.test | 10 | 0.000881s | 0.000869s | 0.000860s | byte equality observed |
| del_row_test.test | 10 | 0.000885s | 0.000875s | 0.000847s | byte equality observed |
| determinant_test.test | 10 | 0.000884s | 0.000886s | 0.000869s | byte equality observed |
| diag_mat_test.test | 10 | 0.000869s | 0.000865s | 0.000835s | byte equality observed |
| diag_test.test | 10 | 0.000861s | 0.000871s | 0.000858s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000880s | 0.000865s | 0.000861s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000871s | 0.000873s | 0.000847s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000869s | 0.000881s | 0.000844s | byte equality observed |
| div_ms_test.test | 10 | 0.000868s | 0.000890s | 0.000862s | byte equality observed |
| div_qs_test.test | 10 | 0.000859s | 0.000870s | 0.000836s | byte equality observed |
| div_vs_test.test | 10 | 0.000845s | 0.000866s | 0.000878s | byte equality observed |
| dot_qq_test.test | 10 | 0.000863s | 0.000864s | 0.000844s | byte equality observed |
| dot_vv_test.test | 10 | 0.000866s | 0.000872s | 0.000853s | byte equality observed |
| eq_mm_test.test | 10 | 0.000865s | 0.000845s | 0.000864s | byte equality observed |
| eq_qq_test.test | 10 | 0.000861s | 0.000850s | 0.000847s | byte equality observed |
| eq_vv_test.test | 10 | 0.000860s | 0.000845s | 0.000862s | byte equality observed |
| identity_mat_test.test | 10 | 0.000856s | 0.000842s | 0.000870s | byte equality observed |
| identity_quat_test.test | 10 | 0.000865s | 0.000877s | 0.000858s | byte equality observed |
| interop_test.test | 10 | 0.000397s | 0.000398s | 0.000828s | byte equality observed |
| inverse_m_test.test | 10 | 0.000904s | 0.000909s | 0.000899s | byte equality observed |
| inverse_q_test.test | 10 | 0.000874s | 0.000862s | 0.000865s | byte equality observed |
| mag_q_test.test | 10 | 0.000871s | 0.000837s | 0.000862s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000861s | 0.000846s | 0.000839s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000851s | 0.000842s | 0.000844s | byte equality observed |
| mag_v_test.test | 10 | 0.000866s | 0.000839s | 0.000830s | byte equality observed |
| mat_index_test.test | 10 | 0.000879s | 0.000850s | 0.000855s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000865s | 0.000858s | 0.000856s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000866s | 0.000847s | 0.000857s | byte equality observed |
| math_test.test | 10 | 0.001278s | 0.001209s | 0.001096s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000861s | 0.000866s | 0.000855s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000854s | 0.000864s | 0.000845s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000857s | 0.000840s | 0.000876s | byte equality observed |
| minus_m_test.test | 10 | 0.000855s | 0.000840s | 0.000844s | byte equality observed |
| minus_mm_test.test | 10 | 0.000856s | 0.000862s | 0.000853s | byte equality observed |
| minus_q_test.test | 10 | 0.000856s | 0.000850s | 0.000862s | byte equality observed |
| minus_qq_test.test | 10 | 0.000842s | 0.000852s | 0.000842s | byte equality observed |
| minus_v_test.test | 10 | 0.000870s | 0.000860s | 0.000863s | byte equality observed |
| minus_vv_test.test | 10 | 0.000841s | 0.000864s | 0.000849s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000837s | 0.000866s | 0.000839s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000840s | 0.000856s | 0.000865s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000868s | 0.000861s | 0.000850s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000856s | 0.000867s | 0.000832s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000853s | 0.000856s | 0.000843s | byte equality observed |
| mul_mm_test.test | 10 | 0.000867s | 0.000854s | 0.000843s | byte equality observed |
| mul_ms_test.test | 10 | 0.000880s | 0.000868s | 0.000847s | byte equality observed |
| mul_mv_test.test | 10 | 0.000849s | 0.000852s | 0.000850s | byte equality observed |
| mul_qq_test.test | 10 | 0.000879s | 0.000853s | 0.000856s | byte equality observed |
| mul_qs_test.test | 10 | 0.000864s | 0.000862s | 0.000842s | byte equality observed |
| mul_qv_test.test | 10 | 0.000866s | 0.000866s | 0.000837s | byte equality observed |
| mul_sm_test.test | 10 | 0.000855s | 0.000858s | 0.000842s | byte equality observed |
| mul_sv_test.test | 10 | 0.000859s | 0.000855s | 0.000846s | byte equality observed |
| mul_vm_test.test | 10 | 0.000872s | 0.000854s | 0.000852s | byte equality observed |
| mul_vs_test.test | 10 | 0.000856s | 0.000841s | 0.000868s | byte equality observed |
| neg_col_test.test | 10 | 0.000858s | 0.000871s | 0.000850s | byte equality observed |
| neg_row_test.test | 10 | 0.000866s | 0.000847s | 0.000869s | byte equality observed |
| normalize_q_test.test | 10 | 0.000865s | 0.000849s | 0.000853s | byte equality observed |
| normalize_v_test.test | 10 | 0.000883s | 0.000863s | 0.000851s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000876s | 0.000849s | 0.000863s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000855s | 0.000876s | 0.000850s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000857s | 0.000859s | 0.000847s | byte equality observed |
| plus_mm_test.test | 10 | 0.000838s | 0.000891s | 0.000868s | byte equality observed |
| plus_qq_test.test | 10 | 0.000856s | 0.000869s | 0.000871s | byte equality observed |
| plus_vv_test.test | 10 | 0.000847s | 0.000865s | 0.000877s | byte equality observed |
| projection_test.test | 10 | 0.000870s | 0.000842s | 0.000866s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000851s | 0.000863s | 0.000839s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000852s | 0.000863s | 0.000837s | byte equality observed |
| rot_mat_test.test | 1 | 0.019458s | 0.019844s | 0.017670s | byte equality observed |
| rot_quat_test.test | 10 | 0.000838s | 0.000844s | 0.000842s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000869s | 0.000868s | 0.000866s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000895s | 0.000891s | 0.000868s | byte equality observed |
| roty_mat_test.test | 10 | 0.000880s | 0.000864s | 0.000881s | byte equality observed |
| roty_quat_test.test | 10 | 0.000882s | 0.000866s | 0.000864s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000883s | 0.000866s | 0.000871s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000871s | 0.000864s | 0.000860s | byte equality observed |
| row_mat_test.test | 10 | 0.000856s | 0.000874s | 0.000861s | byte equality observed |
| row_test.test | 10 | 0.000875s | 0.000863s | 0.000836s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000873s | 0.000855s | 0.000833s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000866s | 0.000855s | 0.000840s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000857s | 0.000835s | 0.000837s | byte equality observed |
| slerp_test.test | 2 | 0.009567s | 0.007854s | 0.008480s | byte equality observed |
| swap_cols_test.test | 10 | 0.000856s | 0.000839s | 0.000819s | byte equality observed |
| swap_rows_test.test | 10 | 0.000897s | 0.000849s | 0.000867s | byte equality observed |
| swizzle2_test.test | 10 | 0.000875s | 0.000874s | 0.000870s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000877s | 0.000849s | 0.000868s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000867s | 0.000865s | 0.000876s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000870s | 0.000855s | 0.000866s | byte equality observed |
| swizzle3_test.test | 10 | 0.000868s | 0.000863s | 0.000877s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000852s | 0.000868s | 0.000886s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000862s | 0.000837s | 0.000855s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000845s | 0.000849s | 0.000866s | byte equality observed |
| swizzle4_test.test | 10 | 0.000856s | 0.000860s | 0.000882s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000866s | 0.000850s | 0.000882s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000856s | 0.000860s | 0.000872s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000879s | 0.000864s | 0.000862s | byte equality observed |
| to_string_test.test | 10 | 0.000923s | 0.000892s | 0.000884s | byte equality observed |
| transform_test.test | 10 | 0.000862s | 0.000840s | 0.000846s | byte equality observed |
| translation_mat_test.test | 10 | 0.000851s | 0.000844s | 0.000856s | byte equality observed |
| translation_test.test | 10 | 0.000866s | 0.000856s | 0.000858s | byte equality observed |
| transpose_test.test | 10 | 0.000867s | 0.000860s | 0.000871s | byte equality observed |
| vec_index_test.test | 10 | 0.000857s | 0.000865s | 0.000880s | byte equality observed |
| vec_register_test.test | 10 | 0.000876s | 0.000853s | 0.000874s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000885s | 0.000851s | 0.000865s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000885s | 0.000843s | 0.000874s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000880s | 0.000857s | 0.000883s | byte equality observed |
| zero_mat_test.test | 10 | 0.000884s | 0.000876s | 0.000867s | byte equality observed |
| zero_quat_test.test | 10 | 0.000873s | 0.000857s | 0.000857s | byte equality observed |
| zero_vec_test.test | 10 | 0.000867s | 0.000874s | 0.000884s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
