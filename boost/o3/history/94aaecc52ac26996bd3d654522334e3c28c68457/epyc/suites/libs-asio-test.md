# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.820906 | 5.027587 | 5.097894 | 0.003257 | 0.002855 | 0.002792 |
| any_completion_executor_select.test | RUN | 0.837956 | 5.005508 | 5.625722 | 0.002958 | 0.002291 | 0.002521 |
| any_completion_handler.test | RUN | 0.970367 | 4.443190 | 4.671610 | 0.002402 | 0.002197 | 0.001932 |
| any_completion_handler_select.test | RUN | 0.945424 | 4.580808 | 5.157075 | 0.002070 | 0.002304 | 0.001895 |
| any_io_executor.test | RUN | 0.873698 | 5.380813 | 5.587362 | 0.002546 | 0.002658 | 0.002776 |
| any_io_executor_select.test | RUN | 0.893368 | 5.282766 | 5.934356 | 0.002489 | 0.002864 | 0.002674 |
| append.test | RUN | 0.792447 | 4.190701 | 4.290182 | 0.002068 | 0.002149 | 0.002028 |
| append_select.test | RUN | 0.839791 | 4.251165 | 4.306374 | 0.001930 | 0.002096 | 0.002040 |
| as_tuple.test | RUN | 1.024397 | 5.070412 | 5.744686 | 0.002348 | 0.002368 | 0.002488 |
| as_tuple_select.test | RUN | 1.060778 | 5.023660 | 5.859585 | 0.002192 | 0.001938 | 0.002383 |
| associated_allocator.test | LINK | 0.220100 | 0.495345 | 0.736069 | — | — | — |
| associated_allocator_select.test | LINK | 0.233780 | 0.489437 | 0.738418 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.240114 | 0.521880 | 0.796948 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.241040 | 0.543735 | 0.791887 | — | — | — |
| associated_executor.test | LINK | 0.356859 | 0.874733 | 1.265512 | — | — | — |
| associated_executor_select.test | LINK | 0.354147 | 0.892234 | 1.197924 | — | — | — |
| associated_immediate_executor.test | LINK | 0.329205 | 0.794556 | 1.146111 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.326511 | 0.806197 | 1.050892 | — | — | — |
| associator.test | LINK | 0.182599 | 0.381816 | 0.573352 | — | — | — |
| associator_select.test | LINK | 0.180397 | 0.385573 | 0.587200 | — | — | — |
| awaitable.test | LINK | 0.182534 | 0.377869 | 0.567319 | — | — | — |
| awaitable_select.test | LINK | 0.182012 | 0.388722 | 0.504935 | — | — | — |
| basic_datagram_socket.test | LINK | 0.543278 | 1.200885 | 2.275596 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.556151 | 1.228438 | 2.303757 | — | — | — |
| basic_deadline_timer.test | LINK | 0.646047 | 1.430967 | 2.645034 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.650626 | 1.484681 | 2.589459 | — | — | — |
| basic_file.test | LINK | 0.180160 | 0.377977 | 0.588509 | — | — | — |
| basic_file_select.test | LINK | 0.177837 | 0.388922 | 0.557590 | — | — | — |
| basic_random_access_file.test | LINK | 0.186089 | 0.393417 | 0.553608 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.185946 | 0.389846 | 0.582738 | — | — | — |
| basic_raw_socket.test | LINK | 0.565355 | 1.213194 | 2.260481 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.569276 | 1.242490 | 2.342390 | — | — | — |
| basic_readable_pipe.test | LINK | 0.522238 | 1.158366 | 1.940311 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.558485 | 1.237881 | 2.405641 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.551496 | 1.210641 | 2.281049 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.554679 | 1.243281 | 2.276484 | — | — | — |
| basic_signal_set.test | LINK | 0.517529 | 1.105535 | 1.707053 | — | — | — |
| basic_signal_set_select.test | LINK | 0.547028 | 1.197888 | 2.177836 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.560724 | 1.182698 | 2.179383 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.554542 | 1.227076 | 2.288390 | — | — | — |
| basic_stream_file.test | LINK | 0.181479 | 0.404287 | 0.606613 | — | — | — |
| basic_stream_file_select.test | LINK | 0.198302 | 0.404784 | 0.606515 | — | — | — |
| basic_stream_socket.test | LINK | 0.544936 | 1.216932 | 2.301744 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.556444 | 1.230837 | 2.200585 | — | — | — |
| basic_streambuf.test | LINK | 0.276575 | 0.585633 | 0.892849 | — | — | — |
| basic_streambuf_select.test | LINK | 0.285832 | 0.586310 | 0.899135 | — | — | — |
| basic_waitable_timer.test | LINK | 0.521224 | 1.123977 | 2.104690 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.533058 | 1.150682 | 2.192496 | — | — | — |
| basic_writable_pipe.test | LINK | 0.526776 | 1.172279 | 1.901257 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.545186 | 1.241649 | 2.380265 | — | — | — |
| bind_allocator.test | RUN | 0.861116 | 4.233862 | 4.668872 | 0.002700 | 0.002553 | 0.002521 |
| bind_allocator_select.test | RUN | 0.896491 | 4.312336 | 4.615251 | 0.001941 | 0.002462 | 0.001854 |
| bind_cancellation_slot.test | RUN | 0.874133 | 4.328102 | 4.756088 | 0.001724 | 0.001405 | 0.001625 |
| bind_cancellation_slot_select.test | RUN | 0.885955 | 4.313906 | 4.407299 | 0.001643 | 0.001632 | 0.001499 |
| bind_executor.test | RUN | 0.548578 | 2.890137 | 2.748478 | 0.002485 | 0.002855 | 0.002978 |
| bind_executor_select.test | RUN | 0.566517 | 2.955846 | 3.028333 | 0.002098 | 0.002160 | 0.002662 |
| bind_immediate_executor.test | RUN | 0.418892 | 2.536808 | 2.040964 | 0.001590 | 0.001624 | 0.001405 |
| bind_immediate_executor_select.test | RUN | 0.432209 | 2.434740 | 2.026756 | 0.001648 | 0.001599 | 0.001342 |
| buffer.test | RUN | 0.262721 | 1.009759 | 1.109576 | 0.001582 | 0.001489 | 0.001406 |
| buffer_select.test | RUN | 0.266400 | 1.001617 | 1.107929 | 0.001601 | 0.001492 | 0.001376 |
| buffer_registration.test | LINK | 0.218884 | 0.523304 | 0.646000 | — | — | — |
| buffer_registration_select.test | LINK | 0.212733 | 0.523254 | 0.633286 | — | — | — |
| buffered_read_stream.test | RUN | 0.925650 | 6.788012 | 7.265973 | 0.002024 | 0.002566 | 0.002672 |
| buffered_read_stream_select.test | RUN | 0.923933 | 7.061096 | 6.768435 | 0.002134 | 0.002639 | 0.002673 |
| buffered_stream.test | RUN | 1.729455 | 10.071043 | 10.920961 | 0.002578 | 0.002612 | 0.002793 |
| buffered_stream_select.test | RUN | 1.814092 | 10.159981 | 10.931339 | 0.002371 | 0.002775 | 0.002630 |
| buffered_write_stream.test | RUN | 1.620614 | 8.672832 | 9.506110 | 0.002356 | 0.002810 | 0.002740 |
| buffered_write_stream_select.test | RUN | 1.637429 | 8.739574 | 9.283880 | 0.002376 | 0.002503 | 0.002793 |
| buffers_iterator.test | RUN | 0.506620 | 0.879222 | 1.682952 | 0.001915 | 0.002044 | 0.001936 |
| buffers_iterator_select.test | RUN | 0.488242 | 0.884456 | 1.656268 | 0.002057 | 0.001924 | 0.001931 |
| cancel_after.test | RUN | 1.330507 | 6.889031 | 6.846310 | 0.004756 | 0.004077 | 0.004325 |
| cancel_after_select.test | RUN | 1.338441 | 6.868560 | 6.730120 | 0.003602 | 0.003734 | 0.003628 |
| cancel_at.test | RUN | 1.271029 | 5.808135 | 6.262201 | 0.003870 | 0.003855 | 0.003620 |
| cancel_at_select.test | RUN | 1.192757 | 5.561032 | 6.105672 | 0.003822 | 0.003656 | 0.003455 |
| cancellation_signal.test | LINK | 0.145849 | 0.304975 | 0.416144 | — | — | — |
| cancellation_signal_select.test | LINK | 0.143598 | 0.309630 | 0.431138 | — | — | — |
| cancellation_state.test | LINK | 0.227493 | 0.315339 | 0.422524 | — | — | — |
| cancellation_state_select.test | LINK | 0.232906 | 0.315119 | 0.435134 | — | — | — |
| cancellation_type.test | LINK | 0.118000 | 0.248292 | 0.332287 | — | — | — |
| cancellation_type_select.test | LINK | 0.183011 | 0.245728 | 0.376680 | — | — | — |
| co_composed.test | RUN | 0.183426 | 0.250841 | 0.439816 | 0.001798 | 0.001534 | 0.002114 |
| co_composed_select.test | RUN | 0.180777 | 0.246183 | 0.584320 | 0.001846 | 0.001520 | 0.001938 |
| co_spawn.test | LINK | 0.183796 | 0.249173 | 0.548033 | — | — | — |
| co_spawn_select.test | LINK | 0.182041 | 0.247102 | 0.557288 | — | — | — |
| completion_condition.test | LINK | 0.233840 | 0.465321 | 0.742367 | — | — | — |
| completion_condition_select.test | LINK | 0.224735 | 0.552724 | 0.786145 | — | — | — |
| compose.test | RUN | 1.070438 | 5.285944 | 5.845527 | 0.002922 | 0.002560 | 0.002382 |
| compose_select.test | RUN | 1.073299 | 5.241890 | 5.788235 | 0.002620 | 0.002412 | 0.001924 |
| composed.test | RUN | 1.047181 | 5.309299 | 5.765611 | 0.002383 | 0.002203 | 0.002167 |
| composed_select.test | RUN | 0.997922 | 5.156196 | 5.615486 | 0.001934 | 0.002007 | 0.002154 |
| config.test | RUN | 0.492874 | 3.395753 | 2.498190 | 0.002228 | 0.002246 | 0.001909 |
| config_select.test | RUN | 0.604960 | 3.648335 | 3.034056 | 0.002164 | 0.002020 | 0.002014 |
| connect.test | LINK | 1.632483 | 11.164104 | 11.794513 | — | — | — |
| connect_select.test | LINK | 1.665613 | 11.185041 | 11.610131 | — | — | — |
| connect_pipe.test | RUN | 0.912141 | 4.294942 | 4.555791 | 0.002108 | 0.002108 | 0.002221 |
| connect_pipe_select.test | RUN | 0.921086 | 4.456581 | 5.018988 | 0.002066 | 0.002138 | 0.002192 |
| consign.test | RUN | 0.787216 | 4.124369 | 4.350017 | 0.002252 | 0.001985 | 0.002213 |
| consign_select.test | RUN | 0.784306 | 4.231285 | 4.276664 | 0.002229 | 0.001960 | 0.001796 |
| coroutine.test | LINK | 0.202263 | 0.450373 | 0.641004 | — | — | — |
| coroutine_select.test | LINK | 0.186638 | 0.456427 | 0.657136 | — | — | — |
| deadline_timer.test | RUN | 1.141355 | 5.433386 | 5.952941 | 0.003659 | 0.003979 | 0.004064 |
| deadline_timer_select.test | RUN | 1.150115 | 5.396326 | 5.987715 | 0.003145 | 0.003696 | 0.003391 |
| deferred.test | RUN | 0.209151 | 0.414733 | 0.657629 | 0.001998 | 0.002034 | 0.002102 |
| deferred_select.test | RUN | 0.213597 | 0.407297 | 0.659027 | 0.002116 | 0.001996 | 0.002090 |
| detached.test | LINK | 0.222708 | 0.469946 | 0.746941 | — | — | — |
| detached_select.test | LINK | 0.221065 | 0.457075 | 0.707904 | — | — | — |
| disposition.test | RUN | 0.215362 | 1.080919 | 1.269803 | 0.001582 | 0.002134 | 0.002286 |
| disposition_select.test | RUN | 0.193776 | 1.052266 | 1.245259 | 0.001728 | 0.002199 | 0.001892 |
| error.test | RUN | 0.186873 | 1.037930 | 1.091253 | 0.001523 | 0.001972 | 0.002096 |
| error_select.test | RUN | 0.179482 | 1.017466 | 1.117345 | 0.001509 | 0.002204 | 0.001943 |
| file_base.test | LINK | 0.220961 | 0.850291 | 0.912631 | — | — | — |
| file_base_select.test | LINK | 0.224019 | 0.787652 | 1.100373 | — | — | — |
| fwd_first.test | LINK | 0.511335 | 1.235576 | 2.010852 | — | — | — |
| fwd_last.test | LINK | 0.512732 | 1.180201 | 2.065431 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.192386 | 0.481848 | 0.737520 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.202107 | 0.485359 | 0.752402 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.758988 | 4.029273 | 3.807657 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.760678 | 4.199822 | 3.751218 | — | — | — |
| generic_raw_protocol.test | LINK | 0.769483 | 4.019263 | 3.880153 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.754798 | 4.222762 | 3.793683 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.664092 | 3.414986 | 3.289417 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.659865 | 3.484538 | 3.247899 | — | — | — |
| generic_stream_protocol.test | LINK | 0.725211 | 3.693997 | 3.495785 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.721899 | 3.831629 | 3.525318 | — | — | — |
| high_resolution_timer.test | LINK | 0.330341 | 0.721426 | 1.176823 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.334253 | 0.749196 | 1.171263 | — | — | — |
| immediate.test | LINK | 0.227102 | 0.549338 | 0.723298 | — | — | — |
| immediate_select.test | LINK | 0.221472 | 0.559211 | 0.716090 | — | — | — |
| inline_executor.test | RUN | 0.269086 | 0.836974 | 1.063761 | 0.001486 | 0.001499 | 0.001484 |
| inline_executor_select.test | RUN | 0.276438 | 0.855683 | 1.051139 | 0.001584 | 0.001610 | 0.001464 |
| inline_or_executor.test | RUN | 0.430240 | 2.411019 | 1.941805 | 0.001480 | 0.001508 | 0.001466 |
| inline_or_executor_select.test | RUN | 0.443133 | 2.518921 | 2.157071 | 0.001563 | 0.001535 | 0.001490 |
| io_context.test | RUN | 0.624957 | 3.651480 | 3.450447 | 0.002576 | 0.002518 | 0.002424 |
| io_context_select.test | RUN | 0.641063 | 3.645523 | 3.344855 | 0.002388 | 0.002457 | 0.002508 |
| io_context_strand.test | RUN | 0.590944 | 4.567342 | 3.903149 | 0.002624 | 0.002966 | 0.003343 |
| io_context_strand_select.test | RUN | 0.598182 | 4.641145 | 4.134951 | 0.002512 | 0.002765 | 0.003044 |
| ip_address.test | LINK | 0.230508 | 0.859770 | 1.657124 | — | — | — |
| ip_address_select.test | LINK | 0.232920 | 1.164869 | 1.665616 | — | — | — |
| ip_address_v4.test | LINK | 0.238112 | 1.266401 | 1.564894 | — | — | — |
| ip_address_v4_select.test | LINK | 0.237437 | 1.253449 | 1.543838 | — | — | — |
| ip_address_v6.test | LINK | 0.272453 | 1.647863 | 1.222962 | — | — | — |
| ip_address_v6_select.test | LINK | 0.274803 | 1.366672 | 1.228081 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.210309 | 0.510142 | 0.805683 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.216843 | 0.503103 | 0.773766 | — | — | — |
| ip_basic_resolver.test | LINK | 0.328598 | 0.736498 | 1.164726 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.344624 | 0.752140 | 1.192574 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.117439 | 0.244355 | 0.346601 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.119594 | 0.249060 | 0.345106 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.207611 | 0.504649 | 0.770235 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.209803 | 0.500116 | 0.758168 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.198408 | 0.475490 | 0.738161 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.209595 | 0.477218 | 0.732742 | — | — | — |
| ip_host_name.test | RUN | 0.212010 | 0.636829 | 0.849967 | 0.001594 | 0.001436 | 0.001828 |
| ip_host_name_select.test | RUN | 0.211808 | 0.636437 | 0.871206 | 0.001570 | 0.001648 | 0.001913 |
| ip_icmp.test | RUN | 0.961866 | 6.995450 | 8.088517 | 0.001604 | 0.002158 | 0.001746 |
| ip_icmp_select.test | RUN | 0.951085 | 7.272239 | 8.057623 | 0.001654 | 0.002244 | 0.002039 |
| ip_multicast.test | RUN | 0.552789 | 4.425666 | 5.065004 | 0.001648 | 0.001810 | 0.002276 |
| ip_multicast_select.test | RUN | 0.569859 | 4.439972 | 5.008952 | 0.001641 | 0.002217 | 0.002430 |
| ip_resolver_query_base.test | LINK | 0.134504 | 0.414527 | 0.563627 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.132190 | 0.416568 | 0.587559 | — | — | — |
| ip_tcp.test | RUN | 1.387048 | 12.864045 | 12.599457 | 0.002185 | 0.003183 | 0.003163 |
| ip_tcp_select.test | RUN | 1.386620 | 13.432180 | 12.135238 | 0.002114 | 0.002983 | 0.002944 |
| ip_udp.test | RUN | 1.002810 | 9.226719 | 8.824979 | 0.001659 | 0.002466 | 0.002296 |
| ip_udp_select.test | RUN | 0.994003 | 9.457725 | 8.604206 | 0.001713 | 0.002296 | 0.001888 |
| ip_unicast.test | RUN | 0.516723 | 4.003132 | 4.418079 | 0.001586 | 0.002352 | 0.001876 |
| ip_unicast_select.test | RUN | 0.514903 | 4.190356 | 4.358560 | 0.001822 | 0.002370 | 0.001944 |
| ip_v6_only.test | RUN | 0.831854 | 4.305234 | 4.508658 | 0.001877 | 0.002014 | 0.001810 |
| ip_v6_only_select.test | RUN | 0.847726 | 4.374010 | 4.475108 | 0.001980 | 0.002151 | 0.001941 |
| is_read_buffered.test | RUN | 0.589307 | 1.401640 | 2.638964 | 0.001881 | 0.002212 | 0.001803 |
| is_read_buffered_select.test | RUN | 0.598638 | 1.442718 | 2.634785 | 0.001992 | 0.001989 | 0.001629 |
| is_write_buffered.test | RUN | 0.595961 | 1.395824 | 2.627352 | 0.001974 | 0.001988 | 0.001773 |
| is_write_buffered_select.test | RUN | 0.608417 | 1.387320 | 2.690703 | 0.001950 | 0.002209 | 0.002059 |
| local_basic_endpoint.test | LINK | 0.304904 | 0.749791 | 1.425416 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.307017 | 0.758636 | 1.429417 | — | — | — |
| local_connect_pair.test | LINK | 0.768703 | 4.162687 | 4.228302 | — | — | — |
| local_connect_pair_select.test | LINK | 0.797351 | 4.155502 | 4.198144 | — | — | — |
| local_datagram_protocol.test | LINK | 1.021118 | 5.404831 | 5.670717 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.034741 | 5.424059 | 5.613909 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.050956 | 5.266652 | 5.690525 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.062716 | 5.401000 | 5.707027 | — | — | — |
| local_stream_protocol.test | LINK | 0.968160 | 5.080264 | 5.447316 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.989590 | 5.085565 | 5.348294 | — | — | — |
| placeholders.test | LINK | 0.193134 | 0.425670 | 0.647708 | — | — | — |
| placeholders_select.test | LINK | 0.197374 | 0.423722 | 0.653821 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.521146 | 1.127891 | 1.969091 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.536247 | 1.230755 | 2.440630 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.510764 | 1.187548 | 1.914885 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.536496 | 1.233466 | 2.462871 | — | — | — |
| posix_descriptor_base.test | LINK | 0.215339 | 0.460730 | 0.611010 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.215223 | 0.422902 | 0.600749 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.019062 | 5.091603 | 5.385256 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.040302 | 5.244799 | 5.476759 | — | — | — |
| prepend.test | RUN | 0.796242 | 4.181349 | 4.332065 | 0.002167 | 0.002011 | 0.002131 |
| prepend_select.test | RUN | 0.788337 | 4.269356 | 4.310249 | 0.001946 | 0.002138 | 0.001966 |
| random_access_file.test | LINK | 0.463108 | 1.032612 | 1.507620 | — | — | — |
| random_access_file_select.test | LINK | 0.488216 | 1.070692 | 2.011978 | — | — | — |
| read.test | RUN | 2.452682 | 25.699498 | 23.432537 | 0.002832 | 0.002739 | 0.002832 |
| read_select.test | RUN | 2.463543 | 25.585975 | 23.747032 | 0.002639 | 0.002708 | 0.002651 |
| read_at.test | RUN | 2.490329 | 33.970513 | 32.285914 | 0.003626 | 0.003397 | 0.002964 |
| read_at_select.test | RUN | 2.499168 | 33.872947 | 32.558216 | 0.003673 | 0.003403 | 0.003684 |
| read_until.test | RUN | 1.273788 | 10.167919 | 8.593316 | 0.002240 | 0.002478 | 0.002170 |
| read_until_select.test | RUN | 1.282729 | 10.251439 | 8.935718 | 0.002237 | 0.002536 | 0.002050 |
| readable_pipe.test | LINK | 0.796683 | 4.164912 | 3.958135 | — | — | — |
| readable_pipe_select.test | LINK | 0.818376 | 4.371893 | 4.610007 | — | — | — |
| recycling_allocator.test | RUN | 0.256301 | 0.677899 | 0.928905 | 0.002078 | 0.001932 | 0.002118 |
| recycling_allocator_select.test | RUN | 0.258491 | 0.674515 | 0.942570 | 0.002006 | 0.002123 | 0.002003 |
| redirect_disposition.test | LINK | 1.059614 | 5.859199 | 6.605441 | — | — | — |
| redirect_disposition_select.test | LINK | 1.097457 | 5.808123 | 6.308815 | — | — | — |
| redirect_error.test | LINK | 0.973214 | 4.911764 | 5.573382 | — | — | — |
| redirect_error_select.test | LINK | 0.943684 | 4.894732 | 5.677981 | — | — | — |
| registered_buffer.test | LINK | 0.255699 | 0.535374 | 0.902348 | — | — | — |
| registered_buffer_select.test | LINK | 0.255580 | 0.549119 | 0.808984 | — | — | — |
| signal_set.test | RUN | 0.783818 | 4.126624 | 3.887547 | 0.002118 | 0.002012 | 0.002101 |
| signal_set_select.test | RUN | 0.810266 | 4.292353 | 4.374093 | 0.001945 | 0.002016 | 0.002190 |
| signal_set_base.test | LINK | 0.208313 | 0.444785 | 0.636321 | — | — | — |
| signal_set_base_select.test | LINK | 0.214929 | 0.443400 | 0.640319 | — | — | — |
| socket_base.test | RUN | 0.979201 | 6.292041 | 6.051509 | 0.002402 | 0.002476 | 0.002271 |
| socket_base_select.test | RUN | 0.981348 | 6.079287 | 5.858684 | 0.002319 | 0.002338 | 0.002524 |
| spawn.test | RUN | 1.621822 | 9.686623 | 10.080267 | 0.002552 | 0.002323 | 0.002345 |
| spawn_select.test | RUN | 1.640152 | 9.643895 | 10.117969 | 0.002329 | 0.002555 | 0.002371 |
| static_thread_pool.test | RUN | 0.465570 | 1.007612 | 1.447995 | 0.001839 | 0.001892 | 0.002244 |
| static_thread_pool_select.test | RUN | 0.481569 | 1.087679 | 2.016386 | 0.001936 | 0.001966 | 0.002104 |
| steady_timer.test | LINK | 0.521486 | 1.130940 | 2.155053 | — | — | — |
| steady_timer_select.test | LINK | 0.514706 | 1.187914 | 2.177406 | — | — | — |
| strand.test | RUN | 1.062376 | 5.645933 | 6.115172 | 0.002518 | 0.003052 | 0.002945 |
| strand_select.test | RUN | 1.069200 | 5.683276 | 5.838896 | 0.002820 | 0.002448 | 0.003152 |
| stream_file.test | LINK | 0.480084 | 1.040662 | 1.502351 | — | — | — |
| stream_file_select.test | LINK | 0.500356 | 1.117181 | 1.994174 | — | — | — |
| streambuf.test | RUN | 0.257744 | 0.696670 | 1.102784 | 0.001416 | 0.001500 | 0.001692 |
| streambuf_select.test | RUN | 0.240428 | 0.618155 | 1.077823 | 0.001580 | 0.001450 | 0.002060 |
| system_timer.test | LINK | 0.623273 | 3.459758 | 3.651007 | — | — | — |
| system_timer_select.test | LINK | 0.638627 | 3.380135 | 3.372488 | — | — | — |
| system_context.test | LINK | 0.292396 | 0.642015 | 0.861410 | — | — | — |
| system_context_select.test | LINK | 0.306715 | 0.679300 | 1.074704 | — | — | — |
| system_executor.test | LINK | 0.376234 | 1.994563 | 1.575799 | — | — | — |
| system_executor_select.test | LINK | 0.394853 | 1.941021 | 1.805600 | — | — | — |
| this_coro.test | LINK | 0.116978 | 0.243152 | 0.325841 | — | — | — |
| this_coro_select.test | LINK | 0.117487 | 0.250068 | 0.328902 | — | — | — |
| thread_pool.test | RUN | 0.446483 | 3.673873 | 2.303847 | 0.003197 | 0.003726 | 0.003578 |
| thread_pool_select.test | RUN | 0.461487 | 3.750158 | 3.280700 | 0.003254 | 0.003414 | 0.003524 |
| time_traits.test | LINK | 0.258549 | 0.855284 | 1.291473 | — | — | — |
| time_traits_select.test | LINK | 0.255887 | 0.853892 | 1.210978 | — | — | — |
| ts_buffer.test | LINK | 0.249330 | 0.894214 | 1.264084 | — | — | — |
| ts_buffer_select.test | LINK | 0.241507 | 0.885206 | 1.244441 | — | — | — |
| ts_executor.test | LINK | 0.366926 | 1.206249 | 1.991548 | — | — | — |
| ts_executor_select.test | LINK | 0.364458 | 1.283230 | 2.395569 | — | — | — |
| ts_internet.test | LINK | 0.367290 | 1.323215 | 2.551159 | — | — | — |
| ts_internet_select.test | LINK | 0.377617 | 1.382979 | 2.586603 | — | — | — |
| ts_io_context.test | LINK | 0.296009 | 1.032859 | 1.490712 | — | — | — |
| ts_io_context_select.test | LINK | 0.317741 | 1.118111 | 2.023553 | — | — | — |
| ts_net.test | LINK | 0.439688 | 1.619328 | 3.055149 | — | — | — |
| ts_net_select.test | LINK | 0.445916 | 1.660641 | 3.228096 | — | — | — |
| ts_netfwd.test | LINK | 0.446324 | 1.610035 | 3.082634 | — | — | — |
| ts_netfwd_select.test | LINK | 0.452546 | 1.641273 | 3.176003 | — | — | — |
| ts_socket.test | LINK | 0.361977 | 1.276772 | 2.445538 | — | — | — |
| ts_socket_select.test | LINK | 0.367960 | 1.313038 | 2.431697 | — | — | — |
| ts_timer.test | LINK | 0.322121 | 1.130382 | 2.180527 | — | — | — |
| ts_timer_select.test | LINK | 0.327653 | 1.160506 | 2.093025 | — | — | — |
| use_awaitable.test | LINK | 0.111251 | 0.382461 | 0.584793 | — | — | — |
| use_awaitable_select.test | LINK | 0.113532 | 0.386733 | 0.588590 | — | — | — |
| wait_traits.test | LINK | 0.112545 | 0.385064 | 0.575618 | — | — | — |
| wait_traits_select.test | LINK | 0.168456 | 0.388126 | 0.606600 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.182864 | 0.383824 | 0.594389 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.175414 | 0.384448 | 0.590700 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.174096 | 0.397546 | 0.559070 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.180310 | 0.394914 | 0.558656 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.180716 | 0.384404 | 0.559223 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.180090 | 0.391357 | 0.571802 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.180731 | 0.391840 | 0.595924 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.176532 | 0.393155 | 0.577162 | — | — | — |
| windows_object_handle.test | LINK | 0.468955 | 1.035504 | 1.543203 | — | — | — |
| windows_object_handle_select.test | LINK | 0.484375 | 1.082882 | 1.997060 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.488939 | 1.074391 | 1.669467 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.526292 | 1.178100 | 2.273619 | — | — | — |
| windows_random_access_handle.test | LINK | 0.475194 | 1.041857 | 1.523672 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.489113 | 1.087260 | 2.012966 | — | — | — |
| windows_stream_handle.test | LINK | 0.476831 | 1.070323 | 1.523934 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.502762 | 1.124259 | 2.018810 | — | — | — |
| writable_pipe.test | LINK | 0.833998 | 4.212117 | 4.398224 | — | — | — |
| writable_pipe_select.test | LINK | 0.862964 | 4.369654 | 4.765304 | — | — | — |
| write.test | RUN | 2.444018 | 21.345922 | 23.377703 | 0.002969 | 0.002896 | 0.002642 |
| write_select.test | RUN | 2.488053 | 21.393081 | 23.672214 | 0.002882 | 0.002658 | 0.003118 |
| write_at.test | RUN | 2.566470 | 29.258238 | 29.653078 | 0.003330 | 0.003186 | 0.002991 |
| write_at_select.test | RUN | 2.534268 | 29.074593 | 30.617327 | 0.002935 | 0.003006 | 0.003350 |
| any_executor.test | RUN | 1.021312 | 9.818921 | 9.394842 | 0.002639 | 0.002792 | 0.002542 |
| blocking.test | RUN | 2.743205 | 12.351345 | 20.377521 | 0.008610 | 0.008818 | 0.009009 |
| blocking_adaptation.test | RUN | 1.377772 | 5.542358 | 9.318956 | 0.004726 | 0.004433 | 0.004913 |
| context_as.test | RUN | 0.694027 | 3.786260 | 3.164549 | 0.002313 | 0.002462 | 0.002332 |
| executor.test | RUN | 0.194298 | 0.398691 | 0.608374 | 0.002079 | 0.002154 | 0.001970 |
| inline_exception_handling.test | RUN | 2.751138 | 11.780175 | 18.541492 | 0.007923 | 0.005757 | 0.008235 |
| invocable_archetype.test | RUN | 0.180168 | 0.407537 | 0.546383 | 0.002022 | 0.002064 | 0.002223 |
| mapping.test | RUN | 2.347024 | 11.516446 | 20.237803 | 0.005983 | 0.005850 | 0.005902 |
| outstanding_work.test | RUN | 1.285849 | 5.240804 | 8.926502 | 0.004813 | 0.004684 | 0.004781 |
| prefer_only.test | RUN | 0.375711 | 2.200736 | 2.089844 | 0.002295 | 0.001960 | 0.002088 |
| relationship.test | RUN | 0.994567 | 5.037081 | 8.337001 | 0.003294 | 0.004798 | 0.003224 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.003×, 1.002× | 0.991× |
| clang | 0.966× | 0.948×, 0.984× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.002093s | 0.002025s | 0.002020s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.002003s | 0.001994s | 0.001981s | byte equality observed |
| any_completion_handler.test | 8 | 0.001618s | 0.001552s | 0.001557s | byte equality observed |
| any_completion_handler_select.test | 7 | 0.001578s | 0.001563s | 0.001575s | byte equality observed |
| any_io_executor.test | 3 | 0.001968s | 0.001968s | 0.002004s | byte equality observed |
| any_io_executor_select.test | 3 | 0.001991s | 0.002008s | 0.001994s | byte equality observed |
| append.test | 7 | 0.001516s | 0.001467s | 0.001519s | byte equality observed |
| append_select.test | 10 | 0.001504s | 0.001494s | 0.001476s | byte equality observed |
| as_tuple.test | 5 | 0.001672s | 0.001675s | 0.001678s | byte equality observed |
| as_tuple_select.test | 9 | 0.001491s | 0.001408s | 0.001485s | byte equality observed |
| bind_allocator.test | 1 | 0.001956s | 0.001895s | 0.001896s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001701s | 0.001546s | 0.001686s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001364s | 0.001353s | 0.001323s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001262s | 0.001249s | 0.001284s | byte equality observed |
| bind_executor.test | 1 | 0.001938s | 0.001866s | 0.001975s | byte equality observed |
| bind_executor_select.test | 1 | 0.002139s | 0.002100s | 0.002200s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001280s | 0.001273s | 0.001242s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001334s | 0.001322s | 0.001340s | byte equality observed |
| buffer.test | 10 | 0.001328s | 0.001292s | 0.001300s | byte equality observed |
| buffer_select.test | 10 | 0.001281s | 0.001267s | 0.001301s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001637s | 0.001647s | 0.001713s | byte equality observed |
| buffered_read_stream_select.test | 9 | 0.001649s | 0.001601s | 0.001674s | byte equality observed |
| buffered_stream.test | 10 | 0.001639s | 0.001612s | 0.001653s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001642s | 0.001631s | 0.001613s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001692s | 0.001605s | 0.001657s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001631s | 0.001602s | 0.001631s | byte equality observed |
| buffers_iterator.test | 10 | 0.001283s | 0.001201s | 0.001260s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001192s | 0.001163s | 0.001165s | byte equality observed |
| cancel_after.test | 1 | 0.003782s | 0.003356s | 0.003709s | byte equality observed |
| cancel_after_select.test | 1 | 0.003010s | 0.002965s | 0.003186s | byte equality observed |
| cancel_at.test | 1 | 0.003866s | 0.003585s | 0.004010s | byte equality observed |
| cancel_at_select.test | 1 | 0.003648s | 0.003303s | 0.003780s | byte equality observed |
| co_composed.test | 10 | 0.001225s | 0.001195s | 0.001198s | byte equality observed |
| co_composed_select.test | 10 | 0.001159s | 0.001159s | 0.001182s | byte equality observed |
| compose.test | 1 | 0.002007s | 0.001896s | 0.001946s | byte equality observed |
| compose_select.test | 1 | 0.001654s | 0.001556s | 0.001661s | byte equality observed |
| composed.test | 1 | 0.002152s | 0.002176s | 0.002222s | byte equality observed |
| composed_select.test | 1 | 0.001727s | 0.001732s | 0.001863s | byte equality observed |
| config.test | 10 | 0.001347s | 0.001246s | 0.001290s | byte equality observed |
| config_select.test | 9 | 0.001360s | 0.001410s | 0.001345s | byte equality observed |
| connect_pipe.test | 10 | 0.001396s | 0.001385s | 0.001383s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001314s | 0.001330s | 0.001363s | byte equality observed |
| consign.test | 10 | 0.001339s | 0.001357s | 0.001371s | byte equality observed |
| consign_select.test | 10 | 0.001257s | 0.001245s | 0.001301s | byte equality observed |
| deadline_timer.test | 1 | 0.002807s | 0.002692s | 0.002839s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002457s | 0.002420s | 0.002600s | byte equality observed |
| deferred.test | 10 | 0.001181s | 0.001170s | 0.001208s | byte equality observed |
| deferred_select.test | 10 | 0.001131s | 0.001134s | 0.001149s | byte equality observed |
| disposition.test | 10 | 0.001212s | 0.001193s | 0.001218s | byte equality observed |
| disposition_select.test | 10 | 0.001201s | 0.001181s | 0.001208s | byte equality observed |
| error.test | 10 | 0.001168s | 0.001155s | 0.001178s | byte equality observed |
| error_select.test | 10 | 0.001162s | 0.001152s | 0.001174s | byte equality observed |
| inline_executor.test | 10 | 0.001182s | 0.001164s | 0.001191s | byte equality observed |
| inline_executor_select.test | 10 | 0.001169s | 0.001184s | 0.001194s | byte equality observed |
| inline_or_executor.test | 10 | 0.001186s | 0.001188s | 0.001176s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001185s | 0.001197s | 0.001188s | byte equality observed |
| io_context.test | 1 | 0.002200s | 0.002185s | 0.002284s | byte equality observed |
| io_context_select.test | 1 | 0.002641s | 0.002196s | 0.002590s | byte equality observed |
| io_context_strand.test | 1 | 0.002525s | 0.002435s | 0.002707s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002384s | 0.002044s | 0.002347s | byte equality observed |
| ip_host_name.test | 10 | 0.001196s | 0.001184s | 0.001213s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001150s | 0.001146s | 0.001160s | byte equality observed |
| ip_icmp.test | 10 | 0.001203s | 0.001192s | 0.001197s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001193s | 0.001187s | 0.001181s | byte equality observed |
| ip_multicast.test | 10 | 0.001275s | 0.001272s | 0.001284s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001250s | 0.001250s | 0.001254s | byte equality observed |
| ip_tcp.test | 10 | 0.001765s | 0.001743s | 0.001782s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001683s | 0.001724s | 0.001707s | byte equality observed |
| ip_udp.test | 10 | 0.001299s | 0.001402s | 0.001310s | byte equality observed |
| ip_udp_select.test | 10 | 0.001286s | 0.001447s | 0.001290s | byte equality observed |
| ip_unicast.test | 10 | 0.001246s | 0.001323s | 0.001260s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001248s | 0.001372s | 0.001233s | byte equality observed |
| ip_v6_only.test | 10 | 0.001247s | 0.001355s | 0.001274s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001232s | 0.001347s | 0.001348s | byte equality observed |
| is_read_buffered.test | 10 | 0.001210s | 0.001307s | 0.001284s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001288s | 0.001294s | 0.001304s | byte equality observed |
| is_write_buffered.test | 10 | 0.001310s | 0.001255s | 0.001317s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001273s | 0.001229s | 0.001285s | byte equality observed |
| prepend.test | 10 | 0.001363s | 0.001359s | 0.001384s | byte equality observed |
| prepend_select.test | 10 | 0.001296s | 0.001289s | 0.001314s | byte equality observed |
| read.test | 10 | 0.001799s | 0.001739s | 0.001731s | byte equality observed |
| read_at.test | 9 | 0.002218s | 0.002241s | 0.002280s | byte equality observed |
| read_at_select.test | 9 | 0.002240s | 0.002261s | 0.002182s | byte equality observed |
| read_select.test | 10 | 0.001754s | 0.001759s | 0.001811s | byte equality observed |
| read_until.test | 10 | 0.001524s | 0.001436s | 0.001577s | byte equality observed |
| read_until_select.test | 10 | 0.001538s | 0.001491s | 0.001499s | byte equality observed |
| recycling_allocator.test | 10 | 0.001293s | 0.001232s | 0.001289s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001285s | 0.001230s | 0.001256s | byte equality observed |
| signal_set.test | 10 | 0.001313s | 0.001283s | 0.001264s | byte equality observed |
| signal_set_select.test | 10 | 0.001362s | 0.001285s | 0.001230s | byte equality observed |
| socket_base.test | 10 | 0.001429s | 0.001407s | 0.001473s | byte equality observed |
| socket_base_select.test | 10 | 0.001439s | 0.001422s | 0.001399s | byte equality observed |
| spawn.test | 10 | 0.001511s | 0.001472s | 0.001513s | byte equality observed |
| spawn_select.test | 10 | 0.001537s | 0.001497s | 0.001544s | byte equality observed |
| static_thread_pool.test | 10 | 0.001288s | 0.001248s | 0.001235s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001267s | 0.001229s | 0.001200s | byte equality observed |
| strand.test | 1 | 0.002313s | 0.002324s | 0.002345s | byte equality observed |
| strand_select.test | 1 | 0.001943s | 0.001928s | 0.001957s | byte equality observed |
| streambuf.test | 10 | 0.001279s | 0.001305s | 0.001379s | byte equality observed |
| streambuf_select.test | 10 | 0.001279s | 0.001296s | 0.001304s | byte equality observed |
| thread_pool.test | 8 | 0.002927s | 0.002945s | 0.003042s | byte equality observed |
| thread_pool_select.test | 8 | 0.002921s | 0.002893s | 0.002969s | byte equality observed |
| write.test | 10 | 0.001892s | 0.001815s | 0.001829s | byte equality observed |
| write_at.test | 10 | 0.002009s | 0.002014s | 0.001975s | byte equality observed |
| write_at_select.test | 10 | 0.001989s | 0.001979s | 0.001959s | byte equality observed |
| write_select.test | 10 | 0.001911s | 0.001917s | 0.001787s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/thinkoid/cppgm/actions/runs/44661842949).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
