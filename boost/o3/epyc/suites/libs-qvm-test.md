# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.333722 | 0.867305 | 1.224507 | 0.002470 | 0.002473 | 0.002584 |
| mat_traits_array_test.test | RUN | 0.255935 | 0.837787 | 0.923860 | 0.001661 | 0.001849 | 0.001831 |
| mat_traits_std_array_test.test | RUN | 0.263189 | 0.655453 | 0.971901 | 0.001920 | 0.001801 | 0.001862 |
| vec_traits_array_test.test | RUN | 0.225516 | 0.690835 | 0.813608 | 0.001704 | 0.001803 | 0.001632 |
| vec_traits_gnuc_test.test | RUN | 0.414899 | 0.867025 | 1.624266 | 0.001826 | 0.001739 | 0.002008 |
| vec_traits_std_array_test.test | RUN | 0.220859 | 0.532812 | 0.800490 | 0.002046 | 0.002040 | 0.002108 |
| quat_traits_array_test.test | RUN | 0.215511 | 0.713897 | 0.796465 | 0.001888 | 0.001805 | 0.001924 |
| quat_traits_std_array_test.test | RUN | 0.221133 | 0.542973 | 0.771692 | 0.001756 | 0.001717 | 0.001690 |
| access_m_test.test | RUN | 0.359455 | 1.336878 | 1.838477 | 0.001940 | 0.002214 | 0.002242 |
| access_m_fail1.test | COMPILE_FAIL | 0.037404 | 0.055824 | 0.109459 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.035018 | 0.059455 | 0.122453 | — | — | — |
| access_q_test.test | RUN | 0.290673 | 0.691615 | 1.021724 | 0.001674 | 0.001775 | 0.002176 |
| access_q_fail.test | COMPILE_FAIL | 0.026518 | 0.046131 | 0.089512 | — | — | — |
| access_v_test.test | RUN | 0.290541 | 0.675203 | 1.059763 | 0.001773 | 0.002066 | 0.002170 |
| access_v_fail1.test | COMPILE_FAIL | 0.024312 | 0.038706 | 0.086683 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.023343 | 0.043732 | 0.088090 | — | — | — |
| assign_test.test | RUN | 0.450601 | 1.106938 | 1.865785 | 0.001850 | 0.002106 | 0.002152 |
| to_string_test.test | RUN | 0.519313 | 1.747485 | 10.009532 | 0.001801 | 0.002346 | 0.002174 |
| cmp_vv_test.test | RUN | 0.377095 | 0.880926 | 1.284037 | 0.001542 | 0.002180 | 0.001746 |
| cross_test.test | RUN | 0.360403 | 0.846339 | 1.302542 | 0.001665 | 0.002135 | 0.002174 |
| div_eq_vs_test.test | RUN | 0.340430 | 0.738797 | 1.214674 | 0.001806 | 0.002122 | 0.002136 |
| div_vs_test.test | RUN | 0.348357 | 0.908476 | 1.256810 | 0.001586 | 0.002173 | 0.001926 |
| dot_vv_test.test | RUN | 0.334465 | 0.823889 | 1.231108 | 0.002061 | 0.002164 | 0.002008 |
| eq_vv_test.test | RUN | 0.377191 | 0.947887 | 1.345282 | 0.001738 | 0.002106 | 0.002059 |
| mag_v_test.test | RUN | 0.333573 | 0.747695 | 1.132977 | 0.001858 | 0.002116 | 0.001627 |
| mag_sqr_v_test.test | RUN | 0.328367 | 0.766739 | 1.190180 | 0.001959 | 0.002202 | 0.002094 |
| minus_v_test.test | RUN | 0.340368 | 0.867995 | 1.286214 | 0.001608 | 0.002212 | 0.001635 |
| minus_eq_vv_test.test | RUN | 0.343465 | 0.883988 | 1.188011 | 0.001732 | 0.002032 | 0.001892 |
| minus_vv_test.test | RUN | 0.351213 | 0.929436 | 1.321179 | 0.001958 | 0.001946 | 0.002132 |
| mul_eq_vs_test.test | RUN | 0.336243 | 0.755876 | 1.195702 | 0.001827 | 0.002264 | 0.001998 |
| mul_vs_test.test | RUN | 0.348083 | 0.940871 | 1.260070 | 0.001794 | 0.002134 | 0.001601 |
| mul_sv_test.test | RUN | 0.355033 | 0.918693 | 1.308532 | 0.001827 | 0.002115 | 0.002144 |
| mul_vm_test.test | RUN | 0.482351 | 1.651157 | 2.054807 | 0.001834 | 0.001804 | 0.001988 |
| normalize_v_test.test | RUN | 0.359815 | 1.122212 | 1.353224 | 0.001579 | 0.002115 | 0.002062 |
| plus_eq_vv_test.test | RUN | 0.339723 | 0.895027 | 1.166597 | 0.001802 | 0.002184 | 0.001956 |
| plus_vv_test.test | RUN | 0.354287 | 0.930820 | 1.287272 | 0.001708 | 0.002244 | 0.001785 |
| scalar_cast_v_test.test | RUN | 0.328523 | 0.694299 | 1.162047 | 0.001796 | 0.002026 | 0.002142 |
| vec_index_test.test | RUN | 0.280021 | 0.698231 | 1.004473 | 0.001856 | 0.001754 | 0.001998 |
| vec_register_test.test | RUN | 0.189308 | 0.628707 | 0.734138 | 0.001958 | 0.002186 | 0.002005 |
| cmp_mm_test.test | RUN | 0.551323 | 1.998924 | 2.539837 | 0.002056 | 0.001821 | 0.002053 |
| determinant_test.test | RUN | 0.393588 | 1.059395 | 1.434438 | 0.001861 | 0.001857 | 0.002144 |
| div_eq_ms_test.test | RUN | 0.412999 | 0.947362 | 1.650278 | 0.001784 | 0.001981 | 0.001791 |
| div_ms_test.test | RUN | 0.464549 | 1.479889 | 1.963911 | 0.001962 | 0.002074 | 0.001892 |
| eq_mm_test.test | RUN | 0.545165 | 1.852009 | 2.426352 | 0.001954 | 0.001923 | 0.001789 |
| minus_m_test.test | RUN | 0.466724 | 1.493867 | 1.847659 | 0.001944 | 0.002095 | 0.002106 |
| minus_eq_mm_test.test | RUN | 0.449631 | 1.380913 | 1.745243 | 0.001720 | 0.002090 | 0.001948 |
| minus_mm_test.test | RUN | 0.499894 | 1.739030 | 2.074803 | 0.001974 | 0.002257 | 0.002233 |
| mul_eq_mm_test.test | RUN | 0.407211 | 1.304108 | 1.578536 | 0.002032 | 0.002002 | 0.002051 |
| mul_eq_ms_test.test | RUN | 0.402019 | 0.981782 | 1.694728 | 0.002168 | 0.002008 | 0.002144 |
| mul_mm_test.test | RUN | 0.572767 | 2.858610 | 2.589717 | 0.001950 | 0.002097 | 0.002120 |
| mul_ms_test.test | RUN | 0.493013 | 1.552919 | 2.000425 | 0.001908 | 0.002060 | 0.002066 |
| mul_sm_test.test | RUN | 0.472944 | 1.517333 | 2.000237 | 0.002036 | 0.002119 | 0.002208 |
| mul_mv_test.test | RUN | 0.497000 | 1.643836 | 2.057725 | 0.002041 | 0.002018 | 0.002089 |
| inverse_m_test.test | RUN | 0.646465 | 2.896716 | 2.788416 | 0.002121 | 0.002062 | 0.001960 |
| plus_eq_mm_test.test | RUN | 0.441312 | 1.367522 | 1.725763 | 0.001883 | 0.001997 | 0.002106 |
| plus_mm_test.test | RUN | 0.505645 | 1.760698 | 2.118342 | 0.001968 | 0.002017 | 0.002059 |
| scalar_cast_m_test.test | RUN | 0.392365 | 0.829676 | 1.403135 | 0.001840 | 0.001972 | 0.001864 |
| mat_index_test.test | RUN | 0.305839 | 0.759271 | 1.063542 | 0.001954 | 0.001926 | 0.001910 |
| cmp_qq_test.test | RUN | 0.342955 | 0.726405 | 1.117106 | 0.002004 | 0.001834 | 0.002161 |
| conjugate_test.test | RUN | 0.339176 | 0.723056 | 1.156613 | 0.002032 | 0.002142 | 0.002038 |
| normalize_q_test.test | RUN | 0.338288 | 0.812622 | 1.188978 | 0.001902 | 0.002014 | 0.001576 |
| div_eq_qs_test.test | RUN | 0.336579 | 0.701802 | 1.143613 | 0.001852 | 0.002059 | 0.001880 |
| div_qs_test.test | RUN | 0.328518 | 0.757673 | 1.187067 | 0.001990 | 0.001792 | 0.001890 |
| dot_qq_test.test | RUN | 0.329752 | 0.707356 | 1.205232 | 0.001900 | 0.002230 | 0.001822 |
| eq_qq_test.test | RUN | 0.340812 | 0.761204 | 1.197635 | 0.001986 | 0.002202 | 0.002056 |
| inverse_q_test.test | RUN | 0.395342 | 0.983559 | 1.458608 | 0.001948 | 0.001970 | 0.002082 |
| mag_q_test.test | RUN | 0.330913 | 0.745988 | 1.142992 | 0.002095 | 0.001922 | 0.001848 |
| mag_sqr_q_test.test | RUN | 0.326461 | 0.722942 | 1.172362 | 0.001962 | 0.002257 | 0.001914 |
| minus_q_test.test | RUN | 0.328704 | 0.733263 | 1.136916 | 0.002005 | 0.002396 | 0.001980 |
| minus_eq_qq_test.test | RUN | 0.328973 | 0.727451 | 1.119824 | 0.001910 | 0.002072 | 0.002064 |
| minus_qq_test.test | RUN | 0.332950 | 0.769012 | 1.107476 | 0.002062 | 0.002018 | 0.002140 |
| mul_eq_qs_test.test | RUN | 0.321685 | 0.682084 | 1.128636 | 0.001916 | 0.002154 | 0.002002 |
| mul_qs_test.test | RUN | 0.324754 | 0.735814 | 1.139593 | 0.001993 | 0.002411 | 0.002195 |
| mul_qv_test.test | RUN | 0.420498 | 1.012088 | 1.545412 | 0.002047 | 0.002070 | 0.002067 |
| mul_qq_test.test | RUN | 0.403589 | 1.043338 | 1.459402 | 0.001928 | 0.001973 | 0.001826 |
| mul_eq_qq_test.test | RUN | 0.400423 | 1.013191 | 1.418590 | 0.001952 | 0.002031 | 0.001667 |
| plus_eq_qq_test.test | RUN | 0.323376 | 0.742538 | 1.205303 | 0.001663 | 0.002137 | 0.001786 |
| plus_qq_test.test | RUN | 0.331276 | 0.730387 | 1.150817 | 0.002046 | 0.002188 | 0.002003 |
| scalar_cast_q_test.test | RUN | 0.332348 | 0.698809 | 1.139713 | 0.001888 | 0.002157 | 0.002158 |
| slerp_test.test | RUN | 0.370558 | 1.413429 | 1.376495 | 0.024792 | 0.020253 | 0.020837 |
| convert_to_test.test | RUN | 0.496500 | 1.289256 | 2.041553 | 0.001860 | 0.002061 | 0.002081 |
| rot_mat_test.test | RUN | 0.739926 | 5.726584 | 5.965534 | 0.059742 | 0.054736 | 0.049056 |
| rot_quat_test.test | RUN | 0.400697 | 1.197316 | 1.506190 | 0.002002 | 0.002276 | 0.001932 |
| rotx_mat_test.test | RUN | 0.459470 | 1.576071 | 1.871686 | 0.001825 | 0.002165 | 0.002196 |
| rotx_quat_test.test | RUN | 0.388429 | 0.998839 | 1.379923 | 0.001859 | 0.002036 | 0.002170 |
| roty_mat_test.test | RUN | 0.459823 | 1.557797 | 1.688133 | 0.002268 | 0.002253 | 0.002001 |
| roty_quat_test.test | RUN | 0.392791 | 1.009525 | 1.437790 | 0.001962 | 0.002190 | 0.002010 |
| rotz_mat_test.test | RUN | 0.464579 | 1.748005 | 2.021958 | 0.001942 | 0.002156 | 0.001960 |
| rotz_quat_test.test | RUN | 0.391286 | 0.990250 | 1.303969 | 0.001764 | 0.001951 | 0.002037 |
| zero_vec_test.test | RUN | 0.343446 | 0.875983 | 1.103303 | 0.002328 | 0.002116 | 0.001768 |
| zero_mat_test.test | RUN | 0.434738 | 1.406464 | 1.671479 | 0.001859 | 0.002142 | 0.002053 |
| zero_quat_test.test | RUN | 0.318202 | 0.717599 | 1.185724 | 0.001971 | 0.002240 | 0.002010 |
| identity_mat_test.test | RUN | 0.391186 | 1.104860 | 1.464779 | 0.001797 | 0.001974 | 0.002018 |
| identity_quat_test.test | RUN | 0.332127 | 0.704215 | 1.171214 | 0.001996 | 0.002218 | 0.001850 |
| col_test.test | RUN | 0.637905 | 2.221821 | 3.120165 | 0.001842 | 0.002082 | 0.001993 |
| col_mat_test.test | RUN | 0.423896 | 0.996428 | 1.545105 | 0.002028 | 0.002176 | 0.002244 |
| neg_col_test.test | RUN | 0.480570 | 1.459022 | 1.972640 | 0.001955 | 0.002016 | 0.001776 |
| neg_row_test.test | RUN | 0.491051 | 1.450581 | 1.989219 | 0.001994 | 0.001608 | 0.001934 |
| del_col_test.test | RUN | 0.507598 | 1.604152 | 1.948994 | 0.002068 | 0.002014 | 0.002342 |
| del_row_test.test | RUN | 0.499943 | 1.518165 | 1.976785 | 0.001938 | 0.002190 | 0.002107 |
| del_row_col_test.test | RUN | 0.687423 | 2.932871 | 3.789256 | 0.001954 | 0.002191 | 0.001565 |
| swap_cols_test.test | RUN | 0.951435 | 3.889801 | 4.557547 | 0.002062 | 0.002084 | 0.002234 |
| swap_rows_test.test | RUN | 0.999215 | 4.074936 | 4.542699 | 0.001949 | 0.002128 | 0.002264 |
| diag_test.test | RUN | 0.416081 | 1.058454 | 1.741828 | 0.001832 | 0.002129 | 0.002066 |
| diag_mat_test.test | RUN | 0.443201 | 1.050957 | 1.473547 | 0.001896 | 0.002096 | 0.002356 |
| row_test.test | RUN | 0.647203 | 2.269531 | 3.099014 | 0.001819 | 0.002242 | 0.002022 |
| row_mat_test.test | RUN | 0.415209 | 1.040389 | 1.476198 | 0.002120 | 0.001774 | 0.002141 |
| transpose_test.test | RUN | 0.506192 | 1.495431 | 2.052556 | 0.001664 | 0.002358 | 0.001896 |
| translation_test.test | RUN | 0.404875 | 0.943895 | 1.470105 | 0.001837 | 0.001864 | 0.001747 |
| translation_mat_test.test | RUN | 0.436465 | 0.991819 | 1.617228 | 0.001848 | 0.001868 | 0.001632 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.148117 | 0.299210 | 0.480929 | — | — | — |
| swizzle2_test2.test | RUN | 0.174419 | 0.416083 | 0.611225 | 0.001842 | 0.001741 | 0.001714 |
| swizzle2_test3.test | RUN | 0.171791 | 0.421648 | 0.634994 | 0.001846 | 0.001853 | 0.001731 |
| swizzle2_test4.test | RUN | 0.175329 | 0.407858 | 0.609552 | 0.001826 | 0.002222 | 0.001777 |
| swizzle2_test.test | RUN | 0.561104 | 1.157086 | 2.090583 | 0.001907 | 0.002060 | 0.001985 |
| swizzle3_test2.test | RUN | 0.198209 | 0.461557 | 0.730191 | 0.001544 | 0.002201 | 0.001862 |
| swizzle3_test3.test | RUN | 0.199931 | 0.438433 | 0.694006 | 0.001880 | 0.002028 | 0.001861 |
| swizzle3_test4.test | RUN | 0.197050 | 0.434586 | 0.709183 | 0.001414 | 0.001967 | 0.001770 |
| swizzle3_test.test | RUN | 0.551159 | 1.211667 | 2.174719 | 0.001738 | 0.001954 | 0.002081 |
| swizzle4_test2.test | RUN | 0.340547 | 0.663321 | 1.278163 | 0.001888 | 0.002242 | 0.002047 |
| swizzle4_test3.test | RUN | 0.334390 | 0.684914 | 1.208181 | 0.001660 | 0.001805 | 0.002224 |
| swizzle4_test4.test | RUN | 0.344444 | 0.637967 | 1.193249 | 0.001561 | 0.001957 | 0.001711 |
| swizzle4_test.test | RUN | 0.573356 | 1.334347 | 2.281664 | 0.001959 | 0.002056 | 0.001959 |
| deduce_scalar_test.test | COMPILE | 0.028676 | 0.063465 | 0.105596 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.213962 | 0.485781 | 0.777836 | 0.001811 | 0.001809 | 0.001763 |
| deduce_scalar_mv_test.test | RUN | 0.254362 | 0.570784 | 0.939581 | 0.001856 | 0.001868 | 0.002002 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.023276 | 0.042293 | 0.071050 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.025085 | 0.055639 | 0.083464 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.025266 | 0.055451 | 0.079018 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.024693 | 0.051296 | 0.079837 | — | — | — |
| interop_test.test | RUN | 0.278377 | 0.717348 | 1.315819 | 0.000895 | 0.000969 | 0.002068 |
| transform_test.test | RUN | 0.499112 | 0.911791 | 1.754350 | 0.001508 | 0.001468 | 0.001568 |
| projection_test.test | RUN | 0.316028 | 0.816150 | 1.105663 | 0.001461 | 0.001194 | 0.001468 |
| scalar_traits_test.test | COMPILE | 0.026632 | 0.057984 | 0.093370 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.952× | 0.933×, 0.971× | 0.969× |
| clang | 1.027×† | 1.059×, 0.996× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001266s | 0.001236s | 0.001296s | byte equality observed |
| access_q_test.test | 10 | 0.001237s | 0.001244s | 0.001238s | byte equality observed |
| access_v_test.test | 10 | 0.001271s | 0.001215s | 0.001271s | byte equality observed |
| assign_test.test | 10 | 0.001261s | 0.001195s | 0.001279s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001279s | 0.001227s | 0.001278s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001273s | 0.001262s | 0.001270s | byte equality observed |
| cmp_vv_test.test | 9 | 0.001218s | 0.001187s | 0.001240s | byte equality observed |
| col_mat_test.test | 10 | 0.001262s | 0.001226s | 0.001312s | byte equality observed |
| col_test.test | 10 | 0.001267s | 0.001236s | 0.001258s | byte equality observed |
| conjugate_test.test | 10 | 0.001248s | 0.001252s | 0.001268s | byte equality observed |
| convert_to_test.test | 10 | 0.001258s | 0.001221s | 0.001286s | byte equality observed |
| cross_test.test | 10 | 0.001251s | 0.001263s | 0.001252s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001244s | 0.001229s | 0.001308s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001255s | 0.001227s | 0.001240s | byte equality observed |
| del_col_test.test | 10 | 0.001248s | 0.001257s | 0.001247s | byte equality observed |
| del_row_col_test.test | 10 | 0.001289s | 0.001224s | 0.001294s | byte equality observed |
| del_row_test.test | 10 | 0.001244s | 0.001199s | 0.001263s | byte equality observed |
| determinant_test.test | 10 | 0.001292s | 0.001217s | 0.001223s | byte equality observed |
| diag_mat_test.test | 10 | 0.001237s | 0.001199s | 0.001230s | byte equality observed |
| diag_test.test | 10 | 0.001276s | 0.001213s | 0.001224s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001250s | 0.001216s | 0.001247s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001229s | 0.001244s | 0.001274s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001277s | 0.001256s | 0.001226s | byte equality observed |
| div_ms_test.test | 10 | 0.001265s | 0.001296s | 0.001211s | byte equality observed |
| div_qs_test.test | 10 | 0.001239s | 0.001263s | 0.001279s | byte equality observed |
| div_vs_test.test | 9 | 0.001291s | 0.001321s | 0.001247s | byte equality observed |
| dot_qq_test.test | 10 | 0.001241s | 0.001246s | 0.001219s | byte equality observed |
| dot_vv_test.test | 10 | 0.001218s | 0.001242s | 0.001218s | byte equality observed |
| eq_mm_test.test | 10 | 0.001258s | 0.001273s | 0.001218s | byte equality observed |
| eq_qq_test.test | 10 | 0.001244s | 0.001242s | 0.001266s | byte equality observed |
| eq_vv_test.test | 10 | 0.001268s | 0.001232s | 0.001219s | byte equality observed |
| identity_mat_test.test | 10 | 0.001224s | 0.001230s | 0.001265s | byte equality observed |
| identity_quat_test.test | 10 | 0.001254s | 0.001255s | 0.001231s | byte equality observed |
| interop_test.test | 10 | 0.000565s | 0.000571s | 0.001194s | byte equality observed |
| inverse_m_test.test | 10 | 0.001306s | 0.001290s | 0.001271s | byte equality observed |
| inverse_q_test.test | 10 | 0.001250s | 0.001291s | 0.001219s | byte equality observed |
| mag_q_test.test | 10 | 0.001252s | 0.001269s | 0.001252s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001232s | 0.001249s | 0.001234s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.001228s | 0.001216s | 0.001262s | byte equality observed |
| mag_v_test.test | 10 | 0.001230s | 0.001282s | 0.001227s | byte equality observed |
| mat_index_test.test | 10 | 0.001261s | 0.001224s | 0.001227s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.001237s | 0.001250s | 0.001279s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001250s | 0.001219s | 0.001194s | byte equality observed |
| math_test.test | 9 | 0.001897s | 0.001797s | 0.001597s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001211s | 0.001214s | 0.001282s | byte equality observed |
| minus_eq_qq_test.test | 7 | 0.001255s | 0.001259s | 0.001239s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001252s | 0.001256s | 0.001228s | byte equality observed |
| minus_m_test.test | 10 | 0.001274s | 0.001221s | 0.001200s | byte equality observed |
| minus_mm_test.test | 10 | 0.001248s | 0.001215s | 0.001288s | byte equality observed |
| minus_q_test.test | 10 | 0.001261s | 0.001246s | 0.001219s | byte equality observed |
| minus_qq_test.test | 10 | 0.001245s | 0.001222s | 0.001253s | byte equality observed |
| minus_v_test.test | 10 | 0.001223s | 0.001189s | 0.001262s | byte equality observed |
| minus_vv_test.test | 10 | 0.001212s | 0.001212s | 0.001202s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001235s | 0.001234s | 0.001206s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.001236s | 0.001258s | 0.001322s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001251s | 0.001226s | 0.001261s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.001281s | 0.001287s | 0.001260s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001241s | 0.001203s | 0.001309s | byte equality observed |
| mul_mm_test.test | 10 | 0.001262s | 0.001297s | 0.001212s | byte equality observed |
| mul_ms_test.test | 10 | 0.001334s | 0.001295s | 0.001224s | byte equality observed |
| mul_mv_test.test | 10 | 0.001251s | 0.001273s | 0.001250s | byte equality observed |
| mul_qq_test.test | 10 | 0.001244s | 0.001281s | 0.001274s | byte equality observed |
| mul_qs_test.test | 10 | 0.001222s | 0.001205s | 0.001251s | byte equality observed |
| mul_qv_test.test | 10 | 0.001272s | 0.001204s | 0.001286s | byte equality observed |
| mul_sm_test.test | 10 | 0.001250s | 0.001213s | 0.001327s | byte equality observed |
| mul_sv_test.test | 10 | 0.001251s | 0.001217s | 0.001225s | byte equality observed |
| mul_vm_test.test | 10 | 0.001205s | 0.001245s | 0.001243s | byte equality observed |
| mul_vs_test.test | 10 | 0.001200s | 0.001244s | 0.001299s | byte equality observed |
| neg_col_test.test | 10 | 0.001220s | 0.001242s | 0.001274s | byte equality observed |
| neg_row_test.test | 10 | 0.001271s | 0.001242s | 0.001308s | byte equality observed |
| normalize_q_test.test | 10 | 0.001285s | 0.001213s | 0.001235s | byte equality observed |
| normalize_v_test.test | 10 | 0.001260s | 0.001280s | 0.001313s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.001258s | 0.001280s | 0.001276s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.001231s | 0.001250s | 0.001270s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001250s | 0.001204s | 0.001324s | byte equality observed |
| plus_mm_test.test | 10 | 0.001295s | 0.001254s | 0.001335s | byte equality observed |
| plus_qq_test.test | 10 | 0.001273s | 0.001187s | 0.001346s | byte equality observed |
| plus_vv_test.test | 10 | 0.001281s | 0.001244s | 0.001362s | byte equality observed |
| projection_test.test | 8 | 0.001222s | 0.001172s | 0.001480s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001269s | 0.001223s | 0.001427s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001188s | 0.001175s | 0.001406s | byte equality observed |
| rot_mat_test.test | 1 | 0.037056s | 0.033209s | 0.044304s | byte equality observed |
| rot_quat_test.test | 10 | 0.001156s | 0.001126s | 0.001464s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001175s | 0.001176s | 0.001458s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001228s | 0.001216s | 0.001434s | byte equality observed |
| roty_mat_test.test | 10 | 0.001252s | 0.001257s | 0.001493s | byte equality observed |
| roty_quat_test.test | 10 | 0.001259s | 0.001203s | 0.001472s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001259s | 0.001289s | 0.001502s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001272s | 0.001209s | 0.001484s | byte equality observed |
| row_mat_test.test | 10 | 0.001254s | 0.001265s | 0.001485s | byte equality observed |
| row_test.test | 10 | 0.001283s | 0.001253s | 0.001492s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001248s | 0.001265s | 0.001401s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001283s | 0.001261s | 0.001484s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001307s | 0.001197s | 0.001446s | byte equality observed |
| slerp_test.test | 2 | 0.021755s | 0.014899s | 0.019169s | byte equality observed |
| swap_cols_test.test | 10 | 0.001335s | 0.001223s | 0.001440s | byte equality observed |
| swap_rows_test.test | 10 | 0.001393s | 0.001364s | 0.001416s | byte equality observed |
| swizzle2_test.test | 10 | 0.001411s | 0.001388s | 0.001435s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001437s | 0.001436s | 0.001498s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001463s | 0.001451s | 0.001475s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001485s | 0.001486s | 0.001458s | byte equality observed |
| swizzle3_test.test | 10 | 0.001486s | 0.001425s | 0.001468s | byte equality observed |
| swizzle3_test2.test | 9 | 0.001490s | 0.001464s | 0.001521s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001506s | 0.001469s | 0.001469s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001462s | 0.001437s | 0.001469s | byte equality observed |
| swizzle4_test.test | 10 | 0.001464s | 0.001507s | 0.001486s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001494s | 0.001489s | 0.001491s | byte equality observed |
| swizzle4_test3.test | 9 | 0.001457s | 0.001445s | 0.001502s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001466s | 0.001451s | 0.001485s | byte equality observed |
| to_string_test.test | 10 | 0.001526s | 0.001526s | 0.001542s | byte equality observed |
| transform_test.test | 9 | 0.001525s | 0.001499s | 0.001522s | byte equality observed |
| translation_mat_test.test | 10 | 0.001500s | 0.001473s | 0.001476s | byte equality observed |
| translation_test.test | 10 | 0.001496s | 0.001463s | 0.001460s | byte equality observed |
| transpose_test.test | 10 | 0.001504s | 0.001469s | 0.001457s | byte equality observed |
| vec_index_test.test | 10 | 0.001465s | 0.001465s | 0.001528s | byte equality observed |
| vec_register_test.test | 10 | 0.001496s | 0.001479s | 0.001471s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001475s | 0.001469s | 0.001468s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001500s | 0.001476s | 0.001523s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001476s | 0.001497s | 0.001483s | byte equality observed |
| zero_mat_test.test | 10 | 0.001486s | 0.001511s | 0.001498s | byte equality observed |
| zero_quat_test.test | 10 | 0.001487s | 0.001492s | 0.001485s | byte equality observed |
| zero_vec_test.test | 10 | 0.001496s | 0.001456s | 0.001485s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
