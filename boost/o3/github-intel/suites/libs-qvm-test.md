# libs/qvm/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| math_test.test | RUN | 0.189743 | 0.559054 | 0.586495 | 0.001598 | 0.001656 | 0.001462 |
| mat_traits_array_test.test | RUN | 0.152859 | 0.559638 | 0.454469 | 0.001312 | 0.001270 | 0.001064 |
| mat_traits_std_array_test.test | RUN | 0.148334 | 0.420853 | 0.468072 | 0.001268 | 0.001413 | 0.001081 |
| vec_traits_array_test.test | RUN | 0.127295 | 0.419009 | 0.391452 | 0.001086 | 0.001402 | 0.001033 |
| vec_traits_gnuc_test.test | RUN | 0.236821 | 0.512396 | 0.738532 | 0.001041 | 0.001325 | 0.001189 |
| vec_traits_std_array_test.test | RUN | 0.125652 | 0.330841 | 0.388576 | 0.001353 | 0.001404 | 0.001223 |
| quat_traits_array_test.test | RUN | 0.125375 | 0.450451 | 0.380624 | 0.001138 | 0.000852 | 0.001131 |
| quat_traits_std_array_test.test | RUN | 0.126243 | 0.334959 | 0.377859 | 0.001096 | 0.001332 | 0.001163 |
| access_m_test.test | RUN | 0.208626 | 0.796741 | 0.859133 | 0.001313 | 0.001274 | 0.001133 |
| access_m_fail1.test | COMPILE_FAIL | 0.020100 | 0.033913 | 0.055566 | — | — | — |
| access_m_fail2.test | COMPILE_FAIL | 0.018059 | 0.033704 | 0.057804 | — | — | — |
| access_q_test.test | RUN | 0.174080 | 0.414962 | 0.517170 | 0.001192 | 0.001245 | 0.001197 |
| access_q_fail.test | COMPILE_FAIL | 0.014682 | 0.027483 | 0.048186 | — | — | — |
| access_v_test.test | RUN | 0.171424 | 0.419012 | 0.515382 | 0.001112 | 0.001189 | 0.001170 |
| access_v_fail1.test | COMPILE_FAIL | 0.013034 | 0.023593 | 0.040692 | — | — | — |
| access_v_fail2.test | COMPILE_FAIL | 0.013133 | 0.025256 | 0.043034 | — | — | — |
| assign_test.test | RUN | 0.264640 | 0.683239 | 0.912916 | 0.000911 | 0.001247 | 0.001239 |
| to_string_test.test | RUN | 0.309818 | 1.150220 | 5.499503 | 0.001288 | 0.001239 | 0.001280 |
| cmp_vv_test.test | RUN | 0.211691 | 0.547411 | 0.624223 | 0.001021 | 0.001393 | 0.001116 |
| cross_test.test | RUN | 0.207874 | 0.503599 | 0.614542 | 0.001238 | 0.001243 | 0.001176 |
| div_eq_vs_test.test | RUN | 0.196145 | 0.459447 | 0.605263 | 0.001176 | 0.001369 | 0.001280 |
| div_vs_test.test | RUN | 0.205244 | 0.571307 | 0.646917 | 0.001242 | 0.001360 | 0.001166 |
| dot_vv_test.test | RUN | 0.193470 | 0.505804 | 0.589953 | 0.001258 | 0.001280 | 0.001205 |
| eq_vv_test.test | RUN | 0.227282 | 0.574198 | 0.671301 | 0.001077 | 0.001326 | 0.001150 |
| mag_v_test.test | RUN | 0.193868 | 0.468250 | 0.561835 | 0.001245 | 0.001254 | 0.001129 |
| mag_sqr_v_test.test | RUN | 0.191237 | 0.469414 | 0.580284 | 0.001108 | 0.001244 | 0.001264 |
| minus_v_test.test | RUN | 0.200072 | 0.544867 | 0.636745 | 0.001199 | 0.001388 | 0.001032 |
| minus_eq_vv_test.test | RUN | 0.204368 | 0.533189 | 0.621009 | 0.001059 | 0.001339 | 0.001008 |
| minus_vv_test.test | RUN | 0.211911 | 0.578008 | 0.631199 | 0.001257 | 0.001254 | 0.001201 |
| mul_eq_vs_test.test | RUN | 0.195279 | 0.466200 | 0.589865 | 0.001195 | 0.001240 | 0.001275 |
| mul_vs_test.test | RUN | 0.202687 | 0.572608 | 0.662253 | 0.001173 | 0.001348 | 0.001346 |
| mul_sv_test.test | RUN | 0.213470 | 0.576150 | 0.655452 | 0.001055 | 0.001199 | 0.001177 |
| mul_vm_test.test | RUN | 0.287235 | 1.018321 | 0.965942 | 0.000933 | 0.001284 | 0.001124 |
| normalize_v_test.test | RUN | 0.211288 | 0.703605 | 0.673772 | 0.001123 | 0.001384 | 0.001179 |
| plus_eq_vv_test.test | RUN | 0.197398 | 0.528131 | 0.621144 | 0.001290 | 0.001356 | 0.001313 |
| plus_vv_test.test | RUN | 0.207235 | 0.578169 | 0.652029 | 0.001042 | 0.001169 | 0.001001 |
| scalar_cast_v_test.test | RUN | 0.190058 | 0.425315 | 0.547016 | 0.001167 | 0.001226 | 0.001264 |
| vec_index_test.test | RUN | 0.166486 | 0.438416 | 0.510500 | 0.001027 | 0.001202 | 0.001008 |
| vec_register_test.test | RUN | 0.109362 | 0.391637 | 0.370373 | 0.001533 | 0.001284 | 0.001227 |
| cmp_mm_test.test | RUN | 0.342426 | 1.275181 | 1.343323 | 0.001200 | 0.001303 | 0.001077 |
| determinant_test.test | RUN | 0.237287 | 0.646081 | 0.710148 | 0.001236 | 0.001293 | 0.001155 |
| div_eq_ms_test.test | RUN | 0.237020 | 0.597051 | 0.815182 | 0.001203 | 0.001305 | 0.001120 |
| div_ms_test.test | RUN | 0.280535 | 0.949224 | 0.975083 | 0.001224 | 0.001267 | 0.001164 |
| eq_mm_test.test | RUN | 0.331046 | 1.177447 | 1.283082 | 0.001316 | 0.001208 | 0.001248 |
| minus_m_test.test | RUN | 0.273247 | 0.934227 | 0.963802 | 0.001124 | 0.001365 | 0.001181 |
| minus_eq_mm_test.test | RUN | 0.257697 | 0.873164 | 0.888458 | 0.001226 | 0.001184 | 0.001274 |
| minus_mm_test.test | RUN | 0.299030 | 1.097002 | 1.038683 | 0.001070 | 0.001318 | 0.001170 |
| mul_eq_mm_test.test | RUN | 0.239645 | 0.812768 | 0.792555 | 0.001231 | 0.001190 | 0.001181 |
| mul_eq_ms_test.test | RUN | 0.237746 | 0.585898 | 0.817006 | 0.001182 | 0.001351 | 0.001145 |
| mul_mm_test.test | RUN | 0.339096 | 1.812823 | 1.319851 | 0.001243 | 0.001226 | 0.001293 |
| mul_ms_test.test | RUN | 0.283314 | 0.958384 | 1.017995 | 0.001164 | 0.001315 | 0.001282 |
| mul_sm_test.test | RUN | 0.288057 | 0.957024 | 1.017641 | 0.001330 | 0.001202 | 0.001229 |
| mul_mv_test.test | RUN | 0.288658 | 1.031391 | 1.034624 | 0.001167 | 0.001288 | 0.001163 |
| inverse_m_test.test | RUN | 0.405836 | 1.882741 | 1.441154 | 0.001231 | 0.001250 | 0.001162 |
| plus_eq_mm_test.test | RUN | 0.264452 | 0.876468 | 0.892211 | 0.001251 | 0.001174 | 0.001173 |
| plus_mm_test.test | RUN | 0.297025 | 1.103565 | 1.051854 | 0.001131 | 0.001202 | 0.001125 |
| scalar_cast_m_test.test | RUN | 0.220995 | 0.480186 | 0.649121 | 0.001159 | 0.001186 | 0.001286 |
| mat_index_test.test | RUN | 0.180746 | 0.468601 | 0.571421 | 0.001078 | 0.001196 | 0.001162 |
| cmp_qq_test.test | RUN | 0.184328 | 0.435663 | 0.535846 | 0.001114 | 0.001316 | 0.001139 |
| conjugate_test.test | RUN | 0.191490 | 0.452529 | 0.560970 | 0.001020 | 0.001156 | 0.001087 |
| normalize_q_test.test | RUN | 0.194878 | 0.503469 | 0.588357 | 0.001134 | 0.001266 | 0.001178 |
| div_eq_qs_test.test | RUN | 0.194013 | 0.420169 | 0.553272 | 0.001050 | 0.001154 | 0.001350 |
| div_qs_test.test | RUN | 0.194673 | 0.458100 | 0.563155 | 0.001172 | 0.001210 | 0.001287 |
| dot_qq_test.test | RUN | 0.193099 | 0.439195 | 0.561438 | 0.001223 | 0.001306 | 0.001251 |
| eq_qq_test.test | RUN | 0.197109 | 0.467812 | 0.568671 | 0.001166 | 0.001221 | 0.001185 |
| inverse_q_test.test | RUN | 0.238832 | 0.600537 | 0.717511 | 0.001324 | 0.001220 | 0.001164 |
| mag_q_test.test | RUN | 0.194166 | 0.451145 | 0.556002 | 0.001073 | 0.001262 | 0.001095 |
| mag_sqr_q_test.test | RUN | 0.188176 | 0.447142 | 0.545887 | 0.001260 | 0.001214 | 0.001109 |
| minus_q_test.test | RUN | 0.185158 | 0.456373 | 0.571583 | 0.001153 | 0.001141 | 0.001170 |
| minus_eq_qq_test.test | RUN | 0.194397 | 0.451503 | 0.555924 | 0.001156 | 0.001212 | 0.001244 |
| minus_qq_test.test | RUN | 0.194676 | 0.454663 | 0.573400 | 0.001196 | 0.001203 | 0.001035 |
| mul_eq_qs_test.test | RUN | 0.193088 | 0.423179 | 0.552295 | 0.001077 | 0.001223 | 0.000990 |
| mul_qs_test.test | RUN | 0.189767 | 0.451482 | 0.564270 | 0.000983 | 0.001287 | 0.001264 |
| mul_qv_test.test | RUN | 0.234086 | 0.615122 | 0.725104 | 0.001381 | 0.001256 | 0.001316 |
| mul_qq_test.test | RUN | 0.232891 | 0.619512 | 0.731069 | 0.001142 | 0.001316 | 0.001111 |
| mul_eq_qq_test.test | RUN | 0.226537 | 0.621808 | 0.727777 | 0.001128 | 0.001254 | 0.001198 |
| plus_eq_qq_test.test | RUN | 0.188083 | 0.447186 | 0.551987 | 0.001093 | 0.001204 | 0.001056 |
| plus_qq_test.test | RUN | 0.192632 | 0.455730 | 0.558061 | 0.001244 | 0.001306 | 0.001201 |
| scalar_cast_q_test.test | RUN | 0.188154 | 0.421092 | 0.562855 | 0.001181 | 0.000899 | 0.001155 |
| slerp_test.test | RUN | 0.216277 | 0.878431 | 0.662831 | 0.015019 | 0.012744 | 0.013029 |
| convert_to_test.test | RUN | 0.290494 | 0.801402 | 1.058337 | 0.001140 | 0.001344 | 0.001249 |
| rot_mat_test.test | RUN | 0.467371 | 3.709802 | 3.275278 | 0.029995 | 0.032643 | 0.033646 |
| rot_quat_test.test | RUN | 0.237934 | 0.739234 | 0.731597 | 0.001182 | 0.001268 | 0.001309 |
| rotx_mat_test.test | RUN | 0.270282 | 0.979305 | 0.954959 | 0.001410 | 0.001193 | 0.001135 |
| rotx_quat_test.test | RUN | 0.229368 | 0.617740 | 0.693532 | 0.001201 | 0.001180 | 0.001162 |
| roty_mat_test.test | RUN | 0.274037 | 0.971896 | 0.972169 | 0.001306 | 0.001343 | 0.001192 |
| roty_quat_test.test | RUN | 0.238633 | 0.614680 | 0.644689 | 0.001318 | 0.001231 | 0.001096 |
| rotz_mat_test.test | RUN | 0.283819 | 1.106330 | 1.026024 | 0.001216 | 0.001235 | 0.001346 |
| rotz_quat_test.test | RUN | 0.228888 | 0.628374 | 0.670198 | 0.001129 | 0.001352 | 0.001247 |
| zero_vec_test.test | RUN | 0.201639 | 0.531704 | 0.583303 | 0.001292 | 0.001176 | 0.001171 |
| zero_mat_test.test | RUN | 0.243943 | 0.902414 | 0.843547 | 0.001214 | 0.001432 | 0.001132 |
| zero_quat_test.test | RUN | 0.192404 | 0.440184 | 0.558950 | 0.001181 | 0.001161 | 0.001150 |
| identity_mat_test.test | RUN | 0.225467 | 0.665438 | 0.706314 | 0.001093 | 0.001280 | 0.001161 |
| identity_quat_test.test | RUN | 0.192884 | 0.431125 | 0.552429 | 0.001125 | 0.001282 | 0.001126 |
| col_test.test | RUN | 0.379127 | 1.403606 | 1.610877 | 0.001114 | 0.001151 | 0.001247 |
| col_mat_test.test | RUN | 0.239203 | 0.619062 | 0.748133 | 0.001288 | 0.001213 | 0.001298 |
| neg_col_test.test | RUN | 0.279821 | 0.862730 | 0.962425 | 0.001236 | 0.001198 | 0.001137 |
| neg_row_test.test | RUN | 0.291482 | 0.880872 | 0.948770 | 0.001174 | 0.001256 | 0.001254 |
| del_col_test.test | RUN | 0.296668 | 0.981867 | 1.003816 | 0.001551 | 0.001343 | 0.001213 |
| del_row_test.test | RUN | 0.294728 | 0.966536 | 0.999306 | 0.001171 | 0.001384 | 0.001181 |
| del_row_col_test.test | RUN | 0.407479 | 1.819528 | 1.828137 | 0.001233 | 0.001316 | 0.001242 |
| swap_cols_test.test | RUN | 0.565256 | 2.431484 | 2.256057 | 0.001334 | 0.001200 | 0.001170 |
| swap_rows_test.test | RUN | 0.618703 | 2.527444 | 2.226308 | 0.001224 | 0.001197 | 0.001236 |
| diag_test.test | RUN | 0.251453 | 0.644383 | 0.846565 | 0.001182 | 0.001176 | 0.001126 |
| diag_mat_test.test | RUN | 0.253795 | 0.632823 | 0.792492 | 0.001247 | 0.001260 | 0.001115 |
| row_test.test | RUN | 0.379761 | 1.368521 | 1.618373 | 0.001146 | 0.001418 | 0.001267 |
| row_mat_test.test | RUN | 0.241132 | 0.613676 | 0.727576 | 0.001243 | 0.001006 | 0.001203 |
| transpose_test.test | RUN | 0.292391 | 0.952732 | 1.014361 | 0.001100 | 0.001278 | 0.001183 |
| translation_test.test | RUN | 0.230646 | 0.594253 | 0.763312 | 0.001120 | 0.001339 | 0.001152 |
| translation_mat_test.test | RUN | 0.260252 | 0.596232 | 0.830374 | 0.001249 | 0.001207 | 0.001086 |
| swizzle_const_fail.test | COMPILE_FAIL | 0.085656 | 0.173893 | 0.219103 | — | — | — |
| swizzle2_test2.test | RUN | 0.103703 | 0.251844 | 0.305087 | 0.001380 | 0.001138 | 0.001281 |
| swizzle2_test3.test | RUN | 0.104749 | 0.255649 | 0.312669 | 0.001131 | 0.001182 | 0.001210 |
| swizzle2_test4.test | RUN | 0.105988 | 0.257709 | 0.299295 | 0.001107 | 0.001240 | 0.001091 |
| swizzle2_test.test | RUN | 0.329832 | 0.700636 | 0.972698 | 0.001114 | 0.001238 | 0.001367 |
| swizzle3_test2.test | RUN | 0.115792 | 0.277038 | 0.341578 | 0.001184 | 0.001236 | 0.001108 |
| swizzle3_test3.test | RUN | 0.114976 | 0.269400 | 0.341240 | 0.001122 | 0.001307 | 0.001113 |
| swizzle3_test4.test | RUN | 0.114153 | 0.265800 | 0.339168 | 0.001075 | 0.001266 | 0.001079 |
| swizzle3_test.test | RUN | 0.322673 | 0.712392 | 0.984077 | 0.001252 | 0.001295 | 0.001189 |
| swizzle4_test2.test | RUN | 0.192657 | 0.378979 | 0.553586 | 0.001142 | 0.001348 | 0.001243 |
| swizzle4_test3.test | RUN | 0.187923 | 0.391411 | 0.545916 | 0.001182 | 0.001029 | 0.000983 |
| swizzle4_test4.test | RUN | 0.190354 | 0.377290 | 0.538120 | 0.001037 | 0.001268 | 0.001142 |
| swizzle4_test.test | RUN | 0.336173 | 0.771592 | 1.004499 | 0.001123 | 0.001218 | 0.001245 |
| deduce_scalar_test.test | COMPILE | 0.016046 | 0.037041 | 0.054263 | — | — | — |
| deduce_scalar_mq_test.test | RUN | 0.122177 | 0.300509 | 0.357976 | 0.001271 | 0.001286 | 0.001137 |
| deduce_scalar_mv_test.test | RUN | 0.147821 | 0.337525 | 0.438014 | 0.001145 | 0.001108 | 0.001283 |
| deduce_scalar_fail.test | COMPILE_FAIL | 0.012993 | 0.024057 | 0.041005 | — | — | — |
| deduce_mat_test.test | COMPILE | 0.014293 | 0.032713 | 0.047559 | — | — | — |
| deduce_quat_test.test | COMPILE | 0.014516 | 0.031295 | 0.047333 | — | — | — |
| deduce_vec_test.test | COMPILE | 0.014938 | 0.032972 | 0.045213 | — | — | — |
| interop_test.test | RUN | 0.153672 | 0.367322 | 0.614560 | 0.000488 | 0.000403 | 0.001275 |
| transform_test.test | RUN | 0.307060 | 0.628624 | 0.809694 | 0.000903 | 0.000866 | 0.000822 |
| projection_test.test | RUN | 0.197500 | 0.500383 | 0.560775 | 0.000892 | 0.000932 | 0.000866 |
| scalar_traits_test.test | COMPILE | 0.015115 | 0.034540 | 0.049399 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 1.004×, 0.990× | 0.997× |
| clang | 1.045× | 1.050×, 1.040× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| access_m_test.test | 10 | 0.000813s | 0.000795s | 0.000825s | byte equality observed |
| access_q_test.test | 10 | 0.000799s | 0.000794s | 0.000792s | byte equality observed |
| access_v_test.test | 10 | 0.000800s | 0.000800s | 0.000785s | byte equality observed |
| assign_test.test | 10 | 0.000792s | 0.000798s | 0.000822s | byte equality observed |
| cmp_mm_test.test | 10 | 0.000813s | 0.000795s | 0.000806s | byte equality observed |
| cmp_qq_test.test | 10 | 0.000804s | 0.000782s | 0.000799s | byte equality observed |
| cmp_vv_test.test | 10 | 0.000809s | 0.000791s | 0.000797s | byte equality observed |
| col_mat_test.test | 10 | 0.000818s | 0.000817s | 0.000798s | byte equality observed |
| col_test.test | 10 | 0.000791s | 0.000805s | 0.000809s | byte equality observed |
| conjugate_test.test | 10 | 0.000783s | 0.000775s | 0.000813s | byte equality observed |
| convert_to_test.test | 10 | 0.000789s | 0.000809s | 0.000831s | byte equality observed |
| cross_test.test | 10 | 0.000794s | 0.000810s | 0.000788s | byte equality observed |
| deduce_scalar_mq_test.test | 10 | 0.000795s | 0.000811s | 0.000813s | byte equality observed |
| deduce_scalar_mv_test.test | 10 | 0.000814s | 0.000794s | 0.000815s | byte equality observed |
| del_col_test.test | 10 | 0.000815s | 0.000771s | 0.000827s | byte equality observed |
| del_row_col_test.test | 10 | 0.000827s | 0.000806s | 0.000819s | byte equality observed |
| del_row_test.test | 10 | 0.000783s | 0.000787s | 0.000780s | byte equality observed |
| determinant_test.test | 10 | 0.000792s | 0.000827s | 0.000806s | byte equality observed |
| diag_mat_test.test | 10 | 0.000778s | 0.000803s | 0.000801s | byte equality observed |
| diag_test.test | 10 | 0.000799s | 0.000780s | 0.000785s | byte equality observed |
| div_eq_ms_test.test | 10 | 0.000780s | 0.000798s | 0.000812s | byte equality observed |
| div_eq_qs_test.test | 10 | 0.000809s | 0.000784s | 0.000826s | byte equality observed |
| div_eq_vs_test.test | 10 | 0.000787s | 0.000825s | 0.000802s | byte equality observed |
| div_ms_test.test | 10 | 0.000801s | 0.000813s | 0.000808s | byte equality observed |
| div_qs_test.test | 10 | 0.000810s | 0.000795s | 0.000803s | byte equality observed |
| div_vs_test.test | 10 | 0.000807s | 0.000802s | 0.000829s | byte equality observed |
| dot_qq_test.test | 10 | 0.000806s | 0.000793s | 0.000812s | byte equality observed |
| dot_vv_test.test | 10 | 0.000824s | 0.000807s | 0.000801s | byte equality observed |
| eq_mm_test.test | 10 | 0.000804s | 0.000811s | 0.000831s | byte equality observed |
| eq_qq_test.test | 10 | 0.000781s | 0.000768s | 0.000821s | byte equality observed |
| eq_vv_test.test | 10 | 0.000800s | 0.000771s | 0.000801s | byte equality observed |
| identity_mat_test.test | 10 | 0.000788s | 0.000794s | 0.000810s | byte equality observed |
| identity_quat_test.test | 10 | 0.000785s | 0.000797s | 0.000798s | byte equality observed |
| interop_test.test | 10 | 0.000350s | 0.000358s | 0.000783s | byte equality observed |
| inverse_m_test.test | 10 | 0.000848s | 0.000821s | 0.000850s | byte equality observed |
| inverse_q_test.test | 10 | 0.000785s | 0.000799s | 0.000793s | byte equality observed |
| mag_q_test.test | 10 | 0.000789s | 0.000796s | 0.000786s | byte equality observed |
| mag_sqr_q_test.test | 10 | 0.000772s | 0.000788s | 0.000823s | byte equality observed |
| mag_sqr_v_test.test | 10 | 0.000805s | 0.000809s | 0.000772s | byte equality observed |
| mag_v_test.test | 10 | 0.000799s | 0.000782s | 0.000776s | byte equality observed |
| mat_index_test.test | 10 | 0.000811s | 0.000799s | 0.000779s | byte equality observed |
| mat_traits_array_test.test | 10 | 0.000821s | 0.000776s | 0.000793s | byte equality observed |
| mat_traits_std_array_test.test | 10 | 0.000778s | 0.000783s | 0.000783s | byte equality observed |
| math_test.test | 10 | 0.001181s | 0.001149s | 0.001057s | byte equality observed |
| minus_eq_mm_test.test | 10 | 0.000787s | 0.000829s | 0.000786s | byte equality observed |
| minus_eq_qq_test.test | 10 | 0.000780s | 0.000817s | 0.000807s | byte equality observed |
| minus_eq_vv_test.test | 10 | 0.000798s | 0.000786s | 0.000827s | byte equality observed |
| minus_m_test.test | 10 | 0.000787s | 0.000791s | 0.000822s | byte equality observed |
| minus_mm_test.test | 10 | 0.000785s | 0.000801s | 0.000813s | byte equality observed |
| minus_q_test.test | 10 | 0.000786s | 0.000814s | 0.000795s | byte equality observed |
| minus_qq_test.test | 10 | 0.000797s | 0.000804s | 0.000807s | byte equality observed |
| minus_v_test.test | 10 | 0.000781s | 0.000820s | 0.000788s | byte equality observed |
| minus_vv_test.test | 10 | 0.000786s | 0.000801s | 0.000793s | byte equality observed |
| mul_eq_mm_test.test | 10 | 0.000781s | 0.000785s | 0.000787s | byte equality observed |
| mul_eq_ms_test.test | 10 | 0.000798s | 0.000797s | 0.000788s | byte equality observed |
| mul_eq_qq_test.test | 10 | 0.000815s | 0.000791s | 0.000814s | byte equality observed |
| mul_eq_qs_test.test | 10 | 0.000784s | 0.000791s | 0.000815s | byte equality observed |
| mul_eq_vs_test.test | 10 | 0.000815s | 0.000830s | 0.000803s | byte equality observed |
| mul_mm_test.test | 10 | 0.000821s | 0.000844s | 0.000813s | byte equality observed |
| mul_ms_test.test | 10 | 0.000798s | 0.000805s | 0.000805s | byte equality observed |
| mul_mv_test.test | 10 | 0.000796s | 0.000804s | 0.000788s | byte equality observed |
| mul_qq_test.test | 10 | 0.000806s | 0.000825s | 0.000837s | byte equality observed |
| mul_qs_test.test | 10 | 0.000796s | 0.000809s | 0.000805s | byte equality observed |
| mul_qv_test.test | 10 | 0.000805s | 0.000819s | 0.000820s | byte equality observed |
| mul_sm_test.test | 10 | 0.000791s | 0.000811s | 0.000791s | byte equality observed |
| mul_sv_test.test | 10 | 0.000780s | 0.000794s | 0.000778s | byte equality observed |
| mul_vm_test.test | 10 | 0.000804s | 0.000810s | 0.000796s | byte equality observed |
| mul_vs_test.test | 10 | 0.000785s | 0.000764s | 0.000787s | byte equality observed |
| neg_col_test.test | 10 | 0.000795s | 0.000779s | 0.000793s | byte equality observed |
| neg_row_test.test | 10 | 0.000788s | 0.000782s | 0.000787s | byte equality observed |
| normalize_q_test.test | 10 | 0.000807s | 0.000790s | 0.000798s | byte equality observed |
| normalize_v_test.test | 10 | 0.000798s | 0.000794s | 0.000823s | byte equality observed |
| plus_eq_mm_test.test | 10 | 0.000797s | 0.000789s | 0.000796s | byte equality observed |
| plus_eq_qq_test.test | 10 | 0.000816s | 0.000779s | 0.000789s | byte equality observed |
| plus_eq_vv_test.test | 10 | 0.000799s | 0.000773s | 0.000817s | byte equality observed |
| plus_mm_test.test | 10 | 0.000802s | 0.000768s | 0.000799s | byte equality observed |
| plus_qq_test.test | 10 | 0.000804s | 0.000814s | 0.000777s | byte equality observed |
| plus_vv_test.test | 10 | 0.000803s | 0.000804s | 0.000791s | byte equality observed |
| projection_test.test | 10 | 0.000807s | 0.000797s | 0.000804s | byte equality observed |
| quat_traits_array_test.test | 10 | 0.000793s | 0.000760s | 0.000793s | byte equality observed |
| quat_traits_std_array_test.test | 10 | 0.000768s | 0.000756s | 0.000770s | byte equality observed |
| rot_mat_test.test | 1 | 0.019984s | 0.021732s | 0.026131s | byte equality observed |
| rot_quat_test.test | 10 | 0.000744s | 0.000750s | 0.000741s | byte equality observed |
| rotx_mat_test.test | 10 | 0.000769s | 0.000775s | 0.000736s | byte equality observed |
| rotx_quat_test.test | 10 | 0.000815s | 0.000804s | 0.000793s | byte equality observed |
| roty_mat_test.test | 10 | 0.000821s | 0.000799s | 0.000813s | byte equality observed |
| roty_quat_test.test | 10 | 0.000804s | 0.000816s | 0.000784s | byte equality observed |
| rotz_mat_test.test | 10 | 0.000817s | 0.000822s | 0.000828s | byte equality observed |
| rotz_quat_test.test | 10 | 0.000832s | 0.000793s | 0.000798s | byte equality observed |
| row_mat_test.test | 10 | 0.000800s | 0.000786s | 0.000776s | byte equality observed |
| row_test.test | 10 | 0.000789s | 0.000779s | 0.000806s | byte equality observed |
| scalar_cast_m_test.test | 10 | 0.000786s | 0.000785s | 0.000781s | byte equality observed |
| scalar_cast_q_test.test | 10 | 0.000800s | 0.000803s | 0.000828s | byte equality observed |
| scalar_cast_v_test.test | 10 | 0.000748s | 0.000750s | 0.000817s | byte equality observed |
| slerp_test.test | 2 | 0.011187s | 0.009298s | 0.009746s | byte equality observed |
| swap_cols_test.test | 10 | 0.000725s | 0.000736s | 0.000733s | byte equality observed |
| swap_rows_test.test | 10 | 0.000751s | 0.000765s | 0.000742s | byte equality observed |
| swizzle2_test.test | 10 | 0.000802s | 0.000813s | 0.000788s | byte equality observed |
| swizzle2_test2.test | 10 | 0.000795s | 0.000788s | 0.000798s | byte equality observed |
| swizzle2_test3.test | 10 | 0.000806s | 0.000798s | 0.000821s | byte equality observed |
| swizzle2_test4.test | 10 | 0.000801s | 0.000813s | 0.000818s | byte equality observed |
| swizzle3_test.test | 10 | 0.000807s | 0.000802s | 0.000803s | byte equality observed |
| swizzle3_test2.test | 10 | 0.000811s | 0.000795s | 0.000819s | byte equality observed |
| swizzle3_test3.test | 10 | 0.000811s | 0.000772s | 0.000822s | byte equality observed |
| swizzle3_test4.test | 10 | 0.000812s | 0.000798s | 0.000816s | byte equality observed |
| swizzle4_test.test | 10 | 0.000805s | 0.000803s | 0.000830s | byte equality observed |
| swizzle4_test2.test | 10 | 0.000805s | 0.000781s | 0.000814s | byte equality observed |
| swizzle4_test3.test | 10 | 0.000784s | 0.000813s | 0.000806s | byte equality observed |
| swizzle4_test4.test | 10 | 0.000807s | 0.000800s | 0.000794s | byte equality observed |
| to_string_test.test | 10 | 0.000845s | 0.000829s | 0.000859s | byte equality observed |
| transform_test.test | 10 | 0.000829s | 0.000787s | 0.000782s | byte equality observed |
| translation_mat_test.test | 10 | 0.000796s | 0.000774s | 0.000801s | byte equality observed |
| translation_test.test | 10 | 0.000809s | 0.000769s | 0.000784s | byte equality observed |
| transpose_test.test | 10 | 0.000804s | 0.000771s | 0.000800s | byte equality observed |
| vec_index_test.test | 10 | 0.000795s | 0.000784s | 0.000790s | byte equality observed |
| vec_register_test.test | 10 | 0.000816s | 0.000758s | 0.000786s | byte equality observed |
| vec_traits_array_test.test | 10 | 0.000802s | 0.000773s | 0.000786s | byte equality observed |
| vec_traits_gnuc_test.test | 10 | 0.000806s | 0.000784s | 0.000812s | byte equality observed |
| vec_traits_std_array_test.test | 10 | 0.000802s | 0.000801s | 0.000819s | byte equality observed |
| zero_mat_test.test | 10 | 0.000796s | 0.000840s | 0.000815s | byte equality observed |
| zero_quat_test.test | 10 | 0.000820s | 0.000812s | 0.000797s | byte equality observed |
| zero_vec_test.test | 10 | 0.000790s | 0.000768s | 0.000823s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
