# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.862797 | 5.045592 | 5.116284 | 0.002890 | 0.002621 | 0.002968 |
| any_completion_executor_select.test | RUN | 0.875850 | 5.007002 | 5.716630 | 0.002811 | 0.002544 | 0.002731 |
| any_completion_handler.test | RUN | 0.991107 | 4.436434 | 4.665992 | 0.002169 | 0.002231 | 0.002099 |
| any_completion_handler_select.test | RUN | 0.972450 | 4.587409 | 5.144628 | 0.002251 | 0.002436 | 0.002448 |
| any_io_executor.test | RUN | 0.888110 | 5.397771 | 5.561872 | 0.002467 | 0.002928 | 0.002874 |
| any_io_executor_select.test | RUN | 0.917318 | 5.293759 | 5.934470 | 0.002508 | 0.002838 | 0.002504 |
| append.test | RUN | 0.816006 | 4.253191 | 4.186818 | 0.001806 | 0.002244 | 0.002170 |
| append_select.test | RUN | 0.813169 | 4.323400 | 4.332762 | 0.002059 | 0.002344 | 0.002103 |
| as_tuple.test | RUN | 1.046283 | 5.136515 | 5.916804 | 0.002316 | 0.002144 | 0.002410 |
| as_tuple_select.test | RUN | 1.061207 | 5.175136 | 5.891788 | 0.001868 | 0.002180 | 0.001836 |
| associated_allocator.test | LINK | 0.228568 | 0.454821 | 0.687422 | — | — | — |
| associated_allocator_select.test | LINK | 0.221093 | 0.465396 | 0.701660 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.239483 | 0.494597 | 0.766821 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.242897 | 0.506465 | 0.766261 | — | — | — |
| associated_executor.test | LINK | 0.349180 | 0.890432 | 1.223133 | — | — | — |
| associated_executor_select.test | LINK | 0.345732 | 0.875604 | 1.229779 | — | — | — |
| associated_immediate_executor.test | LINK | 0.315387 | 0.819011 | 1.113014 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.323486 | 0.801423 | 1.107869 | — | — | — |
| associator.test | LINK | 0.179571 | 0.386114 | 0.567529 | — | — | — |
| associator_select.test | LINK | 0.180017 | 0.395298 | 0.602296 | — | — | — |
| awaitable.test | LINK | 0.179443 | 0.387325 | 0.534516 | — | — | — |
| awaitable_select.test | LINK | 0.180632 | 0.380962 | 0.596811 | — | — | — |
| basic_datagram_socket.test | LINK | 0.543334 | 1.212880 | 2.306315 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.549541 | 1.238522 | 2.346597 | — | — | — |
| basic_deadline_timer.test | LINK | 0.649953 | 1.444032 | 2.648086 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.668575 | 1.477154 | 2.654972 | — | — | — |
| basic_file.test | LINK | 0.182800 | 0.387296 | 0.590968 | — | — | — |
| basic_file_select.test | LINK | 0.184777 | 0.392595 | 0.568470 | — | — | — |
| basic_random_access_file.test | LINK | 0.182182 | 0.386820 | 0.578728 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.182537 | 0.391912 | 0.563941 | — | — | — |
| basic_raw_socket.test | LINK | 0.553334 | 1.221220 | 2.267980 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.562480 | 1.264215 | 2.274250 | — | — | — |
| basic_readable_pipe.test | LINK | 0.512667 | 1.162267 | 1.949105 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.558537 | 1.233547 | 2.418435 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.553516 | 1.221496 | 2.221009 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.560947 | 1.274479 | 2.373381 | — | — | — |
| basic_signal_set.test | LINK | 0.504951 | 1.113285 | 1.720535 | — | — | — |
| basic_signal_set_select.test | LINK | 0.545127 | 1.198943 | 2.191309 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.561807 | 1.194238 | 2.352489 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.569784 | 1.250708 | 2.421692 | — | — | — |
| basic_stream_file.test | LINK | 0.177047 | 0.399063 | 0.562082 | — | — | — |
| basic_stream_file_select.test | LINK | 0.176852 | 0.408930 | 0.566675 | — | — | — |
| basic_stream_socket.test | LINK | 0.544536 | 1.210795 | 2.304280 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.564423 | 1.246043 | 2.301469 | — | — | — |
| basic_streambuf.test | LINK | 0.269453 | 0.588121 | 0.858009 | — | — | — |
| basic_streambuf_select.test | LINK | 0.273718 | 0.589942 | 0.863759 | — | — | — |
| basic_waitable_timer.test | LINK | 0.512242 | 1.137793 | 2.156651 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.527156 | 1.165512 | 2.211333 | — | — | — |
| basic_writable_pipe.test | LINK | 0.518607 | 1.183119 | 1.918528 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.537432 | 1.250560 | 2.426969 | — | — | — |
| bind_allocator.test | RUN | 0.856728 | 4.289981 | 4.674231 | 0.002542 | 0.002721 | 0.002600 |
| bind_allocator_select.test | RUN | 0.884502 | 4.405036 | 4.697996 | 0.002152 | 0.002532 | 0.002589 |
| bind_cancellation_slot.test | RUN | 0.869888 | 4.329135 | 4.681204 | 0.001766 | 0.001760 | 0.001756 |
| bind_cancellation_slot_select.test | RUN | 0.895793 | 4.351584 | 4.469665 | 0.001533 | 0.001623 | 0.001612 |
| bind_executor.test | RUN | 0.554630 | 2.960266 | 2.744693 | 0.002265 | 0.002864 | 0.003034 |
| bind_executor_select.test | RUN | 0.562987 | 2.978316 | 3.012694 | 0.002130 | 0.002180 | 0.002819 |
| bind_immediate_executor.test | RUN | 0.417599 | 2.625906 | 2.079404 | 0.002090 | 0.001612 | 0.001438 |
| bind_immediate_executor_select.test | RUN | 0.428736 | 2.443974 | 1.971054 | 0.001444 | 0.001623 | 0.001522 |
| buffer.test | RUN | 0.253864 | 1.031526 | 1.107542 | 0.001495 | 0.001552 | 0.001409 |
| buffer_select.test | RUN | 0.257564 | 1.017372 | 1.095733 | 0.001442 | 0.001497 | 0.001299 |
| buffer_registration.test | LINK | 0.205613 | 0.521127 | 0.646437 | — | — | — |
| buffer_registration_select.test | LINK | 0.206342 | 0.520791 | 0.658195 | — | — | — |
| buffered_read_stream.test | RUN | 0.917104 | 6.967522 | 7.337290 | 0.001922 | 0.002637 | 0.002812 |
| buffered_read_stream_select.test | RUN | 0.938984 | 6.945545 | 6.811353 | 0.001894 | 0.002754 | 0.003067 |
| buffered_stream.test | RUN | 1.757105 | 10.293652 | 11.222678 | 0.002679 | 0.002788 | 0.002881 |
| buffered_stream_select.test | RUN | 1.861180 | 10.323534 | 10.816443 | 0.002607 | 0.002844 | 0.002722 |
| buffered_write_stream.test | RUN | 1.683846 | 8.861494 | 9.492894 | 0.002460 | 0.002562 | 0.002878 |
| buffered_write_stream_select.test | RUN | 1.672054 | 8.901107 | 9.325592 | 0.002458 | 0.002659 | 0.002874 |
| buffers_iterator.test | RUN | 0.517252 | 0.885755 | 1.684603 | 0.002196 | 0.002094 | 0.002058 |
| buffers_iterator_select.test | RUN | 0.513040 | 0.906128 | 1.608306 | 0.002026 | 0.002068 | 0.002074 |
| cancel_after.test | RUN | 1.350869 | 6.953728 | 6.939089 | 0.003950 | 0.004728 | 0.004118 |
| cancel_after_select.test | RUN | 1.368822 | 7.001951 | 6.800460 | 0.003825 | 0.004270 | 0.003441 |
| cancel_at.test | RUN | 1.291257 | 5.735589 | 6.234016 | 0.003595 | 0.003931 | 0.003729 |
| cancel_at_select.test | RUN | 1.201897 | 5.669982 | 6.161945 | 0.003542 | 0.003547 | 0.003407 |
| cancellation_signal.test | LINK | 0.149030 | 0.302760 | 0.425646 | — | — | — |
| cancellation_signal_select.test | LINK | 0.145369 | 0.309229 | 0.431522 | — | — | — |
| cancellation_state.test | LINK | 0.199302 | 0.317522 | 0.412682 | — | — | — |
| cancellation_state_select.test | LINK | 0.204858 | 0.312236 | 0.413757 | — | — | — |
| cancellation_type.test | LINK | 0.179811 | 0.244528 | 0.331561 | — | — | — |
| cancellation_type_select.test | LINK | 0.178587 | 0.243917 | 0.339356 | — | — | — |
| co_composed.test | RUN | 0.177393 | 0.251591 | 0.559989 | 0.001917 | 0.001461 | 0.001834 |
| co_composed_select.test | RUN | 0.180158 | 0.254079 | 0.579592 | 0.001758 | 0.001677 | 0.001740 |
| co_spawn.test | LINK | 0.180233 | 0.252932 | 0.569290 | — | — | — |
| co_spawn_select.test | LINK | 0.179990 | 0.243962 | 0.583697 | — | — | — |
| completion_condition.test | LINK | 0.232064 | 0.399560 | 0.771863 | — | — | — |
| completion_condition_select.test | LINK | 0.235063 | 0.583221 | 0.791957 | — | — | — |
| compose.test | RUN | 1.063425 | 5.377684 | 5.773106 | 0.002342 | 0.002548 | 0.002217 |
| compose_select.test | RUN | 1.074573 | 5.379764 | 5.787442 | 0.001990 | 0.002554 | 0.002330 |
| composed.test | RUN | 1.030199 | 5.382815 | 5.623304 | 0.002218 | 0.002134 | 0.002526 |
| composed_select.test | RUN | 1.027053 | 5.163817 | 5.579057 | 0.001861 | 0.002308 | 0.002748 |
| config.test | RUN | 0.461620 | 3.585630 | 2.351898 | 0.002013 | 0.002116 | 0.002294 |
| config_select.test | RUN | 0.536773 | 3.584147 | 2.868177 | 0.002178 | 0.002276 | 0.002244 |
| connect.test | LINK | 1.715579 | 11.402308 | 11.822962 | — | — | — |
| connect_select.test | LINK | 1.730432 | 11.417054 | 11.815016 | — | — | — |
| connect_pipe.test | RUN | 0.913978 | 4.290994 | 4.550470 | 0.002175 | 0.002184 | 0.002150 |
| connect_pipe_select.test | RUN | 0.943818 | 4.434795 | 4.925414 | 0.002121 | 0.002248 | 0.002374 |
| consign.test | RUN | 0.790756 | 4.167160 | 4.282458 | 0.002192 | 0.002127 | 0.002098 |
| consign_select.test | RUN | 0.822899 | 4.283256 | 4.307909 | 0.002400 | 0.002247 | 0.001808 |
| coroutine.test | LINK | 0.201077 | 0.464604 | 0.637911 | — | — | — |
| coroutine_select.test | LINK | 0.193320 | 0.457248 | 0.664099 | — | — | — |
| deadline_timer.test | RUN | 1.185515 | 5.436169 | 5.967940 | 0.003647 | 0.003922 | 0.004000 |
| deadline_timer_select.test | RUN | 1.190320 | 5.428368 | 6.025965 | 0.003071 | 0.003220 | 0.003554 |
| deferred.test | RUN | 0.205688 | 0.414427 | 0.658966 | 0.002181 | 0.002151 | 0.002119 |
| deferred_select.test | RUN | 0.205072 | 0.428235 | 0.658551 | 0.002000 | 0.002194 | 0.002096 |
| detached.test | LINK | 0.225879 | 0.474675 | 0.722674 | — | — | — |
| detached_select.test | LINK | 0.227399 | 0.495637 | 0.712814 | — | — | — |
| disposition.test | RUN | 0.267589 | 1.085944 | 1.255690 | 0.001546 | 0.002137 | 0.002254 |
| disposition_select.test | RUN | 0.198617 | 1.086748 | 1.236766 | 0.001535 | 0.002096 | 0.002162 |
| error.test | RUN | 0.183868 | 1.041110 | 1.130556 | 0.001585 | 0.002192 | 0.002199 |
| error_select.test | RUN | 0.181703 | 1.035822 | 1.081000 | 0.001481 | 0.002121 | 0.002149 |
| file_base.test | LINK | 0.225286 | 0.871622 | 1.184317 | — | — | — |
| file_base_select.test | LINK | 0.231009 | 0.797102 | 0.953306 | — | — | — |
| fwd_first.test | LINK | 0.504862 | 1.247377 | 2.000488 | — | — | — |
| fwd_last.test | LINK | 0.527458 | 1.161944 | 2.044950 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.199691 | 0.483606 | 0.756339 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.202944 | 0.480170 | 0.730787 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.802264 | 4.109616 | 3.786680 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.795357 | 4.219559 | 3.796560 | — | — | — |
| generic_raw_protocol.test | LINK | 0.813878 | 4.141319 | 3.836314 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.789141 | 4.266528 | 3.803397 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.692950 | 3.463780 | 3.251088 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.689090 | 3.482744 | 3.301306 | — | — | — |
| generic_stream_protocol.test | LINK | 0.755089 | 3.713862 | 3.542628 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.754809 | 3.801981 | 3.565944 | — | — | — |
| high_resolution_timer.test | LINK | 0.337551 | 0.726021 | 1.140267 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.341912 | 0.754646 | 1.165117 | — | — | — |
| immediate.test | LINK | 0.225481 | 0.554944 | 0.720378 | — | — | — |
| immediate_select.test | LINK | 0.228093 | 0.558257 | 0.720629 | — | — | — |
| inline_executor.test | RUN | 0.274486 | 0.847155 | 1.050618 | 0.001586 | 0.001623 | 0.001508 |
| inline_executor_select.test | RUN | 0.279458 | 0.853184 | 1.063826 | 0.001683 | 0.001628 | 0.001502 |
| inline_or_executor.test | RUN | 0.449273 | 2.444288 | 1.974072 | 0.001582 | 0.002166 | 0.001497 |
| inline_or_executor_select.test | RUN | 0.459514 | 2.558851 | 2.141899 | 0.001533 | 0.001652 | 0.001506 |
| io_context.test | RUN | 0.648563 | 3.704310 | 3.390492 | 0.002654 | 0.002746 | 0.002733 |
| io_context_select.test | RUN | 0.642293 | 3.693953 | 3.405212 | 0.002643 | 0.002442 | 0.002652 |
| io_context_strand.test | RUN | 0.607770 | 4.192561 | 3.925921 | 0.002632 | 0.003066 | 0.003102 |
| io_context_strand_select.test | RUN | 0.608872 | 4.440306 | 4.495408 | 0.002404 | 0.002535 | 0.002603 |
| ip_address.test | LINK | 0.231173 | 1.196929 | 1.684606 | — | — | — |
| ip_address_select.test | LINK | 0.233828 | 1.178952 | 1.653861 | — | — | — |
| ip_address_v4.test | LINK | 0.232006 | 1.268781 | 1.798120 | — | — | — |
| ip_address_v4_select.test | LINK | 0.239732 | 1.268102 | 1.269213 | — | — | — |
| ip_address_v6.test | LINK | 0.268555 | 1.553872 | 1.202570 | — | — | — |
| ip_address_v6_select.test | LINK | 0.273078 | 1.286713 | 1.225541 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.205946 | 0.512163 | 0.775354 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.207624 | 0.522974 | 0.788631 | — | — | — |
| ip_basic_resolver.test | LINK | 0.327994 | 0.744082 | 1.204442 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.343043 | 0.776654 | 1.222157 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.114001 | 0.245303 | 0.373350 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.117364 | 0.248661 | 0.334377 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.204441 | 0.505644 | 0.753050 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.205058 | 0.494538 | 0.775230 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.197172 | 0.483053 | 0.731875 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.201607 | 0.477105 | 0.722616 | — | — | — |
| ip_host_name.test | RUN | 0.207754 | 0.635767 | 0.830040 | 0.001484 | 0.001489 | 0.001425 |
| ip_host_name_select.test | RUN | 0.214021 | 0.631037 | 0.829241 | 0.001479 | 0.001511 | 0.001456 |
| ip_icmp.test | RUN | 0.979823 | 7.194875 | 7.929920 | 0.001593 | 0.002201 | 0.002196 |
| ip_icmp_select.test | RUN | 0.991265 | 7.702403 | 8.332270 | 0.001555 | 0.001994 | 0.002186 |
| ip_multicast.test | RUN | 0.580489 | 4.457177 | 5.042055 | 0.001646 | 0.002323 | 0.002058 |
| ip_multicast_select.test | RUN | 0.593625 | 4.433362 | 5.066934 | 0.001590 | 0.002062 | 0.002112 |
| ip_resolver_query_base.test | LINK | 0.135618 | 0.418450 | 0.586188 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.132586 | 0.415018 | 0.613080 | — | — | — |
| ip_tcp.test | RUN | 1.482725 | 12.651348 | 12.761742 | 0.002214 | 0.002964 | 0.004228 |
| ip_tcp_select.test | RUN | 1.498334 | 13.343087 | 12.400755 | 0.002196 | 0.002758 | 0.003218 |
| ip_udp.test | RUN | 1.042383 | 9.104475 | 8.852061 | 0.001696 | 0.002493 | 0.002330 |
| ip_udp_select.test | RUN | 1.047471 | 9.422717 | 8.683705 | 0.001645 | 0.002389 | 0.002370 |
| ip_unicast.test | RUN | 0.582281 | 4.133688 | 4.296967 | 0.002240 | 0.002122 | 0.002310 |
| ip_unicast_select.test | RUN | 0.725140 | 4.258656 | 4.292113 | 0.002194 | 0.002212 | 0.002149 |
| ip_v6_only.test | RUN | 0.884138 | 4.203179 | 4.503712 | 0.002008 | 0.002280 | 0.002301 |
| ip_v6_only_select.test | RUN | 0.882602 | 4.332130 | 4.595148 | 0.002062 | 0.001632 | 0.002274 |
| is_read_buffered.test | RUN | 0.621349 | 1.375240 | 2.558094 | 0.001884 | 0.002145 | 0.002264 |
| is_read_buffered_select.test | RUN | 0.628257 | 1.462196 | 2.627888 | 0.002064 | 0.002204 | 0.002129 |
| is_write_buffered.test | RUN | 0.618992 | 1.382615 | 2.611092 | 0.002117 | 0.002140 | 0.002181 |
| is_write_buffered_select.test | RUN | 0.628470 | 1.424037 | 2.679289 | 0.001862 | 0.002109 | 0.002015 |
| local_basic_endpoint.test | LINK | 0.308460 | 0.753117 | 1.417337 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.326502 | 0.773485 | 1.379550 | — | — | — |
| local_connect_pair.test | LINK | 0.802011 | 4.185573 | 4.276242 | — | — | — |
| local_connect_pair_select.test | LINK | 0.819645 | 4.143229 | 4.248449 | — | — | — |
| local_datagram_protocol.test | LINK | 1.079914 | 5.447228 | 5.767467 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.105036 | 5.410493 | 5.642136 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.096806 | 5.280574 | 5.681704 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.108413 | 5.371201 | 5.671869 | — | — | — |
| local_stream_protocol.test | LINK | 1.014925 | 5.044860 | 5.464835 | — | — | — |
| local_stream_protocol_select.test | LINK | 1.047131 | 5.128496 | 5.340438 | — | — | — |
| placeholders.test | LINK | 0.193842 | 0.425405 | 0.631481 | — | — | — |
| placeholders_select.test | LINK | 0.196986 | 0.426284 | 0.651098 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.525243 | 1.129096 | 1.906864 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.553175 | 1.187527 | 2.409031 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.538872 | 1.165548 | 1.884301 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.548216 | 1.199776 | 2.397929 | — | — | — |
| posix_descriptor_base.test | LINK | 0.217493 | 0.453605 | 0.651382 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.213593 | 0.449018 | 0.663655 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.044191 | 5.072992 | 5.270656 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.075798 | 5.132852 | 5.502074 | — | — | — |
| prepend.test | RUN | 0.812992 | 4.150842 | 4.296046 | 0.001974 | 0.002159 | 0.002102 |
| prepend_select.test | RUN | 0.825250 | 4.328576 | 4.261409 | 0.001918 | 0.002064 | 0.001824 |
| random_access_file.test | LINK | 0.467872 | 1.036699 | 1.504345 | — | — | — |
| random_access_file_select.test | LINK | 0.503086 | 1.088310 | 2.043516 | — | — | — |
| read.test | RUN | 2.536691 | 25.584753 | 23.397217 | 0.002884 | 0.002974 | 0.002754 |
| read_select.test | RUN | 2.586482 | 25.270530 | 23.926661 | 0.002935 | 0.002835 | 0.002953 |
| read_at.test | RUN | 2.549890 | 34.757452 | 32.283381 | 0.003616 | 0.003780 | 0.003510 |
| read_at_select.test | RUN | 2.588635 | 34.194805 | 32.415752 | 0.003756 | 0.003555 | 0.002913 |
| read_until.test | RUN | 1.330019 | 10.156749 | 8.510662 | 0.002132 | 0.002428 | 0.002462 |
| read_until_select.test | RUN | 1.343331 | 10.239757 | 8.903056 | 0.002074 | 0.002618 | 0.002490 |
| readable_pipe.test | LINK | 0.839047 | 4.302820 | 4.172025 | — | — | — |
| readable_pipe_select.test | LINK | 0.863428 | 4.536390 | 4.617028 | — | — | — |
| recycling_allocator.test | RUN | 0.258349 | 0.637422 | 0.869001 | 0.002030 | 0.002216 | 0.002194 |
| recycling_allocator_select.test | RUN | 0.263028 | 0.630020 | 0.926615 | 0.001882 | 0.002061 | 0.002172 |
| redirect_disposition.test | LINK | 1.080632 | 5.861376 | 6.678421 | — | — | — |
| redirect_disposition_select.test | LINK | 1.102663 | 5.886715 | 6.496601 | — | — | — |
| redirect_error.test | LINK | 0.977617 | 4.914430 | 5.578571 | — | — | — |
| redirect_error_select.test | LINK | 0.995197 | 4.903542 | 5.709867 | — | — | — |
| registered_buffer.test | LINK | 0.257842 | 0.523723 | 0.817286 | — | — | — |
| registered_buffer_select.test | LINK | 0.260915 | 0.525278 | 0.862651 | — | — | — |
| signal_set.test | RUN | 0.806616 | 4.168426 | 3.816291 | 0.001956 | 0.002092 | 0.002084 |
| signal_set_select.test | RUN | 0.842152 | 4.317524 | 4.298324 | 0.002105 | 0.002143 | 0.002166 |
| signal_set_base.test | LINK | 0.217528 | 0.409616 | 0.629324 | — | — | — |
| signal_set_base_select.test | LINK | 0.218068 | 0.412717 | 0.615537 | — | — | — |
| socket_base.test | RUN | 1.023096 | 6.215714 | 6.106091 | 0.002490 | 0.002476 | 0.002438 |
| socket_base_select.test | RUN | 1.031757 | 6.054784 | 6.034952 | 0.002272 | 0.002024 | 0.002372 |
| spawn.test | RUN | 1.676641 | 9.840030 | 10.142578 | 0.002446 | 0.002644 | 0.002513 |
| spawn_select.test | RUN | 1.712152 | 9.940084 | 10.223959 | 0.002557 | 0.002540 | 0.002559 |
| static_thread_pool.test | RUN | 0.460898 | 1.034605 | 1.441484 | 0.002116 | 0.002068 | 0.002223 |
| static_thread_pool_select.test | RUN | 0.483408 | 1.106694 | 2.001904 | 0.001930 | 0.001996 | 0.002153 |
| steady_timer.test | LINK | 0.507381 | 1.171851 | 2.076471 | — | — | — |
| steady_timer_select.test | LINK | 0.539177 | 1.144322 | 2.083298 | — | — | — |
| strand.test | RUN | 1.097155 | 5.593193 | 6.110856 | 0.002928 | 0.002950 | 0.003158 |
| strand_select.test | RUN | 1.098049 | 5.548314 | 6.098122 | 0.002436 | 0.002592 | 0.002964 |
| stream_file.test | LINK | 0.512142 | 1.064572 | 1.539644 | — | — | — |
| stream_file_select.test | LINK | 0.519758 | 1.103410 | 1.955979 | — | — | — |
| streambuf.test | RUN | 0.291097 | 0.854147 | 1.104259 | 0.001456 | 0.002180 | 0.002150 |
| streambuf_select.test | RUN | 0.250476 | 0.659114 | 0.900090 | 0.001475 | 0.001508 | 0.001527 |
| system_timer.test | LINK | 0.644011 | 3.582021 | 3.920908 | — | — | — |
| system_timer_select.test | LINK | 0.651069 | 3.391483 | 3.325309 | — | — | — |
| system_context.test | LINK | 0.293719 | 0.650730 | 0.819336 | — | — | — |
| system_context_select.test | LINK | 0.320879 | 0.681626 | 1.086194 | — | — | — |
| system_executor.test | LINK | 0.381243 | 2.014863 | 1.578933 | — | — | — |
| system_executor_select.test | LINK | 0.396967 | 1.941395 | 1.801322 | — | — | — |
| this_coro.test | LINK | 0.116718 | 0.246023 | 0.330074 | — | — | — |
| this_coro_select.test | LINK | 0.119574 | 0.243486 | 0.341417 | — | — | — |
| thread_pool.test | RUN | 0.451425 | 3.466401 | 2.065055 | 0.003159 | 0.003861 | 0.003290 |
| thread_pool_select.test | RUN | 0.466896 | 3.604185 | 3.534579 | 0.003088 | 0.003734 | 0.003827 |
| time_traits.test | LINK | 0.252685 | 0.847814 | 1.301139 | — | — | — |
| time_traits_select.test | LINK | 0.262428 | 0.847754 | 1.232288 | — | — | — |
| ts_buffer.test | LINK | 0.246773 | 0.892256 | 1.290220 | — | — | — |
| ts_buffer_select.test | LINK | 0.250345 | 0.904686 | 1.252058 | — | — | — |
| ts_executor.test | LINK | 0.335623 | 1.212645 | 1.943361 | — | — | — |
| ts_executor_select.test | LINK | 0.366732 | 1.287401 | 2.532756 | — | — | — |
| ts_internet.test | LINK | 0.375063 | 1.362394 | 2.599412 | — | — | — |
| ts_internet_select.test | LINK | 0.394850 | 1.398196 | 2.558134 | — | — | — |
| ts_io_context.test | LINK | 0.299928 | 1.037224 | 1.490827 | — | — | — |
| ts_io_context_select.test | LINK | 0.315660 | 1.115450 | 1.981688 | — | — | — |
| ts_net.test | LINK | 0.442661 | 1.582244 | 3.193886 | — | — | — |
| ts_net_select.test | LINK | 0.457092 | 1.660349 | 3.202095 | — | — | — |
| ts_netfwd.test | LINK | 0.444865 | 1.623313 | 3.103964 | — | — | — |
| ts_netfwd_select.test | LINK | 0.471961 | 1.688566 | 3.164024 | — | — | — |
| ts_socket.test | LINK | 0.376019 | 1.303727 | 2.488028 | — | — | — |
| ts_socket_select.test | LINK | 0.379267 | 1.308386 | 2.486597 | — | — | — |
| ts_timer.test | LINK | 0.327915 | 1.159355 | 2.136444 | — | — | — |
| ts_timer_select.test | LINK | 0.338121 | 1.181949 | 2.162630 | — | — | — |
| use_awaitable.test | LINK | 0.116380 | 0.391807 | 0.556918 | — | — | — |
| use_awaitable_select.test | LINK | 0.113738 | 0.385011 | 0.590211 | — | — | — |
| wait_traits.test | LINK | 0.142450 | 0.384046 | 0.559044 | — | — | — |
| wait_traits_select.test | LINK | 0.143687 | 0.383911 | 0.545816 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.179736 | 0.390870 | 0.565681 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.181315 | 0.391972 | 0.537619 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.179349 | 0.391272 | 0.581828 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.181288 | 0.396966 | 0.558301 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.181709 | 0.380121 | 0.571113 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.182912 | 0.383843 | 0.564460 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.181118 | 0.381623 | 0.586885 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.184472 | 0.386691 | 0.539345 | — | — | — |
| windows_object_handle.test | LINK | 0.477115 | 1.032691 | 1.520766 | — | — | — |
| windows_object_handle_select.test | LINK | 0.501860 | 1.090076 | 2.044326 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.501546 | 1.100033 | 1.661940 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.530059 | 1.179675 | 2.157182 | — | — | — |
| windows_random_access_handle.test | LINK | 0.480550 | 1.035495 | 1.514800 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.505761 | 1.029757 | 2.035290 | — | — | — |
| windows_stream_handle.test | LINK | 0.478722 | 0.969649 | 1.570669 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.514270 | 1.129224 | 2.043886 | — | — | — |
| writable_pipe.test | LINK | 0.864020 | 4.172380 | 4.398726 | — | — | — |
| writable_pipe_select.test | LINK | 0.903104 | 4.412513 | 4.786211 | — | — | — |
| write.test | RUN | 2.540192 | 21.254940 | 23.148371 | 0.002900 | 0.002922 | 0.002686 |
| write_select.test | RUN | 2.597892 | 21.429167 | 23.387768 | 0.002938 | 0.002983 | 0.002934 |
| write_at.test | RUN | 2.606038 | 29.872390 | 30.233556 | 0.003195 | 0.002923 | 0.003042 |
| write_at_select.test | RUN | 2.667564 | 29.108591 | 30.817013 | 0.003210 | 0.003354 | 0.003360 |
| any_executor.test | RUN | 1.048237 | 9.641166 | 8.950322 | 0.002569 | 0.002726 | 0.002596 |
| blocking.test | RUN | 2.792168 | 12.095525 | 19.749990 | 0.008310 | 0.009004 | 0.008824 |
| blocking_adaptation.test | RUN | 1.372933 | 5.421181 | 9.183024 | 0.004134 | 0.004932 | 0.004893 |
| context_as.test | RUN | 0.725495 | 3.880130 | 2.900365 | 0.002392 | 0.002046 | 0.002320 |
| executor.test | RUN | 0.202771 | 0.388988 | 0.610504 | 0.002105 | 0.002180 | 0.002138 |
| inline_exception_handling.test | RUN | 2.812442 | 11.758730 | 18.334401 | 0.008141 | 0.005602 | 0.005640 |
| invocable_archetype.test | RUN | 0.182328 | 0.415845 | 0.590095 | 0.001800 | 0.002180 | 0.002106 |
| mapping.test | RUN | 2.538243 | 11.153652 | 19.835802 | 0.005881 | 0.005965 | 0.006004 |
| outstanding_work.test | RUN | 1.247846 | 5.151719 | 8.915105 | 0.004961 | 0.004757 | 0.004799 |
| prefer_only.test | RUN | 0.390903 | 2.075807 | 2.043957 | 0.002120 | 0.002254 | 0.002002 |
| relationship.test | RUN | 0.871413 | 5.042483 | 8.077846 | 0.003253 | 0.004676 | 0.004620 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.979×, 1.000× | 0.992× |
| clang | 0.995× | 1.005×, 0.986× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.002052s | 0.001994s | 0.002021s | byte equality observed |
| any_completion_executor_select.test | 5 | 0.002054s | 0.002016s | 0.002015s | byte equality observed |
| any_completion_handler.test | 8 | 0.001583s | 0.001588s | 0.001537s | byte equality observed |
| any_completion_handler_select.test | 7 | 0.001563s | 0.001610s | 0.001514s | byte equality observed |
| any_io_executor.test | 3 | 0.001996s | 0.001981s | 0.001947s | byte equality observed |
| any_io_executor_select.test | 4 | 0.002025s | 0.001995s | 0.001919s | byte equality observed |
| append.test | 6 | 0.001515s | 0.001517s | 0.001471s | byte equality observed |
| append_select.test | 8 | 0.001468s | 0.001488s | 0.001476s | byte equality observed |
| as_tuple.test | 6 | 0.001685s | 0.001659s | 0.001651s | byte equality observed |
| as_tuple_select.test | 6 | 0.001511s | 0.001484s | 0.001504s | byte equality observed |
| bind_allocator.test | 1 | 0.002041s | 0.002039s | 0.001976s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001610s | 0.001661s | 0.001583s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001351s | 0.001351s | 0.001336s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001279s | 0.001242s | 0.001248s | byte equality observed |
| bind_executor.test | 1 | 0.001924s | 0.001894s | 0.001924s | byte equality observed |
| bind_executor_select.test | 1 | 0.002241s | 0.002142s | 0.002230s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001349s | 0.001311s | 0.001319s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001340s | 0.001326s | 0.001326s | byte equality observed |
| buffer.test | 10 | 0.001310s | 0.001311s | 0.001261s | byte equality observed |
| buffer_select.test | 10 | 0.001280s | 0.001275s | 0.001255s | byte equality observed |
| buffered_read_stream.test | 9 | 0.001658s | 0.001649s | 0.001653s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001666s | 0.001584s | 0.001594s | byte equality observed |
| buffered_stream.test | 9 | 0.001645s | 0.001659s | 0.001683s | byte equality observed |
| buffered_stream_select.test | 9 | 0.001646s | 0.001612s | 0.001638s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001649s | 0.001586s | 0.001645s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001617s | 0.001641s | 0.001636s | byte equality observed |
| buffers_iterator.test | 10 | 0.001242s | 0.001246s | 0.001261s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001204s | 0.001186s | 0.001239s | byte equality observed |
| cancel_after.test | 1 | 0.003601s | 0.003576s | 0.003642s | byte equality observed |
| cancel_after_select.test | 1 | 0.003019s | 0.002995s | 0.003207s | byte equality observed |
| cancel_at.test | 1 | 0.003690s | 0.003594s | 0.003633s | byte equality observed |
| cancel_at_select.test | 1 | 0.003555s | 0.003535s | 0.003457s | byte equality observed |
| co_composed.test | 10 | 0.001234s | 0.001257s | 0.001252s | byte equality observed |
| co_composed_select.test | 10 | 0.001204s | 0.001194s | 0.001194s | byte equality observed |
| compose.test | 1 | 0.001929s | 0.001845s | 0.002089s | byte equality observed |
| compose_select.test | 1 | 0.001602s | 0.001592s | 0.001645s | byte equality observed |
| composed.test | 1 | 0.002233s | 0.002286s | 0.002286s | byte equality observed |
| composed_select.test | 1 | 0.001690s | 0.001644s | 0.001719s | byte equality observed |
| config.test | 10 | 0.001315s | 0.001379s | 0.001357s | byte equality observed |
| config_select.test | 9 | 0.001343s | 0.001298s | 0.001307s | byte equality observed |
| connect_pipe.test | 10 | 0.001367s | 0.001380s | 0.001371s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001378s | 0.001350s | 0.001372s | byte equality observed |
| consign.test | 10 | 0.001343s | 0.001356s | 0.001351s | byte equality observed |
| consign_select.test | 10 | 0.001280s | 0.001298s | 0.001237s | byte equality observed |
| deadline_timer.test | 1 | 0.002785s | 0.002893s | 0.002807s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002544s | 0.002466s | 0.002549s | byte equality observed |
| deferred.test | 10 | 0.001177s | 0.001194s | 0.001197s | byte equality observed |
| deferred_select.test | 10 | 0.001139s | 0.001125s | 0.001150s | byte equality observed |
| disposition.test | 10 | 0.001212s | 0.001198s | 0.001211s | byte equality observed |
| disposition_select.test | 10 | 0.001196s | 0.001192s | 0.001213s | byte equality observed |
| error.test | 10 | 0.001160s | 0.001169s | 0.001181s | byte equality observed |
| error_select.test | 10 | 0.001162s | 0.001154s | 0.001183s | byte equality observed |
| inline_executor.test | 10 | 0.001187s | 0.001193s | 0.001191s | byte equality observed |
| inline_executor_select.test | 10 | 0.001179s | 0.001196s | 0.001191s | byte equality observed |
| inline_or_executor.test | 10 | 0.001197s | 0.001202s | 0.001191s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001195s | 0.001193s | 0.001186s | byte equality observed |
| io_context.test | 1 | 0.002257s | 0.002223s | 0.002255s | byte equality observed |
| io_context_select.test | 1 | 0.002607s | 0.002378s | 0.002523s | byte equality observed |
| io_context_strand.test | 1 | 0.002618s | 0.002616s | 0.002648s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002333s | 0.002240s | 0.002279s | byte equality observed |
| ip_host_name.test | 10 | 0.001201s | 0.001192s | 0.001188s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001147s | 0.001142s | 0.001152s | byte equality observed |
| ip_icmp.test | 10 | 0.001203s | 0.001201s | 0.001183s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001200s | 0.001200s | 0.001178s | byte equality observed |
| ip_multicast.test | 10 | 0.001285s | 0.001278s | 0.001271s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001262s | 0.001239s | 0.001254s | byte equality observed |
| ip_tcp.test | 10 | 0.001783s | 0.001739s | 0.001762s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001694s | 0.001828s | 0.001681s | byte equality observed |
| ip_udp.test | 10 | 0.001309s | 0.001390s | 0.001294s | byte equality observed |
| ip_udp_select.test | 10 | 0.001292s | 0.001407s | 0.001276s | byte equality observed |
| ip_unicast.test | 10 | 0.001243s | 0.001378s | 0.001232s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001219s | 0.001275s | 0.001208s | byte equality observed |
| ip_v6_only.test | 10 | 0.001251s | 0.001315s | 0.001235s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001235s | 0.001312s | 0.001237s | byte equality observed |
| is_read_buffered.test | 10 | 0.001181s | 0.001191s | 0.001199s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001239s | 0.001217s | 0.001227s | byte equality observed |
| is_write_buffered.test | 10 | 0.001278s | 0.001238s | 0.001231s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001260s | 0.001263s | 0.001246s | byte equality observed |
| prepend.test | 10 | 0.001365s | 0.001355s | 0.001339s | byte equality observed |
| prepend_select.test | 10 | 0.001325s | 0.001290s | 0.001291s | byte equality observed |
| read.test | 10 | 0.001780s | 0.001752s | 0.001745s | byte equality observed |
| read_at.test | 9 | 0.002238s | 0.002261s | 0.002213s | byte equality observed |
| read_at_select.test | 9 | 0.002206s | 0.002200s | 0.002188s | byte equality observed |
| read_select.test | 10 | 0.001786s | 0.001791s | 0.001790s | byte equality observed |
| read_until.test | 10 | 0.001525s | 0.001423s | 0.001438s | byte equality observed |
| read_until_select.test | 10 | 0.001483s | 0.001485s | 0.001461s | byte equality observed |
| recycling_allocator.test | 10 | 0.001302s | 0.001228s | 0.001218s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001240s | 0.001271s | 0.001222s | byte equality observed |
| signal_set.test | 10 | 0.001278s | 0.001296s | 0.001276s | byte equality observed |
| signal_set_select.test | 10 | 0.001291s | 0.001286s | 0.001292s | byte equality observed |
| socket_base.test | 10 | 0.001410s | 0.001370s | 0.001405s | byte equality observed |
| socket_base_select.test | 10 | 0.001378s | 0.001350s | 0.001343s | byte equality observed |
| spawn.test | 10 | 0.001528s | 0.001486s | 0.001490s | byte equality observed |
| spawn_select.test | 10 | 0.001502s | 0.001543s | 0.001488s | byte equality observed |
| static_thread_pool.test | 10 | 0.001305s | 0.001204s | 0.001260s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001226s | 0.001169s | 0.001221s | byte equality observed |
| strand.test | 1 | 0.002373s | 0.002396s | 0.002353s | byte equality observed |
| strand_select.test | 1 | 0.001966s | 0.001962s | 0.002011s | byte equality observed |
| streambuf.test | 10 | 0.001335s | 0.001280s | 0.001350s | byte equality observed |
| streambuf_select.test | 10 | 0.001267s | 0.001293s | 0.001315s | byte equality observed |
| thread_pool.test | 8 | 0.002933s | 0.002986s | 0.002954s | byte equality observed |
| thread_pool_select.test | 8 | 0.002931s | 0.002895s | 0.002890s | byte equality observed |
| write.test | 10 | 0.001864s | 0.001815s | 0.001795s | byte equality observed |
| write_at.test | 10 | 0.002010s | 0.001984s | 0.001939s | byte equality observed |
| write_at_select.test | 10 | 0.001976s | 0.001959s | 0.001931s | byte equality observed |
| write_select.test | 10 | 0.001810s | 0.001817s | 0.001774s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43712369003).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
