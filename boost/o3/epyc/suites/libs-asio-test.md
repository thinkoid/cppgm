# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.818215 | 5.118093 | 5.111071 | 0.002848 | 0.002738 | 0.002913 |
| any_completion_executor_select.test | RUN | 0.853393 | 5.052610 | 5.549360 | 0.002855 | 0.002497 | 0.002554 |
| any_completion_handler.test | RUN | 0.935058 | 4.447207 | 4.674071 | 0.002383 | 0.002470 | 0.001786 |
| any_completion_handler_select.test | RUN | 0.998283 | 4.608044 | 5.060019 | 0.001966 | 0.002380 | 0.002302 |
| any_io_executor.test | RUN | 0.873580 | 5.375826 | 5.661029 | 0.002648 | 0.002716 | 0.003224 |
| any_io_executor_select.test | RUN | 0.934358 | 5.294956 | 5.945832 | 0.002461 | 0.002950 | 0.002814 |
| append.test | RUN | 0.810672 | 4.267202 | 4.431363 | 0.002002 | 0.002350 | 0.002162 |
| append_select.test | RUN | 0.811886 | 4.346593 | 4.372116 | 0.001962 | 0.002196 | 0.002200 |
| as_tuple.test | RUN | 1.025282 | 5.106775 | 5.793318 | 0.002480 | 0.002562 | 0.002607 |
| as_tuple_select.test | RUN | 1.060731 | 5.075640 | 5.817249 | 0.001747 | 0.001998 | 0.001789 |
| associated_allocator.test | LINK | 0.220753 | 0.458630 | 0.736921 | — | — | — |
| associated_allocator_select.test | LINK | 0.227406 | 0.461929 | 0.711963 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.240557 | 0.489324 | 0.772187 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.246253 | 0.498671 | 0.764818 | — | — | — |
| associated_executor.test | LINK | 0.347158 | 0.848633 | 1.189081 | — | — | — |
| associated_executor_select.test | LINK | 0.350536 | 0.866521 | 1.217726 | — | — | — |
| associated_immediate_executor.test | LINK | 0.323772 | 0.783505 | 1.116608 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.324388 | 0.806303 | 1.080020 | — | — | — |
| associator.test | LINK | 0.180225 | 0.388270 | 0.560862 | — | — | — |
| associator_select.test | LINK | 0.182353 | 0.381716 | 0.550779 | — | — | — |
| awaitable.test | LINK | 0.179080 | 0.392737 | 0.534706 | — | — | — |
| awaitable_select.test | LINK | 0.185283 | 0.388975 | 0.594768 | — | — | — |
| basic_datagram_socket.test | LINK | 0.541067 | 1.202270 | 2.287387 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.555698 | 1.230482 | 2.325600 | — | — | — |
| basic_deadline_timer.test | LINK | 0.647283 | 1.455091 | 2.614643 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.667539 | 1.491102 | 2.617562 | — | — | — |
| basic_file.test | LINK | 0.181143 | 0.398981 | 0.586891 | — | — | — |
| basic_file_select.test | LINK | 0.185456 | 0.389473 | 0.574625 | — | — | — |
| basic_random_access_file.test | LINK | 0.182956 | 0.374717 | 0.587748 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.183991 | 0.378554 | 0.552105 | — | — | — |
| basic_raw_socket.test | LINK | 0.545876 | 1.219617 | 2.244157 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.558357 | 1.232093 | 2.363583 | — | — | — |
| basic_readable_pipe.test | LINK | 0.529788 | 1.167975 | 1.947008 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.555683 | 1.237570 | 2.367868 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.541875 | 1.205721 | 2.282516 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.557194 | 1.250556 | 2.277311 | — | — | — |
| basic_signal_set.test | LINK | 0.521563 | 1.131203 | 1.700266 | — | — | — |
| basic_signal_set_select.test | LINK | 0.541967 | 1.204150 | 2.185952 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.540682 | 1.205543 | 2.272484 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.549481 | 1.232534 | 2.246834 | — | — | — |
| basic_stream_file.test | LINK | 0.177510 | 0.405819 | 0.604819 | — | — | — |
| basic_stream_file_select.test | LINK | 0.187480 | 0.407511 | 0.589011 | — | — | — |
| basic_stream_socket.test | LINK | 0.549804 | 1.220182 | 2.242597 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.561145 | 1.260042 | 2.283807 | — | — | — |
| basic_streambuf.test | LINK | 0.284015 | 0.553353 | 0.886987 | — | — | — |
| basic_streambuf_select.test | LINK | 0.281381 | 0.564487 | 0.904954 | — | — | — |
| basic_waitable_timer.test | LINK | 0.514638 | 1.141973 | 2.105335 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.526417 | 1.189632 | 2.145439 | — | — | — |
| basic_writable_pipe.test | LINK | 0.524635 | 1.152152 | 1.919848 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.557631 | 1.244209 | 2.479625 | — | — | — |
| bind_allocator.test | RUN | 0.861166 | 4.295861 | 4.710586 | 0.002553 | 0.002630 | 0.002642 |
| bind_allocator_select.test | RUN | 0.876722 | 4.436369 | 4.783473 | 0.002283 | 0.002518 | 0.001894 |
| bind_cancellation_slot.test | RUN | 0.876831 | 4.350064 | 4.722678 | 0.001745 | 0.001578 | 0.001627 |
| bind_cancellation_slot_select.test | RUN | 0.889393 | 4.358295 | 4.430338 | 0.001686 | 0.001636 | 0.001586 |
| bind_executor.test | RUN | 0.554687 | 2.929144 | 2.757000 | 0.002338 | 0.003024 | 0.002571 |
| bind_executor_select.test | RUN | 0.566060 | 3.074940 | 3.079634 | 0.002226 | 0.002192 | 0.002186 |
| bind_immediate_executor.test | RUN | 0.410820 | 2.541309 | 2.212208 | 0.001550 | 0.001588 | 0.001399 |
| bind_immediate_executor_select.test | RUN | 0.427038 | 2.508097 | 2.136500 | 0.001372 | 0.001627 | 0.001478 |
| buffer.test | RUN | 0.251660 | 1.021165 | 1.120344 | 0.001830 | 0.001545 | 0.001505 |
| buffer_select.test | RUN | 0.254435 | 1.026402 | 1.090444 | 0.001282 | 0.001533 | 0.001393 |
| buffer_registration.test | LINK | 0.205372 | 0.520495 | 0.639665 | — | — | — |
| buffer_registration_select.test | LINK | 0.206941 | 0.521865 | 0.654728 | — | — | — |
| buffered_read_stream.test | RUN | 0.906854 | 6.910095 | 6.730850 | 0.002026 | 0.002660 | 0.002695 |
| buffered_read_stream_select.test | RUN | 0.926183 | 6.941361 | 7.320875 | 0.001757 | 0.002490 | 0.002740 |
| buffered_stream.test | RUN | 1.708447 | 10.124608 | 11.282679 | 0.002264 | 0.002722 | 0.002864 |
| buffered_stream_select.test | RUN | 1.788372 | 10.185866 | 10.883282 | 0.002516 | 0.002730 | 0.002811 |
| buffered_write_stream.test | RUN | 1.626213 | 8.749712 | 9.546726 | 0.002563 | 0.002701 | 0.002728 |
| buffered_write_stream_select.test | RUN | 1.650953 | 8.957196 | 9.110143 | 0.002245 | 0.002641 | 0.002666 |
| buffers_iterator.test | RUN | 0.510955 | 0.897699 | 1.670324 | 0.001865 | 0.002108 | 0.001894 |
| buffers_iterator_select.test | RUN | 0.510222 | 0.883491 | 1.684264 | 0.002132 | 0.002102 | 0.002004 |
| cancel_after.test | RUN | 1.333752 | 6.937294 | 7.122272 | 0.004174 | 0.004475 | 0.004450 |
| cancel_after_select.test | RUN | 1.359043 | 6.833518 | 7.103329 | 0.004127 | 0.003896 | 0.004194 |
| cancel_at.test | RUN | 1.233921 | 5.672832 | 6.147820 | 0.003792 | 0.003888 | 0.003754 |
| cancel_at_select.test | RUN | 1.206103 | 5.500468 | 6.232335 | 0.003386 | 0.003786 | 0.003560 |
| cancellation_signal.test | LINK | 0.146014 | 0.304950 | 0.425203 | — | — | — |
| cancellation_signal_select.test | LINK | 0.148105 | 0.312506 | 0.430489 | — | — | — |
| cancellation_state.test | LINK | 0.220476 | 0.313366 | 0.428431 | — | — | — |
| cancellation_state_select.test | LINK | 0.238068 | 0.309895 | 0.436119 | — | — | — |
| cancellation_type.test | LINK | 0.183189 | 0.242423 | 0.328008 | — | — | — |
| cancellation_type_select.test | LINK | 0.184696 | 0.244611 | 0.590220 | — | — | — |
| co_composed.test | RUN | 0.183715 | 0.245437 | 0.592781 | 0.001896 | 0.001490 | 0.001878 |
| co_composed_select.test | RUN | 0.184720 | 0.248493 | 0.473107 | 0.001790 | 0.001459 | 0.001794 |
| co_spawn.test | LINK | 0.185653 | 0.245359 | 0.556471 | — | — | — |
| co_spawn_select.test | LINK | 0.190321 | 0.243747 | 0.550861 | — | — | — |
| completion_condition.test | LINK | 0.231934 | 0.369035 | 0.783437 | — | — | — |
| completion_condition_select.test | LINK | 0.227211 | 0.394080 | 0.798159 | — | — | — |
| compose.test | RUN | 1.043806 | 5.392839 | 5.929463 | 0.002803 | 0.002502 | 0.002558 |
| compose_select.test | RUN | 1.069146 | 5.293461 | 5.804113 | 0.002598 | 0.002562 | 0.002022 |
| composed.test | RUN | 1.024764 | 5.315094 | 5.737133 | 0.002210 | 0.002155 | 0.002126 |
| composed_select.test | RUN | 0.985634 | 5.309198 | 5.709953 | 0.002026 | 0.002160 | 0.001999 |
| config.test | RUN | 0.467778 | 3.498150 | 2.463084 | 0.001958 | 0.002300 | 0.002196 |
| config_select.test | RUN | 0.558033 | 3.704797 | 3.155810 | 0.002269 | 0.002314 | 0.002212 |
| connect.test | LINK | 1.639705 | 11.351494 | 11.977537 | — | — | — |
| connect_select.test | LINK | 1.634477 | 11.375154 | 12.124623 | — | — | — |
| connect_pipe.test | RUN | 0.913921 | 4.252772 | 4.587007 | 0.002134 | 0.002302 | 0.002281 |
| connect_pipe_select.test | RUN | 0.935250 | 4.430513 | 5.059146 | 0.002101 | 0.002219 | 0.002269 |
| consign.test | RUN | 0.794423 | 4.158577 | 4.082009 | 0.002201 | 0.002060 | 0.002165 |
| consign_select.test | RUN | 0.811499 | 4.233982 | 4.062096 | 0.002141 | 0.002180 | 0.002220 |
| coroutine.test | LINK | 0.189967 | 0.452561 | 0.671524 | — | — | — |
| coroutine_select.test | LINK | 0.195730 | 0.451317 | 0.602860 | — | — | — |
| deadline_timer.test | RUN | 1.148943 | 5.432751 | 5.908418 | 0.003474 | 0.003559 | 0.003923 |
| deadline_timer_select.test | RUN | 1.188260 | 5.392829 | 5.868792 | 0.002940 | 0.003852 | 0.003070 |
| deferred.test | RUN | 0.200726 | 0.411401 | 0.651686 | 0.002059 | 0.001821 | 0.001996 |
| deferred_select.test | RUN | 0.205293 | 0.437113 | 0.653972 | 0.001960 | 0.001793 | 0.002088 |
| detached.test | LINK | 0.227709 | 0.480827 | 0.714442 | — | — | — |
| detached_select.test | LINK | 0.225374 | 0.456662 | 0.721853 | — | — | — |
| disposition.test | RUN | 0.205224 | 1.072669 | 1.250222 | 0.001549 | 0.002232 | 0.002204 |
| disposition_select.test | RUN | 0.196251 | 1.053476 | 1.265107 | 0.001599 | 0.002339 | 0.002230 |
| error.test | RUN | 0.181735 | 1.020645 | 1.117539 | 0.001614 | 0.002178 | 0.002073 |
| error_select.test | RUN | 0.183025 | 1.020781 | 1.099584 | 0.001549 | 0.002259 | 0.002080 |
| file_base.test | LINK | 0.225649 | 0.848531 | 1.055028 | — | — | — |
| file_base_select.test | LINK | 0.230171 | 0.790328 | 0.951768 | — | — | — |
| fwd_first.test | LINK | 0.512472 | 1.290474 | 2.013576 | — | — | — |
| fwd_last.test | LINK | 0.519001 | 1.189538 | 2.070162 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.193353 | 0.481741 | 0.735479 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.197166 | 0.485344 | 0.754544 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.776925 | 4.059569 | 3.801309 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.775060 | 4.236668 | 3.766597 | — | — | — |
| generic_raw_protocol.test | LINK | 0.770225 | 4.061579 | 3.860505 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.787852 | 4.220471 | 3.801293 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.674345 | 3.436286 | 3.295797 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.680484 | 3.521357 | 3.333699 | — | — | — |
| generic_stream_protocol.test | LINK | 0.714310 | 3.741795 | 3.604721 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.720422 | 3.855920 | 3.564376 | — | — | — |
| high_resolution_timer.test | LINK | 0.328210 | 0.720570 | 1.172384 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.330199 | 0.753566 | 1.215452 | — | — | — |
| immediate.test | LINK | 0.226100 | 0.553049 | 0.703405 | — | — | — |
| immediate_select.test | LINK | 0.230074 | 0.556977 | 0.706418 | — | — | — |
| inline_executor.test | RUN | 0.275419 | 0.845321 | 1.065465 | 0.001570 | 0.001566 | 0.001477 |
| inline_executor_select.test | RUN | 0.278123 | 0.854827 | 1.071989 | 0.001538 | 0.001608 | 0.001502 |
| inline_or_executor.test | RUN | 0.431896 | 2.427726 | 1.992356 | 0.001520 | 0.001562 | 0.001511 |
| inline_or_executor_select.test | RUN | 0.452278 | 2.509839 | 2.196237 | 0.001560 | 0.001580 | 0.001564 |
| io_context.test | RUN | 0.621815 | 3.738934 | 3.402545 | 0.002539 | 0.002775 | 0.002598 |
| io_context_select.test | RUN | 0.627056 | 3.664346 | 3.453728 | 0.002500 | 0.002612 | 0.002650 |
| io_context_strand.test | RUN | 0.601602 | 4.265736 | 4.074282 | 0.002462 | 0.003153 | 0.003070 |
| io_context_strand_select.test | RUN | 0.607101 | 4.525902 | 3.941378 | 0.002545 | 0.003258 | 0.003072 |
| ip_address.test | LINK | 0.225428 | 1.200825 | 1.693015 | — | — | — |
| ip_address_select.test | LINK | 0.235636 | 1.200952 | 1.687189 | — | — | — |
| ip_address_v4.test | LINK | 0.234743 | 1.290364 | 1.387966 | — | — | — |
| ip_address_v4_select.test | LINK | 0.235802 | 1.256133 | 1.237323 | — | — | — |
| ip_address_v6.test | LINK | 0.266190 | 1.476636 | 1.231118 | — | — | — |
| ip_address_v6_select.test | LINK | 0.269501 | 1.284331 | 1.210337 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.209678 | 0.511017 | 0.796069 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.205332 | 0.539007 | 0.773876 | — | — | — |
| ip_basic_resolver.test | LINK | 0.331642 | 0.740612 | 1.201898 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.335462 | 0.764642 | 1.215171 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.116392 | 0.242178 | 0.342824 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.113365 | 0.244857 | 0.342614 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.205385 | 0.499306 | 0.790855 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.203689 | 0.502981 | 0.769816 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.195043 | 0.482819 | 0.760808 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.195919 | 0.482656 | 0.740028 | — | — | — |
| ip_host_name.test | RUN | 0.210769 | 0.650049 | 0.842554 | 0.001491 | 0.001534 | 0.001528 |
| ip_host_name_select.test | RUN | 0.207871 | 0.639470 | 0.852426 | 0.001476 | 0.001518 | 0.001535 |
| ip_icmp.test | RUN | 0.958112 | 7.186084 | 8.353919 | 0.001586 | 0.002048 | 0.002150 |
| ip_icmp_select.test | RUN | 0.948998 | 7.499234 | 8.256077 | 0.001530 | 0.001860 | 0.001993 |
| ip_multicast.test | RUN | 0.554429 | 4.501785 | 5.010985 | 0.001733 | 0.002136 | 0.002094 |
| ip_multicast_select.test | RUN | 0.575595 | 4.427596 | 5.001491 | 0.001600 | 0.002126 | 0.002222 |
| ip_resolver_query_base.test | LINK | 0.134366 | 0.420816 | 0.606540 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.134260 | 0.409316 | 0.603981 | — | — | — |
| ip_tcp.test | RUN | 1.414755 | 12.811644 | 12.841897 | 0.002247 | 0.003052 | 0.003295 |
| ip_tcp_select.test | RUN | 1.422118 | 13.367943 | 12.438398 | 0.002150 | 0.003239 | 0.002971 |
| ip_udp.test | RUN | 1.026422 | 9.248265 | 8.856749 | 0.001848 | 0.002414 | 0.002172 |
| ip_udp_select.test | RUN | 1.009439 | 9.474675 | 8.622597 | 0.001689 | 0.002345 | 0.002163 |
| ip_unicast.test | RUN | 0.516245 | 4.129418 | 4.336405 | 0.001534 | 0.002210 | 0.002257 |
| ip_unicast_select.test | RUN | 0.549733 | 4.167900 | 4.359501 | 0.002185 | 0.002281 | 0.002280 |
| ip_v6_only.test | RUN | 0.846962 | 4.246433 | 4.647142 | 0.001920 | 0.002459 | 0.002069 |
| ip_v6_only_select.test | RUN | 0.862848 | 4.421305 | 4.520233 | 0.001954 | 0.002334 | 0.002236 |
| is_read_buffered.test | RUN | 0.604201 | 1.348817 | 2.521843 | 0.001747 | 0.002126 | 0.002094 |
| is_read_buffered_select.test | RUN | 0.631331 | 1.405261 | 2.595576 | 0.001804 | 0.002242 | 0.002084 |
| is_write_buffered.test | RUN | 0.622221 | 1.370735 | 2.631399 | 0.002133 | 0.002109 | 0.002116 |
| is_write_buffered_select.test | RUN | 0.640358 | 1.420913 | 2.596719 | 0.002024 | 0.002188 | 0.002114 |
| local_basic_endpoint.test | LINK | 0.305714 | 0.758823 | 1.398402 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.305246 | 0.752837 | 1.443078 | — | — | — |
| local_connect_pair.test | LINK | 0.779801 | 4.197267 | 4.313507 | — | — | — |
| local_connect_pair_select.test | LINK | 0.792813 | 4.150378 | 4.273169 | — | — | — |
| local_datagram_protocol.test | LINK | 1.037120 | 5.389233 | 5.729015 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.067143 | 5.505353 | 5.751157 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.050184 | 5.298826 | 5.645023 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.059882 | 5.403531 | 5.571654 | — | — | — |
| local_stream_protocol.test | LINK | 0.989164 | 5.128590 | 5.451292 | — | — | — |
| local_stream_protocol_select.test | LINK | 1.020084 | 5.121615 | 5.430678 | — | — | — |
| placeholders.test | LINK | 0.195194 | 0.425984 | 0.654299 | — | — | — |
| placeholders_select.test | LINK | 0.195967 | 0.425720 | 0.626850 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.521842 | 1.153220 | 1.902242 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.545894 | 1.218149 | 2.374905 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.522795 | 1.127865 | 1.922934 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.554805 | 1.250868 | 2.344646 | — | — | — |
| posix_descriptor_base.test | LINK | 0.214894 | 0.460858 | 0.665387 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.220618 | 0.455078 | 0.646002 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.038466 | 5.107558 | 5.249199 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.058569 | 5.230776 | 5.435389 | — | — | — |
| prepend.test | RUN | 0.806005 | 4.252937 | 4.340441 | 0.002007 | 0.002177 | 0.002208 |
| prepend_select.test | RUN | 0.817848 | 4.311435 | 4.336601 | 0.001968 | 0.002040 | 0.001926 |
| random_access_file.test | LINK | 0.478321 | 1.016312 | 1.541963 | — | — | — |
| random_access_file_select.test | LINK | 0.504337 | 1.095508 | 2.027842 | — | — | — |
| read.test | RUN | 2.498444 | 25.629515 | 23.455273 | 0.002849 | 0.002816 | 0.002782 |
| read_select.test | RUN | 2.538543 | 25.711047 | 24.008108 | 0.002891 | 0.003025 | 0.003154 |
| read_at.test | RUN | 2.555460 | 35.081124 | 31.737079 | 0.003360 | 0.003824 | 0.003457 |
| read_at_select.test | RUN | 2.563081 | 34.963852 | 31.974849 | 0.003429 | 0.003775 | 0.003520 |
| read_until.test | RUN | 1.281914 | 9.816242 | 9.316344 | 0.002550 | 0.002272 | 0.002562 |
| read_until_select.test | RUN | 1.295773 | 9.877895 | 9.765214 | 0.002457 | 0.002431 | 0.002298 |
| readable_pipe.test | LINK | 0.852428 | 4.223646 | 4.232392 | — | — | — |
| readable_pipe_select.test | LINK | 0.883171 | 4.426220 | 4.593322 | — | — | — |
| recycling_allocator.test | RUN | 0.262209 | 0.647262 | 0.947349 | 0.001946 | 0.002172 | 0.001938 |
| recycling_allocator_select.test | RUN | 0.262943 | 0.643460 | 0.946641 | 0.002013 | 0.001916 | 0.001922 |
| redirect_disposition.test | LINK | 1.096559 | 5.962822 | 6.589619 | — | — | — |
| redirect_disposition_select.test | LINK | 1.120155 | 5.971273 | 6.526500 | — | — | — |
| redirect_error.test | LINK | 0.978544 | 4.876663 | 5.716765 | — | — | — |
| redirect_error_select.test | LINK | 0.992324 | 4.881908 | 5.705376 | — | — | — |
| registered_buffer.test | LINK | 0.254195 | 0.522332 | 0.829165 | — | — | — |
| registered_buffer_select.test | LINK | 0.261193 | 0.534091 | 0.891912 | — | — | — |
| signal_set.test | RUN | 0.803843 | 4.189229 | 3.875002 | 0.002022 | 0.002198 | 0.002208 |
| signal_set_select.test | RUN | 0.829290 | 4.417468 | 4.378115 | 0.002045 | 0.002157 | 0.002067 |
| signal_set_base.test | LINK | 0.217950 | 0.414331 | 0.633415 | — | — | — |
| signal_set_base_select.test | LINK | 0.222239 | 0.451984 | 0.643497 | — | — | — |
| socket_base.test | RUN | 0.999515 | 6.357448 | 6.086024 | 0.002246 | 0.002422 | 0.002370 |
| socket_base_select.test | RUN | 1.001490 | 6.229818 | 6.193570 | 0.002250 | 0.002369 | 0.002332 |
| spawn.test | RUN | 1.665077 | 9.984982 | 9.990967 | 0.002271 | 0.002553 | 0.002588 |
| spawn_select.test | RUN | 1.689495 | 9.883113 | 10.132269 | 0.002398 | 0.002505 | 0.002456 |
| static_thread_pool.test | RUN | 0.466643 | 1.007809 | 1.515174 | 0.002098 | 0.002011 | 0.002062 |
| static_thread_pool_select.test | RUN | 0.500569 | 1.070848 | 1.914653 | 0.002038 | 0.002098 | 0.001952 |
| steady_timer.test | LINK | 0.524943 | 1.152921 | 2.122717 | — | — | — |
| steady_timer_select.test | LINK | 0.525665 | 1.189838 | 2.034275 | — | — | — |
| strand.test | RUN | 1.066846 | 5.572192 | 6.107064 | 0.002992 | 0.003008 | 0.003086 |
| strand_select.test | RUN | 1.064931 | 5.530552 | 5.822364 | 0.002871 | 0.003238 | 0.003152 |
| stream_file.test | LINK | 0.480619 | 1.073915 | 1.561571 | — | — | — |
| stream_file_select.test | LINK | 0.503845 | 1.099869 | 2.064099 | — | — | — |
| streambuf.test | RUN | 0.292871 | 0.856094 | 1.039907 | 0.001556 | 0.002116 | 0.002072 |
| streambuf_select.test | RUN | 0.213929 | 0.679040 | 1.090418 | 0.001505 | 0.001608 | 0.001444 |
| system_timer.test | LINK | 0.634052 | 3.496162 | 3.878745 | — | — | — |
| system_timer_select.test | LINK | 0.645580 | 3.384748 | 3.333495 | — | — | — |
| system_context.test | LINK | 0.294436 | 0.640162 | 0.861556 | — | — | — |
| system_context_select.test | LINK | 0.308913 | 0.692860 | 1.055385 | — | — | — |
| system_executor.test | LINK | 0.387656 | 1.992795 | 1.596518 | — | — | — |
| system_executor_select.test | LINK | 0.402184 | 1.968618 | 1.784086 | — | — | — |
| this_coro.test | LINK | 0.120060 | 0.244386 | 0.335556 | — | — | — |
| this_coro_select.test | LINK | 0.113624 | 0.246185 | 0.345336 | — | — | — |
| thread_pool.test | RUN | 0.453601 | 3.326961 | 2.942157 | 0.003181 | 0.003354 | 0.003330 |
| thread_pool_select.test | RUN | 0.466317 | 3.845256 | 2.640437 | 0.003214 | 0.003444 | 0.004002 |
| time_traits.test | LINK | 0.256589 | 0.871004 | 1.267717 | — | — | — |
| time_traits_select.test | LINK | 0.268179 | 0.827548 | 1.227722 | — | — | — |
| ts_buffer.test | LINK | 0.254657 | 0.911283 | 1.212922 | — | — | — |
| ts_buffer_select.test | LINK | 0.245028 | 0.879153 | 1.246210 | — | — | — |
| ts_executor.test | LINK | 0.344668 | 1.233370 | 2.002011 | — | — | — |
| ts_executor_select.test | LINK | 0.352286 | 1.312017 | 2.471845 | — | — | — |
| ts_internet.test | LINK | 0.378017 | 1.376127 | 2.587394 | — | — | — |
| ts_internet_select.test | LINK | 0.380730 | 1.400962 | 2.660990 | — | — | — |
| ts_io_context.test | LINK | 0.300904 | 1.035371 | 1.485754 | — | — | — |
| ts_io_context_select.test | LINK | 0.311071 | 1.091102 | 1.999925 | — | — | — |
| ts_net.test | LINK | 0.450416 | 1.634281 | 3.073911 | — | — | — |
| ts_net_select.test | LINK | 0.461536 | 1.655938 | 3.146975 | — | — | — |
| ts_netfwd.test | LINK | 0.446100 | 1.652573 | 3.135128 | — | — | — |
| ts_netfwd_select.test | LINK | 0.456319 | 1.665698 | 3.211800 | — | — | — |
| ts_socket.test | LINK | 0.372894 | 1.305484 | 2.480408 | — | — | — |
| ts_socket_select.test | LINK | 0.374959 | 1.304899 | 2.481263 | — | — | — |
| ts_timer.test | LINK | 0.324530 | 1.162888 | 2.145377 | — | — | — |
| ts_timer_select.test | LINK | 0.329636 | 1.169115 | 2.097468 | — | — | — |
| use_awaitable.test | LINK | 0.113063 | 0.405862 | 0.598768 | — | — | — |
| use_awaitable_select.test | LINK | 0.120790 | 0.395348 | 0.559105 | — | — | — |
| wait_traits.test | LINK | 0.138894 | 0.390879 | 0.564416 | — | — | — |
| wait_traits_select.test | LINK | 0.163491 | 0.401576 | 0.560953 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.182240 | 0.387084 | 0.553014 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.180729 | 0.381659 | 0.557339 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.185154 | 0.389917 | 0.563226 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.180623 | 0.381946 | 0.539669 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.181880 | 0.380959 | 0.552783 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.178012 | 0.384374 | 0.545314 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.183342 | 0.389559 | 0.563859 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.183541 | 0.391130 | 0.554837 | — | — | — |
| windows_object_handle.test | LINK | 0.479108 | 1.041879 | 1.523555 | — | — | — |
| windows_object_handle_select.test | LINK | 0.500819 | 1.121068 | 1.997675 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.494820 | 1.118302 | 1.661035 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.541886 | 1.203615 | 2.183509 | — | — | — |
| windows_random_access_handle.test | LINK | 0.490366 | 1.067400 | 1.517027 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.511848 | 1.109419 | 2.022945 | — | — | — |
| windows_stream_handle.test | LINK | 0.494080 | 1.086060 | 1.514421 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.529966 | 1.148367 | 2.045425 | — | — | — |
| writable_pipe.test | LINK | 0.840386 | 4.277248 | 4.404036 | — | — | — |
| writable_pipe_select.test | LINK | 0.879203 | 4.461332 | 4.840034 | — | — | — |
| write.test | RUN | 2.472933 | 21.843244 | 23.438484 | 0.002973 | 0.002964 | 0.002728 |
| write_select.test | RUN | 2.512674 | 21.766928 | 23.741606 | 0.002929 | 0.002776 | 0.002904 |
| write_at.test | RUN | 2.584338 | 29.620697 | 30.489002 | 0.002335 | 0.002896 | 0.003169 |
| write_at_select.test | RUN | 2.577600 | 30.143763 | 30.634179 | 0.003334 | 0.003414 | 0.003288 |
| any_executor.test | RUN | 1.039686 | 9.513960 | 8.856309 | 0.002778 | 0.002531 | 0.002669 |
| blocking.test | RUN | 2.793633 | 12.138081 | 19.664351 | 0.008658 | 0.008278 | 0.008580 |
| blocking_adaptation.test | RUN | 1.332816 | 5.461639 | 9.202316 | 0.004286 | 0.004888 | 0.004953 |
| context_as.test | RUN | 0.718764 | 3.857860 | 3.048642 | 0.002060 | 0.002278 | 0.002201 |
| executor.test | RUN | 0.193881 | 0.410719 | 0.609802 | 0.002089 | 0.002153 | 0.002090 |
| inline_exception_handling.test | RUN | 2.802159 | 11.678600 | 18.301076 | 0.007936 | 0.005749 | 0.005736 |
| invocable_archetype.test | RUN | 0.188739 | 0.407027 | 0.592311 | 0.002478 | 0.002044 | 0.002146 |
| mapping.test | RUN | 2.370643 | 11.441413 | 19.460269 | 0.005803 | 0.005843 | 0.005776 |
| outstanding_work.test | RUN | 1.295240 | 5.127881 | 8.900058 | 0.004586 | 0.004381 | 0.004754 |
| prefer_only.test | RUN | 0.374029 | 2.113600 | 2.031361 | 0.002068 | 0.002202 | 0.002106 |
| relationship.test | RUN | 0.999545 | 4.708849 | 8.360336 | 0.003298 | 0.004618 | 0.003181 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.995×, 0.996× | 0.997× |
| clang | 0.987× | 0.990×, 0.983× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001945s | 0.002081s | 0.001989s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001939s | 0.001990s | 0.001999s | byte equality observed |
| any_completion_handler.test | 7 | 0.001559s | 0.001562s | 0.001555s | byte equality observed |
| any_completion_handler_select.test | 7 | 0.001562s | 0.001578s | 0.001544s | byte equality observed |
| any_io_executor.test | 5 | 0.001964s | 0.001955s | 0.001937s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001949s | 0.001945s | 0.001971s | byte equality observed |
| append.test | 3 | 0.001508s | 0.001471s | 0.001527s | byte equality observed |
| append_select.test | 7 | 0.001462s | 0.001446s | 0.001450s | byte equality observed |
| as_tuple.test | 5 | 0.001648s | 0.001717s | 0.001644s | byte equality observed |
| as_tuple_select.test | 7 | 0.001483s | 0.001371s | 0.001465s | byte equality observed |
| bind_allocator.test | 1 | 0.001991s | 0.001891s | 0.001905s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001687s | 0.001429s | 0.001608s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001352s | 0.001407s | 0.001352s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001263s | 0.001274s | 0.001259s | byte equality observed |
| bind_executor.test | 1 | 0.001952s | 0.001892s | 0.001884s | byte equality observed |
| bind_executor_select.test | 1 | 0.002150s | 0.002131s | 0.002170s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001272s | 0.001271s | 0.001247s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001313s | 0.001339s | 0.001291s | byte equality observed |
| buffer.test | 10 | 0.001299s | 0.001279s | 0.001228s | byte equality observed |
| buffer_select.test | 10 | 0.001269s | 0.001244s | 0.001275s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001633s | 0.001650s | 0.001607s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001596s | 0.001601s | 0.001576s | byte equality observed |
| buffered_stream.test | 10 | 0.001613s | 0.001659s | 0.001630s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001607s | 0.001569s | 0.001557s | byte equality observed |
| buffered_write_stream.test | 9 | 0.001594s | 0.001603s | 0.001607s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001587s | 0.001648s | 0.001581s | byte equality observed |
| buffers_iterator.test | 10 | 0.001227s | 0.001212s | 0.001251s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001157s | 0.001180s | 0.001152s | byte equality observed |
| cancel_after.test | 1 | 0.003570s | 0.003580s | 0.003547s | byte equality observed |
| cancel_after_select.test | 1 | 0.003160s | 0.003101s | 0.003090s | byte equality observed |
| cancel_at.test | 1 | 0.003793s | 0.003706s | 0.003648s | byte equality observed |
| cancel_at_select.test | 1 | 0.003654s | 0.003500s | 0.003546s | byte equality observed |
| co_composed.test | 10 | 0.001204s | 0.001203s | 0.001181s | byte equality observed |
| co_composed_select.test | 10 | 0.001151s | 0.001164s | 0.001147s | byte equality observed |
| compose.test | 1 | 0.001898s | 0.001899s | 0.001876s | byte equality observed |
| compose_select.test | 1 | 0.001620s | 0.001634s | 0.001568s | byte equality observed |
| composed.test | 1 | 0.002218s | 0.002167s | 0.002105s | byte equality observed |
| composed_select.test | 1 | 0.001726s | 0.001701s | 0.001667s | byte equality observed |
| config.test | 10 | 0.001274s | 0.001267s | 0.001249s | byte equality observed |
| config_select.test | 10 | 0.001396s | 0.001281s | 0.001286s | byte equality observed |
| connect_pipe.test | 10 | 0.001353s | 0.001308s | 0.001376s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001382s | 0.001332s | 0.001311s | byte equality observed |
| consign.test | 10 | 0.001325s | 0.001345s | 0.001384s | byte equality observed |
| consign_select.test | 10 | 0.001252s | 0.001245s | 0.001233s | byte equality observed |
| deadline_timer.test | 1 | 0.002742s | 0.002673s | 0.002691s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002505s | 0.002437s | 0.002484s | byte equality observed |
| deferred.test | 10 | 0.001179s | 0.001166s | 0.001174s | byte equality observed |
| deferred_select.test | 10 | 0.001136s | 0.001116s | 0.001128s | byte equality observed |
| disposition.test | 10 | 0.001195s | 0.001189s | 0.001189s | byte equality observed |
| disposition_select.test | 10 | 0.001201s | 0.001200s | 0.001185s | byte equality observed |
| error.test | 10 | 0.001174s | 0.001170s | 0.001149s | byte equality observed |
| error_select.test | 10 | 0.001160s | 0.001162s | 0.001161s | byte equality observed |
| inline_executor.test | 10 | 0.001179s | 0.001177s | 0.001156s | byte equality observed |
| inline_executor_select.test | 10 | 0.001189s | 0.001166s | 0.001150s | byte equality observed |
| inline_or_executor.test | 10 | 0.001190s | 0.001185s | 0.001154s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001188s | 0.001189s | 0.001165s | byte equality observed |
| io_context.test | 1 | 0.002199s | 0.002221s | 0.002223s | byte equality observed |
| io_context_select.test | 1 | 0.002583s | 0.002490s | 0.002573s | byte equality observed |
| io_context_strand.test | 1 | 0.002594s | 0.002557s | 0.002501s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002290s | 0.002219s | 0.002274s | byte equality observed |
| ip_host_name.test | 10 | 0.001190s | 0.001186s | 0.001181s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001147s | 0.001146s | 0.001141s | byte equality observed |
| ip_icmp.test | 10 | 0.001184s | 0.001169s | 0.001164s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001182s | 0.001191s | 0.001160s | byte equality observed |
| ip_multicast.test | 10 | 0.001262s | 0.001262s | 0.001260s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001241s | 0.001237s | 0.001226s | byte equality observed |
| ip_tcp.test | 10 | 0.001768s | 0.001734s | 0.001740s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001680s | 0.001705s | 0.001672s | byte equality observed |
| ip_udp.test | 10 | 0.001299s | 0.001395s | 0.001265s | byte equality observed |
| ip_udp_select.test | 10 | 0.001288s | 0.001385s | 0.001259s | byte equality observed |
| ip_unicast.test | 10 | 0.001246s | 0.001330s | 0.001229s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001226s | 0.001335s | 0.001207s | byte equality observed |
| ip_v6_only.test | 10 | 0.001242s | 0.001333s | 0.001229s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001226s | 0.001384s | 0.001205s | byte equality observed |
| is_read_buffered.test | 10 | 0.001150s | 0.001232s | 0.001185s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001234s | 0.001250s | 0.001291s | byte equality observed |
| is_write_buffered.test | 10 | 0.001274s | 0.001258s | 0.001270s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001266s | 0.001233s | 0.001222s | byte equality observed |
| prepend.test | 10 | 0.001362s | 0.001353s | 0.001328s | byte equality observed |
| prepend_select.test | 10 | 0.001317s | 0.001276s | 0.001285s | byte equality observed |
| read.test | 10 | 0.001792s | 0.001706s | 0.001755s | byte equality observed |
| read_at.test | 9 | 0.002203s | 0.002249s | 0.002195s | byte equality observed |
| read_at_select.test | 9 | 0.002193s | 0.002262s | 0.002167s | byte equality observed |
| read_select.test | 10 | 0.001785s | 0.001737s | 0.001727s | byte equality observed |
| read_until.test | 10 | 0.001464s | 0.001511s | 0.001411s | byte equality observed |
| read_until_select.test | 10 | 0.001462s | 0.001475s | 0.001456s | byte equality observed |
| recycling_allocator.test | 10 | 0.001281s | 0.001254s | 0.001227s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001276s | 0.001305s | 0.001237s | byte equality observed |
| signal_set.test | 10 | 0.001262s | 0.001269s | 0.001293s | byte equality observed |
| signal_set_select.test | 10 | 0.001256s | 0.001302s | 0.001247s | byte equality observed |
| socket_base.test | 10 | 0.001384s | 0.001371s | 0.001385s | byte equality observed |
| socket_base_select.test | 10 | 0.001352s | 0.001399s | 0.001380s | byte equality observed |
| spawn.test | 10 | 0.001520s | 0.001475s | 0.001527s | byte equality observed |
| spawn_select.test | 10 | 0.001519s | 0.001505s | 0.001554s | byte equality observed |
| static_thread_pool.test | 10 | 0.001283s | 0.001305s | 0.001218s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001278s | 0.001225s | 0.001150s | byte equality observed |
| strand.test | 1 | 0.002383s | 0.002373s | 0.002303s | byte equality observed |
| strand_select.test | 1 | 0.001920s | 0.002012s | 0.001875s | byte equality observed |
| streambuf.test | 10 | 0.001270s | 0.001288s | 0.001243s | byte equality observed |
| streambuf_select.test | 10 | 0.001271s | 0.001307s | 0.001256s | byte equality observed |
| thread_pool.test | 8 | 0.002901s | 0.002882s | 0.002862s | byte equality observed |
| thread_pool_select.test | 8 | 0.002834s | 0.002841s | 0.002886s | byte equality observed |
| write.test | 10 | 0.001858s | 0.001807s | 0.001826s | byte equality observed |
| write_at.test | 10 | 0.001977s | 0.001982s | 0.001937s | byte equality observed |
| write_at_select.test | 10 | 0.001976s | 0.002002s | 0.001863s | byte equality observed |
| write_select.test | 10 | 0.001898s | 0.001761s | 0.001888s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43750858933).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
