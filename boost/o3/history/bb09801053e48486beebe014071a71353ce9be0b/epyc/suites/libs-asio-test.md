# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.771022 | 4.697376 | 4.494740 | 0.002973 | 0.003084 | 0.002732 |
| any_completion_executor_select.test | RUN | 0.796864 | 4.755659 | 4.665342 | 0.003057 | 0.002662 | 0.002807 |
| any_completion_handler.test | RUN | 0.930713 | 4.270656 | 4.051708 | 0.002317 | 0.002232 | 0.002297 |
| any_completion_handler_select.test | RUN | 0.904647 | 4.370472 | 4.486267 | 0.002409 | 0.002464 | 0.002362 |
| any_io_executor.test | RUN | 0.833328 | 5.086903 | 4.934255 | 0.002612 | 0.002779 | 0.002800 |
| any_io_executor_select.test | RUN | 0.848822 | 4.976820 | 5.055548 | 0.003008 | 0.002852 | 0.002990 |
| append.test | RUN | 0.761208 | 4.016586 | 3.710507 | 0.001842 | 0.002270 | 0.002244 |
| append_select.test | RUN | 0.796867 | 4.082597 | 3.681312 | 0.002208 | 0.002286 | 0.002238 |
| as_tuple.test | RUN | 0.989290 | 4.922529 | 4.939635 | 0.002333 | 0.002520 | 0.002479 |
| as_tuple_select.test | RUN | 1.006425 | 4.870680 | 4.997735 | 0.002024 | 0.002282 | 0.002140 |
| associated_allocator.test | LINK | 0.221139 | 0.415004 | 0.606123 | — | — | — |
| associated_allocator_select.test | LINK | 0.220273 | 0.415872 | 0.617835 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.235273 | 0.453404 | 0.658060 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.235785 | 0.454241 | 0.670377 | — | — | — |
| associated_executor.test | LINK | 0.341122 | 0.785565 | 1.055843 | — | — | — |
| associated_executor_select.test | LINK | 0.332023 | 0.792502 | 1.020467 | — | — | — |
| associated_immediate_executor.test | LINK | 0.312810 | 0.733774 | 0.944466 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.306544 | 0.739044 | 0.906445 | — | — | — |
| associator.test | LINK | 0.179250 | 0.356882 | 0.515623 | — | — | — |
| associator_select.test | LINK | 0.174442 | 0.359970 | 0.464275 | — | — | — |
| awaitable.test | LINK | 0.168866 | 0.357932 | 0.451204 | — | — | — |
| awaitable_select.test | LINK | 0.179681 | 0.360996 | 0.493561 | — | — | — |
| basic_datagram_socket.test | LINK | 0.521335 | 1.122033 | 1.827955 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.530447 | 1.172355 | 1.880325 | — | — | — |
| basic_deadline_timer.test | LINK | 0.625575 | 1.306249 | 2.097218 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.628692 | 1.367461 | 2.110354 | — | — | — |
| basic_file.test | LINK | 0.174563 | 0.346027 | 0.487482 | — | — | — |
| basic_file_select.test | LINK | 0.176148 | 0.355687 | 0.482267 | — | — | — |
| basic_random_access_file.test | LINK | 0.177822 | 0.352129 | 0.457596 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.174025 | 0.351114 | 0.485036 | — | — | — |
| basic_raw_socket.test | LINK | 0.518578 | 1.126417 | 1.844069 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.528221 | 1.144716 | 1.884279 | — | — | — |
| basic_readable_pipe.test | LINK | 0.500331 | 1.088443 | 1.609192 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.521623 | 1.151022 | 1.884528 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.518515 | 1.112542 | 1.812101 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.528938 | 1.144900 | 1.881092 | — | — | — |
| basic_signal_set.test | LINK | 0.481363 | 1.062218 | 1.444361 | — | — | — |
| basic_signal_set_select.test | LINK | 0.502018 | 1.102270 | 1.764859 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.522233 | 1.124912 | 1.877766 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.542040 | 1.153602 | 1.913125 | — | — | — |
| basic_stream_file.test | LINK | 0.171518 | 0.352589 | 0.455097 | — | — | — |
| basic_stream_file_select.test | LINK | 0.172839 | 0.361297 | 0.456404 | — | — | — |
| basic_stream_socket.test | LINK | 0.519669 | 1.120844 | 1.819427 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.527696 | 1.132965 | 1.864801 | — | — | — |
| basic_streambuf.test | LINK | 0.263604 | 0.529642 | 0.732420 | — | — | — |
| basic_streambuf_select.test | LINK | 0.269990 | 0.535242 | 0.731352 | — | — | — |
| basic_waitable_timer.test | LINK | 0.482690 | 1.055892 | 1.725260 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.506196 | 1.082230 | 1.729713 | — | — | — |
| basic_writable_pipe.test | LINK | 0.504323 | 1.080899 | 1.604100 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.532793 | 1.154924 | 1.930128 | — | — | — |
| bind_allocator.test | RUN | 0.822649 | 4.094009 | 4.016996 | 0.002553 | 0.002431 | 0.002560 |
| bind_allocator_select.test | RUN | 0.861802 | 4.145568 | 4.014142 | 0.002388 | 0.002428 | 0.002368 |
| bind_cancellation_slot.test | RUN | 0.845207 | 4.125624 | 4.083854 | 0.001877 | 0.001704 | 0.001781 |
| bind_cancellation_slot_select.test | RUN | 0.864274 | 4.192783 | 3.942486 | 0.001686 | 0.001732 | 0.001708 |
| bind_executor.test | RUN | 0.565472 | 2.881551 | 2.450755 | 0.002312 | 0.002838 | 0.002389 |
| bind_executor_select.test | RUN | 0.581830 | 2.957240 | 2.446526 | 0.002201 | 0.002910 | 0.002826 |
| bind_immediate_executor.test | RUN | 0.435151 | 2.438202 | 1.557900 | 0.001698 | 0.001657 | 0.001707 |
| bind_immediate_executor_select.test | RUN | 0.451539 | 2.388118 | 1.774505 | 0.001729 | 0.001669 | 0.001631 |
| buffer.test | RUN | 0.264628 | 0.997394 | 0.971786 | 0.001600 | 0.001640 | 0.001582 |
| buffer_select.test | RUN | 0.264742 | 0.997391 | 0.979930 | 0.001634 | 0.001632 | 0.001560 |
| buffer_registration.test | LINK | 0.220520 | 0.511777 | 0.568895 | — | — | — |
| buffer_registration_select.test | LINK | 0.215169 | 0.512101 | 0.577819 | — | — | — |
| buffered_read_stream.test | RUN | 0.941880 | 6.690329 | 5.929984 | 0.002108 | 0.002574 | 0.002704 |
| buffered_read_stream_select.test | RUN | 0.954334 | 6.650117 | 6.212902 | 0.002061 | 0.002722 | 0.002730 |
| buffered_stream.test | RUN | 1.706689 | 9.777764 | 9.626988 | 0.002707 | 0.002834 | 0.002506 |
| buffered_stream_select.test | RUN | 1.834692 | 9.856500 | 9.327846 | 0.002532 | 0.002794 | 0.002574 |
| buffered_write_stream.test | RUN | 1.613061 | 8.356131 | 8.407698 | 0.002806 | 0.002660 | 0.002438 |
| buffered_write_stream_select.test | RUN | 1.614485 | 8.404103 | 7.969135 | 0.002417 | 0.002581 | 0.002330 |
| buffers_iterator.test | RUN | 0.485655 | 0.805364 | 1.395089 | 0.002336 | 0.002149 | 0.001952 |
| buffers_iterator_select.test | RUN | 0.483512 | 0.819033 | 1.400253 | 0.002206 | 0.002044 | 0.001922 |
| cancel_after.test | RUN | 1.334081 | 6.603070 | 6.348654 | 0.004351 | 0.004537 | 0.004615 |
| cancel_after_select.test | RUN | 1.322924 | 6.545527 | 6.283634 | 0.004061 | 0.004542 | 0.004360 |
| cancel_at.test | RUN | 1.266910 | 5.575212 | 5.450090 | 0.003856 | 0.004075 | 0.003613 |
| cancel_at_select.test | RUN | 1.176960 | 5.475700 | 5.421745 | 0.004029 | 0.003826 | 0.003982 |
| cancellation_signal.test | LINK | 0.153899 | 0.305087 | 0.377184 | — | — | — |
| cancellation_signal_select.test | LINK | 0.154226 | 0.305316 | 0.375512 | — | — | — |
| cancellation_state.test | LINK | 0.216346 | 0.313163 | 0.370229 | — | — | — |
| cancellation_state_select.test | LINK | 0.205941 | 0.308851 | 0.367580 | — | — | — |
| cancellation_type.test | LINK | 0.170103 | 0.243285 | 0.305400 | — | — | — |
| cancellation_type_select.test | LINK | 0.177592 | 0.245476 | 0.353587 | — | — | — |
| co_composed.test | RUN | 0.171509 | 0.244627 | 0.479812 | 0.001912 | 0.001615 | 0.001731 |
| co_composed_select.test | RUN | 0.171539 | 0.246123 | 0.456392 | 0.001724 | 0.001605 | 0.001949 |
| co_spawn.test | LINK | 0.174147 | 0.249462 | 0.480937 | — | — | — |
| co_spawn_select.test | LINK | 0.180127 | 0.243811 | 0.461041 | — | — | — |
| completion_condition.test | LINK | 0.216272 | 0.373813 | 0.631474 | — | — | — |
| completion_condition_select.test | LINK | 0.220663 | 0.475915 | 0.653845 | — | — | — |
| compose.test | RUN | 1.011603 | 5.097831 | 5.084473 | 0.002731 | 0.002509 | 0.002613 |
| compose_select.test | RUN | 1.040584 | 5.041080 | 5.041072 | 0.002645 | 0.002065 | 0.002168 |
| composed.test | RUN | 0.983798 | 5.112471 | 4.911894 | 0.002362 | 0.002218 | 0.002441 |
| composed_select.test | RUN | 0.961455 | 5.011500 | 4.869329 | 0.002147 | 0.002254 | 0.002172 |
| config.test | RUN | 0.494977 | 3.333262 | 2.134254 | 0.002218 | 0.002375 | 0.002182 |
| config_select.test | RUN | 0.545900 | 3.490317 | 2.465745 | 0.002133 | 0.002222 | 0.002194 |
| connect.test | LINK | 1.644544 | 10.689540 | 10.563251 | — | — | — |
| connect_select.test | LINK | 1.665081 | 10.672676 | 10.516498 | — | — | — |
| connect_pipe.test | RUN | 0.884438 | 4.085844 | 3.883231 | 0.002094 | 0.002296 | 0.002274 |
| connect_pipe_select.test | RUN | 0.916270 | 4.228273 | 4.215861 | 0.002074 | 0.002310 | 0.002132 |
| consign.test | RUN | 0.748686 | 3.942872 | 3.568485 | 0.002234 | 0.002298 | 0.002237 |
| consign_select.test | RUN | 0.771457 | 4.037172 | 3.482338 | 0.002247 | 0.002364 | 0.002162 |
| coroutine.test | LINK | 0.177263 | 0.426211 | 0.533255 | — | — | — |
| coroutine_select.test | LINK | 0.188950 | 0.426768 | 0.519418 | — | — | — |
| deadline_timer.test | RUN | 1.117302 | 5.203338 | 5.136957 | 0.003587 | 0.003826 | 0.003664 |
| deadline_timer_select.test | RUN | 1.127058 | 5.161602 | 5.127263 | 0.003704 | 0.003828 | 0.003913 |
| deferred.test | RUN | 0.201768 | 0.404897 | 0.554055 | 0.002168 | 0.002214 | 0.002092 |
| deferred_select.test | RUN | 0.201819 | 0.401814 | 0.547314 | 0.002094 | 0.002210 | 0.002097 |
| detached.test | LINK | 0.218321 | 0.435336 | 0.564517 | — | — | — |
| detached_select.test | LINK | 0.219036 | 0.452932 | 0.562300 | — | — | — |
| disposition.test | RUN | 0.207025 | 1.015895 | 1.043147 | 0.001744 | 0.002239 | 0.002248 |
| disposition_select.test | RUN | 0.201794 | 1.013374 | 1.030926 | 0.001675 | 0.002284 | 0.002260 |
| error.test | RUN | 0.187455 | 0.972069 | 0.929502 | 0.001668 | 0.002147 | 0.001923 |
| error_select.test | RUN | 0.190476 | 0.968071 | 0.944129 | 0.001650 | 0.002202 | 0.002109 |
| file_base.test | LINK | 0.231428 | 0.805072 | 1.000929 | — | — | — |
| file_base_select.test | LINK | 0.234475 | 0.766325 | 0.833850 | — | — | — |
| fwd_first.test | LINK | 0.527500 | 1.156472 | 1.776125 | — | — | — |
| fwd_last.test | LINK | 0.525695 | 1.159890 | 1.773815 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.206220 | 0.483608 | 0.654595 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.202212 | 0.484420 | 0.644877 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.826983 | 4.147974 | 3.480359 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.817202 | 4.314352 | 3.439600 | — | — | — |
| generic_raw_protocol.test | LINK | 0.818090 | 4.158571 | 3.491792 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.822414 | 4.318622 | 3.440875 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.707218 | 3.523823 | 2.981807 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.713941 | 3.611962 | 2.966614 | — | — | — |
| generic_stream_protocol.test | LINK | 0.752393 | 3.807798 | 3.223590 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.770889 | 3.909673 | 3.182182 | — | — | — |
| high_resolution_timer.test | LINK | 0.333530 | 0.724612 | 1.013954 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.350081 | 0.736923 | 1.031793 | — | — | — |
| immediate.test | LINK | 0.239089 | 0.548981 | 0.616275 | — | — | — |
| immediate_select.test | LINK | 0.236847 | 0.542156 | 0.619463 | — | — | — |
| inline_executor.test | RUN | 0.283063 | 0.846732 | 0.925502 | 0.001677 | 0.001770 | 0.001660 |
| inline_executor_select.test | RUN | 0.287276 | 0.841784 | 0.923409 | 0.001693 | 0.001740 | 0.001617 |
| inline_or_executor.test | RUN | 0.449443 | 2.479788 | 1.775684 | 0.001683 | 0.001718 | 0.001628 |
| inline_or_executor_select.test | RUN | 0.469346 | 2.532205 | 1.921681 | 0.001692 | 0.001756 | 0.001599 |
| io_context.test | RUN | 0.652977 | 3.761345 | 3.072554 | 0.002779 | 0.002850 | 0.002697 |
| io_context_select.test | RUN | 0.662649 | 3.692288 | 3.039320 | 0.002582 | 0.002674 | 0.002460 |
| io_context_strand.test | RUN | 0.624564 | 3.849910 | 3.509552 | 0.002557 | 0.003134 | 0.003108 |
| io_context_strand_select.test | RUN | 0.627635 | 4.057044 | 3.668850 | 0.002548 | 0.002532 | 0.002618 |
| ip_address.test | LINK | 0.238957 | 1.125890 | 1.352556 | — | — | — |
| ip_address_select.test | LINK | 0.239914 | 1.096870 | 1.337094 | — | — | — |
| ip_address_v4.test | LINK | 0.246781 | 1.193497 | 1.254178 | — | — | — |
| ip_address_v4_select.test | LINK | 0.247824 | 1.166879 | 1.314219 | — | — | — |
| ip_address_v6.test | LINK | 0.273275 | 1.163545 | 1.056395 | — | — | — |
| ip_address_v6_select.test | LINK | 0.276128 | 1.034274 | 1.046034 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.211313 | 0.506548 | 0.686253 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.212995 | 0.512608 | 0.674385 | — | — | — |
| ip_basic_resolver.test | LINK | 0.339211 | 0.729435 | 1.006468 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.348168 | 0.749785 | 1.049027 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.118956 | 0.240867 | 0.297393 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.118277 | 0.240880 | 0.296202 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.214737 | 0.497836 | 0.662933 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.217137 | 0.494247 | 0.657559 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.203266 | 0.481992 | 0.639548 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.202431 | 0.477481 | 0.638874 | — | — | — |
| ip_host_name.test | RUN | 0.217262 | 0.637665 | 0.724319 | 0.001806 | 0.001673 | 0.001572 |
| ip_host_name_select.test | RUN | 0.221895 | 0.640453 | 0.716792 | 0.001775 | 0.001667 | 0.001598 |
| ip_icmp.test | RUN | 1.006811 | 7.353299 | 6.699148 | 0.001708 | 0.002246 | 0.002098 |
| ip_icmp_select.test | RUN | 1.013488 | 7.706532 | 6.510164 | 0.001688 | 0.002158 | 0.002014 |
| ip_multicast.test | RUN | 0.588305 | 4.346470 | 4.282476 | 0.001873 | 0.002372 | 0.001854 |
| ip_multicast_select.test | RUN | 0.627984 | 4.322316 | 4.200649 | 0.001836 | 0.001974 | 0.002429 |
| ip_resolver_query_base.test | LINK | 0.140252 | 0.411482 | 0.494667 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.139524 | 0.392214 | 0.501628 | — | — | — |
| ip_tcp.test | RUN | 1.505194 | 12.611518 | 11.386450 | 0.002356 | 0.003262 | 0.002874 |
| ip_tcp_select.test | RUN | 1.499892 | 13.065774 | 11.034073 | 0.002346 | 0.002991 | 0.003130 |
| ip_udp.test | RUN | 1.091429 | 8.994275 | 7.820604 | 0.002368 | 0.002460 | 0.002445 |
| ip_udp_select.test | RUN | 1.233853 | 9.217247 | 7.657685 | 0.002412 | 0.002478 | 0.001939 |
| ip_unicast.test | RUN | 0.804930 | 3.889205 | 3.661258 | 0.002332 | 0.002463 | 0.002272 |
| ip_unicast_select.test | RUN | 0.830408 | 3.999800 | 3.603429 | 0.001931 | 0.002527 | 0.002300 |
| ip_v6_only.test | RUN | 0.812637 | 4.109312 | 3.829909 | 0.002305 | 0.002278 | 0.002346 |
| ip_v6_only_select.test | RUN | 0.848159 | 4.157908 | 3.831481 | 0.002140 | 0.002334 | 0.002274 |
| is_read_buffered.test | RUN | 0.569595 | 1.309541 | 2.148935 | 0.001820 | 0.002268 | 0.002083 |
| is_read_buffered_select.test | RUN | 0.601850 | 1.325439 | 2.207056 | 0.002058 | 0.002246 | 0.002034 |
| is_write_buffered.test | RUN | 0.593128 | 1.270573 | 2.155197 | 0.002122 | 0.002249 | 0.002027 |
| is_write_buffered_select.test | RUN | 0.594740 | 1.327755 | 2.143477 | 0.002180 | 0.002136 | 0.002146 |
| local_basic_endpoint.test | LINK | 0.300785 | 0.699034 | 1.098792 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.306014 | 0.702945 | 1.087212 | — | — | — |
| local_connect_pair.test | LINK | 0.772782 | 4.031683 | 3.622558 | — | — | — |
| local_connect_pair_select.test | LINK | 0.774391 | 3.989084 | 3.560777 | — | — | — |
| local_datagram_protocol.test | LINK | 1.024702 | 5.235156 | 4.936744 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.071457 | 5.331562 | 4.927291 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.044560 | 5.129808 | 4.890940 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.053452 | 5.210118 | 4.887439 | — | — | — |
| local_stream_protocol.test | LINK | 0.987072 | 4.932296 | 4.649253 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.987458 | 4.954102 | 4.605602 | — | — | — |
| placeholders.test | LINK | 0.189855 | 0.402884 | 0.515413 | — | — | — |
| placeholders_select.test | LINK | 0.195125 | 0.396222 | 0.524841 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.509063 | 1.079837 | 1.546331 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.524619 | 1.139011 | 1.924953 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.502937 | 1.099111 | 1.576646 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.550756 | 1.139249 | 1.943355 | — | — | — |
| posix_descriptor_base.test | LINK | 0.212234 | 0.423392 | 0.540926 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.213082 | 0.409835 | 0.537790 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.011088 | 4.970943 | 4.643472 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.034857 | 5.027950 | 4.738584 | — | — | — |
| prepend.test | RUN | 0.766523 | 4.061379 | 3.717893 | 0.001992 | 0.002271 | 0.002006 |
| prepend_select.test | RUN | 0.781032 | 4.164281 | 3.675894 | 0.002008 | 0.001929 | 0.001848 |
| random_access_file.test | LINK | 0.451139 | 0.974205 | 1.304893 | — | — | — |
| random_access_file_select.test | LINK | 0.468230 | 1.052049 | 1.613544 | — | — | — |
| read.test | RUN | 2.400250 | 24.573435 | 20.591423 | 0.003115 | 0.002983 | 0.002903 |
| read_select.test | RUN | 2.422402 | 24.468907 | 20.850402 | 0.003067 | 0.003081 | 0.002852 |
| read_at.test | RUN | 2.400213 | 33.392319 | 27.841721 | 0.003709 | 0.003267 | 0.003110 |
| read_at_select.test | RUN | 2.421573 | 33.079189 | 28.333037 | 0.003709 | 0.003499 | 0.003363 |
| read_until.test | RUN | 1.263401 | 9.574635 | 8.076841 | 0.002422 | 0.002390 | 0.002364 |
| read_until_select.test | RUN | 1.283572 | 9.624594 | 8.242293 | 0.002332 | 0.002592 | 0.002500 |
| readable_pipe.test | LINK | 0.806223 | 4.047694 | 3.650918 | — | — | — |
| readable_pipe_select.test | LINK | 0.823785 | 4.238120 | 3.837593 | — | — | — |
| recycling_allocator.test | RUN | 0.248169 | 0.623202 | 0.799302 | 0.001970 | 0.002122 | 0.002112 |
| recycling_allocator_select.test | RUN | 0.251822 | 0.623118 | 0.744638 | 0.001949 | 0.002154 | 0.002014 |
| redirect_disposition.test | LINK | 1.043433 | 5.688195 | 5.575922 | — | — | — |
| redirect_disposition_select.test | LINK | 1.040419 | 5.655185 | 5.589432 | — | — | — |
| redirect_error.test | LINK | 0.925528 | 4.659925 | 4.863320 | — | — | — |
| redirect_error_select.test | LINK | 0.941455 | 4.641083 | 4.781985 | — | — | — |
| registered_buffer.test | LINK | 0.241705 | 0.514510 | 0.736957 | — | — | — |
| registered_buffer_select.test | LINK | 0.246439 | 0.508629 | 0.691923 | — | — | — |
| signal_set.test | RUN | 0.779479 | 3.940919 | 3.370110 | 0.002190 | 0.002292 | 0.002120 |
| signal_set_select.test | RUN | 0.798546 | 4.096474 | 3.745597 | 0.002001 | 0.002134 | 0.002222 |
| signal_set_base.test | LINK | 0.202813 | 0.413834 | 0.526341 | — | — | — |
| signal_set_base_select.test | LINK | 0.208539 | 0.415917 | 0.531534 | — | — | — |
| socket_base.test | RUN | 0.951095 | 5.841516 | 5.139688 | 0.002416 | 0.002521 | 0.002476 |
| socket_base_select.test | RUN | 0.967410 | 5.734405 | 5.145045 | 0.002236 | 0.002394 | 0.002177 |
| spawn.test | RUN | 1.596488 | 9.453923 | 8.732736 | 0.002655 | 0.002408 | 0.002424 |
| spawn_select.test | RUN | 1.625822 | 9.448139 | 8.741280 | 0.002334 | 0.002703 | 0.001926 |
| static_thread_pool.test | RUN | 0.446649 | 0.936234 | 1.228595 | 0.002094 | 0.002117 | 0.002204 |
| static_thread_pool_select.test | RUN | 0.464979 | 1.017699 | 1.612533 | 0.001940 | 0.002228 | 0.002223 |
| steady_timer.test | LINK | 0.501662 | 1.060600 | 1.697443 | — | — | — |
| steady_timer_select.test | LINK | 0.503701 | 1.086836 | 1.758402 | — | — | — |
| strand.test | RUN | 1.007173 | 5.360481 | 5.366420 | 0.002965 | 0.003129 | 0.003172 |
| strand_select.test | RUN | 1.019973 | 5.308171 | 5.300718 | 0.002794 | 0.003242 | 0.002349 |
| stream_file.test | LINK | 0.477556 | 0.984144 | 1.208308 | — | — | — |
| stream_file_select.test | LINK | 0.491776 | 1.037111 | 1.588737 | — | — | — |
| streambuf.test | RUN | 0.269612 | 0.783212 | 0.913610 | 0.001624 | 0.001654 | 0.002168 |
| streambuf_select.test | RUN | 0.263726 | 0.793520 | 0.904497 | 0.001576 | 0.001594 | 0.001688 |
| system_timer.test | LINK | 0.655857 | 3.541929 | 3.348213 | — | — | — |
| system_timer_select.test | LINK | 0.668934 | 3.463900 | 2.950675 | — | — | — |
| system_context.test | LINK | 0.303282 | 0.641182 | 0.747149 | — | — | — |
| system_context_select.test | LINK | 0.313384 | 0.685111 | 0.922956 | — | — | — |
| system_executor.test | LINK | 0.395425 | 2.003714 | 1.418494 | — | — | — |
| system_executor_select.test | LINK | 0.405499 | 1.953665 | 1.586255 | — | — | — |
| this_coro.test | LINK | 0.121416 | 0.245271 | 0.300429 | — | — | — |
| this_coro_select.test | LINK | 0.120792 | 0.244768 | 0.292452 | — | — | — |
| thread_pool.test | RUN | 0.469184 | 3.186028 | 1.855800 | 0.003279 | 0.003798 | 0.003264 |
| thread_pool_select.test | RUN | 0.482350 | 3.440456 | 2.199991 | 0.003229 | 0.004234 | 0.003724 |
| time_traits.test | LINK | 0.264936 | 0.780916 | 0.978129 | — | — | — |
| time_traits_select.test | LINK | 0.274414 | 0.767949 | 1.055133 | — | — | — |
| ts_buffer.test | LINK | 0.254516 | 0.840595 | 1.079313 | — | — | — |
| ts_buffer_select.test | LINK | 0.257182 | 0.816945 | 1.052728 | — | — | — |
| ts_executor.test | LINK | 0.350912 | 1.158331 | 1.648427 | — | — | — |
| ts_executor_select.test | LINK | 0.365968 | 1.213370 | 2.044554 | — | — | — |
| ts_internet.test | LINK | 0.385204 | 1.238713 | 2.116166 | — | — | — |
| ts_internet_select.test | LINK | 0.393174 | 1.287614 | 2.121664 | — | — | — |
| ts_io_context.test | LINK | 0.309398 | 0.942445 | 1.266846 | — | — | — |
| ts_io_context_select.test | LINK | 0.322335 | 1.036068 | 1.635392 | — | — | — |
| ts_net.test | LINK | 0.458958 | 1.504098 | 2.545567 | — | — | — |
| ts_net_select.test | LINK | 0.465616 | 1.546513 | 2.608277 | — | — | — |
| ts_netfwd.test | LINK | 0.461625 | 1.488272 | 2.570037 | — | — | — |
| ts_netfwd_select.test | LINK | 0.460325 | 1.565266 | 2.586323 | — | — | — |
| ts_socket.test | LINK | 0.384028 | 1.198456 | 1.974289 | — | — | — |
| ts_socket_select.test | LINK | 0.388535 | 1.187134 | 2.035757 | — | — | — |
| ts_timer.test | LINK | 0.333025 | 1.045193 | 1.711632 | — | — | — |
| ts_timer_select.test | LINK | 0.346151 | 1.076623 | 1.701649 | — | — | — |
| use_awaitable.test | LINK | 0.123187 | 0.370298 | 0.476802 | — | — | — |
| use_awaitable_select.test | LINK | 0.171774 | 0.357241 | 0.506267 | — | — | — |
| wait_traits.test | LINK | 0.174871 | 0.366239 | 0.470030 | — | — | — |
| wait_traits_select.test | LINK | 0.171304 | 0.368613 | 0.477395 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.178559 | 0.353404 | 0.457040 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.175140 | 0.365623 | 0.470277 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.172855 | 0.345784 | 0.471974 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.175482 | 0.357667 | 0.460745 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.176529 | 0.355520 | 0.458533 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.177543 | 0.362243 | 0.471707 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.173278 | 0.354651 | 0.474347 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.174886 | 0.361848 | 0.457603 | — | — | — |
| windows_object_handle.test | LINK | 0.456533 | 0.960945 | 1.251578 | — | — | — |
| windows_object_handle_select.test | LINK | 0.487098 | 1.025827 | 1.615809 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.485450 | 1.023525 | 1.433229 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.495049 | 1.086573 | 1.755180 | — | — | — |
| windows_random_access_handle.test | LINK | 0.464467 | 0.953681 | 1.268574 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.478758 | 1.016120 | 1.609622 | — | — | — |
| windows_stream_handle.test | LINK | 0.455282 | 0.962057 | 1.301180 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.476688 | 1.029436 | 1.632217 | — | — | — |
| writable_pipe.test | LINK | 0.835413 | 3.996870 | 3.812859 | — | — | — |
| writable_pipe_select.test | LINK | 0.860075 | 4.177768 | 4.033732 | — | — | — |
| write.test | RUN | 2.404865 | 20.270242 | 20.441953 | 0.002952 | 0.003083 | 0.003106 |
| write_select.test | RUN | 2.412797 | 20.367160 | 20.620360 | 0.003027 | 0.003249 | 0.003067 |
| write_at.test | RUN | 2.469297 | 27.727343 | 26.107940 | 0.003373 | 0.003358 | 0.003229 |
| write_at_select.test | RUN | 2.500127 | 27.895505 | 26.425850 | 0.003409 | 0.003297 | 0.003244 |
| any_executor.test | RUN | 1.018429 | 9.387331 | 8.637555 | 0.002740 | 0.003223 | 0.002972 |
| blocking.test | RUN | 2.466182 | 11.783896 | 17.561641 | 0.009266 | 0.008622 | 0.008641 |
| blocking_adaptation.test | RUN | 1.204260 | 5.130479 | 7.944386 | 0.004618 | 0.005325 | 0.004154 |
| context_as.test | RUN | 0.665280 | 3.603873 | 2.618492 | 0.002251 | 0.002430 | 0.002345 |
| executor.test | RUN | 0.193996 | 0.366878 | 0.509922 | 0.002152 | 0.002232 | 0.002110 |
| inline_exception_handling.test | RUN | 2.436434 | 10.655158 | 17.537090 | 0.009045 | 0.006434 | 0.006409 |
| invocable_archetype.test | RUN | 0.171726 | 0.375661 | 0.503139 | 0.002034 | 0.002138 | 0.002082 |
| mapping.test | RUN | 2.299589 | 11.511272 | 16.719629 | 0.007103 | 0.006689 | 0.006696 |
| outstanding_work.test | RUN | 1.184883 | 4.799023 | 7.804606 | 0.005137 | 0.005118 | 0.005276 |
| prefer_only.test | RUN | 0.352589 | 1.976689 | 1.764961 | 0.002146 | 0.002015 | 0.002186 |
| relationship.test | RUN | 1.022679 | 4.853994 | 6.843493 | 0.003717 | 0.005103 | 0.003660 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.998×, 0.996× | 0.995× |
| clang | 0.986× | 0.990×, 0.983× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.002053s | 0.002087s | 0.002009s | byte equality observed |
| any_completion_executor_select.test | 5 | 0.002030s | 0.002003s | 0.002021s | byte equality observed |
| any_completion_handler.test | 10 | 0.001629s | 0.001592s | 0.001611s | byte equality observed |
| any_completion_handler_select.test | 8 | 0.001622s | 0.001616s | 0.001593s | byte equality observed |
| any_io_executor.test | 3 | 0.002012s | 0.002012s | 0.002033s | byte equality observed |
| any_io_executor_select.test | 4 | 0.002018s | 0.002014s | 0.002046s | byte equality observed |
| append.test | 10 | 0.001558s | 0.001522s | 0.001524s | byte equality observed |
| append_select.test | 10 | 0.001550s | 0.001508s | 0.001491s | byte equality observed |
| as_tuple.test | 9 | 0.001663s | 0.001654s | 0.001625s | byte equality observed |
| as_tuple_select.test | 8 | 0.001592s | 0.001523s | 0.001559s | byte equality observed |
| bind_allocator.test | 1 | 0.002015s | 0.002059s | 0.001942s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001776s | 0.001613s | 0.001735s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001451s | 0.001433s | 0.001472s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001350s | 0.001331s | 0.001339s | byte equality observed |
| bind_executor.test | 1 | 0.001992s | 0.001955s | 0.001988s | byte equality observed |
| bind_executor_select.test | 1 | 0.002275s | 0.002264s | 0.002246s | byte equality observed |
| bind_immediate_executor.test | 9 | 0.001411s | 0.001393s | 0.001382s | byte equality observed |
| bind_immediate_executor_select.test | 8 | 0.001397s | 0.001416s | 0.001398s | byte equality observed |
| buffer.test | 10 | 0.001329s | 0.001326s | 0.001370s | byte equality observed |
| buffer_select.test | 10 | 0.001340s | 0.001345s | 0.001298s | byte equality observed |
| buffered_read_stream.test | 9 | 0.001714s | 0.001716s | 0.001732s | byte equality observed |
| buffered_read_stream_select.test | 8 | 0.001706s | 0.001691s | 0.001652s | byte equality observed |
| buffered_stream.test | 10 | 0.001683s | 0.001716s | 0.001722s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001689s | 0.001695s | 0.001642s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001721s | 0.001707s | 0.001703s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001664s | 0.001698s | 0.001705s | byte equality observed |
| buffers_iterator.test | 10 | 0.001325s | 0.001301s | 0.001286s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001325s | 0.001297s | 0.001319s | byte equality observed |
| cancel_after.test | 1 | 0.003882s | 0.003746s | 0.003772s | byte equality observed |
| cancel_after_select.test | 1 | 0.003247s | 0.003206s | 0.003230s | byte equality observed |
| cancel_at.test | 1 | 0.004044s | 0.003950s | 0.003958s | byte equality observed |
| cancel_at_select.test | 1 | 0.003811s | 0.003921s | 0.003882s | byte equality observed |
| co_composed.test | 10 | 0.001334s | 0.001369s | 0.001351s | byte equality observed |
| co_composed_select.test | 10 | 0.001297s | 0.001276s | 0.001292s | byte equality observed |
| compose.test | 1 | 0.002144s | 0.002038s | 0.002057s | byte equality observed |
| compose_select.test | 1 | 0.001738s | 0.001675s | 0.001702s | byte equality observed |
| composed.test | 1 | 0.002347s | 0.002318s | 0.002364s | byte equality observed |
| composed_select.test | 1 | 0.001798s | 0.001802s | 0.001772s | byte equality observed |
| config.test | 10 | 0.001448s | 0.001480s | 0.001404s | byte equality observed |
| config_select.test | 10 | 0.001393s | 0.001405s | 0.001360s | byte equality observed |
| connect_pipe.test | 10 | 0.001461s | 0.001429s | 0.001403s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001419s | 0.001409s | 0.001423s | byte equality observed |
| consign.test | 10 | 0.001424s | 0.001412s | 0.001433s | byte equality observed |
| consign_select.test | 10 | 0.001397s | 0.001339s | 0.001384s | byte equality observed |
| deadline_timer.test | 1 | 0.002845s | 0.002780s | 0.002876s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002579s | 0.002593s | 0.002546s | byte equality observed |
| deferred.test | 10 | 0.001247s | 0.001268s | 0.001271s | byte equality observed |
| deferred_select.test | 10 | 0.001216s | 0.001214s | 0.001225s | byte equality observed |
| disposition.test | 10 | 0.001298s | 0.001295s | 0.001293s | byte equality observed |
| disposition_select.test | 10 | 0.001293s | 0.001293s | 0.001287s | byte equality observed |
| error.test | 10 | 0.001244s | 0.001266s | 0.001252s | byte equality observed |
| error_select.test | 10 | 0.001243s | 0.001259s | 0.001257s | byte equality observed |
| inline_executor.test | 10 | 0.001271s | 0.001261s | 0.001275s | byte equality observed |
| inline_executor_select.test | 10 | 0.001275s | 0.001275s | 0.001280s | byte equality observed |
| inline_or_executor.test | 10 | 0.001279s | 0.001268s | 0.001260s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001278s | 0.001273s | 0.001257s | byte equality observed |
| io_context.test | 1 | 0.002307s | 0.002266s | 0.002263s | byte equality observed |
| io_context_select.test | 1 | 0.002639s | 0.002594s | 0.002613s | byte equality observed |
| io_context_strand.test | 1 | 0.002627s | 0.002623s | 0.002677s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002368s | 0.002345s | 0.002391s | byte equality observed |
| ip_host_name.test | 10 | 0.001275s | 0.001264s | 0.001263s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001235s | 0.001231s | 0.001211s | byte equality observed |
| ip_icmp.test | 10 | 0.001272s | 0.001268s | 0.001251s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001264s | 0.001264s | 0.001249s | byte equality observed |
| ip_multicast.test | 10 | 0.001369s | 0.001349s | 0.001356s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001337s | 0.001324s | 0.001336s | byte equality observed |
| ip_tcp.test | 10 | 0.001859s | 0.001829s | 0.001873s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001779s | 0.001760s | 0.001778s | byte equality observed |
| ip_udp.test | 10 | 0.001388s | 0.001363s | 0.001370s | byte equality observed |
| ip_udp_select.test | 10 | 0.001370s | 0.001352s | 0.001365s | byte equality observed |
| ip_unicast.test | 10 | 0.001337s | 0.001309s | 0.001332s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001319s | 0.001289s | 0.001298s | byte equality observed |
| ip_v6_only.test | 10 | 0.001328s | 0.001318s | 0.001322s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001306s | 0.001384s | 0.001299s | byte equality observed |
| is_read_buffered.test | 10 | 0.001227s | 0.001284s | 0.001210s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001232s | 0.001329s | 0.001211s | byte equality observed |
| is_write_buffered.test | 10 | 0.001229s | 0.001301s | 0.001209s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001229s | 0.001342s | 0.001207s | byte equality observed |
| prepend.test | 10 | 0.001317s | 0.001411s | 0.001293s | byte equality observed |
| prepend_select.test | 10 | 0.001352s | 0.001366s | 0.001266s | byte equality observed |
| read.test | 10 | 0.001875s | 0.001906s | 0.001782s | byte equality observed |
| read_at.test | 8 | 0.002333s | 0.002350s | 0.002173s | byte equality observed |
| read_at_select.test | 9 | 0.002371s | 0.002349s | 0.002142s | byte equality observed |
| read_select.test | 10 | 0.001908s | 0.001855s | 0.001859s | byte equality observed |
| read_until.test | 10 | 0.001586s | 0.001515s | 0.001577s | byte equality observed |
| read_until_select.test | 10 | 0.001560s | 0.001520s | 0.001545s | byte equality observed |
| recycling_allocator.test | 10 | 0.001324s | 0.001320s | 0.001303s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001304s | 0.001321s | 0.001314s | byte equality observed |
| signal_set.test | 10 | 0.001340s | 0.001318s | 0.001316s | byte equality observed |
| signal_set_select.test | 10 | 0.001346s | 0.001333s | 0.001314s | byte equality observed |
| socket_base.test | 10 | 0.001468s | 0.001499s | 0.001468s | byte equality observed |
| socket_base_select.test | 10 | 0.001457s | 0.001497s | 0.001448s | byte equality observed |
| spawn.test | 10 | 0.001605s | 0.001628s | 0.001599s | byte equality observed |
| spawn_select.test | 10 | 0.001586s | 0.001556s | 0.001587s | byte equality observed |
| static_thread_pool.test | 10 | 0.001311s | 0.001325s | 0.001314s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001246s | 0.001298s | 0.001252s | byte equality observed |
| strand.test | 1 | 0.002365s | 0.002419s | 0.002313s | byte equality observed |
| strand_select.test | 1 | 0.002027s | 0.002012s | 0.002000s | byte equality observed |
| streambuf.test | 10 | 0.001330s | 0.001360s | 0.001306s | byte equality observed |
| streambuf_select.test | 10 | 0.001331s | 0.001319s | 0.001313s | byte equality observed |
| thread_pool.test | 8 | 0.002805s | 0.002786s | 0.002832s | byte equality observed |
| thread_pool_select.test | 8 | 0.002807s | 0.002805s | 0.002806s | byte equality observed |
| write.test | 10 | 0.001943s | 0.001899s | 0.001912s | byte equality observed |
| write_at.test | 10 | 0.002103s | 0.002097s | 0.002025s | byte equality observed |
| write_at_select.test | 10 | 0.002117s | 0.002052s | 0.002032s | byte equality observed |
| write_select.test | 10 | 0.001923s | 0.001930s | 0.001924s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43701438216).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
