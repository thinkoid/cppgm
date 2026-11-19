# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.333520 | 0.791504 | 1.075547 | 0.000472 | 0.000510 | 0.001244 |
| test_uuid.test | RUN | 0.207628 | 0.655962 | 0.768854 | 0.001151 | 0.001157 | 0.001197 |
| test_uuid_no_simd.test | RUN | 0.211276 | 0.632322 | 0.692371 | 0.001309 | 0.001210 | 0.001328 |
| test_uuid_2.test | RUN | 0.146328 | 0.482222 | 0.520031 | 0.001236 | 0.001203 | 0.001166 |
| test_uuid_3.test | RUN | 0.123571 | 0.327810 | 0.414270 | 0.001230 | 0.001359 | 0.001193 |
| test_alignment.test | RUN | 0.110815 | 0.291565 | 0.356187 | 0.001443 | 0.001324 | 0.001122 |
| test_alignment_2.test | RUN | 0.111308 | 0.291051 | 0.376538 | 0.001133 | 0.001013 | 0.001242 |
| test_attribute_packed.test | RUN | 0.115107 | 0.298635 | 0.367859 | 0.001194 | 0.001242 | 0.001135 |
| test_pragma_pack.test | RUN | 0.111985 | 0.299442 | 0.368597 | 0.001219 | 0.001360 | 0.001179 |
| test_data.test | RUN | 0.136151 | 0.550498 | 0.532894 | 0.001125 | 0.001230 | 0.001194 |
| test_comparison.test | RUN | 0.197865 | 0.639928 | 0.732127 | 0.001236 | 0.001365 | 0.001226 |
| test_comparison_no_simd.test | RUN | 0.191220 | 0.724431 | 0.635463 | 0.001315 | 0.001241 | 0.001293 |
| test_io.test | RUN | 0.258232 | 1.237850 | 1.097717 | 0.001250 | 0.001560 | 0.001353 |
| test_io_no_simd.test | RUN | 0.252058 | 1.229142 | 1.032499 | 0.001238 | 0.001527 | 0.001414 |
| test_io_2.test | RUN | 0.204250 | 1.287900 | 0.766691 | 0.001374 | 0.001488 | 0.001375 |
| test_io_2_no_simd.test | RUN | 0.179340 | 1.213322 | 0.702010 | 0.001371 | 0.001216 | 0.001402 |
| test_to_chars.test | RUN | 0.180709 | 0.810696 | 0.716283 | 0.001248 | 0.001319 | 0.001288 |
| test_to_chars_no_simd.test | RUN | 0.177689 | 0.809187 | 0.689676 | 0.001328 | 0.001284 | 0.001217 |
| test_to_chars_2.test | RUN | 0.224402 | 1.485076 | 0.857540 | 0.001124 | 0.001240 | 0.001295 |
| test_to_chars_2_no_simd.test | RUN | 0.235390 | 1.573703 | 0.776764 | 0.001122 | 0.001416 | 0.001161 |
| test_to_chars_3.test | RUN | 0.150847 | 0.512891 | 0.516320 | 0.001064 | 0.001253 | 0.001160 |
| test_from_chars.test | RUN | 0.171524 | 0.746056 | 0.585491 | 0.001135 | 0.001047 | 0.001237 |
| test_from_chars_no_simd.test | RUN | 0.147715 | 0.590988 | 0.496358 | 0.001304 | 0.001188 | 0.001332 |
| test_from_chars_2.test | RUN | 0.166400 | 0.691269 | 0.569993 | 0.001110 | 0.001199 | 0.001178 |
| test_from_chars_2_no_simd.test | RUN | 0.141956 | 0.523893 | 0.460731 | 0.001041 | 0.001212 | 0.001140 |
| test_uuid_from_string.test | RUN | 0.192379 | 0.771692 | 0.703795 | 0.001405 | 0.001298 | 0.000854 |
| test_uuid_from_string_2.test | RUN | 0.174672 | 0.704143 | 0.587612 | 0.001499 | 0.001452 | 0.000954 |
| test_uuid_from_string_3.test | RUN | 0.175265 | 0.696311 | 0.610482 | 0.001092 | 0.001614 | 0.001279 |
| test_uuid_clock.test | RUN | 0.102311 | 0.279303 | 0.357715 | 0.001111 | 0.001188 | 0.001246 |
| test_nil_generator.test | RUN | 0.121343 | 0.334165 | 0.413414 | 0.001243 | 0.001251 | 0.001321 |
| test_string_generator.test | RUN | 0.162187 | 0.563283 | 0.588312 | 0.001240 | 0.001470 | 0.001298 |
| test_string_generator_2.test | RUN | 0.204334 | 0.786271 | 0.647525 | 0.001274 | 0.001349 | 0.001216 |
| test_random_generator.test | RUN | 0.262615 | 1.512204 | 0.986121 | 0.004133 | 0.004374 | 0.004173 |
| test_random_generator_2.test | RUN | 0.195046 | 0.581796 | 0.666832 | 0.001198 | 0.001312 | 0.001140 |
| test_name_generator.test | RUN | 0.173783 | 1.979424 | 0.718006 | 0.001257 | 0.001199 | 0.001130 |
| test_namespaces.test | RUN | 0.138108 | 0.415013 | 0.468612 | 0.001081 | 0.001175 | 0.001250 |
| test_name_generator_md5.test | RUN | 0.180150 | 0.938258 | 0.702171 | 0.001245 | 0.001378 | 0.001223 |
| test_name_generator_sha1.test | RUN | 0.173173 | 2.899302 | 0.693727 | 0.001221 | 0.001271 | 0.001175 |
| test_time_generator.test | RUN | 0.180009 | 0.576952 | 0.642542 | 0.001382 | 0.001390 | 0.001126 |
| test_time_generator_v1.test | RUN | 0.201344 | 0.639075 | 0.722369 | 0.001557 | 0.001722 | 0.001752 |
| test_time_generator_v1_2.test | RUN | 0.200246 | 0.602687 | 0.692977 | 0.001350 | 0.001622 | 0.001514 |
| test_time_generator_v1_3.test | RUN | 0.225616 | 0.633266 | 0.764322 | 0.004889 | 0.002978 | 0.003924 |
| test_time_generator_v6.test | RUN | 0.203015 | 0.643415 | 0.733718 | 0.001638 | 0.001885 | 0.001757 |
| test_time_generator_v6_2.test | RUN | 0.197472 | 0.605360 | 0.704151 | 0.001380 | 0.001463 | 0.001456 |
| test_time_generator_v6_3.test | RUN | 0.222415 | 0.641104 | 0.767371 | 0.003944 | 0.002618 | 0.003686 |
| test_time_generator_v7.test | RUN | 0.193013 | 0.639625 | 0.711924 | 0.001387 | 0.001537 | 0.001412 |
| test_time_generator_v7_2.test | RUN | 0.181135 | 0.552972 | 0.654817 | 0.001214 | 0.001343 | 0.000951 |
| test_time_generator_v7_3.test | RUN | 0.183072 | 0.723439 | 0.651241 | 0.002642 | 0.002731 | 0.002559 |
| test_serialization.test | RUN | 0.334904 | 1.085373 | 1.218615 | 0.001449 | 0.001150 | 0.001316 |
| test_tagging.test | RUN | 0.184157 | 0.675499 | 0.655063 | 0.001231 | 0.001183 | 0.001198 |
| test_uuid_class.test | RUN | 0.193636 | 0.602314 | 0.696330 | 0.001257 | 0.001192 | 0.001140 |
| test_uuid_in_map.test | RUN | 0.209337 | 0.693878 | 0.758253 | 0.001142 | 0.001056 | 0.001170 |
| test_hash.test | RUN | 0.212548 | 0.624722 | 0.701109 | 0.001290 | 0.001257 | 0.001273 |
| test_hash_value.test | RUN | 0.149088 | 0.429296 | 0.513713 | 0.004344 | 0.004339 | 0.004076 |
| test_std_unordered.test | RUN | 0.199716 | 0.697703 | 0.709022 | 0.001380 | 0.001255 | 0.001384 |
| test_boost_unordered.test | RUN | 0.288682 | 0.902418 | 0.924387 | 0.001287 | 0.001437 | 0.001211 |
| test_detail_md5.test | RUN | 0.128283 | 0.434722 | 0.502657 | 0.001295 | 0.001285 | 0.001215 |
| test_detail_sha1.test | RUN | 0.125197 | 0.566205 | 0.474521 | 0.007407 | 0.008033 | 0.006171 |
| test_detail_endian.test | RUN | 0.093256 | 0.319187 | 0.341024 | 0.001185 | 0.001147 | 0.001271 |
| test_detail_chacha20.test | RUN | 0.108312 | 0.392825 | 0.350812 | 0.001237 | 0.001171 | 0.001108 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.093748 | 0.219159 | 0.285496 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.092812 | 0.218841 | 0.283961 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.159770 | 0.435726 | 0.501439 | 0.001051 | 0.001297 | 0.001182 |
| test_bench_random.test | RUN | 0.183250 | 0.576492 | 0.670206 | 0.016403 | 0.016362 | 0.016431 |
| test_entropy_error.test | RUN | 0.089541 | 0.260918 | 0.307488 | 0.001260 | 0.001185 | 0.001239 |
| test_detail_random_provider.test | RUN | 0.180245 | 0.445012 | 0.573725 | 0.001182 | 0.001218 | 0.001175 |
| test_constants.test | RUN | 0.140237 | 0.421191 | 0.471717 | 0.001134 | 0.001417 | 0.001136 |
| test_uuid_cx.test | COMPILE | 0.076852 | 0.190591 | 0.235813 | — | — | — |
| test_uuid_cx2.test | RUN | 0.146849 | 0.476466 | 0.511099 | 0.001106 | 0.001189 | 0.001216 |
| test_uuid_cx3.test | RUN | 0.129289 | 0.371925 | 0.453162 | 0.001245 | 0.001105 | 0.001023 |
| test_uuid_cx3_no_simd.test | RUN | 0.122239 | 0.347999 | 0.417069 | 0.001090 | 0.001054 | 0.001277 |
| test_hash_value_cx.test | RUN | 0.122931 | 0.331991 | 0.417139 | 0.001158 | 0.001291 | 0.001101 |
| test_string_generator_cx.test | RUN | 0.143560 | 0.422631 | 0.477283 | 0.001248 | 0.001184 | 0.001209 |
| test_string_generator_cx2.test | RUN | 0.178860 | 0.515230 | 0.549365 | 0.001189 | 0.001203 | 0.001095 |
| test_constants_cx.test | RUN | 0.113887 | 0.282728 | 0.375774 | 0.001093 | 0.001298 | 0.001210 |
| test_from_chars_cx.test | RUN | 0.157157 | 0.551333 | 0.509397 | 0.001091 | 0.001283 | 0.001105 |
| test_from_chars_cx2.test | RUN | 0.156527 | 0.690159 | 0.562496 | 0.001247 | 0.001171 | 0.001278 |
| test_to_chars_cx.test | RUN | 0.158219 | 0.646012 | 0.610644 | 0.000881 | 0.001265 | 0.001170 |
| test_uuid_from_string_cx.test | RUN | 0.169415 | 0.640002 | 0.553348 | 0.000884 | 0.000886 | 0.000857 |
| quick.test | RUN | 0.174707 | 0.487634 | 0.586833 | 0.000837 | 0.000936 | 0.000824 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 0.998×, 1.006× | 1.003× |
| clang | 1.013× | 1.010×, 1.016× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000791s | 0.000790s | 0.000804s | byte equality observed |
| test_alignment.test | 10 | 0.000797s | 0.000782s | 0.000792s | byte equality observed |
| test_alignment_2.test | 10 | 0.000807s | 0.000786s | 0.000796s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000737s | 0.000730s | 0.000777s | byte equality observed |
| test_bench_random.test | 2 | 0.015900s | 0.015903s | 0.015918s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000799s | 0.000788s | 0.000781s | byte equality observed |
| test_comparison.test | 10 | 0.000744s | 0.000758s | 0.000758s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000785s | 0.000801s | 0.000745s | byte equality observed |
| test_constants.test | 10 | 0.000780s | 0.000787s | 0.000809s | byte equality observed |
| test_constants_cx.test | 10 | 0.000778s | 0.000780s | 0.000799s | byte equality observed |
| test_data.test | 10 | 0.000813s | 0.000782s | 0.000827s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000825s | 0.000795s | 0.000818s | byte equality observed |
| test_detail_endian.test | 10 | 0.000822s | 0.000800s | 0.000779s | byte equality observed |
| test_detail_md5.test | 10 | 0.000838s | 0.000812s | 0.000822s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000818s | 0.000808s | 0.000781s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005328s | 0.006340s | 0.005607s | byte equality observed |
| test_entropy_error.test | 10 | 0.000745s | 0.000751s | 0.000750s | byte equality observed |
| test_from_chars.test | 10 | 0.000753s | 0.000739s | 0.000809s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000816s | 0.000776s | 0.000826s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000831s | 0.000801s | 0.000815s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000817s | 0.000790s | 0.000824s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000807s | 0.000799s | 0.000811s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000816s | 0.000810s | 0.000791s | byte equality observed |
| test_hash.test | 10 | 0.000800s | 0.000792s | 0.000785s | byte equality observed |
| test_hash_value.test | 6 | 0.003256s | 0.003204s | 0.003095s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000736s | 0.000744s | 0.000760s | byte equality observed |
| test_include1.test | 10 | 0.000340s | 0.000312s | 0.000806s | byte equality observed |
| test_io.test | 10 | 0.000856s | 0.000829s | 0.000838s | byte equality observed |
| test_io_2.test | 10 | 0.000892s | 0.000851s | 0.000895s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000903s | 0.000890s | 0.000914s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000861s | 0.000830s | 0.000885s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000790s | 0.000822s | 0.000812s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000808s | 0.000820s | 0.000816s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000822s | 0.000825s | 0.000812s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000823s | 0.000825s | 0.000829s | byte equality observed |
| test_namespaces.test | 10 | 0.000828s | 0.000791s | 0.000793s | byte equality observed |
| test_nil_generator.test | 10 | 0.000805s | 0.000777s | 0.000793s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000775s | 0.000753s | 0.000790s | byte equality observed |
| test_random_generator.test | 6 | 0.003735s | 0.003739s | 0.003730s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000758s | 0.000743s | 0.000756s | byte equality observed |
| test_serialization.test | 10 | 0.000851s | 0.000867s | 0.000819s | byte equality observed |
| test_std_unordered.test | 10 | 0.000891s | 0.000860s | 0.000839s | byte equality observed |
| test_string_generator.test | 10 | 0.000871s | 0.000858s | 0.000879s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000821s | 0.000796s | 0.000840s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000790s | 0.000797s | 0.000797s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000827s | 0.000792s | 0.000793s | byte equality observed |
| test_tagging.test | 10 | 0.000814s | 0.000802s | 0.000812s | byte equality observed |
| test_time_generator.test | 10 | 0.000842s | 0.000811s | 0.000809s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001116s | 0.001193s | 0.001227s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.000991s | 0.001038s | 0.001036s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004568s | 0.004347s | 0.004393s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001134s | 0.001227s | 0.001224s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001011s | 0.001033s | 0.001044s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004510s | 0.004663s | 0.004870s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000977s | 0.001026s | 0.001040s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000848s | 0.000832s | 0.000838s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002300s | 0.002301s | 0.002319s | byte equality observed |
| test_to_chars.test | 10 | 0.000817s | 0.000807s | 0.000810s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000793s | 0.000807s | 0.000811s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000824s | 0.000810s | 0.000820s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000829s | 0.000812s | 0.000833s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000824s | 0.000792s | 0.000834s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000846s | 0.000825s | 0.000836s | byte equality observed |
| test_uuid.test | 10 | 0.000782s | 0.000796s | 0.000799s | byte equality observed |
| test_uuid_2.test | 10 | 0.000797s | 0.000783s | 0.000799s | byte equality observed |
| test_uuid_3.test | 10 | 0.000778s | 0.000799s | 0.000811s | byte equality observed |
| test_uuid_class.test | 10 | 0.000814s | 0.000822s | 0.000800s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000789s | 0.000802s | 0.000767s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000827s | 0.000800s | 0.000791s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000808s | 0.000804s | 0.000805s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000791s | 0.000815s | 0.000802s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000809s | 0.000832s | 0.000793s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000965s | 0.000979s | 0.000980s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000866s | 0.000858s | 0.000856s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000813s | 0.000792s | 0.000779s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000804s | 0.000805s | 0.000834s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000794s | 0.000799s | 0.000831s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
