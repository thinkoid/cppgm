# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.370697 | 2.036062 | 1.994933 | 0.001758 | 0.002280 | 0.002284 |
| function_test_no_rtti.test | RUN | 0.363919 | 2.015040 | 2.062443 | 0.001793 | 0.002068 | 0.002020 |
| function_n_test.test | RUN | 0.342871 | 1.640461 | 1.714109 | 0.001973 | 0.001937 | 0.002016 |
| allocator_test.test | RUN | 0.279208 | 0.927456 | 1.219490 | 0.001996 | 0.002085 | 0.002066 |
| stateless_test.test | RUN | 0.215529 | 0.512073 | 0.765458 | 0.002040 | 0.002062 | 0.002085 |
| lambda_test.test | RUN | 0.461979 | 1.286938 | 1.723206 | 0.002007 | 0.002110 | 0.002068 |
| function_test_fail1.test | COMPILE_FAIL | 0.160049 | 0.366918 | 0.528634 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.170855 | 0.377615 | 0.581753 | — | — | — |
| function_30.test | COMPILE | 0.181567 | 0.378070 | 0.580173 | — | — | — |
| function_30_repeat.test | COMPILE | 0.174671 | 0.395237 | 0.569916 | — | — | — |
| function_arith_cxx98.test | RUN | 0.225955 | 0.643550 | 0.859886 | 0.001841 | 0.001808 | 0.002088 |
| function_arith_portable.test | RUN | 0.213100 | 0.609401 | 0.840635 | 0.001972 | 0.001942 | 0.002196 |
| sum_avg_cxx98.test | RUN | 0.212513 | 0.558707 | 0.760019 | 0.001694 | 0.001709 | 0.001934 |
| sum_avg_portable.test | RUN | 0.212732 | 0.484676 | 0.768006 | 0.001798 | 0.002097 | 0.001952 |
| mem_fun_cxx98.test | RUN | 0.237975 | 0.736499 | 0.932280 | 0.001948 | 0.001734 | 0.002070 |
| mem_fun_portable.test | RUN | 0.233658 | 0.672578 | 0.906747 | 0.001513 | 0.002054 | 0.002129 |
| std_bind_cxx98.test | RUN | 0.220167 | 0.621027 | 0.843806 | 0.002037 | 0.001612 | 0.002114 |
| std_bind_portable.test | RUN | 0.224448 | 0.579160 | 0.739117 | 0.002043 | 0.002306 | 0.001987 |
| function_ref_cxx98.test | RUN | 0.214158 | 0.526325 | 0.718558 | 0.001921 | 0.001753 | 0.001985 |
| function_ref_portable.test | RUN | 0.209279 | 0.489321 | 0.778734 | 0.001982 | 0.002012 | 0.002052 |
| contains_test.test | RUN | 0.261947 | 1.002456 | 1.137942 | 0.001887 | 0.001862 | 0.001871 |
| contains2_test.test | RUN | 0.230575 | 0.720831 | 0.882140 | 0.002104 | 0.002114 | 0.001819 |
| nothrow_swap.test | RUN | 0.223617 | 0.671269 | 0.898117 | 0.002016 | 0.002020 | 0.001774 |
| rvalues_test.test | RUN | 0.248973 | 0.827209 | 0.954780 | 0.002156 | 0.001980 | 0.002164 |
| function_typeof_test.test | COMPILE | 0.174376 | 0.392208 | 0.590885 | — | — | — |
| result_arg_types_test.test | RUN | 0.240026 | 0.562624 | 0.953814 | 0.001982 | 0.002208 | 0.002154 |
| result_arg_n_types_test.test | RUN | 0.255683 | 0.622773 | 1.052638 | 0.001974 | 0.002275 | 0.002091 |
| test_bad_function_call_shared.test | RUN | 0.222751 | 0.530067 | 0.773593 | 0.002162 | 0.002512 | 0.002366 |
| test_bad_function_call_static.test | RUN | 0.221186 | 0.540143 | 0.802000 | 0.001792 | 0.002232 | 0.002180 |
| mixed_cxxstd_shared.test | RUN | 0.231480 | 0.615655 | 0.839402 | 0.001944 | 0.002098 | 0.002322 |
| mixed_cxxstd_static.test | RUN | 0.232399 | 0.634219 | 0.897281 | 0.001890 | 0.001984 | 0.001849 |
| mixed_cxxstd_shared_0x.test | RUN | 0.231510 | 0.623111 | 0.891830 | 0.002224 | 0.002889 | 0.002620 |
| mixed_cxxstd_static_0x.test | RUN | 0.240593 | 0.638633 | 0.836915 | 0.002164 | 0.001997 | 0.002144 |
| mixed_cxxstd_shared_14.test | RUN | 0.236681 | 0.643605 | 0.915392 | 0.002190 | 0.002131 | 0.002326 |
| mixed_cxxstd_static_14.test | RUN | 0.229490 | 0.633078 | 0.860478 | 0.002097 | 0.002036 | 0.002138 |
| return_function_shared.test | RUN | 0.220596 | 0.605553 | 0.829396 | 0.002106 | 0.002424 | 0.002434 |
| return_function_static.test | RUN | 0.228900 | 0.618618 | 0.882713 | 0.001834 | 0.001886 | 0.002076 |
| return_function_shared_0x.test | RUN | 0.224234 | 0.637654 | 0.816107 | 0.001978 | 0.002400 | 0.002341 |
| return_function_static_0x.test | RUN | 0.221611 | 0.631357 | 0.807139 | 0.001943 | 0.002195 | 0.002212 |
| return_function_shared_14.test | RUN | 0.231541 | 0.633016 | 0.873802 | 0.002221 | 0.002352 | 0.002276 |
| return_function_static_14.test | RUN | 0.232494 | 0.635577 | 0.830951 | 0.001620 | 0.002218 | 0.002194 |
| quick.test | RUN | 0.243230 | 0.638374 | 0.832622 | 0.002108 | 0.002011 | 0.002138 |
| issue_42.test | COMPILE | 0.190347 | 0.418090 | 0.614769 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.296738 | 0.874562 | 1.241383 | 0.001792 | 0.001860 | 0.002222 |
| contains_test_no_rtti.test | RUN | 0.264331 | 0.965159 | 1.176023 | 0.002030 | 0.001528 | 0.002010 |
| contains2_test_no_rtti.test | RUN | 0.241090 | 0.722036 | 0.919965 | 0.001846 | 0.002091 | 0.002036 |
| contains3_test.test | RUN | 0.227212 | 0.568816 | 0.843877 | 0.001800 | 0.001940 | 0.001797 |
| contains3_test_no_rtti.test | RUN | 0.151793 | 0.445510 | 0.594598 | 0.001618 | 0.001572 | 0.001598 |
| issue_53.test | COMPILE | 0.131194 | 0.321240 | 0.412337 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.988×, 0.979× | 1.005× |
| clang | 1.002× | 1.007×, 0.997× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001185s | 0.001161s | 0.001145s | byte equality observed |
| contains2_test.test | 10 | 0.001161s | 0.001158s | 0.001145s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001184s | 0.001154s | 0.001129s | byte equality observed |
| contains3_test.test | 10 | 0.001156s | 0.001172s | 0.001190s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001202s | 0.001182s | 0.001222s | byte equality observed |
| contains_test.test | 10 | 0.001244s | 0.001217s | 0.001250s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001247s | 0.001287s | 0.001203s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001238s | 0.001221s | 0.001252s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001256s | 0.001261s | 0.001226s | byte equality observed |
| function_arith_portable.test | 10 | 0.001253s | 0.001269s | 0.001250s | byte equality observed |
| function_n_test.test | 10 | 0.001254s | 0.001249s | 0.001270s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001205s | 0.001254s | 0.001192s | byte equality observed |
| function_ref_portable.test | 10 | 0.001184s | 0.001199s | 0.001175s | byte equality observed |
| function_test.test | 10 | 0.001283s | 0.001323s | 0.001276s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001317s | 0.001270s | 0.001272s | byte equality observed |
| lambda_test.test | 10 | 0.001270s | 0.001287s | 0.001209s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001286s | 0.001268s | 0.001258s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001295s | 0.001220s | 0.001232s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001351s | 0.001373s | 0.001342s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001377s | 0.001339s | 0.001367s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001337s | 0.001374s | 0.001383s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001237s | 0.001276s | 0.001227s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001240s | 0.001259s | 0.001233s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001242s | 0.001259s | 0.001189s | byte equality observed |
| nothrow_swap.test | 10 | 0.001236s | 0.001242s | 0.001219s | byte equality observed |
| quick.test | 10 | 0.001241s | 0.001300s | 0.001258s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001248s | 0.001246s | 0.001208s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001243s | 0.001213s | 0.001203s | byte equality observed |
| return_function_shared.test | 10 | 0.001358s | 0.001323s | 0.001321s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001351s | 0.001289s | 0.001391s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001365s | 0.001346s | 0.001309s | byte equality observed |
| return_function_static.test | 10 | 0.001233s | 0.001218s | 0.001195s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001230s | 0.001296s | 0.001239s | byte equality observed |
| return_function_static_14.test | 10 | 0.001264s | 0.001222s | 0.001209s | byte equality observed |
| rvalues_test.test | 10 | 0.001262s | 0.001233s | 0.001250s | byte equality observed |
| stateless_test.test | 10 | 0.001231s | 0.001236s | 0.001208s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001216s | 0.001207s | 0.001219s | byte equality observed |
| std_bind_portable.test | 10 | 0.001217s | 0.001212s | 0.001221s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001208s | 0.001211s | 0.001186s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001250s | 0.001211s | 0.001165s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001353s | 0.001360s | 0.001348s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001324s | 0.001247s | 0.001202s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
