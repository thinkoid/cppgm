# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.452930 | 2.876495 | 2.250308 | 0.001451 | 0.001829 | 0.001915 |
| any_completion_executor_select.test | RUN | 0.459516 | 2.840232 | 2.480920 | 0.001718 | 0.001929 | 0.001819 |
| any_completion_handler.test | RUN | 0.503659 | 2.662239 | 2.113707 | 0.001460 | 0.001342 | 0.001121 |
| any_completion_handler_select.test | RUN | 0.514716 | 2.688132 | 2.209916 | 0.001216 | 0.001343 | 0.001341 |
| any_io_executor.test | RUN | 0.471861 | 3.075283 | 2.482242 | 0.001800 | 0.001858 | 0.001590 |
| any_io_executor_select.test | RUN | 0.490306 | 2.998977 | 2.589284 | 0.001577 | 0.001728 | 0.001658 |
| append.test | RUN | 0.445029 | 2.502375 | 1.901542 | 0.001144 | 0.001194 | 0.001139 |
| append_select.test | RUN | 0.447657 | 2.548551 | 1.929862 | 0.001055 | 0.001148 | 0.001108 |
| as_tuple.test | RUN | 0.587057 | 2.998921 | 2.641073 | 0.001304 | 0.001368 | 0.001141 |
| as_tuple_select.test | RUN | 0.582496 | 2.959916 | 2.662700 | 0.001164 | 0.001250 | 0.001141 |
| associated_allocator.test | LINK | 0.110328 | 0.238875 | 0.277699 | — | — | — |
| associated_allocator_select.test | LINK | 0.116742 | 0.239672 | 0.274843 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.125641 | 0.260893 | 0.300733 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.126263 | 0.264737 | 0.298613 | — | — | — |
| associated_executor.test | LINK | 0.181692 | 0.446129 | 0.477500 | — | — | — |
| associated_executor_select.test | LINK | 0.170914 | 0.455784 | 0.489130 | — | — | — |
| associated_immediate_executor.test | LINK | 0.159370 | 0.437856 | 0.436506 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.158094 | 0.416084 | 0.454023 | — | — | — |
| associator.test | LINK | 0.087142 | 0.194437 | 0.221232 | — | — | — |
| associator_select.test | LINK | 0.085841 | 0.205836 | 0.231756 | — | — | — |
| awaitable.test | LINK | 0.087486 | 0.200457 | 0.227840 | — | — | — |
| awaitable_select.test | LINK | 0.087760 | 0.196610 | 0.229180 | — | — | — |
| basic_datagram_socket.test | LINK | 0.278346 | 0.621526 | 0.875293 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.283635 | 0.654859 | 0.863291 | — | — | — |
| basic_deadline_timer.test | LINK | 0.328177 | 0.748559 | 0.965002 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.336261 | 0.785056 | 1.007569 | — | — | — |
| basic_file.test | LINK | 0.085839 | 0.196669 | 0.227767 | — | — | — |
| basic_file_select.test | LINK | 0.086683 | 0.193865 | 0.237190 | — | — | — |
| basic_random_access_file.test | LINK | 0.087155 | 0.207577 | 0.232398 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.086714 | 0.205655 | 0.228530 | — | — | — |
| basic_raw_socket.test | LINK | 0.275834 | 0.626102 | 0.864569 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.285001 | 0.642670 | 0.881986 | — | — | — |
| basic_readable_pipe.test | LINK | 0.263919 | 0.601929 | 0.744872 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.277173 | 0.643193 | 0.901985 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.283045 | 0.622388 | 0.841161 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.281685 | 0.643020 | 0.866871 | — | — | — |
| basic_signal_set.test | LINK | 0.261809 | 0.592861 | 0.664465 | — | — | — |
| basic_signal_set_select.test | LINK | 0.266674 | 0.624220 | 0.827527 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.278622 | 0.630287 | 0.853584 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.284676 | 0.645786 | 0.875639 | — | — | — |
| basic_stream_file.test | LINK | 0.087082 | 0.195408 | 0.230364 | — | — | — |
| basic_stream_file_select.test | LINK | 0.089547 | 0.197301 | 0.230518 | — | — | — |
| basic_stream_socket.test | LINK | 0.279164 | 0.629703 | 0.861735 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.285524 | 0.646697 | 0.866731 | — | — | — |
| basic_streambuf.test | LINK | 0.131960 | 0.280779 | 0.327269 | — | — | — |
| basic_streambuf_select.test | LINK | 0.132057 | 0.287646 | 0.325171 | — | — | — |
| basic_waitable_timer.test | LINK | 0.260863 | 0.596240 | 0.821261 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.269382 | 0.610773 | 0.810446 | — | — | — |
| basic_writable_pipe.test | LINK | 0.268687 | 0.607238 | 0.740478 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.281549 | 0.630256 | 0.895244 | — | — | — |
| bind_allocator.test | RUN | 0.478610 | 2.555281 | 2.090009 | 0.001380 | 0.001443 | 0.001592 |
| bind_allocator_select.test | RUN | 0.490040 | 2.588686 | 2.128833 | 0.001360 | 0.001511 | 0.001571 |
| bind_cancellation_slot.test | RUN | 0.487927 | 2.589219 | 2.116749 | 0.001092 | 0.001215 | 0.001348 |
| bind_cancellation_slot_select.test | RUN | 0.501976 | 2.616260 | 2.126910 | 0.001040 | 0.001306 | 0.001313 |
| bind_executor.test | RUN | 0.476839 | 2.551001 | 2.083286 | 0.001469 | 0.001504 | 0.001651 |
| bind_executor_select.test | RUN | 0.499662 | 2.620610 | 2.056546 | 0.001368 | 0.001655 | 0.001569 |
| bind_immediate_executor.test | RUN | 0.358883 | 2.166732 | 1.306571 | 0.001129 | 0.001249 | 0.001315 |
| bind_immediate_executor_select.test | RUN | 0.370355 | 2.116603 | 1.445527 | 0.001078 | 0.001218 | 0.001151 |
| buffer.test | RUN | 0.216564 | 0.863109 | 0.780869 | 0.001004 | 0.001285 | 0.001118 |
| buffer_select.test | RUN | 0.214767 | 0.864377 | 0.773184 | 0.001134 | 0.001224 | 0.001079 |
| buffer_registration.test | LINK | 0.165400 | 0.432063 | 0.464842 | — | — | — |
| buffer_registration_select.test | LINK | 0.172761 | 0.431312 | 0.444981 | — | — | — |
| buffered_read_stream.test | RUN | 0.823462 | 4.361881 | 3.757305 | 0.001539 | 0.001415 | 0.001332 |
| buffered_read_stream_select.test | RUN | 0.835467 | 4.413566 | 3.652781 | 0.001323 | 0.001428 | 0.001399 |
| buffered_stream.test | RUN | 1.081126 | 6.097379 | 5.282494 | 0.001412 | 0.001454 | 0.001385 |
| buffered_stream_select.test | RUN | 1.094601 | 6.129338 | 5.096715 | 0.001286 | 0.001420 | 0.001303 |
| buffered_write_stream.test | RUN | 0.929150 | 5.274038 | 4.513097 | 0.001346 | 0.001508 | 0.001416 |
| buffered_write_stream_select.test | RUN | 0.944935 | 5.347524 | 4.334163 | 0.001324 | 0.001334 | 0.001389 |
| buffers_iterator.test | RUN | 0.261788 | 0.466594 | 0.717839 | 0.001260 | 0.001228 | 0.001219 |
| buffers_iterator_select.test | RUN | 0.259819 | 0.471818 | 0.706266 | 0.001062 | 0.001091 | 0.001169 |
| cancel_after.test | RUN | 0.773137 | 4.105764 | 3.293805 | 0.002574 | 0.002661 | 0.002861 |
| cancel_after_select.test | RUN | 0.778173 | 4.076541 | 3.263719 | 0.002420 | 0.002595 | 0.002622 |
| cancel_at.test | RUN | 0.768129 | 4.093743 | 3.226237 | 0.002355 | 0.002667 | 0.002608 |
| cancel_at_select.test | RUN | 0.776273 | 4.098352 | 3.218484 | 0.002425 | 0.002695 | 0.002418 |
| cancellation_signal.test | LINK | 0.111600 | 0.244472 | 0.284417 | — | — | — |
| cancellation_signal_select.test | LINK | 0.111696 | 0.246864 | 0.283952 | — | — | — |
| cancellation_state.test | LINK | 0.113229 | 0.245380 | 0.283648 | — | — | — |
| cancellation_state_select.test | LINK | 0.112811 | 0.245702 | 0.283432 | — | — | — |
| cancellation_type.test | LINK | 0.085951 | 0.191930 | 0.224836 | — | — | — |
| cancellation_type_select.test | LINK | 0.085289 | 0.193258 | 0.224497 | — | — | — |
| co_composed.test | RUN | 0.086818 | 0.193224 | 0.222761 | 0.000976 | 0.001212 | 0.001097 |
| co_composed_select.test | RUN | 0.085623 | 0.194107 | 0.224082 | 0.001011 | 0.001208 | 0.001029 |
| co_spawn.test | LINK | 0.086854 | 0.193416 | 0.223987 | — | — | — |
| co_spawn_select.test | LINK | 0.086239 | 0.193580 | 0.224783 | — | — | — |
| completion_condition.test | LINK | 0.112275 | 0.299612 | 0.298086 | — | — | — |
| completion_condition_select.test | LINK | 0.111604 | 0.301226 | 0.300712 | — | — | — |
| compose.test | RUN | 0.577916 | 3.154271 | 2.600310 | 0.001492 | 0.001609 | 0.001444 |
| compose_select.test | RUN | 0.585952 | 3.113509 | 2.581911 | 0.001309 | 0.001538 | 0.001471 |
| composed.test | RUN | 0.574897 | 3.132299 | 2.599968 | 0.001427 | 0.001766 | 0.001464 |
| composed_select.test | RUN | 0.586339 | 3.100537 | 2.565503 | 0.001400 | 0.001593 | 0.001297 |
| config.test | RUN | 0.324953 | 2.052459 | 1.234790 | 0.001258 | 0.001165 | 0.001212 |
| config_select.test | RUN | 0.336825 | 2.111267 | 1.343816 | 0.001174 | 0.001104 | 0.001107 |
| connect.test | LINK | 0.932504 | 6.547373 | 5.499516 | — | — | — |
| connect_select.test | LINK | 0.948446 | 6.535698 | 5.570759 | — | — | — |
| connect_pipe.test | RUN | 0.490813 | 2.513832 | 1.999405 | 0.001244 | 0.001160 | 0.001187 |
| connect_pipe_select.test | RUN | 0.508712 | 2.588108 | 2.132495 | 0.001196 | 0.001227 | 0.000984 |
| consign.test | RUN | 0.432041 | 2.459917 | 1.859881 | 0.001185 | 0.001188 | 0.001104 |
| consign_select.test | RUN | 0.437657 | 2.505755 | 1.834656 | 0.001137 | 0.001172 | 0.001104 |
| coroutine.test | LINK | 0.090786 | 0.229781 | 0.251340 | — | — | — |
| coroutine_select.test | LINK | 0.092842 | 0.225169 | 0.248596 | — | — | — |
| deadline_timer.test | RUN | 0.634568 | 3.254165 | 2.657598 | 0.003064 | 0.002399 | 0.002614 |
| deadline_timer_select.test | RUN | 0.640391 | 3.209653 | 2.651622 | 0.002988 | 0.002281 | 0.002656 |
| deferred.test | RUN | 0.095392 | 0.214523 | 0.241108 | 0.001031 | 0.001180 | 0.001031 |
| deferred_select.test | RUN | 0.095539 | 0.211110 | 0.240699 | 0.001064 | 0.001116 | 0.001039 |
| detached.test | LINK | 0.108013 | 0.231910 | 0.269613 | — | — | — |
| detached_select.test | LINK | 0.106871 | 0.229909 | 0.270400 | — | — | — |
| disposition.test | RUN | 0.154563 | 0.576693 | 0.503399 | 0.001072 | 0.001167 | 0.001116 |
| disposition_select.test | RUN | 0.154980 | 0.576245 | 0.500185 | 0.001049 | 0.001154 | 0.001079 |
| error.test | RUN | 0.141372 | 0.547313 | 0.441915 | 0.001114 | 0.001114 | 0.001120 |
| error_select.test | RUN | 0.142058 | 0.545251 | 0.440866 | 0.001072 | 0.001103 | 0.001091 |
| file_base.test | LINK | 0.176044 | 0.445906 | 0.484294 | — | — | — |
| file_base_select.test | LINK | 0.175245 | 0.451177 | 0.488170 | — | — | — |
| fwd_first.test | LINK | 0.406178 | 0.953964 | 1.421466 | — | — | — |
| fwd_last.test | LINK | 0.403523 | 0.949601 | 1.419182 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.150448 | 0.395198 | 0.513879 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.150142 | 0.400229 | 0.503774 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.692822 | 3.745384 | 3.012100 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.689187 | 3.864364 | 3.009821 | — | — | — |
| generic_raw_protocol.test | LINK | 0.690378 | 3.747722 | 3.041354 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.684297 | 3.914074 | 3.011650 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.590934 | 3.148165 | 2.582391 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.592507 | 3.256156 | 2.587626 | — | — | — |
| generic_stream_protocol.test | LINK | 0.634074 | 3.433678 | 2.754585 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.630610 | 3.445204 | 2.770039 | — | — | — |
| high_resolution_timer.test | LINK | 0.257166 | 0.588755 | 0.831194 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.262867 | 0.606058 | 0.817716 | — | — | — |
| immediate.test | LINK | 0.174918 | 0.480103 | 0.488017 | — | — | — |
| immediate_select.test | LINK | 0.173964 | 0.464624 | 0.507212 | — | — | — |
| inline_executor.test | RUN | 0.219013 | 0.721740 | 0.745714 | 0.001102 | 0.001302 | 0.001124 |
| inline_executor_select.test | RUN | 0.220217 | 0.728776 | 0.743479 | 0.001141 | 0.001246 | 0.001342 |
| inline_or_executor.test | RUN | 0.369976 | 2.173817 | 1.503341 | 0.001048 | 0.001128 | 0.001171 |
| inline_or_executor_select.test | RUN | 0.380718 | 2.253834 | 1.628725 | 0.001053 | 0.001175 | 0.001297 |
| io_context.test | RUN | 0.549808 | 3.343971 | 2.616645 | 0.001852 | 0.001809 | 0.001703 |
| io_context_select.test | RUN | 0.554528 | 3.305090 | 2.600335 | 0.001811 | 0.001927 | 0.001917 |
| io_context_strand.test | RUN | 0.519751 | 2.835500 | 2.273761 | 0.001717 | 0.001823 | 0.001666 |
| io_context_strand_select.test | RUN | 0.527858 | 2.789843 | 2.251192 | 0.001720 | 0.001848 | 0.001728 |
| ip_address.test | LINK | 0.181462 | 0.643312 | 0.631005 | — | — | — |
| ip_address_select.test | LINK | 0.182222 | 0.635752 | 0.621344 | — | — | — |
| ip_address_v4.test | LINK | 0.184104 | 0.672574 | 0.686908 | — | — | — |
| ip_address_v4_select.test | LINK | 0.184440 | 0.667486 | 0.683710 | — | — | — |
| ip_address_v6.test | LINK | 0.214869 | 0.886867 | 0.832688 | — | — | — |
| ip_address_v6_select.test | LINK | 0.216056 | 0.886407 | 0.830555 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.158253 | 0.416233 | 0.545875 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.157910 | 0.418272 | 0.537581 | — | — | — |
| ip_basic_resolver.test | LINK | 0.263535 | 0.604624 | 0.810586 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.269604 | 0.615253 | 0.823771 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.088296 | 0.198387 | 0.228174 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.088234 | 0.197526 | 0.224585 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.159599 | 0.408762 | 0.528159 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.161100 | 0.403798 | 0.520179 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.150774 | 0.390664 | 0.505466 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.149179 | 0.398037 | 0.500303 | — | — | — |
| ip_host_name.test | RUN | 0.161974 | 0.536338 | 0.582686 | 0.001090 | 0.001161 | 0.001069 |
| ip_host_name_select.test | RUN | 0.162075 | 0.531303 | 0.576569 | 0.001014 | 0.001117 | 0.001094 |
| ip_icmp.test | RUN | 0.868944 | 5.288313 | 3.967677 | 0.000946 | 0.001231 | 0.001105 |
| ip_icmp_select.test | RUN | 0.870241 | 5.367763 | 3.898442 | 0.001080 | 0.001152 | 0.001024 |
| ip_multicast.test | RUN | 0.477016 | 2.611644 | 2.130176 | 0.001293 | 0.001285 | 0.001175 |
| ip_multicast_select.test | RUN | 0.487069 | 2.604058 | 2.096923 | 0.001122 | 0.001196 | 0.001228 |
| ip_resolver_query_base.test | LINK | 0.097865 | 0.216063 | 0.235307 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.096807 | 0.213611 | 0.235519 | — | — | — |
| ip_tcp.test | RUN | 1.293303 | 7.883435 | 6.169907 | 0.001553 | 0.001606 | 0.001589 |
| ip_tcp_select.test | RUN | 1.307406 | 8.183179 | 6.025547 | 0.001475 | 0.001449 | 0.001386 |
| ip_udp.test | RUN | 0.926616 | 5.553043 | 4.247666 | 0.001252 | 0.001308 | 0.001217 |
| ip_udp_select.test | RUN | 0.918142 | 5.706890 | 4.111462 | 0.001154 | 0.001343 | 0.001211 |
| ip_unicast.test | RUN | 0.436951 | 2.381869 | 1.878223 | 0.001329 | 0.001346 | 0.001204 |
| ip_unicast_select.test | RUN | 0.444171 | 2.383390 | 1.853409 | 0.001229 | 0.001177 | 0.001106 |
| ip_v6_only.test | RUN | 0.453413 | 2.441113 | 1.926585 | 0.001276 | 0.001211 | 0.001091 |
| ip_v6_only_select.test | RUN | 0.462486 | 2.513893 | 1.907897 | 0.001106 | 0.001234 | 0.001125 |
| is_read_buffered.test | RUN | 0.302266 | 0.693847 | 0.957035 | 0.000983 | 0.001199 | 0.000966 |
| is_read_buffered_select.test | RUN | 0.309314 | 0.708525 | 0.984358 | 0.001045 | 0.000998 | 0.000939 |
| is_write_buffered.test | RUN | 0.306876 | 0.695581 | 0.965013 | 0.001105 | 0.001145 | 0.000979 |
| is_write_buffered_select.test | RUN | 0.307455 | 0.709062 | 0.989422 | 0.001077 | 0.001029 | 0.001064 |
| local_basic_endpoint.test | LINK | 0.149733 | 0.389875 | 0.499857 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.156035 | 0.389210 | 0.499051 | — | — | — |
| local_connect_pair.test | LINK | 0.423899 | 2.398314 | 1.790920 | — | — | — |
| local_connect_pair_select.test | LINK | 0.428117 | 2.391579 | 1.746292 | — | — | — |
| local_datagram_protocol.test | LINK | 0.585406 | 3.158818 | 2.549520 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.599068 | 3.185893 | 2.510661 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.595464 | 3.124069 | 2.526108 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.597227 | 3.136094 | 2.531130 | — | — | — |
| local_stream_protocol.test | LINK | 0.550760 | 2.959865 | 2.400046 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.567049 | 2.983588 | 2.372510 | — | — | — |
| placeholders.test | LINK | 0.094096 | 0.207672 | 0.239526 | — | — | — |
| placeholders_select.test | LINK | 0.094088 | 0.209689 | 0.238201 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.264679 | 0.595542 | 0.732687 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.275570 | 0.634005 | 0.880580 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.265383 | 0.593666 | 0.728091 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.276330 | 0.636031 | 0.889929 | — | — | — |
| posix_descriptor_base.test | LINK | 0.103462 | 0.219317 | 0.243556 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.106507 | 0.219078 | 0.241698 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.578489 | 3.064578 | 2.432196 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.594015 | 3.101841 | 2.459845 | — | — | — |
| prepend.test | RUN | 0.433529 | 2.478399 | 1.878008 | 0.001281 | 0.001408 | 0.001169 |
| prepend_select.test | RUN | 0.440250 | 2.515652 | 1.837069 | 0.001141 | 0.001228 | 0.001105 |
| random_access_file.test | LINK | 0.242426 | 0.542565 | 0.587132 | — | — | — |
| random_access_file_select.test | LINK | 0.252066 | 0.576655 | 0.737387 | — | — | — |
| read.test | RUN | 1.415928 | 14.926311 | 11.196103 | 0.001524 | 0.001737 | 0.001569 |
| read_select.test | RUN | 1.432119 | 14.846590 | 11.324513 | 0.001492 | 0.001772 | 0.001610 |
| read_at.test | RUN | 1.417262 | 19.653626 | 15.003028 | 0.001794 | 0.001974 | 0.001849 |
| read_at_select.test | RUN | 1.428864 | 19.290122 | 15.080424 | 0.001774 | 0.002156 | 0.001966 |
| read_until.test | RUN | 0.743563 | 5.857906 | 4.259738 | 0.001345 | 0.001209 | 0.001301 |
| read_until_select.test | RUN | 0.753899 | 5.905186 | 4.330767 | 0.001284 | 0.001271 | 0.001228 |
| readable_pipe.test | LINK | 0.451094 | 2.508963 | 1.901345 | — | — | — |
| readable_pipe_select.test | LINK | 0.467501 | 2.607303 | 1.973583 | — | — | — |
| recycling_allocator.test | RUN | 0.129793 | 0.341199 | 0.379154 | 0.001191 | 0.001222 | 0.001230 |
| recycling_allocator_select.test | RUN | 0.128309 | 0.338386 | 0.366923 | 0.001084 | 0.001232 | 0.001024 |
| redirect_disposition.test | LINK | 0.597399 | 3.454295 | 2.846013 | — | — | — |
| redirect_disposition_select.test | LINK | 0.607566 | 3.480141 | 2.877112 | — | — | — |
| redirect_error.test | LINK | 0.531128 | 2.899350 | 2.498142 | — | — | — |
| redirect_error_select.test | LINK | 0.540961 | 2.853344 | 2.463255 | — | — | — |
| registered_buffer.test | LINK | 0.123650 | 0.278268 | 0.330454 | — | — | — |
| registered_buffer_select.test | LINK | 0.123509 | 0.280059 | 0.326781 | — | — | — |
| signal_set.test | RUN | 0.437599 | 2.429959 | 1.790921 | 0.001180 | 0.001196 | 0.001059 |
| signal_set_select.test | RUN | 0.456155 | 2.507617 | 1.932955 | 0.000989 | 0.001187 | 0.001151 |
| signal_set_base.test | LINK | 0.099279 | 0.218766 | 0.249438 | — | — | — |
| signal_set_base_select.test | LINK | 0.099557 | 0.224482 | 0.250366 | — | — | — |
| socket_base.test | RUN | 0.537774 | 3.480184 | 2.674021 | 0.001210 | 0.001260 | 0.001314 |
| socket_base_select.test | RUN | 0.543192 | 3.407117 | 2.653190 | 0.001098 | 0.001294 | 0.001403 |
| spawn.test | RUN | 0.948244 | 5.907286 | 4.707875 | 0.001418 | 0.001365 | 0.001368 |
| spawn_select.test | RUN | 0.959456 | 5.896574 | 4.684312 | 0.001399 | 0.001388 | 0.001284 |
| static_thread_pool.test | RUN | 0.232807 | 0.524891 | 0.581359 | 0.001156 | 0.001226 | 0.001281 |
| static_thread_pool_select.test | RUN | 0.245763 | 0.573326 | 0.739135 | 0.001068 | 0.001274 | 0.001129 |
| steady_timer.test | LINK | 0.256759 | 0.597141 | 0.786927 | — | — | — |
| steady_timer_select.test | LINK | 0.262279 | 0.638551 | 0.809217 | — | — | — |
| strand.test | RUN | 0.579497 | 3.341217 | 2.754627 | 0.002103 | 0.002031 | 0.001988 |
| strand_select.test | RUN | 0.594370 | 3.325511 | 2.765976 | 0.002065 | 0.002062 | 0.001890 |
| stream_file.test | LINK | 0.241515 | 0.579601 | 0.606178 | — | — | — |
| stream_file_select.test | LINK | 0.253036 | 0.585264 | 0.753835 | — | — | — |
| streambuf.test | RUN | 0.149449 | 0.462367 | 0.421952 | 0.001057 | 0.001195 | 0.001248 |
| streambuf_select.test | RUN | 0.149171 | 0.459100 | 0.443877 | 0.001072 | 0.001380 | 0.001160 |
| system_timer.test | LINK | 0.558551 | 3.161163 | 2.557119 | — | — | — |
| system_timer_select.test | LINK | 0.564427 | 3.093583 | 2.525611 | — | — | — |
| system_context.test | LINK | 0.232638 | 0.527666 | 0.576990 | — | — | — |
| system_context_select.test | LINK | 0.242717 | 0.573572 | 0.732578 | — | — | — |
| system_executor.test | LINK | 0.318616 | 1.779916 | 1.204387 | — | — | — |
| system_executor_select.test | LINK | 0.331482 | 1.776943 | 1.313636 | — | — | — |
| this_coro.test | LINK | 0.086571 | 0.200609 | 0.226061 | — | — | — |
| this_coro_select.test | LINK | 0.087214 | 0.200262 | 0.226875 | — | — | — |
| thread_pool.test | RUN | 0.386652 | 2.280419 | 1.554918 | 0.003642 | 0.003338 | 0.002904 |
| thread_pool_select.test | RUN | 0.397408 | 2.317330 | 1.678154 | 0.003607 | 0.003038 | 0.003277 |
| time_traits.test | LINK | 0.195795 | 0.408498 | 0.463078 | — | — | — |
| time_traits_select.test | LINK | 0.195522 | 0.409095 | 0.461451 | — | — | — |
| ts_buffer.test | LINK | 0.186700 | 0.455958 | 0.489484 | — | — | — |
| ts_buffer_select.test | LINK | 0.187642 | 0.459656 | 0.487852 | — | — | — |
| ts_executor.test | LINK | 0.270209 | 0.642345 | 0.779886 | — | — | — |
| ts_executor_select.test | LINK | 0.280661 | 0.679551 | 0.930574 | — | — | — |
| ts_internet.test | LINK | 0.295493 | 0.696539 | 0.950675 | — | — | — |
| ts_internet_select.test | LINK | 0.298627 | 0.711407 | 0.978137 | — | — | — |
| ts_io_context.test | LINK | 0.238244 | 0.536430 | 0.586980 | — | — | — |
| ts_io_context_select.test | LINK | 0.247580 | 0.572083 | 0.736753 | — | — | — |
| ts_net.test | LINK | 0.353860 | 0.836717 | 1.183943 | — | — | — |
| ts_net_select.test | LINK | 0.361176 | 0.858071 | 1.199790 | — | — | — |
| ts_netfwd.test | LINK | 0.354201 | 0.840905 | 1.182572 | — | — | — |
| ts_netfwd_select.test | LINK | 0.360014 | 0.860001 | 1.205016 | — | — | — |
| ts_socket.test | LINK | 0.291680 | 0.658735 | 0.893293 | — | — | — |
| ts_socket_select.test | LINK | 0.296650 | 0.668453 | 0.920414 | — | — | — |
| ts_timer.test | LINK | 0.256382 | 0.584731 | 0.783545 | — | — | — |
| ts_timer_select.test | LINK | 0.262498 | 0.605063 | 0.806135 | — | — | — |
| use_awaitable.test | LINK | 0.085166 | 0.193939 | 0.224104 | — | — | — |
| use_awaitable_select.test | LINK | 0.086499 | 0.194840 | 0.222393 | — | — | — |
| wait_traits.test | LINK | 0.085538 | 0.195103 | 0.225982 | — | — | — |
| wait_traits_select.test | LINK | 0.086250 | 0.193095 | 0.224256 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.085904 | 0.194398 | 0.223033 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.085640 | 0.193285 | 0.223516 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.085018 | 0.194614 | 0.221811 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.084831 | 0.194800 | 0.220683 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.083906 | 0.193400 | 0.220539 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.084043 | 0.195869 | 0.224645 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.083347 | 0.195131 | 0.224442 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.085669 | 0.195423 | 0.224889 | — | — | — |
| windows_object_handle.test | LINK | 0.242520 | 0.540235 | 0.592610 | — | — | — |
| windows_object_handle_select.test | LINK | 0.250141 | 0.570745 | 0.744982 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.247354 | 0.565718 | 0.646734 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.258825 | 0.603292 | 0.798509 | — | — | — |
| windows_random_access_handle.test | LINK | 0.240544 | 0.538938 | 0.593773 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.249038 | 0.571097 | 0.745870 | — | — | — |
| windows_stream_handle.test | LINK | 0.239150 | 0.540437 | 0.587054 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.251819 | 0.577272 | 0.744916 | — | — | — |
| writable_pipe.test | LINK | 0.463540 | 2.461666 | 1.927499 | — | — | — |
| writable_pipe_select.test | LINK | 0.480770 | 2.554325 | 2.013213 | — | — | — |
| write.test | RUN | 1.408699 | 12.307941 | 10.811106 | 0.001706 | 0.001574 | 0.001616 |
| write_select.test | RUN | 1.423709 | 12.180328 | 10.988304 | 0.001576 | 0.001882 | 0.001851 |
| write_at.test | RUN | 1.454727 | 16.382973 | 13.762718 | 0.001618 | 0.001667 | 0.001952 |
| write_at_select.test | RUN | 1.462089 | 16.317749 | 13.749673 | 0.001658 | 0.001628 | 0.001704 |
| any_executor.test | RUN | 0.570934 | 5.458441 | 4.455396 | 0.001666 | 0.001770 | 0.001737 |
| blocking.test | RUN | 1.144151 | 7.333227 | 8.857859 | 0.002755 | 0.002755 | 0.002808 |
| blocking_adaptation.test | RUN | 0.583145 | 3.109041 | 3.914810 | 0.001767 | 0.002024 | 0.001862 |
| context_as.test | RUN | 0.357825 | 2.198389 | 1.361570 | 0.001367 | 0.001527 | 0.001216 |
| executor.test | RUN | 0.088300 | 0.199439 | 0.229883 | 0.001070 | 0.001182 | 0.000997 |
| inline_exception_handling.test | RUN | 1.144636 | 7.307259 | 8.850321 | 0.002698 | 0.002701 | 0.002730 |
| invocable_archetype.test | RUN | 0.085563 | 0.195058 | 0.222486 | 0.001068 | 0.001160 | 0.001091 |
| mapping.test | RUN | 1.202611 | 7.767680 | 9.472462 | 0.002797 | 0.002974 | 0.002958 |
| outstanding_work.test | RUN | 0.529544 | 2.982246 | 3.748602 | 0.001823 | 0.001892 | 0.001862 |
| prefer_only.test | RUN | 0.179445 | 1.155378 | 0.834169 | 0.001074 | 0.001162 | 0.001177 |
| relationship.test | RUN | 0.527395 | 2.967990 | 3.736164 | 0.001814 | 0.001778 | 0.001885 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.997×, 0.974× | 1.008× |
| clang | 0.976× | 0.983×, 0.970× | 0.982× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 4 | 0.001388s | 0.001399s | 0.001372s | byte equality observed |
| any_completion_executor_select.test | 6 | 0.001450s | 0.001385s | 0.001461s | byte equality observed |
| any_completion_handler.test | 3 | 0.001100s | 0.001066s | 0.001056s | byte equality observed |
| any_completion_handler_select.test | 5 | 0.001080s | 0.001087s | 0.001071s | byte equality observed |
| any_io_executor.test | 4 | 0.001471s | 0.001437s | 0.001442s | byte equality observed |
| any_io_executor_select.test | 4 | 0.001477s | 0.001434s | 0.001457s | byte equality observed |
| append.test | 5 | 0.001035s | 0.001040s | 0.001020s | byte equality observed |
| append_select.test | 7 | 0.001016s | 0.001023s | 0.000996s | byte equality observed |
| as_tuple.test | 7 | 0.001110s | 0.001101s | 0.001103s | byte equality observed |
| as_tuple_select.test | 5 | 0.001053s | 0.001028s | 0.001036s | byte equality observed |
| bind_allocator.test | 1 | 0.001484s | 0.001467s | 0.001459s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001336s | 0.001263s | 0.001243s | byte equality observed |
| bind_cancellation_slot.test | 7 | 0.001071s | 0.001061s | 0.001036s | byte equality observed |
| bind_cancellation_slot_select.test | 6 | 0.001038s | 0.001030s | 0.001022s | byte equality observed |
| bind_executor.test | 1 | 0.001414s | 0.001383s | 0.001358s | byte equality observed |
| bind_executor_select.test | 1 | 0.001333s | 0.001373s | 0.001331s | byte equality observed |
| bind_immediate_executor.test | 9 | 0.001007s | 0.000994s | 0.000995s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001007s | 0.001001s | 0.000987s | byte equality observed |
| buffer.test | 10 | 0.000985s | 0.000963s | 0.000950s | byte equality observed |
| buffer_select.test | 9 | 0.000982s | 0.000955s | 0.000952s | byte equality observed |
| buffered_read_stream.test | 7 | 0.001193s | 0.001182s | 0.001166s | byte equality observed |
| buffered_read_stream_select.test | 8 | 0.001162s | 0.001146s | 0.001151s | byte equality observed |
| buffered_stream.test | 8 | 0.001185s | 0.001171s | 0.001174s | byte equality observed |
| buffered_stream_select.test | 7 | 0.001170s | 0.001164s | 0.001160s | byte equality observed |
| buffered_write_stream.test | 8 | 0.001188s | 0.001170s | 0.001165s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001165s | 0.001140s | 0.001155s | byte equality observed |
| buffers_iterator.test | 8 | 0.000955s | 0.000942s | 0.000949s | byte equality observed |
| buffers_iterator_select.test | 7 | 0.000953s | 0.000936s | 0.000943s | byte equality observed |
| cancel_after.test | 1 | 0.002994s | 0.002902s | 0.002576s | byte equality observed |
| cancel_after_select.test | 1 | 0.002815s | 0.002715s | 0.002425s | byte equality observed |
| cancel_at.test | 1 | 0.002767s | 0.002505s | 0.002411s | byte equality observed |
| cancel_at_select.test | 1 | 0.002626s | 0.002583s | 0.002220s | byte equality observed |
| co_composed.test | 10 | 0.000927s | 0.000931s | 0.000933s | byte equality observed |
| co_composed_select.test | 10 | 0.000931s | 0.000926s | 0.000924s | byte equality observed |
| compose.test | 1 | 0.001332s | 0.001548s | 0.001372s | byte equality observed |
| compose_select.test | 1 | 0.001347s | 0.001381s | 0.001310s | byte equality observed |
| composed.test | 1 | 0.001362s | 0.001313s | 0.001323s | byte equality observed |
| composed_select.test | 1 | 0.001332s | 0.001399s | 0.001361s | byte equality observed |
| config.test | 10 | 0.000978s | 0.000977s | 0.000955s | byte equality observed |
| config_select.test | 10 | 0.000974s | 0.000986s | 0.000963s | byte equality observed |
| connect_pipe.test | 10 | 0.001010s | 0.001003s | 0.000995s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000997s | 0.000988s | 0.000971s | byte equality observed |
| consign.test | 10 | 0.000998s | 0.000996s | 0.000991s | byte equality observed |
| consign_select.test | 10 | 0.000977s | 0.000969s | 0.000951s | byte equality observed |
| deadline_timer.test | 1 | 0.002894s | 0.002800s | 0.002888s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002620s | 0.002596s | 0.002572s | byte equality observed |
| deferred.test | 10 | 0.001114s | 0.001044s | 0.001075s | byte equality observed |
| deferred_select.test | 10 | 0.001028s | 0.001028s | 0.000959s | byte equality observed |
| disposition.test | 10 | 0.001038s | 0.001081s | 0.000982s | byte equality observed |
| disposition_select.test | 10 | 0.000994s | 0.001038s | 0.000960s | byte equality observed |
| error.test | 10 | 0.000969s | 0.000998s | 0.000911s | byte equality observed |
| error_select.test | 10 | 0.000981s | 0.000982s | 0.000912s | byte equality observed |
| inline_executor.test | 10 | 0.000987s | 0.001013s | 0.000966s | byte equality observed |
| inline_executor_select.test | 10 | 0.000990s | 0.000985s | 0.000965s | byte equality observed |
| inline_or_executor.test | 10 | 0.000999s | 0.000976s | 0.000992s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000994s | 0.000969s | 0.000964s | byte equality observed |
| io_context.test | 1 | 0.001874s | 0.001858s | 0.001843s | byte equality observed |
| io_context_select.test | 1 | 0.001694s | 0.001693s | 0.001684s | byte equality observed |
| io_context_strand.test | 1 | 0.001616s | 0.001497s | 0.001544s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001540s | 0.001497s | 0.001543s | byte equality observed |
| ip_host_name.test | 10 | 0.000903s | 0.000907s | 0.000891s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000902s | 0.000901s | 0.000886s | byte equality observed |
| ip_icmp.test | 10 | 0.000921s | 0.000936s | 0.000899s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000938s | 0.000933s | 0.000907s | byte equality observed |
| ip_multicast.test | 10 | 0.001022s | 0.001018s | 0.000990s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000998s | 0.000981s | 0.000973s | byte equality observed |
| ip_tcp.test | 10 | 0.001231s | 0.001222s | 0.001212s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001182s | 0.001182s | 0.001171s | byte equality observed |
| ip_udp.test | 10 | 0.001026s | 0.001014s | 0.001014s | byte equality observed |
| ip_udp_select.test | 10 | 0.001034s | 0.001016s | 0.000991s | byte equality observed |
| ip_unicast.test | 10 | 0.000995s | 0.000979s | 0.000971s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000960s | 0.000972s | 0.000953s | byte equality observed |
| ip_v6_only.test | 10 | 0.001000s | 0.000979s | 0.000950s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000980s | 0.000980s | 0.000961s | byte equality observed |
| is_read_buffered.test | 10 | 0.000927s | 0.000910s | 0.000907s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000924s | 0.000908s | 0.000899s | byte equality observed |
| is_write_buffered.test | 10 | 0.000922s | 0.000903s | 0.000903s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000920s | 0.000904s | 0.000899s | byte equality observed |
| prepend.test | 10 | 0.000981s | 0.000982s | 0.000972s | byte equality observed |
| prepend_select.test | 10 | 0.000966s | 0.000948s | 0.000940s | byte equality observed |
| read.test | 10 | 0.001350s | 0.001336s | 0.001297s | byte equality observed |
| read_at.test | 10 | 0.001609s | 0.001682s | 0.001599s | byte equality observed |
| read_at_select.test | 10 | 0.001616s | 0.001673s | 0.001587s | byte equality observed |
| read_select.test | 10 | 0.001355s | 0.001344s | 0.001301s | byte equality observed |
| read_until.test | 10 | 0.001116s | 0.001088s | 0.001084s | byte equality observed |
| read_until_select.test | 10 | 0.001108s | 0.001083s | 0.001071s | byte equality observed |
| recycling_allocator.test | 10 | 0.000913s | 0.000914s | 0.000898s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000915s | 0.000906s | 0.000899s | byte equality observed |
| signal_set.test | 10 | 0.000946s | 0.000937s | 0.000919s | byte equality observed |
| signal_set_select.test | 10 | 0.000934s | 0.000931s | 0.000916s | byte equality observed |
| socket_base.test | 10 | 0.001028s | 0.001018s | 0.001009s | byte equality observed |
| socket_base_select.test | 10 | 0.001008s | 0.000999s | 0.000992s | byte equality observed |
| spawn.test | 10 | 0.001134s | 0.001114s | 0.001111s | byte equality observed |
| spawn_select.test | 10 | 0.001129s | 0.001109s | 0.001109s | byte equality observed |
| static_thread_pool.test | 10 | 0.000916s | 0.000905s | 0.000906s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000914s | 0.000899s | 0.000915s | byte equality observed |
| strand.test | 1 | 0.001768s | 0.001739s | 0.001711s | byte equality observed |
| strand_select.test | 1 | 0.001546s | 0.001518s | 0.001570s | byte equality observed |
| streambuf.test | 10 | 0.001179s | 0.001183s | 0.001104s | byte equality observed |
| streambuf_select.test | 10 | 0.001141s | 0.001143s | 0.001058s | byte equality observed |
| thread_pool.test | 3 | 0.005132s | 0.004757s | 0.004423s | byte equality observed |
| thread_pool_select.test | 4 | 0.004045s | 0.004008s | 0.004035s | byte equality observed |
| write.test | 10 | 0.001478s | 0.001405s | 0.001418s | byte equality observed |
| write_at.test | 10 | 0.001599s | 0.001605s | 0.001547s | byte equality observed |
| write_at_select.test | 10 | 0.001545s | 0.001557s | 0.001515s | byte equality observed |
| write_select.test | 10 | 0.001395s | 0.001368s | 0.001365s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43947487361).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
