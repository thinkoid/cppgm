# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.367503 | 1.950481 | 1.981591 | 0.001812 | 0.002004 | 0.001882 |
| function_test_no_rtti.test | RUN | 0.360871 | 1.987728 | 1.970576 | 0.001717 | 0.002028 | 0.001952 |
| function_n_test.test | RUN | 0.343179 | 1.650167 | 1.653008 | 0.001936 | 0.001941 | 0.002134 |
| allocator_test.test | RUN | 0.278840 | 0.917280 | 1.160696 | 0.001910 | 0.002033 | 0.002031 |
| stateless_test.test | RUN | 0.214567 | 0.515652 | 0.731358 | 0.001962 | 0.002008 | 0.002096 |
| lambda_test.test | RUN | 0.457720 | 1.250108 | 1.671023 | 0.002088 | 0.001791 | 0.001721 |
| function_test_fail1.test | COMPILE_FAIL | 0.160284 | 0.346841 | 0.551656 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.163027 | 0.357076 | 0.520364 | — | — | — |
| function_30.test | COMPILE | 0.172714 | 0.382062 | 0.574528 | — | — | — |
| function_30_repeat.test | COMPILE | 0.173003 | 0.374763 | 0.573031 | — | — | — |
| function_arith_cxx98.test | RUN | 0.230531 | 0.620338 | 0.828724 | 0.001923 | 0.001886 | 0.002046 |
| function_arith_portable.test | RUN | 0.223461 | 0.578537 | 0.779031 | 0.001972 | 0.001759 | 0.002104 |
| sum_avg_cxx98.test | RUN | 0.207404 | 0.523087 | 0.773271 | 0.001494 | 0.001914 | 0.002026 |
| sum_avg_portable.test | RUN | 0.212316 | 0.463566 | 0.762406 | 0.001978 | 0.002048 | 0.001966 |
| mem_fun_cxx98.test | RUN | 0.243757 | 0.710341 | 0.846122 | 0.001860 | 0.001940 | 0.002082 |
| mem_fun_portable.test | RUN | 0.242642 | 0.653024 | 0.907440 | 0.001751 | 0.001672 | 0.002080 |
| std_bind_cxx98.test | RUN | 0.219533 | 0.606199 | 0.855888 | 0.001432 | 0.002004 | 0.002069 |
| std_bind_portable.test | RUN | 0.221897 | 0.551010 | 0.781662 | 0.002014 | 0.002038 | 0.001964 |
| function_ref_cxx98.test | RUN | 0.214010 | 0.507071 | 0.672213 | 0.001884 | 0.001668 | 0.001890 |
| function_ref_portable.test | RUN | 0.210160 | 0.466246 | 0.758050 | 0.002002 | 0.001816 | 0.002116 |
| contains_test.test | RUN | 0.266879 | 0.959295 | 1.154546 | 0.001629 | 0.002052 | 0.001637 |
| contains2_test.test | RUN | 0.238510 | 0.688071 | 0.894797 | 0.001962 | 0.002044 | 0.001474 |
| nothrow_swap.test | RUN | 0.230542 | 0.649257 | 0.851137 | 0.001774 | 0.001754 | 0.001664 |
| rvalues_test.test | RUN | 0.261226 | 0.779253 | 1.002292 | 0.002032 | 0.001861 | 0.001926 |
| function_typeof_test.test | COMPILE | 0.178738 | 0.365404 | 0.557144 | — | — | — |
| result_arg_types_test.test | RUN | 0.242066 | 0.562701 | 0.889641 | 0.001781 | 0.002096 | 0.001947 |
| result_arg_n_types_test.test | RUN | 0.271489 | 0.596835 | 1.068796 | 0.001884 | 0.001930 | 0.002088 |
| test_bad_function_call_shared.test | RUN | 0.223669 | 0.519388 | 0.776951 | 0.001938 | 0.002067 | 0.002214 |
| test_bad_function_call_static.test | RUN | 0.211934 | 0.505533 | 0.757986 | 0.001908 | 0.001880 | 0.002228 |
| mixed_cxxstd_shared.test | RUN | 0.222230 | 0.618174 | 0.894722 | 0.002021 | 0.002254 | 0.002174 |
| mixed_cxxstd_static.test | RUN | 0.223977 | 0.611485 | 0.870164 | 0.001838 | 0.001780 | 0.001425 |
| mixed_cxxstd_shared_0x.test | RUN | 0.222650 | 0.604278 | 0.874063 | 0.002213 | 0.002346 | 0.002402 |
| mixed_cxxstd_static_0x.test | RUN | 0.228101 | 0.601639 | 0.826782 | 0.001737 | 0.002134 | 0.002104 |
| mixed_cxxstd_shared_14.test | RUN | 0.226604 | 0.600223 | 0.868421 | 0.002189 | 0.002098 | 0.002150 |
| mixed_cxxstd_static_14.test | RUN | 0.229820 | 0.613035 | 0.832737 | 0.001994 | 0.002135 | 0.001854 |
| return_function_shared.test | RUN | 0.224600 | 0.608154 | 0.802346 | 0.001940 | 0.001930 | 0.002341 |
| return_function_static.test | RUN | 0.221350 | 0.615560 | 0.801393 | 0.001704 | 0.001869 | 0.002027 |
| return_function_shared_0x.test | RUN | 0.226063 | 0.606022 | 0.865209 | 0.002132 | 0.002348 | 0.002326 |
| return_function_static_0x.test | RUN | 0.212403 | 0.588528 | 0.814169 | 0.001966 | 0.001910 | 0.002172 |
| return_function_shared_14.test | RUN | 0.232382 | 0.586226 | 0.837330 | 0.002044 | 0.002234 | 0.002284 |
| return_function_static_14.test | RUN | 0.226774 | 0.604168 | 0.829682 | 0.001620 | 0.002138 | 0.002049 |
| quick.test | RUN | 0.226032 | 0.601199 | 0.820088 | 0.001820 | 0.002095 | 0.002047 |
| issue_42.test | COMPILE | 0.175425 | 0.400694 | 0.615793 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.295640 | 0.838784 | 1.254021 | 0.001918 | 0.001628 | 0.001808 |
| contains_test_no_rtti.test | RUN | 0.261533 | 0.935782 | 1.130891 | 0.001594 | 0.001997 | 0.001854 |
| contains2_test_no_rtti.test | RUN | 0.241512 | 0.689047 | 0.911000 | 0.001898 | 0.001604 | 0.001900 |
| contains3_test.test | RUN | 0.221685 | 0.561665 | 0.792761 | 0.001405 | 0.001898 | 0.001824 |
| contains3_test_no_rtti.test | RUN | 0.137121 | 0.416684 | 0.537169 | 0.001563 | 0.001481 | 0.001333 |
| issue_53.test | COMPILE | 0.121961 | 0.287936 | 0.395665 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 1.001×, 0.990× | 0.985× |
| clang | 0.997× | 0.997×, 0.998× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001156s | 0.001116s | 0.001140s | byte equality observed |
| contains2_test.test | 10 | 0.001158s | 0.001123s | 0.001128s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001150s | 0.001119s | 0.001130s | byte equality observed |
| contains3_test.test | 10 | 0.001141s | 0.001116s | 0.001126s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001155s | 0.001112s | 0.001184s | byte equality observed |
| contains_test.test | 10 | 0.001226s | 0.001120s | 0.001245s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001279s | 0.001155s | 0.001199s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001236s | 0.001207s | 0.001196s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001257s | 0.001217s | 0.001244s | byte equality observed |
| function_arith_portable.test | 10 | 0.001279s | 0.001267s | 0.001256s | byte equality observed |
| function_n_test.test | 10 | 0.001283s | 0.001234s | 0.001253s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001220s | 0.001289s | 0.001221s | byte equality observed |
| function_ref_portable.test | 10 | 0.001216s | 0.001208s | 0.001186s | byte equality observed |
| function_test.test | 10 | 0.001292s | 0.001272s | 0.001283s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001294s | 0.001290s | 0.001297s | byte equality observed |
| lambda_test.test | 10 | 0.001296s | 0.001223s | 0.001303s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001206s | 0.001266s | 0.001239s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001223s | 0.001206s | 0.001236s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001332s | 0.001370s | 0.001323s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001374s | 0.001342s | 0.001431s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001330s | 0.001377s | 0.001343s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001252s | 0.001182s | 0.001283s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001233s | 0.001176s | 0.001221s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001241s | 0.001200s | 0.001259s | byte equality observed |
| nothrow_swap.test | 10 | 0.001280s | 0.001280s | 0.001229s | byte equality observed |
| quick.test | 9 | 0.001276s | 0.001222s | 0.001224s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001239s | 0.001277s | 0.001276s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001239s | 0.001212s | 0.001220s | byte equality observed |
| return_function_shared.test | 10 | 0.001305s | 0.001321s | 0.001357s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001342s | 0.001377s | 0.001360s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001324s | 0.001371s | 0.001333s | byte equality observed |
| return_function_static.test | 10 | 0.001230s | 0.001231s | 0.001252s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001252s | 0.001221s | 0.001248s | byte equality observed |
| return_function_static_14.test | 10 | 0.001230s | 0.001232s | 0.001299s | byte equality observed |
| rvalues_test.test | 10 | 0.001222s | 0.001244s | 0.001205s | byte equality observed |
| stateless_test.test | 10 | 0.001207s | 0.001235s | 0.001198s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001214s | 0.001276s | 0.001239s | byte equality observed |
| std_bind_portable.test | 10 | 0.001209s | 0.001200s | 0.001184s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001232s | 0.001174s | 0.001195s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001209s | 0.001245s | 0.001212s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001348s | 0.001368s | 0.001371s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001297s | 0.001282s | 0.001235s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
