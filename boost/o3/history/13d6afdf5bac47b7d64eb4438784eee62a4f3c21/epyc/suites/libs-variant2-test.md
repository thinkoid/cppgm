# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.117268 | 0.251797 | 0.388803 | 0.001672 | 0.000810 | 0.001781 |
| variant_size.test | RUN | 0.197907 | 0.625302 | 0.733426 | 0.001865 | 0.001873 | 0.001847 |
| variant_alternative.test | RUN | 0.275751 | 1.955029 | 1.196142 | 0.001863 | 0.001763 | 0.001638 |
| variant_holds_alternative.test | RUN | 0.193457 | 0.476316 | 0.729907 | 0.001644 | 0.001823 | 0.001782 |
| variant_holds_alternative_cx.test | COMPILE | 0.128402 | 0.272812 | 0.420284 | — | — | — |
| variant_get_by_index.test | RUN | 0.311513 | 2.115754 | 1.486447 | 0.001918 | 0.001753 | 0.002028 |
| variant_get_by_index_cx.test | COMPILE | 0.127396 | 0.289846 | 0.442435 | — | — | — |
| variant_get_by_type.test | RUN | 0.328067 | 2.251506 | 1.591067 | 0.001900 | 0.001704 | 0.001695 |
| variant_get_by_type_cx.test | COMPILE | 0.113327 | 0.253518 | 0.327352 | — | — | — |
| variant_default_construct.test | RUN | 0.293174 | 1.634118 | 1.291297 | 0.001795 | 0.001664 | 0.001724 |
| variant_default_construct_cx.test | COMPILE | 0.129241 | 0.272735 | 0.432728 | — | — | — |
| variant_copy_construct.test | RUN | 0.454451 | 2.796313 | 2.287888 | 0.001626 | 0.001710 | 0.001759 |
| variant_copy_construct_cx.test | COMPILE | 0.141858 | 0.309471 | 0.485445 | — | — | — |
| variant_move_construct.test | RUN | 0.437604 | 2.422833 | 2.076017 | 0.001678 | 0.001708 | 0.001739 |
| variant_move_construct_cx.test | COMPILE | 0.116003 | 0.255708 | 0.360674 | — | — | — |
| variant_value_construct.test | RUN | 0.238582 | 0.633172 | 0.900129 | 0.001789 | 0.001732 | 0.001863 |
| variant_value_construct_cx.test | COMPILE | 0.134570 | 0.288058 | 0.431824 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.236562 | 0.641629 | 0.922205 | 0.001816 | 0.001940 | 0.001854 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.127459 | 0.275989 | 0.442270 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.230358 | 0.626734 | 0.838842 | 0.001804 | 0.001598 | 0.001916 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.128199 | 0.277493 | 0.438379 | — | — | — |
| variant_copy_assign.test | RUN | 0.318793 | 1.950045 | 1.441412 | 0.001792 | 0.001812 | 0.001746 |
| variant_copy_assign_cx.test | COMPILE | 0.112702 | 0.257627 | 0.371294 | — | — | — |
| variant_move_assign.test | RUN | 0.313248 | 1.917193 | 1.407898 | 0.001496 | 0.001686 | 0.001872 |
| variant_move_assign_cx.test | COMPILE | 0.117380 | 0.247928 | 0.374485 | — | — | — |
| variant_value_assign.test | RUN | 0.242973 | 0.684537 | 1.025969 | 0.001465 | 0.001558 | 0.001740 |
| variant_value_assign_cx.test | COMPILE | 0.114016 | 0.250266 | 0.366395 | — | — | — |
| variant_emplace_index.test | RUN | 0.275693 | 0.772159 | 1.054318 | 0.001670 | 0.001618 | 0.001844 |
| variant_emplace_index_cx.test | COMPILE | 0.111406 | 0.256616 | 0.316277 | — | — | — |
| variant_emplace_type.test | RUN | 0.245943 | 0.690636 | 0.958960 | 0.001662 | 0.001812 | 0.001654 |
| variant_emplace_type_cx.test | COMPILE | 0.117908 | 0.238402 | 0.343771 | — | — | — |
| variant_swap.test | RUN | 0.256188 | 0.853462 | 1.076491 | 0.001856 | 0.001704 | 0.001210 |
| variant_eq_ne.test | RUN | 0.216944 | 0.522335 | 0.785875 | 0.001810 | 0.001755 | 0.001568 |
| variant_eq_ne_cx.test | COMPILE | 0.121813 | 0.261063 | 0.339622 | — | — | — |
| variant_lt_gt.test | RUN | 0.223728 | 0.576353 | 0.813276 | 0.001721 | 0.001597 | 0.001930 |
| variant_lt_gt_cx.test | COMPILE | 0.121470 | 0.253217 | 0.370135 | — | — | — |
| variant_destroy.test | RUN | 0.223702 | 0.586089 | 0.832906 | 0.001827 | 0.001852 | 0.001936 |
| variant_visit.test | RUN | 1.239368 | 4.500128 | 13.126397 | 0.001878 | 0.001724 | 0.001722 |
| variant_convert_construct.test | RUN | 0.291102 | 0.763140 | 1.125156 | 0.001996 | 0.001552 | 0.001882 |
| variant_subset.test | RUN | 0.284292 | 0.822192 | 1.230827 | 0.001894 | 0.001793 | 0.001900 |
| variant_valueless.test | RUN | 0.212172 | 0.542076 | 0.813851 | 0.002032 | 0.001863 | 0.001914 |
| variant_copy_construct_throw.test | RUN | 0.171679 | 0.397764 | 0.614227 | 0.001969 | 0.001901 | 0.001978 |
| variant_move_construct_throw.test | RUN | 0.173260 | 0.411740 | 0.539201 | 0.001922 | 0.001876 | 0.001790 |
| variant_convert_construct_throw.test | RUN | 0.179031 | 0.422559 | 0.620865 | 0.001866 | 0.001902 | 0.001809 |
| variant_copy_assign_throw.test | RUN | 0.170874 | 0.376328 | 0.540386 | 0.001849 | 0.001929 | 0.001821 |
| variant_move_assign_throw.test | RUN | 0.162815 | 0.397141 | 0.587752 | 0.001899 | 0.001753 | 0.001953 |
| variant_get_by_index_nx.test | RUN | 0.380964 | 1.781993 | 1.422271 | 0.001920 | 0.001794 | 0.001928 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.129528 | 0.271823 | 0.443885 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.384443 | 1.994891 | 1.574680 | 0.001698 | 0.001522 | 0.001928 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.116357 | 0.257953 | 0.362760 | — | — | — |
| variant_subset_nx.test | RUN | 0.316472 | 0.827129 | 1.219256 | 0.001756 | 0.001846 | 0.001843 |
| variant_hash.test | RUN | 0.282358 | 0.938113 | 1.107822 | 0.002178 | 0.001786 | 0.001820 |
| variant_trivial.test | RUN | 1.708325 | 5.027777 | 8.312373 | 0.001930 | 0.001816 | 0.001861 |
| variant_special.test | RUN | 1.731843 | 5.373244 | 9.107325 | 0.001787 | 0.001986 | 0.001923 |
| variant_visit_derived.test | RUN | 0.198474 | 0.468128 | 0.834047 | 0.001808 | 0.001626 | 0.001866 |
| variant_many_types.test | RUN | 1.637239 | 7.303957 | 11.779474 | 0.001803 | 0.001959 | 0.001886 |
| variant_visit_r.test | RUN | 0.639759 | 2.284021 | 4.358430 | 0.001856 | 0.001892 | 0.001684 |
| variant_derived_construct.test | COMPILE | 0.114202 | 0.232356 | 0.393741 | — | — | — |
| variant_visit_by_index.test | RUN | 0.258661 | 0.600178 | 1.113066 | 0.001852 | 0.001646 | 0.001635 |
| variant_ostream_insert.test | RUN | 0.196772 | 0.503566 | 0.595858 | 0.001884 | 0.001772 | 0.001930 |
| is_output_streamable.test | RUN | 0.237466 | 1.044027 | 0.998700 | 0.001489 | 0.001871 | 0.001858 |
| variant_json_value_from.test | RUN | 0.370096 | 0.835113 | 1.290811 | 0.001888 | 0.001951 | 0.001991 |
| variant_json_value_to.test | RUN | 0.443629 | 1.168745 | 1.665179 | 0.001918 | 0.001800 | 0.001886 |
| variant_uses_double_storage.test | COMPILE | 0.123718 | 0.256707 | 0.447106 | — | — | — |
| variant_derived_construct2.test | RUN | 0.168041 | 0.409198 | 0.635049 | 0.001570 | 0.001844 | 0.001850 |
| variant_visit_cx.test | COMPILE | 0.120290 | 0.252440 | 0.326420 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.118846 | 0.258872 | 0.319578 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.116008 | 0.248808 | 0.373865 | — | — | — |
| variant_index_type_126.test | RUN | 1.091882 | 2.450183 | 5.416949 | 0.001681 | 0.001871 | 0.001682 |
| variant_index_type_127.test | RUN | 1.123873 | 2.493249 | 5.440191 | 0.001770 | 0.001833 | 0.001700 |
| variant_index_type_128.test | RUN | 1.093670 | 2.530084 | 5.404975 | 0.001549 | 0.001760 | 0.001938 |
| variant_index_type_129.test | RUN | 1.101246 | 2.519532 | 5.384768 | 0.001824 | 0.001723 | 0.001801 |
| variant_index_type_254.test | RUN | 3.797478 | 9.046749 | 16.391361 | 0.001612 | 0.001930 | 0.001874 |
| variant_index_type_255.test | RUN | 3.706586 | 9.050163 | 16.431469 | 0.001661 | 0.001629 | 0.001644 |
| variant_index_type_256.test | RUN | 3.735663 | 9.228095 | 16.517871 | 0.001514 | 0.001715 | 0.001818 |
| variant_index_type_257.test | RUN | 3.839402 | 9.306709 | 16.763146 | 0.001590 | 0.001415 | 0.001668 |
| variant_default_construct_cx_2.test | COMPILE | 0.113949 | 0.266541 | 0.351175 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.110553 | 0.266686 | 0.375484 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.110685 | 0.233894 | 0.359244 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.110438 | 0.244988 | 0.364375 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.115511 | 0.267794 | 0.324544 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.108111 | 0.246230 | 0.340511 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.100832 | 0.217670 | 0.244407 | — | — | — |
| variant_issue_55.test | RUN | 0.174001 | 0.432673 | 0.607389 | 0.001314 | 0.001378 | 0.001358 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.988×, 0.992× | 1.025× |
| clang | 1.010× | 1.013×, 1.007× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001170s | 0.001163s | 0.001171s | byte equality observed |
| quick.test | 10 | 0.001129s | 0.000513s | 0.001138s | byte equality observed |
| variant_alternative.test | 10 | 0.001171s | 0.001198s | 0.001161s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001158s | 0.001169s | 0.001166s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001194s | 0.001186s | 0.001210s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001170s | 0.001175s | 0.001167s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001190s | 0.001198s | 0.001199s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001177s | 0.001169s | 0.001151s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001187s | 0.001174s | 0.001200s | byte equality observed |
| variant_default_construct.test | 10 | 0.001145s | 0.001165s | 0.001159s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001184s | 0.001119s | 0.001163s | byte equality observed |
| variant_destroy.test | 10 | 0.001168s | 0.001163s | 0.001156s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001159s | 0.001173s | 0.001187s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001164s | 0.001189s | 0.001143s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001154s | 0.001167s | 0.001170s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001243s | 0.001257s | 0.001232s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001177s | 0.001178s | 0.001171s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001235s | 0.001236s | 0.001190s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001198s | 0.001163s | 0.001184s | byte equality observed |
| variant_hash.test | 10 | 0.001170s | 0.001172s | 0.001184s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001156s | 0.001162s | 0.001179s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001171s | 0.001180s | 0.001175s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001179s | 0.001173s | 0.001164s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001151s | 0.001173s | 0.001193s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001166s | 0.001155s | 0.001152s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001183s | 0.001153s | 0.001179s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001164s | 0.001161s | 0.001167s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001137s | 0.001165s | 0.001151s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001163s | 0.001165s | 0.001156s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001135s | 0.001133s | 0.001150s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001168s | 0.001156s | 0.001160s | byte equality observed |
| variant_issue_55.test | 10 | 0.001164s | 0.001158s | 0.001142s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001196s | 0.001200s | 0.001200s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001199s | 0.001191s | 0.001188s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001145s | 0.001176s | 0.001186s | byte equality observed |
| variant_many_types.test | 10 | 0.001190s | 0.001187s | 0.001225s | byte equality observed |
| variant_move_assign.test | 10 | 0.001150s | 0.001172s | 0.001164s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001208s | 0.001231s | 0.001195s | byte equality observed |
| variant_move_construct.test | 10 | 0.001187s | 0.001206s | 0.001180s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001166s | 0.001200s | 0.001168s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001191s | 0.001180s | 0.001177s | byte equality observed |
| variant_size.test | 10 | 0.001169s | 0.001154s | 0.001149s | byte equality observed |
| variant_special.test | 10 | 0.001236s | 0.001197s | 0.001213s | byte equality observed |
| variant_subset.test | 10 | 0.001186s | 0.001185s | 0.001193s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001159s | 0.001167s | 0.001137s | byte equality observed |
| variant_swap.test | 10 | 0.001180s | 0.001169s | 0.001177s | byte equality observed |
| variant_trivial.test | 10 | 0.001215s | 0.001174s | 0.001208s | byte equality observed |
| variant_value_assign.test | 10 | 0.001190s | 0.001164s | 0.001163s | byte equality observed |
| variant_value_construct.test | 10 | 0.001177s | 0.001131s | 0.001179s | byte equality observed |
| variant_valueless.test | 10 | 0.001226s | 0.001215s | 0.001232s | byte equality observed |
| variant_visit.test | 10 | 0.001143s | 0.001185s | 0.001200s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001170s | 0.001155s | 0.001165s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001176s | 0.001154s | 0.001168s | byte equality observed |
| variant_visit_r.test | 10 | 0.001179s | 0.001172s | 0.001195s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658351).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
