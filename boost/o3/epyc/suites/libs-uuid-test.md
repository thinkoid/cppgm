# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.328612 | 0.731017 | 0.922590 | 0.000649 | 0.000647 | 0.001631 |
| test_uuid.test | RUN | 0.214497 | 0.580048 | 0.704462 | 0.001746 | 0.001659 | 0.001674 |
| test_uuid_no_simd.test | RUN | 0.203535 | 0.566889 | 0.615143 | 0.001684 | 0.001627 | 0.001400 |
| test_uuid_2.test | RUN | 0.146766 | 0.446442 | 0.444999 | 0.001686 | 0.001495 | 0.001453 |
| test_uuid_3.test | RUN | 0.131389 | 0.296467 | 0.369938 | 0.001686 | 0.001684 | 0.001246 |
| test_alignment.test | RUN | 0.112166 | 0.282803 | 0.319238 | 0.001820 | 0.001225 | 0.001661 |
| test_alignment_2.test | RUN | 0.114691 | 0.257336 | 0.317684 | 0.001298 | 0.001616 | 0.001392 |
| test_attribute_packed.test | RUN | 0.118109 | 0.268298 | 0.334422 | 0.001714 | 0.001621 | 0.001394 |
| test_pragma_pack.test | RUN | 0.122276 | 0.262055 | 0.326992 | 0.001660 | 0.001627 | 0.000932 |
| test_data.test | RUN | 0.133930 | 0.464322 | 0.466538 | 0.001547 | 0.001561 | 0.001455 |
| test_comparison.test | RUN | 0.207002 | 0.544791 | 0.638374 | 0.001670 | 0.001674 | 0.001250 |
| test_comparison_no_simd.test | RUN | 0.218609 | 0.611653 | 0.577770 | 0.001550 | 0.001392 | 0.001359 |
| test_io.test | RUN | 0.257444 | 1.060269 | 0.949030 | 0.001776 | 0.001636 | 0.001560 |
| test_io_no_simd.test | RUN | 0.235038 | 1.032868 | 0.917717 | 0.001484 | 0.001558 | 0.001503 |
| test_io_2.test | RUN | 0.188003 | 1.067234 | 0.693674 | 0.001752 | 0.001586 | 0.001562 |
| test_io_2_no_simd.test | RUN | 0.167612 | 1.016067 | 0.617717 | 0.001520 | 0.001502 | 0.001466 |
| test_to_chars.test | RUN | 0.177217 | 0.668677 | 0.614817 | 0.001635 | 0.001735 | 0.001602 |
| test_to_chars_no_simd.test | RUN | 0.167540 | 0.663924 | 0.607634 | 0.001650 | 0.001641 | 0.001626 |
| test_to_chars_2.test | RUN | 0.202559 | 1.200713 | 0.738392 | 0.001454 | 0.001213 | 0.001276 |
| test_to_chars_2_no_simd.test | RUN | 0.208308 | 1.290263 | 0.688067 | 0.001482 | 0.001449 | 0.001436 |
| test_to_chars_3.test | RUN | 0.141941 | 0.438724 | 0.452309 | 0.001237 | 0.001413 | 0.001572 |
| test_from_chars.test | RUN | 0.161505 | 0.629444 | 0.506930 | 0.001489 | 0.001639 | 0.001345 |
| test_from_chars_no_simd.test | RUN | 0.139071 | 0.493842 | 0.417870 | 0.001444 | 0.001376 | 0.001250 |
| test_from_chars_2.test | RUN | 0.153689 | 0.587508 | 0.481034 | 0.001317 | 0.001314 | 0.001604 |
| test_from_chars_2_no_simd.test | RUN | 0.137764 | 0.444957 | 0.401381 | 0.001278 | 0.001370 | 0.001429 |
| test_uuid_from_string.test | RUN | 0.183282 | 0.660845 | 0.614527 | 0.001491 | 0.001590 | 0.001361 |
| test_uuid_from_string_2.test | RUN | 0.161316 | 0.599751 | 0.522715 | 0.001731 | 0.001652 | 0.001599 |
| test_uuid_from_string_3.test | RUN | 0.164041 | 0.606034 | 0.539074 | 0.001432 | 0.001768 | 0.001476 |
| test_uuid_clock.test | RUN | 0.101831 | 0.252760 | 0.328322 | 0.001289 | 0.001590 | 0.001527 |
| test_nil_generator.test | RUN | 0.116879 | 0.289009 | 0.359894 | 0.001627 | 0.001612 | 0.001561 |
| test_string_generator.test | RUN | 0.149397 | 0.484238 | 0.493069 | 0.001612 | 0.001682 | 0.001536 |
| test_string_generator_2.test | RUN | 0.182493 | 0.676981 | 0.558974 | 0.001407 | 0.001257 | 0.001580 |
| test_random_generator.test | RUN | 0.258579 | 1.276331 | 0.842109 | 0.058752 | 0.059262 | 0.059164 |
| test_random_generator_2.test | RUN | 0.185111 | 0.502357 | 0.546788 | 0.001403 | 0.001591 | 0.001610 |
| test_name_generator.test | RUN | 0.163603 | 1.596979 | 0.624277 | 0.001309 | 0.001645 | 0.001535 |
| test_namespaces.test | RUN | 0.133993 | 0.358627 | 0.421019 | 0.001355 | 0.001599 | 0.001508 |
| test_name_generator_md5.test | RUN | 0.171430 | 0.791364 | 0.579891 | 0.001573 | 0.001638 | 0.001589 |
| test_name_generator_sha1.test | RUN | 0.164720 | 2.315666 | 0.579318 | 0.001502 | 0.001490 | 0.001496 |
| test_time_generator.test | RUN | 0.175459 | 0.507744 | 0.553196 | 0.001505 | 0.001558 | 0.001625 |
| test_time_generator_v1.test | RUN | 0.195025 | 0.537305 | 0.651722 | 0.001746 | 0.002072 | 0.002058 |
| test_time_generator_v1_2.test | RUN | 0.192772 | 0.513445 | 0.653623 | 0.001782 | 0.001770 | 0.001751 |
| test_time_generator_v1_3.test | RUN | 0.215088 | 0.529934 | 0.674527 | 0.002935 | 0.003984 | 0.003780 |
| test_time_generator_v6.test | RUN | 0.202227 | 0.549086 | 0.644164 | 0.001788 | 0.002110 | 0.001878 |
| test_time_generator_v6_2.test | RUN | 0.197457 | 0.512905 | 0.586795 | 0.001574 | 0.001836 | 0.001785 |
| test_time_generator_v6_3.test | RUN | 0.215972 | 0.547459 | 0.649567 | 0.003354 | 0.003208 | 0.003358 |
| test_time_generator_v7.test | RUN | 0.189310 | 0.525407 | 0.582578 | 0.001822 | 0.001748 | 0.001904 |
| test_time_generator_v7_2.test | RUN | 0.181816 | 0.483721 | 0.540490 | 0.001448 | 0.001630 | 0.001598 |
| test_time_generator_v7_3.test | RUN | 0.183679 | 0.598719 | 0.564996 | 0.030143 | 0.030428 | 0.030354 |
| test_serialization.test | RUN | 0.343171 | 0.912916 | 1.092011 | 0.001925 | 0.003538 | 0.001790 |
| test_tagging.test | RUN | 0.188208 | 0.582735 | 0.589478 | 0.001326 | 0.001365 | 0.001657 |
| test_uuid_class.test | RUN | 0.194069 | 0.497420 | 0.623240 | 0.001685 | 0.001345 | 0.001581 |
| test_uuid_in_map.test | RUN | 0.214867 | 0.587483 | 0.671949 | 0.001694 | 0.001559 | 0.001551 |
| test_hash.test | RUN | 0.223049 | 0.531038 | 0.619380 | 0.001617 | 0.001732 | 0.001788 |
| test_hash_value.test | RUN | 0.156555 | 0.370105 | 0.475789 | 0.004869 | 0.003957 | 0.004180 |
| test_std_unordered.test | RUN | 0.214770 | 0.586898 | 0.662367 | 0.001622 | 0.001735 | 0.001792 |
| test_boost_unordered.test | RUN | 0.309587 | 0.768889 | 0.805186 | 0.001488 | 0.001396 | 0.001738 |
| test_detail_md5.test | RUN | 0.136296 | 0.384976 | 0.447088 | 0.001522 | 0.001448 | 0.001314 |
| test_detail_sha1.test | RUN | 0.127864 | 0.451951 | 0.402059 | 0.007206 | 0.006983 | 0.006450 |
| test_detail_endian.test | RUN | 0.095658 | 0.267133 | 0.312581 | 0.001417 | 0.001419 | 0.001680 |
| test_detail_chacha20.test | RUN | 0.104656 | 0.332887 | 0.319591 | 0.001425 | 0.001294 | 0.001385 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.095052 | 0.186105 | 0.249526 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.094419 | 0.187598 | 0.231121 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.163039 | 0.374967 | 0.425996 | 0.001750 | 0.001510 | 0.001649 |
| test_bench_random.test | RUN | 0.181806 | 0.533283 | 0.577580 | 0.311091 | 0.309787 | 0.311350 |
| test_entropy_error.test | RUN | 0.091961 | 0.267986 | 0.264929 | 0.001437 | 0.001632 | 0.001620 |
| test_detail_random_provider.test | RUN | 0.175500 | 0.388951 | 0.481658 | 0.003012 | 0.002991 | 0.003436 |
| test_constants.test | RUN | 0.136861 | 0.329349 | 0.346776 | 0.001471 | 0.001320 | 0.003365 |
| test_uuid_cx.test | COMPILE | 0.078974 | 0.165082 | 0.213182 | — | — | — |
| test_uuid_cx2.test | RUN | 0.140200 | 0.399746 | 0.440980 | 0.001400 | 0.001156 | 0.001251 |
| test_uuid_cx3.test | RUN | 0.109127 | 0.317815 | 0.394603 | 0.001557 | 0.001392 | 0.001232 |
| test_uuid_cx3_no_simd.test | RUN | 0.118295 | 0.288125 | 0.347582 | 0.002299 | 0.001112 | 0.001380 |
| test_hash_value_cx.test | RUN | 0.119648 | 0.291181 | 0.345129 | 0.002762 | 0.001502 | 0.001255 |
| test_string_generator_cx.test | RUN | 0.142862 | 0.363161 | 0.411704 | 0.001872 | 0.001481 | 0.001372 |
| test_string_generator_cx2.test | RUN | 0.204168 | 0.440898 | 0.480288 | 0.001450 | 0.001457 | 0.001398 |
| test_constants_cx.test | RUN | 0.153762 | 0.246213 | 0.325924 | 0.001479 | 0.001460 | 0.001542 |
| test_from_chars_cx.test | RUN | 0.173889 | 0.482322 | 0.435273 | 0.001703 | 0.001656 | 0.001212 |
| test_from_chars_cx2.test | RUN | 0.151606 | 0.589393 | 0.471386 | 0.001582 | 0.001639 | 0.001539 |
| test_to_chars_cx.test | RUN | 0.153972 | 0.558133 | 0.516960 | 0.001523 | 0.001438 | 0.001395 |
| test_uuid_from_string_cx.test | RUN | 0.161506 | 0.575118 | 0.481679 | 0.001113 | 0.001108 | 0.000918 |
| quick.test | RUN | 0.168951 | 0.443187 | 0.488209 | 0.001126 | 0.001155 | 0.001137 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.002×, 1.006× | 1.001× |
| clang | 1.002× | 1.004×, 0.999× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000859s | 0.000853s | 0.000866s | byte equality observed |
| test_alignment.test | 10 | 0.000851s | 0.000850s | 0.000901s | byte equality observed |
| test_alignment_2.test | 10 | 0.000858s | 0.000852s | 0.000857s | byte equality observed |
| test_attribute_packed.test | 9 | 0.000822s | 0.000809s | 0.000838s | byte equality observed |
| test_bench_random.test | 1 | 0.323387s | 0.323472s | 0.323326s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001372s | 0.001381s | 0.001401s | byte equality observed |
| test_comparison.test | 10 | 0.000817s | 0.000833s | 0.000842s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000821s | 0.000846s | 0.000835s | byte equality observed |
| test_constants.test | 10 | 0.000803s | 0.000830s | 0.000838s | byte equality observed |
| test_constants_cx.test | 10 | 0.000783s | 0.000804s | 0.000814s | byte equality observed |
| test_data.test | 10 | 0.000802s | 0.000835s | 0.000845s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000788s | 0.000827s | 0.000837s | byte equality observed |
| test_detail_endian.test | 10 | 0.000795s | 0.000829s | 0.000849s | byte equality observed |
| test_detail_md5.test | 10 | 0.000834s | 0.000860s | 0.000839s | byte equality observed |
| test_detail_random_provider.test | 8 | 0.002420s | 0.002413s | 0.002427s | byte equality observed |
| test_detail_sha1.test | 4 | 0.004786s | 0.005354s | 0.004030s | byte equality observed |
| test_entropy_error.test | 10 | 0.000830s | 0.000835s | 0.000887s | byte equality observed |
| test_from_chars.test | 10 | 0.000822s | 0.000832s | 0.000843s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000819s | 0.000858s | 0.000833s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000828s | 0.000843s | 0.000837s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000829s | 0.000851s | 0.000830s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000834s | 0.000846s | 0.000821s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000835s | 0.000858s | 0.000813s | byte equality observed |
| test_hash.test | 10 | 0.001394s | 0.001385s | 0.001362s | byte equality observed |
| test_hash_value.test | 8 | 0.002736s | 0.002749s | 0.002694s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000846s | 0.000840s | 0.000831s | byte equality observed |
| test_include1.test | 10 | 0.000389s | 0.000396s | 0.000847s | byte equality observed |
| test_io.test | 10 | 0.000910s | 0.000905s | 0.000948s | byte equality observed |
| test_io_2.test | 10 | 0.000968s | 0.000956s | 0.000963s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000947s | 0.000976s | 0.000958s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000922s | 0.000923s | 0.000961s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000860s | 0.000862s | 0.000899s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000896s | 0.000898s | 0.000937s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000888s | 0.000868s | 0.000916s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000884s | 0.000890s | 0.000927s | byte equality observed |
| test_namespaces.test | 10 | 0.000864s | 0.000861s | 0.000917s | byte equality observed |
| test_nil_generator.test | 10 | 0.000854s | 0.000854s | 0.000877s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000843s | 0.000823s | 0.000903s | byte equality observed |
| test_random_generator.test | 1 | 0.061459s | 0.061466s | 0.061509s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000841s | 0.000840s | 0.000862s | byte equality observed |
| test_serialization.test | 6 | 0.000928s | 0.000911s | 0.000928s | byte equality observed |
| test_std_unordered.test | 10 | 0.001435s | 0.001424s | 0.001469s | byte equality observed |
| test_string_generator.test | 10 | 0.000910s | 0.000898s | 0.000938s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000865s | 0.000865s | 0.000904s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000866s | 0.000840s | 0.000889s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000869s | 0.000866s | 0.000898s | byte equality observed |
| test_tagging.test | 10 | 0.000887s | 0.000867s | 0.000926s | byte equality observed |
| test_time_generator.test | 10 | 0.000894s | 0.000893s | 0.000912s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001157s | 0.001248s | 0.001307s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001044s | 0.001065s | 0.001148s | byte equality observed |
| test_time_generator_v1_3.test | 7 | 0.003014s | 0.002954s | 0.003146s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001163s | 0.001274s | 0.001311s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001061s | 0.001102s | 0.001157s | byte equality observed |
| test_time_generator_v6_3.test | 7 | 0.003075s | 0.003016s | 0.003152s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001054s | 0.001101s | 0.001141s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001145s | 0.001098s | 0.001293s | byte equality observed |
| test_time_generator_v7_3.test | 1 | 0.031079s | 0.030798s | 0.031684s | byte equality observed |
| test_to_chars.test | 10 | 0.000849s | 0.000854s | 0.000888s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000836s | 0.000837s | 0.000890s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000882s | 0.000893s | 0.000908s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000895s | 0.000897s | 0.000917s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000870s | 0.000876s | 0.000897s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000924s | 0.000918s | 0.000951s | byte equality observed |
| test_uuid.test | 10 | 0.000859s | 0.000866s | 0.000903s | byte equality observed |
| test_uuid_2.test | 10 | 0.000864s | 0.000859s | 0.000894s | byte equality observed |
| test_uuid_3.test | 10 | 0.000874s | 0.000856s | 0.000928s | byte equality observed |
| test_uuid_class.test | 10 | 0.000878s | 0.000873s | 0.000966s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000890s | 0.000865s | 0.000938s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000880s | 0.000858s | 0.000910s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000854s | 0.000863s | 0.000930s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000864s | 0.000880s | 0.000909s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000858s | 0.000883s | 0.000905s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001027s | 0.001031s | 0.001083s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000931s | 0.000947s | 0.000986s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000870s | 0.000868s | 0.000945s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000886s | 0.000898s | 0.000933s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000861s | 0.000874s | 0.000974s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
