# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.484155 | 1.028662 | 1.587166 | 0.001786 | 0.001774 | 0.001830 |
| any.test | RUN | 0.461600 | 0.986440 | 1.568803 | 0.001921 | 0.001853 | 0.002002 |
| clear.test | RUN | 0.339204 | 0.872774 | 1.211885 | 0.001974 | 0.001806 | 0.002030 |
| copy.test | RUN | 0.287901 | 0.659179 | 0.992280 | 0.001842 | 0.002058 | 0.002205 |
| count.test | RUN | 0.322860 | 0.734576 | 1.089260 | 0.002068 | 0.001922 | 0.001747 |
| count_if.test | RUN | 0.305684 | 0.701766 | 0.992301 | 0.001960 | 0.001962 | 0.001789 |
| erase.test | RUN | 0.434376 | 1.173140 | 1.636086 | 0.001864 | 0.002258 | 0.001778 |
| erase_key.test | RUN | 0.429552 | 1.176212 | 1.552645 | 0.001793 | 0.002028 | 0.001814 |
| filter.test | RUN | 0.374899 | 0.980455 | 1.380135 | 0.002156 | 0.002174 | 0.002137 |
| filter_if.test | RUN | 0.430380 | 1.172720 | 1.619559 | 0.001941 | 0.001988 | 0.002104 |
| find.test | RUN | 0.378998 | 0.826185 | 1.258140 | 0.001893 | 0.001825 | 0.001754 |
| find_if.test | RUN | 0.338421 | 0.752603 | 1.192625 | 0.002084 | 0.001952 | 0.002034 |
| fold.test | RUN | 0.392419 | 0.931007 | 1.435705 | 0.001842 | 0.002232 | 0.002224 |
| for_each.test | RUN | 0.351506 | 0.898131 | 1.230146 | 0.001803 | 0.002011 | 0.002165 |
| insert.test | RUN | 0.489621 | 1.468469 | 1.956341 | 0.001990 | 0.001969 | 0.001930 |
| insert_range.test | RUN | 0.489601 | 1.465066 | 1.993737 | 0.001820 | 0.001887 | 0.001761 |
| iter_fold.test | RUN | 0.591281 | 1.467473 | 2.339542 | 0.002062 | 0.002174 | 0.002198 |
| move.test | RUN | 0.290183 | 0.704218 | 1.058497 | 0.002547 | 0.002140 | 0.001814 |
| none.test | RUN | 0.471277 | 0.965028 | 1.636180 | 0.002040 | 0.002132 | 0.001784 |
| pop_back.test | RUN | 0.454212 | 1.285323 | 1.781023 | 0.001759 | 0.001648 | 0.002292 |
| pop_front.test | RUN | 0.396238 | 1.074748 | 1.424574 | 0.002170 | 0.002076 | 0.002075 |
| push_back.test | RUN | 0.492700 | 1.508669 | 1.892425 | 0.002100 | 0.002118 | 0.002133 |
| push_front.test | RUN | 0.428033 | 1.271898 | 1.624007 | 0.002138 | 0.002029 | 0.002282 |
| remove.test | RUN | 0.477585 | 1.386741 | 1.908315 | 0.001902 | 0.002040 | 0.001732 |
| remove_if.test | RUN | 0.418280 | 1.167090 | 1.637576 | 0.002124 | 0.001854 | 0.001868 |
| replace.test | RUN | 0.419712 | 1.145910 | 1.509094 | 0.002201 | 0.002095 | 0.002086 |
| replace_if.test | RUN | 0.410262 | 1.172329 | 1.505210 | 0.002140 | 0.002039 | 0.002220 |
| reverse_fold.test | RUN | 0.639509 | 1.614988 | 2.599879 | 0.002146 | 0.002158 | 0.001699 |
| reverse_iter_fold.test | RUN | 0.687651 | 1.695818 | 2.714169 | 0.001843 | 0.001848 | 0.002082 |
| reverse.test | RUN | 0.416015 | 1.173380 | 1.531035 | 0.001991 | 0.002047 | 0.001870 |
| segmented_for_each.test | RUN | 0.718350 | 2.273475 | 3.074549 | 0.002200 | 0.002009 | 0.001938 |
| segmented_find.test | RUN | 0.450803 | 1.204907 | 1.773304 | 0.001840 | 0.001967 | 0.001932 |
| segmented_find_if.test | RUN | 0.458102 | 1.165995 | 1.785149 | 0.002016 | 0.002040 | 0.001958 |
| segmented_fold.test | RUN | 0.551863 | 1.530265 | 2.231011 | 0.002128 | 0.002164 | 0.001956 |
| transform.test | RUN | 0.434827 | 1.253820 | 1.601450 | 0.002016 | 0.002184 | 0.001784 |
| join.test | RUN | 0.324366 | 0.749261 | 1.172699 | 0.001969 | 0.002118 | 0.002129 |
| zip.test | RUN | 0.559645 | 1.442515 | 2.131312 | 0.002116 | 0.002178 | 0.002110 |
| zip2.test | RUN | 0.557924 | 1.391133 | 2.074040 | 0.002032 | 0.002183 | 0.001980 |
| zip_ignore.test | RUN | 0.411615 | 0.997738 | 1.420893 | 0.001732 | 0.002143 | 0.002130 |
| flatten.test | RUN | 0.383306 | 1.061235 | 1.421933 | 0.001818 | 0.002018 | 0.002206 |
| ticket-5490.test | COMPILE | 0.207933 | 0.452367 | 0.660492 | — | — | — |
| as_deque.test | RUN | 0.399372 | 1.013620 | 1.537952 | 0.001822 | 0.002063 | 0.002042 |
| as_list.test | RUN | 0.426212 | 1.277085 | 1.603755 | 0.001973 | 0.001823 | 0.001792 |
| as_map.test | RUN | 0.438960 | 1.153956 | 1.617398 | 0.001690 | 0.001971 | 0.002208 |
| as_map_assoc.test | RUN | 0.422645 | 1.151645 | 1.582751 | 0.001583 | 0.002166 | 0.002162 |
| as_set.test | RUN | 0.480778 | 1.396589 | 1.865193 | 0.001851 | 0.001887 | 0.001550 |
| as_vector.test | RUN | 0.437093 | 1.244978 | 1.650976 | 0.001656 | 0.001904 | 0.002092 |
| boost_tuple.test | RUN | 0.436368 | 1.224371 | 1.658253 | 0.001869 | 0.001740 | 0.002094 |
| boost_tuple_iterator.test | RUN | 0.295555 | 0.753242 | 1.051050 | 0.001904 | 0.001352 | 0.001975 |
| cons.test | RUN | 0.551165 | 1.400842 | 2.000436 | 0.001824 | 0.001947 | 0.002346 |
| convert_boost_tuple.test | RUN | 0.343779 | 1.059129 | 1.295272 | 0.001844 | 0.002144 | 0.001925 |
| convert_deque.test | RUN | 0.349251 | 1.030798 | 1.282989 | 0.001840 | 0.001822 | 0.002058 |
| convert_list.test | RUN | 0.350854 | 1.047380 | 1.300893 | 0.001880 | 0.001790 | 0.001917 |
| convert_std_pair.test | RUN | 0.361357 | 1.064953 | 1.302276 | 0.002070 | 0.002186 | 0.001832 |
| convert_std_tuple.test | RUN | 0.348505 | 1.031550 | 1.279446 | 0.001863 | 0.001758 | 0.001948 |
| convert_vector.test | RUN | 0.349623 | 1.053550 | 1.293252 | 0.001804 | 0.001864 | 0.002163 |
| filter_view.test | RUN | 0.416830 | 1.119652 | 1.518841 | 0.001870 | 0.002008 | 0.002148 |
| hash.test | RUN | 0.421976 | 0.997993 | 1.484683 | 0.001828 | 0.001992 | 0.002126 |
| io.test | RUN | 0.439761 | 1.393902 | 1.743800 | 0.001734 | 0.002271 | 0.001911 |
| iterator_range.test | RUN | 0.392884 | 1.068154 | 1.482989 | 0.001452 | 0.002054 | 0.001789 |
| joint_view.test | RUN | 0.525694 | 1.759061 | 2.140036 | 0.002092 | 0.001840 | 0.001856 |
| list_comparison.test | RUN | 0.311337 | 0.773042 | 1.124669 | 0.001999 | 0.001956 | 0.001650 |
| list_construction.test | RUN | 0.294239 | 0.690763 | 1.054195 | 0.001770 | 0.002006 | 0.002078 |
| list_copy.test | RUN | 0.444039 | 1.309325 | 1.768151 | 0.001930 | 0.001854 | 0.002141 |
| list_iterator.test | RUN | 0.301298 | 0.718263 | 1.020935 | 0.002018 | 0.001959 | 0.002212 |
| list_hash.test | RUN | 0.415547 | 1.356326 | 1.482382 | 0.002085 | 0.002128 | 0.002098 |
| list_make.test | RUN | 0.319546 | 0.814579 | 1.115751 | 0.002150 | 0.001828 | 0.002194 |
| list_misc.test | RUN | 0.407935 | 0.948600 | 1.316393 | 0.001998 | 0.001952 | 0.002124 |
| list_mutate.test | RUN | 0.297870 | 0.638177 | 0.952790 | 0.001710 | 0.002176 | 0.001974 |
| list_nest.test | RUN | 0.571187 | 1.781039 | 2.458559 | 0.001736 | 0.001827 | 0.001857 |
| list_tie.test | RUN | 0.303783 | 0.752278 | 0.999766 | 0.001956 | 0.002048 | 0.002144 |
| list_value_at.test | RUN | 0.304294 | 0.653835 | 1.018457 | 0.001940 | 0.002027 | 0.002076 |
| deque_comparison.test | RUN | 0.301631 | 0.791409 | 1.040161 | 0.001550 | 0.001968 | 0.001990 |
| deque_construction.test | RUN | 0.313182 | 0.708331 | 1.060663 | 0.002033 | 0.002170 | 0.001870 |
| deque_copy.test | RUN | 0.445183 | 1.206599 | 1.679034 | 0.001918 | 0.001794 | 0.002060 |
| deque_iterator.test | RUN | 0.302364 | 0.817633 | 1.016720 | 0.001923 | 0.002034 | 0.002200 |
| deque_hash.test | RUN | 0.427655 | 1.324409 | 1.528247 | 0.001757 | 0.002230 | 0.002010 |
| deque_is_constructible.test | COMPILE | 0.163731 | 0.358429 | 0.500620 | — | — | — |
| deque_make.test | RUN | 0.307488 | 0.740709 | 1.108724 | 0.001907 | 0.002140 | 0.001982 |
| deque_misc.test | RUN | 0.398747 | 0.944426 | 1.327858 | 0.001897 | 0.001972 | 0.002120 |
| deque_move.test | RUN | 0.305434 | 0.766977 | 1.030318 | 0.001884 | 0.001922 | 0.001964 |
| deque_mutate.test | RUN | 0.282193 | 0.630905 | 0.893852 | 0.002015 | 0.002095 | 0.002138 |
| deque_nest.test | RUN | 0.857645 | 2.795922 | 3.924231 | 0.001922 | 0.001918 | 0.002118 |
| deque_tie.test | RUN | 0.288516 | 0.671612 | 1.040111 | 0.001912 | 0.001747 | 0.001909 |
| deque_value_at.test | RUN | 0.302805 | 0.681574 | 0.976626 | 0.001718 | 0.001959 | 0.002028 |
| front_extended_deque.test | RUN | 0.411201 | 1.021804 | 1.434671 | 0.002062 | 0.002208 | 0.002132 |
| back_extended_deque.test | RUN | 0.415844 | 0.964419 | 1.483594 | 0.001740 | 0.001723 | 0.002062 |
| make_list.test | RUN | 0.327227 | 0.790473 | 1.093975 | 0.002020 | 0.001811 | 0.002147 |
| make_vector.test | RUN | 0.326404 | 0.829949 | 1.068639 | 0.002082 | 0.001926 | 0.002074 |
| map.test | RUN | 0.429517 | 1.194801 | 1.573869 | 0.002267 | 0.002170 | 0.001902 |
| map_comparison.test | RUN | 0.310949 | 0.770422 | 1.075997 | 0.001756 | 0.001947 | 0.002160 |
| map_construction.test | RUN | 0.319910 | 0.726690 | 1.091007 | 0.001699 | 0.001870 | 0.001669 |
| map_copy.test | RUN | 0.382470 | 0.909445 | 1.310720 | 0.001914 | 0.001937 | 0.002070 |
| map_misc.test | RUN | 0.406545 | 0.968800 | 1.339871 | 0.001932 | 0.002164 | 0.001852 |
| map_move.test | RUN | 0.315514 | 0.806219 | 1.072283 | 0.001771 | 0.001959 | 0.001808 |
| map_mutate.test | RUN | 0.290552 | 0.637147 | 0.965597 | 0.001764 | 0.001753 | 0.001882 |
| map_tie.test | RUN | 0.299286 | 0.663528 | 0.929586 | 0.001950 | 0.001810 | 0.002161 |
| nil.test | RUN | 0.200314 | 0.457766 | 0.675549 | 0.002158 | 0.002192 | 0.002142 |
| nview.test | RUN | 0.393310 | 0.914270 | 1.363701 | 0.002010 | 0.002264 | 0.002086 |
| reverse_view.test | RUN | 0.506002 | 1.518936 | 1.978499 | 0.002110 | 0.002104 | 0.002162 |
| segmented_iterator_range.test | RUN | 0.620457 | 1.811464 | 2.507609 | 0.002018 | 0.002124 | 0.002094 |
| set.test | RUN | 0.396942 | 1.023141 | 1.403496 | 0.001810 | 0.002097 | 0.002060 |
| single_view.test | RUN | 0.346663 | 0.924479 | 1.276856 | 0.002114 | 0.002196 | 0.001778 |
| std_pair.test | RUN | 0.446038 | 1.191261 | 1.628201 | 0.002165 | 0.002224 | 0.002091 |
| boost_array.test | RUN | 0.373150 | 0.836999 | 1.235111 | 0.001762 | 0.002132 | 0.001491 |
| array.test | RUN | 0.363317 | 0.836445 | 1.213140 | 0.001781 | 0.002183 | 0.001918 |
| std_array.test | RUN | 0.366159 | 0.865810 | 1.192494 | 0.002000 | 0.001594 | 0.002103 |
| tuple_comparison.test | RUN | 0.330787 | 0.797892 | 1.136171 | 0.001963 | 0.002213 | 0.001885 |
| tuple_construction.test | RUN | 0.337036 | 0.790034 | 1.152131 | 0.002168 | 0.002152 | 0.001972 |
| tuple_conversion.test | RUN | 0.741505 | 2.409266 | 3.524144 | 0.001729 | 0.002024 | 0.002112 |
| tuple_copy.test | RUN | 0.496590 | 1.384600 | 1.960857 | 0.002052 | 0.001939 | 0.001646 |
| tuple_element.test | RUN | 0.323727 | 0.756637 | 1.100471 | 0.001705 | 0.001874 | 0.002033 |
| tuple_make.test | RUN | 0.340129 | 0.854537 | 1.192781 | 0.001980 | 0.002158 | 0.002126 |
| tuple_misc.test | RUN | 0.421769 | 1.000760 | 1.449470 | 0.001821 | 0.002116 | 0.001946 |
| tuple_mutate.test | RUN | 0.295265 | 0.676185 | 1.068358 | 0.001941 | 0.001827 | 0.002000 |
| tuple_nest.test | RUN | 1.230916 | 4.686815 | 6.626728 | 0.002209 | 0.001981 | 0.002109 |
| tuple_hash.test | RUN | 0.448261 | 1.405547 | 1.652530 | 0.002120 | 0.002164 | 0.001971 |
| tuple_tie.test | RUN | 0.318756 | 0.735617 | 1.089206 | 0.001840 | 0.002212 | 0.002077 |
| tuple_traits__maybe_variadic.test | RUN | 0.346379 | 0.909262 | 1.144437 | 0.001657 | 0.001897 | 0.002043 |
| tuple_traits__no_variadic.test | RUN | 0.399248 | 0.932594 | 1.260590 | 0.002065 | 0.002193 | 0.002086 |
| transform_view.test | RUN | 0.514957 | 1.526033 | 1.968204 | 0.002173 | 0.002185 | 0.002188 |
| identity_view.test | RUN | 0.478174 | 1.390242 | 1.905139 | 0.001849 | 0.002004 | 0.001998 |
| vector_comparison.test | RUN | 0.312787 | 0.797266 | 1.075298 | 0.001973 | 0.001921 | 0.002132 |
| vector_construction.test | RUN | 0.318761 | 0.712601 | 1.130274 | 0.002000 | 0.002045 | 0.001802 |
| vector_conversion.test | RUN | 0.888921 | 3.133143 | 4.466311 | 0.002236 | 0.002180 | 0.002019 |
| vector_copy.test | RUN | 0.477460 | 1.379016 | 1.927626 | 0.001792 | 0.002177 | 0.001702 |
| vector_iterator.test | RUN | 0.320572 | 0.749058 | 1.071630 | 0.002055 | 0.001972 | 0.001713 |
| vector_make.test | RUN | 0.330162 | 0.797528 | 1.144464 | 0.001894 | 0.002074 | 0.002076 |
| vector_misc.test | RUN | 0.402436 | 0.954532 | 1.347163 | 0.001728 | 0.001779 | 0.001842 |
| vector_move.test | RUN | 0.320856 | 0.855128 | 1.059271 | 0.001888 | 0.001899 | 0.001994 |
| vector_mutate.test | RUN | 0.282666 | 0.649131 | 0.955617 | 0.001700 | 0.001890 | 0.001966 |
| vector_n.test | RUN | 0.355253 | 0.822384 | 1.270029 | 0.002110 | 0.001885 | 0.002148 |
| vector_nest.test | RUN | 1.247224 | 4.913745 | 6.709722 | 0.001927 | 0.001874 | 0.002147 |
| vector_hash.test | RUN | 0.410461 | 1.317580 | 1.471993 | 0.002040 | 0.002254 | 0.001864 |
| vector_tie.test | RUN | 0.304022 | 0.748737 | 1.057169 | 0.002099 | 0.002215 | 0.001928 |
| vector_traits__maybe_variadic.test | RUN | 0.330048 | 0.815413 | 1.110899 | 0.002128 | 0.002182 | 0.002112 |
| vector_traits__no_variadic.test | RUN | 0.361534 | 0.882743 | 1.133921 | 0.001918 | 0.002036 | 0.001914 |
| vector_value_at.test | RUN | 0.305351 | 0.684382 | 0.977809 | 0.001909 | 0.001891 | 0.001900 |
| zip_view.test | RUN | 0.610893 | 1.575348 | 2.500468 | 0.001904 | 0.001791 | 0.002073 |
| zip_view2.test | RUN | 0.505361 | 1.319159 | 1.823592 | 0.001781 | 0.002024 | 0.001950 |
| zip_view_ignore.test | RUN | 0.449656 | 1.172955 | 1.686068 | 0.001782 | 0.001810 | 0.001714 |
| repetitive_view.test | RUN | 0.759405 | 2.045086 | 3.079439 | 0.001570 | 0.002040 | 0.002120 |
| deduce_sequence.test | RUN | 0.384835 | 0.892466 | 1.289567 | 0.001647 | 0.001807 | 0.001790 |
| adapt_adt_named.test | RUN | 0.429838 | 1.212644 | 1.610431 | 0.001942 | 0.001976 | 0.002065 |
| adapt_adt_named_empty.test | RUN | 0.379508 | 0.982558 | 1.338969 | 0.001824 | 0.002188 | 0.001948 |
| adapt_adt.test | RUN | 0.487226 | 1.594765 | 1.908496 | 0.001940 | 0.001994 | 0.001511 |
| adapt_adt_empty.test | RUN | 0.373059 | 0.963706 | 1.327173 | 0.001957 | 0.002098 | 0.001965 |
| adapt_assoc_adt_named.test | RUN | 0.491160 | 1.293075 | 1.765430 | 0.001928 | 0.002199 | 0.001760 |
| adapt_assoc_adt_named_empty.test | RUN | 0.376700 | 1.008736 | 1.351738 | 0.001886 | 0.002204 | 0.002268 |
| adapt_assoc_adt.test | RUN | 0.499614 | 1.277949 | 1.859263 | 0.001783 | 0.001970 | 0.002123 |
| adapt_assoc_adt_empty.test | RUN | 0.370575 | 0.978714 | 1.271182 | 0.001917 | 0.001926 | 0.002192 |
| adapt_assoc_struct_named.test | RUN | 0.476095 | 1.245793 | 1.697410 | 0.001950 | 0.002178 | 0.002078 |
| adapt_assoc_struct_named_empty.test | RUN | 0.389387 | 0.947717 | 1.289398 | 0.001865 | 0.002148 | 0.002077 |
| adapt_assoc_struct.test | RUN | 0.436757 | 1.188157 | 1.585705 | 0.001774 | 0.002196 | 0.002271 |
| adapt_assoc_struct_empty.test | RUN | 0.370005 | 0.977256 | 1.302367 | 0.002180 | 0.001960 | 0.002142 |
| adapt_assoc_tpl_adt.test | RUN | 0.501717 | 1.359169 | 1.857786 | 0.001916 | 0.002116 | 0.002000 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.383955 | 0.966429 | 1.309235 | 0.001902 | 0.002194 | 0.002130 |
| adapt_assoc_tpl_struct.test | RUN | 0.415316 | 1.192194 | 1.524474 | 0.002055 | 0.002058 | 0.002126 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.373614 | 0.985530 | 1.324724 | 0.001989 | 0.001823 | 0.002042 |
| adapt_struct_named.test | RUN | 0.433531 | 1.183903 | 1.534237 | 0.001941 | 0.002200 | 0.001751 |
| adapt_struct_named_empty.test | RUN | 0.378593 | 0.956621 | 1.308286 | 0.001844 | 0.001984 | 0.002217 |
| adapt_struct.test | RUN | 0.458000 | 1.370281 | 1.761433 | 0.001876 | 0.002080 | 0.002146 |
| adapt_struct_empty.test | RUN | 0.370132 | 1.003998 | 1.343969 | 0.002127 | 0.001972 | 0.002115 |
| adapt_tpl_adt.test | RUN | 0.474688 | 1.508920 | 1.794163 | 0.001839 | 0.001854 | 0.002135 |
| adapt_tpl_adt_empty.test | RUN | 0.380382 | 0.969899 | 1.323591 | 0.002098 | 0.002262 | 0.002222 |
| adapt_tpl_struct.test | RUN | 0.394232 | 1.065862 | 1.428800 | 0.002012 | 0.002012 | 0.001958 |
| adapt_tpl_struct_empty.test | RUN | 0.371716 | 1.022426 | 1.318275 | 0.002168 | 0.001936 | 0.001790 |
| adt_attribute_proxy.test | RUN | 0.430726 | 0.948573 | 1.359994 | 0.001738 | 0.002146 | 0.001762 |
| define_struct.test | RUN | 0.523014 | 1.328124 | 1.829129 | 0.002086 | 0.001920 | 0.002258 |
| define_struct_empty.test | RUN | 0.445494 | 1.104267 | 1.548622 | 0.001898 | 0.002142 | 0.001725 |
| define_struct_move.test | RUN | 0.284375 | 0.648792 | 0.913517 | 0.001947 | 0.002172 | 0.002050 |
| define_struct_inline.test | RUN | 0.537818 | 1.616810 | 2.046073 | 0.002131 | 0.002004 | 0.002206 |
| define_struct_inline_empty.test | RUN | 0.451472 | 1.167359 | 1.527782 | 0.001980 | 0.001864 | 0.002065 |
| define_struct_inline_move.test | RUN | 0.300214 | 0.604224 | 0.952142 | 0.001866 | 0.002230 | 0.001976 |
| define_assoc_struct.test | RUN | 0.502127 | 1.277361 | 1.747625 | 0.002073 | 0.002239 | 0.002177 |
| define_assoc_struct_empty.test | RUN | 0.443190 | 1.079657 | 1.524670 | 0.001856 | 0.001969 | 0.001946 |
| define_assoc_struct_move.test | RUN | 0.288886 | 0.620696 | 0.907864 | 0.002067 | 0.001956 | 0.002158 |
| define_tpl_struct.test | RUN | 0.492859 | 1.313246 | 1.749166 | 0.001968 | 0.002226 | 0.002198 |
| define_tpl_struct_empty.test | RUN | 0.453883 | 1.087574 | 1.500806 | 0.002097 | 0.001973 | 0.002217 |
| define_tpl_struct_move.test | RUN | 0.302138 | 0.649731 | 0.946210 | 0.001793 | 0.001980 | 0.001892 |
| define_tpl_struct_inline.test | RUN | 0.527975 | 1.520746 | 1.920303 | 0.002211 | 0.002050 | 0.002264 |
| define_tpl_struct_inline_empty.test | RUN | 0.457770 | 1.149460 | 1.513083 | 0.001816 | 0.002023 | 0.002132 |
| define_tpl_struct_inline_move.test | RUN | 0.296284 | 0.603177 | 0.969439 | 0.002430 | 0.002158 | 0.002002 |
| define_assoc_tpl_struct.test | RUN | 0.506667 | 1.280075 | 1.786911 | 0.002058 | 0.002176 | 0.002128 |
| define_assoc_tpl_struct_empty.test | RUN | 0.452572 | 1.120849 | 1.536074 | 0.001898 | 0.002016 | 0.001745 |
| define_assoc_tpl_struct_move.test | RUN | 0.297209 | 0.631276 | 0.927645 | 0.001927 | 0.002231 | 0.002156 |
| std_tuple.test | RUN | 0.309359 | 0.726358 | 1.015213 | 0.002084 | 0.001974 | 0.001950 |
| std_tuple_iterator.test | RUN | 0.314131 | 0.770758 | 1.042753 | 0.001785 | 0.002131 | 0.002104 |
| ref_vector.test | RUN | 0.347441 | 0.761137 | 1.059801 | 0.001852 | 0.002251 | 0.002100 |
| flatten_view.test | RUN | 0.366727 | 0.955970 | 1.279994 | 0.001812 | 0.001887 | 0.002112 |
| github-159.test | COMPILE | 0.166046 | 0.344922 | 0.512829 | — | — | — |
| github-176.test | RUN | 0.337539 | 0.837316 | 1.171185 | 0.001962 | 0.001948 | 0.002096 |
| size.test | COMPILE | 0.283393 | 0.597635 | 0.899733 | — | — | — |
| fused.test | RUN | 0.399128 | 0.887781 | 1.283693 | 0.001707 | 0.002136 | 0.002254 |
| fused_function_object.test | RUN | 0.295222 | 0.702648 | 0.951975 | 0.001934 | 0.001880 | 0.002345 |
| fused_procedure.test | RUN | 0.390224 | 0.845894 | 1.244280 | 0.001791 | 0.002066 | 0.002160 |
| unfused.test | RUN | 0.310877 | 0.720723 | 1.047996 | 0.001993 | 0.001970 | 0.002158 |
| unfused_typed.test | RUN | 0.310463 | 0.744407 | 1.111879 | 0.001934 | 0.002154 | 0.002064 |
| make_fused.test | RUN | 0.403680 | 0.921046 | 1.319371 | 0.001772 | 0.001950 | 0.001707 |
| make_fused_function_object.test | RUN | 0.302616 | 0.669591 | 1.016147 | 0.001858 | 0.002234 | 0.001689 |
| make_fused_procedure.test | RUN | 0.392101 | 0.887443 | 1.324757 | 0.001984 | 0.001934 | 0.002099 |
| make_unfused.test | RUN | 0.306753 | 0.683458 | 1.051134 | 0.002059 | 0.001937 | 0.002116 |
| invoke.test | RUN | 0.786174 | 2.478178 | 3.422760 | 0.001845 | 0.002121 | 0.002213 |
| invoke_function_object.test | RUN | 0.382642 | 0.897000 | 1.290421 | 0.002008 | 0.002112 | 0.001931 |
| invoke_procedure.test | RUN | 0.615922 | 1.817105 | 2.643437 | 0.001659 | 0.001899 | 0.001909 |
| swap.test | RUN | 0.474930 | 1.140482 | 1.584683 | 0.001966 | 0.002094 | 0.001938 |
| is_sequence.test | COMPILE | 0.080931 | 0.168182 | 0.203774 | — | — | — |
| is_view.test | COMPILE | 0.077592 | 0.164002 | 0.206472 | — | — | — |
| pair_deque.test | COMPILE | 0.172306 | 0.380670 | 0.470242 | — | — | — |
| pair_list.test | COMPILE | 0.170172 | 0.356676 | 0.470554 | — | — | — |
| pair_map.test | COMPILE | 0.177647 | 0.361482 | 0.507845 | — | — | — |
| pair_set.test | COMPILE | 0.177034 | 0.367168 | 0.500124 | — | — | — |
| pair_vector.test | COMPILE | 0.172672 | 0.371279 | 0.476778 | — | — | — |
| pair_nest.test | COMPILE | 0.071392 | 0.151456 | 0.207206 | — | — | — |
| index_sequence.test | COMPILE | 0.059223 | 0.105696 | 0.150179 | — | — | — |
| and.test | COMPILE | 0.046724 | 0.079923 | 0.092188 | — | — | — |
| tag_of.test | COMPILE | 0.077840 | 0.156473 | 0.185423 | — | — | — |
| unused.test | COMPILE | 0.040893 | 0.102699 | 0.112897 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.078035 | 0.158387 | 0.185044 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.067615 | 0.114680 | 0.170154 | — | — | — |
| quick.test | RUN | 0.207759 | 0.451882 | 0.598418 | 0.000610 | 0.001385 | 0.001526 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 1.002×, 0.993× | 1.004× |
| clang | 0.997× | 0.992×, 1.002× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001335s | 0.001293s | 0.001306s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001251s | 0.001307s | 0.001308s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001294s | 0.001318s | 0.001270s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001315s | 0.001310s | 0.001308s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001312s | 0.001329s | 0.001293s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001301s | 0.001289s | 0.001315s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001324s | 0.001338s | 0.001276s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001301s | 0.001349s | 0.001301s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001290s | 0.001361s | 0.001323s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001298s | 0.001266s | 0.001309s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001281s | 0.001250s | 0.001302s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001280s | 0.001352s | 0.001318s | byte equality observed |
| adapt_assoc_tpl_adt.test | 9 | 0.001282s | 0.001345s | 0.001297s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001295s | 0.001283s | 0.001233s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001301s | 0.001314s | 0.001272s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001283s | 0.001302s | 0.001291s | byte equality observed |
| adapt_struct.test | 10 | 0.001303s | 0.001324s | 0.001350s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001264s | 0.001321s | 0.001259s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001279s | 0.001277s | 0.001261s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001273s | 0.001273s | 0.001249s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001300s | 0.001269s | 0.001291s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001317s | 0.001310s | 0.001295s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001322s | 0.001263s | 0.001293s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001346s | 0.001238s | 0.001299s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001281s | 0.001249s | 0.001241s | byte equality observed |
| all.test | 10 | 0.001248s | 0.001293s | 0.001263s | byte equality observed |
| any.test | 10 | 0.001266s | 0.001260s | 0.001276s | byte equality observed |
| array.test | 10 | 0.001220s | 0.001266s | 0.001286s | byte equality observed |
| as_deque.test | 10 | 0.001230s | 0.001222s | 0.001288s | byte equality observed |
| as_list.test | 10 | 0.001275s | 0.001271s | 0.001265s | byte equality observed |
| as_map.test | 10 | 0.001257s | 0.001281s | 0.001282s | byte equality observed |
| as_map_assoc.test | 10 | 0.001280s | 0.001343s | 0.001296s | byte equality observed |
| as_set.test | 10 | 0.001298s | 0.001314s | 0.001348s | byte equality observed |
| as_vector.test | 10 | 0.001363s | 0.001343s | 0.001308s | byte equality observed |
| back_extended_deque.test | 10 | 0.001238s | 0.001255s | 0.001244s | byte equality observed |
| boost_array.test | 10 | 0.001257s | 0.001279s | 0.001224s | byte equality observed |
| boost_tuple.test | 10 | 0.001296s | 0.001275s | 0.001274s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001322s | 0.001307s | 0.001227s | byte equality observed |
| clear.test | 10 | 0.001266s | 0.001338s | 0.001327s | byte equality observed |
| cons.test | 10 | 0.001266s | 0.001318s | 0.001333s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001246s | 0.001340s | 0.001273s | byte equality observed |
| convert_deque.test | 10 | 0.001291s | 0.001255s | 0.001271s | byte equality observed |
| convert_list.test | 10 | 0.001289s | 0.001222s | 0.001260s | byte equality observed |
| convert_std_pair.test | 10 | 0.001271s | 0.001268s | 0.001219s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001294s | 0.001288s | 0.001232s | byte equality observed |
| convert_vector.test | 10 | 0.001295s | 0.001253s | 0.001305s | byte equality observed |
| copy.test | 10 | 0.001289s | 0.001271s | 0.001253s | byte equality observed |
| count.test | 10 | 0.001244s | 0.001259s | 0.001238s | byte equality observed |
| count_if.test | 10 | 0.001252s | 0.001245s | 0.001195s | byte equality observed |
| deduce_sequence.test | 10 | 0.001229s | 0.001230s | 0.001252s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001287s | 0.001266s | 0.001245s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001285s | 0.001287s | 0.001270s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001253s | 0.001212s | 0.001250s | byte equality observed |
| define_assoc_tpl_struct.test | 8 | 0.001279s | 0.001274s | 0.001263s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001256s | 0.001248s | 0.001248s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001232s | 0.001231s | 0.001235s | byte equality observed |
| define_struct.test | 8 | 0.001298s | 0.001311s | 0.001338s | byte equality observed |
| define_struct_empty.test | 10 | 0.001270s | 0.001334s | 0.001282s | byte equality observed |
| define_struct_inline.test | 10 | 0.001263s | 0.001360s | 0.001286s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001288s | 0.001314s | 0.001303s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001254s | 0.001274s | 0.001219s | byte equality observed |
| define_struct_move.test | 10 | 0.001271s | 0.001260s | 0.001283s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001274s | 0.001287s | 0.001319s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001328s | 0.001366s | 0.001292s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001372s | 0.001290s | 0.001302s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001294s | 0.001302s | 0.001223s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001222s | 0.001271s | 0.001290s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001279s | 0.001246s | 0.001251s | byte equality observed |
| deque_comparison.test | 10 | 0.001268s | 0.001221s | 0.001284s | byte equality observed |
| deque_construction.test | 10 | 0.001269s | 0.001268s | 0.001302s | byte equality observed |
| deque_copy.test | 10 | 0.001284s | 0.001255s | 0.001276s | byte equality observed |
| deque_hash.test | 10 | 0.001280s | 0.001238s | 0.001291s | byte equality observed |
| deque_iterator.test | 10 | 0.001254s | 0.001284s | 0.001265s | byte equality observed |
| deque_make.test | 10 | 0.001279s | 0.001232s | 0.001245s | byte equality observed |
| deque_misc.test | 10 | 0.001246s | 0.001224s | 0.001252s | byte equality observed |
| deque_move.test | 10 | 0.001282s | 0.001274s | 0.001251s | byte equality observed |
| deque_mutate.test | 9 | 0.001262s | 0.001252s | 0.001314s | byte equality observed |
| deque_nest.test | 10 | 0.001273s | 0.001302s | 0.001259s | byte equality observed |
| deque_tie.test | 10 | 0.001278s | 0.001284s | 0.001242s | byte equality observed |
| deque_value_at.test | 10 | 0.001292s | 0.001222s | 0.001247s | byte equality observed |
| erase.test | 10 | 0.001277s | 0.001258s | 0.001308s | byte equality observed |
| erase_key.test | 10 | 0.001340s | 0.001319s | 0.001326s | byte equality observed |
| filter.test | 10 | 0.001323s | 0.001320s | 0.001315s | byte equality observed |
| filter_if.test | 10 | 0.001314s | 0.001268s | 0.001293s | byte equality observed |
| filter_view.test | 10 | 0.001281s | 0.001305s | 0.001296s | byte equality observed |
| find.test | 10 | 0.001361s | 0.001311s | 0.001278s | byte equality observed |
| find_if.test | 10 | 0.001324s | 0.001298s | 0.001244s | byte equality observed |
| flatten.test | 8 | 0.001291s | 0.001260s | 0.001260s | byte equality observed |
| flatten_view.test | 10 | 0.001291s | 0.001355s | 0.001330s | byte equality observed |
| fold.test | 10 | 0.001341s | 0.001300s | 0.001276s | byte equality observed |
| for_each.test | 10 | 0.001285s | 0.001331s | 0.001293s | byte equality observed |
| front_extended_deque.test | 10 | 0.001226s | 0.001237s | 0.001269s | byte equality observed |
| fused.test | 10 | 0.001270s | 0.001227s | 0.001262s | byte equality observed |
| fused_function_object.test | 10 | 0.001251s | 0.001223s | 0.001261s | byte equality observed |
| fused_procedure.test | 10 | 0.001274s | 0.001295s | 0.001262s | byte equality observed |
| github-176.test | 10 | 0.001238s | 0.001254s | 0.001258s | byte equality observed |
| hash.test | 9 | 0.001223s | 0.001288s | 0.001234s | byte equality observed |
| identity_view.test | 10 | 0.001277s | 0.001286s | 0.001279s | byte equality observed |
| insert.test | 10 | 0.001327s | 0.001258s | 0.001258s | byte equality observed |
| insert_range.test | 10 | 0.001314s | 0.001313s | 0.001250s | byte equality observed |
| invoke.test | 10 | 0.001247s | 0.001242s | 0.001298s | byte equality observed |
| invoke_function_object.test | 10 | 0.001250s | 0.001237s | 0.001250s | byte equality observed |
| invoke_procedure.test | 10 | 0.001255s | 0.001213s | 0.001283s | byte equality observed |
| io.test | 10 | 0.001439s | 0.001397s | 0.001402s | byte equality observed |
| iter_fold.test | 9 | 0.001295s | 0.001260s | 0.001282s | byte equality observed |
| iterator_range.test | 10 | 0.001287s | 0.001303s | 0.001315s | byte equality observed |
| join.test | 10 | 0.001280s | 0.001251s | 0.001230s | byte equality observed |
| joint_view.test | 10 | 0.001350s | 0.001337s | 0.001293s | byte equality observed |
| list_comparison.test | 10 | 0.001233s | 0.001216s | 0.001254s | byte equality observed |
| list_construction.test | 10 | 0.001266s | 0.001210s | 0.001248s | byte equality observed |
| list_copy.test | 10 | 0.001273s | 0.001257s | 0.001248s | byte equality observed |
| list_hash.test | 10 | 0.001268s | 0.001218s | 0.001284s | byte equality observed |
| list_iterator.test | 10 | 0.001257s | 0.001211s | 0.001255s | byte equality observed |
| list_make.test | 10 | 0.001309s | 0.001242s | 0.001252s | byte equality observed |
| list_misc.test | 10 | 0.001280s | 0.001274s | 0.001291s | byte equality observed |
| list_mutate.test | 10 | 0.001298s | 0.001232s | 0.001296s | byte equality observed |
| list_nest.test | 10 | 0.001239s | 0.001233s | 0.001243s | byte equality observed |
| list_tie.test | 10 | 0.001275s | 0.001232s | 0.001285s | byte equality observed |
| list_value_at.test | 10 | 0.001264s | 0.001230s | 0.001265s | byte equality observed |
| make_fused.test | 10 | 0.001266s | 0.001259s | 0.001264s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001292s | 0.001269s | 0.001248s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001262s | 0.001243s | 0.001196s | byte equality observed |
| make_list.test | 10 | 0.001275s | 0.001249s | 0.001222s | byte equality observed |
| make_unfused.test | 10 | 0.001231s | 0.001327s | 0.001282s | byte equality observed |
| make_vector.test | 10 | 0.001300s | 0.001259s | 0.001247s | byte equality observed |
| map.test | 10 | 0.001305s | 0.001268s | 0.001248s | byte equality observed |
| map_comparison.test | 10 | 0.001269s | 0.001211s | 0.001210s | byte equality observed |
| map_construction.test | 10 | 0.001276s | 0.001217s | 0.001226s | byte equality observed |
| map_copy.test | 10 | 0.001277s | 0.001200s | 0.001257s | byte equality observed |
| map_misc.test | 10 | 0.001279s | 0.001233s | 0.001261s | byte equality observed |
| map_move.test | 10 | 0.001269s | 0.001255s | 0.001262s | byte equality observed |
| map_mutate.test | 10 | 0.001210s | 0.001237s | 0.001271s | byte equality observed |
| map_tie.test | 10 | 0.001235s | 0.001265s | 0.001267s | byte equality observed |
| move.test | 10 | 0.001255s | 0.001328s | 0.001264s | byte equality observed |
| nil.test | 10 | 0.001259s | 0.001263s | 0.001207s | byte equality observed |
| none.test | 10 | 0.001291s | 0.001229s | 0.001215s | byte equality observed |
| nview.test | 10 | 0.001246s | 0.001266s | 0.001289s | byte equality observed |
| pop_back.test | 10 | 0.001338s | 0.001356s | 0.001278s | byte equality observed |
| pop_front.test | 10 | 0.001347s | 0.001299s | 0.001290s | byte equality observed |
| push_back.test | 10 | 0.001342s | 0.001335s | 0.001310s | byte equality observed |
| push_front.test | 10 | 0.001340s | 0.001294s | 0.001296s | byte equality observed |
| quick.test | 10 | 0.000580s | 0.001211s | 0.001202s | byte equality observed |
| ref_vector.test | 10 | 0.001260s | 0.001308s | 0.001269s | byte equality observed |
| remove.test | 10 | 0.001261s | 0.001339s | 0.001315s | byte equality observed |
| remove_if.test | 9 | 0.001288s | 0.001348s | 0.001283s | byte equality observed |
| repetitive_view.test | 10 | 0.001235s | 0.001278s | 0.001240s | byte equality observed |
| replace.test | 9 | 0.001317s | 0.001264s | 0.001299s | byte equality observed |
| replace_if.test | 10 | 0.001351s | 0.001275s | 0.001260s | byte equality observed |
| reverse.test | 10 | 0.001355s | 0.001257s | 0.001289s | byte equality observed |
| reverse_fold.test | 10 | 0.001309s | 0.001301s | 0.001317s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001321s | 0.001346s | 0.001234s | byte equality observed |
| reverse_view.test | 9 | 0.001326s | 0.001271s | 0.001264s | byte equality observed |
| segmented_find.test | 10 | 0.001268s | 0.001312s | 0.001274s | byte equality observed |
| segmented_find_if.test | 10 | 0.001231s | 0.001259s | 0.001247s | byte equality observed |
| segmented_fold.test | 10 | 0.001296s | 0.001291s | 0.001270s | byte equality observed |
| segmented_for_each.test | 10 | 0.001293s | 0.001261s | 0.001276s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001344s | 0.001282s | 0.001289s | byte equality observed |
| set.test | 10 | 0.001313s | 0.001254s | 0.001323s | byte equality observed |
| single_view.test | 10 | 0.001281s | 0.001254s | 0.001268s | byte equality observed |
| std_array.test | 10 | 0.001235s | 0.001235s | 0.001323s | byte equality observed |
| std_pair.test | 10 | 0.001304s | 0.001295s | 0.001259s | byte equality observed |
| std_tuple.test | 10 | 0.001258s | 0.001263s | 0.001251s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001233s | 0.001307s | 0.001233s | byte equality observed |
| swap.test | 10 | 0.001297s | 0.001304s | 0.001232s | byte equality observed |
| transform.test | 10 | 0.001260s | 0.001295s | 0.001264s | byte equality observed |
| transform_view.test | 10 | 0.001287s | 0.001310s | 0.001287s | byte equality observed |
| tuple_comparison.test | 8 | 0.001258s | 0.001273s | 0.001273s | byte equality observed |
| tuple_construction.test | 10 | 0.001236s | 0.001270s | 0.001283s | byte equality observed |
| tuple_conversion.test | 10 | 0.001260s | 0.001267s | 0.001287s | byte equality observed |
| tuple_copy.test | 10 | 0.001243s | 0.001311s | 0.001256s | byte equality observed |
| tuple_element.test | 10 | 0.001285s | 0.001236s | 0.001244s | byte equality observed |
| tuple_hash.test | 10 | 0.001297s | 0.001256s | 0.001272s | byte equality observed |
| tuple_make.test | 10 | 0.001262s | 0.001285s | 0.001297s | byte equality observed |
| tuple_misc.test | 10 | 0.001266s | 0.001237s | 0.001222s | byte equality observed |
| tuple_mutate.test | 9 | 0.001249s | 0.001211s | 0.001272s | byte equality observed |
| tuple_nest.test | 10 | 0.001246s | 0.001268s | 0.001251s | byte equality observed |
| tuple_tie.test | 10 | 0.001288s | 0.001280s | 0.001278s | byte equality observed |
| tuple_traits__maybe_variadic.test | 9 | 0.001252s | 0.001266s | 0.001250s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001241s | 0.001223s | 0.001255s | byte equality observed |
| unfused.test | 9 | 0.001254s | 0.001258s | 0.001215s | byte equality observed |
| unfused_typed.test | 10 | 0.001235s | 0.001256s | 0.001213s | byte equality observed |
| vector_comparison.test | 10 | 0.001286s | 0.001256s | 0.001241s | byte equality observed |
| vector_construction.test | 6 | 0.001267s | 0.001285s | 0.001243s | byte equality observed |
| vector_conversion.test | 10 | 0.001261s | 0.001253s | 0.001302s | byte equality observed |
| vector_copy.test | 10 | 0.001248s | 0.001238s | 0.001249s | byte equality observed |
| vector_hash.test | 10 | 0.001245s | 0.001245s | 0.001208s | byte equality observed |
| vector_iterator.test | 10 | 0.001235s | 0.001239s | 0.001199s | byte equality observed |
| vector_make.test | 10 | 0.001256s | 0.001249s | 0.001247s | byte equality observed |
| vector_misc.test | 10 | 0.001295s | 0.001270s | 0.001230s | byte equality observed |
| vector_move.test | 10 | 0.001251s | 0.001274s | 0.001212s | byte equality observed |
| vector_mutate.test | 10 | 0.001287s | 0.001270s | 0.001196s | byte equality observed |
| vector_n.test | 10 | 0.001261s | 0.001293s | 0.001275s | byte equality observed |
| vector_nest.test | 10 | 0.001247s | 0.001285s | 0.001240s | byte equality observed |
| vector_tie.test | 10 | 0.001250s | 0.001251s | 0.001329s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001300s | 0.001278s | 0.001236s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001266s | 0.001271s | 0.001249s | byte equality observed |
| vector_value_at.test | 10 | 0.001231s | 0.001217s | 0.001305s | byte equality observed |
| zip.test | 10 | 0.001218s | 0.001225s | 0.001282s | byte equality observed |
| zip2.test | 10 | 0.001242s | 0.001204s | 0.001239s | byte equality observed |
| zip_ignore.test | 8 | 0.001237s | 0.001224s | 0.001261s | byte equality observed |
| zip_view.test | 10 | 0.001258s | 0.001261s | 0.001250s | byte equality observed |
| zip_view2.test | 10 | 0.001244s | 0.001266s | 0.001243s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001236s | 0.001219s | 0.001249s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
