# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.235386 | 0.518024 | 0.605448 | 0.001025 | 0.001015 | 0.001007 |
| any.test | RUN | 0.237309 | 0.482444 | 0.574308 | 0.000978 | 0.001023 | 0.000993 |
| clear.test | RUN | 0.177702 | 0.459850 | 0.499493 | 0.001065 | 0.001014 | 0.001034 |
| copy.test | RUN | 0.153550 | 0.332227 | 0.379040 | 0.001025 | 0.001166 | 0.001050 |
| count.test | RUN | 0.159419 | 0.384167 | 0.455314 | 0.001025 | 0.001111 | 0.001039 |
| count_if.test | RUN | 0.157442 | 0.348899 | 0.385984 | 0.001107 | 0.001059 | 0.001033 |
| erase.test | RUN | 0.226784 | 0.634535 | 0.673993 | 0.001003 | 0.001058 | 0.001139 |
| erase_key.test | RUN | 0.215344 | 0.625363 | 0.609261 | 0.001025 | 0.001102 | 0.001016 |
| filter.test | RUN | 0.189352 | 0.522466 | 0.544720 | 0.001082 | 0.001057 | 0.001031 |
| filter_if.test | RUN | 0.223403 | 0.614688 | 0.645636 | 0.001006 | 0.001075 | 0.000999 |
| find.test | RUN | 0.185007 | 0.412209 | 0.499566 | 0.000951 | 0.001175 | 0.001053 |
| find_if.test | RUN | 0.167727 | 0.382953 | 0.441573 | 0.001104 | 0.001089 | 0.001031 |
| fold.test | RUN | 0.191320 | 0.493979 | 0.564830 | 0.001037 | 0.001033 | 0.001066 |
| for_each.test | RUN | 0.168981 | 0.432189 | 0.487746 | 0.001070 | 0.001073 | 0.000998 |
| insert.test | RUN | 0.245516 | 0.766063 | 0.792506 | 0.001081 | 0.001118 | 0.001066 |
| insert_range.test | RUN | 0.246521 | 0.796674 | 0.808910 | 0.001057 | 0.001167 | 0.001107 |
| iter_fold.test | RUN | 0.289344 | 0.715318 | 0.908434 | 0.000966 | 0.001076 | 0.000949 |
| move.test | RUN | 0.146095 | 0.347662 | 0.400279 | 0.001079 | 0.001097 | 0.001136 |
| none.test | RUN | 0.236497 | 0.504179 | 0.597714 | 0.001009 | 0.001113 | 0.001060 |
| pop_back.test | RUN | 0.234795 | 0.688231 | 0.710164 | 0.001057 | 0.001116 | 0.001056 |
| pop_front.test | RUN | 0.195180 | 0.569986 | 0.579836 | 0.001065 | 0.001068 | 0.001083 |
| push_back.test | RUN | 0.251663 | 0.777306 | 0.769626 | 0.001182 | 0.001052 | 0.001120 |
| push_front.test | RUN | 0.220368 | 0.641270 | 0.656877 | 0.001094 | 0.001105 | 0.001040 |
| remove.test | RUN | 0.247288 | 0.736855 | 0.764215 | 0.001044 | 0.001085 | 0.001067 |
| remove_if.test | RUN | 0.218806 | 0.610063 | 0.675265 | 0.001067 | 0.001094 | 0.001111 |
| replace.test | RUN | 0.210396 | 0.598643 | 0.614909 | 0.001049 | 0.001005 | 0.001058 |
| replace_if.test | RUN | 0.209177 | 0.599375 | 0.609460 | 0.001100 | 0.001143 | 0.001090 |
| reverse_fold.test | RUN | 0.317695 | 0.816697 | 1.019459 | 0.001034 | 0.001128 | 0.001010 |
| reverse_iter_fold.test | RUN | 0.330169 | 0.836959 | 1.078829 | 0.001248 | 0.001008 | 0.001065 |
| reverse.test | RUN | 0.213712 | 0.616657 | 0.622801 | 0.001011 | 0.001165 | 0.001145 |
| segmented_for_each.test | RUN | 0.352253 | 1.134419 | 1.246578 | 0.001040 | 0.001082 | 0.000983 |
| segmented_find.test | RUN | 0.217928 | 0.585314 | 0.693157 | 0.001017 | 0.001126 | 0.001207 |
| segmented_find_if.test | RUN | 0.214879 | 0.604847 | 0.690913 | 0.001023 | 0.001102 | 0.001208 |
| segmented_fold.test | RUN | 0.260697 | 0.784584 | 0.885440 | 0.001125 | 0.001074 | 0.001081 |
| transform.test | RUN | 0.221032 | 0.661086 | 0.656148 | 0.001097 | 0.001072 | 0.001071 |
| join.test | RUN | 0.160330 | 0.386691 | 0.446647 | 0.001028 | 0.001106 | 0.001017 |
| zip.test | RUN | 0.276206 | 0.722504 | 0.846231 | 0.000967 | 0.001140 | 0.000966 |
| zip2.test | RUN | 0.270838 | 0.692415 | 0.814036 | 0.000856 | 0.001150 | 0.001028 |
| zip_ignore.test | RUN | 0.208814 | 0.482365 | 0.543307 | 0.000985 | 0.001115 | 0.000997 |
| flatten.test | RUN | 0.193315 | 0.537296 | 0.579060 | 0.001078 | 0.000947 | 0.001012 |
| ticket-5490.test | COMPILE | 0.104268 | 0.238903 | 0.268760 | — | — | — |
| as_deque.test | RUN | 0.194279 | 0.502294 | 0.592588 | 0.001027 | 0.000977 | 0.001013 |
| as_list.test | RUN | 0.223544 | 0.643591 | 0.661555 | 0.001069 | 0.001178 | 0.001054 |
| as_map.test | RUN | 0.218764 | 0.630046 | 0.657733 | 0.001080 | 0.001041 | 0.001186 |
| as_map_assoc.test | RUN | 0.210864 | 0.575094 | 0.625123 | 0.001114 | 0.001056 | 0.001109 |
| as_set.test | RUN | 0.246085 | 0.724379 | 0.774428 | 0.001045 | 0.001130 | 0.001062 |
| as_vector.test | RUN | 0.223784 | 0.659366 | 0.673538 | 0.001017 | 0.001113 | 0.001023 |
| boost_tuple.test | RUN | 0.221443 | 0.645218 | 0.662165 | 0.001042 | 0.001144 | 0.001138 |
| boost_tuple_iterator.test | RUN | 0.147196 | 0.362386 | 0.399287 | 0.001029 | 0.001231 | 0.001144 |
| cons.test | RUN | 0.281703 | 0.746501 | 0.793693 | 0.001043 | 0.001193 | 0.001039 |
| convert_boost_tuple.test | RUN | 0.173914 | 0.549474 | 0.524708 | 0.001045 | 0.001129 | 0.000990 |
| convert_deque.test | RUN | 0.178884 | 0.548112 | 0.524754 | 0.001066 | 0.001069 | 0.001035 |
| convert_list.test | RUN | 0.179263 | 0.557265 | 0.530204 | 0.001025 | 0.001042 | 0.001029 |
| convert_std_pair.test | RUN | 0.188075 | 0.557783 | 0.532001 | 0.001055 | 0.001052 | 0.001023 |
| convert_std_tuple.test | RUN | 0.175599 | 0.545760 | 0.520960 | 0.001060 | 0.001026 | 0.000945 |
| convert_vector.test | RUN | 0.181426 | 0.544672 | 0.519299 | 0.001052 | 0.001019 | 0.001005 |
| filter_view.test | RUN | 0.210622 | 0.576513 | 0.606682 | 0.001079 | 0.001109 | 0.001005 |
| hash.test | RUN | 0.208125 | 0.535750 | 0.585628 | 0.001017 | 0.001072 | 0.001108 |
| io.test | RUN | 0.225679 | 0.755658 | 0.730508 | 0.001098 | 0.001260 | 0.001319 |
| iterator_range.test | RUN | 0.203356 | 0.561436 | 0.591187 | 0.001117 | 0.001104 | 0.001059 |
| joint_view.test | RUN | 0.270883 | 0.916338 | 0.885118 | 0.001077 | 0.001038 | 0.001063 |
| list_comparison.test | RUN | 0.154599 | 0.376174 | 0.425910 | 0.001042 | 0.001027 | 0.001092 |
| list_construction.test | RUN | 0.151235 | 0.365375 | 0.413071 | 0.001056 | 0.001125 | 0.001117 |
| list_copy.test | RUN | 0.231102 | 0.660305 | 0.705711 | 0.001031 | 0.001091 | 0.000904 |
| list_iterator.test | RUN | 0.148770 | 0.367278 | 0.397826 | 0.001045 | 0.001057 | 0.001007 |
| list_hash.test | RUN | 0.211016 | 0.813088 | 0.586283 | 0.000967 | 0.001063 | 0.001097 |
| list_make.test | RUN | 0.162057 | 0.402683 | 0.446594 | 0.001039 | 0.001169 | 0.001059 |
| list_misc.test | RUN | 0.209302 | 0.487183 | 0.548685 | 0.001024 | 0.001065 | 0.000978 |
| list_mutate.test | RUN | 0.142772 | 0.326917 | 0.367195 | 0.001012 | 0.000916 | 0.000977 |
| list_nest.test | RUN | 0.288142 | 0.909363 | 0.994512 | 0.001032 | 0.001110 | 0.001071 |
| list_tie.test | RUN | 0.154235 | 0.363343 | 0.415107 | 0.001063 | 0.001110 | 0.000915 |
| list_value_at.test | RUN | 0.144563 | 0.337456 | 0.383895 | 0.000996 | 0.001129 | 0.001035 |
| deque_comparison.test | RUN | 0.151865 | 0.379130 | 0.426824 | 0.000967 | 0.001061 | 0.000948 |
| deque_construction.test | RUN | 0.154058 | 0.370769 | 0.434816 | 0.001045 | 0.001103 | 0.001110 |
| deque_copy.test | RUN | 0.222474 | 0.631640 | 0.664769 | 0.001028 | 0.001056 | 0.000974 |
| deque_iterator.test | RUN | 0.151901 | 0.382876 | 0.403323 | 0.001075 | 0.001106 | 0.001051 |
| deque_hash.test | RUN | 0.208162 | 0.777096 | 0.588385 | 0.001119 | 0.001114 | 0.001068 |
| deque_is_constructible.test | COMPILE | 0.081181 | 0.165450 | 0.185042 | — | — | — |
| deque_make.test | RUN | 0.156383 | 0.391627 | 0.429682 | 0.000979 | 0.001070 | 0.001130 |
| deque_misc.test | RUN | 0.201013 | 0.484623 | 0.530850 | 0.000959 | 0.001089 | 0.001035 |
| deque_move.test | RUN | 0.157140 | 0.403401 | 0.437224 | 0.001000 | 0.001049 | 0.000943 |
| deque_mutate.test | RUN | 0.142951 | 0.321668 | 0.369155 | 0.000879 | 0.001131 | 0.000994 |
| deque_nest.test | RUN | 0.432297 | 1.454638 | 1.594785 | 0.001042 | 0.001119 | 0.001110 |
| deque_tie.test | RUN | 0.144665 | 0.338451 | 0.384151 | 0.001076 | 0.001088 | 0.001075 |
| deque_value_at.test | RUN | 0.146009 | 0.335965 | 0.378588 | 0.001027 | 0.001050 | 0.001016 |
| front_extended_deque.test | RUN | 0.207184 | 0.496222 | 0.570074 | 0.001021 | 0.001103 | 0.001058 |
| back_extended_deque.test | RUN | 0.210821 | 0.500782 | 0.553086 | 0.001005 | 0.001039 | 0.000941 |
| make_list.test | RUN | 0.161746 | 0.403989 | 0.446983 | 0.001067 | 0.001111 | 0.001056 |
| make_vector.test | RUN | 0.159432 | 0.397009 | 0.435141 | 0.001043 | 0.001111 | 0.001096 |
| map.test | RUN | 0.216638 | 0.631084 | 0.644841 | 0.001038 | 0.001080 | 0.000985 |
| map_comparison.test | RUN | 0.158049 | 0.398576 | 0.425084 | 0.001040 | 0.000994 | 0.001014 |
| map_construction.test | RUN | 0.158533 | 0.379155 | 0.420643 | 0.001083 | 0.001085 | 0.001023 |
| map_copy.test | RUN | 0.188776 | 0.478594 | 0.525507 | 0.001067 | 0.001052 | 0.001146 |
| map_misc.test | RUN | 0.204361 | 0.490548 | 0.526504 | 0.001024 | 0.001126 | 0.000948 |
| map_move.test | RUN | 0.161215 | 0.412132 | 0.423020 | 0.001058 | 0.001039 | 0.001076 |
| map_mutate.test | RUN | 0.142258 | 0.323497 | 0.368434 | 0.001099 | 0.001058 | 0.001025 |
| map_tie.test | RUN | 0.144432 | 0.333339 | 0.374510 | 0.001108 | 0.001126 | 0.000957 |
| nil.test | RUN | 0.098523 | 0.229217 | 0.258775 | 0.001049 | 0.001058 | 0.001029 |
| nview.test | RUN | 0.198853 | 0.477364 | 0.548639 | 0.001100 | 0.001067 | 0.001003 |
| reverse_view.test | RUN | 0.264023 | 0.799119 | 0.806662 | 0.001038 | 0.001056 | 0.001061 |
| segmented_iterator_range.test | RUN | 0.298095 | 0.929543 | 1.016845 | 0.000964 | 0.001154 | 0.001087 |
| set.test | RUN | 0.192204 | 0.541462 | 0.563675 | 0.001113 | 0.001049 | 0.001049 |
| single_view.test | RUN | 0.176212 | 0.494794 | 0.518331 | 0.001143 | 0.001145 | 0.000950 |
| std_pair.test | RUN | 0.228624 | 0.633958 | 0.659162 | 0.001048 | 0.001038 | 0.001028 |
| boost_array.test | RUN | 0.187309 | 0.438919 | 0.488697 | 0.001050 | 0.000933 | 0.000994 |
| array.test | RUN | 0.185335 | 0.432746 | 0.483024 | 0.001073 | 0.000981 | 0.000960 |
| std_array.test | RUN | 0.188099 | 0.426117 | 0.487435 | 0.001031 | 0.001061 | 0.001013 |
| tuple_comparison.test | RUN | 0.165574 | 0.404957 | 0.451990 | 0.001027 | 0.001055 | 0.000944 |
| tuple_construction.test | RUN | 0.169841 | 0.405268 | 0.455772 | 0.001003 | 0.000992 | 0.001017 |
| tuple_conversion.test | RUN | 0.375558 | 1.245077 | 1.478531 | 0.001056 | 0.001121 | 0.000996 |
| tuple_copy.test | RUN | 0.243690 | 0.717194 | 0.769379 | 0.001121 | 0.001096 | 0.001011 |
| tuple_element.test | RUN | 0.152947 | 0.363813 | 0.418013 | 0.001043 | 0.000995 | 0.001034 |
| tuple_make.test | RUN | 0.165926 | 0.421099 | 0.450221 | 0.001098 | 0.001245 | 0.001052 |
| tuple_misc.test | RUN | 0.213148 | 0.520397 | 0.561664 | 0.001080 | 0.001083 | 0.001024 |
| tuple_mutate.test | RUN | 0.150869 | 0.342856 | 0.400142 | 0.000978 | 0.001127 | 0.001023 |
| tuple_nest.test | RUN | 0.630650 | 2.547954 | 2.843889 | 0.001053 | 0.001171 | 0.001066 |
| tuple_hash.test | RUN | 0.213313 | 0.814886 | 0.611347 | 0.001058 | 0.001279 | 0.001053 |
| tuple_tie.test | RUN | 0.156697 | 0.374548 | 0.422443 | 0.001046 | 0.001110 | 0.001022 |
| tuple_traits__maybe_variadic.test | RUN | 0.170682 | 0.450552 | 0.448713 | 0.001077 | 0.001020 | 0.000997 |
| tuple_traits__no_variadic.test | RUN | 0.188972 | 0.486130 | 0.492531 | 0.001033 | 0.001154 | 0.001187 |
| transform_view.test | RUN | 0.258750 | 0.805937 | 0.812548 | 0.001015 | 0.001089 | 0.001101 |
| identity_view.test | RUN | 0.247335 | 0.733201 | 0.761028 | 0.001102 | 0.001097 | 0.001034 |
| vector_comparison.test | RUN | 0.157282 | 0.387639 | 0.420027 | 0.001153 | 0.001072 | 0.001252 |
| vector_construction.test | RUN | 0.154770 | 0.368310 | 0.436009 | 0.001111 | 0.001082 | 0.000969 |
| vector_conversion.test | RUN | 0.454905 | 1.651306 | 1.831407 | 0.001039 | 0.001102 | 0.001038 |
| vector_copy.test | RUN | 0.237207 | 0.713092 | 0.737403 | 0.001084 | 0.001112 | 0.000996 |
| vector_iterator.test | RUN | 0.151707 | 0.380252 | 0.401610 | 0.001009 | 0.001045 | 0.000999 |
| vector_make.test | RUN | 0.160915 | 0.400160 | 0.423151 | 0.001084 | 0.001053 | 0.000958 |
| vector_misc.test | RUN | 0.205131 | 0.488768 | 0.544993 | 0.001008 | 0.001117 | 0.001174 |
| vector_move.test | RUN | 0.156907 | 0.416026 | 0.426022 | 0.000991 | 0.001147 | 0.000998 |
| vector_mutate.test | RUN | 0.142679 | 0.324187 | 0.361745 | 0.001015 | 0.001063 | 0.001020 |
| vector_n.test | RUN | 0.175356 | 0.414623 | 0.493181 | 0.001035 | 0.001073 | 0.001062 |
| vector_nest.test | RUN | 0.644750 | 2.685935 | 2.807327 | 0.001024 | 0.001188 | 0.001064 |
| vector_hash.test | RUN | 0.204739 | 0.807989 | 0.575182 | 0.001063 | 0.001344 | 0.001114 |
| vector_tie.test | RUN | 0.149282 | 0.364693 | 0.397448 | 0.001043 | 0.001120 | 0.001121 |
| vector_traits__maybe_variadic.test | RUN | 0.159624 | 0.422456 | 0.417948 | 0.001035 | 0.001169 | 0.001069 |
| vector_traits__no_variadic.test | RUN | 0.172072 | 0.440209 | 0.434476 | 0.001074 | 0.000979 | 0.001025 |
| vector_value_at.test | RUN | 0.145186 | 0.336941 | 0.376919 | 0.001077 | 0.001138 | 0.001101 |
| zip_view.test | RUN | 0.301506 | 0.799568 | 0.953543 | 0.001038 | 0.001026 | 0.001054 |
| zip_view2.test | RUN | 0.241335 | 0.614664 | 0.729582 | 0.001053 | 0.001035 | 0.001042 |
| zip_view_ignore.test | RUN | 0.226068 | 0.555590 | 0.654715 | 0.001103 | 0.001110 | 0.001075 |
| repetitive_view.test | RUN | 0.377642 | 1.047306 | 1.245622 | 0.001003 | 0.001068 | 0.001121 |
| deduce_sequence.test | RUN | 0.183064 | 0.453833 | 0.525849 | 0.001046 | 0.001117 | 0.001053 |
| adapt_adt_named.test | RUN | 0.222315 | 0.636345 | 0.661178 | 0.001085 | 0.001204 | 0.000991 |
| adapt_adt_named_empty.test | RUN | 0.195877 | 0.519245 | 0.538749 | 0.001059 | 0.001089 | 0.001119 |
| adapt_adt.test | RUN | 0.253711 | 0.849535 | 0.782958 | 0.001018 | 0.000976 | 0.001093 |
| adapt_adt_empty.test | RUN | 0.195506 | 0.521189 | 0.531126 | 0.001057 | 0.001112 | 0.001156 |
| adapt_assoc_adt_named.test | RUN | 0.251415 | 0.665298 | 0.714378 | 0.001020 | 0.001051 | 0.001056 |
| adapt_assoc_adt_named_empty.test | RUN | 0.191892 | 0.520531 | 0.536750 | 0.001030 | 0.001051 | 0.001100 |
| adapt_assoc_adt.test | RUN | 0.258506 | 0.697631 | 0.783476 | 0.001075 | 0.001227 | 0.001061 |
| adapt_assoc_adt_empty.test | RUN | 0.193875 | 0.521167 | 0.542100 | 0.001075 | 0.001143 | 0.001102 |
| adapt_assoc_struct_named.test | RUN | 0.247341 | 0.661896 | 0.687994 | 0.001004 | 0.001101 | 0.001099 |
| adapt_assoc_struct_named_empty.test | RUN | 0.194515 | 0.521608 | 0.540690 | 0.000991 | 0.001177 | 0.001172 |
| adapt_assoc_struct.test | RUN | 0.224024 | 0.628655 | 0.640280 | 0.001075 | 0.001078 | 0.000972 |
| adapt_assoc_struct_empty.test | RUN | 0.191877 | 0.514334 | 0.527862 | 0.000967 | 0.001058 | 0.000916 |
| adapt_assoc_tpl_adt.test | RUN | 0.261443 | 0.711567 | 0.744803 | 0.000964 | 0.001074 | 0.001038 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.195183 | 0.522072 | 0.534076 | 0.001072 | 0.001155 | 0.001104 |
| adapt_assoc_tpl_struct.test | RUN | 0.215267 | 0.606471 | 0.630532 | 0.001189 | 0.001125 | 0.001083 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.191130 | 0.525363 | 0.537131 | 0.001069 | 0.001125 | 0.001086 |
| adapt_struct_named.test | RUN | 0.219269 | 0.635009 | 0.626289 | 0.001025 | 0.001066 | 0.001116 |
| adapt_struct_named_empty.test | RUN | 0.193661 | 0.516244 | 0.530073 | 0.001050 | 0.001065 | 0.000961 |
| adapt_struct.test | RUN | 0.241861 | 0.718535 | 0.733054 | 0.001011 | 0.001072 | 0.001053 |
| adapt_struct_empty.test | RUN | 0.193853 | 0.519236 | 0.546957 | 0.001010 | 0.001155 | 0.001073 |
| adapt_tpl_adt.test | RUN | 0.251786 | 0.832765 | 0.771390 | 0.000975 | 0.001116 | 0.001004 |
| adapt_tpl_adt_empty.test | RUN | 0.196359 | 0.521723 | 0.535400 | 0.001080 | 0.001012 | 0.001026 |
| adapt_tpl_struct.test | RUN | 0.205507 | 0.568747 | 0.595248 | 0.001050 | 0.001072 | 0.000961 |
| adapt_tpl_struct_empty.test | RUN | 0.196121 | 0.516694 | 0.538991 | 0.001052 | 0.001191 | 0.000986 |
| adt_attribute_proxy.test | RUN | 0.215528 | 0.499039 | 0.558527 | 0.001050 | 0.001105 | 0.000952 |
| define_struct.test | RUN | 0.262477 | 0.720316 | 0.755443 | 0.001068 | 0.001407 | 0.001107 |
| define_struct_empty.test | RUN | 0.228723 | 0.584481 | 0.615563 | 0.001091 | 0.001136 | 0.001130 |
| define_struct_move.test | RUN | 0.144720 | 0.320360 | 0.362418 | 0.001005 | 0.001030 | 0.001006 |
| define_struct_inline.test | RUN | 0.281222 | 0.849230 | 0.846910 | 0.001029 | 0.001072 | 0.001106 |
| define_struct_inline_empty.test | RUN | 0.230137 | 0.580344 | 0.628503 | 0.001033 | 0.001127 | 0.001058 |
| define_struct_inline_move.test | RUN | 0.145812 | 0.323813 | 0.371316 | 0.001057 | 0.001029 | 0.001111 |
| define_assoc_struct.test | RUN | 0.256138 | 0.672500 | 0.710021 | 0.001026 | 0.001134 | 0.001041 |
| define_assoc_struct_empty.test | RUN | 0.228261 | 0.581160 | 0.616959 | 0.001086 | 0.001084 | 0.001137 |
| define_assoc_struct_move.test | RUN | 0.148028 | 0.315606 | 0.363230 | 0.001025 | 0.001066 | 0.001092 |
| define_tpl_struct.test | RUN | 0.254544 | 0.674408 | 0.710529 | 0.000943 | 0.001143 | 0.001060 |
| define_tpl_struct_empty.test | RUN | 0.231858 | 0.580184 | 0.634455 | 0.000994 | 0.001138 | 0.001078 |
| define_tpl_struct_move.test | RUN | 0.146489 | 0.323027 | 0.364015 | 0.000997 | 0.001094 | 0.001016 |
| define_tpl_struct_inline.test | RUN | 0.266711 | 0.796704 | 0.777045 | 0.001080 | 0.001138 | 0.001013 |
| define_tpl_struct_inline_empty.test | RUN | 0.233345 | 0.581873 | 0.621880 | 0.000935 | 0.001084 | 0.000980 |
| define_tpl_struct_inline_move.test | RUN | 0.146798 | 0.324241 | 0.369810 | 0.001015 | 0.001040 | 0.001011 |
| define_assoc_tpl_struct.test | RUN | 0.256489 | 0.680457 | 0.725461 | 0.001080 | 0.001060 | 0.001037 |
| define_assoc_tpl_struct_empty.test | RUN | 0.230856 | 0.588939 | 0.618075 | 0.001021 | 0.001121 | 0.000979 |
| define_assoc_tpl_struct_move.test | RUN | 0.146175 | 0.327958 | 0.372026 | 0.001039 | 0.001116 | 0.000997 |
| std_tuple.test | RUN | 0.155227 | 0.366132 | 0.410660 | 0.001023 | 0.001047 | 0.000924 |
| std_tuple_iterator.test | RUN | 0.150370 | 0.390414 | 0.414119 | 0.000955 | 0.001054 | 0.001040 |
| ref_vector.test | RUN | 0.171746 | 0.389946 | 0.435694 | 0.001053 | 0.001046 | 0.001054 |
| flatten_view.test | RUN | 0.182308 | 0.491430 | 0.524571 | 0.001044 | 0.001056 | 0.001024 |
| github-159.test | COMPILE | 0.083619 | 0.174319 | 0.199306 | — | — | — |
| github-176.test | RUN | 0.169067 | 0.434947 | 0.440157 | 0.001016 | 0.001104 | 0.001053 |
| size.test | COMPILE | 0.142695 | 0.299467 | 0.350671 | — | — | — |
| fused.test | RUN | 0.199834 | 0.456227 | 0.512676 | 0.001043 | 0.001069 | 0.000994 |
| fused_function_object.test | RUN | 0.149772 | 0.344629 | 0.389587 | 0.001026 | 0.001114 | 0.001107 |
| fused_procedure.test | RUN | 0.191605 | 0.435160 | 0.486778 | 0.000994 | 0.001048 | 0.001061 |
| unfused.test | RUN | 0.154501 | 0.356636 | 0.397804 | 0.001058 | 0.001091 | 0.000999 |
| unfused_typed.test | RUN | 0.156702 | 0.391473 | 0.421329 | 0.001014 | 0.001109 | 0.000982 |
| make_fused.test | RUN | 0.200956 | 0.452818 | 0.510159 | 0.001079 | 0.001091 | 0.000972 |
| make_fused_function_object.test | RUN | 0.150315 | 0.350154 | 0.393272 | 0.001047 | 0.001094 | 0.000993 |
| make_fused_procedure.test | RUN | 0.192496 | 0.435142 | 0.485482 | 0.000969 | 0.001036 | 0.000960 |
| make_unfused.test | RUN | 0.153707 | 0.352428 | 0.401136 | 0.001078 | 0.001038 | 0.001017 |
| invoke.test | RUN | 0.386168 | 1.237117 | 1.355410 | 0.001040 | 0.001121 | 0.001069 |
| invoke_function_object.test | RUN | 0.183838 | 0.453267 | 0.511324 | 0.000989 | 0.001013 | 0.001058 |
| invoke_procedure.test | RUN | 0.306712 | 0.927388 | 1.011036 | 0.001009 | 0.001017 | 0.001162 |
| swap.test | RUN | 0.233227 | 0.574040 | 0.636243 | 0.000955 | 0.001099 | 0.001145 |
| is_sequence.test | COMPILE | 0.038494 | 0.079791 | 0.084649 | — | — | — |
| is_view.test | COMPILE | 0.039775 | 0.080347 | 0.085348 | — | — | — |
| pair_deque.test | COMPILE | 0.085230 | 0.181955 | 0.199194 | — | — | — |
| pair_list.test | COMPILE | 0.083770 | 0.180116 | 0.193858 | — | — | — |
| pair_map.test | COMPILE | 0.085926 | 0.189172 | 0.203462 | — | — | — |
| pair_set.test | COMPILE | 0.087853 | 0.186860 | 0.201139 | — | — | — |
| pair_vector.test | COMPILE | 0.085672 | 0.184125 | 0.197017 | — | — | — |
| pair_nest.test | COMPILE | 0.034243 | 0.074636 | 0.079939 | — | — | — |
| index_sequence.test | COMPILE | 0.028626 | 0.050914 | 0.059592 | — | — | — |
| and.test | COMPILE | 0.021782 | 0.038755 | 0.044832 | — | — | — |
| tag_of.test | COMPILE | 0.038845 | 0.076823 | 0.081130 | — | — | — |
| unused.test | COMPILE | 0.019332 | 0.049694 | 0.049862 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.038549 | 0.077011 | 0.080817 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.032789 | 0.072945 | 0.077859 | — | — | — |
| quick.test | RUN | 0.162583 | 0.370337 | 0.397762 | 0.000416 | 0.001063 | 0.001050 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.000×, 1.001× | 1.000× |
| clang | 0.999× | 1.000×, 0.998× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000973s | 0.000978s | 0.000972s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000975s | 0.000970s | 0.000942s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000974s | 0.000976s | 0.000960s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000966s | 0.000962s | 0.000955s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000960s | 0.000972s | 0.000960s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000960s | 0.000971s | 0.000959s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000973s | 0.000977s | 0.000964s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000961s | 0.000960s | 0.000964s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000969s | 0.000970s | 0.000956s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000964s | 0.000972s | 0.000964s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000976s | 0.000966s | 0.000956s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000968s | 0.000965s | 0.000960s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000966s | 0.000970s | 0.000974s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000961s | 0.000967s | 0.000960s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000979s | 0.000978s | 0.000979s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000979s | 0.000960s | 0.000963s | byte equality observed |
| adapt_struct.test | 10 | 0.000973s | 0.000969s | 0.000978s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000963s | 0.000949s | 0.000960s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000968s | 0.000963s | 0.000963s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000965s | 0.000963s | 0.000970s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000967s | 0.000965s | 0.000969s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000964s | 0.000970s | 0.000959s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000977s | 0.000956s | 0.000973s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000965s | 0.000958s | 0.000959s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000959s | 0.000952s | 0.000946s | byte equality observed |
| all.test | 10 | 0.000948s | 0.000952s | 0.000942s | byte equality observed |
| any.test | 10 | 0.000948s | 0.000948s | 0.000950s | byte equality observed |
| array.test | 10 | 0.000936s | 0.000940s | 0.000934s | byte equality observed |
| as_deque.test | 10 | 0.000937s | 0.000932s | 0.000940s | byte equality observed |
| as_list.test | 10 | 0.000975s | 0.000990s | 0.000959s | byte equality observed |
| as_map.test | 10 | 0.000957s | 0.000973s | 0.000959s | byte equality observed |
| as_map_assoc.test | 10 | 0.000964s | 0.000964s | 0.000962s | byte equality observed |
| as_set.test | 10 | 0.000974s | 0.000981s | 0.000969s | byte equality observed |
| as_vector.test | 10 | 0.000983s | 0.000988s | 0.000978s | byte equality observed |
| back_extended_deque.test | 10 | 0.000949s | 0.000953s | 0.000945s | byte equality observed |
| boost_array.test | 10 | 0.000947s | 0.000930s | 0.000945s | byte equality observed |
| boost_tuple.test | 10 | 0.000968s | 0.000971s | 0.000965s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000946s | 0.000937s | 0.000947s | byte equality observed |
| clear.test | 10 | 0.000964s | 0.000961s | 0.000961s | byte equality observed |
| cons.test | 10 | 0.000983s | 0.000974s | 0.000964s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000950s | 0.000957s | 0.000937s | byte equality observed |
| convert_deque.test | 10 | 0.000943s | 0.000937s | 0.000937s | byte equality observed |
| convert_list.test | 10 | 0.000948s | 0.000943s | 0.000946s | byte equality observed |
| convert_std_pair.test | 10 | 0.000951s | 0.000950s | 0.000942s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000949s | 0.000943s | 0.000947s | byte equality observed |
| convert_vector.test | 10 | 0.000949s | 0.000941s | 0.000950s | byte equality observed |
| copy.test | 10 | 0.000933s | 0.000944s | 0.000938s | byte equality observed |
| count.test | 10 | 0.000952s | 0.000937s | 0.000948s | byte equality observed |
| count_if.test | 10 | 0.000948s | 0.000933s | 0.000944s | byte equality observed |
| deduce_sequence.test | 10 | 0.000945s | 0.000940s | 0.000943s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000960s | 0.000949s | 0.000960s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000950s | 0.000963s | 0.000963s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000941s | 0.000937s | 0.000940s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000968s | 0.000954s | 0.000958s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000959s | 0.000953s | 0.000967s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000948s | 0.000955s | 0.000945s | byte equality observed |
| define_struct.test | 10 | 0.000966s | 0.000966s | 0.000963s | byte equality observed |
| define_struct_empty.test | 10 | 0.000966s | 0.000961s | 0.000955s | byte equality observed |
| define_struct_inline.test | 10 | 0.000975s | 0.000967s | 0.000970s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000953s | 0.000956s | 0.000952s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000939s | 0.000942s | 0.000938s | byte equality observed |
| define_struct_move.test | 10 | 0.000945s | 0.000939s | 0.000941s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000964s | 0.000967s | 0.000959s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000973s | 0.000964s | 0.000955s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000965s | 0.000963s | 0.000955s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000965s | 0.000959s | 0.000962s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000947s | 0.000941s | 0.000946s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000943s | 0.000933s | 0.000953s | byte equality observed |
| deque_comparison.test | 10 | 0.000945s | 0.000940s | 0.000947s | byte equality observed |
| deque_construction.test | 10 | 0.000940s | 0.000935s | 0.000943s | byte equality observed |
| deque_copy.test | 10 | 0.000946s | 0.000944s | 0.000932s | byte equality observed |
| deque_hash.test | 10 | 0.000952s | 0.000956s | 0.000936s | byte equality observed |
| deque_iterator.test | 10 | 0.000938s | 0.000930s | 0.000934s | byte equality observed |
| deque_make.test | 10 | 0.000949s | 0.000944s | 0.000948s | byte equality observed |
| deque_misc.test | 10 | 0.000940s | 0.000943s | 0.000950s | byte equality observed |
| deque_move.test | 10 | 0.000963s | 0.000964s | 0.000957s | byte equality observed |
| deque_mutate.test | 10 | 0.000940s | 0.000939s | 0.000946s | byte equality observed |
| deque_nest.test | 10 | 0.000947s | 0.000929s | 0.000941s | byte equality observed |
| deque_tie.test | 10 | 0.000941s | 0.000941s | 0.000936s | byte equality observed |
| deque_value_at.test | 10 | 0.000949s | 0.000957s | 0.000946s | byte equality observed |
| erase.test | 10 | 0.000975s | 0.000972s | 0.000962s | byte equality observed |
| erase_key.test | 10 | 0.000975s | 0.000988s | 0.000967s | byte equality observed |
| filter.test | 10 | 0.000966s | 0.000955s | 0.000968s | byte equality observed |
| filter_if.test | 10 | 0.000980s | 0.000980s | 0.000981s | byte equality observed |
| filter_view.test | 10 | 0.000973s | 0.000973s | 0.000981s | byte equality observed |
| find.test | 10 | 0.000977s | 0.000986s | 0.000972s | byte equality observed |
| find_if.test | 10 | 0.000971s | 0.000975s | 0.000981s | byte equality observed |
| flatten.test | 10 | 0.000974s | 0.000957s | 0.000965s | byte equality observed |
| flatten_view.test | 10 | 0.000955s | 0.000946s | 0.000960s | byte equality observed |
| fold.test | 10 | 0.000964s | 0.000961s | 0.000967s | byte equality observed |
| for_each.test | 10 | 0.000975s | 0.000967s | 0.000979s | byte equality observed |
| front_extended_deque.test | 10 | 0.000940s | 0.000930s | 0.000948s | byte equality observed |
| fused.test | 10 | 0.000940s | 0.000944s | 0.000949s | byte equality observed |
| fused_function_object.test | 10 | 0.000940s | 0.000938s | 0.000934s | byte equality observed |
| fused_procedure.test | 10 | 0.000942s | 0.000952s | 0.000946s | byte equality observed |
| github-176.test | 10 | 0.000944s | 0.000944s | 0.000932s | byte equality observed |
| hash.test | 10 | 0.000944s | 0.000954s | 0.000946s | byte equality observed |
| identity_view.test | 10 | 0.000962s | 0.000965s | 0.000968s | byte equality observed |
| insert.test | 10 | 0.000980s | 0.000975s | 0.000983s | byte equality observed |
| insert_range.test | 10 | 0.000969s | 0.000971s | 0.000972s | byte equality observed |
| invoke.test | 10 | 0.000951s | 0.000944s | 0.000954s | byte equality observed |
| invoke_function_object.test | 10 | 0.000941s | 0.000945s | 0.000946s | byte equality observed |
| invoke_procedure.test | 10 | 0.000941s | 0.000947s | 0.000948s | byte equality observed |
| io.test | 10 | 0.001085s | 0.001085s | 0.001084s | byte equality observed |
| iter_fold.test | 10 | 0.000950s | 0.000964s | 0.000951s | byte equality observed |
| iterator_range.test | 10 | 0.000972s | 0.000980s | 0.000978s | byte equality observed |
| join.test | 10 | 0.000944s | 0.000937s | 0.000943s | byte equality observed |
| joint_view.test | 10 | 0.000991s | 0.000984s | 0.000985s | byte equality observed |
| list_comparison.test | 10 | 0.000940s | 0.000942s | 0.000955s | byte equality observed |
| list_construction.test | 10 | 0.000952s | 0.000941s | 0.000938s | byte equality observed |
| list_copy.test | 10 | 0.000954s | 0.000949s | 0.000953s | byte equality observed |
| list_hash.test | 10 | 0.000954s | 0.000950s | 0.000955s | byte equality observed |
| list_iterator.test | 10 | 0.000945s | 0.000937s | 0.000951s | byte equality observed |
| list_make.test | 10 | 0.000947s | 0.000947s | 0.000948s | byte equality observed |
| list_misc.test | 10 | 0.000951s | 0.000940s | 0.000948s | byte equality observed |
| list_mutate.test | 10 | 0.000940s | 0.000936s | 0.000925s | byte equality observed |
| list_nest.test | 10 | 0.000940s | 0.000948s | 0.000930s | byte equality observed |
| list_tie.test | 10 | 0.000943s | 0.000933s | 0.000940s | byte equality observed |
| list_value_at.test | 10 | 0.000941s | 0.000939s | 0.000939s | byte equality observed |
| make_fused.test | 10 | 0.000945s | 0.000926s | 0.000935s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000932s | 0.000937s | 0.000947s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000938s | 0.000953s | 0.000934s | byte equality observed |
| make_list.test | 10 | 0.000941s | 0.000939s | 0.000941s | byte equality observed |
| make_unfused.test | 10 | 0.000937s | 0.000929s | 0.000944s | byte equality observed |
| make_vector.test | 10 | 0.000948s | 0.000942s | 0.000943s | byte equality observed |
| map.test | 10 | 0.000971s | 0.000966s | 0.000953s | byte equality observed |
| map_comparison.test | 10 | 0.000935s | 0.000939s | 0.000945s | byte equality observed |
| map_construction.test | 10 | 0.000940s | 0.000934s | 0.000939s | byte equality observed |
| map_copy.test | 10 | 0.000949s | 0.000940s | 0.000944s | byte equality observed |
| map_misc.test | 10 | 0.000945s | 0.000947s | 0.000950s | byte equality observed |
| map_move.test | 10 | 0.000957s | 0.000969s | 0.000956s | byte equality observed |
| map_mutate.test | 10 | 0.000938s | 0.000948s | 0.000931s | byte equality observed |
| map_tie.test | 10 | 0.000940s | 0.000942s | 0.000943s | byte equality observed |
| move.test | 10 | 0.000934s | 0.000935s | 0.000933s | byte equality observed |
| nil.test | 10 | 0.000939s | 0.000926s | 0.000937s | byte equality observed |
| none.test | 10 | 0.000936s | 0.000945s | 0.000938s | byte equality observed |
| nview.test | 10 | 0.000942s | 0.000960s | 0.000943s | byte equality observed |
| pop_back.test | 10 | 0.000971s | 0.000983s | 0.000971s | byte equality observed |
| pop_front.test | 10 | 0.000971s | 0.000972s | 0.000978s | byte equality observed |
| push_back.test | 10 | 0.000981s | 0.000990s | 0.000974s | byte equality observed |
| push_front.test | 10 | 0.000979s | 0.000983s | 0.000969s | byte equality observed |
| quick.test | 10 | 0.000450s | 0.000940s | 0.000920s | byte equality observed |
| ref_vector.test | 10 | 0.000952s | 0.000953s | 0.000951s | byte equality observed |
| remove.test | 10 | 0.000980s | 0.000962s | 0.000978s | byte equality observed |
| remove_if.test | 10 | 0.000972s | 0.000980s | 0.000972s | byte equality observed |
| repetitive_view.test | 10 | 0.000949s | 0.000949s | 0.000932s | byte equality observed |
| replace.test | 10 | 0.000962s | 0.000951s | 0.000966s | byte equality observed |
| replace_if.test | 10 | 0.000972s | 0.000977s | 0.000963s | byte equality observed |
| reverse.test | 10 | 0.000980s | 0.000977s | 0.000977s | byte equality observed |
| reverse_fold.test | 10 | 0.000960s | 0.000961s | 0.000951s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000958s | 0.000949s | 0.000978s | byte equality observed |
| reverse_view.test | 10 | 0.000976s | 0.000968s | 0.000960s | byte equality observed |
| segmented_find.test | 10 | 0.000936s | 0.000952s | 0.000950s | byte equality observed |
| segmented_find_if.test | 10 | 0.000944s | 0.000945s | 0.000941s | byte equality observed |
| segmented_fold.test | 10 | 0.000983s | 0.000982s | 0.000969s | byte equality observed |
| segmented_for_each.test | 10 | 0.000960s | 0.000973s | 0.000950s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000989s | 0.000984s | 0.000970s | byte equality observed |
| set.test | 10 | 0.000961s | 0.000982s | 0.000952s | byte equality observed |
| single_view.test | 10 | 0.000971s | 0.000963s | 0.000968s | byte equality observed |
| std_array.test | 10 | 0.000950s | 0.000936s | 0.000943s | byte equality observed |
| std_pair.test | 10 | 0.000965s | 0.000973s | 0.000971s | byte equality observed |
| std_tuple.test | 10 | 0.000954s | 0.000951s | 0.000946s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000948s | 0.000947s | 0.000938s | byte equality observed |
| swap.test | 10 | 0.000954s | 0.000951s | 0.000943s | byte equality observed |
| transform.test | 10 | 0.000960s | 0.000973s | 0.000963s | byte equality observed |
| transform_view.test | 10 | 0.000973s | 0.000972s | 0.000968s | byte equality observed |
| tuple_comparison.test | 10 | 0.000939s | 0.000941s | 0.000923s | byte equality observed |
| tuple_construction.test | 10 | 0.000952s | 0.000943s | 0.000937s | byte equality observed |
| tuple_conversion.test | 10 | 0.000937s | 0.000929s | 0.000925s | byte equality observed |
| tuple_copy.test | 10 | 0.000957s | 0.000937s | 0.000939s | byte equality observed |
| tuple_element.test | 10 | 0.000939s | 0.000942s | 0.000933s | byte equality observed |
| tuple_hash.test | 10 | 0.000942s | 0.000946s | 0.000949s | byte equality observed |
| tuple_make.test | 10 | 0.000941s | 0.000951s | 0.000942s | byte equality observed |
| tuple_misc.test | 10 | 0.000951s | 0.000944s | 0.000935s | byte equality observed |
| tuple_mutate.test | 10 | 0.000947s | 0.000933s | 0.000942s | byte equality observed |
| tuple_nest.test | 10 | 0.000945s | 0.000931s | 0.000943s | byte equality observed |
| tuple_tie.test | 10 | 0.000940s | 0.000926s | 0.000932s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000938s | 0.000946s | 0.000940s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000943s | 0.000934s | 0.000944s | byte equality observed |
| unfused.test | 10 | 0.000938s | 0.000934s | 0.000934s | byte equality observed |
| unfused_typed.test | 10 | 0.000941s | 0.000937s | 0.000943s | byte equality observed |
| vector_comparison.test | 10 | 0.000943s | 0.000954s | 0.000941s | byte equality observed |
| vector_construction.test | 10 | 0.000940s | 0.000940s | 0.000940s | byte equality observed |
| vector_conversion.test | 10 | 0.000935s | 0.000945s | 0.000942s | byte equality observed |
| vector_copy.test | 10 | 0.000957s | 0.000943s | 0.000934s | byte equality observed |
| vector_hash.test | 10 | 0.000952s | 0.000943s | 0.000949s | byte equality observed |
| vector_iterator.test | 10 | 0.000945s | 0.000947s | 0.000940s | byte equality observed |
| vector_make.test | 10 | 0.000946s | 0.000950s | 0.000946s | byte equality observed |
| vector_misc.test | 10 | 0.000939s | 0.000963s | 0.000952s | byte equality observed |
| vector_move.test | 10 | 0.000961s | 0.000946s | 0.000957s | byte equality observed |
| vector_mutate.test | 10 | 0.000938s | 0.000938s | 0.000934s | byte equality observed |
| vector_n.test | 10 | 0.000962s | 0.000954s | 0.000953s | byte equality observed |
| vector_nest.test | 10 | 0.000944s | 0.000945s | 0.000933s | byte equality observed |
| vector_tie.test | 10 | 0.000942s | 0.000934s | 0.000944s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000937s | 0.000924s | 0.000943s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000946s | 0.000936s | 0.000932s | byte equality observed |
| vector_value_at.test | 10 | 0.000944s | 0.000930s | 0.000928s | byte equality observed |
| zip.test | 10 | 0.000943s | 0.000921s | 0.000940s | byte equality observed |
| zip2.test | 10 | 0.000949s | 0.000941s | 0.000937s | byte equality observed |
| zip_ignore.test | 10 | 0.000932s | 0.000931s | 0.000929s | byte equality observed |
| zip_view.test | 10 | 0.000941s | 0.000933s | 0.000938s | byte equality observed |
| zip_view2.test | 10 | 0.000934s | 0.000935s | 0.000933s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000935s | 0.000938s | 0.000932s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
