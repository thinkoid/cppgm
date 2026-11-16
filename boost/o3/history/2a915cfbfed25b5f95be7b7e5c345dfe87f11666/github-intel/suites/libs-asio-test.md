# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.530485 | 3.448850 | 2.966606 | 0.001802 | 0.001815 | 0.001831 |
| any_completion_executor_select.test | RUN | 0.543453 | 3.498918 | 3.132003 | 0.001967 | 0.001717 | 0.001822 |
| any_completion_handler.test | RUN | 0.602216 | 3.172207 | 2.723617 | 0.001394 | 0.001557 | 0.001544 |
| any_completion_handler_select.test | RUN | 0.624667 | 3.216945 | 2.915414 | 0.001352 | 0.001528 | 0.001544 |
| any_io_executor.test | RUN | 0.561785 | 3.786525 | 3.308632 | 0.001492 | 0.002125 | 0.002031 |
| any_io_executor_select.test | RUN | 0.579226 | 3.729840 | 3.419879 | 0.001449 | 0.001536 | 0.002012 |
| append.test | RUN | 0.527590 | 2.958318 | 2.444805 | 0.001228 | 0.001571 | 0.001494 |
| append_select.test | RUN | 0.525210 | 2.994277 | 2.433738 | 0.001272 | 0.001646 | 0.001528 |
| as_tuple.test | RUN | 0.676790 | 3.637625 | 3.476617 | 0.001556 | 0.001485 | 0.001600 |
| as_tuple_select.test | RUN | 0.683927 | 3.585090 | 3.379269 | 0.001483 | 0.001550 | 0.001402 |
| associated_allocator.test | LINK | 0.130634 | 0.290763 | 0.365482 | — | — | — |
| associated_allocator_select.test | LINK | 0.128526 | 0.288776 | 0.355734 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.146177 | 0.309730 | 0.399369 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.144118 | 0.310654 | 0.389175 | — | — | — |
| associated_executor.test | LINK | 0.207934 | 0.544525 | 0.691003 | — | — | — |
| associated_executor_select.test | LINK | 0.206797 | 0.547171 | 0.668068 | — | — | — |
| associated_immediate_executor.test | LINK | 0.195279 | 0.508148 | 0.596224 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.192645 | 0.505131 | 0.584506 | — | — | — |
| associator.test | LINK | 0.103978 | 0.241373 | 0.295950 | — | — | — |
| associator_select.test | LINK | 0.104897 | 0.242051 | 0.296839 | — | — | — |
| awaitable.test | LINK | 0.108733 | 0.241714 | 0.287041 | — | — | — |
| awaitable_select.test | LINK | 0.110277 | 0.241024 | 0.294191 | — | — | — |
| basic_datagram_socket.test | LINK | 0.333440 | 0.774123 | 1.106680 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.336843 | 0.792728 | 1.144264 | — | — | — |
| basic_deadline_timer.test | LINK | 0.409555 | 0.913871 | 1.272316 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.405777 | 0.937208 | 1.318555 | — | — | — |
| basic_file.test | LINK | 0.108212 | 0.240976 | 0.293982 | — | — | — |
| basic_file_select.test | LINK | 0.110805 | 0.243879 | 0.299994 | — | — | — |
| basic_random_access_file.test | LINK | 0.108160 | 0.244036 | 0.301476 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.107417 | 0.245519 | 0.297711 | — | — | — |
| basic_raw_socket.test | LINK | 0.338930 | 0.780919 | 1.134828 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.342583 | 0.799337 | 1.145196 | — | — | — |
| basic_readable_pipe.test | LINK | 0.325048 | 0.736437 | 0.978335 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.336403 | 0.788508 | 1.178569 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.331294 | 0.775678 | 1.118274 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.340336 | 0.807002 | 1.159973 | — | — | — |
| basic_signal_set.test | LINK | 0.313253 | 0.712695 | 0.885990 | — | — | — |
| basic_signal_set_select.test | LINK | 0.324632 | 0.766423 | 1.089844 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.331878 | 0.775706 | 1.135219 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.340153 | 0.796104 | 1.143747 | — | — | — |
| basic_stream_file.test | LINK | 0.103250 | 0.250328 | 0.303618 | — | — | — |
| basic_stream_file_select.test | LINK | 0.107630 | 0.246321 | 0.292757 | — | — | — |
| basic_stream_socket.test | LINK | 0.332412 | 0.782284 | 1.135464 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.343870 | 0.795243 | 1.153410 | — | — | — |
| basic_streambuf.test | LINK | 0.163163 | 0.352785 | 0.434428 | — | — | — |
| basic_streambuf_select.test | LINK | 0.164080 | 0.349994 | 0.429594 | — | — | — |
| basic_waitable_timer.test | LINK | 0.316479 | 0.729357 | 1.061240 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.319828 | 0.757731 | 1.077747 | — | — | — |
| basic_writable_pipe.test | LINK | 0.317611 | 0.736701 | 0.967663 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.330609 | 0.780052 | 1.175671 | — | — | — |
| bind_allocator.test | RUN | 0.560393 | 3.014002 | 2.691277 | 0.001838 | 0.001856 | 0.001572 |
| bind_allocator_select.test | RUN | 0.573580 | 3.079251 | 2.635524 | 0.001277 | 0.001689 | 0.001852 |
| bind_cancellation_slot.test | RUN | 0.577218 | 3.054691 | 2.721207 | 0.001015 | 0.001075 | 0.001058 |
| bind_cancellation_slot_select.test | RUN | 0.597037 | 3.031487 | 2.566839 | 0.000991 | 0.000997 | 0.000986 |
| bind_executor.test | RUN | 0.393501 | 2.094015 | 1.689849 | 0.001762 | 0.001674 | 0.001779 |
| bind_executor_select.test | RUN | 0.399324 | 2.111598 | 1.644430 | 0.001504 | 0.001561 | 0.001522 |
| bind_immediate_executor.test | RUN | 0.293472 | 1.714366 | 1.051559 | 0.000982 | 0.001025 | 0.000949 |
| bind_immediate_executor_select.test | RUN | 0.299722 | 1.683815 | 1.166548 | 0.000925 | 0.001040 | 0.000989 |
| buffer.test | RUN | 0.174405 | 0.711443 | 0.619035 | 0.000930 | 0.000989 | 0.000931 |
| buffer_select.test | RUN | 0.171699 | 0.714921 | 0.628081 | 0.000945 | 0.000975 | 0.000885 |
| buffer_registration.test | LINK | 0.133618 | 0.353694 | 0.363946 | — | — | — |
| buffer_registration_select.test | LINK | 0.134104 | 0.352512 | 0.369490 | — | — | — |
| buffered_read_stream.test | RUN | 0.664024 | 4.578078 | 3.769419 | 0.001225 | 0.001839 | 0.001685 |
| buffered_read_stream_select.test | RUN | 0.678800 | 4.727423 | 3.781643 | 0.001214 | 0.001623 | 0.001648 |
| buffered_stream.test | RUN | 0.930489 | 7.355519 | 6.576033 | 0.001778 | 0.001836 | 0.001544 |
| buffered_stream_select.test | RUN | 0.950009 | 7.499903 | 6.447763 | 0.001546 | 0.001776 | 0.001736 |
| buffered_write_stream.test | RUN | 1.112872 | 6.355219 | 5.734748 | 0.001784 | 0.001927 | 0.001806 |
| buffered_write_stream_select.test | RUN | 1.125865 | 6.493288 | 5.480303 | 0.001526 | 0.001882 | 0.001690 |
| buffers_iterator.test | RUN | 0.331433 | 0.559802 | 0.889770 | 0.001231 | 0.001384 | 0.001356 |
| buffers_iterator_select.test | RUN | 0.322177 | 0.559117 | 0.895235 | 0.001192 | 0.001367 | 0.001384 |
| cancel_after.test | RUN | 0.913745 | 4.956766 | 4.138324 | 0.003609 | 0.004156 | 0.003385 |
| cancel_after_select.test | RUN | 0.936609 | 4.908633 | 4.132943 | 0.003282 | 0.003302 | 0.003212 |
| cancel_at.test | RUN | 0.816051 | 4.506152 | 4.082492 | 0.003037 | 0.003165 | 0.003181 |
| cancel_at_select.test | RUN | 0.782334 | 4.393907 | 4.033176 | 0.002653 | 0.003241 | 0.003237 |
| cancellation_signal.test | LINK | 0.094627 | 0.202192 | 0.233469 | — | — | — |
| cancellation_signal_select.test | LINK | 0.096388 | 0.202899 | 0.253714 | — | — | — |
| cancellation_state.test | LINK | 0.089139 | 0.202734 | 0.347181 | — | — | — |
| cancellation_state_select.test | LINK | 0.121396 | 0.204882 | 0.360248 | — | — | — |
| cancellation_type.test | LINK | 0.100890 | 0.161592 | 0.296090 | — | — | — |
| cancellation_type_select.test | LINK | 0.108265 | 0.163106 | 0.287684 | — | — | — |
| co_composed.test | RUN | 0.101050 | 0.163410 | 0.288122 | 0.001110 | 0.000995 | 0.001151 |
| co_composed_select.test | RUN | 0.103603 | 0.227458 | 0.293770 | 0.001206 | 0.001344 | 0.001161 |
| co_spawn.test | LINK | 0.103061 | 0.229671 | 0.294093 | — | — | — |
| co_spawn_select.test | LINK | 0.102824 | 0.164937 | 0.286797 | — | — | — |
| completion_condition.test | LINK | 0.133440 | 0.367538 | 0.402739 | — | — | — |
| completion_condition_select.test | LINK | 0.132822 | 0.362495 | 0.389085 | — | — | — |
| compose.test | RUN | 0.681355 | 3.787825 | 3.318317 | 0.001691 | 0.002141 | 0.001858 |
| compose_select.test | RUN | 0.690914 | 3.774841 | 3.335863 | 0.001343 | 0.001567 | 0.001658 |
| composed.test | RUN | 0.683668 | 3.667469 | 3.184501 | 0.001340 | 0.001392 | 0.001482 |
| composed_select.test | RUN | 0.653332 | 3.652747 | 3.217584 | 0.001316 | 0.001575 | 0.001396 |
| config.test | RUN | 0.343181 | 2.378403 | 1.389596 | 0.001421 | 0.001496 | 0.001320 |
| config_select.test | RUN | 0.369783 | 2.497379 | 1.561357 | 0.001289 | 0.001446 | 0.001357 |
| connect.test | LINK | 1.105403 | 8.029645 | 6.821928 | — | — | — |
| connect_select.test | LINK | 1.128633 | 8.107830 | 6.853331 | — | — | — |
| connect_pipe.test | RUN | 0.591844 | 3.036376 | 2.614166 | 0.001322 | 0.001596 | 0.001350 |
| connect_pipe_select.test | RUN | 0.604670 | 3.137346 | 2.791754 | 0.001278 | 0.001612 | 0.001351 |
| consign.test | RUN | 0.508233 | 2.996463 | 2.417704 | 0.001265 | 0.001206 | 0.001278 |
| consign_select.test | RUN | 0.524133 | 3.008798 | 2.422746 | 0.001356 | 0.001400 | 0.001417 |
| coroutine.test | LINK | 0.109959 | 0.282024 | 0.333728 | — | — | — |
| coroutine_select.test | LINK | 0.112372 | 0.278131 | 0.335604 | — | — | — |
| deadline_timer.test | RUN | 0.765041 | 3.863808 | 3.393041 | 0.002656 | 0.003066 | 0.002175 |
| deadline_timer_select.test | RUN | 0.759726 | 3.842020 | 3.350154 | 0.002279 | 0.002391 | 0.003115 |
| deferred.test | RUN | 0.118269 | 0.259223 | 0.321898 | 0.001202 | 0.001571 | 0.001237 |
| deferred_select.test | RUN | 0.115989 | 0.260682 | 0.317304 | 0.001191 | 0.001469 | 0.001204 |
| detached.test | LINK | 0.129933 | 0.289562 | 0.353099 | — | — | — |
| detached_select.test | LINK | 0.133282 | 0.282111 | 0.359502 | — | — | — |
| disposition.test | RUN | 0.141515 | 0.704130 | 0.662792 | 0.000951 | 0.001612 | 0.001395 |
| disposition_select.test | RUN | 0.128077 | 0.704360 | 0.675923 | 0.000976 | 0.001565 | 0.001406 |
| error.test | RUN | 0.116652 | 0.679465 | 0.592276 | 0.000945 | 0.001510 | 0.001260 |
| error_select.test | RUN | 0.116137 | 0.681771 | 0.585853 | 0.000938 | 0.001610 | 0.001197 |
| file_base.test | LINK | 0.149512 | 0.560567 | 0.647956 | — | — | — |
| file_base_select.test | LINK | 0.145341 | 0.554988 | 0.532838 | — | — | — |
| fwd_first.test | LINK | 0.341245 | 0.968845 | 1.166017 | — | — | — |
| fwd_last.test | LINK | 0.337025 | 0.873348 | 1.144048 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.125305 | 0.323497 | 0.414771 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.123691 | 0.320042 | 0.408705 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.561480 | 3.055177 | 2.453447 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.565668 | 3.111190 | 2.377044 | — | — | — |
| generic_raw_protocol.test | LINK | 0.561001 | 3.044601 | 2.450189 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.561486 | 3.110607 | 2.381863 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.485144 | 2.585203 | 2.050381 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.487918 | 2.590117 | 2.018122 | — | — | — |
| generic_stream_protocol.test | LINK | 0.517793 | 2.789193 | 2.256969 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.521953 | 2.819191 | 2.253531 | — | — | — |
| high_resolution_timer.test | LINK | 0.214992 | 0.485242 | 0.636885 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.222060 | 0.497236 | 0.645515 | — | — | — |
| immediate.test | LINK | 0.147922 | 0.372822 | 0.389940 | — | — | — |
| immediate_select.test | LINK | 0.147450 | 0.374793 | 0.391372 | — | — | — |
| inline_executor.test | RUN | 0.181092 | 0.584010 | 0.591238 | 0.000940 | 0.001040 | 0.000892 |
| inline_executor_select.test | RUN | 0.182917 | 0.583498 | 0.594979 | 0.000950 | 0.001035 | 0.000880 |
| inline_or_executor.test | RUN | 0.303233 | 1.793458 | 1.190899 | 0.000950 | 0.001034 | 0.000909 |
| inline_or_executor_select.test | RUN | 0.313357 | 1.821100 | 1.301168 | 0.000956 | 0.001017 | 0.000945 |
| io_context.test | RUN | 0.449220 | 2.753578 | 2.078426 | 0.001983 | 0.002167 | 0.001997 |
| io_context_select.test | RUN | 0.450814 | 2.675579 | 2.093971 | 0.001670 | 0.001906 | 0.001836 |
| io_context_strand.test | RUN | 0.426633 | 2.292724 | 1.809774 | 0.001846 | 0.001867 | 0.001791 |
| io_context_strand_select.test | RUN | 0.432713 | 2.296149 | 1.832782 | 0.001581 | 0.001766 | 0.001553 |
| ip_address.test | LINK | 0.150987 | 0.522936 | 0.519213 | — | — | — |
| ip_address_select.test | LINK | 0.149281 | 0.512828 | 0.508894 | — | — | — |
| ip_address_v4.test | LINK | 0.154375 | 0.549543 | 0.886682 | — | — | — |
| ip_address_v4_select.test | LINK | 0.152593 | 0.540367 | 0.890879 | — | — | — |
| ip_address_v6.test | LINK | 0.175228 | 0.724430 | 1.090265 | — | — | — |
| ip_address_v6_select.test | LINK | 0.175683 | 0.720181 | 1.091594 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.131208 | 0.340327 | 0.697521 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.133992 | 0.340433 | 0.692100 | — | — | — |
| ip_basic_resolver.test | LINK | 0.217991 | 0.489142 | 1.036205 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.221098 | 0.510333 | 1.061580 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.071131 | 0.193728 | 0.293643 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.071237 | 0.163610 | 0.290796 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.129968 | 0.453801 | 0.684977 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.129759 | 0.487484 | 0.674044 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.122791 | 0.475113 | 0.650657 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.124813 | 0.481270 | 0.654816 | — | — | — |
| ip_host_name.test | RUN | 0.134110 | 0.665552 | 0.747329 | 0.000904 | 0.001528 | 0.001234 |
| ip_host_name_select.test | RUN | 0.134371 | 0.660672 | 0.749925 | 0.000901 | 0.001448 | 0.001116 |
| ip_icmp.test | RUN | 0.710408 | 6.497273 | 4.890802 | 0.000905 | 0.001420 | 0.001061 |
| ip_icmp_select.test | RUN | 0.700018 | 6.540771 | 4.778418 | 0.000988 | 0.001470 | 0.001208 |
| ip_multicast.test | RUN | 0.389652 | 3.179719 | 2.783241 | 0.001034 | 0.001547 | 0.001236 |
| ip_multicast_select.test | RUN | 0.403176 | 3.145657 | 2.746258 | 0.001043 | 0.001673 | 0.001187 |
| ip_resolver_query_base.test | LINK | 0.081720 | 0.267114 | 0.308090 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.082974 | 0.266279 | 0.307067 | — | — | — |
| ip_tcp.test | RUN | 1.051312 | 9.531011 | 7.603006 | 0.001300 | 0.001894 | 0.001538 |
| ip_tcp_select.test | RUN | 1.052400 | 9.906274 | 7.426385 | 0.001187 | 0.001836 | 0.001866 |
| ip_udp.test | RUN | 0.753106 | 6.696774 | 5.132784 | 0.001103 | 0.001637 | 0.001322 |
| ip_udp_select.test | RUN | 0.750263 | 6.989106 | 5.003731 | 0.001018 | 0.001572 | 0.001382 |
| ip_unicast.test | RUN | 0.363916 | 2.893811 | 2.411090 | 0.000940 | 0.001598 | 0.001232 |
| ip_unicast_select.test | RUN | 0.362122 | 2.931089 | 2.379484 | 0.001000 | 0.001571 | 0.001188 |
| ip_v6_only.test | RUN | 0.373784 | 2.992192 | 2.504270 | 0.001011 | 0.001624 | 0.001296 |
| ip_v6_only_select.test | RUN | 0.383038 | 3.049090 | 2.472033 | 0.000986 | 0.001611 | 0.001195 |
| is_read_buffered.test | RUN | 0.253651 | 0.886000 | 1.263939 | 0.000899 | 0.001361 | 0.001133 |
| is_read_buffered_select.test | RUN | 0.259098 | 0.903759 | 1.289171 | 0.000895 | 0.001394 | 0.001104 |
| is_write_buffered.test | RUN | 0.249843 | 0.886723 | 1.243814 | 0.000913 | 0.001364 | 0.001237 |
| is_write_buffered_select.test | RUN | 0.257443 | 0.898510 | 1.294296 | 0.000930 | 0.001245 | 0.001157 |
| local_basic_endpoint.test | LINK | 0.123583 | 0.486396 | 0.656188 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.124630 | 0.486741 | 0.650585 | — | — | — |
| local_connect_pair.test | LINK | 0.343626 | 2.905491 | 2.295933 | — | — | — |
| local_connect_pair_select.test | LINK | 0.351102 | 2.935356 | 2.315993 | — | — | — |
| local_datagram_protocol.test | LINK | 0.477525 | 3.868937 | 3.234411 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.485050 | 3.889814 | 3.251859 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.486680 | 3.752459 | 3.302498 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.486901 | 3.859675 | 3.196273 | — | — | — |
| local_stream_protocol.test | LINK | 0.451861 | 3.604318 | 3.125403 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.459763 | 3.639555 | 3.025130 | — | — | — |
| placeholders.test | LINK | 0.078840 | 0.262567 | 0.327548 | — | — | — |
| placeholders_select.test | LINK | 0.078463 | 0.263405 | 0.324112 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.217410 | 0.740226 | 0.978547 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.228076 | 0.793956 | 1.171096 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.218333 | 0.737538 | 0.970123 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.228255 | 0.780822 | 1.148760 | — | — | — |
| posix_descriptor_base.test | LINK | 0.086699 | 0.268418 | 0.320254 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.085236 | 0.268756 | 0.311557 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.464923 | 3.699595 | 3.066500 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.481905 | 3.737669 | 3.149889 | — | — | — |
| prepend.test | RUN | 0.491145 | 2.932304 | 2.376526 | 0.001211 | 0.001313 | 0.001313 |
| prepend_select.test | RUN | 0.504278 | 2.958413 | 2.358161 | 0.001222 | 0.001314 | 0.001249 |
| random_access_file.test | LINK | 0.294624 | 0.668047 | 0.774313 | — | — | — |
| random_access_file_select.test | LINK | 0.306391 | 0.698168 | 0.982002 | — | — | — |
| read.test | RUN | 1.677581 | 18.897943 | 14.056084 | 0.001684 | 0.002178 | 0.001866 |
| read_select.test | RUN | 1.707882 | 18.507016 | 14.251683 | 0.001746 | 0.002128 | 0.001768 |
| read_at.test | RUN | 1.684965 | 24.363253 | 18.390058 | 0.002034 | 0.002311 | 0.001967 |
| read_at_select.test | RUN | 1.700849 | 24.888795 | 18.461302 | 0.002034 | 0.002614 | 0.002059 |
| read_until.test | RUN | 0.878799 | 7.303243 | 5.325292 | 0.001449 | 0.001714 | 0.001351 |
| read_until_select.test | RUN | 0.889977 | 7.230536 | 5.502236 | 0.001551 | 0.001554 | 0.001404 |
| readable_pipe.test | LINK | 0.542237 | 3.023845 | 2.427973 | — | — | — |
| readable_pipe_select.test | LINK | 0.562927 | 3.156976 | 2.529853 | — | — | — |
| recycling_allocator.test | RUN | 0.158573 | 0.424711 | 0.472184 | 0.001276 | 0.001371 | 0.001126 |
| recycling_allocator_select.test | RUN | 0.158220 | 0.413253 | 0.493796 | 0.001174 | 0.001418 | 0.001317 |
| redirect_disposition.test | LINK | 0.715058 | 4.239441 | 3.642959 | — | — | — |
| redirect_disposition_select.test | LINK | 0.717641 | 4.156127 | 3.616436 | — | — | — |
| redirect_error.test | LINK | 0.638995 | 3.489660 | 3.166810 | — | — | — |
| redirect_error_select.test | LINK | 0.640459 | 3.497332 | 3.168091 | — | — | — |
| registered_buffer.test | LINK | 0.154460 | 0.343369 | 0.447745 | — | — | — |
| registered_buffer_select.test | LINK | 0.152393 | 0.335924 | 0.410556 | — | — | — |
| signal_set.test | RUN | 0.524433 | 2.919070 | 2.232347 | 0.001276 | 0.001458 | 0.001147 |
| signal_set_select.test | RUN | 0.549853 | 3.017957 | 2.477366 | 0.001284 | 0.001448 | 0.001282 |
| signal_set_base.test | LINK | 0.122363 | 0.254606 | 0.311441 | — | — | — |
| signal_set_base_select.test | LINK | 0.121806 | 0.258284 | 0.306046 | — | — | — |
| socket_base.test | RUN | 0.642376 | 4.254692 | 3.420661 | 0.001647 | 0.001440 | 0.001371 |
| socket_base_select.test | RUN | 0.649442 | 4.135000 | 3.339991 | 0.001324 | 0.001634 | 0.001236 |
| spawn.test | RUN | 1.130327 | 7.105005 | 5.843877 | 0.001494 | 0.001948 | 0.001482 |
| spawn_select.test | RUN | 1.136353 | 7.043605 | 5.960464 | 0.001569 | 0.001639 | 0.001592 |
| static_thread_pool.test | RUN | 0.279805 | 0.647327 | 0.777455 | 0.001293 | 0.001479 | 0.001284 |
| static_thread_pool_select.test | RUN | 0.290011 | 0.683566 | 0.987820 | 0.001102 | 0.001503 | 0.001240 |
| steady_timer.test | LINK | 0.319405 | 0.725012 | 1.095999 | — | — | — |
| steady_timer_select.test | LINK | 0.324697 | 0.742884 | 1.079796 | — | — | — |
| strand.test | RUN | 0.694446 | 3.968750 | 3.557096 | 0.001840 | 0.002231 | 0.002116 |
| strand_select.test | RUN | 0.703268 | 3.899300 | 3.497182 | 0.001904 | 0.002272 | 0.002046 |
| stream_file.test | LINK | 0.289703 | 0.673184 | 0.788031 | — | — | — |
| stream_file_select.test | LINK | 0.305289 | 0.683170 | 1.016318 | — | — | — |
| streambuf.test | RUN | 0.185217 | 0.385155 | 0.566531 | 0.000918 | 0.001030 | 0.001143 |
| streambuf_select.test | RUN | 0.168064 | 0.372446 | 0.478978 | 0.000886 | 0.000951 | 0.001172 |
| system_timer.test | LINK | 0.456507 | 2.555599 | 2.235752 | — | — | — |
| system_timer_select.test | LINK | 0.459031 | 2.527172 | 2.050517 | — | — | — |
| system_context.test | LINK | 0.196385 | 0.428120 | 0.473885 | — | — | — |
| system_context_select.test | LINK | 0.202983 | 0.462228 | 0.598039 | — | — | — |
| system_executor.test | LINK | 0.262135 | 1.440394 | 0.948680 | — | — | — |
| system_executor_select.test | LINK | 0.270913 | 1.412602 | 1.074495 | — | — | — |
| this_coro.test | LINK | 0.073045 | 0.160975 | 0.183084 | — | — | — |
| this_coro_select.test | LINK | 0.073702 | 0.161727 | 0.183144 | — | — | — |
| thread_pool.test | RUN | 0.315556 | 1.848190 | 1.246856 | 0.001621 | 0.001713 | 0.001630 |
| thread_pool_select.test | RUN | 0.327480 | 1.891293 | 1.369201 | 0.001642 | 0.001644 | 0.001712 |
| time_traits.test | LINK | 0.164458 | 0.338132 | 0.377104 | — | — | — |
| time_traits_select.test | LINK | 0.165509 | 0.432757 | 0.379254 | — | — | — |
| ts_buffer.test | LINK | 0.157389 | 0.562310 | 0.398811 | — | — | — |
| ts_buffer_select.test | LINK | 0.157303 | 0.558850 | 0.402636 | — | — | — |
| ts_executor.test | LINK | 0.226845 | 0.802887 | 0.635042 | — | — | — |
| ts_executor_select.test | LINK | 0.237100 | 0.825899 | 0.771567 | — | — | — |
| ts_internet.test | LINK | 0.246929 | 0.863595 | 0.966737 | — | — | — |
| ts_internet_select.test | LINK | 0.253797 | 0.889782 | 1.067214 | — | — | — |
| ts_io_context.test | LINK | 0.198443 | 0.660577 | 0.765571 | — | — | — |
| ts_io_context_select.test | LINK | 0.210401 | 0.688917 | 0.989816 | — | — | — |
| ts_net.test | LINK | 0.293884 | 1.025305 | 1.535089 | — | — | — |
| ts_net_select.test | LINK | 0.303526 | 1.055342 | 1.593422 | — | — | — |
| ts_netfwd.test | LINK | 0.294082 | 1.028033 | 1.563611 | — | — | — |
| ts_netfwd_select.test | LINK | 0.304227 | 1.050044 | 1.597007 | — | — | — |
| ts_socket.test | LINK | 0.243687 | 0.803621 | 1.206879 | — | — | — |
| ts_socket_select.test | LINK | 0.249997 | 0.821844 | 1.217887 | — | — | — |
| ts_timer.test | LINK | 0.214028 | 0.719153 | 1.050249 | — | — | — |
| ts_timer_select.test | LINK | 0.219370 | 0.737968 | 1.054018 | — | — | — |
| use_awaitable.test | LINK | 0.071326 | 0.242590 | 0.294573 | — | — | — |
| use_awaitable_select.test | LINK | 0.071685 | 0.242735 | 0.287050 | — | — | — |
| wait_traits.test | LINK | 0.071103 | 0.242329 | 0.289074 | — | — | — |
| wait_traits_select.test | LINK | 0.071276 | 0.241656 | 0.280555 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.071764 | 0.238929 | 0.294393 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.071650 | 0.242047 | 0.293597 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.070183 | 0.245017 | 0.292778 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.070997 | 0.240164 | 0.295289 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.070149 | 0.240397 | 0.296580 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.071185 | 0.240912 | 0.294684 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.070628 | 0.241801 | 0.288034 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.071723 | 0.237338 | 0.288952 | — | — | — |
| windows_object_handle.test | LINK | 0.200428 | 0.655185 | 0.764653 | — | — | — |
| windows_object_handle_select.test | LINK | 0.212433 | 0.700742 | 0.992797 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.211751 | 0.695437 | 0.860580 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.221892 | 0.738502 | 1.049612 | — | — | — |
| windows_random_access_handle.test | LINK | 0.200348 | 0.653265 | 0.771669 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.211964 | 0.700849 | 0.978586 | — | — | — |
| windows_stream_handle.test | LINK | 0.202170 | 0.657843 | 0.787848 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.214547 | 0.700953 | 0.977989 | — | — | — |
| writable_pipe.test | LINK | 0.380962 | 2.936081 | 2.457282 | — | — | — |
| writable_pipe_select.test | LINK | 0.445148 | 3.097657 | 2.622323 | — | — | — |
| write.test | RUN | 1.673076 | 15.361686 | 13.738845 | 0.002046 | 0.001835 | 0.001743 |
| write_select.test | RUN | 1.688989 | 15.285473 | 13.551584 | 0.001754 | 0.001798 | 0.001752 |
| write_at.test | RUN | 1.749722 | 20.599008 | 17.353973 | 0.001958 | 0.002150 | 0.001904 |
| write_at_select.test | RUN | 1.766088 | 20.797778 | 17.357360 | 0.002076 | 0.001970 | 0.002024 |
| any_executor.test | RUN | 0.683034 | 6.696712 | 5.705946 | 0.001797 | 0.002091 | 0.001657 |
| blocking.test | RUN | 1.505524 | 9.021457 | 11.216769 | 0.003307 | 0.003345 | 0.003271 |
| blocking_adaptation.test | RUN | 0.751788 | 3.734755 | 5.082103 | 0.002200 | 0.002074 | 0.002016 |
| context_as.test | RUN | 0.437382 | 2.607205 | 1.751706 | 0.001576 | 0.001617 | 0.001382 |
| executor.test | RUN | 0.111007 | 0.245729 | 0.306567 | 0.001103 | 0.001333 | 0.001237 |
| inline_exception_handling.test | RUN | 1.382533 | 7.844496 | 11.191814 | 0.002396 | 0.002258 | 0.002404 |
| invocable_archetype.test | RUN | 0.107852 | 0.246878 | 0.292283 | 0.001247 | 0.001371 | 0.001211 |
| mapping.test | RUN | 1.515161 | 8.446021 | 11.365453 | 0.002412 | 0.002360 | 0.002422 |
| outstanding_work.test | RUN | 0.684139 | 3.579355 | 4.897239 | 0.002074 | 0.002248 | 0.002131 |
| prefer_only.test | RUN | 0.220439 | 1.420873 | 1.090706 | 0.001230 | 0.001298 | 0.001215 |
| relationship.test | RUN | 0.583084 | 3.462479 | 4.352137 | 0.001523 | 0.002074 | 0.001494 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.010× | 0.999×, 1.021× | 1.002× |
| clang | 0.991× | 0.990×, 0.991× | 1.016× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001260s | 0.001266s | 0.001259s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001220s | 0.001229s | 0.001215s | byte equality observed |
| any_completion_handler.test | 10 | 0.001043s | 0.001027s | 0.001011s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001034s | 0.001032s | 0.001002s | byte equality observed |
| any_io_executor.test | 6 | 0.001240s | 0.001229s | 0.001202s | byte equality observed |
| any_io_executor_select.test | 6 | 0.001214s | 0.001222s | 0.001209s | byte equality observed |
| append.test | 10 | 0.000982s | 0.000985s | 0.000967s | byte equality observed |
| append_select.test | 10 | 0.000966s | 0.000964s | 0.000955s | byte equality observed |
| as_tuple.test | 5 | 0.001043s | 0.001046s | 0.001027s | byte equality observed |
| as_tuple_select.test | 10 | 0.000966s | 0.000967s | 0.000961s | byte equality observed |
| bind_allocator.test | 1 | 0.001444s | 0.001451s | 0.001414s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001183s | 0.001218s | 0.001159s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000873s | 0.000899s | 0.000848s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000808s | 0.000820s | 0.000803s | byte equality observed |
| bind_executor.test | 1 | 0.001401s | 0.001483s | 0.001442s | byte equality observed |
| bind_executor_select.test | 1 | 0.001677s | 0.001613s | 0.001675s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000893s | 0.000884s | 0.000894s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000867s | 0.000894s | 0.000874s | byte equality observed |
| buffer.test | 10 | 0.000832s | 0.000833s | 0.000833s | byte equality observed |
| buffer_select.test | 10 | 0.000843s | 0.000824s | 0.000824s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001041s | 0.001033s | 0.001004s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001013s | 0.000994s | 0.000975s | byte equality observed |
| buffered_stream.test | 10 | 0.001013s | 0.000999s | 0.000990s | byte equality observed |
| buffered_stream_select.test | 10 | 0.000993s | 0.000985s | 0.000975s | byte equality observed |
| buffered_write_stream.test | 10 | 0.000995s | 0.000967s | 0.000987s | byte equality observed |
| buffered_write_stream_select.test | 6 | 0.000998s | 0.000973s | 0.000979s | byte equality observed |
| buffers_iterator.test | 10 | 0.000819s | 0.000828s | 0.000805s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000788s | 0.000790s | 0.000794s | byte equality observed |
| cancel_after.test | 1 | 0.002878s | 0.003001s | 0.002935s | byte equality observed |
| cancel_after_select.test | 1 | 0.002394s | 0.002411s | 0.002464s | byte equality observed |
| cancel_at.test | 1 | 0.003043s | 0.003080s | 0.003051s | byte equality observed |
| cancel_at_select.test | 1 | 0.002872s | 0.002979s | 0.002804s | byte equality observed |
| co_composed.test | 10 | 0.000878s | 0.000860s | 0.000871s | byte equality observed |
| co_composed_select.test | 10 | 0.000792s | 0.000821s | 0.000808s | byte equality observed |
| compose.test | 1 | 0.001398s | 0.001430s | 0.001420s | byte equality observed |
| compose_select.test | 1 | 0.001129s | 0.001141s | 0.001211s | byte equality observed |
| composed.test | 1 | 0.001703s | 0.001667s | 0.001661s | byte equality observed |
| composed_select.test | 1 | 0.001268s | 0.001279s | 0.001437s | byte equality observed |
| config.test | 10 | 0.000918s | 0.000932s | 0.000917s | byte equality observed |
| config_select.test | 10 | 0.000898s | 0.000858s | 0.000868s | byte equality observed |
| connect_pipe.test | 10 | 0.000890s | 0.000864s | 0.000889s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000908s | 0.000878s | 0.000864s | byte equality observed |
| consign.test | 10 | 0.000862s | 0.000870s | 0.000858s | byte equality observed |
| consign_select.test | 10 | 0.000839s | 0.000864s | 0.000822s | byte equality observed |
| deadline_timer.test | 1 | 0.002187s | 0.002209s | 0.002200s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001881s | 0.001800s | 0.001908s | byte equality observed |
| deferred.test | 10 | 0.000815s | 0.000851s | 0.000823s | byte equality observed |
| deferred_select.test | 10 | 0.000734s | 0.000764s | 0.000745s | byte equality observed |
| disposition.test | 10 | 0.000786s | 0.000800s | 0.000788s | byte equality observed |
| disposition_select.test | 10 | 0.000792s | 0.000788s | 0.000800s | byte equality observed |
| error.test | 10 | 0.000770s | 0.000773s | 0.000764s | byte equality observed |
| error_select.test | 10 | 0.000776s | 0.000782s | 0.000761s | byte equality observed |
| inline_executor.test | 10 | 0.000775s | 0.000772s | 0.000766s | byte equality observed |
| inline_executor_select.test | 10 | 0.000774s | 0.000775s | 0.000762s | byte equality observed |
| inline_or_executor.test | 10 | 0.000784s | 0.000788s | 0.000767s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000778s | 0.000790s | 0.000769s | byte equality observed |
| io_context.test | 1 | 0.001727s | 0.001748s | 0.001801s | byte equality observed |
| io_context_select.test | 1 | 0.001979s | 0.002037s | 0.002037s | byte equality observed |
| io_context_strand.test | 1 | 0.002053s | 0.001979s | 0.002084s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001770s | 0.001749s | 0.001801s | byte equality observed |
| ip_host_name.test | 10 | 0.000845s | 0.000848s | 0.000824s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000766s | 0.000767s | 0.000773s | byte equality observed |
| ip_icmp.test | 10 | 0.000791s | 0.000792s | 0.000761s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000783s | 0.000803s | 0.000759s | byte equality observed |
| ip_multicast.test | 10 | 0.000848s | 0.000855s | 0.000832s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000834s | 0.000836s | 0.000814s | byte equality observed |
| ip_tcp.test | 10 | 0.001046s | 0.001032s | 0.001032s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001003s | 0.001019s | 0.001001s | byte equality observed |
| ip_udp.test | 10 | 0.000864s | 0.000867s | 0.000843s | byte equality observed |
| ip_udp_select.test | 10 | 0.000844s | 0.000861s | 0.000828s | byte equality observed |
| ip_unicast.test | 10 | 0.000812s | 0.000825s | 0.000798s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000806s | 0.000822s | 0.000794s | byte equality observed |
| ip_v6_only.test | 10 | 0.000814s | 0.000825s | 0.000797s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000798s | 0.000816s | 0.000796s | byte equality observed |
| is_read_buffered.test | 10 | 0.000753s | 0.000758s | 0.000738s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000749s | 0.000758s | 0.000747s | byte equality observed |
| is_write_buffered.test | 10 | 0.000754s | 0.000751s | 0.000743s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000760s | 0.000755s | 0.000743s | byte equality observed |
| prepend.test | 10 | 0.000808s | 0.000817s | 0.000798s | byte equality observed |
| prepend_select.test | 10 | 0.000786s | 0.000828s | 0.000779s | byte equality observed |
| read.test | 10 | 0.001106s | 0.001140s | 0.001062s | byte equality observed |
| read_at.test | 10 | 0.001314s | 0.001446s | 0.001302s | byte equality observed |
| read_at_select.test | 10 | 0.001311s | 0.001451s | 0.001302s | byte equality observed |
| read_select.test | 10 | 0.001102s | 0.001158s | 0.001068s | byte equality observed |
| read_until.test | 10 | 0.000916s | 0.000952s | 0.000889s | byte equality observed |
| read_until_select.test | 10 | 0.000931s | 0.000979s | 0.000883s | byte equality observed |
| recycling_allocator.test | 10 | 0.000800s | 0.000818s | 0.000744s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000811s | 0.000822s | 0.000771s | byte equality observed |
| signal_set.test | 10 | 0.000836s | 0.000835s | 0.000824s | byte equality observed |
| signal_set_select.test | 10 | 0.000837s | 0.000811s | 0.000814s | byte equality observed |
| socket_base.test | 10 | 0.000913s | 0.000879s | 0.000905s | byte equality observed |
| socket_base_select.test | 10 | 0.000889s | 0.000888s | 0.000896s | byte equality observed |
| spawn.test | 10 | 0.000981s | 0.000962s | 0.000972s | byte equality observed |
| spawn_select.test | 10 | 0.000985s | 0.000965s | 0.000976s | byte equality observed |
| static_thread_pool.test | 10 | 0.000824s | 0.000823s | 0.000840s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000783s | 0.000751s | 0.000783s | byte equality observed |
| strand.test | 1 | 0.001687s | 0.001633s | 0.001665s | byte equality observed |
| strand_select.test | 1 | 0.001464s | 0.001420s | 0.001463s | byte equality observed |
| streambuf.test | 10 | 0.000872s | 0.000904s | 0.000874s | byte equality observed |
| streambuf_select.test | 10 | 0.000866s | 0.000872s | 0.000853s | byte equality observed |
| thread_pool.test | 10 | 0.001544s | 0.001563s | 0.001504s | byte equality observed |
| thread_pool_select.test | 10 | 0.001526s | 0.001506s | 0.001538s | byte equality observed |
| write.test | 10 | 0.001198s | 0.001181s | 0.001134s | byte equality observed |
| write_at.test | 10 | 0.001313s | 0.001294s | 0.001296s | byte equality observed |
| write_at_select.test | 10 | 0.001310s | 0.001313s | 0.001284s | byte equality observed |
| write_select.test | 10 | 0.001175s | 0.001148s | 0.001145s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43778388618).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
