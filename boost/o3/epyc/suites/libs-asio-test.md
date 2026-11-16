# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.842410 | 5.091247 | 5.218491 | 0.002898 | 0.002730 | 0.002816 |
| any_completion_executor_select.test | RUN | 0.872448 | 4.965640 | 5.446507 | 0.002938 | 0.002725 | 0.002606 |
| any_completion_handler.test | RUN | 0.923125 | 4.433992 | 4.627973 | 0.002232 | 0.001565 | 0.002281 |
| any_completion_handler_select.test | RUN | 0.948569 | 4.615776 | 5.283952 | 0.002166 | 0.002364 | 0.002352 |
| any_io_executor.test | RUN | 0.909507 | 5.270463 | 5.693120 | 0.002782 | 0.002834 | 0.002840 |
| any_io_executor_select.test | RUN | 0.885820 | 5.235141 | 5.985237 | 0.002304 | 0.002765 | 0.002498 |
| append.test | RUN | 0.813271 | 4.142654 | 4.189379 | 0.001836 | 0.002156 | 0.002228 |
| append_select.test | RUN | 0.803239 | 4.291796 | 4.291012 | 0.002048 | 0.002260 | 0.002002 |
| as_tuple.test | RUN | 1.017920 | 5.058693 | 5.950166 | 0.002298 | 0.002380 | 0.002482 |
| as_tuple_select.test | RUN | 1.031548 | 4.953035 | 6.005694 | 0.001935 | 0.002082 | 0.002277 |
| associated_allocator.test | LINK | 0.221260 | 0.485449 | 0.656052 | — | — | — |
| associated_allocator_select.test | LINK | 0.227262 | 0.451407 | 0.717603 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.240606 | 0.495155 | 0.758915 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.246771 | 0.489977 | 0.802713 | — | — | — |
| associated_executor.test | LINK | 0.350676 | 0.847388 | 1.247978 | — | — | — |
| associated_executor_select.test | LINK | 0.349565 | 0.857668 | 1.281282 | — | — | — |
| associated_immediate_executor.test | LINK | 0.322401 | 0.787026 | 1.079836 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.326527 | 0.811293 | 1.062341 | — | — | — |
| associator.test | LINK | 0.177030 | 0.390592 | 0.565059 | — | — | — |
| associator_select.test | LINK | 0.175514 | 0.383138 | 0.572193 | — | — | — |
| awaitable.test | LINK | 0.182387 | 0.377765 | 0.594958 | — | — | — |
| awaitable_select.test | LINK | 0.183436 | 0.377699 | 0.589491 | — | — | — |
| basic_datagram_socket.test | LINK | 0.543905 | 1.205442 | 2.252501 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.555901 | 1.222996 | 2.351964 | — | — | — |
| basic_deadline_timer.test | LINK | 0.657770 | 1.458826 | 2.569368 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.679078 | 1.460116 | 2.659878 | — | — | — |
| basic_file.test | LINK | 0.178549 | 0.380929 | 0.570476 | — | — | — |
| basic_file_select.test | LINK | 0.183065 | 0.388882 | 0.578146 | — | — | — |
| basic_random_access_file.test | LINK | 0.180015 | 0.385638 | 0.555118 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.184443 | 0.392619 | 0.598956 | — | — | — |
| basic_raw_socket.test | LINK | 0.556494 | 1.212954 | 2.329259 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.557658 | 1.277264 | 2.330839 | — | — | — |
| basic_readable_pipe.test | LINK | 0.530184 | 1.129516 | 1.928182 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.561928 | 1.241286 | 2.351998 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.542963 | 1.208940 | 2.305958 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.550720 | 1.227838 | 2.350474 | — | — | — |
| basic_signal_set.test | LINK | 0.517926 | 1.127085 | 1.702688 | — | — | — |
| basic_signal_set_select.test | LINK | 0.552755 | 1.201007 | 2.232188 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.551262 | 1.179713 | 2.249065 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.565857 | 1.210106 | 2.319267 | — | — | — |
| basic_stream_file.test | LINK | 0.180761 | 0.401587 | 0.607937 | — | — | — |
| basic_stream_file_select.test | LINK | 0.190129 | 0.404006 | 0.610219 | — | — | — |
| basic_stream_socket.test | LINK | 0.547963 | 1.190547 | 2.288657 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.565045 | 1.238543 | 2.322046 | — | — | — |
| basic_streambuf.test | LINK | 0.268349 | 0.576884 | 0.902878 | — | — | — |
| basic_streambuf_select.test | LINK | 0.269854 | 0.583619 | 0.914811 | — | — | — |
| basic_waitable_timer.test | LINK | 0.516073 | 1.122844 | 2.132021 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.526042 | 1.165610 | 2.189916 | — | — | — |
| basic_writable_pipe.test | LINK | 0.528101 | 1.155900 | 1.937442 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.565653 | 1.239941 | 2.442714 | — | — | — |
| bind_allocator.test | RUN | 0.856382 | 4.231984 | 4.729007 | 0.002356 | 0.002479 | 0.002714 |
| bind_allocator_select.test | RUN | 0.869204 | 4.298708 | 4.826232 | 0.001739 | 0.002050 | 0.002424 |
| bind_cancellation_slot.test | RUN | 0.877143 | 4.280005 | 4.746257 | 0.001590 | 0.001718 | 0.002354 |
| bind_cancellation_slot_select.test | RUN | 0.892854 | 4.265854 | 4.524392 | 0.001844 | 0.001645 | 0.001540 |
| bind_executor.test | RUN | 0.547440 | 2.986678 | 2.728073 | 0.002208 | 0.003058 | 0.003012 |
| bind_executor_select.test | RUN | 0.563380 | 3.070388 | 2.893369 | 0.002276 | 0.002844 | 0.002700 |
| bind_immediate_executor.test | RUN | 0.413990 | 2.603945 | 1.855674 | 0.001592 | 0.001588 | 0.001504 |
| bind_immediate_executor_select.test | RUN | 0.423169 | 2.505165 | 2.135675 | 0.001463 | 0.001547 | 0.001463 |
| buffer.test | RUN | 0.256203 | 1.003461 | 1.107289 | 0.001501 | 0.001542 | 0.001473 |
| buffer_select.test | RUN | 0.254509 | 0.999143 | 1.140706 | 0.001430 | 0.001535 | 0.001460 |
| buffer_registration.test | LINK | 0.203422 | 0.508264 | 0.666748 | — | — | — |
| buffer_registration_select.test | LINK | 0.204334 | 0.508671 | 0.656720 | — | — | — |
| buffered_read_stream.test | RUN | 0.900478 | 6.746449 | 6.799881 | 0.002032 | 0.002506 | 0.002814 |
| buffered_read_stream_select.test | RUN | 0.925706 | 6.778773 | 7.694940 | 0.001826 | 0.002556 | 0.002686 |
| buffered_stream.test | RUN | 1.692500 | 9.972384 | 11.068432 | 0.002620 | 0.002600 | 0.002788 |
| buffered_stream_select.test | RUN | 1.760231 | 10.055438 | 10.740416 | 0.002580 | 0.002778 | 0.002749 |
| buffered_write_stream.test | RUN | 1.614391 | 8.744263 | 9.706115 | 0.002523 | 0.002582 | 0.002783 |
| buffered_write_stream_select.test | RUN | 1.633732 | 8.816569 | 9.224217 | 0.002554 | 0.002632 | 0.002496 |
| buffers_iterator.test | RUN | 0.513823 | 0.884534 | 1.658635 | 0.001994 | 0.002200 | 0.002089 |
| buffers_iterator_select.test | RUN | 0.514560 | 0.879552 | 1.672971 | 0.002078 | 0.002044 | 0.001961 |
| cancel_after.test | RUN | 1.340343 | 6.913843 | 7.188185 | 0.003843 | 0.004242 | 0.004617 |
| cancel_after_select.test | RUN | 1.328575 | 6.815857 | 7.064165 | 0.003793 | 0.004375 | 0.003835 |
| cancel_at.test | RUN | 1.273971 | 5.712358 | 6.294448 | 0.003402 | 0.003856 | 0.003823 |
| cancel_at_select.test | RUN | 1.214622 | 5.614399 | 5.755247 | 0.003348 | 0.003677 | 0.003687 |
| cancellation_signal.test | LINK | 0.154729 | 0.308239 | 0.409246 | — | — | — |
| cancellation_signal_select.test | LINK | 0.149824 | 0.313782 | 0.434749 | — | — | — |
| cancellation_state.test | LINK | 0.188920 | 0.305703 | 0.435082 | — | — | — |
| cancellation_state_select.test | LINK | 0.236561 | 0.313006 | 0.431076 | — | — | — |
| cancellation_type.test | LINK | 0.183342 | 0.247313 | 0.332751 | — | — | — |
| cancellation_type_select.test | LINK | 0.184466 | 0.244458 | 0.357512 | — | — | — |
| co_composed.test | RUN | 0.183198 | 0.244688 | 0.380754 | 0.002033 | 0.001470 | 0.002116 |
| co_composed_select.test | RUN | 0.183687 | 0.246795 | 0.516569 | 0.001900 | 0.001534 | 0.002099 |
| co_spawn.test | LINK | 0.183161 | 0.245368 | 0.548343 | — | — | — |
| co_spawn_select.test | LINK | 0.180245 | 0.249562 | 0.591200 | — | — | — |
| completion_condition.test | LINK | 0.225615 | 0.557412 | 0.723865 | — | — | — |
| completion_condition_select.test | LINK | 0.236091 | 0.594761 | 0.741190 | — | — | — |
| compose.test | RUN | 1.042940 | 5.275400 | 5.878091 | 0.002659 | 0.001896 | 0.002456 |
| compose_select.test | RUN | 1.055613 | 5.213834 | 5.873086 | 0.002338 | 0.002554 | 0.001666 |
| composed.test | RUN | 1.009457 | 5.151043 | 5.791785 | 0.002194 | 0.002208 | 0.002587 |
| composed_select.test | RUN | 0.936968 | 5.057380 | 5.699440 | 0.002182 | 0.002088 | 0.002111 |
| config.test | RUN | 0.456894 | 3.409139 | 2.520319 | 0.002137 | 0.002127 | 0.002282 |
| config_select.test | RUN | 0.520675 | 3.514058 | 3.333142 | 0.001827 | 0.002114 | 0.002156 |
| connect.test | LINK | 1.640885 | 10.972460 | 12.229824 | — | — | — |
| connect_select.test | LINK | 1.665547 | 10.998900 | 12.195790 | — | — | — |
| connect_pipe.test | RUN | 0.911258 | 4.253904 | 4.573657 | 0.002011 | 0.002285 | 0.002212 |
| connect_pipe_select.test | RUN | 0.947535 | 4.453113 | 4.889418 | 0.002088 | 0.002348 | 0.002296 |
| consign.test | RUN | 0.773876 | 4.197181 | 4.110248 | 0.002359 | 0.002165 | 0.002250 |
| consign_select.test | RUN | 0.806769 | 4.342301 | 3.993201 | 0.002110 | 0.002168 | 0.002278 |
| coroutine.test | LINK | 0.191761 | 0.453683 | 0.637523 | — | — | — |
| coroutine_select.test | LINK | 0.200195 | 0.451573 | 0.601020 | — | — | — |
| deadline_timer.test | RUN | 1.147598 | 5.435222 | 6.137091 | 0.003368 | 0.003799 | 0.003840 |
| deadline_timer_select.test | RUN | 1.176813 | 5.321551 | 5.907261 | 0.003279 | 0.003063 | 0.003853 |
| deferred.test | RUN | 0.207440 | 0.415924 | 0.645924 | 0.001670 | 0.002174 | 0.002065 |
| deferred_select.test | RUN | 0.204148 | 0.426096 | 0.651281 | 0.002036 | 0.002053 | 0.002157 |
| detached.test | LINK | 0.223808 | 0.482311 | 0.757548 | — | — | — |
| detached_select.test | LINK | 0.225274 | 0.494229 | 0.737955 | — | — | — |
| disposition.test | RUN | 0.220172 | 1.094057 | 1.203114 | 0.001585 | 0.002246 | 0.001784 |
| disposition_select.test | RUN | 0.193852 | 1.089138 | 1.240304 | 0.001646 | 0.002070 | 0.002235 |
| error.test | RUN | 0.183700 | 1.035421 | 1.150449 | 0.001590 | 0.002076 | 0.002112 |
| error_select.test | RUN | 0.178981 | 1.034268 | 1.119997 | 0.001564 | 0.002260 | 0.002112 |
| file_base.test | LINK | 0.225964 | 0.847724 | 1.172516 | — | — | — |
| file_base_select.test | LINK | 0.225265 | 0.768483 | 1.005593 | — | — | — |
| fwd_first.test | LINK | 0.500523 | 1.202087 | 1.999113 | — | — | — |
| fwd_last.test | LINK | 0.507472 | 1.169688 | 1.992768 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.198674 | 0.481325 | 0.753546 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.194018 | 0.489050 | 0.747809 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.766981 | 4.011940 | 3.818374 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.771158 | 4.170890 | 3.818588 | — | — | — |
| generic_raw_protocol.test | LINK | 0.774072 | 4.040258 | 3.826875 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.759576 | 4.168967 | 3.779662 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.670742 | 3.407270 | 3.289261 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.671201 | 3.473523 | 3.247069 | — | — | — |
| generic_stream_protocol.test | LINK | 0.716905 | 3.693563 | 3.522940 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.709951 | 3.767920 | 3.489644 | — | — | — |
| high_resolution_timer.test | LINK | 0.333393 | 0.723974 | 1.163004 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.329630 | 0.743888 | 1.189727 | — | — | — |
| immediate.test | LINK | 0.229014 | 0.552801 | 0.724762 | — | — | — |
| immediate_select.test | LINK | 0.225549 | 0.554026 | 0.723363 | — | — | — |
| inline_executor.test | RUN | 0.278017 | 0.835020 | 1.035717 | 0.001606 | 0.001562 | 0.001474 |
| inline_executor_select.test | RUN | 0.277260 | 0.840644 | 1.056151 | 0.001527 | 0.001504 | 0.001483 |
| inline_or_executor.test | RUN | 0.429865 | 2.407758 | 1.966045 | 0.001616 | 0.001558 | 0.001491 |
| inline_or_executor_select.test | RUN | 0.447019 | 2.478158 | 2.151347 | 0.001542 | 0.001540 | 0.001509 |
| io_context.test | RUN | 0.623324 | 3.684666 | 3.342871 | 0.002649 | 0.002472 | 0.002477 |
| io_context_select.test | RUN | 0.628801 | 3.609795 | 3.377285 | 0.002421 | 0.002521 | 0.002360 |
| io_context_strand.test | RUN | 0.596047 | 4.356785 | 4.195449 | 0.002549 | 0.003182 | 0.002742 |
| io_context_strand_select.test | RUN | 0.595910 | 4.643916 | 4.198751 | 0.002406 | 0.002438 | 0.002121 |
| ip_address.test | LINK | 0.224532 | 1.202291 | 1.697509 | — | — | — |
| ip_address_select.test | LINK | 0.232622 | 1.208593 | 1.679794 | — | — | — |
| ip_address_v4.test | LINK | 0.238059 | 1.281506 | 1.665663 | — | — | — |
| ip_address_v4_select.test | LINK | 0.232651 | 1.246241 | 1.575400 | — | — | — |
| ip_address_v6.test | LINK | 0.265950 | 1.561046 | 1.224369 | — | — | — |
| ip_address_v6_select.test | LINK | 0.266691 | 1.357025 | 1.217444 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.203368 | 0.523712 | 0.795250 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.207814 | 0.513395 | 0.790547 | — | — | — |
| ip_basic_resolver.test | LINK | 0.325960 | 0.734801 | 1.181625 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.332806 | 0.755752 | 1.211035 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.113810 | 0.241680 | 0.327086 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.112348 | 0.243956 | 0.328501 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.206131 | 0.506216 | 0.782407 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.215018 | 0.500501 | 0.762442 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.199349 | 0.475122 | 0.745551 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.192252 | 0.486605 | 0.750259 | — | — | — |
| ip_host_name.test | RUN | 0.208068 | 0.634140 | 0.826225 | 0.001474 | 0.001540 | 0.001401 |
| ip_host_name_select.test | RUN | 0.209589 | 0.632869 | 0.829340 | 0.001468 | 0.001520 | 0.001454 |
| ip_icmp.test | RUN | 0.951652 | 6.901672 | 8.124308 | 0.001520 | 0.002215 | 0.002238 |
| ip_icmp_select.test | RUN | 0.939147 | 7.432048 | 8.048543 | 0.001531 | 0.002286 | 0.001955 |
| ip_multicast.test | RUN | 0.561686 | 4.471260 | 4.948822 | 0.001609 | 0.002151 | 0.002036 |
| ip_multicast_select.test | RUN | 0.562658 | 4.416570 | 4.963339 | 0.001658 | 0.002158 | 0.002044 |
| ip_resolver_query_base.test | LINK | 0.133771 | 0.430457 | 0.585640 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.136406 | 0.426118 | 0.593724 | — | — | — |
| ip_tcp.test | RUN | 1.387713 | 12.818960 | 12.770374 | 0.002168 | 0.003190 | 0.003241 |
| ip_tcp_select.test | RUN | 1.383307 | 13.396561 | 12.342916 | 0.002164 | 0.002854 | 0.003207 |
| ip_udp.test | RUN | 1.014002 | 9.165923 | 8.778099 | 0.001653 | 0.002288 | 0.002144 |
| ip_udp_select.test | RUN | 1.004688 | 9.379236 | 8.661839 | 0.001683 | 0.002344 | 0.002130 |
| ip_unicast.test | RUN | 0.512767 | 4.030096 | 4.399635 | 0.001655 | 0.002244 | 0.002050 |
| ip_unicast_select.test | RUN | 0.522068 | 4.062163 | 4.312144 | 0.002116 | 0.002316 | 0.002100 |
| ip_v6_only.test | RUN | 0.795525 | 4.243253 | 4.586224 | 0.002137 | 0.002222 | 0.002256 |
| ip_v6_only_select.test | RUN | 0.809286 | 4.408200 | 4.505271 | 0.002052 | 0.002351 | 0.002236 |
| is_read_buffered.test | RUN | 0.624983 | 1.435944 | 2.589999 | 0.001914 | 0.002078 | 0.001740 |
| is_read_buffered_select.test | RUN | 0.634029 | 1.453741 | 2.582244 | 0.001837 | 0.002040 | 0.002061 |
| is_write_buffered.test | RUN | 0.606451 | 1.402299 | 2.497678 | 0.002046 | 0.001804 | 0.002118 |
| is_write_buffered_select.test | RUN | 0.616890 | 1.374185 | 2.550771 | 0.002019 | 0.002086 | 0.002078 |
| local_basic_endpoint.test | LINK | 0.307157 | 0.752564 | 1.431520 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.306246 | 0.742282 | 1.421903 | — | — | — |
| local_connect_pair.test | LINK | 0.790185 | 4.212923 | 4.319123 | — | — | — |
| local_connect_pair_select.test | LINK | 0.804732 | 4.128691 | 4.193993 | — | — | — |
| local_datagram_protocol.test | LINK | 1.028245 | 5.314435 | 5.799064 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.051062 | 5.448359 | 5.732024 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.052254 | 5.278831 | 5.658776 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.056221 | 5.321942 | 5.632434 | — | — | — |
| local_stream_protocol.test | LINK | 0.974732 | 5.001456 | 5.480913 | — | — | — |
| local_stream_protocol_select.test | LINK | 1.006347 | 5.079092 | 5.350706 | — | — | — |
| placeholders.test | LINK | 0.194527 | 0.413475 | 0.632254 | — | — | — |
| placeholders_select.test | LINK | 0.200331 | 0.405963 | 0.629805 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.535461 | 1.166142 | 1.860193 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.544286 | 1.250920 | 2.389720 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.525973 | 1.146967 | 1.936997 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.560774 | 1.254406 | 2.394924 | — | — | — |
| posix_descriptor_base.test | LINK | 0.216607 | 0.458721 | 0.669362 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.218707 | 0.457500 | 0.606178 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.032427 | 5.068173 | 5.288720 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.070650 | 5.170353 | 5.522325 | — | — | — |
| prepend.test | RUN | 0.814130 | 4.120916 | 4.301630 | 0.001739 | 0.002047 | 0.002063 |
| prepend_select.test | RUN | 0.811528 | 4.198962 | 4.330679 | 0.001446 | 0.002117 | 0.002126 |
| random_access_file.test | LINK | 0.480884 | 1.026657 | 1.510414 | — | — | — |
| random_access_file_select.test | LINK | 0.501358 | 1.089934 | 1.957738 | — | — | — |
| read.test | RUN | 2.435564 | 25.467996 | 24.185421 | 0.002716 | 0.002900 | 0.002678 |
| read_select.test | RUN | 2.456691 | 25.367295 | 24.661721 | 0.002632 | 0.002820 | 0.002721 |
| read_at.test | RUN | 2.494025 | 34.889241 | 33.147912 | 0.003580 | 0.003423 | 0.003420 |
| read_at_select.test | RUN | 2.527141 | 34.679274 | 33.251870 | 0.003510 | 0.003300 | 0.003558 |
| read_until.test | RUN | 1.279520 | 9.880624 | 8.617866 | 0.002156 | 0.002239 | 0.002243 |
| read_until_select.test | RUN | 1.299481 | 9.935177 | 9.059550 | 0.002145 | 0.001910 | 0.002530 |
| readable_pipe.test | LINK | 0.826647 | 4.220395 | 4.122148 | — | — | — |
| readable_pipe_select.test | LINK | 0.855449 | 4.448275 | 4.717609 | — | — | — |
| recycling_allocator.test | RUN | 0.258806 | 0.637018 | 0.929242 | 0.002055 | 0.001811 | 0.002050 |
| recycling_allocator_select.test | RUN | 0.261944 | 0.634381 | 0.916095 | 0.001880 | 0.001642 | 0.001996 |
| redirect_disposition.test | LINK | 1.081198 | 5.877221 | 6.682763 | — | — | — |
| redirect_disposition_select.test | LINK | 1.092663 | 5.844540 | 6.541174 | — | — | — |
| redirect_error.test | LINK | 0.959122 | 4.925248 | 5.786629 | — | — | — |
| redirect_error_select.test | LINK | 0.970873 | 4.865864 | 5.709866 | — | — | — |
| registered_buffer.test | LINK | 0.256097 | 0.555224 | 0.815830 | — | — | — |
| registered_buffer_select.test | LINK | 0.258421 | 0.561932 | 0.832005 | — | — | — |
| signal_set.test | RUN | 0.808618 | 4.150252 | 3.875338 | 0.001860 | 0.002114 | 0.002174 |
| signal_set_select.test | RUN | 0.840702 | 4.300643 | 4.451676 | 0.002034 | 0.001980 | 0.002102 |
| signal_set_base.test | LINK | 0.210278 | 0.455996 | 0.639197 | — | — | — |
| signal_set_base_select.test | LINK | 0.210365 | 0.450997 | 0.643788 | — | — | — |
| socket_base.test | RUN | 0.987411 | 6.033918 | 6.090418 | 0.002300 | 0.002370 | 0.002384 |
| socket_base_select.test | RUN | 1.005548 | 5.851991 | 6.081161 | 0.002296 | 0.002052 | 0.002402 |
| spawn.test | RUN | 1.640793 | 9.714856 | 10.215315 | 0.002400 | 0.002370 | 0.002531 |
| spawn_select.test | RUN | 1.662797 | 9.684852 | 10.191967 | 0.002421 | 0.002330 | 0.002188 |
| static_thread_pool.test | RUN | 0.460344 | 0.989938 | 1.463329 | 0.002223 | 0.002146 | 0.002118 |
| static_thread_pool_select.test | RUN | 0.497383 | 1.095487 | 1.999022 | 0.001917 | 0.001962 | 0.002070 |
| steady_timer.test | LINK | 0.525960 | 1.131175 | 2.115521 | — | — | — |
| steady_timer_select.test | LINK | 0.555709 | 1.182285 | 2.169951 | — | — | — |
| strand.test | RUN | 1.036452 | 5.590594 | 6.034782 | 0.002627 | 0.002845 | 0.003220 |
| strand_select.test | RUN | 1.046634 | 5.589596 | 5.919596 | 0.002582 | 0.003058 | 0.002587 |
| stream_file.test | LINK | 0.493494 | 1.031313 | 1.572881 | — | — | — |
| stream_file_select.test | LINK | 0.501899 | 1.117035 | 2.021844 | — | — | — |
| streambuf.test | RUN | 0.295409 | 0.856821 | 1.109977 | 0.001471 | 0.001974 | 0.002058 |
| streambuf_select.test | RUN | 0.196158 | 0.867187 | 0.844441 | 0.001468 | 0.001994 | 0.002241 |
| system_timer.test | LINK | 0.633456 | 3.615954 | 4.004168 | — | — | — |
| system_timer_select.test | LINK | 0.637651 | 3.423302 | 3.498064 | — | — | — |
| system_context.test | LINK | 0.290277 | 0.635132 | 0.871450 | — | — | — |
| system_context_select.test | LINK | 0.307318 | 0.678501 | 1.088905 | — | — | — |
| system_executor.test | LINK | 0.381437 | 1.981681 | 1.593797 | — | — | — |
| system_executor_select.test | LINK | 0.391167 | 1.930816 | 1.772595 | — | — | — |
| this_coro.test | LINK | 0.114505 | 0.243164 | 0.338110 | — | — | — |
| this_coro_select.test | LINK | 0.115495 | 0.243317 | 0.349652 | — | — | — |
| thread_pool.test | RUN | 0.450663 | 3.205875 | 2.859283 | 0.003072 | 0.003717 | 0.003940 |
| thread_pool_select.test | RUN | 0.462209 | 3.154190 | 3.034636 | 0.003144 | 0.003334 | 0.003847 |
| time_traits.test | LINK | 0.259037 | 0.817225 | 1.315904 | — | — | — |
| time_traits_select.test | LINK | 0.250862 | 0.794746 | 1.253104 | — | — | — |
| ts_buffer.test | LINK | 0.247100 | 0.878128 | 1.238486 | — | — | — |
| ts_buffer_select.test | LINK | 0.244893 | 0.892596 | 1.274716 | — | — | — |
| ts_executor.test | LINK | 0.341442 | 1.223173 | 2.024261 | — | — | — |
| ts_executor_select.test | LINK | 0.391028 | 1.309254 | 2.569662 | — | — | — |
| ts_internet.test | LINK | 0.389466 | 1.341819 | 2.546575 | — | — | — |
| ts_internet_select.test | LINK | 0.382680 | 1.402880 | 2.666346 | — | — | — |
| ts_io_context.test | LINK | 0.300017 | 1.011518 | 1.557122 | — | — | — |
| ts_io_context_select.test | LINK | 0.313082 | 1.080131 | 1.994829 | — | — | — |
| ts_net.test | LINK | 0.444129 | 1.632076 | 3.061569 | — | — | — |
| ts_net_select.test | LINK | 0.451716 | 1.632451 | 3.224354 | — | — | — |
| ts_netfwd.test | LINK | 0.446353 | 1.654852 | 3.175381 | — | — | — |
| ts_netfwd_select.test | LINK | 0.453568 | 1.683415 | 3.225251 | — | — | — |
| ts_socket.test | LINK | 0.370226 | 1.262310 | 2.413802 | — | — | — |
| ts_socket_select.test | LINK | 0.370906 | 1.308106 | 2.503429 | — | — | — |
| ts_timer.test | LINK | 0.323444 | 1.138301 | 2.183039 | — | — | — |
| ts_timer_select.test | LINK | 0.329756 | 1.192172 | 2.110546 | — | — | — |
| use_awaitable.test | LINK | 0.114594 | 0.378181 | 0.608558 | — | — | — |
| use_awaitable_select.test | LINK | 0.113012 | 0.379675 | 0.596725 | — | — | — |
| wait_traits.test | LINK | 0.126113 | 0.383662 | 0.592614 | — | — | — |
| wait_traits_select.test | LINK | 0.179936 | 0.383630 | 0.594527 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.182106 | 0.374984 | 0.579693 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.182027 | 0.386998 | 0.602649 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.182389 | 0.384556 | 0.581439 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.187936 | 0.383179 | 0.590645 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.180489 | 0.394172 | 0.587908 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.180270 | 0.377601 | 0.576278 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.181002 | 0.381215 | 0.585511 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.183810 | 0.385164 | 0.588604 | — | — | — |
| windows_object_handle.test | LINK | 0.492531 | 1.030671 | 1.550992 | — | — | — |
| windows_object_handle_select.test | LINK | 0.506826 | 1.091240 | 2.057700 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.500891 | 1.112727 | 1.715390 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.550398 | 1.177656 | 2.183603 | — | — | — |
| windows_random_access_handle.test | LINK | 0.493900 | 1.033919 | 1.543896 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.493993 | 1.088222 | 2.040473 | — | — | — |
| windows_stream_handle.test | LINK | 0.483022 | 1.052236 | 1.578724 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.506743 | 1.111826 | 2.087473 | — | — | — |
| writable_pipe.test | LINK | 0.844435 | 4.194544 | 4.428233 | — | — | — |
| writable_pipe_select.test | LINK | 0.870232 | 4.398865 | 4.863058 | — | — | — |
| write.test | RUN | 2.465928 | 20.784993 | 23.377265 | 0.002844 | 0.002888 | 0.002940 |
| write_select.test | RUN | 2.500474 | 20.849620 | 23.950460 | 0.002894 | 0.003030 | 0.003000 |
| write_at.test | RUN | 2.556078 | 28.980246 | 30.191160 | 0.002918 | 0.003420 | 0.003207 |
| write_at_select.test | RUN | 2.605072 | 29.160029 | 30.520216 | 0.003081 | 0.003210 | 0.003261 |
| any_executor.test | RUN | 1.031373 | 9.662803 | 8.858193 | 0.002688 | 0.002880 | 0.002921 |
| blocking.test | RUN | 2.773864 | 12.052694 | 19.615916 | 0.008822 | 0.007696 | 0.008371 |
| blocking_adaptation.test | RUN | 1.389351 | 5.368456 | 9.084935 | 0.004706 | 0.004185 | 0.004528 |
| context_as.test | RUN | 0.715170 | 3.791103 | 3.002899 | 0.002344 | 0.002312 | 0.002078 |
| executor.test | RUN | 0.194406 | 0.393772 | 0.633865 | 0.002138 | 0.002114 | 0.002076 |
| inline_exception_handling.test | RUN | 2.732816 | 10.816362 | 19.332285 | 0.008070 | 0.005582 | 0.005722 |
| invocable_archetype.test | RUN | 0.179173 | 0.401558 | 0.591110 | 0.001996 | 0.002118 | 0.002002 |
| mapping.test | RUN | 2.356019 | 11.856141 | 19.386145 | 0.005866 | 0.005825 | 0.005902 |
| outstanding_work.test | RUN | 1.254665 | 4.976486 | 8.997140 | 0.004922 | 0.004722 | 0.004950 |
| prefer_only.test | RUN | 0.379366 | 2.070133 | 2.070505 | 0.002146 | 0.001834 | 0.002157 |
| relationship.test | RUN | 0.948191 | 5.048459 | 7.208096 | 0.003188 | 0.003327 | 0.003277 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.004×, 0.994× | 1.001× |
| clang | 0.985× | 0.986×, 0.983× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001964s | 0.001970s | 0.002005s | byte equality observed |
| any_completion_executor_select.test | 2 | 0.001953s | 0.002006s | 0.001942s | byte equality observed |
| any_completion_handler.test | 10 | 0.001547s | 0.001506s | 0.001494s | byte equality observed |
| any_completion_handler_select.test | 2 | 0.001578s | 0.001559s | 0.001503s | byte equality observed |
| any_io_executor.test | 3 | 0.001982s | 0.002014s | 0.002015s | byte equality observed |
| any_io_executor_select.test | 4 | 0.001958s | 0.001984s | 0.002010s | byte equality observed |
| append.test | 10 | 0.001502s | 0.001504s | 0.001508s | byte equality observed |
| append_select.test | 10 | 0.001469s | 0.001472s | 0.001439s | byte equality observed |
| as_tuple.test | 4 | 0.001708s | 0.001714s | 0.001695s | byte equality observed |
| as_tuple_select.test | 4 | 0.001507s | 0.001485s | 0.001479s | byte equality observed |
| bind_allocator.test | 1 | 0.001958s | 0.001904s | 0.001926s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001604s | 0.001528s | 0.001501s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001319s | 0.001333s | 0.001329s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001248s | 0.001251s | 0.001249s | byte equality observed |
| bind_executor.test | 1 | 0.001888s | 0.001854s | 0.001878s | byte equality observed |
| bind_executor_select.test | 1 | 0.002136s | 0.002106s | 0.002069s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001372s | 0.001338s | 0.001290s | byte equality observed |
| bind_immediate_executor_select.test | 9 | 0.001323s | 0.001335s | 0.001345s | byte equality observed |
| buffer.test | 10 | 0.001319s | 0.001330s | 0.001282s | byte equality observed |
| buffer_select.test | 10 | 0.001321s | 0.001253s | 0.001274s | byte equality observed |
| buffered_read_stream.test | 9 | 0.001611s | 0.001617s | 0.001678s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001575s | 0.001566s | 0.001588s | byte equality observed |
| buffered_stream.test | 10 | 0.001603s | 0.001618s | 0.001599s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001605s | 0.001558s | 0.001623s | byte equality observed |
| buffered_write_stream.test | 8 | 0.001656s | 0.001626s | 0.001612s | byte equality observed |
| buffered_write_stream_select.test | 9 | 0.001612s | 0.001613s | 0.001632s | byte equality observed |
| buffers_iterator.test | 10 | 0.001275s | 0.001235s | 0.001276s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001225s | 0.001185s | 0.001179s | byte equality observed |
| cancel_after.test | 1 | 0.003450s | 0.003309s | 0.003354s | byte equality observed |
| cancel_after_select.test | 1 | 0.002929s | 0.002902s | 0.002934s | byte equality observed |
| cancel_at.test | 1 | 0.003601s | 0.003598s | 0.003567s | byte equality observed |
| cancel_at_select.test | 1 | 0.003450s | 0.003431s | 0.003383s | byte equality observed |
| co_composed.test | 10 | 0.001241s | 0.001229s | 0.001234s | byte equality observed |
| co_composed_select.test | 10 | 0.001207s | 0.001227s | 0.001219s | byte equality observed |
| compose.test | 1 | 0.001947s | 0.001831s | 0.001864s | byte equality observed |
| compose_select.test | 1 | 0.001594s | 0.001558s | 0.001541s | byte equality observed |
| composed.test | 1 | 0.002124s | 0.002182s | 0.002085s | byte equality observed |
| composed_select.test | 1 | 0.001687s | 0.001658s | 0.001649s | byte equality observed |
| config.test | 10 | 0.001312s | 0.001299s | 0.001305s | byte equality observed |
| config_select.test | 10 | 0.001367s | 0.001314s | 0.001325s | byte equality observed |
| connect_pipe.test | 10 | 0.001357s | 0.001367s | 0.001349s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001361s | 0.001386s | 0.001378s | byte equality observed |
| consign.test | 10 | 0.001324s | 0.001327s | 0.001349s | byte equality observed |
| consign_select.test | 10 | 0.001259s | 0.001326s | 0.001243s | byte equality observed |
| deadline_timer.test | 1 | 0.002740s | 0.002679s | 0.002673s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002459s | 0.002416s | 0.002456s | byte equality observed |
| deferred.test | 10 | 0.001174s | 0.001174s | 0.001154s | byte equality observed |
| deferred_select.test | 10 | 0.001122s | 0.001137s | 0.001127s | byte equality observed |
| disposition.test | 10 | 0.001203s | 0.001202s | 0.001206s | byte equality observed |
| disposition_select.test | 10 | 0.001202s | 0.001196s | 0.001198s | byte equality observed |
| error.test | 10 | 0.001175s | 0.001168s | 0.001167s | byte equality observed |
| error_select.test | 10 | 0.001175s | 0.001174s | 0.001161s | byte equality observed |
| inline_executor.test | 10 | 0.001189s | 0.001186s | 0.001168s | byte equality observed |
| inline_executor_select.test | 10 | 0.001193s | 0.001182s | 0.001177s | byte equality observed |
| inline_or_executor.test | 10 | 0.001192s | 0.001191s | 0.001171s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001186s | 0.001187s | 0.001146s | byte equality observed |
| io_context.test | 1 | 0.002208s | 0.002261s | 0.002179s | byte equality observed |
| io_context_select.test | 1 | 0.002543s | 0.002236s | 0.002572s | byte equality observed |
| io_context_strand.test | 1 | 0.002535s | 0.002573s | 0.002498s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002263s | 0.002220s | 0.002255s | byte equality observed |
| ip_host_name.test | 10 | 0.001185s | 0.001189s | 0.001169s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001155s | 0.001147s | 0.001124s | byte equality observed |
| ip_icmp.test | 10 | 0.001186s | 0.001195s | 0.001145s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001188s | 0.001186s | 0.001156s | byte equality observed |
| ip_multicast.test | 10 | 0.001271s | 0.001270s | 0.001258s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001245s | 0.001258s | 0.001241s | byte equality observed |
| ip_tcp.test | 10 | 0.001762s | 0.001748s | 0.001745s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001680s | 0.001686s | 0.001664s | byte equality observed |
| ip_udp.test | 10 | 0.001289s | 0.001330s | 0.001282s | byte equality observed |
| ip_udp_select.test | 10 | 0.001279s | 0.001353s | 0.001268s | byte equality observed |
| ip_unicast.test | 10 | 0.001231s | 0.001396s | 0.001220s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001222s | 0.001377s | 0.001208s | byte equality observed |
| ip_v6_only.test | 10 | 0.001241s | 0.001359s | 0.001225s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001224s | 0.001346s | 0.001213s | byte equality observed |
| is_read_buffered.test | 10 | 0.001158s | 0.001226s | 0.001226s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001265s | 0.001225s | 0.001292s | byte equality observed |
| is_write_buffered.test | 10 | 0.001307s | 0.001262s | 0.001288s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001252s | 0.001270s | 0.001241s | byte equality observed |
| prepend.test | 10 | 0.001359s | 0.001345s | 0.001352s | byte equality observed |
| prepend_select.test | 10 | 0.001291s | 0.001302s | 0.001311s | byte equality observed |
| read.test | 10 | 0.001770s | 0.001717s | 0.001705s | byte equality observed |
| read_at.test | 9 | 0.002179s | 0.002253s | 0.002161s | byte equality observed |
| read_at_select.test | 9 | 0.002222s | 0.002275s | 0.002161s | byte equality observed |
| read_select.test | 10 | 0.001756s | 0.001724s | 0.001713s | byte equality observed |
| read_until.test | 10 | 0.001497s | 0.001467s | 0.001489s | byte equality observed |
| read_until_select.test | 10 | 0.001478s | 0.001432s | 0.001443s | byte equality observed |
| recycling_allocator.test | 10 | 0.001285s | 0.001238s | 0.001243s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001248s | 0.001185s | 0.001206s | byte equality observed |
| signal_set.test | 10 | 0.001257s | 0.001269s | 0.001266s | byte equality observed |
| signal_set_select.test | 10 | 0.001278s | 0.001330s | 0.001240s | byte equality observed |
| socket_base.test | 10 | 0.001419s | 0.001407s | 0.001406s | byte equality observed |
| socket_base_select.test | 10 | 0.001365s | 0.001437s | 0.001362s | byte equality observed |
| spawn.test | 10 | 0.001493s | 0.001502s | 0.001494s | byte equality observed |
| spawn_select.test | 10 | 0.001523s | 0.001486s | 0.001527s | byte equality observed |
| static_thread_pool.test | 10 | 0.001261s | 0.001272s | 0.001222s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001186s | 0.001248s | 0.001170s | byte equality observed |
| strand.test | 1 | 0.002363s | 0.002345s | 0.002420s | byte equality observed |
| strand_select.test | 1 | 0.001909s | 0.001985s | 0.001944s | byte equality observed |
| streambuf.test | 10 | 0.001221s | 0.001253s | 0.001279s | byte equality observed |
| streambuf_select.test | 10 | 0.001241s | 0.001259s | 0.001267s | byte equality observed |
| thread_pool.test | 8 | 0.002929s | 0.002810s | 0.002861s | byte equality observed |
| thread_pool_select.test | 8 | 0.002878s | 0.002823s | 0.002840s | byte equality observed |
| write.test | 10 | 0.001849s | 0.001865s | 0.001848s | byte equality observed |
| write_at.test | 10 | 0.001986s | 0.001958s | 0.001875s | byte equality observed |
| write_at_select.test | 10 | 0.001995s | 0.001975s | 0.001947s | byte equality observed |
| write_select.test | 10 | 0.001849s | 0.001849s | 0.001832s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43785224349).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
