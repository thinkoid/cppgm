# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.828072 | 5.142421 | 5.398100 | 0.002726 | 0.002970 | 0.003112 |
| any_completion_executor_select.test | RUN | 0.868518 | 5.132893 | 5.729367 | 0.002965 | 0.003025 | 0.003122 |
| any_completion_handler.test | RUN | 0.972809 | 4.664996 | 4.994994 | 0.002312 | 0.002390 | 0.002156 |
| any_completion_handler_select.test | RUN | 0.991861 | 4.812546 | 5.443840 | 0.001965 | 0.002591 | 0.002324 |
| any_io_executor.test | RUN | 0.860381 | 5.490747 | 5.797415 | 0.002743 | 0.002810 | 0.003024 |
| any_io_executor_select.test | RUN | 0.851165 | 5.529839 | 6.098422 | 0.002624 | 0.002928 | 0.002920 |
| append.test | RUN | 0.827835 | 4.294901 | 4.482615 | 0.002138 | 0.002191 | 0.002052 |
| append_select.test | RUN | 0.840443 | 4.587646 | 4.591448 | 0.002312 | 0.002468 | 0.002336 |
| as_tuple.test | RUN | 1.046513 | 5.253799 | 6.104184 | 0.002432 | 0.002537 | 0.002141 |
| as_tuple_select.test | RUN | 1.054826 | 5.127716 | 6.017123 | 0.002310 | 0.001752 | 0.002172 |
| associated_allocator.test | LINK | 0.226909 | 0.493169 | 0.779727 | — | — | — |
| associated_allocator_select.test | LINK | 0.225599 | 0.496198 | 0.754806 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.237841 | 0.548723 | 0.820319 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.244789 | 0.528807 | 0.831273 | — | — | — |
| associated_executor.test | LINK | 0.361772 | 0.912845 | 1.281977 | — | — | — |
| associated_executor_select.test | LINK | 0.361177 | 0.894236 | 1.254033 | — | — | — |
| associated_immediate_executor.test | LINK | 0.341291 | 0.794829 | 1.129843 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.330304 | 0.817035 | 1.120878 | — | — | — |
| associator.test | LINK | 0.183679 | 0.382198 | 0.623046 | — | — | — |
| associator_select.test | LINK | 0.187187 | 0.390315 | 0.550441 | — | — | — |
| awaitable.test | LINK | 0.191368 | 0.389752 | 0.551558 | — | — | — |
| awaitable_select.test | LINK | 0.177841 | 0.398883 | 0.580820 | — | — | — |
| basic_datagram_socket.test | LINK | 0.559461 | 1.237415 | 2.357867 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.555997 | 1.283510 | 2.430000 | — | — | — |
| basic_deadline_timer.test | LINK | 0.653693 | 1.474443 | 2.731969 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.691307 | 1.544081 | 2.696588 | — | — | — |
| basic_file.test | LINK | 0.190010 | 0.416975 | 0.600099 | — | — | — |
| basic_file_select.test | LINK | 0.183381 | 0.385587 | 0.596328 | — | — | — |
| basic_random_access_file.test | LINK | 0.182641 | 0.400639 | 0.612520 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.185906 | 0.382675 | 0.604800 | — | — | — |
| basic_raw_socket.test | LINK | 0.550605 | 1.230952 | 2.387826 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.571397 | 1.275135 | 2.413182 | — | — | — |
| basic_readable_pipe.test | LINK | 0.532752 | 1.205303 | 2.012633 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.557217 | 1.283294 | 2.498930 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.549042 | 1.249200 | 2.374254 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.577638 | 1.294489 | 2.419844 | — | — | — |
| basic_signal_set.test | LINK | 0.501615 | 1.166634 | 1.750252 | — | — | — |
| basic_signal_set_select.test | LINK | 0.542452 | 1.252755 | 2.276559 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.569756 | 1.270592 | 2.306627 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.574031 | 1.270140 | 2.370722 | — | — | — |
| basic_stream_file.test | LINK | 0.189375 | 0.395908 | 0.614082 | — | — | — |
| basic_stream_file_select.test | LINK | 0.190731 | 0.411635 | 0.620485 | — | — | — |
| basic_stream_socket.test | LINK | 0.553034 | 1.279871 | 2.388472 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.564522 | 1.259804 | 2.323538 | — | — | — |
| basic_streambuf.test | LINK | 0.273076 | 0.610973 | 0.944761 | — | — | — |
| basic_streambuf_select.test | LINK | 0.294106 | 0.596076 | 0.880737 | — | — | — |
| basic_waitable_timer.test | LINK | 0.522730 | 1.169103 | 2.225573 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.534759 | 1.194172 | 2.274081 | — | — | — |
| basic_writable_pipe.test | LINK | 0.532521 | 1.190150 | 2.003383 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.551406 | 1.286757 | 2.515961 | — | — | — |
| bind_allocator.test | RUN | 0.871876 | 4.381712 | 4.874136 | 0.002626 | 0.002552 | 0.002697 |
| bind_allocator_select.test | RUN | 0.889374 | 4.468131 | 4.878898 | 0.002012 | 0.002109 | 0.001988 |
| bind_cancellation_slot.test | RUN | 0.874847 | 4.487912 | 5.073869 | 0.001638 | 0.001792 | 0.001695 |
| bind_cancellation_slot_select.test | RUN | 0.875157 | 4.397967 | 4.698197 | 0.001627 | 0.001755 | 0.001688 |
| bind_executor.test | RUN | 0.546330 | 3.059258 | 2.957044 | 0.002357 | 0.003174 | 0.002982 |
| bind_executor_select.test | RUN | 0.553709 | 3.300938 | 3.373187 | 0.002093 | 0.002994 | 0.002811 |
| bind_immediate_executor.test | RUN | 0.421190 | 2.743559 | 1.958640 | 0.001644 | 0.001505 | 0.001607 |
| bind_immediate_executor_select.test | RUN | 0.429941 | 2.582019 | 2.597728 | 0.001660 | 0.001692 | 0.001707 |
| buffer.test | RUN | 0.256933 | 1.039324 | 1.168223 | 0.001525 | 0.001628 | 0.001488 |
| buffer_select.test | RUN | 0.261050 | 1.030684 | 1.155448 | 0.001582 | 0.001439 | 0.001555 |
| buffer_registration.test | LINK | 0.210749 | 0.523237 | 0.688195 | — | — | — |
| buffer_registration_select.test | LINK | 0.206692 | 0.529214 | 0.689290 | — | — | — |
| buffered_read_stream.test | RUN | 0.938644 | 6.867813 | 7.582433 | 0.002046 | 0.002733 | 0.002772 |
| buffered_read_stream_select.test | RUN | 0.948523 | 7.284795 | 7.315070 | 0.001867 | 0.002734 | 0.002774 |
| buffered_stream.test | RUN | 1.701016 | 10.596487 | 11.785279 | 0.002632 | 0.002646 | 0.002489 |
| buffered_stream_select.test | RUN | 1.807966 | 10.622479 | 11.363842 | 0.002546 | 0.002732 | 0.002670 |
| buffered_write_stream.test | RUN | 1.632633 | 9.032016 | 9.921386 | 0.002473 | 0.002638 | 0.002826 |
| buffered_write_stream_select.test | RUN | 1.649063 | 9.248417 | 9.671616 | 0.002576 | 0.002859 | 0.002868 |
| buffers_iterator.test | RUN | 0.514238 | 0.927856 | 1.736687 | 0.001890 | 0.002096 | 0.002102 |
| buffers_iterator_select.test | RUN | 0.510159 | 0.933007 | 1.694046 | 0.002042 | 0.002041 | 0.002166 |
| cancel_after.test | RUN | 1.349761 | 7.078842 | 7.522288 | 0.004421 | 0.004700 | 0.004894 |
| cancel_after_select.test | RUN | 1.336089 | 7.107954 | 7.362767 | 0.003718 | 0.004569 | 0.004720 |
| cancel_at.test | RUN | 1.268292 | 6.016328 | 6.632886 | 0.003875 | 0.004050 | 0.004502 |
| cancel_at_select.test | RUN | 1.196443 | 5.781314 | 6.335325 | 0.003816 | 0.004119 | 0.004260 |
| cancellation_signal.test | LINK | 0.151226 | 0.310299 | 0.445438 | — | — | — |
| cancellation_signal_select.test | LINK | 0.152402 | 0.314258 | 0.462089 | — | — | — |
| cancellation_state.test | LINK | 0.209475 | 0.323602 | 0.454081 | — | — | — |
| cancellation_state_select.test | LINK | 0.240122 | 0.320503 | 0.460172 | — | — | — |
| cancellation_type.test | LINK | 0.141324 | 0.255482 | 0.355571 | — | — | — |
| cancellation_type_select.test | LINK | 0.187177 | 0.257704 | 0.581808 | — | — | — |
| co_composed.test | RUN | 0.187838 | 0.261037 | 0.607165 | 0.002010 | 0.001648 | 0.002109 |
| co_composed_select.test | RUN | 0.184049 | 0.252175 | 0.609741 | 0.002047 | 0.001580 | 0.001783 |
| co_spawn.test | LINK | 0.189837 | 0.258949 | 0.615916 | — | — | — |
| co_spawn_select.test | LINK | 0.190191 | 0.270107 | 0.605954 | — | — | — |
| completion_condition.test | LINK | 0.236055 | 0.596170 | 0.784312 | — | — | — |
| completion_condition_select.test | LINK | 0.235948 | 0.617154 | 0.815101 | — | — | — |
| compose.test | RUN | 1.070349 | 5.461153 | 6.259247 | 0.002692 | 0.002656 | 0.002929 |
| compose_select.test | RUN | 1.082041 | 5.396825 | 6.104868 | 0.002732 | 0.002659 | 0.002594 |
| composed.test | RUN | 1.028468 | 5.450544 | 5.934474 | 0.002278 | 0.002190 | 0.002261 |
| composed_select.test | RUN | 0.999360 | 5.296177 | 5.921304 | 0.002136 | 0.002316 | 0.002259 |
| config.test | RUN | 0.461580 | 3.428366 | 2.604760 | 0.002133 | 0.002286 | 0.002362 |
| config_select.test | RUN | 0.572267 | 3.765108 | 3.383590 | 0.002244 | 0.002175 | 0.002328 |
| connect.test | LINK | 1.662281 | 11.597574 | 12.655638 | — | — | — |
| connect_select.test | LINK | 1.665616 | 11.528809 | 12.855007 | — | — | — |
| connect_pipe.test | RUN | 0.925192 | 4.330910 | 4.774039 | 0.002217 | 0.002238 | 0.002238 |
| connect_pipe_select.test | RUN | 0.945475 | 4.527490 | 5.090965 | 0.002139 | 0.002130 | 0.002150 |
| consign.test | RUN | 0.800294 | 4.142789 | 4.258302 | 0.002178 | 0.002274 | 0.002381 |
| consign_select.test | RUN | 0.800160 | 4.339305 | 4.132548 | 0.002320 | 0.002394 | 0.002283 |
| coroutine.test | LINK | 0.193136 | 0.470938 | 0.655946 | — | — | — |
| coroutine_select.test | LINK | 0.202219 | 0.447592 | 0.667997 | — | — | — |
| deadline_timer.test | RUN | 1.139827 | 5.598023 | 6.195984 | 0.004005 | 0.003861 | 0.004032 |
| deadline_timer_select.test | RUN | 1.172227 | 5.483983 | 6.178046 | 0.003219 | 0.003536 | 0.003658 |
| deferred.test | RUN | 0.213943 | 0.451665 | 0.681032 | 0.002054 | 0.002281 | 0.002174 |
| deferred_select.test | RUN | 0.216915 | 0.448693 | 0.685985 | 0.001975 | 0.001960 | 0.002183 |
| detached.test | LINK | 0.225568 | 0.493451 | 0.775702 | — | — | — |
| detached_select.test | LINK | 0.225944 | 0.500269 | 0.742612 | — | — | — |
| disposition.test | RUN | 0.215141 | 1.109966 | 1.316246 | 0.001625 | 0.002168 | 0.001912 |
| disposition_select.test | RUN | 0.195875 | 1.122270 | 1.277127 | 0.001671 | 0.002304 | 0.002222 |
| error.test | RUN | 0.184114 | 1.063333 | 1.173970 | 0.001528 | 0.002186 | 0.001971 |
| error_select.test | RUN | 0.180409 | 1.049659 | 1.137098 | 0.001521 | 0.002317 | 0.002230 |
| file_base.test | LINK | 0.224378 | 0.880726 | 1.169962 | — | — | — |
| file_base_select.test | LINK | 0.233433 | 0.826591 | 0.976519 | — | — | — |
| fwd_first.test | LINK | 0.503780 | 1.303885 | 2.117009 | — | — | — |
| fwd_last.test | LINK | 0.509761 | 1.223490 | 2.141427 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.207438 | 0.497870 | 0.775652 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.195980 | 0.502582 | 0.794217 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.769651 | 4.194972 | 4.025746 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.769155 | 4.366155 | 4.064434 | — | — | — |
| generic_raw_protocol.test | LINK | 0.767324 | 4.180805 | 3.977204 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.772252 | 4.403016 | 3.969087 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.675177 | 3.543842 | 3.407654 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.681176 | 3.649156 | 3.429268 | — | — | — |
| generic_stream_protocol.test | LINK | 0.744867 | 3.772453 | 3.651043 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.749967 | 3.936591 | 3.747349 | — | — | — |
| high_resolution_timer.test | LINK | 0.335324 | 0.741662 | 1.224535 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.340183 | 0.767356 | 1.250110 | — | — | — |
| immediate.test | LINK | 0.230569 | 0.577690 | 0.732359 | — | — | — |
| immediate_select.test | LINK | 0.230226 | 0.564237 | 0.760700 | — | — | — |
| inline_executor.test | RUN | 0.288310 | 0.881933 | 1.083604 | 0.001636 | 0.001638 | 0.001562 |
| inline_executor_select.test | RUN | 0.283386 | 0.868618 | 1.135838 | 0.001564 | 0.001654 | 0.001666 |
| inline_or_executor.test | RUN | 0.430692 | 2.527520 | 2.141504 | 0.001571 | 0.001679 | 0.001579 |
| inline_or_executor_select.test | RUN | 0.451151 | 2.589062 | 2.363834 | 0.001570 | 0.001693 | 0.001664 |
| io_context.test | RUN | 0.616819 | 3.825276 | 3.587221 | 0.002619 | 0.002648 | 0.002815 |
| io_context_select.test | RUN | 0.630657 | 3.747727 | 3.582824 | 0.002634 | 0.002611 | 0.002572 |
| io_context_strand.test | RUN | 0.597427 | 3.899693 | 3.103355 | 0.002591 | 0.003243 | 0.003246 |
| io_context_strand_select.test | RUN | 0.607479 | 4.056152 | 3.580854 | 0.002513 | 0.002676 | 0.003153 |
| ip_address.test | LINK | 0.229419 | 1.226943 | 1.508105 | — | — | — |
| ip_address_select.test | LINK | 0.232207 | 1.209862 | 1.015739 | — | — | — |
| ip_address_v4.test | LINK | 0.232555 | 1.317361 | 1.024295 | — | — | — |
| ip_address_v4_select.test | LINK | 0.237858 | 1.114328 | 1.037247 | — | — | — |
| ip_address_v6.test | LINK | 0.270923 | 1.058880 | 1.252717 | — | — | — |
| ip_address_v6_select.test | LINK | 0.274933 | 1.079128 | 1.273048 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.206685 | 0.528191 | 0.826404 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.223341 | 0.530798 | 0.828879 | — | — | — |
| ip_basic_resolver.test | LINK | 0.335452 | 0.757604 | 1.259734 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.348802 | 0.788060 | 1.268586 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.115188 | 0.249230 | 0.337771 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.113982 | 0.253157 | 0.348583 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.205162 | 0.513732 | 0.806569 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.206627 | 0.513554 | 0.818949 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.198635 | 0.494870 | 0.792941 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.204142 | 0.495880 | 1.159308 | — | — | — |
| ip_host_name.test | RUN | 0.213142 | 0.656102 | 1.382761 | 0.001642 | 0.001585 | 0.002196 |
| ip_host_name_select.test | RUN | 0.211746 | 0.658274 | 1.609273 | 0.001566 | 0.001638 | 0.002102 |
| ip_icmp.test | RUN | 0.971570 | 8.049803 | 8.937867 | 0.001661 | 0.002320 | 0.002324 |
| ip_icmp_select.test | RUN | 0.962057 | 8.242717 | 8.625977 | 0.001648 | 0.002361 | 0.002276 |
| ip_multicast.test | RUN | 0.569309 | 4.708277 | 5.104645 | 0.001806 | 0.002404 | 0.002385 |
| ip_multicast_select.test | RUN | 0.571693 | 4.653204 | 5.194243 | 0.001689 | 0.002486 | 0.002299 |
| ip_resolver_query_base.test | LINK | 0.147192 | 0.429620 | 0.605342 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.137972 | 0.425011 | 0.593727 | — | — | — |
| ip_tcp.test | RUN | 1.423318 | 13.378519 | 13.230904 | 0.002381 | 0.003255 | 0.002862 |
| ip_tcp_select.test | RUN | 1.413908 | 13.894536 | 12.832752 | 0.002275 | 0.003091 | 0.002718 |
| ip_udp.test | RUN | 1.027600 | 9.560553 | 9.106399 | 0.001832 | 0.002418 | 0.002537 |
| ip_udp_select.test | RUN | 1.035974 | 9.840756 | 8.836068 | 0.001798 | 0.002464 | 0.002468 |
| ip_unicast.test | RUN | 0.549000 | 4.253243 | 4.467318 | 0.002191 | 0.001798 | 0.002422 |
| ip_unicast_select.test | RUN | 0.722278 | 4.294139 | 4.546595 | 0.002352 | 0.002411 | 0.002282 |
| ip_v6_only.test | RUN | 0.874904 | 4.493614 | 4.630318 | 0.002340 | 0.002480 | 0.002373 |
| ip_v6_only_select.test | RUN | 0.876571 | 4.550500 | 4.760718 | 0.002022 | 0.002191 | 0.002135 |
| is_read_buffered.test | RUN | 0.636932 | 1.496591 | 2.720612 | 0.001972 | 0.002107 | 0.002193 |
| is_read_buffered_select.test | RUN | 0.632414 | 1.528018 | 2.681845 | 0.002158 | 0.002046 | 0.002152 |
| is_write_buffered.test | RUN | 0.619138 | 1.423591 | 2.581341 | 0.001916 | 0.002112 | 0.002160 |
| is_write_buffered_select.test | RUN | 0.630717 | 1.495855 | 2.703259 | 0.001902 | 0.001900 | 0.002066 |
| local_basic_endpoint.test | LINK | 0.319072 | 0.823099 | 1.457917 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.321310 | 0.779853 | 1.459440 | — | — | — |
| local_connect_pair.test | LINK | 0.813629 | 4.373151 | 4.381552 | — | — | — |
| local_connect_pair_select.test | LINK | 0.802704 | 4.284586 | 4.308872 | — | — | — |
| local_datagram_protocol.test | LINK | 1.059695 | 5.588068 | 5.962361 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.092307 | 5.791068 | 5.869746 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.069271 | 5.569845 | 5.821942 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.096679 | 5.565343 | 5.935425 | — | — | — |
| local_stream_protocol.test | LINK | 1.028520 | 5.319701 | 5.557793 | — | — | — |
| local_stream_protocol_select.test | LINK | 1.025341 | 5.316765 | 5.576650 | — | — | — |
| placeholders.test | LINK | 0.212022 | 0.445362 | 0.645919 | — | — | — |
| placeholders_select.test | LINK | 0.205543 | 0.434851 | 0.670638 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.551709 | 1.160166 | 1.933711 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.561041 | 1.247140 | 2.474316 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.552111 | 1.213060 | 1.932664 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.572071 | 1.247194 | 2.454757 | — | — | — |
| posix_descriptor_base.test | LINK | 0.222183 | 0.477379 | 0.665317 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.227215 | 0.445130 | 0.622981 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.050636 | 5.242740 | 5.449754 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.073034 | 5.393300 | 5.762830 | — | — | — |
| prepend.test | RUN | 0.824183 | 4.319472 | 4.466191 | 0.002137 | 0.002172 | 0.002191 |
| prepend_select.test | RUN | 0.836927 | 4.445537 | 4.464731 | 0.001752 | 0.002253 | 0.002112 |
| random_access_file.test | LINK | 0.490774 | 1.076041 | 1.558805 | — | — | — |
| random_access_file_select.test | LINK | 0.503428 | 1.135241 | 2.076508 | — | — | — |
| read.test | RUN | 2.514435 | 26.699534 | 24.296978 | 0.002774 | 0.002817 | 0.002756 |
| read_select.test | RUN | 2.554884 | 26.646221 | 24.512129 | 0.002877 | 0.002862 | 0.003114 |
| read_at.test | RUN | 2.541134 | 38.508670 | 32.582800 | 0.003714 | 0.003478 | 0.003280 |
| read_at_select.test | RUN | 2.568001 | 38.314968 | 32.878877 | 0.003589 | 0.003418 | 0.003639 |
| read_until.test | RUN | 1.288817 | 10.206295 | 9.623602 | 0.002504 | 0.002354 | 0.002522 |
| read_until_select.test | RUN | 1.333772 | 10.374063 | 10.000015 | 0.002332 | 0.002394 | 0.002192 |
| readable_pipe.test | LINK | 0.840677 | 4.424085 | 4.296513 | — | — | — |
| readable_pipe_select.test | LINK | 0.852328 | 4.677789 | 4.734852 | — | — | — |
| recycling_allocator.test | RUN | 0.266160 | 0.669666 | 0.964666 | 0.002140 | 0.002144 | 0.002299 |
| recycling_allocator_select.test | RUN | 0.270542 | 0.684859 | 0.983401 | 0.002082 | 0.002491 | 0.002238 |
| redirect_disposition.test | LINK | 1.116243 | 6.241289 | 6.610334 | — | — | — |
| redirect_disposition_select.test | LINK | 1.107275 | 6.141714 | 6.735481 | — | — | — |
| redirect_error.test | LINK | 1.005960 | 5.096894 | 5.697117 | — | — | — |
| redirect_error_select.test | LINK | 0.994051 | 5.059241 | 5.727376 | — | — | — |
| registered_buffer.test | LINK | 0.270478 | 0.555970 | 0.839457 | — | — | — |
| registered_buffer_select.test | LINK | 0.266329 | 0.547983 | 0.856394 | — | — | — |
| signal_set.test | RUN | 0.797247 | 4.328815 | 3.990783 | 0.002110 | 0.002202 | 0.002228 |
| signal_set_select.test | RUN | 0.835079 | 4.436448 | 4.534571 | 0.002626 | 0.002434 | 0.002120 |
| signal_set_base.test | LINK | 0.230697 | 0.458836 | 0.590725 | — | — | — |
| signal_set_base_select.test | LINK | 0.220061 | 0.468301 | 0.608084 | — | — | — |
| socket_base.test | RUN | 1.008890 | 6.504593 | 6.298519 | 0.002547 | 0.002138 | 0.002342 |
| socket_base_select.test | RUN | 1.026650 | 6.285884 | 6.199314 | 0.002695 | 0.001736 | 0.002521 |
| spawn.test | RUN | 1.692606 | 10.180525 | 10.274985 | 0.002410 | 0.002586 | 0.002468 |
| spawn_select.test | RUN | 1.715099 | 10.159716 | 10.170682 | 0.002124 | 0.002720 | 0.002517 |
| static_thread_pool.test | RUN | 0.492436 | 1.054642 | 1.494670 | 0.002056 | 0.001937 | 0.002296 |
| static_thread_pool_select.test | RUN | 0.523466 | 1.130295 | 2.042520 | 0.002407 | 0.002060 | 0.002172 |
| steady_timer.test | LINK | 0.496377 | 1.184037 | 2.232552 | — | — | — |
| steady_timer_select.test | LINK | 0.545882 | 1.230324 | 2.200393 | — | — | — |
| strand.test | RUN | 1.102665 | 5.806611 | 6.499250 | 0.002878 | 0.002996 | 0.003219 |
| strand_select.test | RUN | 1.094993 | 5.791515 | 6.566411 | 0.002774 | 0.003177 | 0.003370 |
| stream_file.test | LINK | 0.525469 | 1.075473 | 1.515841 | — | — | — |
| stream_file_select.test | LINK | 0.555974 | 1.182899 | 2.072603 | — | — | — |
| streambuf.test | RUN | 0.290022 | 0.832137 | 1.114599 | 0.001666 | 0.001618 | 0.001818 |
| streambuf_select.test | RUN | 0.247786 | 0.570462 | 1.021020 | 0.001630 | 0.001598 | 0.001537 |
| system_timer.test | LINK | 0.656984 | 3.573119 | 4.078328 | — | — | — |
| system_timer_select.test | LINK | 0.678475 | 3.470350 | 3.472316 | — | — | — |
| system_context.test | LINK | 0.305719 | 0.663972 | 0.893160 | — | — | — |
| system_context_select.test | LINK | 0.317674 | 0.697946 | 1.102614 | — | — | — |
| system_executor.test | LINK | 0.394291 | 2.047319 | 1.636510 | — | — | — |
| system_executor_select.test | LINK | 0.410062 | 1.979091 | 1.876187 | — | — | — |
| this_coro.test | LINK | 0.124270 | 0.252143 | 0.344391 | — | — | — |
| this_coro_select.test | LINK | 0.120615 | 0.251150 | 0.355310 | — | — | — |
| thread_pool.test | RUN | 0.476845 | 3.709604 | 2.428918 | 0.003160 | 0.003877 | 0.004050 |
| thread_pool_select.test | RUN | 0.479210 | 3.918686 | 3.377090 | 0.003298 | 0.003676 | 0.004077 |
| time_traits.test | LINK | 0.264660 | 0.856755 | 1.308248 | — | — | — |
| time_traits_select.test | LINK | 0.278542 | 0.875379 | 1.217914 | — | — | — |
| ts_buffer.test | LINK | 0.249631 | 0.932241 | 1.252467 | — | — | — |
| ts_buffer_select.test | LINK | 0.257481 | 0.921616 | 1.300935 | — | — | — |
| ts_executor.test | LINK | 0.353719 | 1.291895 | 2.029071 | — | — | — |
| ts_executor_select.test | LINK | 0.378556 | 1.372885 | 2.511060 | — | — | — |
| ts_internet.test | LINK | 0.392727 | 1.377924 | 2.651393 | — | — | — |
| ts_internet_select.test | LINK | 0.394874 | 1.408192 | 2.660476 | — | — | — |
| ts_io_context.test | LINK | 0.307812 | 1.086482 | 1.550158 | — | — | — |
| ts_io_context_select.test | LINK | 0.327221 | 1.152753 | 2.020192 | — | — | — |
| ts_net.test | LINK | 0.450455 | 1.654885 | 3.218240 | — | — | — |
| ts_net_select.test | LINK | 0.463860 | 1.725637 | 3.230578 | — | — | — |
| ts_netfwd.test | LINK | 0.452207 | 1.641495 | 3.254844 | — | — | — |
| ts_netfwd_select.test | LINK | 0.470780 | 1.698162 | 3.270534 | — | — | — |
| ts_socket.test | LINK | 0.371991 | 1.311223 | 2.455120 | — | — | — |
| ts_socket_select.test | LINK | 0.381509 | 1.331255 | 2.539736 | — | — | — |
| ts_timer.test | LINK | 0.329810 | 1.184341 | 2.207685 | — | — | — |
| ts_timer_select.test | LINK | 0.342420 | 1.198157 | 2.158806 | — | — | — |
| use_awaitable.test | LINK | 0.135183 | 0.392716 | 0.624980 | — | — | — |
| use_awaitable_select.test | LINK | 0.185444 | 0.390478 | 0.582430 | — | — | — |
| wait_traits.test | LINK | 0.184033 | 0.401979 | 0.581884 | — | — | — |
| wait_traits_select.test | LINK | 0.182785 | 0.400833 | 0.608664 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.182458 | 0.391979 | 0.582423 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.185624 | 0.409502 | 0.577980 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.193208 | 0.399637 | 0.608208 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.190039 | 0.398108 | 0.608258 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.192527 | 0.392514 | 0.590540 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.187543 | 0.399370 | 0.579479 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.182176 | 0.407884 | 0.597946 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.180464 | 0.399269 | 0.610080 | — | — | — |
| windows_object_handle.test | LINK | 0.488062 | 1.085781 | 1.582138 | — | — | — |
| windows_object_handle_select.test | LINK | 0.522394 | 1.165329 | 2.023965 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.507419 | 1.114670 | 1.725870 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.540227 | 1.188984 | 2.199664 | — | — | — |
| windows_random_access_handle.test | LINK | 0.493903 | 1.068384 | 1.541756 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.520166 | 1.125706 | 2.072780 | — | — | — |
| windows_stream_handle.test | LINK | 0.483138 | 1.063135 | 1.525540 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.519480 | 1.155247 | 2.042377 | — | — | — |
| writable_pipe.test | LINK | 0.859276 | 4.343864 | 4.453951 | — | — | — |
| writable_pipe_select.test | LINK | 0.894562 | 4.488981 | 4.913756 | — | — | — |
| write.test | RUN | 2.512650 | 22.347402 | 23.988654 | 0.002902 | 0.003034 | 0.002968 |
| write_select.test | RUN | 2.543308 | 22.466862 | 24.641973 | 0.002900 | 0.003081 | 0.003285 |
| write_at.test | RUN | 2.619401 | 31.249898 | 30.634519 | 0.003408 | 0.003033 | 0.003326 |
| write_at_select.test | RUN | 2.629494 | 31.117836 | 31.198840 | 0.003147 | 0.003177 | 0.003286 |
| any_executor.test | RUN | 1.043068 | 10.847134 | 9.888187 | 0.002726 | 0.003166 | 0.002639 |
| blocking.test | RUN | 2.715444 | 12.831421 | 20.967496 | 0.008967 | 0.008286 | 0.009208 |
| blocking_adaptation.test | RUN | 1.365812 | 5.668099 | 9.458724 | 0.004986 | 0.004680 | 0.004744 |
| context_as.test | RUN | 0.677541 | 3.876362 | 3.101928 | 0.002709 | 0.002526 | 0.002332 |
| executor.test | RUN | 0.192474 | 0.407331 | 0.646310 | 0.002176 | 0.002194 | 0.002137 |
| inline_exception_handling.test | RUN | 2.830325 | 11.620473 | 19.464149 | 0.008329 | 0.005838 | 0.008518 |
| invocable_archetype.test | RUN | 0.205521 | 0.419828 | 0.632976 | 0.001992 | 0.002260 | 0.002231 |
| mapping.test | RUN | 2.388720 | 12.193696 | 20.687024 | 0.006112 | 0.005986 | 0.006152 |
| outstanding_work.test | RUN | 1.319484 | 5.396758 | 9.172304 | 0.004962 | 0.004866 | 0.005125 |
| prefer_only.test | RUN | 0.386204 | 2.292797 | 2.137746 | 0.002114 | 0.002071 | 0.002294 |
| relationship.test | RUN | 1.139817 | 4.995746 | 8.535138 | 0.003387 | 0.003560 | 0.003401 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.014× | 1.020×, 1.008× | 0.999× |
| clang | 0.983× | 0.984×, 0.981× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.002083s | 0.002086s | 0.002163s | byte equality observed |
| any_completion_executor_select.test | 2 | 0.002073s | 0.002088s | 0.001992s | byte equality observed |
| any_completion_handler.test | 7 | 0.001612s | 0.001636s | 0.001563s | byte equality observed |
| any_completion_handler_select.test | 9 | 0.001600s | 0.001619s | 0.001618s | byte equality observed |
| any_io_executor.test | 2 | 0.002024s | 0.002092s | 0.002037s | byte equality observed |
| any_io_executor_select.test | 3 | 0.002082s | 0.002084s | 0.002160s | byte equality observed |
| append.test | 8 | 0.001544s | 0.001543s | 0.001518s | byte equality observed |
| append_select.test | 8 | 0.001492s | 0.001502s | 0.001510s | byte equality observed |
| as_tuple.test | 7 | 0.001723s | 0.001748s | 0.001731s | byte equality observed |
| as_tuple_select.test | 7 | 0.001561s | 0.001550s | 0.001515s | byte equality observed |
| bind_allocator.test | 1 | 0.002031s | 0.002042s | 0.002014s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001551s | 0.001689s | 0.001562s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001346s | 0.001328s | 0.001304s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001263s | 0.001278s | 0.001212s | byte equality observed |
| bind_executor.test | 1 | 0.001916s | 0.002027s | 0.001828s | byte equality observed |
| bind_executor_select.test | 1 | 0.002142s | 0.002222s | 0.002100s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001330s | 0.001324s | 0.001326s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001323s | 0.001378s | 0.001282s | byte equality observed |
| buffer.test | 10 | 0.001289s | 0.001275s | 0.001241s | byte equality observed |
| buffer_select.test | 10 | 0.001267s | 0.001351s | 0.001277s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001653s | 0.001646s | 0.001604s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001638s | 0.001599s | 0.001564s | byte equality observed |
| buffered_stream.test | 10 | 0.001646s | 0.001656s | 0.001584s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001642s | 0.001705s | 0.001554s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001637s | 0.001652s | 0.001618s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001563s | 0.001717s | 0.001558s | byte equality observed |
| buffers_iterator.test | 10 | 0.001276s | 0.001211s | 0.001222s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001232s | 0.001208s | 0.001232s | byte equality observed |
| cancel_after.test | 1 | 0.003853s | 0.004282s | 0.003563s | byte equality observed |
| cancel_after_select.test | 1 | 0.003152s | 0.003461s | 0.002981s | byte equality observed |
| cancel_at.test | 1 | 0.004025s | 0.004345s | 0.003697s | byte equality observed |
| cancel_at_select.test | 1 | 0.003864s | 0.004054s | 0.003568s | byte equality observed |
| co_composed.test | 10 | 0.001330s | 0.001304s | 0.001257s | byte equality observed |
| co_composed_select.test | 10 | 0.001242s | 0.001270s | 0.001203s | byte equality observed |
| compose.test | 1 | 0.001955s | 0.002083s | 0.001897s | byte equality observed |
| compose_select.test | 1 | 0.001606s | 0.001796s | 0.001607s | byte equality observed |
| composed.test | 1 | 0.002344s | 0.002381s | 0.002209s | byte equality observed |
| composed_select.test | 1 | 0.001730s | 0.002015s | 0.001668s | byte equality observed |
| config.test | 10 | 0.001350s | 0.001362s | 0.001335s | byte equality observed |
| config_select.test | 10 | 0.001327s | 0.001327s | 0.001325s | byte equality observed |
| connect_pipe.test | 10 | 0.001366s | 0.001378s | 0.001349s | byte equality observed |
| connect_pipe_select.test | 9 | 0.001390s | 0.001342s | 0.001277s | byte equality observed |
| consign.test | 10 | 0.001375s | 0.001398s | 0.001334s | byte equality observed |
| consign_select.test | 10 | 0.001290s | 0.001308s | 0.001333s | byte equality observed |
| deadline_timer.test | 1 | 0.002634s | 0.002932s | 0.002707s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002464s | 0.002584s | 0.002431s | byte equality observed |
| deferred.test | 10 | 0.001168s | 0.001207s | 0.001160s | byte equality observed |
| deferred_select.test | 10 | 0.001135s | 0.001176s | 0.001126s | byte equality observed |
| disposition.test | 10 | 0.001225s | 0.001241s | 0.001188s | byte equality observed |
| disposition_select.test | 10 | 0.001210s | 0.001234s | 0.001190s | byte equality observed |
| error.test | 10 | 0.001163s | 0.001188s | 0.001159s | byte equality observed |
| error_select.test | 10 | 0.001162s | 0.001183s | 0.001147s | byte equality observed |
| inline_executor.test | 10 | 0.001184s | 0.001203s | 0.001158s | byte equality observed |
| inline_executor_select.test | 10 | 0.001188s | 0.001226s | 0.001160s | byte equality observed |
| inline_or_executor.test | 10 | 0.001200s | 0.001208s | 0.001141s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001198s | 0.001215s | 0.001156s | byte equality observed |
| io_context.test | 1 | 0.002234s | 0.002330s | 0.002210s | byte equality observed |
| io_context_select.test | 1 | 0.002613s | 0.002612s | 0.002492s | byte equality observed |
| io_context_strand.test | 1 | 0.002630s | 0.002706s | 0.002525s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002312s | 0.002327s | 0.002273s | byte equality observed |
| ip_host_name.test | 8 | 0.001215s | 0.001218s | 0.001182s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001148s | 0.001183s | 0.001146s | byte equality observed |
| ip_icmp.test | 10 | 0.001192s | 0.001237s | 0.001158s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001190s | 0.001223s | 0.001150s | byte equality observed |
| ip_multicast.test | 9 | 0.001277s | 0.001314s | 0.001238s | byte equality observed |
| ip_multicast_select.test | 9 | 0.001245s | 0.001276s | 0.001214s | byte equality observed |
| ip_tcp.test | 7 | 0.001767s | 0.001806s | 0.001748s | byte equality observed |
| ip_tcp_select.test | 8 | 0.001701s | 0.001743s | 0.001669s | byte equality observed |
| ip_udp.test | 10 | 0.001294s | 0.001380s | 0.001260s | byte equality observed |
| ip_udp_select.test | 9 | 0.001282s | 0.001395s | 0.001251s | byte equality observed |
| ip_unicast.test | 9 | 0.001253s | 0.001386s | 0.001209s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001237s | 0.001362s | 0.001196s | byte equality observed |
| ip_v6_only.test | 10 | 0.001245s | 0.001381s | 0.001220s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001228s | 0.001389s | 0.001206s | byte equality observed |
| is_read_buffered.test | 10 | 0.001152s | 0.001307s | 0.001142s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001206s | 0.001246s | 0.001151s | byte equality observed |
| is_write_buffered.test | 10 | 0.001247s | 0.001250s | 0.001230s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001255s | 0.001247s | 0.001243s | byte equality observed |
| prepend.test | 10 | 0.001360s | 0.001357s | 0.001318s | byte equality observed |
| prepend_select.test | 10 | 0.001293s | 0.001337s | 0.001268s | byte equality observed |
| read.test | 10 | 0.001795s | 0.001792s | 0.001669s | byte equality observed |
| read_at.test | 9 | 0.002239s | 0.002265s | 0.002150s | byte equality observed |
| read_at_select.test | 9 | 0.002238s | 0.002294s | 0.002153s | byte equality observed |
| read_select.test | 10 | 0.001786s | 0.001767s | 0.001725s | byte equality observed |
| read_until.test | 10 | 0.001506s | 0.001430s | 0.001431s | byte equality observed |
| read_until_select.test | 10 | 0.001485s | 0.001544s | 0.001430s | byte equality observed |
| recycling_allocator.test | 10 | 0.001245s | 0.001311s | 0.001259s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001253s | 0.001271s | 0.001279s | byte equality observed |
| signal_set.test | 10 | 0.001297s | 0.001282s | 0.001234s | byte equality observed |
| signal_set_select.test | 10 | 0.001285s | 0.001346s | 0.001247s | byte equality observed |
| socket_base.test | 10 | 0.001466s | 0.001413s | 0.001403s | byte equality observed |
| socket_base_select.test | 10 | 0.001362s | 0.001380s | 0.001346s | byte equality observed |
| spawn.test | 10 | 0.001533s | 0.001497s | 0.001476s | byte equality observed |
| spawn_select.test | 10 | 0.001486s | 0.001508s | 0.001469s | byte equality observed |
| static_thread_pool.test | 10 | 0.001235s | 0.001286s | 0.001260s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001192s | 0.001241s | 0.001237s | byte equality observed |
| strand.test | 1 | 0.002392s | 0.002362s | 0.002242s | byte equality observed |
| strand_select.test | 1 | 0.001995s | 0.002141s | 0.001932s | byte equality observed |
| streambuf.test | 10 | 0.001279s | 0.001273s | 0.001260s | byte equality observed |
| streambuf_select.test | 10 | 0.001316s | 0.001274s | 0.001308s | byte equality observed |
| thread_pool.test | 8 | 0.002906s | 0.002938s | 0.002792s | byte equality observed |
| thread_pool_select.test | 8 | 0.002920s | 0.002864s | 0.002818s | byte equality observed |
| write.test | 10 | 0.001858s | 0.001834s | 0.001771s | byte equality observed |
| write_at.test | 10 | 0.001998s | 0.002063s | 0.001905s | byte equality observed |
| write_at_select.test | 10 | 0.001948s | 0.002017s | 0.001924s | byte equality observed |
| write_select.test | 10 | 0.001863s | 0.001847s | 0.001734s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44000592280).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
