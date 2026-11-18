# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.717654 | 4.635111 | 4.002855 | 0.002271 | 0.002458 | 0.002393 |
| any_completion_executor_select.test | RUN | 0.747509 | 4.623316 | 4.186653 | 0.002199 | 0.002416 | 0.002604 |
| any_completion_handler.test | RUN | 0.856343 | 4.256250 | 3.585944 | 0.001925 | 0.001866 | 0.001828 |
| any_completion_handler_select.test | RUN | 0.848304 | 4.353862 | 3.886818 | 0.001714 | 0.001964 | 0.001751 |
| any_io_executor.test | RUN | 0.769002 | 4.942530 | 4.342513 | 0.002474 | 0.002134 | 0.002280 |
| any_io_executor_select.test | RUN | 0.786114 | 4.920835 | 4.479797 | 0.001924 | 0.002482 | 0.001980 |
| append.test | RUN | 0.708324 | 4.023993 | 3.247871 | 0.001676 | 0.001892 | 0.001683 |
| append_select.test | RUN | 0.742046 | 4.057737 | 3.228330 | 0.001730 | 0.001804 | 0.001626 |
| as_tuple.test | RUN | 0.930277 | 4.834923 | 4.498419 | 0.001846 | 0.001784 | 0.002133 |
| as_tuple_select.test | RUN | 0.933657 | 4.764166 | 4.507741 | 0.001359 | 0.001836 | 0.001722 |
| associated_allocator.test | LINK | 0.181388 | 0.387703 | 0.488846 | — | — | — |
| associated_allocator_select.test | LINK | 0.184049 | 0.387996 | 0.476271 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.196931 | 0.425242 | 0.523696 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.197328 | 0.424875 | 0.527117 | — | — | — |
| associated_executor.test | LINK | 0.289102 | 0.745067 | 0.845548 | — | — | — |
| associated_executor_select.test | LINK | 0.286307 | 0.748516 | 0.847330 | — | — | — |
| associated_immediate_executor.test | LINK | 0.261883 | 0.695116 | 0.766946 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.265003 | 0.704313 | 0.766824 | — | — | — |
| associator.test | LINK | 0.145509 | 0.331077 | 0.399499 | — | — | — |
| associator_select.test | LINK | 0.146682 | 0.328794 | 0.411358 | — | — | — |
| awaitable.test | LINK | 0.144298 | 0.330625 | 0.404000 | — | — | — |
| awaitable_select.test | LINK | 0.146486 | 0.334069 | 0.404550 | — | — | — |
| basic_datagram_socket.test | LINK | 0.458028 | 1.047869 | 1.496654 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.463536 | 1.076715 | 1.530694 | — | — | — |
| basic_deadline_timer.test | LINK | 0.540870 | 1.218983 | 1.717327 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.549982 | 1.273684 | 1.732211 | — | — | — |
| basic_file.test | LINK | 0.150337 | 0.328522 | 0.392092 | — | — | — |
| basic_file_select.test | LINK | 0.149915 | 0.331972 | 0.396496 | — | — | — |
| basic_random_access_file.test | LINK | 0.151077 | 0.339231 | 0.398872 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.146838 | 0.326615 | 0.395793 | — | — | — |
| basic_raw_socket.test | LINK | 0.457081 | 1.048820 | 1.491047 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.460028 | 1.066878 | 1.536348 | — | — | — |
| basic_readable_pipe.test | LINK | 0.439471 | 0.991126 | 1.296523 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.451369 | 1.056183 | 1.577638 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.459102 | 1.049871 | 1.480277 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.462291 | 1.083895 | 1.525943 | — | — | — |
| basic_signal_set.test | LINK | 0.422221 | 0.985722 | 1.163968 | — | — | — |
| basic_signal_set_select.test | LINK | 0.438018 | 1.033067 | 1.444098 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.454476 | 1.050823 | 1.499903 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.475319 | 1.105364 | 1.521021 | — | — | — |
| basic_stream_file.test | LINK | 0.147979 | 0.333497 | 0.406768 | — | — | — |
| basic_stream_file_select.test | LINK | 0.150597 | 0.332587 | 0.398603 | — | — | — |
| basic_stream_socket.test | LINK | 0.453427 | 1.043454 | 1.491292 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.463673 | 1.077510 | 1.507585 | — | — | — |
| basic_streambuf.test | LINK | 0.224935 | 0.496811 | 0.587535 | — | — | — |
| basic_streambuf_select.test | LINK | 0.220919 | 0.489425 | 0.584490 | — | — | — |
| basic_waitable_timer.test | LINK | 0.425413 | 0.981627 | 1.397827 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.431151 | 1.014873 | 1.427888 | — | — | — |
| basic_writable_pipe.test | LINK | 0.432511 | 1.015484 | 1.290356 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.445261 | 1.071369 | 1.576273 | — | — | — |
| bind_allocator.test | RUN | 0.761907 | 4.031301 | 3.527293 | 0.002276 | 0.001972 | 0.001968 |
| bind_allocator_select.test | RUN | 0.784285 | 4.086885 | 3.555314 | 0.002056 | 0.001982 | 0.001650 |
| bind_cancellation_slot.test | RUN | 0.785247 | 4.101812 | 3.593519 | 0.001316 | 0.001322 | 0.001342 |
| bind_cancellation_slot_select.test | RUN | 0.797489 | 4.076538 | 3.470570 | 0.001271 | 0.001335 | 0.001278 |
| bind_executor.test | RUN | 0.505908 | 2.692244 | 2.218812 | 0.002090 | 0.002466 | 0.001851 |
| bind_executor_select.test | RUN | 0.519868 | 2.751239 | 2.170447 | 0.001786 | 0.001909 | 0.001750 |
| bind_immediate_executor.test | RUN | 0.381890 | 2.266430 | 1.397588 | 0.001308 | 0.001268 | 0.001237 |
| bind_immediate_executor_select.test | RUN | 0.392376 | 2.178772 | 1.516009 | 0.001219 | 0.001200 | 0.001259 |
| buffer.test | RUN | 0.225676 | 0.891337 | 0.829300 | 0.001283 | 0.001220 | 0.001182 |
| buffer_select.test | RUN | 0.225769 | 0.892278 | 0.817852 | 0.001266 | 0.001228 | 0.001187 |
| buffer_registration.test | LINK | 0.176734 | 0.451600 | 0.486965 | — | — | — |
| buffer_registration_select.test | LINK | 0.176903 | 0.451990 | 0.480049 | — | — | — |
| buffered_read_stream.test | RUN | 0.886980 | 6.379708 | 5.479424 | 0.001609 | 0.002002 | 0.002028 |
| buffered_read_stream_select.test | RUN | 0.888556 | 6.450723 | 5.348051 | 0.001530 | 0.002072 | 0.001958 |
| buffered_stream.test | RUN | 1.573093 | 9.751519 | 8.908820 | 0.002030 | 0.001992 | 0.002044 |
| buffered_stream_select.test | RUN | 1.636701 | 9.868738 | 8.708942 | 0.002094 | 0.001967 | 0.002100 |
| buffered_write_stream.test | RUN | 1.513482 | 8.435966 | 7.719512 | 0.002176 | 0.002106 | 0.002034 |
| buffered_write_stream_select.test | RUN | 1.546175 | 8.527165 | 7.366023 | 0.002012 | 0.002426 | 0.002208 |
| buffers_iterator.test | RUN | 0.445227 | 0.763426 | 1.221676 | 0.001662 | 0.001618 | 0.001467 |
| buffers_iterator_select.test | RUN | 0.432606 | 0.754739 | 1.200410 | 0.001581 | 0.001602 | 0.001532 |
| cancel_after.test | RUN | 1.276283 | 6.550866 | 5.612752 | 0.003628 | 0.003849 | 0.003714 |
| cancel_after_select.test | RUN | 1.293333 | 6.567338 | 5.588402 | 0.002883 | 0.004036 | 0.003855 |
| cancel_at.test | RUN | 1.249544 | 5.569651 | 5.203175 | 0.003272 | 0.003318 | 0.003291 |
| cancel_at_select.test | RUN | 1.213270 | 5.441870 | 5.087351 | 0.003484 | 0.003080 | 0.003218 |
| cancellation_signal.test | LINK | 0.120740 | 0.265308 | 0.310945 | — | — | — |
| cancellation_signal_select.test | LINK | 0.125704 | 0.262152 | 0.313831 | — | — | — |
| cancellation_state.test | LINK | 0.191547 | 0.267052 | 0.308721 | — | — | — |
| cancellation_state_select.test | LINK | 0.189700 | 0.264785 | 0.304586 | — | — | — |
| cancellation_type.test | LINK | 0.145284 | 0.208649 | 0.332259 | — | — | — |
| cancellation_type_select.test | LINK | 0.145658 | 0.212053 | 0.407201 | — | — | — |
| co_composed.test | RUN | 0.146848 | 0.219451 | 0.368757 | 0.001649 | 0.001163 | 0.001438 |
| co_composed_select.test | RUN | 0.146535 | 0.208238 | 0.389883 | 0.001436 | 0.001174 | 0.001492 |
| co_spawn.test | LINK | 0.147304 | 0.211501 | 0.391805 | — | — | — |
| co_spawn_select.test | LINK | 0.146257 | 0.208835 | 0.404037 | — | — | — |
| completion_condition.test | LINK | 0.188014 | 0.336425 | 0.530012 | — | — | — |
| completion_condition_select.test | LINK | 0.187389 | 0.488932 | 0.530912 | — | — | — |
| compose.test | RUN | 0.942365 | 5.107810 | 4.523902 | 0.002228 | 0.001562 | 0.002319 |
| compose_select.test | RUN | 0.947464 | 4.980755 | 4.438993 | 0.002049 | 0.002011 | 0.001758 |
| composed.test | RUN | 0.876331 | 5.031951 | 4.432105 | 0.001941 | 0.001784 | 0.001807 |
| composed_select.test | RUN | 0.882828 | 4.929427 | 4.406837 | 0.001608 | 0.001811 | 0.001675 |
| config.test | RUN | 0.414679 | 3.172614 | 1.997948 | 0.001720 | 0.001760 | 0.001738 |
| config_select.test | RUN | 0.444186 | 3.410263 | 2.331354 | 0.001664 | 0.001784 | 0.001740 |
| connect.test | LINK | 1.519478 | 10.575013 | 9.364351 | — | — | — |
| connect_select.test | LINK | 1.540183 | 10.545684 | 9.443861 | — | — | — |
| connect_pipe.test | RUN | 0.807869 | 4.034845 | 3.465472 | 0.001795 | 0.002018 | 0.001652 |
| connect_pipe_select.test | RUN | 0.832324 | 4.216831 | 3.696125 | 0.001670 | 0.001826 | 0.001691 |
| consign.test | RUN | 0.708819 | 3.975934 | 3.169712 | 0.001730 | 0.001720 | 0.001601 |
| consign_select.test | RUN | 0.715563 | 4.059550 | 3.122108 | 0.001537 | 0.001810 | 0.001575 |
| coroutine.test | LINK | 0.154211 | 0.394277 | 0.444873 | — | — | — |
| coroutine_select.test | LINK | 0.156677 | 0.397522 | 0.442604 | — | — | — |
| deadline_timer.test | RUN | 1.012716 | 5.228033 | 4.533376 | 0.003080 | 0.003358 | 0.003236 |
| deadline_timer_select.test | RUN | 1.038332 | 5.120861 | 4.553114 | 0.003172 | 0.002900 | 0.002952 |
| deferred.test | RUN | 0.164846 | 0.364171 | 0.440024 | 0.001545 | 0.001713 | 0.001844 |
| deferred_select.test | RUN | 0.164943 | 0.366771 | 0.436626 | 0.001531 | 0.001615 | 0.001614 |
| detached.test | LINK | 0.180379 | 0.406261 | 0.479999 | — | — | — |
| detached_select.test | LINK | 0.178494 | 0.407734 | 0.477871 | — | — | — |
| disposition.test | RUN | 0.200338 | 0.968724 | 0.909119 | 0.001285 | 0.001778 | 0.001736 |
| disposition_select.test | RUN | 0.165441 | 0.954375 | 0.891775 | 0.001257 | 0.001766 | 0.001646 |
| error.test | RUN | 0.149372 | 0.922452 | 0.828433 | 0.001223 | 0.001750 | 0.001705 |
| error_select.test | RUN | 0.149750 | 0.923887 | 0.798737 | 0.001144 | 0.001733 | 0.001592 |
| file_base.test | LINK | 0.185370 | 0.762961 | 0.868197 | — | — | — |
| file_base_select.test | LINK | 0.183533 | 0.742620 | 0.793015 | — | — | — |
| fwd_first.test | LINK | 0.435315 | 1.174270 | 1.502569 | — | — | — |
| fwd_last.test | LINK | 0.430437 | 1.003993 | 1.516212 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.159558 | 0.421253 | 0.541567 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.159450 | 0.415222 | 0.542666 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.739145 | 3.888687 | 3.169054 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.735630 | 4.028584 | 3.147009 | — | — | — |
| generic_raw_protocol.test | LINK | 0.742740 | 3.890537 | 3.173754 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.741542 | 4.042319 | 3.150821 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.651649 | 3.288514 | 2.698405 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.638345 | 3.339199 | 2.698219 | — | — | — |
| generic_stream_protocol.test | LINK | 0.674526 | 3.535644 | 2.926981 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.681064 | 3.661732 | 2.934085 | — | — | — |
| high_resolution_timer.test | LINK | 0.277866 | 0.619200 | 0.861360 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.283495 | 0.637892 | 0.881931 | — | — | — |
| immediate.test | LINK | 0.186171 | 0.479644 | 0.532587 | — | — | — |
| immediate_select.test | LINK | 0.184620 | 0.476759 | 0.521249 | — | — | — |
| inline_executor.test | RUN | 0.234611 | 0.746966 | 0.799684 | 0.001207 | 0.001210 | 0.001261 |
| inline_executor_select.test | RUN | 0.236671 | 0.751924 | 0.795134 | 0.001199 | 0.001221 | 0.001300 |
| inline_or_executor.test | RUN | 0.390394 | 2.275033 | 1.590579 | 0.001202 | 0.001362 | 0.001251 |
| inline_or_executor_select.test | RUN | 0.407933 | 2.347479 | 1.708601 | 0.001194 | 0.001269 | 0.001190 |
| io_context.test | RUN | 0.587848 | 3.470392 | 2.756251 | 0.002188 | 0.002487 | 0.002379 |
| io_context_select.test | RUN | 0.592959 | 3.418814 | 2.719227 | 0.001952 | 0.002100 | 0.002041 |
| io_context_strand.test | RUN | 0.554830 | 3.753836 | 2.407389 | 0.002109 | 0.002368 | 0.002026 |
| io_context_strand_select.test | RUN | 0.560052 | 3.844755 | 2.371905 | 0.001788 | 0.002077 | 0.001944 |
| ip_address.test | LINK | 0.190503 | 1.054951 | 0.670224 | — | — | — |
| ip_address_select.test | LINK | 0.189321 | 1.061640 | 0.673663 | — | — | — |
| ip_address_v4.test | LINK | 0.197796 | 1.126105 | 0.730217 | — | — | — |
| ip_address_v4_select.test | LINK | 0.199492 | 1.129807 | 0.737391 | — | — | — |
| ip_address_v6.test | LINK | 0.230744 | 1.113883 | 0.889185 | — | — | — |
| ip_address_v6_select.test | LINK | 0.230377 | 1.076250 | 0.896258 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.165248 | 0.442807 | 0.573055 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.163799 | 0.442184 | 0.577484 | — | — | — |
| ip_basic_resolver.test | LINK | 0.278693 | 0.630786 | 0.852630 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.281708 | 0.655193 | 0.882769 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.090923 | 0.208094 | 0.248140 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.090997 | 0.210782 | 0.247849 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.166013 | 0.431271 | 0.562855 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.165760 | 0.431796 | 0.563547 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.161463 | 0.416699 | 0.536690 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.160389 | 0.414045 | 0.537440 | — | — | — |
| ip_host_name.test | RUN | 0.176977 | 0.561397 | 0.991374 | 0.001196 | 0.001227 | 0.001393 |
| ip_host_name_select.test | RUN | 0.176556 | 0.571099 | 1.029651 | 0.001252 | 0.001226 | 0.001350 |
| ip_icmp.test | RUN | 0.934946 | 6.563719 | 6.602918 | 0.001168 | 0.001812 | 0.001411 |
| ip_icmp_select.test | RUN | 0.929306 | 7.033262 | 6.491813 | 0.001221 | 0.001812 | 0.001456 |
| ip_multicast.test | RUN | 0.503294 | 4.275083 | 3.721721 | 0.001376 | 0.002026 | 0.001935 |
| ip_multicast_select.test | RUN | 0.519346 | 4.195071 | 3.690584 | 0.001354 | 0.001914 | 0.001595 |
| ip_resolver_query_base.test | LINK | 0.105683 | 0.368879 | 0.425613 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.105843 | 0.361302 | 0.423788 | — | — | — |
| ip_tcp.test | RUN | 1.385740 | 12.647750 | 10.404361 | 0.001706 | 0.002626 | 0.002548 |
| ip_tcp_select.test | RUN | 1.381237 | 13.184210 | 10.091342 | 0.001607 | 0.002518 | 0.002280 |
| ip_udp.test | RUN | 0.991516 | 8.941068 | 7.052518 | 0.001398 | 0.002178 | 0.001732 |
| ip_udp_select.test | RUN | 0.997498 | 9.119585 | 6.849337 | 0.001319 | 0.002001 | 0.002086 |
| ip_unicast.test | RUN | 0.465485 | 3.906228 | 3.274899 | 0.001297 | 0.001866 | 0.001594 |
| ip_unicast_select.test | RUN | 0.467538 | 3.933816 | 3.241498 | 0.001212 | 0.001863 | 0.001570 |
| ip_v6_only.test | RUN | 0.489072 | 4.056052 | 3.377619 | 0.001261 | 0.001802 | 0.001576 |
| ip_v6_only_select.test | RUN | 0.501395 | 4.148993 | 3.335521 | 0.001245 | 0.001800 | 0.001755 |
| is_read_buffered.test | RUN | 0.324009 | 1.195364 | 1.746127 | 0.001194 | 0.001739 | 0.001495 |
| is_read_buffered_select.test | RUN | 0.326593 | 1.235824 | 1.795223 | 0.001221 | 0.001680 | 0.001625 |
| is_write_buffered.test | RUN | 0.320071 | 1.212470 | 1.712346 | 0.001472 | 0.001749 | 0.001566 |
| is_write_buffered_select.test | RUN | 0.328885 | 1.227861 | 1.746029 | 0.001536 | 0.001434 | 0.001540 |
| local_basic_endpoint.test | LINK | 0.249479 | 0.677524 | 0.892675 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.247889 | 0.670436 | 0.906364 | — | — | — |
| local_connect_pair.test | LINK | 0.689169 | 3.916381 | 3.120351 | — | — | — |
| local_connect_pair_select.test | LINK | 0.699234 | 3.899178 | 3.093767 | — | — | — |
| local_datagram_protocol.test | LINK | 0.951099 | 5.143797 | 4.386740 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.973383 | 5.211842 | 4.289208 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.972816 | 5.015900 | 4.372512 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.963734 | 5.119683 | 4.366843 | — | — | — |
| local_stream_protocol.test | LINK | 0.897775 | 4.807170 | 4.115266 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.916319 | 4.866739 | 4.068836 | — | — | — |
| placeholders.test | LINK | 0.158169 | 0.361326 | 0.427324 | — | — | — |
| placeholders_select.test | LINK | 0.158093 | 0.357568 | 0.425821 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.436191 | 1.010148 | 1.299913 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.456756 | 1.046124 | 1.583334 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.440623 | 0.992491 | 1.305862 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.460860 | 1.051284 | 1.564066 | — | — | — |
| posix_descriptor_base.test | LINK | 0.177590 | 0.384743 | 0.429666 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.177197 | 0.377669 | 0.431844 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.947781 | 4.861936 | 4.116944 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.969022 | 4.966601 | 4.165592 | — | — | — |
| prepend.test | RUN | 0.700307 | 3.969941 | 3.250244 | 0.001478 | 0.001674 | 0.001610 |
| prepend_select.test | RUN | 0.717010 | 4.016263 | 3.190842 | 0.001716 | 0.001832 | 0.001771 |
| random_access_file.test | LINK | 0.397346 | 0.898873 | 1.069840 | — | — | — |
| random_access_file_select.test | LINK | 0.417060 | 0.961406 | 1.336307 | — | — | — |
| read.test | RUN | 2.300632 | 24.056784 | 18.768658 | 0.002481 | 0.002418 | 0.002340 |
| read_select.test | RUN | 2.323483 | 24.275655 | 19.036988 | 0.002393 | 0.002340 | 0.002430 |
| read_at.test | RUN | 2.286643 | 31.495486 | 25.096654 | 0.003474 | 0.003163 | 0.002842 |
| read_at_select.test | RUN | 2.294161 | 31.147723 | 25.259397 | 0.002886 | 0.002967 | 0.002889 |
| read_until.test | RUN | 1.198593 | 9.619732 | 7.266157 | 0.001932 | 0.002028 | 0.001928 |
| read_until_select.test | RUN | 1.238219 | 9.668850 | 7.497553 | 0.001874 | 0.001990 | 0.001965 |
| readable_pipe.test | LINK | 0.741634 | 3.993583 | 3.273450 | — | — | — |
| readable_pipe_select.test | LINK | 0.769377 | 4.175178 | 3.425356 | — | — | — |
| recycling_allocator.test | RUN | 0.218682 | 0.573773 | 0.655419 | 0.001746 | 0.001812 | 0.001703 |
| recycling_allocator_select.test | RUN | 0.216781 | 0.575068 | 0.647647 | 0.001408 | 0.001632 | 0.001693 |
| redirect_disposition.test | LINK | 0.975058 | 5.568187 | 4.982330 | — | — | — |
| redirect_disposition_select.test | LINK | 0.999117 | 5.521202 | 4.934567 | — | — | — |
| redirect_error.test | LINK | 0.874807 | 4.654368 | 4.327846 | — | — | — |
| redirect_error_select.test | LINK | 0.882489 | 4.588364 | 4.294556 | — | — | — |
| registered_buffer.test | LINK | 0.216536 | 0.463331 | 0.589177 | — | — | — |
| registered_buffer_select.test | LINK | 0.206125 | 0.463029 | 0.576772 | — | — | — |
| signal_set.test | RUN | 0.717617 | 3.928388 | 3.080516 | 0.001795 | 0.001758 | 0.001713 |
| signal_set_select.test | RUN | 0.732396 | 4.026003 | 3.398810 | 0.001463 | 0.001696 | 0.001635 |
| signal_set_base.test | LINK | 0.167207 | 0.366095 | 0.408373 | — | — | — |
| signal_set_base_select.test | LINK | 0.179271 | 0.370785 | 0.412339 | — | — | — |
| socket_base.test | RUN | 0.860086 | 5.650978 | 4.565329 | 0.002112 | 0.002074 | 0.001844 |
| socket_base_select.test | RUN | 0.891578 | 5.537284 | 4.535985 | 0.001962 | 0.001808 | 0.001767 |
| spawn.test | RUN | 1.517821 | 9.320033 | 7.893759 | 0.002008 | 0.001808 | 0.001964 |
| spawn_select.test | RUN | 1.530483 | 9.312223 | 7.863375 | 0.001902 | 0.002098 | 0.002098 |
| static_thread_pool.test | RUN | 0.386330 | 0.882725 | 1.017205 | 0.001633 | 0.001570 | 0.001504 |
| static_thread_pool_select.test | RUN | 0.403956 | 0.938936 | 1.310896 | 0.001648 | 0.001564 | 0.001596 |
| steady_timer.test | LINK | 0.433883 | 0.984003 | 1.419035 | — | — | — |
| steady_timer_select.test | LINK | 0.443001 | 1.010312 | 1.436252 | — | — | — |
| strand.test | RUN | 0.957453 | 5.285146 | 4.697577 | 0.002480 | 0.002558 | 0.002313 |
| strand_select.test | RUN | 0.969536 | 5.217384 | 4.561062 | 0.002103 | 0.002616 | 0.002129 |
| stream_file.test | LINK | 0.405622 | 0.908550 | 1.045942 | — | — | — |
| stream_file_select.test | LINK | 0.421222 | 0.856908 | 1.321499 | — | — | — |
| streambuf.test | RUN | 0.253555 | 0.481129 | 0.746680 | 0.001581 | 0.001242 | 0.001610 |
| streambuf_select.test | RUN | 0.251156 | 0.475228 | 0.668434 | 0.001180 | 0.001209 | 0.001177 |
| system_timer.test | LINK | 0.595305 | 3.282392 | 2.882031 | — | — | — |
| system_timer_select.test | LINK | 0.605743 | 3.206198 | 2.657577 | — | — | — |
| system_context.test | LINK | 0.248899 | 0.551193 | 0.617365 | — | — | — |
| system_context_select.test | LINK | 0.259616 | 0.586189 | 0.792276 | — | — | — |
| system_executor.test | LINK | 0.348048 | 1.886900 | 1.273791 | — | — | — |
| system_executor_select.test | LINK | 0.353671 | 1.821165 | 1.409860 | — | — | — |
| this_coro.test | LINK | 0.094519 | 0.212163 | 0.242550 | — | — | — |
| this_coro_select.test | LINK | 0.094214 | 0.212492 | 0.244335 | — | — | — |
| thread_pool.test | RUN | 0.420126 | 3.261857 | 1.640747 | 0.002466 | 0.003170 | 0.002342 |
| thread_pool_select.test | RUN | 0.431768 | 3.389662 | 1.786477 | 0.002305 | 0.003177 | 0.003141 |
| time_traits.test | LINK | 0.212737 | 0.705381 | 0.559677 | — | — | — |
| time_traits_select.test | LINK | 0.218333 | 0.697632 | 0.780511 | — | — | — |
| ts_buffer.test | LINK | 0.208159 | 0.775883 | 0.883705 | — | — | — |
| ts_buffer_select.test | LINK | 0.206571 | 0.773173 | 0.899360 | — | — | — |
| ts_executor.test | LINK | 0.299663 | 1.068152 | 1.369753 | — | — | — |
| ts_executor_select.test | LINK | 0.305345 | 1.118913 | 1.639928 | — | — | — |
| ts_internet.test | LINK | 0.318302 | 1.174352 | 1.694842 | — | — | — |
| ts_internet_select.test | LINK | 0.325277 | 1.181125 | 1.727066 | — | — | — |
| ts_io_context.test | LINK | 0.260068 | 0.916679 | 1.040898 | — | — | — |
| ts_io_context_select.test | LINK | 0.272224 | 0.955459 | 1.307278 | — | — | — |
| ts_net.test | LINK | 0.379536 | 1.409901 | 2.084312 | — | — | — |
| ts_net_select.test | LINK | 0.387669 | 1.417221 | 2.148402 | — | — | — |
| ts_netfwd.test | LINK | 0.384246 | 1.410479 | 2.060477 | — | — | — |
| ts_netfwd_select.test | LINK | 0.388541 | 1.433250 | 2.115057 | — | — | — |
| ts_socket.test | LINK | 0.319164 | 1.098966 | 1.589906 | — | — | — |
| ts_socket_select.test | LINK | 0.322825 | 1.131623 | 1.631797 | — | — | — |
| ts_timer.test | LINK | 0.281755 | 0.986941 | 1.393633 | — | — | — |
| ts_timer_select.test | LINK | 0.283603 | 1.024888 | 1.419373 | — | — | — |
| use_awaitable.test | LINK | 0.093545 | 0.333662 | 0.395202 | — | — | — |
| use_awaitable_select.test | LINK | 0.093235 | 0.338258 | 0.398454 | — | — | — |
| wait_traits.test | LINK | 0.092277 | 0.330403 | 0.391878 | — | — | — |
| wait_traits_select.test | LINK | 0.093302 | 0.328488 | 0.395666 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.095064 | 0.327664 | 0.395148 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.093471 | 0.335767 | 0.387109 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.095120 | 0.331287 | 0.390592 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.094536 | 0.332361 | 0.388975 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.093585 | 0.333283 | 0.392167 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.091718 | 0.331182 | 0.390177 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.092759 | 0.338375 | 0.390393 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.131881 | 0.327545 | 0.385984 | — | — | — |
| windows_object_handle.test | LINK | 0.407340 | 0.913580 | 1.056984 | — | — | — |
| windows_object_handle_select.test | LINK | 0.415564 | 0.966947 | 1.314776 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.414230 | 0.958248 | 1.154457 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.436869 | 1.027715 | 1.417127 | — | — | — |
| windows_random_access_handle.test | LINK | 0.397657 | 0.908575 | 1.043617 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.415514 | 0.967443 | 1.327239 | — | — | — |
| windows_stream_handle.test | LINK | 0.399897 | 0.906713 | 1.061030 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.429651 | 0.973185 | 1.327615 | — | — | — |
| writable_pipe.test | LINK | 0.767462 | 3.993134 | 3.359104 | — | — | — |
| writable_pipe_select.test | LINK | 0.779493 | 4.144033 | 3.583374 | — | — | — |
| write.test | RUN | 2.296393 | 19.953451 | 18.746411 | 0.002350 | 0.002473 | 0.002501 |
| write_select.test | RUN | 2.317484 | 20.185743 | 18.664428 | 0.002458 | 0.002553 | 0.002443 |
| write_at.test | RUN | 2.346713 | 26.929275 | 23.632169 | 0.002631 | 0.002447 | 0.002322 |
| write_at_select.test | RUN | 2.365943 | 26.787123 | 24.041505 | 0.002448 | 0.002475 | 0.002968 |
| any_executor.test | RUN | 0.926643 | 8.911991 | 7.545127 | 0.002599 | 0.002563 | 0.001996 |
| blocking.test | RUN | 2.108419 | 11.866355 | 15.584766 | 0.005288 | 0.005053 | 0.005025 |
| blocking_adaptation.test | RUN | 1.058340 | 5.098241 | 7.131168 | 0.003009 | 0.002869 | 0.003130 |
| context_as.test | RUN | 0.616076 | 3.627358 | 2.376870 | 0.001915 | 0.001797 | 0.001807 |
| executor.test | RUN | 0.166056 | 0.342764 | 0.431202 | 0.001735 | 0.001697 | 0.001939 |
| inline_exception_handling.test | RUN | 2.102943 | 11.031706 | 15.432996 | 0.005090 | 0.003409 | 0.003403 |
| invocable_archetype.test | RUN | 0.150027 | 0.340457 | 0.416192 | 0.001497 | 0.001656 | 0.001588 |
| mapping.test | RUN | 1.919083 | 11.152805 | 15.587669 | 0.003604 | 0.003424 | 0.003460 |
| outstanding_work.test | RUN | 0.963084 | 4.889064 | 6.768672 | 0.003183 | 0.003115 | 0.003198 |
| prefer_only.test | RUN | 0.324136 | 1.861549 | 1.513749 | 0.001772 | 0.001711 | 0.001695 |
| relationship.test | RUN | 0.734633 | 4.111474 | 6.060533 | 0.002138 | 0.002144 | 0.002096 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.002×, 0.998× | 0.998× |
| clang | 1.002× | 1.004×, 1.000× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001713s | 0.001696s | 0.001685s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001683s | 0.001708s | 0.001726s | byte equality observed |
| any_completion_handler.test | 9 | 0.001373s | 0.001351s | 0.001327s | byte equality observed |
| any_completion_handler_select.test | 9 | 0.001376s | 0.001360s | 0.001347s | byte equality observed |
| any_io_executor.test | 4 | 0.001686s | 0.001683s | 0.001749s | byte equality observed |
| any_io_executor_select.test | 3 | 0.001722s | 0.001639s | 0.001707s | byte equality observed |
| append.test | 9 | 0.001300s | 0.001321s | 0.001316s | byte equality observed |
| append_select.test | 7 | 0.001286s | 0.001298s | 0.001291s | byte equality observed |
| as_tuple.test | 7 | 0.001363s | 0.001402s | 0.001403s | byte equality observed |
| as_tuple_select.test | 10 | 0.001302s | 0.001283s | 0.001288s | byte equality observed |
| bind_allocator.test | 1 | 0.001752s | 0.001748s | 0.001714s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001519s | 0.001387s | 0.001439s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001177s | 0.001185s | 0.001183s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001080s | 0.001086s | 0.001099s | byte equality observed |
| bind_executor.test | 1 | 0.001696s | 0.001725s | 0.001763s | byte equality observed |
| bind_executor_select.test | 1 | 0.001861s | 0.001815s | 0.001863s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001157s | 0.001172s | 0.001131s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001149s | 0.001163s | 0.001137s | byte equality observed |
| buffer.test | 10 | 0.001099s | 0.001065s | 0.001074s | byte equality observed |
| buffer_select.test | 10 | 0.001077s | 0.001121s | 0.001073s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001367s | 0.001327s | 0.001342s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001343s | 0.001354s | 0.001299s | byte equality observed |
| buffered_stream.test | 10 | 0.001344s | 0.001402s | 0.001303s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001319s | 0.001339s | 0.001303s | byte equality observed |
| buffered_write_stream.test | 8 | 0.001383s | 0.001322s | 0.001340s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001348s | 0.001305s | 0.001317s | byte equality observed |
| buffers_iterator.test | 10 | 0.001043s | 0.001024s | 0.001043s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000986s | 0.000970s | 0.001004s | byte equality observed |
| cancel_after.test | 1 | 0.003476s | 0.003449s | 0.003448s | byte equality observed |
| cancel_after_select.test | 1 | 0.002854s | 0.002988s | 0.002980s | byte equality observed |
| cancel_at.test | 1 | 0.003521s | 0.003516s | 0.003632s | byte equality observed |
| cancel_at_select.test | 1 | 0.003223s | 0.003335s | 0.003463s | byte equality observed |
| co_composed.test | 10 | 0.001058s | 0.001068s | 0.001060s | byte equality observed |
| co_composed_select.test | 10 | 0.001007s | 0.001003s | 0.001023s | byte equality observed |
| compose.test | 1 | 0.001717s | 0.001739s | 0.001719s | byte equality observed |
| compose_select.test | 1 | 0.001386s | 0.001461s | 0.001490s | byte equality observed |
| composed.test | 1 | 0.001991s | 0.001948s | 0.001997s | byte equality observed |
| composed_select.test | 1 | 0.001591s | 0.001592s | 0.001654s | byte equality observed |
| config.test | 10 | 0.001158s | 0.001125s | 0.001135s | byte equality observed |
| config_select.test | 10 | 0.001159s | 0.001168s | 0.001125s | byte equality observed |
| connect_pipe.test | 8 | 0.001197s | 0.001194s | 0.001158s | byte equality observed |
| connect_pipe_select.test | 9 | 0.001151s | 0.001161s | 0.001134s | byte equality observed |
| consign.test | 10 | 0.001168s | 0.001155s | 0.001198s | byte equality observed |
| consign_select.test | 10 | 0.001058s | 0.001046s | 0.001058s | byte equality observed |
| deadline_timer.test | 1 | 0.002391s | 0.002338s | 0.002391s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002225s | 0.002135s | 0.002243s | byte equality observed |
| deferred.test | 10 | 0.001038s | 0.001029s | 0.001051s | byte equality observed |
| deferred_select.test | 10 | 0.000987s | 0.000949s | 0.000996s | byte equality observed |
| disposition.test | 10 | 0.001040s | 0.000997s | 0.001037s | byte equality observed |
| disposition_select.test | 10 | 0.001027s | 0.000990s | 0.001044s | byte equality observed |
| error.test | 10 | 0.001005s | 0.000971s | 0.001014s | byte equality observed |
| error_select.test | 10 | 0.001006s | 0.000968s | 0.000992s | byte equality observed |
| inline_executor.test | 10 | 0.001016s | 0.000983s | 0.001002s | byte equality observed |
| inline_executor_select.test | 10 | 0.001011s | 0.000963s | 0.001006s | byte equality observed |
| inline_or_executor.test | 10 | 0.001033s | 0.001034s | 0.001014s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001036s | 0.001026s | 0.001029s | byte equality observed |
| io_context.test | 1 | 0.001996s | 0.001973s | 0.002106s | byte equality observed |
| io_context_select.test | 1 | 0.002221s | 0.002184s | 0.002268s | byte equality observed |
| io_context_strand.test | 1 | 0.002290s | 0.002272s | 0.002350s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001945s | 0.001968s | 0.002027s | byte equality observed |
| ip_host_name.test | 10 | 0.001054s | 0.001063s | 0.001048s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000998s | 0.000993s | 0.000990s | byte equality observed |
| ip_icmp.test | 10 | 0.001038s | 0.001032s | 0.000997s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001026s | 0.001039s | 0.001002s | byte equality observed |
| ip_multicast.test | 10 | 0.001107s | 0.001106s | 0.001117s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001075s | 0.001083s | 0.001093s | byte equality observed |
| ip_tcp.test | 10 | 0.001395s | 0.001381s | 0.001358s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001331s | 0.001347s | 0.001321s | byte equality observed |
| ip_udp.test | 10 | 0.001121s | 0.001128s | 0.001102s | byte equality observed |
| ip_udp_select.test | 10 | 0.001104s | 0.001104s | 0.001097s | byte equality observed |
| ip_unicast.test | 10 | 0.001061s | 0.001064s | 0.001041s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001053s | 0.001060s | 0.001040s | byte equality observed |
| ip_v6_only.test | 10 | 0.001073s | 0.001060s | 0.001058s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001057s | 0.001047s | 0.001036s | byte equality observed |
| is_read_buffered.test | 10 | 0.000994s | 0.000988s | 0.000980s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000988s | 0.001051s | 0.000973s | byte equality observed |
| is_write_buffered.test | 10 | 0.000982s | 0.001131s | 0.000976s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000989s | 0.001101s | 0.000972s | byte equality observed |
| prepend.test | 10 | 0.001044s | 0.001154s | 0.001047s | byte equality observed |
| prepend_select.test | 10 | 0.001018s | 0.001139s | 0.001030s | byte equality observed |
| read.test | 10 | 0.001449s | 0.001522s | 0.001409s | byte equality observed |
| read_at.test | 10 | 0.001903s | 0.002032s | 0.001836s | byte equality observed |
| read_at_select.test | 10 | 0.001967s | 0.001973s | 0.001912s | byte equality observed |
| read_select.test | 10 | 0.001598s | 0.001545s | 0.001532s | byte equality observed |
| read_until.test | 10 | 0.001288s | 0.001219s | 0.001258s | byte equality observed |
| read_until_select.test | 10 | 0.001282s | 0.001282s | 0.001262s | byte equality observed |
| recycling_allocator.test | 10 | 0.001046s | 0.001052s | 0.001035s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001081s | 0.001075s | 0.001061s | byte equality observed |
| signal_set.test | 10 | 0.001094s | 0.001042s | 0.001071s | byte equality observed |
| signal_set_select.test | 10 | 0.001101s | 0.001061s | 0.001154s | byte equality observed |
| socket_base.test | 10 | 0.001208s | 0.001182s | 0.001180s | byte equality observed |
| socket_base_select.test | 10 | 0.001167s | 0.001151s | 0.001136s | byte equality observed |
| spawn.test | 10 | 0.001298s | 0.001309s | 0.001312s | byte equality observed |
| spawn_select.test | 10 | 0.001307s | 0.001282s | 0.001274s | byte equality observed |
| static_thread_pool.test | 10 | 0.001097s | 0.001027s | 0.001059s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001003s | 0.001011s | 0.001031s | byte equality observed |
| strand.test | 1 | 0.002025s | 0.002074s | 0.002132s | byte equality observed |
| strand_select.test | 1 | 0.001699s | 0.001710s | 0.001695s | byte equality observed |
| streambuf.test | 10 | 0.001106s | 0.001118s | 0.001107s | byte equality observed |
| streambuf_select.test | 10 | 0.001123s | 0.001115s | 0.001119s | byte equality observed |
| thread_pool.test | 9 | 0.002417s | 0.002477s | 0.002443s | byte equality observed |
| thread_pool_select.test | 9 | 0.002431s | 0.002473s | 0.002398s | byte equality observed |
| write.test | 10 | 0.001635s | 0.001641s | 0.001543s | byte equality observed |
| write_at.test | 10 | 0.001802s | 0.001832s | 0.001739s | byte equality observed |
| write_at_select.test | 10 | 0.001737s | 0.001762s | 0.001740s | byte equality observed |
| write_select.test | 10 | 0.001588s | 0.001519s | 0.001585s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44260407509).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
