# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.329973 | 0.876728 | 1.204234 | 0.002612 | 0.002686 | 0.002298 |
| mat_traits_array_test.test | RUN | 0.259979 | 0.889350 | 0.969942 | 0.001900 | 0.001670 | 0.002136 |
| mat_traits_std_array_test.test | RUN | 0.261570 | 0.701401 | 0.980507 | 0.001806 | 0.001812 | 0.001694 |
| vec_traits_array_test.test | RUN | 0.230396 | 0.685950 | 0.840941 | 0.001796 | 0.001923 | 0.001599 |
| vec_traits_gnuc_test.test | RUN | 0.424587 | 0.877168 | 1.596210 | 0.001850 | 0.001835 | 0.001970 |
| vec_traits_std_array_test.test | RUN | 0.224977 | 0.544575 | 0.809860 | 0.001852 | 0.002028 | 0.001954 |
| quat_traits_array_test.test | RUN | 0.219454 | 0.713050 | 0.807463 | 0.001738 | 0.001956 | 0.001704 |
| quat_traits_std_array_test.test | RUN | 0.220940 | 0.545792 | 0.812928 | 0.001334 | 0.002003 | 0.002006 |
| access_m_test.test | RUN | 0.359746 | 1.333461 | 1.751799 | 0.001860 | 0.002196 | 0.002028 |
| access_m_fail1.test | COMPILE_FAIL | 0.036017 | 0.061464 | 0.122983 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.036973 | 0.063457 | 0.131890 | — | — | — |
| access_q_test.test | RUN | 0.301266 | 0.671435 | 1.070977 | 0.001617 | 0.001918 | 0.002206 |
| access_q_fail.test | COMPILE_FAIL | 0.027853 | 0.046296 | 0.096450 | — | — | — |
| access_v_test.test | RUN | 0.299640 | 0.720973 | 1.063486 | 0.001775 | 0.002260 | 0.002019 |
| access_v_fail1.test | COMPILE_FAIL | 0.024385 | 0.044048 | 0.087450 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.025548 | 0.044098 | 0.081532 | — | — | — |
| assign_test.test | RUN | 0.449165 | 1.110762 | 1.852700 | 0.002008 | 0.002200 | 0.002150 |
| to_string_test.test | RUN | 0.519132 | 1.777636 | 10.119294 | 0.001816 | 0.001948 | 0.001983 |
| cmp_vv_test.test | RUN | 0.368176 | 0.893082 | 1.327044 | 0.001950 | 0.002097 | 0.001963 |
| cross_test.test | RUN | 0.361035 | 0.832499 | 1.304188 | 0.001634 | 0.002484 | 0.001774 |
| div_eq_vs_test.test | RUN | 0.338748 | 0.752158 | 1.225321 | 0.001841 | 0.002088 | 0.002170 |
| div_vs_test.test | RUN | 0.353051 | 0.920486 | 1.288772 | 0.001629 | 0.002027 | 0.001740 |
| dot_vv_test.test | RUN | 0.340085 | 0.848865 | 1.251244 | 0.002116 | 0.002112 | 0.001840 |
| eq_vv_test.test | RUN | 0.378483 | 0.925324 | 1.348216 | 0.001970 | 0.002166 | 0.001888 |
| mag_v_test.test | RUN | 0.339510 | 0.775782 | 1.128442 | 0.001886 | 0.002118 | 0.001906 |
| mag_sqr_v_test.test | RUN | 0.344228 | 0.761233 | 1.213289 | 0.001948 | 0.002203 | 0.002109 |
| minus_v_test.test | RUN | 0.349763 | 0.873974 | 1.219370 | 0.001729 | 0.002188 | 0.001884 |
| minus_eq_vv_test.test | RUN | 0.355038 | 0.879262 | 1.273109 | 0.001658 | 0.002183 | 0.002155 |
| minus_vv_test.test | RUN | 0.350883 | 0.923389 | 1.340556 | 0.002018 | 0.002208 | 0.002051 |
| mul_eq_vs_test.test | RUN | 0.341956 | 0.758269 | 1.264001 | 0.001924 | 0.002196 | 0.001965 |
| mul_vs_test.test | RUN | 0.354369 | 0.928565 | 1.365279 | 0.001692 | 0.002185 | 0.001708 |
| mul_sv_test.test | RUN | 0.369192 | 0.924293 | 1.288601 | 0.001942 | 0.002184 | 0.001812 |
| mul_vm_test.test | RUN | 0.484883 | 1.661743 | 2.089183 | 0.001764 | 0.001654 | 0.002038 |
| normalize_v_test.test | RUN | 0.364878 | 1.138261 | 1.378949 | 0.001656 | 0.002126 | 0.001868 |
| plus_eq_vv_test.test | RUN | 0.337792 | 0.889317 | 1.186303 | 0.001407 | 0.002104 | 0.002106 |
| plus_vv_test.test | RUN | 0.361461 | 0.926425 | 1.311382 | 0.001826 | 0.002190 | 0.001804 |
| scalar_cast_v_test.test | RUN | 0.329508 | 0.711124 | 1.150461 | 0.001902 | 0.001852 | 0.002006 |
| vec_index_test.test | RUN | 0.290409 | 0.695456 | 1.043083 | 0.001787 | 0.001810 | 0.002055 |
| vec_register_test.test | RUN | 0.192108 | 0.649269 | 0.756754 | 0.002012 | 0.001969 | 0.001774 |
| cmp_mm_test.test | RUN | 0.564686 | 2.040789 | 2.577828 | 0.002212 | 0.002114 | 0.002063 |
| determinant_test.test | RUN | 0.397803 | 1.046313 | 1.459367 | 0.001895 | 0.002044 | 0.002022 |
| div_eq_ms_test.test | RUN | 0.400023 | 0.979127 | 1.673621 | 0.001774 | 0.001712 | 0.001978 |
| div_ms_test.test | RUN | 0.471676 | 1.529498 | 2.038760 | 0.001687 | 0.002038 | 0.002171 |
| eq_mm_test.test | RUN | 0.531924 | 1.882813 | 2.463191 | 0.001739 | 0.002004 | 0.001938 |
| minus_m_test.test | RUN | 0.467511 | 1.495851 | 1.922488 | 0.001878 | 0.002045 | 0.001908 |
| minus_eq_mm_test.test | RUN | 0.450790 | 1.404766 | 1.803560 | 0.001539 | 0.001973 | 0.002124 |
| minus_mm_test.test | RUN | 0.500839 | 1.763679 | 2.030399 | 0.001966 | 0.002200 | 0.002068 |
| mul_eq_mm_test.test | RUN | 0.420373 | 1.320681 | 1.556812 | 0.001989 | 0.002240 | 0.002084 |
| mul_eq_ms_test.test | RUN | 0.400997 | 0.947490 | 1.686745 | 0.001840 | 0.002088 | 0.002012 |
| mul_mm_test.test | RUN | 0.570043 | 2.930133 | 2.646028 | 0.001946 | 0.002212 | 0.002064 |
| mul_ms_test.test | RUN | 0.483183 | 1.567893 | 1.985754 | 0.001813 | 0.002249 | 0.002181 |
| mul_sm_test.test | RUN | 0.487475 | 1.538262 | 2.087652 | 0.002094 | 0.001830 | 0.002186 |
| mul_mv_test.test | RUN | 0.507016 | 1.651762 | 2.078303 | 0.001830 | 0.002066 | 0.002030 |
| inverse_m_test.test | RUN | 0.634216 | 2.941060 | 2.768736 | 0.002242 | 0.002194 | 0.001923 |
| plus_eq_mm_test.test | RUN | 0.455965 | 1.404260 | 1.835845 | 0.001958 | 0.002014 | 0.002224 |
| plus_mm_test.test | RUN | 0.491200 | 1.789367 | 2.139839 | 0.001839 | 0.002060 | 0.002194 |
| scalar_cast_m_test.test | RUN | 0.384475 | 0.815717 | 1.341783 | 0.001750 | 0.002152 | 0.001686 |
| mat_index_test.test | RUN | 0.304914 | 0.773370 | 1.121540 | 0.001725 | 0.002019 | 0.002194 |
| cmp_qq_test.test | RUN | 0.341210 | 0.720065 | 1.181893 | 0.002012 | 0.002082 | 0.001930 |
| conjugate_test.test | RUN | 0.335312 | 0.729926 | 1.194387 | 0.001940 | 0.002162 | 0.001592 |
| normalize_q_test.test | RUN | 0.338280 | 0.821290 | 1.197218 | 0.001747 | 0.002140 | 0.002123 |
| div_eq_qs_test.test | RUN | 0.333385 | 0.703421 | 1.137690 | 0.001832 | 0.001838 | 0.002106 |
| div_qs_test.test | RUN | 0.330527 | 0.749392 | 1.217485 | 0.001933 | 0.002034 | 0.002057 |
| dot_qq_test.test | RUN | 0.328368 | 0.726860 | 1.222533 | 0.001866 | 0.002445 | 0.001588 |
| eq_qq_test.test | RUN | 0.334879 | 0.753932 | 1.181381 | 0.001903 | 0.002000 | 0.002050 |
| inverse_q_test.test | RUN | 0.397275 | 1.006592 | 1.495542 | 0.001897 | 0.002127 | 0.002074 |
| mag_q_test.test | RUN | 0.338420 | 0.756504 | 1.193205 | 0.001824 | 0.002005 | 0.001782 |
| mag_sqr_q_test.test | RUN | 0.328309 | 0.734022 | 1.185423 | 0.002016 | 0.002206 | 0.001608 |
| minus_q_test.test | RUN | 0.325172 | 0.735832 | 1.162811 | 0.001571 | 0.001740 | 0.002098 |
| minus_eq_qq_test.test | RUN | 0.330364 | 0.752519 | 1.176698 | 0.001900 | 0.001897 | 0.001975 |
| minus_qq_test.test | RUN | 0.342389 | 0.754611 | 1.206180 | 0.001867 | 0.002242 | 0.001873 |
| mul_eq_qs_test.test | RUN | 0.329037 | 0.709475 | 1.161447 | 0.001786 | 0.002031 | 0.002044 |
| mul_qs_test.test | RUN | 0.322663 | 0.734599 | 1.147578 | 0.001654 | 0.002010 | 0.002122 |
| mul_qv_test.test | RUN | 0.418787 | 1.023210 | 1.525960 | 0.001878 | 0.002093 | 0.002041 |
| mul_qq_test.test | RUN | 0.398450 | 1.031090 | 1.495112 | 0.001836 | 0.002140 | 0.001893 |
| mul_eq_qq_test.test | RUN | 0.389876 | 1.037544 | 1.473791 | 0.001866 | 0.001992 | 0.001666 |
| plus_eq_qq_test.test | RUN | 0.325126 | 0.724700 | 1.159071 | 0.001866 | 0.002156 | 0.002064 |
| plus_qq_test.test | RUN | 0.334792 | 0.749834 | 1.190669 | 0.001688 | 0.002037 | 0.002070 |
| scalar_cast_q_test.test | RUN | 0.334336 | 0.687437 | 1.181921 | 0.001939 | 0.002087 | 0.001945 |
| slerp_test.test | RUN | 0.350251 | 1.409440 | 1.337509 | 0.024940 | 0.020141 | 0.021467 |
| convert_to_test.test | RUN | 0.494669 | 1.324325 | 2.096467 | 0.002076 | 0.001969 | 0.002054 |
| rot_mat_test.test | RUN | 0.713255 | 5.753016 | 5.949471 | 0.061028 | 0.055715 | 0.050911 |
| rot_quat_test.test | RUN | 0.411666 | 1.213069 | 1.540872 | 0.001945 | 0.002273 | 0.001966 |
| rotx_mat_test.test | RUN | 0.455934 | 1.545940 | 1.968942 | 0.001938 | 0.002039 | 0.001892 |
| rotx_quat_test.test | RUN | 0.398364 | 1.038741 | 1.472446 | 0.002156 | 0.002052 | 0.002044 |
| roty_mat_test.test | RUN | 0.457607 | 1.585270 | 1.926021 | 0.002072 | 0.002022 | 0.001537 |
| roty_quat_test.test | RUN | 0.404587 | 1.041907 | 1.419485 | 0.001950 | 0.002153 | 0.002236 |
| rotz_mat_test.test | RUN | 0.482338 | 1.793771 | 1.826967 | 0.002021 | 0.001832 | 0.002146 |
| rotz_quat_test.test | RUN | 0.405600 | 1.003242 | 1.447671 | 0.001934 | 0.002080 | 0.001916 |
| zero_vec_test.test | RUN | 0.346164 | 0.893750 | 1.297002 | 0.001956 | 0.002172 | 0.001272 |
| zero_mat_test.test | RUN | 0.437184 | 1.436545 | 1.697408 | 0.001944 | 0.002078 | 0.001845 |
| zero_quat_test.test | RUN | 0.326835 | 0.735484 | 1.152637 | 0.001823 | 0.001697 | 0.002290 |
| identity_mat_test.test | RUN | 0.400414 | 1.092940 | 1.479508 | 0.001960 | 0.002132 | 0.001937 |
| identity_quat_test.test | RUN | 0.335434 | 0.697646 | 1.223733 | 0.001927 | 0.002164 | 0.001774 |
| col_test.test | RUN | 0.640998 | 2.241723 | 3.232023 | 0.001747 | 0.001850 | 0.002140 |
| col_mat_test.test | RUN | 0.414074 | 1.008542 | 1.582505 | 0.001902 | 0.002162 | 0.002088 |
| neg_col_test.test | RUN | 0.476762 | 1.471586 | 1.988903 | 0.001782 | 0.001956 | 0.001769 |
| neg_row_test.test | RUN | 0.499880 | 1.466426 | 2.021461 | 0.002022 | 0.002231 | 0.002088 |
| del_col_test.test | RUN | 0.508221 | 1.609400 | 2.009723 | 0.001914 | 0.002153 | 0.002062 |
| del_row_test.test | RUN | 0.505245 | 1.569512 | 2.073447 | 0.001897 | 0.002225 | 0.002115 |
| del_row_col_test.test | RUN | 0.721093 | 3.002661 | 3.777844 | 0.001991 | 0.002200 | 0.001780 |
| swap_cols_test.test | RUN | 0.933950 | 3.984300 | 4.593350 | 0.002113 | 0.002160 | 0.002021 |
| swap_rows_test.test | RUN | 1.015216 | 4.147978 | 4.501629 | 0.002163 | 0.002051 | 0.002109 |
| diag_test.test | RUN | 0.436882 | 1.050694 | 1.668716 | 0.001863 | 0.002117 | 0.001708 |
| diag_mat_test.test | RUN | 0.428169 | 1.042423 | 1.663688 | 0.001763 | 0.002011 | 0.001932 |
| row_test.test | RUN | 0.650941 | 2.269860 | 3.267962 | 0.001896 | 0.002158 | 0.002130 |
| row_mat_test.test | RUN | 0.421080 | 1.057011 | 1.496977 | 0.001937 | 0.002143 | 0.002140 |
| transpose_test.test | RUN | 0.513852 | 1.482443 | 2.062493 | 0.001946 | 0.002197 | 0.001947 |
| translation_test.test | RUN | 0.395390 | 0.975256 | 1.494392 | 0.001835 | 0.001751 | 0.002039 |
| translation_mat_test.test | RUN | 0.429875 | 1.009066 | 1.756653 | 0.001854 | 0.001928 | 0.001650 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.148035 | 0.292776 | 0.481194 | — | — | — |
| swizzle2_test2.test | RUN | 0.178573 | 0.415276 | 0.586830 | 0.002020 | 0.001839 | 0.002374 |
| swizzle2_test3.test | RUN | 0.173258 | 0.427500 | 0.644134 | 0.001799 | 0.001996 | 0.001660 |
| swizzle2_test4.test | RUN | 0.179678 | 0.409882 | 0.583929 | 0.001845 | 0.002004 | 0.001942 |
| swizzle2_test.test | RUN | 0.576129 | 1.230803 | 2.141222 | 0.001984 | 0.002328 | 0.002000 |
| swizzle3_test2.test | RUN | 0.200970 | 0.440981 | 0.695358 | 0.002052 | 0.001841 | 0.001716 |
| swizzle3_test3.test | RUN | 0.197296 | 0.463900 | 0.692579 | 0.001848 | 0.001938 | 0.001890 |
| swizzle3_test4.test | RUN | 0.204250 | 0.457577 | 0.732528 | 0.001740 | 0.002223 | 0.001778 |
| swizzle3_test.test | RUN | 0.566527 | 1.236067 | 2.179898 | 0.001802 | 0.002068 | 0.002058 |
| swizzle4_test2.test | RUN | 0.338433 | 0.660986 | 1.253502 | 0.001862 | 0.002116 | 0.002080 |
| swizzle4_test3.test | RUN | 0.344467 | 0.700243 | 1.306197 | 0.001739 | 0.001808 | 0.002175 |
| swizzle4_test4.test | RUN | 0.355503 | 0.656370 | 1.254527 | 0.001729 | 0.001818 | 0.002114 |
| swizzle4_test.test | RUN | 0.581178 | 1.349176 | 2.279910 | 0.001964 | 0.002270 | 0.002055 |
| deduce_scalar_test.test | COMPILE | 0.030107 | 0.062941 | 0.105272 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.218281 | 0.493089 | 0.708370 | 0.001978 | 0.002210 | 0.001806 |
| deduce_scalar_mv_test.test | RUN | 0.257105 | 0.595179 | 0.954666 | 0.001802 | 0.002038 | 0.002095 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.024094 | 0.043781 | 0.079600 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.027527 | 0.059049 | 0.080712 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.027019 | 0.051950 | 0.087579 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.025214 | 0.053533 | 0.085066 | — | — | — |
| interop_test.test | RUN | 0.273878 | 0.636766 | 1.340446 | 0.000809 | 0.000678 | 0.001459 |
| transform_test.test | RUN | 0.505457 | 1.033916 | 1.875050 | 0.001428 | 0.001544 | 0.001513 |
| projection_test.test | RUN | 0.304782 | 0.745717 | 1.161553 | 0.001542 | 0.001436 | 0.001590 |
| scalar_traits_test.test | COMPILE | 0.027302 | 0.059290 | 0.096744 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.954× | 0.950×, 0.959× | 1.001× |
| clang | 1.054× | 1.041×, 1.067× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001225s | 0.001222s | 0.001242s | byte equality observed |
| access_q_test.test | 10 | 0.001259s | 0.001234s | 0.001229s | byte equality observed |
| access_v_test.test | 10 | 0.001266s | 0.001226s | 0.001239s | byte equality observed |
| assign_test.test | 10 | 0.001261s | 0.001264s | 0.001237s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001270s | 0.001219s | 0.001235s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001264s | 0.001241s | 0.001238s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001264s | 0.001276s | 0.001259s | byte equality observed |
| col_mat_test.test | 10 | 0.001253s | 0.001275s | 0.001234s | byte equality observed |
| col_test.test | 10 | 0.001266s | 0.001294s | 0.001286s | byte equality observed |
| conjugate_test.test | 10 | 0.001251s | 0.001301s | 0.001299s | byte equality observed |
| convert_to_test.test | 10 | 0.001274s | 0.001228s | 0.001282s | byte equality observed |
| cross_test.test | 10 | 0.001241s | 0.001204s | 0.001266s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001264s | 0.001253s | 0.001259s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001270s | 0.001249s | 0.001259s | byte equality observed |
| del_col_test.test | 10 | 0.001273s | 0.001294s | 0.001239s | byte equality observed |
| del_row_col_test.test | 10 | 0.001283s | 0.001278s | 0.001306s | byte equality observed |
| del_row_test.test | 10 | 0.001265s | 0.001213s | 0.001280s | byte equality observed |
| determinant_test.test | 10 | 0.001259s | 0.001289s | 0.001304s | byte equality observed |
| diag_mat_test.test | 10 | 0.001251s | 0.001255s | 0.001256s | byte equality observed |
| diag_test.test | 10 | 0.001271s | 0.001281s | 0.001242s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001303s | 0.001279s | 0.001233s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001270s | 0.001258s | 0.001274s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001274s | 0.001288s | 0.001313s | byte equality observed |
| div_ms_test.test | 10 | 0.001240s | 0.001267s | 0.001241s | byte equality observed |
| div_qs_test.test | 10 | 0.001226s | 0.001298s | 0.001291s | byte equality observed |
| div_vs_test.test | 10 | 0.001272s | 0.001256s | 0.001216s | byte equality observed |
| dot_qq_test.test | 10 | 0.001266s | 0.001275s | 0.001237s | byte equality observed |
| dot_vv_test.test | 10 | 0.001254s | 0.001293s | 0.001254s | byte equality observed |
| eq_mm_test.test | 10 | 0.001229s | 0.001278s | 0.001218s | byte equality observed |
| eq_qq_test.test | 10 | 0.001259s | 0.001262s | 0.001259s | byte equality observed |
| eq_vv_test.test | 10 | 0.001252s | 0.001233s | 0.001239s | byte equality observed |
| identity_mat_test.test | 10 | 0.001283s | 0.001270s | 0.001272s | byte equality observed |
| identity_quat_test.test | 10 | 0.001248s | 0.001272s | 0.001270s | byte equality observed |
| interop_test.test | 10 | 0.000583s | 0.000572s | 0.001237s | byte equality observed |
| inverse_m_test.test | 10 | 0.001300s | 0.001302s | 0.001293s | byte equality observed |
| inverse_q_test.test | 10 | 0.001242s | 0.001322s | 0.001325s | byte equality observed |
| mag_q_test.test | 10 | 0.001222s | 0.001261s | 0.001247s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001233s | 0.001259s | 0.001239s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001253s | 0.001259s | 0.001216s | byte equality observed |
| mag_v_test.test | 10 | 0.001300s | 0.001260s | 0.001271s | byte equality observed |
| mat_index_test.test | 10 | 0.001270s | 0.001245s | 0.001227s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001267s | 0.001258s | 0.001213s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001250s | 0.001239s | 0.001228s | byte equality observed |
| math_test.test | 9 | 0.001868s | 0.001793s | 0.001631s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001242s | 0.001316s | 0.001206s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001246s | 0.001260s | 0.001229s | byte equality observed |
| minus_eq_vv_test.test | 8 | 0.001223s | 0.001257s | 0.001217s | byte equality observed |
| minus_m_test.test | 10 | 0.001265s | 0.001306s | 0.001264s | byte equality observed |
| minus_mm_test.test | 10 | 0.001258s | 0.001268s | 0.001248s | byte equality observed |
| minus_q_test.test | 10 | 0.001255s | 0.001312s | 0.001266s | byte equality observed |
| minus_qq_test.test | 10 | 0.001246s | 0.001269s | 0.001253s | byte equality observed |
| minus_v_test.test | 10 | 0.001242s | 0.001246s | 0.001277s | byte equality observed |
| minus_vv_test.test | 10 | 0.001276s | 0.001265s | 0.001258s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001237s | 0.001279s | 0.001238s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001261s | 0.001250s | 0.001280s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001275s | 0.001270s | 0.001292s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001286s | 0.001322s | 0.001296s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001232s | 0.001298s | 0.001249s | byte equality observed |
| mul_mm_test.test | 10 | 0.001263s | 0.001244s | 0.001263s | byte equality observed |
| mul_ms_test.test | 10 | 0.001303s | 0.001280s | 0.001245s | byte equality observed |
| mul_mv_test.test | 10 | 0.001267s | 0.001315s | 0.001253s | byte equality observed |
| mul_qq_test.test | 10 | 0.001248s | 0.001285s | 0.001290s | byte equality observed |
| mul_qs_test.test | 10 | 0.001252s | 0.001268s | 0.001240s | byte equality observed |
| mul_qv_test.test | 10 | 0.001283s | 0.001256s | 0.001288s | byte equality observed |
| mul_sm_test.test | 10 | 0.001280s | 0.001267s | 0.001245s | byte equality observed |
| mul_sv_test.test | 10 | 0.001236s | 0.001284s | 0.001305s | byte equality observed |
| mul_vm_test.test | 10 | 0.001276s | 0.001231s | 0.001274s | byte equality observed |
| mul_vs_test.test | 10 | 0.001270s | 0.001241s | 0.001315s | byte equality observed |
| neg_col_test.test | 10 | 0.001248s | 0.001258s | 0.001339s | byte equality observed |
| neg_row_test.test | 10 | 0.001243s | 0.001316s | 0.001388s | byte equality observed |
| normalize_q_test.test | 10 | 0.001271s | 0.001235s | 0.001396s | byte equality observed |
| normalize_v_test.test | 10 | 0.001252s | 0.001291s | 0.001405s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001252s | 0.001269s | 0.001474s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001272s | 0.001237s | 0.001448s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001236s | 0.001282s | 0.001486s | byte equality observed |
| plus_mm_test.test | 10 | 0.001279s | 0.001301s | 0.001524s | byte equality observed |
| plus_qq_test.test | 10 | 0.001253s | 0.001196s | 0.001480s | byte equality observed |
| plus_vv_test.test | 10 | 0.001240s | 0.001243s | 0.001504s | byte equality observed |
| projection_test.test | 10 | 0.001262s | 0.001229s | 0.001445s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001218s | 0.001309s | 0.001497s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001204s | 0.001228s | 0.001452s | byte equality observed |
| rot_mat_test.test | 1 | 0.037574s | 0.031028s | 0.045436s | byte equality observed |
| rot_quat_test.test | 10 | 0.001167s | 0.001188s | 0.001422s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001194s | 0.001215s | 0.001495s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001245s | 0.001229s | 0.001445s | byte equality observed |
| roty_mat_test.test | 10 | 0.001246s | 0.001278s | 0.001536s | byte equality observed |
| roty_quat_test.test | 10 | 0.001278s | 0.001280s | 0.001477s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001338s | 0.001327s | 0.001508s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001295s | 0.001288s | 0.001496s | byte equality observed |
| row_mat_test.test | 10 | 0.001310s | 0.001245s | 0.001489s | byte equality observed |
| row_test.test | 10 | 0.001282s | 0.001295s | 0.001485s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001300s | 0.001247s | 0.001506s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001356s | 0.001300s | 0.001476s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001332s | 0.001253s | 0.001479s | byte equality observed |
| slerp_test.test | 2 | 0.021338s | 0.016277s | 0.019492s | byte equality observed |
| swap_cols_test.test | 10 | 0.001427s | 0.001363s | 0.001448s | byte equality observed |
| swap_rows_test.test | 10 | 0.001442s | 0.001351s | 0.001446s | byte equality observed |
| swizzle2_test.test | 10 | 0.001456s | 0.001466s | 0.001499s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001474s | 0.001470s | 0.001486s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001526s | 0.001458s | 0.001488s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001484s | 0.001481s | 0.001532s | byte equality observed |
| swizzle3_test.test | 10 | 0.001502s | 0.001511s | 0.001492s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001478s | 0.001520s | 0.001516s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001482s | 0.001477s | 0.001504s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001503s | 0.001500s | 0.001517s | byte equality observed |
| swizzle4_test.test | 8 | 0.001504s | 0.001521s | 0.001471s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001530s | 0.001458s | 0.001556s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001486s | 0.001487s | 0.001485s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001482s | 0.001492s | 0.001517s | byte equality observed |
| to_string_test.test | 10 | 0.001557s | 0.001518s | 0.001555s | byte equality observed |
| transform_test.test | 10 | 0.001485s | 0.001524s | 0.001513s | byte equality observed |
| translation_mat_test.test | 10 | 0.001503s | 0.001478s | 0.001512s | byte equality observed |
| translation_test.test | 10 | 0.001499s | 0.001511s | 0.001520s | byte equality observed |
| transpose_test.test | 10 | 0.001490s | 0.001494s | 0.001508s | byte equality observed |
| vec_index_test.test | 10 | 0.001485s | 0.001502s | 0.001487s | byte equality observed |
| vec_register_test.test | 10 | 0.001520s | 0.001480s | 0.001509s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001477s | 0.001520s | 0.001498s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001522s | 0.001452s | 0.001496s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001485s | 0.001475s | 0.001510s | byte equality observed |
| zero_mat_test.test | 10 | 0.001501s | 0.001483s | 0.001522s | byte equality observed |
| zero_quat_test.test | 10 | 0.001515s | 0.001507s | 0.001488s | byte equality observed |
| zero_vec_test.test | 10 | 0.001484s | 0.001523s | 0.001476s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
