# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.461698 | 1.051122 | 1.601486 | 0.002130 | 0.001968 | 0.001798 |
| any.test | RUN | 0.449694 | 0.997367 | 1.501240 | 0.001537 | 0.001999 | 0.002134 |
| clear.test | RUN | 0.340447 | 0.888274 | 1.204976 | 0.001782 | 0.001785 | 0.002147 |
| copy.test | RUN | 0.289440 | 0.672671 | 1.001266 | 0.001714 | 0.002281 | 0.002119 |
| count.test | RUN | 0.331091 | 0.761555 | 1.087188 | 0.002174 | 0.002210 | 0.002085 |
| count_if.test | RUN | 0.303841 | 0.686905 | 1.011801 | 0.001924 | 0.002294 | 0.002042 |
| erase.test | RUN | 0.443852 | 1.236233 | 1.592668 | 0.001784 | 0.002321 | 0.001995 |
| erase_key.test | RUN | 0.416405 | 1.227023 | 1.546639 | 0.002006 | 0.002268 | 0.002103 |
| filter.test | RUN | 0.384795 | 1.019534 | 1.373231 | 0.001961 | 0.002220 | 0.002047 |
| filter_if.test | RUN | 0.415978 | 1.219275 | 1.651203 | 0.001974 | 0.002149 | 0.002152 |
| find.test | RUN | 0.371984 | 0.848750 | 1.251942 | 0.001877 | 0.002146 | 0.002008 |
| find_if.test | RUN | 0.350934 | 0.788775 | 1.159938 | 0.002047 | 0.001922 | 0.001823 |
| fold.test | RUN | 0.386606 | 0.980039 | 1.400666 | 0.001872 | 0.002180 | 0.002081 |
| for_each.test | RUN | 0.341003 | 0.893076 | 1.222086 | 0.002191 | 0.002308 | 0.002131 |
| insert.test | RUN | 0.502357 | 1.506250 | 1.946456 | 0.002137 | 0.002005 | 0.001850 |
| insert_range.test | RUN | 0.505856 | 1.527842 | 1.936059 | 0.002002 | 0.002104 | 0.001968 |
| iter_fold.test | RUN | 0.600611 | 1.476377 | 2.296855 | 0.002014 | 0.002270 | 0.002330 |
| move.test | RUN | 0.297634 | 0.721586 | 0.997289 | 0.002152 | 0.002068 | 0.001888 |
| none.test | RUN | 0.477790 | 1.009239 | 1.610626 | 0.001715 | 0.002086 | 0.001754 |
| pop_back.test | RUN | 0.461253 | 1.335477 | 1.774780 | 0.001985 | 0.002174 | 0.002178 |
| pop_front.test | RUN | 0.378881 | 1.069021 | 1.439495 | 0.002170 | 0.002380 | 0.001779 |
| push_back.test | RUN | 0.497670 | 1.569426 | 1.901483 | 0.002288 | 0.002148 | 0.002410 |
| push_front.test | RUN | 0.434551 | 1.278330 | 1.598417 | 0.002089 | 0.002152 | 0.002153 |
| remove.test | RUN | 0.486360 | 1.418224 | 1.913615 | 0.001976 | 0.002203 | 0.001860 |
| remove_if.test | RUN | 0.431880 | 1.201213 | 1.642595 | 0.001918 | 0.002160 | 0.002072 |
| replace.test | RUN | 0.412069 | 1.169054 | 1.512310 | 0.002290 | 0.002252 | 0.002168 |
| replace_if.test | RUN | 0.407804 | 1.198165 | 1.449555 | 0.001993 | 0.002150 | 0.002392 |
| reverse_fold.test | RUN | 0.655416 | 1.653407 | 2.580674 | 0.002149 | 0.002276 | 0.001909 |
| reverse_iter_fold.test | RUN | 0.674995 | 1.715722 | 2.683161 | 0.002202 | 0.002161 | 0.001999 |
| reverse.test | RUN | 0.413428 | 1.183501 | 1.496540 | 0.002186 | 0.002388 | 0.001911 |
| segmented_for_each.test | RUN | 0.705702 | 2.283615 | 3.085628 | 0.002200 | 0.002119 | 0.001845 |
| segmented_find.test | RUN | 0.451020 | 1.215436 | 1.767563 | 0.001893 | 0.001950 | 0.001710 |
| segmented_find_if.test | RUN | 0.449346 | 1.221581 | 1.765315 | 0.002072 | 0.002295 | 0.001833 |
| segmented_fold.test | RUN | 0.550449 | 1.613865 | 2.190700 | 0.002207 | 0.002277 | 0.002066 |
| transform.test | RUN | 0.425900 | 1.265157 | 1.631597 | 0.001779 | 0.002314 | 0.002212 |
| join.test | RUN | 0.322661 | 0.762522 | 1.180065 | 0.001935 | 0.002022 | 0.002054 |
| zip.test | RUN | 0.564585 | 1.511262 | 2.101042 | 0.002593 | 0.002305 | 0.002308 |
| zip2.test | RUN | 0.574196 | 1.399112 | 2.054496 | 0.001951 | 0.001766 | 0.002164 |
| zip_ignore.test | RUN | 0.415714 | 1.007324 | 1.411867 | 0.001940 | 0.001882 | 0.001878 |
| flatten.test | RUN | 0.386492 | 1.078481 | 1.369569 | 0.001842 | 0.002300 | 0.002092 |
| ticket-5490.test | COMPILE | 0.210152 | 0.486013 | 0.649762 | — | — | — |
| as_deque.test | RUN | 0.395113 | 1.016364 | 1.520085 | 0.002020 | 0.002110 | 0.002170 |
| as_list.test | RUN | 0.438089 | 1.254431 | 1.623243 | 0.001926 | 0.002240 | 0.001656 |
| as_map.test | RUN | 0.424845 | 1.235915 | 1.581233 | 0.001803 | 0.002216 | 0.002026 |
| as_map_assoc.test | RUN | 0.417403 | 1.162879 | 1.531982 | 0.001579 | 0.002103 | 0.001956 |
| as_set.test | RUN | 0.495731 | 1.429528 | 1.813623 | 0.001539 | 0.001966 | 0.002240 |
| as_vector.test | RUN | 0.429384 | 1.304263 | 1.647259 | 0.002044 | 0.001988 | 0.002122 |
| boost_tuple.test | RUN | 0.447386 | 1.234889 | 1.640868 | 0.001808 | 0.002058 | 0.001735 |
| boost_tuple_iterator.test | RUN | 0.298088 | 0.741593 | 1.053826 | 0.001925 | 0.001998 | 0.001718 |
| cons.test | RUN | 0.542432 | 1.409443 | 1.991530 | 0.001685 | 0.002156 | 0.002089 |
| convert_boost_tuple.test | RUN | 0.346900 | 1.072385 | 1.240544 | 0.001986 | 0.002018 | 0.001944 |
| convert_deque.test | RUN | 0.347578 | 1.072160 | 1.282023 | 0.001741 | 0.001992 | 0.001922 |
| convert_list.test | RUN | 0.341896 | 1.107704 | 1.309855 | 0.001654 | 0.001888 | 0.001986 |
| convert_std_pair.test | RUN | 0.365458 | 1.076720 | 1.293452 | 0.001780 | 0.002200 | 0.002007 |
| convert_std_tuple.test | RUN | 0.339726 | 1.063190 | 1.283015 | 0.001618 | 0.002064 | 0.001908 |
| convert_vector.test | RUN | 0.342369 | 1.080650 | 1.262834 | 0.001984 | 0.001938 | 0.001831 |
| filter_view.test | RUN | 0.423972 | 1.139951 | 1.543011 | 0.002107 | 0.001971 | 0.002189 |
| hash.test | RUN | 0.417405 | 1.021148 | 1.466470 | 0.001795 | 0.002280 | 0.002011 |
| io.test | RUN | 0.422440 | 1.416916 | 1.716984 | 0.001641 | 0.002568 | 0.002435 |
| iterator_range.test | RUN | 0.386968 | 1.103868 | 1.477438 | 0.002100 | 0.002226 | 0.002212 |
| joint_view.test | RUN | 0.532390 | 1.802195 | 2.086576 | 0.002142 | 0.002063 | 0.002281 |
| list_comparison.test | RUN | 0.310197 | 0.750238 | 1.101300 | 0.001980 | 0.002157 | 0.001766 |
| list_construction.test | RUN | 0.308592 | 0.729973 | 1.023779 | 0.001754 | 0.002028 | 0.001856 |
| list_copy.test | RUN | 0.463426 | 1.322973 | 1.796997 | 0.001873 | 0.002168 | 0.001701 |
| list_iterator.test | RUN | 0.301244 | 0.728757 | 1.033569 | 0.001927 | 0.002239 | 0.001706 |
| list_hash.test | RUN | 0.414898 | 1.417929 | 1.514503 | 0.001956 | 0.002197 | 0.002246 |
| list_make.test | RUN | 0.323468 | 0.831698 | 1.160549 | 0.001962 | 0.001823 | 0.002129 |
| list_misc.test | RUN | 0.412283 | 0.961211 | 1.359494 | 0.002116 | 0.002033 | 0.002068 |
| list_mutate.test | RUN | 0.289278 | 0.624352 | 0.955335 | 0.001768 | 0.002119 | 0.002161 |
| list_nest.test | RUN | 0.575671 | 1.803756 | 2.426715 | 0.001848 | 0.002198 | 0.001891 |
| list_tie.test | RUN | 0.302675 | 0.724375 | 1.037547 | 0.001981 | 0.002316 | 0.002238 |
| list_value_at.test | RUN | 0.293068 | 0.711492 | 0.927880 | 0.001890 | 0.002251 | 0.001903 |
| deque_comparison.test | RUN | 0.308182 | 0.765587 | 1.112190 | 0.001608 | 0.002036 | 0.001968 |
| deque_construction.test | RUN | 0.309152 | 0.731891 | 1.023942 | 0.002096 | 0.002030 | 0.002036 |
| deque_copy.test | RUN | 0.429600 | 1.239768 | 1.665726 | 0.001637 | 0.001829 | 0.002040 |
| deque_iterator.test | RUN | 0.294500 | 0.830765 | 1.055988 | 0.001838 | 0.001935 | 0.002038 |
| deque_hash.test | RUN | 0.423270 | 1.329505 | 1.448824 | 0.001797 | 0.002287 | 0.001914 |
| deque_is_constructible.test | COMPILE | 0.165045 | 0.361163 | 0.465753 | — | — | — |
| deque_make.test | RUN | 0.310986 | 0.770134 | 1.067308 | 0.001940 | 0.002262 | 0.002012 |
| deque_misc.test | RUN | 0.407333 | 0.925522 | 1.365778 | 0.002156 | 0.001968 | 0.001874 |
| deque_move.test | RUN | 0.310009 | 0.823129 | 0.978623 | 0.001902 | 0.002172 | 0.002167 |
| deque_mutate.test | RUN | 0.288283 | 0.653990 | 0.959115 | 0.001626 | 0.002182 | 0.001976 |
| deque_nest.test | RUN | 0.861100 | 2.885159 | 3.865565 | 0.001922 | 0.001958 | 0.001890 |
| deque_tie.test | RUN | 0.296060 | 0.685907 | 1.018880 | 0.001764 | 0.002011 | 0.002066 |
| deque_value_at.test | RUN | 0.284846 | 0.681363 | 0.947009 | 0.001848 | 0.001866 | 0.001970 |
| front_extended_deque.test | RUN | 0.408989 | 1.043076 | 1.431312 | 0.002002 | 0.002334 | 0.002094 |
| back_extended_deque.test | RUN | 0.426775 | 0.997255 | 1.378306 | 0.002026 | 0.002028 | 0.002023 |
| make_list.test | RUN | 0.325298 | 0.804512 | 1.148354 | 0.001909 | 0.002105 | 0.001847 |
| make_vector.test | RUN | 0.323371 | 0.843207 | 1.055610 | 0.001817 | 0.001864 | 0.002018 |
| map.test | RUN | 0.407904 | 1.211744 | 1.558657 | 0.001848 | 0.002362 | 0.001894 |
| map_comparison.test | RUN | 0.322069 | 0.811884 | 1.073032 | 0.001899 | 0.002067 | 0.001960 |
| map_construction.test | RUN | 0.324434 | 0.743451 | 1.060587 | 0.002124 | 0.001971 | 0.001831 |
| map_copy.test | RUN | 0.381059 | 0.959045 | 1.319742 | 0.001996 | 0.002276 | 0.002069 |
| map_misc.test | RUN | 0.398764 | 0.988809 | 1.310919 | 0.001876 | 0.002251 | 0.002006 |
| map_move.test | RUN | 0.311922 | 0.801710 | 1.093153 | 0.002126 | 0.001873 | 0.001851 |
| map_mutate.test | RUN | 0.289515 | 0.684681 | 0.937145 | 0.001892 | 0.002069 | 0.001633 |
| map_tie.test | RUN | 0.298387 | 0.664421 | 0.916795 | 0.002032 | 0.002101 | 0.002158 |
| nil.test | RUN | 0.204246 | 0.463570 | 0.692664 | 0.002188 | 0.002312 | 0.002104 |
| nview.test | RUN | 0.390826 | 0.968801 | 1.363854 | 0.002075 | 0.002245 | 0.002289 |
| reverse_view.test | RUN | 0.509560 | 1.584869 | 1.970732 | 0.002156 | 0.001956 | 0.002340 |
| segmented_iterator_range.test | RUN | 0.603224 | 1.868251 | 2.487752 | 0.002302 | 0.001904 | 0.001876 |
| set.test | RUN | 0.383745 | 1.088515 | 1.397120 | 0.001849 | 0.001882 | 0.002194 |
| single_view.test | RUN | 0.351404 | 1.004791 | 1.258652 | 0.002246 | 0.002155 | 0.001703 |
| std_pair.test | RUN | 0.447623 | 1.205481 | 1.624203 | 0.002120 | 0.002194 | 0.001803 |
| boost_array.test | RUN | 0.382997 | 0.868374 | 1.266495 | 0.001918 | 0.002118 | 0.002063 |
| array.test | RUN | 0.371676 | 0.845837 | 1.187826 | 0.001820 | 0.002358 | 0.001865 |
| std_array.test | RUN | 0.386964 | 0.845922 | 1.220158 | 0.002135 | 0.002068 | 0.002010 |
| tuple_comparison.test | RUN | 0.326964 | 0.803937 | 1.132963 | 0.001848 | 0.002222 | 0.001894 |
| tuple_construction.test | RUN | 0.342814 | 0.812276 | 1.150122 | 0.002165 | 0.002409 | 0.001867 |
| tuple_conversion.test | RUN | 0.735265 | 2.477778 | 3.535969 | 0.001734 | 0.002276 | 0.001750 |
| tuple_copy.test | RUN | 0.478800 | 1.442825 | 1.937882 | 0.001900 | 0.002150 | 0.001970 |
| tuple_element.test | RUN | 0.316857 | 0.772534 | 1.096005 | 0.001788 | 0.001782 | 0.002004 |
| tuple_make.test | RUN | 0.349748 | 0.886889 | 1.187517 | 0.001609 | 0.002226 | 0.001894 |
| tuple_misc.test | RUN | 0.426129 | 1.028481 | 1.392927 | 0.001956 | 0.002070 | 0.001994 |
| tuple_mutate.test | RUN | 0.304470 | 0.677344 | 1.062318 | 0.001900 | 0.001868 | 0.001529 |
| tuple_nest.test | RUN | 1.244384 | 4.808566 | 6.584566 | 0.001946 | 0.001980 | 0.002099 |
| tuple_hash.test | RUN | 0.442941 | 1.424175 | 1.574592 | 0.002142 | 0.002002 | 0.002026 |
| tuple_tie.test | RUN | 0.317811 | 0.772122 | 1.083539 | 0.002024 | 0.002136 | 0.001993 |
| tuple_traits__maybe_variadic.test | RUN | 0.362200 | 0.947767 | 1.180253 | 0.002122 | 0.002152 | 0.001672 |
| tuple_traits__no_variadic.test | RUN | 0.394467 | 0.975263 | 1.263720 | 0.001732 | 0.002228 | 0.002106 |
| transform_view.test | RUN | 0.510942 | 1.578928 | 1.961781 | 0.001968 | 0.002085 | 0.002276 |
| identity_view.test | RUN | 0.475650 | 1.496211 | 1.884624 | 0.001759 | 0.002124 | 0.001922 |
| vector_comparison.test | RUN | 0.323627 | 0.807136 | 1.049448 | 0.001965 | 0.001972 | 0.002186 |
| vector_construction.test | RUN | 0.311036 | 0.745693 | 1.122750 | 0.001878 | 0.002252 | 0.001833 |
| vector_conversion.test | RUN | 0.906558 | 3.227288 | 4.510304 | 0.002000 | 0.002054 | 0.002110 |
| vector_copy.test | RUN | 0.468056 | 1.375421 | 1.913361 | 0.001771 | 0.002321 | 0.002084 |
| vector_iterator.test | RUN | 0.320597 | 0.807634 | 1.074720 | 0.001908 | 0.001994 | 0.002200 |
| vector_make.test | RUN | 0.324369 | 0.801633 | 1.091337 | 0.001928 | 0.002128 | 0.002166 |
| vector_misc.test | RUN | 0.404333 | 0.966488 | 1.359183 | 0.002056 | 0.001958 | 0.001574 |
| vector_move.test | RUN | 0.323303 | 0.819307 | 1.066364 | 0.001855 | 0.001968 | 0.002192 |
| vector_mutate.test | RUN | 0.278100 | 0.713067 | 0.962017 | 0.001910 | 0.002359 | 0.001908 |
| vector_n.test | RUN | 0.359376 | 0.848156 | 1.246810 | 0.002215 | 0.002206 | 0.002164 |
| vector_nest.test | RUN | 1.253479 | 5.110593 | 6.689619 | 0.002046 | 0.001932 | 0.001856 |
| vector_hash.test | RUN | 0.419960 | 1.360337 | 1.505681 | 0.001899 | 0.002303 | 0.002122 |
| vector_tie.test | RUN | 0.306875 | 0.763390 | 1.038285 | 0.002170 | 0.002329 | 0.002001 |
| vector_traits__maybe_variadic.test | RUN | 0.332729 | 0.832061 | 1.047289 | 0.002192 | 0.002268 | 0.002154 |
| vector_traits__no_variadic.test | RUN | 0.361406 | 0.903316 | 1.202689 | 0.001949 | 0.002017 | 0.001936 |
| vector_value_at.test | RUN | 0.301233 | 0.692869 | 0.958583 | 0.001806 | 0.002249 | 0.002075 |
| zip_view.test | RUN | 0.622636 | 1.621400 | 2.390549 | 0.001930 | 0.001898 | 0.001925 |
| zip_view2.test | RUN | 0.505811 | 1.371226 | 1.860124 | 0.001872 | 0.002274 | 0.001287 |
| zip_view_ignore.test | RUN | 0.452452 | 1.193701 | 1.701982 | 0.001920 | 0.001906 | 0.002186 |
| repetitive_view.test | RUN | 0.757994 | 2.145272 | 3.073846 | 0.002160 | 0.001896 | 0.002008 |
| deduce_sequence.test | RUN | 0.366681 | 0.885748 | 1.281905 | 0.001899 | 0.002131 | 0.002040 |
| adapt_adt_named.test | RUN | 0.438743 | 1.270817 | 1.600621 | 0.001912 | 0.002296 | 0.002089 |
| adapt_adt_named_empty.test | RUN | 0.383405 | 1.017340 | 1.296363 | 0.002020 | 0.002140 | 0.002232 |
| adapt_adt.test | RUN | 0.504894 | 1.607276 | 1.954333 | 0.001494 | 0.001919 | 0.002190 |
| adapt_adt_empty.test | RUN | 0.372402 | 1.043705 | 1.275281 | 0.002195 | 0.001958 | 0.002090 |
| adapt_assoc_adt_named.test | RUN | 0.514224 | 1.270554 | 1.715263 | 0.002002 | 0.002058 | 0.002232 |
| adapt_assoc_adt_named_empty.test | RUN | 0.373357 | 1.006314 | 1.288933 | 0.001999 | 0.001953 | 0.002076 |
| adapt_assoc_adt.test | RUN | 0.511496 | 1.323873 | 1.806904 | 0.001844 | 0.002028 | 0.002084 |
| adapt_assoc_adt_empty.test | RUN | 0.378583 | 0.979403 | 1.283259 | 0.002182 | 0.002248 | 0.002104 |
| adapt_assoc_struct_named.test | RUN | 0.488797 | 1.296434 | 1.690590 | 0.001902 | 0.002096 | 0.002004 |
| adapt_assoc_struct_named_empty.test | RUN | 0.393570 | 1.015881 | 1.292395 | 0.001948 | 0.001781 | 0.002146 |
| adapt_assoc_struct.test | RUN | 0.433597 | 1.213953 | 1.584939 | 0.001908 | 0.002080 | 0.002112 |
| adapt_assoc_struct_empty.test | RUN | 0.381901 | 1.043714 | 1.289400 | 0.001919 | 0.002028 | 0.001947 |
| adapt_assoc_tpl_adt.test | RUN | 0.515933 | 1.368504 | 1.827967 | 0.001905 | 0.002022 | 0.002170 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.393944 | 1.007167 | 1.312641 | 0.001893 | 0.002152 | 0.002079 |
| adapt_assoc_tpl_struct.test | RUN | 0.418599 | 1.171111 | 1.537089 | 0.001898 | 0.002236 | 0.001695 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.378386 | 1.015690 | 1.312561 | 0.001873 | 0.002032 | 0.001833 |
| adapt_struct_named.test | RUN | 0.429590 | 1.199246 | 1.516337 | 0.002092 | 0.001910 | 0.002173 |
| adapt_struct_named_empty.test | RUN | 0.383668 | 1.006032 | 1.309109 | 0.001890 | 0.002109 | 0.001860 |
| adapt_struct.test | RUN | 0.468912 | 1.374233 | 1.753618 | 0.001986 | 0.002240 | 0.002010 |
| adapt_struct_empty.test | RUN | 0.380394 | 1.010077 | 1.267853 | 0.002078 | 0.002265 | 0.002070 |
| adapt_tpl_adt.test | RUN | 0.498261 | 1.557004 | 1.853558 | 0.002195 | 0.002358 | 0.002002 |
| adapt_tpl_adt_empty.test | RUN | 0.383442 | 0.997294 | 1.306539 | 0.002014 | 0.002291 | 0.001946 |
| adapt_tpl_struct.test | RUN | 0.410522 | 1.108774 | 1.411162 | 0.002086 | 0.002226 | 0.002158 |
| adapt_tpl_struct_empty.test | RUN | 0.390300 | 1.046259 | 1.309803 | 0.002014 | 0.002070 | 0.002232 |
| adt_attribute_proxy.test | RUN | 0.434199 | 0.975237 | 1.389952 | 0.002024 | 0.002197 | 0.002001 |
| define_struct.test | RUN | 0.527852 | 1.380998 | 1.794804 | 0.001946 | 0.002286 | 0.001958 |
| define_struct_empty.test | RUN | 0.452512 | 1.103963 | 1.471543 | 0.002164 | 0.002206 | 0.001912 |
| define_struct_move.test | RUN | 0.307041 | 0.645955 | 0.938941 | 0.001370 | 0.002122 | 0.002260 |
| define_struct_inline.test | RUN | 0.560737 | 1.639038 | 2.063114 | 0.001957 | 0.001821 | 0.002142 |
| define_struct_inline_empty.test | RUN | 0.460322 | 1.130832 | 1.469365 | 0.001919 | 0.002028 | 0.002124 |
| define_struct_inline_move.test | RUN | 0.292886 | 0.669495 | 0.946711 | 0.002142 | 0.001998 | 0.002060 |
| define_assoc_struct.test | RUN | 0.508985 | 1.300829 | 1.712886 | 0.002186 | 0.002239 | 0.002072 |
| define_assoc_struct_empty.test | RUN | 0.458598 | 1.118907 | 1.495197 | 0.001768 | 0.002162 | 0.001950 |
| define_assoc_struct_move.test | RUN | 0.291444 | 0.643764 | 0.934006 | 0.001894 | 0.002132 | 0.002092 |
| define_tpl_struct.test | RUN | 0.497968 | 1.309445 | 1.734380 | 0.001969 | 0.002306 | 0.001965 |
| define_tpl_struct_empty.test | RUN | 0.464048 | 1.166239 | 1.520528 | 0.002066 | 0.002348 | 0.001922 |
| define_tpl_struct_move.test | RUN | 0.297593 | 0.637465 | 0.913560 | 0.002012 | 0.002277 | 0.001692 |
| define_tpl_struct_inline.test | RUN | 0.535318 | 1.552187 | 1.899148 | 0.002083 | 0.001910 | 0.001959 |
| define_tpl_struct_inline_empty.test | RUN | 0.461547 | 1.119233 | 1.516910 | 0.001738 | 0.001822 | 0.002061 |
| define_tpl_struct_inline_move.test | RUN | 0.304558 | 0.669026 | 0.944139 | 0.002014 | 0.002321 | 0.002140 |
| define_assoc_tpl_struct.test | RUN | 0.493841 | 1.335334 | 1.781337 | 0.002016 | 0.002316 | 0.002090 |
| define_assoc_tpl_struct_empty.test | RUN | 0.459590 | 1.162122 | 1.534000 | 0.001792 | 0.002118 | 0.001897 |
| define_assoc_tpl_struct_move.test | RUN | 0.299206 | 0.649157 | 0.934283 | 0.002018 | 0.001915 | 0.002167 |
| std_tuple.test | RUN | 0.301109 | 0.715405 | 1.045022 | 0.001717 | 0.001886 | 0.001696 |
| std_tuple_iterator.test | RUN | 0.309217 | 0.782127 | 1.033692 | 0.001759 | 0.001691 | 0.002060 |
| ref_vector.test | RUN | 0.338158 | 0.774491 | 1.101406 | 0.001964 | 0.002172 | 0.002090 |
| flatten_view.test | RUN | 0.357163 | 0.963926 | 1.313833 | 0.001829 | 0.002244 | 0.002018 |
| github-159.test | COMPILE | 0.161433 | 0.369451 | 0.500156 | — | — | — |
| github-176.test | RUN | 0.335130 | 0.840478 | 1.086277 | 0.002081 | 0.002000 | 0.001870 |
| size.test | COMPILE | 0.285937 | 0.590077 | 0.886151 | — | — | — |
| fused.test | RUN | 0.404693 | 0.934147 | 1.307795 | 0.001894 | 0.001957 | 0.002106 |
| fused_function_object.test | RUN | 0.294588 | 0.720482 | 1.003928 | 0.002097 | 0.002172 | 0.002100 |
| fused_procedure.test | RUN | 0.387311 | 0.864175 | 1.270099 | 0.001751 | 0.002062 | 0.001988 |
| unfused.test | RUN | 0.312827 | 0.731634 | 0.989497 | 0.001853 | 0.001993 | 0.002142 |
| unfused_typed.test | RUN | 0.316462 | 0.774555 | 1.052982 | 0.001861 | 0.002065 | 0.002134 |
| make_fused.test | RUN | 0.398412 | 0.930791 | 1.309803 | 0.001724 | 0.002026 | 0.002138 |
| make_fused_function_object.test | RUN | 0.299652 | 0.689032 | 0.981012 | 0.002038 | 0.002390 | 0.001892 |
| make_fused_procedure.test | RUN | 0.397276 | 0.895737 | 1.271684 | 0.002100 | 0.002375 | 0.002138 |
| make_unfused.test | RUN | 0.311223 | 0.697539 | 0.992852 | 0.002102 | 0.002182 | 0.002224 |
| invoke.test | RUN | 0.787167 | 2.554135 | 3.364276 | 0.001812 | 0.001921 | 0.001735 |
| invoke_function_object.test | RUN | 0.369317 | 0.883323 | 1.297441 | 0.002120 | 0.002264 | 0.002153 |
| invoke_procedure.test | RUN | 0.645791 | 1.879004 | 2.546609 | 0.001783 | 0.002149 | 0.001994 |
| swap.test | RUN | 0.489957 | 1.199593 | 1.677218 | 0.001796 | 0.002080 | 0.002098 |
| is_sequence.test | COMPILE | 0.081544 | 0.170635 | 0.206598 | — | — | — |
| is_view.test | COMPILE | 0.078133 | 0.167482 | 0.198190 | — | — | — |
| pair_deque.test | COMPILE | 0.171332 | 0.386532 | 0.524290 | — | — | — |
| pair_list.test | COMPILE | 0.168186 | 0.357561 | 0.522609 | — | — | — |
| pair_map.test | COMPILE | 0.176773 | 0.376294 | 0.480885 | — | — | — |
| pair_set.test | COMPILE | 0.182905 | 0.374491 | 0.468904 | — | — | — |
| pair_vector.test | COMPILE | 0.172824 | 0.373860 | 0.497290 | — | — | — |
| pair_nest.test | COMPILE | 0.069603 | 0.153744 | 0.199299 | — | — | — |
| index_sequence.test | COMPILE | 0.060092 | 0.106324 | 0.142351 | — | — | — |
| and.test | COMPILE | 0.046425 | 0.082286 | 0.098378 | — | — | — |
| tag_of.test | COMPILE | 0.080529 | 0.162305 | 0.184004 | — | — | — |
| unused.test | COMPILE | 0.042278 | 0.105797 | 0.123480 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.075515 | 0.127111 | 0.192702 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.059435 | 0.142936 | 0.126932 | — | — | — |
| quick.test | RUN | 0.211067 | 0.461572 | 0.575778 | 0.000727 | 0.001708 | 0.001371 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.995×, 0.999× | 1.004× |
| clang | 1.004× | 1.009×, 0.999× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001286s | 0.001293s | 0.001265s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001315s | 0.001255s | 0.001275s | byte equality observed |
| adapt_adt_named.test | 9 | 0.001301s | 0.001244s | 0.001300s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001300s | 0.001298s | 0.001253s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001300s | 0.001302s | 0.001291s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001276s | 0.001258s | 0.001319s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001278s | 0.001286s | 0.001254s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001299s | 0.001342s | 0.001290s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001274s | 0.001283s | 0.001292s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001272s | 0.001318s | 0.001290s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001323s | 0.001344s | 0.001295s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001281s | 0.001240s | 0.001334s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001342s | 0.001292s | 0.001336s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001314s | 0.001258s | 0.001280s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001290s | 0.001313s | 0.001264s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001361s | 0.001228s | 0.001316s | byte equality observed |
| adapt_struct.test | 10 | 0.001277s | 0.001268s | 0.001325s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001318s | 0.001238s | 0.001301s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001283s | 0.001259s | 0.001305s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001301s | 0.001307s | 0.001341s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001320s | 0.001286s | 0.001294s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001299s | 0.001299s | 0.001314s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001280s | 0.001264s | 0.001283s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001259s | 0.001242s | 0.001304s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001251s | 0.001329s | 0.001261s | byte equality observed |
| all.test | 10 | 0.001232s | 0.001271s | 0.001290s | byte equality observed |
| any.test | 10 | 0.001242s | 0.001329s | 0.001277s | byte equality observed |
| array.test | 10 | 0.001251s | 0.001207s | 0.001252s | byte equality observed |
| as_deque.test | 10 | 0.001242s | 0.001227s | 0.001297s | byte equality observed |
| as_list.test | 10 | 0.001292s | 0.001304s | 0.001275s | byte equality observed |
| as_map.test | 10 | 0.001306s | 0.001257s | 0.001292s | byte equality observed |
| as_map_assoc.test | 10 | 0.001383s | 0.001241s | 0.001358s | byte equality observed |
| as_set.test | 10 | 0.001337s | 0.001361s | 0.001317s | byte equality observed |
| as_vector.test | 10 | 0.001298s | 0.001321s | 0.001262s | byte equality observed |
| back_extended_deque.test | 10 | 0.001258s | 0.001278s | 0.001246s | byte equality observed |
| boost_array.test | 10 | 0.001249s | 0.001263s | 0.001208s | byte equality observed |
| boost_tuple.test | 10 | 0.001303s | 0.001243s | 0.001268s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001229s | 0.001259s | 0.001320s | byte equality observed |
| clear.test | 10 | 0.001274s | 0.001309s | 0.001294s | byte equality observed |
| cons.test | 10 | 0.001309s | 0.001292s | 0.001311s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001289s | 0.001304s | 0.001282s | byte equality observed |
| convert_deque.test | 10 | 0.001240s | 0.001313s | 0.001237s | byte equality observed |
| convert_list.test | 10 | 0.001226s | 0.001238s | 0.001242s | byte equality observed |
| convert_std_pair.test | 10 | 0.001254s | 0.001237s | 0.001293s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001277s | 0.001300s | 0.001290s | byte equality observed |
| convert_vector.test | 10 | 0.001260s | 0.001319s | 0.001282s | byte equality observed |
| copy.test | 10 | 0.001234s | 0.001262s | 0.001236s | byte equality observed |
| count.test | 10 | 0.001264s | 0.001275s | 0.001234s | byte equality observed |
| count_if.test | 10 | 0.001253s | 0.001311s | 0.001238s | byte equality observed |
| deduce_sequence.test | 10 | 0.001296s | 0.001244s | 0.001246s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001270s | 0.001290s | 0.001293s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001262s | 0.001261s | 0.001314s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001234s | 0.001224s | 0.001276s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001274s | 0.001278s | 0.001289s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001258s | 0.001292s | 0.001285s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001276s | 0.001224s | 0.001257s | byte equality observed |
| define_struct.test | 10 | 0.001307s | 0.001282s | 0.001297s | byte equality observed |
| define_struct_empty.test | 10 | 0.001252s | 0.001258s | 0.001261s | byte equality observed |
| define_struct_inline.test | 10 | 0.001278s | 0.001285s | 0.001244s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001251s | 0.001261s | 0.001222s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001256s | 0.001248s | 0.001273s | byte equality observed |
| define_struct_move.test | 9 | 0.001249s | 0.001255s | 0.001237s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001292s | 0.001289s | 0.001279s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001316s | 0.001264s | 0.001367s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001292s | 0.001250s | 0.001345s | byte equality observed |
| define_tpl_struct_inline_empty.test | 8 | 0.001317s | 0.001267s | 0.001299s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001258s | 0.001235s | 0.001317s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001221s | 0.001302s | 0.001298s | byte equality observed |
| deque_comparison.test | 10 | 0.001277s | 0.001286s | 0.001250s | byte equality observed |
| deque_construction.test | 10 | 0.001275s | 0.001248s | 0.001242s | byte equality observed |
| deque_copy.test | 10 | 0.001232s | 0.001303s | 0.001237s | byte equality observed |
| deque_hash.test | 10 | 0.001253s | 0.001259s | 0.001233s | byte equality observed |
| deque_iterator.test | 10 | 0.001248s | 0.001234s | 0.001298s | byte equality observed |
| deque_make.test | 10 | 0.001255s | 0.001229s | 0.001272s | byte equality observed |
| deque_misc.test | 10 | 0.001272s | 0.001232s | 0.001242s | byte equality observed |
| deque_move.test | 10 | 0.001269s | 0.001243s | 0.001275s | byte equality observed |
| deque_mutate.test | 10 | 0.001328s | 0.001234s | 0.001259s | byte equality observed |
| deque_nest.test | 10 | 0.001230s | 0.001268s | 0.001274s | byte equality observed |
| deque_tie.test | 10 | 0.001241s | 0.001223s | 0.001282s | byte equality observed |
| deque_value_at.test | 10 | 0.001297s | 0.001317s | 0.001294s | byte equality observed |
| erase.test | 10 | 0.001268s | 0.001283s | 0.001321s | byte equality observed |
| erase_key.test | 10 | 0.001287s | 0.001375s | 0.001318s | byte equality observed |
| filter.test | 9 | 0.001304s | 0.001251s | 0.001219s | byte equality observed |
| filter_if.test | 10 | 0.001338s | 0.001343s | 0.001273s | byte equality observed |
| filter_view.test | 10 | 0.001314s | 0.001337s | 0.001410s | byte equality observed |
| find.test | 10 | 0.001331s | 0.001301s | 0.001314s | byte equality observed |
| find_if.test | 10 | 0.001297s | 0.001274s | 0.001330s | byte equality observed |
| flatten.test | 10 | 0.001332s | 0.001235s | 0.001362s | byte equality observed |
| flatten_view.test | 10 | 0.001288s | 0.001244s | 0.001327s | byte equality observed |
| fold.test | 9 | 0.001266s | 0.001256s | 0.001309s | byte equality observed |
| for_each.test | 10 | 0.001309s | 0.001249s | 0.001331s | byte equality observed |
| front_extended_deque.test | 10 | 0.001253s | 0.001232s | 0.001274s | byte equality observed |
| fused.test | 10 | 0.001253s | 0.001240s | 0.001246s | byte equality observed |
| fused_function_object.test | 10 | 0.001267s | 0.001225s | 0.001281s | byte equality observed |
| fused_procedure.test | 10 | 0.001250s | 0.001242s | 0.001297s | byte equality observed |
| github-176.test | 10 | 0.001247s | 0.001247s | 0.001276s | byte equality observed |
| hash.test | 10 | 0.001276s | 0.001232s | 0.001266s | byte equality observed |
| identity_view.test | 10 | 0.001299s | 0.001301s | 0.001278s | byte equality observed |
| insert.test | 10 | 0.001310s | 0.001259s | 0.001358s | byte equality observed |
| insert_range.test | 10 | 0.001319s | 0.001271s | 0.001277s | byte equality observed |
| invoke.test | 10 | 0.001239s | 0.001225s | 0.001264s | byte equality observed |
| invoke_function_object.test | 10 | 0.001228s | 0.001245s | 0.001320s | byte equality observed |
| invoke_procedure.test | 10 | 0.001239s | 0.001195s | 0.001278s | byte equality observed |
| io.test | 10 | 0.001425s | 0.001450s | 0.001454s | byte equality observed |
| iter_fold.test | 10 | 0.001261s | 0.001257s | 0.001246s | byte equality observed |
| iterator_range.test | 10 | 0.001270s | 0.001289s | 0.001243s | byte equality observed |
| join.test | 10 | 0.001211s | 0.001246s | 0.001231s | byte equality observed |
| joint_view.test | 10 | 0.001344s | 0.001273s | 0.001317s | byte equality observed |
| list_comparison.test | 10 | 0.001266s | 0.001229s | 0.001311s | byte equality observed |
| list_construction.test | 10 | 0.001271s | 0.001244s | 0.001287s | byte equality observed |
| list_copy.test | 9 | 0.001296s | 0.001210s | 0.001278s | byte equality observed |
| list_hash.test | 10 | 0.001269s | 0.001256s | 0.001287s | byte equality observed |
| list_iterator.test | 10 | 0.001289s | 0.001274s | 0.001278s | byte equality observed |
| list_make.test | 10 | 0.001271s | 0.001258s | 0.001291s | byte equality observed |
| list_misc.test | 10 | 0.001271s | 0.001290s | 0.001214s | byte equality observed |
| list_mutate.test | 10 | 0.001253s | 0.001196s | 0.001219s | byte equality observed |
| list_nest.test | 10 | 0.001239s | 0.001207s | 0.001216s | byte equality observed |
| list_tie.test | 10 | 0.001251s | 0.001273s | 0.001257s | byte equality observed |
| list_value_at.test | 10 | 0.001265s | 0.001216s | 0.001255s | byte equality observed |
| make_fused.test | 10 | 0.001254s | 0.001260s | 0.001302s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001255s | 0.001234s | 0.001269s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001285s | 0.001226s | 0.001292s | byte equality observed |
| make_list.test | 10 | 0.001287s | 0.001256s | 0.001265s | byte equality observed |
| make_unfused.test | 10 | 0.001247s | 0.001283s | 0.001303s | byte equality observed |
| make_vector.test | 10 | 0.001280s | 0.001288s | 0.001296s | byte equality observed |
| map.test | 10 | 0.001302s | 0.001295s | 0.001265s | byte equality observed |
| map_comparison.test | 10 | 0.001257s | 0.001246s | 0.001332s | byte equality observed |
| map_construction.test | 10 | 0.001249s | 0.001226s | 0.001277s | byte equality observed |
| map_copy.test | 10 | 0.001247s | 0.001262s | 0.001314s | byte equality observed |
| map_misc.test | 10 | 0.001247s | 0.001244s | 0.001263s | byte equality observed |
| map_move.test | 10 | 0.001275s | 0.001275s | 0.001278s | byte equality observed |
| map_mutate.test | 10 | 0.001262s | 0.001242s | 0.001251s | byte equality observed |
| map_tie.test | 9 | 0.001280s | 0.001258s | 0.001248s | byte equality observed |
| move.test | 10 | 0.001270s | 0.001301s | 0.001237s | byte equality observed |
| nil.test | 10 | 0.001306s | 0.001273s | 0.001266s | byte equality observed |
| none.test | 10 | 0.001268s | 0.001266s | 0.001316s | byte equality observed |
| nview.test | 10 | 0.001310s | 0.001253s | 0.001294s | byte equality observed |
| pop_back.test | 10 | 0.001316s | 0.001340s | 0.001302s | byte equality observed |
| pop_front.test | 9 | 0.001323s | 0.001308s | 0.001293s | byte equality observed |
| push_back.test | 10 | 0.001324s | 0.001334s | 0.001294s | byte equality observed |
| push_front.test | 10 | 0.001326s | 0.001316s | 0.001320s | byte equality observed |
| quick.test | 10 | 0.000581s | 0.001278s | 0.001221s | byte equality observed |
| ref_vector.test | 10 | 0.001260s | 0.001219s | 0.001233s | byte equality observed |
| remove.test | 10 | 0.001299s | 0.001286s | 0.001300s | byte equality observed |
| remove_if.test | 10 | 0.001306s | 0.001285s | 0.001327s | byte equality observed |
| repetitive_view.test | 9 | 0.001240s | 0.001251s | 0.001217s | byte equality observed |
| replace.test | 10 | 0.001281s | 0.001290s | 0.001232s | byte equality observed |
| replace_if.test | 10 | 0.001333s | 0.001343s | 0.001298s | byte equality observed |
| reverse.test | 10 | 0.001313s | 0.001322s | 0.001367s | byte equality observed |
| reverse_fold.test | 10 | 0.001300s | 0.001327s | 0.001324s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001292s | 0.001373s | 0.001301s | byte equality observed |
| reverse_view.test | 10 | 0.001261s | 0.001299s | 0.001272s | byte equality observed |
| segmented_find.test | 10 | 0.001250s | 0.001272s | 0.001238s | byte equality observed |
| segmented_find_if.test | 10 | 0.001275s | 0.001234s | 0.001249s | byte equality observed |
| segmented_fold.test | 10 | 0.001296s | 0.001270s | 0.001267s | byte equality observed |
| segmented_for_each.test | 10 | 0.001299s | 0.001251s | 0.001262s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001343s | 0.001308s | 0.001282s | byte equality observed |
| set.test | 10 | 0.001337s | 0.001352s | 0.001245s | byte equality observed |
| single_view.test | 10 | 0.001281s | 0.001340s | 0.001316s | byte equality observed |
| std_array.test | 10 | 0.001248s | 0.001206s | 0.001227s | byte equality observed |
| std_pair.test | 10 | 0.001265s | 0.001246s | 0.001285s | byte equality observed |
| std_tuple.test | 10 | 0.001280s | 0.001263s | 0.001244s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001247s | 0.001252s | 0.001214s | byte equality observed |
| swap.test | 10 | 0.001286s | 0.001245s | 0.001342s | byte equality observed |
| transform.test | 10 | 0.001311s | 0.001300s | 0.001293s | byte equality observed |
| transform_view.test | 10 | 0.001349s | 0.001278s | 0.001303s | byte equality observed |
| tuple_comparison.test | 10 | 0.001238s | 0.001239s | 0.001210s | byte equality observed |
| tuple_construction.test | 10 | 0.001226s | 0.001239s | 0.001221s | byte equality observed |
| tuple_conversion.test | 10 | 0.001241s | 0.001321s | 0.001263s | byte equality observed |
| tuple_copy.test | 10 | 0.001300s | 0.001291s | 0.001263s | byte equality observed |
| tuple_element.test | 10 | 0.001269s | 0.001261s | 0.001284s | byte equality observed |
| tuple_hash.test | 10 | 0.001289s | 0.001312s | 0.001237s | byte equality observed |
| tuple_make.test | 10 | 0.001261s | 0.001235s | 0.001241s | byte equality observed |
| tuple_misc.test | 10 | 0.001278s | 0.001248s | 0.001274s | byte equality observed |
| tuple_mutate.test | 10 | 0.001239s | 0.001292s | 0.001283s | byte equality observed |
| tuple_nest.test | 10 | 0.001250s | 0.001250s | 0.001322s | byte equality observed |
| tuple_tie.test | 10 | 0.001304s | 0.001230s | 0.001281s | byte equality observed |
| tuple_traits__maybe_variadic.test | 9 | 0.001275s | 0.001239s | 0.001244s | byte equality observed |
| tuple_traits__no_variadic.test | 9 | 0.001289s | 0.001298s | 0.001281s | byte equality observed |
| unfused.test | 10 | 0.001248s | 0.001292s | 0.001255s | byte equality observed |
| unfused_typed.test | 10 | 0.001242s | 0.001253s | 0.001320s | byte equality observed |
| vector_comparison.test | 10 | 0.001269s | 0.001312s | 0.001233s | byte equality observed |
| vector_construction.test | 10 | 0.001279s | 0.001267s | 0.001234s | byte equality observed |
| vector_conversion.test | 10 | 0.001255s | 0.001280s | 0.001263s | byte equality observed |
| vector_copy.test | 10 | 0.001262s | 0.001267s | 0.001285s | byte equality observed |
| vector_hash.test | 10 | 0.001253s | 0.001279s | 0.001273s | byte equality observed |
| vector_iterator.test | 9 | 0.001301s | 0.001246s | 0.001259s | byte equality observed |
| vector_make.test | 10 | 0.001280s | 0.001263s | 0.001218s | byte equality observed |
| vector_misc.test | 10 | 0.001235s | 0.001265s | 0.001265s | byte equality observed |
| vector_move.test | 10 | 0.001243s | 0.001260s | 0.001248s | byte equality observed |
| vector_mutate.test | 10 | 0.001197s | 0.001252s | 0.001318s | byte equality observed |
| vector_n.test | 8 | 0.001296s | 0.001241s | 0.001288s | byte equality observed |
| vector_nest.test | 10 | 0.001233s | 0.001231s | 0.001277s | byte equality observed |
| vector_tie.test | 10 | 0.001212s | 0.001283s | 0.001214s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001247s | 0.001286s | 0.001251s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001246s | 0.001244s | 0.001230s | byte equality observed |
| vector_value_at.test | 10 | 0.001316s | 0.001285s | 0.001212s | byte equality observed |
| zip.test | 10 | 0.001268s | 0.001248s | 0.001225s | byte equality observed |
| zip2.test | 10 | 0.001257s | 0.001223s | 0.001256s | byte equality observed |
| zip_ignore.test | 10 | 0.001278s | 0.001199s | 0.001254s | byte equality observed |
| zip_view.test | 10 | 0.001299s | 0.001229s | 0.001250s | byte equality observed |
| zip_view2.test | 10 | 0.001287s | 0.001259s | 0.001292s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001227s | 0.001220s | 0.001222s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43664060660).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
