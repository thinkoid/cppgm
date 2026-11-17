# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.333107 | 0.884094 | 1.263372 | 0.002848 | 0.002661 | 0.002736 |
| mat_traits_array_test.test | RUN | 0.262353 | 0.900338 | 0.975239 | 0.001332 | 0.001822 | 0.001415 |
| mat_traits_std_array_test.test | RUN | 0.265075 | 0.702739 | 1.021739 | 0.001937 | 0.001758 | 0.001681 |
| vec_traits_array_test.test | RUN | 0.229047 | 0.696528 | 0.844310 | 0.001724 | 0.001907 | 0.001701 |
| vec_traits_gnuc_test.test | RUN | 0.421260 | 0.883095 | 1.677878 | 0.002016 | 0.002108 | 0.002154 |
| vec_traits_std_array_test.test | RUN | 0.228609 | 0.540922 | 0.848371 | 0.001943 | 0.001851 | 0.001986 |
| quat_traits_array_test.test | RUN | 0.224698 | 0.727742 | 0.789441 | 0.001918 | 0.001969 | 0.002044 |
| quat_traits_std_array_test.test | RUN | 0.221807 | 0.558412 | 0.805469 | 0.001666 | 0.002070 | 0.001932 |
| access_m_test.test | RUN | 0.373842 | 1.350695 | 1.838889 | 0.002000 | 0.002132 | 0.001953 |
| access_m_fail1.test | COMPILE_FAIL | 0.035009 | 0.061705 | 0.127668 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.035302 | 0.064210 | 0.126125 | — | — | — |
| access_q_test.test | RUN | 0.301260 | 0.668383 | 1.018388 | 0.002063 | 0.002248 | 0.002164 |
| access_q_fail.test | COMPILE_FAIL | 0.029794 | 0.044552 | 0.096804 | — | — | — |
| access_v_test.test | RUN | 0.302554 | 0.712157 | 1.079535 | 0.001879 | 0.001914 | 0.001963 |
| access_v_fail1.test | COMPILE_FAIL | 0.025327 | 0.044562 | 0.088217 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.023150 | 0.044868 | 0.088200 | — | — | — |
| assign_test.test | RUN | 0.466150 | 1.116566 | 1.887637 | 0.002002 | 0.002184 | 0.002070 |
| to_string_test.test | RUN | 0.524021 | 1.808866 | 10.239889 | 0.001664 | 0.001864 | 0.002148 |
| cmp_vv_test.test | RUN | 0.371636 | 0.909409 | 1.348393 | 0.001770 | 0.001920 | 0.001830 |
| cross_test.test | RUN | 0.373920 | 0.812927 | 1.357048 | 0.001904 | 0.002229 | 0.002182 |
| div_eq_vs_test.test | RUN | 0.349000 | 0.770756 | 1.238681 | 0.001937 | 0.001952 | 0.002022 |
| div_vs_test.test | RUN | 0.371088 | 0.928344 | 1.394232 | 0.001756 | 0.002250 | 0.001917 |
| dot_vv_test.test | RUN | 0.336082 | 0.867258 | 1.312169 | 0.001942 | 0.002432 | 0.001722 |
| eq_vv_test.test | RUN | 0.374677 | 0.922882 | 1.318345 | 0.001866 | 0.002086 | 0.002037 |
| mag_v_test.test | RUN | 0.343786 | 0.791058 | 1.275582 | 0.001780 | 0.002144 | 0.001836 |
| mag_sqr_v_test.test | RUN | 0.341808 | 0.754477 | 1.281818 | 0.001804 | 0.002154 | 0.001760 |
| minus_v_test.test | RUN | 0.352085 | 0.898244 | 1.230417 | 0.001796 | 0.002253 | 0.001890 |
| minus_eq_vv_test.test | RUN | 0.353259 | 0.866417 | 1.321840 | 0.001742 | 0.002134 | 0.001740 |
| minus_vv_test.test | RUN | 0.357559 | 0.956031 | 1.389600 | 0.001896 | 0.002113 | 0.001791 |
| mul_eq_vs_test.test | RUN | 0.341725 | 0.761278 | 1.216579 | 0.001820 | 0.002250 | 0.002112 |
| mul_vs_test.test | RUN | 0.359329 | 0.946538 | 1.373761 | 0.001722 | 0.002250 | 0.001988 |
| mul_sv_test.test | RUN | 0.367009 | 0.944141 | 1.397067 | 0.001823 | 0.002104 | 0.002118 |
| mul_vm_test.test | RUN | 0.496913 | 1.669527 | 1.890217 | 0.001600 | 0.001798 | 0.001836 |
| normalize_v_test.test | RUN | 0.362981 | 1.185769 | 1.412331 | 0.001969 | 0.002018 | 0.001696 |
| plus_eq_vv_test.test | RUN | 0.343975 | 0.897468 | 1.332511 | 0.001642 | 0.002036 | 0.001727 |
| plus_vv_test.test | RUN | 0.367187 | 0.950087 | 1.327977 | 0.002194 | 0.002208 | 0.001903 |
| scalar_cast_v_test.test | RUN | 0.340903 | 0.705073 | 1.218989 | 0.001958 | 0.002142 | 0.002048 |
| vec_index_test.test | RUN | 0.296328 | 0.714973 | 1.098278 | 0.001940 | 0.001830 | 0.002100 |
| vec_register_test.test | RUN | 0.199453 | 0.666058 | 0.794792 | 0.001837 | 0.001982 | 0.002150 |
| cmp_mm_test.test | RUN | 0.564224 | 2.062394 | 2.670679 | 0.002074 | 0.002224 | 0.002130 |
| determinant_test.test | RUN | 0.395835 | 1.049517 | 1.485919 | 0.002281 | 0.002077 | 0.002129 |
| div_eq_ms_test.test | RUN | 0.405876 | 0.991491 | 1.724322 | 0.001890 | 0.001992 | 0.001950 |
| div_ms_test.test | RUN | 0.488997 | 1.550018 | 2.003382 | 0.002040 | 0.002129 | 0.002424 |
| eq_mm_test.test | RUN | 0.563295 | 1.878009 | 2.460674 | 0.002212 | 0.001909 | 0.002099 |
| minus_m_test.test | RUN | 0.487770 | 1.526504 | 1.925864 | 0.001768 | 0.001946 | 0.002094 |
| minus_eq_mm_test.test | RUN | 0.465839 | 1.398000 | 1.827783 | 0.002034 | 0.001918 | 0.001800 |
| minus_mm_test.test | RUN | 0.511646 | 1.808477 | 2.117851 | 0.002036 | 0.002140 | 0.002022 |
| mul_eq_mm_test.test | RUN | 0.423880 | 1.315311 | 1.651676 | 0.002156 | 0.002086 | 0.001975 |
| mul_eq_ms_test.test | RUN | 0.410193 | 0.985865 | 1.674503 | 0.002116 | 0.002158 | 0.002175 |
| mul_mm_test.test | RUN | 0.593977 | 2.954242 | 2.608849 | 0.002066 | 0.002097 | 0.001851 |
| mul_ms_test.test | RUN | 0.484523 | 1.563156 | 2.084657 | 0.001898 | 0.002102 | 0.001972 |
| mul_sm_test.test | RUN | 0.497137 | 1.546753 | 2.132051 | 0.001597 | 0.002172 | 0.002138 |
| mul_mv_test.test | RUN | 0.505422 | 1.671763 | 2.150432 | 0.001945 | 0.002126 | 0.002246 |
| inverse_m_test.test | RUN | 0.658033 | 2.974419 | 2.908060 | 0.002080 | 0.001529 | 0.002211 |
| plus_eq_mm_test.test | RUN | 0.461489 | 1.428014 | 1.895082 | 0.001966 | 0.001968 | 0.002264 |
| plus_mm_test.test | RUN | 0.528495 | 1.863127 | 2.164950 | 0.002111 | 0.002080 | 0.001765 |
| scalar_cast_m_test.test | RUN | 0.400322 | 0.833004 | 1.354562 | 0.001806 | 0.002099 | 0.001662 |
| mat_index_test.test | RUN | 0.307611 | 0.778577 | 1.166869 | 0.001760 | 0.001795 | 0.002176 |
| cmp_qq_test.test | RUN | 0.330195 | 0.735081 | 1.171333 | 0.001949 | 0.001965 | 0.002023 |
| conjugate_test.test | RUN | 0.339413 | 0.767573 | 1.192124 | 0.002005 | 0.001617 | 0.001694 |
| normalize_q_test.test | RUN | 0.343454 | 0.838839 | 1.271047 | 0.002005 | 0.002048 | 0.001879 |
| div_eq_qs_test.test | RUN | 0.332876 | 0.710209 | 1.226181 | 0.002064 | 0.001840 | 0.002004 |
| div_qs_test.test | RUN | 0.340574 | 0.770828 | 1.226012 | 0.002142 | 0.001967 | 0.001752 |
| dot_qq_test.test | RUN | 0.347277 | 0.749386 | 1.210371 | 0.002054 | 0.001868 | 0.002108 |
| eq_qq_test.test | RUN | 0.339059 | 0.786519 | 1.248828 | 0.002078 | 0.001975 | 0.002293 |
| inverse_q_test.test | RUN | 0.401340 | 1.012317 | 1.510494 | 0.002032 | 0.001791 | 0.002152 |
| mag_q_test.test | RUN | 0.346207 | 0.782773 | 1.206579 | 0.002088 | 0.001913 | 0.001623 |
| mag_sqr_q_test.test | RUN | 0.333182 | 0.754854 | 1.199388 | 0.002340 | 0.001814 | 0.001929 |
| minus_q_test.test | RUN | 0.338256 | 0.775303 | 1.171886 | 0.001736 | 0.001956 | 0.002052 |
| minus_eq_qq_test.test | RUN | 0.343241 | 0.766246 | 1.146479 | 0.002085 | 0.001860 | 0.002180 |
| minus_qq_test.test | RUN | 0.354137 | 0.788032 | 1.208333 | 0.001931 | 0.002012 | 0.001806 |
| mul_eq_qs_test.test | RUN | 0.329577 | 0.730458 | 1.160858 | 0.001980 | 0.002188 | 0.002040 |
| mul_qs_test.test | RUN | 0.342803 | 0.785620 | 1.147448 | 0.002026 | 0.002011 | 0.002166 |
| mul_qv_test.test | RUN | 0.419018 | 1.034644 | 1.519775 | 0.002082 | 0.002282 | 0.002226 |
| mul_qq_test.test | RUN | 0.423430 | 1.046995 | 1.459215 | 0.001946 | 0.002242 | 0.002087 |
| mul_eq_qq_test.test | RUN | 0.408449 | 1.028398 | 1.480239 | 0.001534 | 0.002086 | 0.001992 |
| plus_eq_qq_test.test | RUN | 0.342981 | 0.745409 | 1.181190 | 0.001794 | 0.002149 | 0.002098 |
| plus_qq_test.test | RUN | 0.335159 | 0.755169 | 1.180944 | 0.002076 | 0.002034 | 0.002116 |
| scalar_cast_q_test.test | RUN | 0.338637 | 0.708115 | 1.153888 | 0.002084 | 0.001935 | 0.002275 |
| slerp_test.test | RUN | 0.360362 | 1.449711 | 1.388431 | 0.024820 | 0.020060 | 0.021292 |
| convert_to_test.test | RUN | 0.490984 | 1.321970 | 2.173185 | 0.002060 | 0.002000 | 0.002275 |
| rot_mat_test.test | RUN | 0.735568 | 5.859502 | 6.133454 | 0.061141 | 0.054080 | 0.050264 |
| rot_quat_test.test | RUN | 0.417117 | 1.243390 | 1.546809 | 0.002208 | 0.002119 | 0.002136 |
| rotx_mat_test.test | RUN | 0.467921 | 1.586459 | 1.962780 | 0.002122 | 0.002170 | 0.002158 |
| rotx_quat_test.test | RUN | 0.400198 | 1.062663 | 1.384953 | 0.001890 | 0.002088 | 0.001940 |
| roty_mat_test.test | RUN | 0.449451 | 1.593676 | 1.950949 | 0.002145 | 0.002081 | 0.002018 |
| roty_quat_test.test | RUN | 0.398319 | 1.051803 | 1.441930 | 0.002118 | 0.002234 | 0.002173 |
| rotz_mat_test.test | RUN | 0.476141 | 1.832621 | 1.827257 | 0.001848 | 0.001816 | 0.001990 |
| rotz_quat_test.test | RUN | 0.401852 | 1.043195 | 1.467229 | 0.002055 | 0.002011 | 0.001554 |
| zero_vec_test.test | RUN | 0.348619 | 0.901088 | 1.323793 | 0.001936 | 0.002034 | 0.001568 |
| zero_mat_test.test | RUN | 0.439399 | 1.482478 | 1.699789 | 0.001915 | 0.002267 | 0.002177 |
| zero_quat_test.test | RUN | 0.326106 | 0.735167 | 1.154177 | 0.001962 | 0.001830 | 0.002000 |
| identity_mat_test.test | RUN | 0.400927 | 1.130321 | 1.554634 | 0.002086 | 0.002187 | 0.002123 |
| identity_quat_test.test | RUN | 0.335677 | 0.718901 | 1.160070 | 0.002072 | 0.002185 | 0.002099 |
| col_test.test | RUN | 0.651823 | 2.301210 | 3.336050 | 0.001738 | 0.002148 | 0.002444 |
| col_mat_test.test | RUN | 0.422302 | 1.073727 | 1.568448 | 0.002007 | 0.002097 | 0.002192 |
| neg_col_test.test | RUN | 0.493091 | 1.465646 | 2.050590 | 0.001820 | 0.002078 | 0.001955 |
| neg_row_test.test | RUN | 0.517732 | 1.521070 | 2.009796 | 0.002142 | 0.002152 | 0.002114 |
| del_col_test.test | RUN | 0.529064 | 1.668219 | 2.057957 | 0.001936 | 0.002108 | 0.002145 |
| del_row_test.test | RUN | 0.514708 | 1.551613 | 2.044683 | 0.002141 | 0.002190 | 0.002198 |
| del_row_col_test.test | RUN | 0.729226 | 3.060521 | 3.968888 | 0.002109 | 0.002120 | 0.001940 |
| swap_cols_test.test | RUN | 0.954122 | 4.099224 | 4.754402 | 0.001928 | 0.001985 | 0.002108 |
| swap_rows_test.test | RUN | 1.019411 | 4.231697 | 4.656748 | 0.002097 | 0.001744 | 0.002266 |
| diag_test.test | RUN | 0.432069 | 1.089618 | 1.796310 | 0.002172 | 0.002229 | 0.001958 |
| diag_mat_test.test | RUN | 0.447110 | 1.099453 | 1.511788 | 0.002015 | 0.002153 | 0.002178 |
| row_test.test | RUN | 0.672121 | 2.320257 | 3.153723 | 0.001944 | 0.002152 | 0.001952 |
| row_mat_test.test | RUN | 0.423065 | 1.015404 | 1.554445 | 0.002081 | 0.001830 | 0.002209 |
| transpose_test.test | RUN | 0.514840 | 1.570028 | 2.067906 | 0.001988 | 0.001989 | 0.001779 |
| translation_test.test | RUN | 0.404759 | 0.990006 | 1.485412 | 0.002060 | 0.001930 | 0.001706 |
| translation_mat_test.test | RUN | 0.439320 | 1.027405 | 1.642713 | 0.001896 | 0.001916 | 0.002260 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.151900 | 0.292446 | 0.493394 | — | — | — |
| swizzle2_test2.test | RUN | 0.186009 | 0.429573 | 0.645735 | 0.001696 | 0.001712 | 0.001930 |
| swizzle2_test3.test | RUN | 0.182766 | 0.436026 | 0.653361 | 0.001994 | 0.001901 | 0.001869 |
| swizzle2_test4.test | RUN | 0.185833 | 0.426232 | 0.663205 | 0.001868 | 0.002100 | 0.001814 |
| swizzle2_test.test | RUN | 0.580569 | 1.197348 | 2.201309 | 0.002030 | 0.002048 | 0.002111 |
| swizzle3_test2.test | RUN | 0.209444 | 0.458098 | 0.734061 | 0.001858 | 0.002108 | 0.001824 |
| swizzle3_test3.test | RUN | 0.204472 | 0.471251 | 0.732181 | 0.001842 | 0.002186 | 0.001840 |
| swizzle3_test4.test | RUN | 0.220042 | 0.441121 | 0.753854 | 0.001776 | 0.002212 | 0.002254 |
| swizzle3_test.test | RUN | 0.578798 | 1.229019 | 2.113145 | 0.002090 | 0.001738 | 0.002308 |
| swizzle4_test2.test | RUN | 0.344525 | 0.658106 | 1.276910 | 0.002083 | 0.002164 | 0.002195 |
| swizzle4_test3.test | RUN | 0.351289 | 0.675848 | 1.284505 | 0.001942 | 0.001747 | 0.002157 |
| swizzle4_test4.test | RUN | 0.360609 | 0.704545 | 1.221229 | 0.002034 | 0.002118 | 0.002180 |
| swizzle4_test.test | RUN | 0.585862 | 1.345159 | 2.371925 | 0.002146 | 0.001971 | 0.002236 |
| deduce_scalar_test.test | COMPILE | 0.029723 | 0.064067 | 0.109997 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.221139 | 0.514042 | 0.786833 | 0.001912 | 0.001992 | 0.002016 |
| deduce_scalar_mv_test.test | RUN | 0.259300 | 0.566068 | 0.987825 | 0.001920 | 0.002096 | 0.002072 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.024034 | 0.037677 | 0.071970 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.025334 | 0.057363 | 0.083409 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.026171 | 0.055544 | 0.083314 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.026126 | 0.056227 | 0.084203 | — | — | — |
| interop_test.test | RUN | 0.268712 | 0.737247 | 1.320755 | 0.000744 | 0.000921 | 0.001540 |
| transform_test.test | RUN | 0.520525 | 1.068582 | 1.959747 | 0.001677 | 0.001728 | 0.001553 |
| projection_test.test | RUN | 0.350630 | 0.736707 | 1.222409 | 0.001574 | 0.001626 | 0.001500 |
| scalar_traits_test.test | COMPILE | 0.029942 | 0.058500 | 0.095143 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.965× | 0.980×, 0.949× | 1.021× |
| clang | 1.001× | 1.003×, 0.999× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.001239s | 0.001272s | 0.001231s | byte equality observed |
| access_q_test.test | 10 | 0.001192s | 0.001242s | 0.001260s | byte equality observed |
| access_v_test.test | 8 | 0.001208s | 0.001276s | 0.001276s | byte equality observed |
| assign_test.test | 10 | 0.001238s | 0.001247s | 0.001221s | byte equality observed |
| cmp_mm_test.test | 10 | 0.001235s | 0.001276s | 0.001244s | byte equality observed |
| cmp_qq_test.test | 10 | 0.001214s | 0.001254s | 0.001231s | byte equality observed |
| cmp_vv_test.test | 10 | 0.001219s | 0.001253s | 0.001249s | byte equality observed |
| col_mat_test.test | 10 | 0.001266s | 0.001252s | 0.001220s | byte equality observed |
| col_test.test | 9 | 0.001212s | 0.001267s | 0.001230s | byte equality observed |
| conjugate_test.test | 10 | 0.001203s | 0.001225s | 0.001186s | byte equality observed |
| convert_to_test.test | 10 | 0.001232s | 0.001236s | 0.001190s | byte equality observed |
| cross_test.test | 10 | 0.001216s | 0.001265s | 0.001236s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.001267s | 0.001275s | 0.001251s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.001240s | 0.001274s | 0.001217s | byte equality observed |
| del_col_test.test | 10 | 0.001225s | 0.001213s | 0.001298s | byte equality observed |
| del_row_col_test.test | 10 | 0.001254s | 0.001248s | 0.001266s | byte equality observed |
| del_row_test.test | 10 | 0.001248s | 0.001229s | 0.001243s | byte equality observed |
| determinant_test.test | 10 | 0.001262s | 0.001256s | 0.001260s | byte equality observed |
| diag_mat_test.test | 10 | 0.001226s | 0.001234s | 0.001220s | byte equality observed |
| diag_test.test | 10 | 0.001303s | 0.001300s | 0.001181s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.001227s | 0.001209s | 0.001178s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.001212s | 0.001222s | 0.001238s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.001255s | 0.001244s | 0.001251s | byte equality observed |
| div_ms_test.test | 10 | 0.001250s | 0.001209s | 0.001213s | byte equality observed |
| div_qs_test.test | 10 | 0.001229s | 0.001219s | 0.001235s | byte equality observed |
| div_vs_test.test | 10 | 0.001247s | 0.001237s | 0.001241s | byte equality observed |
| dot_qq_test.test | 10 | 0.001252s | 0.001253s | 0.001225s | byte equality observed |
| dot_vv_test.test | 10 | 0.001304s | 0.001230s | 0.001214s | byte equality observed |
| eq_mm_test.test | 10 | 0.001250s | 0.001283s | 0.001244s | byte equality observed |
| eq_qq_test.test | 10 | 0.001232s | 0.001254s | 0.001255s | byte equality observed |
| eq_vv_test.test | 10 | 0.001258s | 0.001270s | 0.001214s | byte equality observed |
| identity_mat_test.test | 10 | 0.001250s | 0.001244s | 0.001204s | byte equality observed |
| identity_quat_test.test | 10 | 0.001288s | 0.001221s | 0.001229s | byte equality observed |
| interop_test.test | 10 | 0.000569s | 0.000566s | 0.001195s | byte equality observed |
| inverse_m_test.test | 10 | 0.001330s | 0.001305s | 0.001279s | byte equality observed |
| inverse_q_test.test | 10 | 0.001282s | 0.001209s | 0.001220s | byte equality observed |
| mag_q_test.test | 10 | 0.001259s | 0.001232s | 0.001231s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.001262s | 0.001224s | 0.001271s | byte equality observed |
| mag_sqr_v_test.test | 9 | 0.001256s | 0.001261s | 0.001268s | byte equality observed |
| mag_v_test.test | 10 | 0.001222s | 0.001260s | 0.001233s | byte equality observed |
| mat_index_test.test | 8 | 0.001228s | 0.001286s | 0.001243s | byte equality observed |
| mat_traits_array_test.test | 9 | 0.001233s | 0.001270s | 0.001228s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.001233s | 0.001234s | 0.001219s | byte equality observed |
| math_test.test | 10 | 0.001876s | 0.001821s | 0.001606s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.001199s | 0.001208s | 0.001205s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.001254s | 0.001217s | 0.001233s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.001224s | 0.001215s | 0.001244s | byte equality observed |
| minus_m_test.test | 10 | 0.001242s | 0.001295s | 0.001270s | byte equality observed |
| minus_mm_test.test | 10 | 0.001217s | 0.001288s | 0.001211s | byte equality observed |
| minus_q_test.test | 10 | 0.001214s | 0.001281s | 0.001198s | byte equality observed |
| minus_qq_test.test | 10 | 0.001258s | 0.001299s | 0.001234s | byte equality observed |
| minus_v_test.test | 10 | 0.001257s | 0.001349s | 0.001224s | byte equality observed |
| minus_vv_test.test | 10 | 0.001255s | 0.001358s | 0.001226s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.001265s | 0.001363s | 0.001241s | byte equality observed |
| mul_eq_ms_test.test | 9 | 0.001265s | 0.001342s | 0.001280s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.001272s | 0.001407s | 0.001240s | byte equality observed |
| mul_eq_qs_test.test | 9 | 0.001292s | 0.001329s | 0.001273s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.001248s | 0.001303s | 0.001263s | byte equality observed |
| mul_mm_test.test | 10 | 0.001268s | 0.001365s | 0.001283s | byte equality observed |
| mul_ms_test.test | 10 | 0.001273s | 0.001384s | 0.001290s | byte equality observed |
| mul_mv_test.test | 10 | 0.001302s | 0.001391s | 0.001240s | byte equality observed |
| mul_qq_test.test | 10 | 0.001327s | 0.001420s | 0.001325s | byte equality observed |
| mul_qs_test.test | 10 | 0.001270s | 0.001397s | 0.001348s | byte equality observed |
| mul_qv_test.test | 10 | 0.001270s | 0.001483s | 0.001425s | byte equality observed |
| mul_sm_test.test | 10 | 0.001273s | 0.001529s | 0.001448s | byte equality observed |
| mul_sv_test.test | 10 | 0.001258s | 0.001442s | 0.001464s | byte equality observed |
| mul_vm_test.test | 10 | 0.001228s | 0.001481s | 0.001435s | byte equality observed |
| mul_vs_test.test | 10 | 0.001222s | 0.001524s | 0.001448s | byte equality observed |
| neg_col_test.test | 10 | 0.001277s | 0.001479s | 0.001447s | byte equality observed |
| neg_row_test.test | 10 | 0.001363s | 0.001496s | 0.001461s | byte equality observed |
| normalize_q_test.test | 10 | 0.001368s | 0.001551s | 0.001468s | byte equality observed |
| normalize_v_test.test | 10 | 0.001417s | 0.001461s | 0.001475s | byte equality observed |
| plus_eq_mm_test.test | 7 | 0.001411s | 0.001554s | 0.001447s | byte equality observed |
| plus_eq_qq_test.test | 8 | 0.001464s | 0.001494s | 0.001484s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.001450s | 0.001497s | 0.001433s | byte equality observed |
| plus_mm_test.test | 10 | 0.001495s | 0.001506s | 0.001463s | byte equality observed |
| plus_qq_test.test | 10 | 0.001446s | 0.001475s | 0.001441s | byte equality observed |
| plus_vv_test.test | 10 | 0.001487s | 0.001494s | 0.001476s | byte equality observed |
| projection_test.test | 8 | 0.001457s | 0.001516s | 0.001485s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.001409s | 0.001488s | 0.001437s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.001390s | 0.001481s | 0.001457s | byte equality observed |
| rot_mat_test.test | 1 | 0.054197s | 0.048986s | 0.044885s | byte equality observed |
| rot_quat_test.test | 10 | 0.001460s | 0.001481s | 0.001423s | byte equality observed |
| rotx_mat_test.test | 10 | 0.001435s | 0.001461s | 0.001458s | byte equality observed |
| rotx_quat_test.test | 10 | 0.001440s | 0.001454s | 0.001439s | byte equality observed |
| roty_mat_test.test | 10 | 0.001464s | 0.001466s | 0.001481s | byte equality observed |
| roty_quat_test.test | 10 | 0.001463s | 0.001480s | 0.001449s | byte equality observed |
| rotz_mat_test.test | 10 | 0.001513s | 0.001505s | 0.001495s | byte equality observed |
| rotz_quat_test.test | 10 | 0.001498s | 0.001492s | 0.001476s | byte equality observed |
| row_mat_test.test | 10 | 0.001482s | 0.001484s | 0.001464s | byte equality observed |
| row_test.test | 10 | 0.001493s | 0.001511s | 0.001472s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.001478s | 0.001498s | 0.001471s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.001468s | 0.001475s | 0.001445s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.001430s | 0.001465s | 0.001455s | byte equality observed |
| slerp_test.test | 2 | 0.022727s | 0.019119s | 0.019011s | byte equality observed |
| swap_cols_test.test | 10 | 0.001442s | 0.001412s | 0.001418s | byte equality observed |
| swap_rows_test.test | 10 | 0.001471s | 0.001452s | 0.001436s | byte equality observed |
| swizzle2_test.test | 10 | 0.001442s | 0.001458s | 0.001454s | byte equality observed |
| swizzle2_test2.test | 10 | 0.001454s | 0.001487s | 0.001438s | byte equality observed |
| swizzle2_test3.test | 10 | 0.001459s | 0.001503s | 0.001461s | byte equality observed |
| swizzle2_test4.test | 10 | 0.001479s | 0.001463s | 0.001488s | byte equality observed |
| swizzle3_test.test | 10 | 0.001470s | 0.001487s | 0.001461s | byte equality observed |
| swizzle3_test2.test | 10 | 0.001457s | 0.001508s | 0.001494s | byte equality observed |
| swizzle3_test3.test | 10 | 0.001456s | 0.001494s | 0.001477s | byte equality observed |
| swizzle3_test4.test | 10 | 0.001496s | 0.001516s | 0.001460s | byte equality observed |
| swizzle4_test.test | 10 | 0.001476s | 0.001475s | 0.001479s | byte equality observed |
| swizzle4_test2.test | 10 | 0.001475s | 0.001444s | 0.001481s | byte equality observed |
| swizzle4_test3.test | 10 | 0.001474s | 0.001487s | 0.001460s | byte equality observed |
| swizzle4_test4.test | 10 | 0.001477s | 0.001500s | 0.001467s | byte equality observed |
| to_string_test.test | 10 | 0.001548s | 0.001557s | 0.001526s | byte equality observed |
| transform_test.test | 10 | 0.001479s | 0.001496s | 0.001471s | byte equality observed |
| translation_mat_test.test | 10 | 0.001489s | 0.001500s | 0.001453s | byte equality observed |
| translation_test.test | 10 | 0.001500s | 0.001461s | 0.001455s | byte equality observed |
| transpose_test.test | 10 | 0.001478s | 0.001510s | 0.001487s | byte equality observed |
| vec_index_test.test | 10 | 0.001504s | 0.001486s | 0.001501s | byte equality observed |
| vec_register_test.test | 10 | 0.001474s | 0.001457s | 0.001463s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.001482s | 0.001473s | 0.001459s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.001498s | 0.001509s | 0.001458s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.001486s | 0.001503s | 0.001493s | byte equality observed |
| zero_mat_test.test | 10 | 0.001497s | 0.001488s | 0.001446s | byte equality observed |
| zero_quat_test.test | 10 | 0.001478s | 0.001477s | 0.001460s | byte equality observed |
| zero_vec_test.test | 10 | 0.001470s | 0.001512s | 0.001512s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
