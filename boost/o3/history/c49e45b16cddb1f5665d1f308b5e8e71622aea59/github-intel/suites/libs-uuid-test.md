# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.343114 | 0.792039 | 1.072726 | 0.000518 | 0.000555 | 0.001189 |
| test_uuid.test | RUN | 0.214307 | 0.658609 | 0.771371 | 0.001226 | 0.001258 | 0.001348 |
| test_uuid_no_simd.test | RUN | 0.214462 | 0.646612 | 0.702546 | 0.001444 | 0.001171 | 0.001265 |
| test_uuid_2.test | RUN | 0.151162 | 0.474122 | 0.522750 | 0.001193 | 0.001213 | 0.001013 |
| test_uuid_3.test | RUN | 0.124454 | 0.327286 | 0.420777 | 0.001369 | 0.001321 | 0.001239 |
| test_alignment.test | RUN | 0.114892 | 0.291602 | 0.364931 | 0.001375 | 0.001322 | 0.001118 |
| test_alignment_2.test | RUN | 0.117432 | 0.291730 | 0.371403 | 0.001165 | 0.001198 | 0.001240 |
| test_attribute_packed.test | RUN | 0.117925 | 0.293455 | 0.371343 | 0.001198 | 0.001328 | 0.001128 |
| test_pragma_pack.test | RUN | 0.117119 | 0.298737 | 0.375496 | 0.001158 | 0.001312 | 0.001100 |
| test_data.test | RUN | 0.139812 | 0.540407 | 0.542879 | 0.001378 | 0.001217 | 0.001237 |
| test_comparison.test | RUN | 0.202182 | 0.630209 | 0.733128 | 0.001394 | 0.001220 | 0.001197 |
| test_comparison_no_simd.test | RUN | 0.196398 | 0.721342 | 0.649369 | 0.001305 | 0.001267 | 0.001123 |
| test_io.test | RUN | 0.264774 | 1.234605 | 1.120319 | 0.001360 | 0.001389 | 0.001364 |
| test_io_no_simd.test | RUN | 0.255025 | 1.236335 | 1.061725 | 0.001348 | 0.001355 | 0.001288 |
| test_io_2.test | RUN | 0.205803 | 1.282437 | 0.766095 | 0.001414 | 0.001446 | 0.001309 |
| test_io_2_no_simd.test | RUN | 0.187246 | 1.208262 | 0.715281 | 0.001590 | 0.001508 | 0.001434 |
| test_to_chars.test | RUN | 0.187656 | 0.814479 | 0.727154 | 0.001337 | 0.001376 | 0.001224 |
| test_to_chars_no_simd.test | RUN | 0.178991 | 0.813255 | 0.695445 | 0.001538 | 0.001479 | 0.001294 |
| test_to_chars_2.test | RUN | 0.223893 | 1.478772 | 0.851584 | 0.001500 | 0.001476 | 0.001141 |
| test_to_chars_2_no_simd.test | RUN | 0.237374 | 1.588215 | 0.777012 | 0.001339 | 0.001321 | 0.001243 |
| test_to_chars_3.test | RUN | 0.148533 | 0.517504 | 0.516675 | 0.001405 | 0.001354 | 0.001106 |
| test_from_chars.test | RUN | 0.178179 | 0.757017 | 0.598168 | 0.001194 | 0.001251 | 0.001204 |
| test_from_chars_no_simd.test | RUN | 0.152611 | 0.597765 | 0.489688 | 0.001400 | 0.001462 | 0.001129 |
| test_from_chars_2.test | RUN | 0.167154 | 0.702987 | 0.570443 | 0.001142 | 0.001131 | 0.001060 |
| test_from_chars_2_no_simd.test | RUN | 0.144302 | 0.530328 | 0.468439 | 0.001272 | 0.001208 | 0.001136 |
| test_uuid_from_string.test | RUN | 0.199369 | 0.768189 | 0.699194 | 0.001433 | 0.001137 | 0.001120 |
| test_uuid_from_string_2.test | RUN | 0.177121 | 0.697606 | 0.595737 | 0.001614 | 0.001565 | 0.001468 |
| test_uuid_from_string_3.test | RUN | 0.176830 | 0.702323 | 0.606000 | 0.001211 | 0.001279 | 0.001162 |
| test_uuid_clock.test | RUN | 0.102929 | 0.287643 | 0.360504 | 0.001130 | 0.001318 | 0.001219 |
| test_nil_generator.test | RUN | 0.123570 | 0.333344 | 0.411484 | 0.001358 | 0.001251 | 0.001138 |
| test_string_generator.test | RUN | 0.163083 | 0.557528 | 0.584365 | 0.001258 | 0.001490 | 0.001326 |
| test_string_generator_2.test | RUN | 0.204500 | 0.790980 | 0.653242 | 0.001310 | 0.001179 | 0.001119 |
| test_random_generator.test | RUN | 0.275101 | 1.515421 | 0.972993 | 0.004233 | 0.004288 | 0.004144 |
| test_random_generator_2.test | RUN | 0.197204 | 0.588592 | 0.658808 | 0.001286 | 0.001389 | 0.001202 |
| test_name_generator.test | RUN | 0.179831 | 1.990088 | 0.717554 | 0.001226 | 0.001340 | 0.001166 |
| test_namespaces.test | RUN | 0.140868 | 0.418597 | 0.468641 | 0.001127 | 0.001224 | 0.001147 |
| test_name_generator_md5.test | RUN | 0.182440 | 0.933322 | 0.698009 | 0.001419 | 0.001343 | 0.001239 |
| test_name_generator_sha1.test | RUN | 0.175021 | 2.934764 | 0.695432 | 0.001247 | 0.001387 | 0.001296 |
| test_time_generator.test | RUN | 0.183658 | 0.574481 | 0.662319 | 0.001288 | 0.001325 | 0.001214 |
| test_time_generator_v1.test | RUN | 0.209098 | 0.640116 | 0.726183 | 0.001602 | 0.001705 | 0.001742 |
| test_time_generator_v1_2.test | RUN | 0.207759 | 0.606806 | 0.694501 | 0.001539 | 0.001510 | 0.001570 |
| test_time_generator_v1_3.test | RUN | 0.226826 | 0.630624 | 0.769929 | 0.004073 | 0.004854 | 0.004314 |
| test_time_generator_v6.test | RUN | 0.208399 | 0.642141 | 0.732913 | 0.001896 | 0.001744 | 0.001818 |
| test_time_generator_v6_2.test | RUN | 0.211900 | 0.602631 | 0.691669 | 0.001514 | 0.001628 | 0.001688 |
| test_time_generator_v6_3.test | RUN | 0.230230 | 0.637124 | 0.775130 | 0.003652 | 0.003465 | 0.003931 |
| test_time_generator_v7.test | RUN | 0.198039 | 0.638022 | 0.705385 | 0.001354 | 0.001566 | 0.001460 |
| test_time_generator_v7_2.test | RUN | 0.185355 | 0.542944 | 0.649149 | 0.001289 | 0.001279 | 0.001094 |
| test_time_generator_v7_3.test | RUN | 0.191697 | 0.705145 | 0.649966 | 0.002756 | 0.002812 | 0.002673 |
| test_serialization.test | RUN | 0.336936 | 1.086179 | 1.224945 | 0.001640 | 0.001315 | 0.001364 |
| test_tagging.test | RUN | 0.190027 | 0.680244 | 0.664339 | 0.001297 | 0.001319 | 0.001243 |
| test_uuid_class.test | RUN | 0.195570 | 0.602126 | 0.703692 | 0.001197 | 0.001311 | 0.001366 |
| test_uuid_in_map.test | RUN | 0.221000 | 0.685907 | 0.765676 | 0.001205 | 0.001218 | 0.001282 |
| test_hash.test | RUN | 0.213733 | 0.621072 | 0.705990 | 0.001342 | 0.001337 | 0.001430 |
| test_hash_value.test | RUN | 0.152880 | 0.429016 | 0.532201 | 0.004117 | 0.004164 | 0.004188 |
| test_std_unordered.test | RUN | 0.207178 | 0.704371 | 0.726689 | 0.001491 | 0.001309 | 0.001509 |
| test_boost_unordered.test | RUN | 0.293105 | 0.907398 | 0.929141 | 0.001231 | 0.001260 | 0.001361 |
| test_detail_md5.test | RUN | 0.138619 | 0.433881 | 0.519777 | 0.001180 | 0.001228 | 0.001433 |
| test_detail_sha1.test | RUN | 0.125732 | 0.564103 | 0.470898 | 0.008226 | 0.008347 | 0.007258 |
| test_detail_endian.test | RUN | 0.100912 | 0.321264 | 0.352619 | 0.001176 | 0.001366 | 0.001417 |
| test_detail_chacha20.test | RUN | 0.111462 | 0.396298 | 0.365057 | 0.001247 | 0.001302 | 0.001172 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.099319 | 0.219640 | 0.284316 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.099072 | 0.220154 | 0.281680 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.161642 | 0.440990 | 0.517411 | 0.001433 | 0.001286 | 0.001241 |
| test_bench_random.test | RUN | 0.185867 | 0.575773 | 0.678159 | 0.016464 | 0.016610 | 0.016531 |
| test_entropy_error.test | RUN | 0.090854 | 0.257402 | 0.310881 | 0.001166 | 0.001187 | 0.001154 |
| test_detail_random_provider.test | RUN | 0.182487 | 0.443819 | 0.587161 | 0.001193 | 0.001356 | 0.001180 |
| test_constants.test | RUN | 0.142567 | 0.416122 | 0.480346 | 0.001334 | 0.001352 | 0.001164 |
| test_uuid_cx.test | COMPILE | 0.079026 | 0.189849 | 0.232585 | — | — | — |
| test_uuid_cx2.test | RUN | 0.152110 | 0.477231 | 0.525838 | 0.001297 | 0.001264 | 0.001358 |
| test_uuid_cx3.test | RUN | 0.129444 | 0.363694 | 0.464223 | 0.001334 | 0.001350 | 0.001386 |
| test_uuid_cx3_no_simd.test | RUN | 0.125653 | 0.347628 | 0.412564 | 0.001181 | 0.001111 | 0.001450 |
| test_hash_value_cx.test | RUN | 0.128351 | 0.328287 | 0.421423 | 0.001155 | 0.001171 | 0.001238 |
| test_string_generator_cx.test | RUN | 0.141935 | 0.415939 | 0.482147 | 0.001459 | 0.001200 | 0.001204 |
| test_string_generator_cx2.test | RUN | 0.178435 | 0.507454 | 0.562178 | 0.001216 | 0.001244 | 0.001201 |
| test_constants_cx.test | RUN | 0.117608 | 0.283909 | 0.392835 | 0.001166 | 0.001205 | 0.001254 |
| test_from_chars_cx.test | RUN | 0.153551 | 0.549763 | 0.511870 | 0.001226 | 0.001314 | 0.001232 |
| test_from_chars_cx2.test | RUN | 0.163588 | 0.687388 | 0.573095 | 0.001458 | 0.001142 | 0.001183 |
| test_to_chars_cx.test | RUN | 0.161805 | 0.633585 | 0.620420 | 0.001350 | 0.001341 | 0.000901 |
| test_uuid_from_string_cx.test | RUN | 0.173075 | 0.652719 | 0.567691 | 0.000914 | 0.000894 | 0.000880 |
| quick.test | RUN | 0.184627 | 0.481299 | 0.557834 | 0.000971 | 0.000922 | 0.000841 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.003×, 1.000× | 0.995× |
| clang | 1.012× | 1.010×, 1.013× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000788s | 0.000800s | 0.000808s | byte equality observed |
| test_alignment.test | 10 | 0.000800s | 0.000835s | 0.000829s | byte equality observed |
| test_alignment_2.test | 10 | 0.000806s | 0.000824s | 0.000815s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000747s | 0.000765s | 0.000754s | byte equality observed |
| test_bench_random.test | 2 | 0.015973s | 0.015938s | 0.015928s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000793s | 0.000795s | 0.000794s | byte equality observed |
| test_comparison.test | 10 | 0.000741s | 0.000735s | 0.000735s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000807s | 0.000798s | 0.000805s | byte equality observed |
| test_constants.test | 10 | 0.000827s | 0.000782s | 0.000824s | byte equality observed |
| test_constants_cx.test | 10 | 0.000789s | 0.000790s | 0.000808s | byte equality observed |
| test_data.test | 10 | 0.000783s | 0.000811s | 0.000814s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000809s | 0.000815s | 0.000833s | byte equality observed |
| test_detail_endian.test | 10 | 0.000822s | 0.000827s | 0.000793s | byte equality observed |
| test_detail_md5.test | 10 | 0.000839s | 0.000822s | 0.000814s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000823s | 0.000829s | 0.000822s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005445s | 0.006364s | 0.005705s | byte equality observed |
| test_entropy_error.test | 10 | 0.000740s | 0.000745s | 0.000750s | byte equality observed |
| test_from_chars.test | 10 | 0.000742s | 0.000757s | 0.000755s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000830s | 0.000803s | 0.000810s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000827s | 0.000823s | 0.000794s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000837s | 0.000820s | 0.000808s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000827s | 0.000787s | 0.000793s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000809s | 0.000782s | 0.000815s | byte equality observed |
| test_hash.test | 10 | 0.000828s | 0.000815s | 0.000818s | byte equality observed |
| test_hash_value.test | 6 | 0.003234s | 0.003156s | 0.003175s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000750s | 0.000758s | 0.000767s | byte equality observed |
| test_include1.test | 10 | 0.000354s | 0.000355s | 0.000740s | byte equality observed |
| test_io.test | 10 | 0.000847s | 0.000867s | 0.000850s | byte equality observed |
| test_io_2.test | 10 | 0.000884s | 0.000885s | 0.000877s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000913s | 0.000902s | 0.000891s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000874s | 0.000864s | 0.000845s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000810s | 0.000795s | 0.000788s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000848s | 0.000821s | 0.000816s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000826s | 0.000817s | 0.000831s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000840s | 0.000842s | 0.000807s | byte equality observed |
| test_namespaces.test | 10 | 0.000827s | 0.000820s | 0.000819s | byte equality observed |
| test_nil_generator.test | 10 | 0.000798s | 0.000817s | 0.000797s | byte equality observed |
| test_pragma_pack.test | 9 | 0.000782s | 0.000781s | 0.000761s | byte equality observed |
| test_random_generator.test | 5 | 0.003759s | 0.003746s | 0.003728s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000775s | 0.000754s | 0.000759s | byte equality observed |
| test_serialization.test | 10 | 0.000889s | 0.000891s | 0.000853s | byte equality observed |
| test_std_unordered.test | 10 | 0.000884s | 0.000870s | 0.000879s | byte equality observed |
| test_string_generator.test | 10 | 0.000888s | 0.000894s | 0.000873s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000826s | 0.000849s | 0.000834s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000820s | 0.000802s | 0.000806s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000796s | 0.000819s | 0.000825s | byte equality observed |
| test_tagging.test | 10 | 0.000820s | 0.000858s | 0.000856s | byte equality observed |
| test_time_generator.test | 10 | 0.000828s | 0.000839s | 0.000848s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001119s | 0.001226s | 0.001222s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.000996s | 0.001037s | 0.001052s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004340s | 0.004133s | 0.004703s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001152s | 0.001244s | 0.001252s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001034s | 0.001032s | 0.001055s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004408s | 0.004356s | 0.004186s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000992s | 0.001027s | 0.001043s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000860s | 0.000854s | 0.000867s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002336s | 0.002321s | 0.002337s | byte equality observed |
| test_to_chars.test | 10 | 0.000827s | 0.000819s | 0.000811s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000795s | 0.000795s | 0.000798s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000819s | 0.000817s | 0.000840s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000821s | 0.000810s | 0.000823s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000814s | 0.000804s | 0.000819s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000869s | 0.000843s | 0.000852s | byte equality observed |
| test_uuid.test | 10 | 0.000806s | 0.000810s | 0.000839s | byte equality observed |
| test_uuid_2.test | 10 | 0.000822s | 0.000833s | 0.000816s | byte equality observed |
| test_uuid_3.test | 10 | 0.000821s | 0.000822s | 0.000802s | byte equality observed |
| test_uuid_class.test | 10 | 0.000828s | 0.000844s | 0.000809s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000810s | 0.000794s | 0.000804s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000827s | 0.000799s | 0.000797s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000795s | 0.000800s | 0.000813s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000805s | 0.000823s | 0.000815s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000815s | 0.000813s | 0.000815s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000957s | 0.000965s | 0.001019s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000857s | 0.000866s | 0.000865s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000795s | 0.000825s | 0.000789s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000807s | 0.000785s | 0.000794s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000814s | 0.000798s | 0.000805s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
