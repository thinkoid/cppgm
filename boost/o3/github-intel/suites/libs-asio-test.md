# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.526802 | 3.484159 | 2.989683 | 0.001959 | 0.001755 | 0.001861 |
| any_completion_executor_select.test | RUN | 0.531982 | 3.494158 | 3.095361 | 0.001730 | 0.001796 | 0.001831 |
| any_completion_handler.test | RUN | 0.596245 | 3.181568 | 2.720524 | 0.001319 | 0.001346 | 0.001668 |
| any_completion_handler_select.test | RUN | 0.599072 | 3.262585 | 2.976334 | 0.001566 | 0.001485 | 0.001501 |
| any_io_executor.test | RUN | 0.552730 | 3.709436 | 3.320399 | 0.001710 | 0.001940 | 0.001623 |
| any_io_executor_select.test | RUN | 0.563943 | 3.692643 | 3.334677 | 0.001345 | 0.002066 | 0.001543 |
| append.test | RUN | 0.511743 | 3.006840 | 2.419134 | 0.001201 | 0.001478 | 0.001492 |
| append_select.test | RUN | 0.517474 | 3.050984 | 2.472538 | 0.001245 | 0.001439 | 0.001344 |
| as_tuple.test | RUN | 0.662437 | 3.633649 | 3.477415 | 0.001350 | 0.001472 | 0.001468 |
| as_tuple_select.test | RUN | 0.677180 | 3.542772 | 3.419775 | 0.001478 | 0.001478 | 0.001614 |
| associated_allocator.test | LINK | 0.126582 | 0.293595 | 0.354250 | — | — | — |
| associated_allocator_select.test | LINK | 0.127691 | 0.281400 | 0.358913 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.145710 | 0.308668 | 0.392344 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.142401 | 0.306329 | 0.393866 | — | — | — |
| associated_executor.test | LINK | 0.209473 | 0.548761 | 0.682791 | — | — | — |
| associated_executor_select.test | LINK | 0.209323 | 0.543871 | 0.683854 | — | — | — |
| associated_immediate_executor.test | LINK | 0.187198 | 0.508591 | 0.595027 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.188149 | 0.510468 | 0.595375 | — | — | — |
| associator.test | LINK | 0.105462 | 0.240005 | 0.290407 | — | — | — |
| associator_select.test | LINK | 0.107748 | 0.237944 | 0.302458 | — | — | — |
| awaitable.test | LINK | 0.104794 | 0.241069 | 0.299062 | — | — | — |
| awaitable_select.test | LINK | 0.103431 | 0.242905 | 0.294352 | — | — | — |
| basic_datagram_socket.test | LINK | 0.322542 | 0.777561 | 1.129067 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.324961 | 0.808968 | 1.177129 | — | — | — |
| basic_deadline_timer.test | LINK | 0.382841 | 0.904922 | 1.306131 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.399794 | 0.935802 | 1.303329 | — | — | — |
| basic_file.test | LINK | 0.101197 | 0.243690 | 0.299403 | — | — | — |
| basic_file_select.test | LINK | 0.101505 | 0.239816 | 0.292516 | — | — | — |
| basic_random_access_file.test | LINK | 0.102427 | 0.240302 | 0.300458 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.105261 | 0.244116 | 0.291839 | — | — | — |
| basic_raw_socket.test | LINK | 0.310139 | 0.779555 | 1.118639 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.330380 | 0.794698 | 1.154512 | — | — | — |
| basic_readable_pipe.test | LINK | 0.318297 | 0.743155 | 0.965657 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.326995 | 0.801012 | 1.166946 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.330857 | 0.772142 | 1.132417 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.334469 | 0.788352 | 1.152639 | — | — | — |
| basic_signal_set.test | LINK | 0.305953 | 0.710539 | 0.885937 | — | — | — |
| basic_signal_set_select.test | LINK | 0.315724 | 0.771149 | 1.087725 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.330571 | 0.770658 | 1.150106 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.340320 | 0.789804 | 1.170005 | — | — | — |
| basic_stream_file.test | LINK | 0.106711 | 0.242743 | 0.291984 | — | — | — |
| basic_stream_file_select.test | LINK | 0.101202 | 0.246956 | 0.291573 | — | — | — |
| basic_stream_socket.test | LINK | 0.327394 | 0.772843 | 1.129235 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.332005 | 0.794388 | 1.149096 | — | — | — |
| basic_streambuf.test | LINK | 0.161054 | 0.353428 | 0.438029 | — | — | — |
| basic_streambuf_select.test | LINK | 0.158114 | 0.356962 | 0.439279 | — | — | — |
| basic_waitable_timer.test | LINK | 0.308037 | 0.728646 | 1.061149 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.308407 | 0.750682 | 1.069064 | — | — | — |
| basic_writable_pipe.test | LINK | 0.313697 | 0.738161 | 0.981033 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.321680 | 0.783279 | 1.190559 | — | — | — |
| bind_allocator.test | RUN | 0.549116 | 3.039906 | 2.736433 | 0.001809 | 0.002012 | 0.001858 |
| bind_allocator_select.test | RUN | 0.567011 | 3.054305 | 2.709899 | 0.001704 | 0.001279 | 0.001267 |
| bind_cancellation_slot.test | RUN | 0.562045 | 3.081295 | 2.715620 | 0.001017 | 0.001089 | 0.001053 |
| bind_cancellation_slot_select.test | RUN | 0.568984 | 3.015972 | 2.657950 | 0.000970 | 0.001086 | 0.001033 |
| bind_executor.test | RUN | 0.382070 | 2.100353 | 1.730014 | 0.001656 | 0.001757 | 0.001647 |
| bind_executor_select.test | RUN | 0.394467 | 2.112289 | 1.694227 | 0.001478 | 0.001697 | 0.001522 |
| bind_immediate_executor.test | RUN | 0.285356 | 1.712262 | 1.073866 | 0.000960 | 0.000958 | 0.000955 |
| bind_immediate_executor_select.test | RUN | 0.295332 | 1.688200 | 1.194257 | 0.000970 | 0.001024 | 0.001017 |
| buffer.test | RUN | 0.175271 | 0.703014 | 0.634860 | 0.000993 | 0.000967 | 0.000955 |
| buffer_select.test | RUN | 0.173595 | 0.710784 | 0.635123 | 0.001032 | 0.000933 | 0.000915 |
| buffer_registration.test | LINK | 0.133708 | 0.347561 | 0.373047 | — | — | — |
| buffer_registration_select.test | LINK | 0.132086 | 0.350184 | 0.372003 | — | — | — |
| buffered_read_stream.test | RUN | 0.663293 | 4.634256 | 3.859595 | 0.001384 | 0.001810 | 0.001671 |
| buffered_read_stream_select.test | RUN | 0.671820 | 4.762773 | 3.821782 | 0.001260 | 0.001764 | 0.001844 |
| buffered_stream.test | RUN | 0.924010 | 7.451280 | 6.649413 | 0.001763 | 0.001758 | 0.001574 |
| buffered_stream_select.test | RUN | 0.983132 | 7.417196 | 6.463458 | 0.001811 | 0.001642 | 0.001823 |
| buffered_write_stream.test | RUN | 1.098911 | 6.411309 | 5.754131 | 0.001758 | 0.001887 | 0.001569 |
| buffered_write_stream_select.test | RUN | 1.100846 | 6.520154 | 5.547015 | 0.001535 | 0.001789 | 0.001789 |
| buffers_iterator.test | RUN | 0.316883 | 0.562698 | 0.891796 | 0.001199 | 0.001302 | 0.001439 |
| buffers_iterator_select.test | RUN | 0.317818 | 0.556750 | 0.892489 | 0.001187 | 0.001363 | 0.001269 |
| cancel_after.test | RUN | 0.921997 | 4.936570 | 4.137150 | 0.003435 | 0.003682 | 0.003017 |
| cancel_after_select.test | RUN | 0.917682 | 4.983458 | 4.117275 | 0.003633 | 0.003773 | 0.003690 |
| cancel_at.test | RUN | 0.811506 | 4.457268 | 4.066363 | 0.003109 | 0.002926 | 0.003323 |
| cancel_at_select.test | RUN | 0.826647 | 4.394360 | 4.025431 | 0.003132 | 0.003086 | 0.003070 |
| cancellation_signal.test | LINK | 0.092565 | 0.200870 | 0.236861 | — | — | — |
| cancellation_signal_select.test | LINK | 0.092194 | 0.203014 | 0.233584 | — | — | — |
| cancellation_state.test | LINK | 0.092651 | 0.203609 | 0.349880 | — | — | — |
| cancellation_state_select.test | LINK | 0.132843 | 0.202742 | 0.345575 | — | — | — |
| cancellation_type.test | LINK | 0.103772 | 0.161085 | 0.295609 | — | — | — |
| cancellation_type_select.test | LINK | 0.101982 | 0.160062 | 0.295740 | — | — | — |
| co_composed.test | RUN | 0.104593 | 0.158712 | 0.297323 | 0.001111 | 0.000980 | 0.001306 |
| co_composed_select.test | RUN | 0.102568 | 0.206507 | 0.295081 | 0.001265 | 0.001215 | 0.001257 |
| co_spawn.test | LINK | 0.101208 | 0.168298 | 0.297003 | — | — | — |
| co_spawn_select.test | LINK | 0.105576 | 0.234472 | 0.293685 | — | — | — |
| completion_condition.test | LINK | 0.140881 | 0.372670 | 0.392080 | — | — | — |
| completion_condition_select.test | LINK | 0.133464 | 0.367657 | 0.387276 | — | — | — |
| compose.test | RUN | 0.685649 | 3.851463 | 3.368673 | 0.001775 | 0.001860 | 0.001439 |
| compose_select.test | RUN | 0.690527 | 3.773068 | 3.346937 | 0.001520 | 0.002000 | 0.001777 |
| composed.test | RUN | 0.686786 | 3.725628 | 3.232787 | 0.001360 | 0.001673 | 0.001626 |
| composed_select.test | RUN | 0.644528 | 3.718487 | 3.218133 | 0.001362 | 0.001725 | 0.001487 |
| config.test | RUN | 0.345421 | 2.391332 | 1.407724 | 0.001288 | 0.001290 | 0.001272 |
| config_select.test | RUN | 0.357977 | 2.493052 | 1.598213 | 0.001283 | 0.001620 | 0.001503 |
| connect.test | LINK | 1.107647 | 8.058130 | 7.138543 | — | — | — |
| connect_select.test | LINK | 1.115861 | 8.149301 | 7.124777 | — | — | — |
| connect_pipe.test | RUN | 0.577791 | 3.061831 | 2.616163 | 0.001387 | 0.001648 | 0.001438 |
| connect_pipe_select.test | RUN | 0.597851 | 3.186067 | 2.817834 | 0.001361 | 0.001797 | 0.001379 |
| consign.test | RUN | 0.519233 | 2.986531 | 2.419561 | 0.001506 | 0.001365 | 0.001512 |
| consign_select.test | RUN | 0.521834 | 3.048095 | 2.421884 | 0.001369 | 0.001385 | 0.001288 |
| coroutine.test | LINK | 0.108943 | 0.288791 | 0.338671 | — | — | — |
| coroutine_select.test | LINK | 0.110705 | 0.283792 | 0.336944 | — | — | — |
| deadline_timer.test | RUN | 0.761312 | 3.948816 | 3.482161 | 0.002721 | 0.003301 | 0.003267 |
| deadline_timer_select.test | RUN | 0.750147 | 3.871652 | 3.536158 | 0.002540 | 0.002800 | 0.002842 |
| deferred.test | RUN | 0.114099 | 0.266105 | 0.326166 | 0.001154 | 0.001422 | 0.001222 |
| deferred_select.test | RUN | 0.116695 | 0.263770 | 0.319544 | 0.001214 | 0.001384 | 0.001276 |
| detached.test | LINK | 0.129554 | 0.291129 | 0.362715 | — | — | — |
| detached_select.test | LINK | 0.133568 | 0.293185 | 0.359712 | — | — | — |
| disposition.test | RUN | 0.124887 | 0.711256 | 0.676855 | 0.000955 | 0.001338 | 0.001443 |
| disposition_select.test | RUN | 0.125575 | 0.705865 | 0.676497 | 0.000981 | 0.001508 | 0.001464 |
| error.test | RUN | 0.115265 | 0.672815 | 0.634286 | 0.000971 | 0.001378 | 0.001481 |
| error_select.test | RUN | 0.115494 | 0.680789 | 0.599464 | 0.000950 | 0.001326 | 0.001372 |
| file_base.test | LINK | 0.142618 | 0.555526 | 0.668218 | — | — | — |
| file_base_select.test | LINK | 0.141722 | 0.560516 | 0.614028 | — | — | — |
| fwd_first.test | LINK | 0.325720 | 0.966311 | 1.217577 | — | — | — |
| fwd_last.test | LINK | 0.327270 | 0.854494 | 1.182211 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.121869 | 0.322024 | 0.425897 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.121653 | 0.320825 | 0.421407 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.558644 | 3.022151 | 2.533904 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.552576 | 3.152884 | 2.467438 | — | — | — |
| generic_raw_protocol.test | LINK | 0.552223 | 3.032190 | 2.526796 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.548015 | 3.144093 | 2.456252 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.478850 | 2.555740 | 2.161013 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.478540 | 2.605934 | 2.108244 | — | — | — |
| generic_stream_protocol.test | LINK | 0.511107 | 2.749179 | 2.278548 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.511674 | 2.847168 | 2.306102 | — | — | — |
| high_resolution_timer.test | LINK | 0.206452 | 0.476153 | 0.658999 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.211584 | 0.492943 | 0.680384 | — | — | — |
| immediate.test | LINK | 0.141275 | 0.372982 | 0.407565 | — | — | — |
| immediate_select.test | LINK | 0.141328 | 0.371133 | 0.409112 | — | — | — |
| inline_executor.test | RUN | 0.175176 | 0.576510 | 0.618973 | 0.000942 | 0.001055 | 0.000978 |
| inline_executor_select.test | RUN | 0.175538 | 0.587067 | 0.622454 | 0.000911 | 0.001000 | 0.001001 |
| inline_or_executor.test | RUN | 0.297921 | 1.770402 | 1.233101 | 0.000959 | 0.001013 | 0.000989 |
| inline_or_executor_select.test | RUN | 0.304548 | 1.824042 | 1.350478 | 0.000917 | 0.001027 | 0.001022 |
| io_context.test | RUN | 0.440177 | 2.710456 | 2.149835 | 0.001867 | 0.002262 | 0.002168 |
| io_context_select.test | RUN | 0.448383 | 2.686864 | 2.173497 | 0.001574 | 0.001932 | 0.001897 |
| io_context_strand.test | RUN | 0.415747 | 2.363781 | 1.896510 | 0.001803 | 0.001803 | 0.001976 |
| io_context_strand_select.test | RUN | 0.424289 | 2.314131 | 1.878543 | 0.001500 | 0.001808 | 0.001807 |
| ip_address.test | LINK | 0.146685 | 0.532871 | 0.524884 | — | — | — |
| ip_address_select.test | LINK | 0.147987 | 0.520448 | 0.525200 | — | — | — |
| ip_address_v4.test | LINK | 0.150851 | 0.554125 | 0.606042 | — | — | — |
| ip_address_v4_select.test | LINK | 0.149794 | 0.554407 | 0.733055 | — | — | — |
| ip_address_v6.test | LINK | 0.172840 | 0.728420 | 1.125814 | — | — | — |
| ip_address_v6_select.test | LINK | 0.173086 | 0.734333 | 1.130064 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.127749 | 0.342656 | 0.719216 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.127945 | 0.347144 | 0.716826 | — | — | — |
| ip_basic_resolver.test | LINK | 0.207142 | 0.506861 | 1.080450 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.219182 | 0.517582 | 1.117040 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.070706 | 0.244262 | 0.303360 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.070448 | 0.239466 | 0.304581 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.126753 | 0.393324 | 0.708649 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.126755 | 0.496848 | 0.713365 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.121614 | 0.488199 | 0.675425 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.121821 | 0.485412 | 0.672368 | — | — | — |
| ip_host_name.test | RUN | 0.131859 | 0.665030 | 0.757753 | 0.000866 | 0.001313 | 0.001187 |
| ip_host_name_select.test | RUN | 0.129894 | 0.661716 | 0.763468 | 0.000925 | 0.001452 | 0.001204 |
| ip_icmp.test | RUN | 0.694655 | 6.476534 | 5.181970 | 0.000978 | 0.001344 | 0.001408 |
| ip_icmp_select.test | RUN | 0.697492 | 6.613411 | 5.080021 | 0.000932 | 0.001419 | 0.001404 |
| ip_multicast.test | RUN | 0.381030 | 3.212743 | 2.831066 | 0.001037 | 0.001619 | 0.001461 |
| ip_multicast_select.test | RUN | 0.390498 | 3.131536 | 2.848553 | 0.001041 | 0.001564 | 0.001592 |
| ip_resolver_query_base.test | LINK | 0.081511 | 0.267117 | 0.317566 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.083568 | 0.265089 | 0.314967 | — | — | — |
| ip_tcp.test | RUN | 1.036120 | 9.615887 | 7.985445 | 0.001361 | 0.001861 | 0.001830 |
| ip_tcp_select.test | RUN | 1.046071 | 9.957458 | 7.801010 | 0.001256 | 0.001940 | 0.001399 |
| ip_udp.test | RUN | 0.741570 | 6.786482 | 5.484416 | 0.001122 | 0.001581 | 0.001610 |
| ip_udp_select.test | RUN | 0.743879 | 7.007878 | 5.358622 | 0.001096 | 0.001884 | 0.001412 |
| ip_unicast.test | RUN | 0.355552 | 2.906331 | 2.501291 | 0.001141 | 0.001485 | 0.001358 |
| ip_unicast_select.test | RUN | 0.365612 | 2.908254 | 2.456306 | 0.001121 | 0.001335 | 0.001420 |
| ip_v6_only.test | RUN | 0.391769 | 2.986772 | 2.515803 | 0.001018 | 0.001430 | 0.001348 |
| ip_v6_only_select.test | RUN | 0.393579 | 3.108478 | 2.494415 | 0.001077 | 0.001295 | 0.001389 |
| is_read_buffered.test | RUN | 0.248901 | 0.885157 | 1.311388 | 0.000943 | 0.001384 | 0.001452 |
| is_read_buffered_select.test | RUN | 0.251370 | 0.900356 | 1.341006 | 0.000906 | 0.001534 | 0.001146 |
| is_write_buffered.test | RUN | 0.246072 | 0.884913 | 1.290952 | 0.000923 | 0.001485 | 0.001323 |
| is_write_buffered_select.test | RUN | 0.251357 | 0.899130 | 1.315951 | 0.000887 | 0.001411 | 0.001193 |
| local_basic_endpoint.test | LINK | 0.123740 | 0.495587 | 0.679927 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.124196 | 0.498642 | 0.680953 | — | — | — |
| local_connect_pair.test | LINK | 0.340402 | 2.961033 | 2.383914 | — | — | — |
| local_connect_pair_select.test | LINK | 0.345264 | 2.944889 | 2.353935 | — | — | — |
| local_datagram_protocol.test | LINK | 0.473710 | 3.885332 | 3.377433 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.480893 | 3.935523 | 3.289874 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.480136 | 3.840331 | 3.340644 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.484763 | 3.899808 | 3.314777 | — | — | — |
| local_stream_protocol.test | LINK | 0.443928 | 3.641152 | 3.155684 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.453639 | 3.712221 | 3.106670 | — | — | — |
| placeholders.test | LINK | 0.077431 | 0.265070 | 0.323622 | — | — | — |
| placeholders_select.test | LINK | 0.077039 | 0.267486 | 0.322409 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.213039 | 0.766322 | 0.996796 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.220994 | 0.789748 | 1.203847 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.214580 | 0.762663 | 0.986721 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.222814 | 0.803380 | 1.174595 | — | — | — |
| posix_descriptor_base.test | LINK | 0.083584 | 0.279534 | 0.321141 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.084114 | 0.275544 | 0.318726 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.466882 | 3.723255 | 3.149962 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.481359 | 3.752088 | 3.168234 | — | — | — |
| prepend.test | RUN | 0.445136 | 3.016330 | 2.465110 | 0.001276 | 0.001762 | 0.001195 |
| prepend_select.test | RUN | 0.473493 | 3.061879 | 2.427809 | 0.001344 | 0.001490 | 0.001350 |
| random_access_file.test | LINK | 0.288028 | 0.690065 | 0.801102 | — | — | — |
| random_access_file_select.test | LINK | 0.304220 | 0.717425 | 0.999854 | — | — | — |
| read.test | RUN | 1.682264 | 19.125439 | 14.715502 | 0.001722 | 0.002032 | 0.001969 |
| read_select.test | RUN | 1.683459 | 18.809432 | 14.605566 | 0.001884 | 0.002054 | 0.001964 |
| read_at.test | RUN | 1.667769 | 25.303938 | 19.501113 | 0.002082 | 0.002559 | 0.002120 |
| read_at_select.test | RUN | 1.691307 | 24.799664 | 19.868256 | 0.001908 | 0.002499 | 0.002382 |
| read_until.test | RUN | 0.878486 | 7.272267 | 5.307847 | 0.001489 | 0.001560 | 0.001586 |
| read_until_select.test | RUN | 0.883223 | 7.349195 | 5.524871 | 0.001381 | 0.001680 | 0.001461 |
| readable_pipe.test | LINK | 0.535502 | 3.038017 | 2.441103 | — | — | — |
| readable_pipe_select.test | LINK | 0.561353 | 3.215815 | 2.597043 | — | — | — |
| recycling_allocator.test | RUN | 0.152791 | 0.420562 | 0.487227 | 0.001251 | 0.001426 | 0.001402 |
| recycling_allocator_select.test | RUN | 0.159675 | 0.422552 | 0.486144 | 0.001095 | 0.001348 | 0.001542 |
| redirect_disposition.test | LINK | 0.700723 | 4.283369 | 3.743647 | — | — | — |
| redirect_disposition_select.test | LINK | 0.714172 | 4.212554 | 3.746048 | — | — | — |
| redirect_error.test | LINK | 0.630461 | 3.545269 | 3.211324 | — | — | — |
| redirect_error_select.test | LINK | 0.636094 | 3.550287 | 3.185875 | — | — | — |
| registered_buffer.test | LINK | 0.152437 | 0.345023 | 0.429933 | — | — | — |
| registered_buffer_select.test | LINK | 0.149028 | 0.342418 | 0.429953 | — | — | — |
| signal_set.test | RUN | 0.519596 | 2.973574 | 2.316920 | 0.001305 | 0.001612 | 0.001455 |
| signal_set_select.test | RUN | 0.538880 | 3.048597 | 2.548965 | 0.001220 | 0.001457 | 0.001446 |
| signal_set_base.test | LINK | 0.120374 | 0.270200 | 0.301984 | — | — | — |
| signal_set_base_select.test | LINK | 0.118419 | 0.269871 | 0.304481 | — | — | — |
| socket_base.test | RUN | 0.630359 | 4.375887 | 3.425148 | 0.001434 | 0.001406 | 0.001468 |
| socket_base_select.test | RUN | 0.641862 | 4.220586 | 3.399219 | 0.001340 | 0.001476 | 0.001591 |
| spawn.test | RUN | 1.109029 | 7.207903 | 5.946969 | 0.001443 | 0.001528 | 0.001582 |
| spawn_select.test | RUN | 1.118767 | 7.129915 | 5.968928 | 0.001494 | 0.001484 | 0.001581 |
| static_thread_pool.test | RUN | 0.274633 | 0.650574 | 0.762828 | 0.001160 | 0.001276 | 0.001187 |
| static_thread_pool_select.test | RUN | 0.284860 | 0.690073 | 0.974465 | 0.001213 | 0.001374 | 0.001362 |
| steady_timer.test | LINK | 0.309401 | 0.717947 | 1.053687 | — | — | — |
| steady_timer_select.test | LINK | 0.317535 | 0.742516 | 1.078093 | — | — | — |
| strand.test | RUN | 0.685119 | 4.025170 | 3.564277 | 0.001992 | 0.001773 | 0.001985 |
| strand_select.test | RUN | 0.698603 | 3.961577 | 3.459687 | 0.001538 | 0.001916 | 0.001649 |
| stream_file.test | LINK | 0.288475 | 0.681999 | 0.798473 | — | — | — |
| stream_file_select.test | LINK | 0.300734 | 0.714591 | 1.010917 | — | — | — |
| streambuf.test | RUN | 0.180187 | 0.405140 | 0.564857 | 0.000898 | 0.001039 | 0.001334 |
| streambuf_select.test | RUN | 0.163936 | 0.376057 | 0.507060 | 0.000835 | 0.000975 | 0.000927 |
| system_timer.test | LINK | 0.446368 | 2.551243 | 2.192954 | — | — | — |
| system_timer_select.test | LINK | 0.446688 | 2.533634 | 2.020766 | — | — | — |
| system_context.test | LINK | 0.185796 | 0.429050 | 0.474648 | — | — | — |
| system_context_select.test | LINK | 0.191863 | 0.461917 | 0.591607 | — | — | — |
| system_executor.test | LINK | 0.260624 | 1.441412 | 0.974528 | — | — | — |
| system_executor_select.test | LINK | 0.267315 | 1.420000 | 1.074362 | — | — | — |
| this_coro.test | LINK | 0.072589 | 0.160989 | 0.188913 | — | — | — |
| this_coro_select.test | LINK | 0.071769 | 0.163031 | 0.188521 | — | — | — |
| thread_pool.test | RUN | 0.312149 | 1.858568 | 1.270222 | 0.001696 | 0.001695 | 0.001635 |
| thread_pool_select.test | RUN | 0.316110 | 1.893571 | 1.388836 | 0.001572 | 0.001750 | 0.002262 |
| time_traits.test | LINK | 0.159369 | 0.333556 | 0.390374 | — | — | — |
| time_traits_select.test | LINK | 0.160476 | 0.359331 | 0.388533 | — | — | — |
| ts_buffer.test | LINK | 0.152258 | 0.548592 | 0.414221 | — | — | — |
| ts_buffer_select.test | LINK | 0.152481 | 0.563668 | 0.414422 | — | — | — |
| ts_executor.test | LINK | 0.220051 | 0.790834 | 0.649209 | — | — | — |
| ts_executor_select.test | LINK | 0.228163 | 0.849981 | 0.806521 | — | — | — |
| ts_internet.test | LINK | 0.242740 | 0.864814 | 1.090312 | — | — | — |
| ts_internet_select.test | LINK | 0.248704 | 0.894912 | 1.254843 | — | — | — |
| ts_io_context.test | LINK | 0.194061 | 0.662135 | 0.792232 | — | — | — |
| ts_io_context_select.test | LINK | 0.204402 | 0.715656 | 0.984924 | — | — | — |
| ts_net.test | LINK | 0.285782 | 1.035926 | 1.574775 | — | — | — |
| ts_net_select.test | LINK | 0.292582 | 1.057501 | 1.615794 | — | — | — |
| ts_netfwd.test | LINK | 0.285820 | 1.039982 | 1.582250 | — | — | — |
| ts_netfwd_select.test | LINK | 0.292573 | 1.073801 | 1.612409 | — | — | — |
| ts_socket.test | LINK | 0.237140 | 0.814159 | 1.196406 | — | — | — |
| ts_socket_select.test | LINK | 0.240915 | 0.830229 | 1.231687 | — | — | — |
| ts_timer.test | LINK | 0.213104 | 0.727282 | 1.050913 | — | — | — |
| ts_timer_select.test | LINK | 0.214836 | 0.758806 | 1.067810 | — | — | — |
| use_awaitable.test | LINK | 0.071752 | 0.242110 | 0.301501 | — | — | — |
| use_awaitable_select.test | LINK | 0.072442 | 0.246042 | 0.285254 | — | — | — |
| wait_traits.test | LINK | 0.072252 | 0.241333 | 0.296757 | — | — | — |
| wait_traits_select.test | LINK | 0.071514 | 0.248056 | 0.299421 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.071532 | 0.245209 | 0.294614 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.070637 | 0.246370 | 0.299718 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.070929 | 0.247645 | 0.289188 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.070091 | 0.241397 | 0.297577 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.071903 | 0.242741 | 0.295682 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.071313 | 0.246961 | 0.297068 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.071444 | 0.243049 | 0.289225 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.069258 | 0.242974 | 0.294814 | — | — | — |
| windows_object_handle.test | LINK | 0.198593 | 0.668493 | 0.785872 | — | — | — |
| windows_object_handle_select.test | LINK | 0.205970 | 0.711668 | 0.990069 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.211520 | 0.715823 | 0.866656 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.214867 | 0.754137 | 1.079499 | — | — | — |
| windows_random_access_handle.test | LINK | 0.200187 | 0.663482 | 0.783740 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.207275 | 0.710240 | 0.997062 | — | — | — |
| windows_stream_handle.test | LINK | 0.199130 | 0.677808 | 0.790696 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.206239 | 0.714696 | 1.009824 | — | — | — |
| writable_pipe.test | LINK | 0.374818 | 2.986511 | 2.537171 | — | — | — |
| writable_pipe_select.test | LINK | 0.389368 | 3.127847 | 2.693379 | — | — | — |
| write.test | RUN | 1.660174 | 15.789077 | 14.086815 | 0.001555 | 0.002030 | 0.001940 |
| write_select.test | RUN | 1.691540 | 15.604381 | 14.378919 | 0.001734 | 0.001836 | 0.001801 |
| write_at.test | RUN | 1.727706 | 20.624486 | 17.972864 | 0.002040 | 0.002076 | 0.002328 |
| write_at_select.test | RUN | 1.743390 | 20.940616 | 18.488022 | 0.001971 | 0.002268 | 0.002160 |
| any_executor.test | RUN | 0.679437 | 6.901786 | 5.848644 | 0.001850 | 0.002168 | 0.001758 |
| blocking.test | RUN | 1.466160 | 9.055592 | 11.727111 | 0.003412 | 0.003214 | 0.003374 |
| blocking_adaptation.test | RUN | 0.742397 | 3.949318 | 5.192555 | 0.002002 | 0.002184 | 0.002299 |
| context_as.test | RUN | 0.433862 | 2.638208 | 1.818294 | 0.001465 | 0.001548 | 0.001544 |
| executor.test | RUN | 0.109001 | 0.252027 | 0.312401 | 0.001112 | 0.001257 | 0.001477 |
| inline_exception_handling.test | RUN | 1.423381 | 8.166514 | 11.762301 | 0.002383 | 0.002332 | 0.002487 |
| invocable_archetype.test | RUN | 0.106573 | 0.242425 | 0.299711 | 0.001352 | 0.001427 | 0.001226 |
| mapping.test | RUN | 1.459195 | 8.557236 | 11.195743 | 0.002515 | 0.002380 | 0.002540 |
| outstanding_work.test | RUN | 0.670225 | 3.583247 | 4.952771 | 0.002170 | 0.002176 | 0.002286 |
| prefer_only.test | RUN | 0.216203 | 1.448549 | 1.141772 | 0.001373 | 0.001327 | 0.001396 |
| relationship.test | RUN | 0.522963 | 3.544909 | 5.139091 | 0.001542 | 0.002106 | 0.002264 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.010× | 1.015×, 1.005× | 1.007× |
| clang | 0.978× | 0.983×, 0.973× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001245s | 0.001278s | 0.001222s | byte equality observed |
| any_completion_executor_select.test | 2 | 0.001220s | 0.001258s | 0.001206s | byte equality observed |
| any_completion_handler.test | 10 | 0.001040s | 0.001043s | 0.000993s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001047s | 0.001032s | 0.000959s | byte equality observed |
| any_io_executor.test | 7 | 0.001208s | 0.001242s | 0.001135s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001263s | 0.001287s | 0.001171s | byte equality observed |
| append.test | 9 | 0.001007s | 0.000978s | 0.000948s | byte equality observed |
| append_select.test | 9 | 0.000970s | 0.000973s | 0.000966s | byte equality observed |
| as_tuple.test | 10 | 0.001043s | 0.001044s | 0.001001s | byte equality observed |
| as_tuple_select.test | 9 | 0.000993s | 0.000989s | 0.000948s | byte equality observed |
| bind_allocator.test | 1 | 0.001521s | 0.001453s | 0.001434s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001197s | 0.001182s | 0.001118s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000922s | 0.000916s | 0.000911s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000819s | 0.000814s | 0.000808s | byte equality observed |
| bind_executor.test | 1 | 0.001543s | 0.001476s | 0.001501s | byte equality observed |
| bind_executor_select.test | 1 | 0.001685s | 0.001711s | 0.001677s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000923s | 0.000936s | 0.000917s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000895s | 0.000893s | 0.000855s | byte equality observed |
| buffer.test | 10 | 0.000853s | 0.000859s | 0.000826s | byte equality observed |
| buffer_select.test | 10 | 0.000830s | 0.000844s | 0.000831s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001050s | 0.001033s | 0.001043s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001030s | 0.001004s | 0.001028s | byte equality observed |
| buffered_stream.test | 10 | 0.001035s | 0.001005s | 0.001000s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001019s | 0.000999s | 0.000980s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001032s | 0.000993s | 0.000979s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001019s | 0.000974s | 0.000992s | byte equality observed |
| buffers_iterator.test | 10 | 0.000817s | 0.000834s | 0.000850s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000811s | 0.000794s | 0.000793s | byte equality observed |
| cancel_after.test | 1 | 0.003270s | 0.003218s | 0.003246s | byte equality observed |
| cancel_after_select.test | 1 | 0.002686s | 0.002639s | 0.002816s | byte equality observed |
| cancel_at.test | 1 | 0.003363s | 0.003332s | 0.003358s | byte equality observed |
| cancel_at_select.test | 1 | 0.003194s | 0.003234s | 0.003228s | byte equality observed |
| co_composed.test | 10 | 0.000866s | 0.000871s | 0.000855s | byte equality observed |
| co_composed_select.test | 10 | 0.000804s | 0.000796s | 0.000835s | byte equality observed |
| compose.test | 1 | 0.001511s | 0.001504s | 0.001515s | byte equality observed |
| compose_select.test | 1 | 0.001244s | 0.001185s | 0.001271s | byte equality observed |
| composed.test | 1 | 0.001835s | 0.001727s | 0.001822s | byte equality observed |
| composed_select.test | 1 | 0.001292s | 0.001324s | 0.001368s | byte equality observed |
| config.test | 10 | 0.000911s | 0.000938s | 0.000923s | byte equality observed |
| config_select.test | 10 | 0.000906s | 0.000892s | 0.000903s | byte equality observed |
| connect_pipe.test | 10 | 0.000903s | 0.000918s | 0.000872s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000907s | 0.000891s | 0.000875s | byte equality observed |
| consign.test | 10 | 0.000912s | 0.000888s | 0.000881s | byte equality observed |
| consign_select.test | 10 | 0.000877s | 0.000847s | 0.000852s | byte equality observed |
| deadline_timer.test | 1 | 0.002227s | 0.002241s | 0.002215s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001926s | 0.002027s | 0.001997s | byte equality observed |
| deferred.test | 10 | 0.000826s | 0.000834s | 0.000852s | byte equality observed |
| deferred_select.test | 10 | 0.000741s | 0.000753s | 0.000756s | byte equality observed |
| disposition.test | 10 | 0.000792s | 0.000792s | 0.000793s | byte equality observed |
| disposition_select.test | 10 | 0.000783s | 0.000786s | 0.000789s | byte equality observed |
| error.test | 10 | 0.000761s | 0.000775s | 0.000775s | byte equality observed |
| error_select.test | 10 | 0.000761s | 0.000768s | 0.000759s | byte equality observed |
| inline_executor.test | 10 | 0.000767s | 0.000771s | 0.000778s | byte equality observed |
| inline_executor_select.test | 10 | 0.000770s | 0.000770s | 0.000774s | byte equality observed |
| inline_or_executor.test | 10 | 0.000778s | 0.000778s | 0.000785s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000783s | 0.000775s | 0.000778s | byte equality observed |
| io_context.test | 1 | 0.001788s | 0.001773s | 0.001798s | byte equality observed |
| io_context_select.test | 1 | 0.002116s | 0.002032s | 0.002112s | byte equality observed |
| io_context_strand.test | 1 | 0.002057s | 0.002044s | 0.002004s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001808s | 0.001809s | 0.001783s | byte equality observed |
| ip_host_name.test | 10 | 0.000858s | 0.000851s | 0.000836s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000764s | 0.000759s | 0.000764s | byte equality observed |
| ip_icmp.test | 10 | 0.000803s | 0.000782s | 0.000769s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000780s | 0.000773s | 0.000753s | byte equality observed |
| ip_multicast.test | 10 | 0.000856s | 0.000843s | 0.000842s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000834s | 0.000830s | 0.000823s | byte equality observed |
| ip_tcp.test | 10 | 0.001055s | 0.001043s | 0.001034s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001019s | 0.001005s | 0.001000s | byte equality observed |
| ip_udp.test | 10 | 0.000868s | 0.000851s | 0.000847s | byte equality observed |
| ip_udp_select.test | 10 | 0.000865s | 0.000841s | 0.000838s | byte equality observed |
| ip_unicast.test | 10 | 0.000825s | 0.000815s | 0.000806s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000813s | 0.000801s | 0.000795s | byte equality observed |
| ip_v6_only.test | 10 | 0.000823s | 0.000812s | 0.000811s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000812s | 0.000797s | 0.000797s | byte equality observed |
| is_read_buffered.test | 10 | 0.000765s | 0.000744s | 0.000746s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000764s | 0.000742s | 0.000754s | byte equality observed |
| is_write_buffered.test | 10 | 0.000761s | 0.000727s | 0.000732s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000753s | 0.000723s | 0.000743s | byte equality observed |
| prepend.test | 10 | 0.000817s | 0.000810s | 0.000801s | byte equality observed |
| prepend_select.test | 10 | 0.000804s | 0.000799s | 0.000775s | byte equality observed |
| read.test | 10 | 0.001114s | 0.001092s | 0.001072s | byte equality observed |
| read_at.test | 10 | 0.001323s | 0.001435s | 0.001309s | byte equality observed |
| read_at_select.test | 10 | 0.001325s | 0.001457s | 0.001312s | byte equality observed |
| read_select.test | 10 | 0.001106s | 0.001181s | 0.001059s | byte equality observed |
| read_until.test | 10 | 0.000922s | 0.000952s | 0.000880s | byte equality observed |
| read_until_select.test | 10 | 0.000957s | 0.000941s | 0.000884s | byte equality observed |
| recycling_allocator.test | 10 | 0.000827s | 0.000841s | 0.000820s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000856s | 0.000819s | 0.000827s | byte equality observed |
| signal_set.test | 10 | 0.000851s | 0.000865s | 0.000819s | byte equality observed |
| signal_set_select.test | 10 | 0.000849s | 0.000826s | 0.000810s | byte equality observed |
| socket_base.test | 10 | 0.000913s | 0.000895s | 0.000881s | byte equality observed |
| socket_base_select.test | 10 | 0.000908s | 0.000867s | 0.000891s | byte equality observed |
| spawn.test | 10 | 0.000984s | 0.000979s | 0.000990s | byte equality observed |
| spawn_select.test | 10 | 0.000994s | 0.000988s | 0.000962s | byte equality observed |
| static_thread_pool.test | 10 | 0.000822s | 0.000803s | 0.000820s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000797s | 0.000764s | 0.000802s | byte equality observed |
| strand.test | 1 | 0.001750s | 0.001708s | 0.001778s | byte equality observed |
| strand_select.test | 1 | 0.001451s | 0.001477s | 0.001484s | byte equality observed |
| streambuf.test | 10 | 0.000894s | 0.000877s | 0.000896s | byte equality observed |
| streambuf_select.test | 10 | 0.000842s | 0.000862s | 0.000863s | byte equality observed |
| thread_pool.test | 10 | 0.001593s | 0.001564s | 0.001550s | byte equality observed |
| thread_pool_select.test | 10 | 0.001556s | 0.001540s | 0.001562s | byte equality observed |
| write.test | 10 | 0.001197s | 0.001192s | 0.001189s | byte equality observed |
| write_at.test | 10 | 0.001316s | 0.001313s | 0.001290s | byte equality observed |
| write_at_select.test | 10 | 0.001280s | 0.001299s | 0.001274s | byte equality observed |
| write_select.test | 10 | 0.001195s | 0.001162s | 0.001193s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44560957980).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
