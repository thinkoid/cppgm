# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.668124 | 3.822797 | 3.590750 | 0.002506 | 0.002320 | 0.002558 |
| any_completion_executor_select.test | RUN | 0.712184 | 3.843201 | 3.820281 | 0.002449 | 0.002423 | 0.002552 |
| any_completion_handler.test | RUN | 0.735036 | 3.494972 | 3.412080 | 0.002033 | 0.001907 | 0.002145 |
| any_completion_handler_select.test | RUN | 0.767858 | 3.593364 | 3.723434 | 0.001880 | 0.001638 | 0.002185 |
| any_io_executor.test | RUN | 0.708727 | 4.155476 | 3.967291 | 0.002400 | 0.002856 | 0.002598 |
| any_io_executor_select.test | RUN | 0.694416 | 4.009788 | 4.215110 | 0.002302 | 0.002431 | 0.002280 |
| append.test | RUN | 0.627008 | 3.264559 | 2.987732 | 0.001734 | 0.001952 | 0.002042 |
| append_select.test | RUN | 0.631026 | 3.350593 | 3.008946 | 0.001980 | 0.001962 | 0.002056 |
| as_tuple.test | RUN | 0.789559 | 3.896112 | 4.277080 | 0.002000 | 0.002210 | 0.002117 |
| as_tuple_select.test | RUN | 0.812396 | 3.884141 | 4.270171 | 0.001684 | 0.001923 | 0.001764 |
| associated_allocator.test | LINK | 0.180027 | 0.338120 | 0.455494 | — | — | — |
| associated_allocator_select.test | LINK | 0.175732 | 0.342311 | 0.471617 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.194924 | 0.368195 | 0.505245 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.187953 | 0.373359 | 0.508788 | — | — | — |
| associated_executor.test | LINK | 0.270432 | 0.623469 | 0.822617 | — | — | — |
| associated_executor_select.test | LINK | 0.268981 | 0.627326 | 0.824818 | — | — | — |
| associated_immediate_executor.test | LINK | 0.247048 | 0.581286 | 0.765464 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.248825 | 0.586481 | 0.722210 | — | — | — |
| associator.test | LINK | 0.139917 | 0.278557 | 0.403905 | — | — | — |
| associator_select.test | LINK | 0.138367 | 0.286529 | 0.400630 | — | — | — |
| awaitable.test | LINK | 0.138973 | 0.287397 | 0.385751 | — | — | — |
| awaitable_select.test | LINK | 0.140053 | 0.275741 | 0.384116 | — | — | — |
| basic_datagram_socket.test | LINK | 0.429801 | 0.878330 | 1.499533 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.433602 | 0.913007 | 1.537479 | — | — | — |
| basic_deadline_timer.test | LINK | 0.505081 | 1.040443 | 1.694881 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.509342 | 1.089339 | 1.741136 | — | — | — |
| basic_file.test | LINK | 0.140491 | 0.292927 | 0.377840 | — | — | — |
| basic_file_select.test | LINK | 0.141670 | 0.295022 | 0.379796 | — | — | — |
| basic_random_access_file.test | LINK | 0.143712 | 0.273092 | 0.369951 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.141347 | 0.273066 | 0.384657 | — | — | — |
| basic_raw_socket.test | LINK | 0.432655 | 0.890398 | 1.466936 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.434000 | 0.909315 | 1.516184 | — | — | — |
| basic_readable_pipe.test | LINK | 0.431603 | 0.856079 | 1.303795 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.426892 | 0.898416 | 1.519555 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.418058 | 0.892457 | 1.464634 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.431394 | 0.924378 | 1.501560 | — | — | — |
| basic_signal_set.test | LINK | 0.400804 | 0.827975 | 1.182954 | — | — | — |
| basic_signal_set_select.test | LINK | 0.414215 | 0.891220 | 1.453008 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.418193 | 0.882063 | 1.474298 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.447303 | 0.906803 | 1.495701 | — | — | — |
| basic_stream_file.test | LINK | 0.139659 | 0.292895 | 0.406858 | — | — | — |
| basic_stream_file_select.test | LINK | 0.138719 | 0.295439 | 0.409896 | — | — | — |
| basic_stream_socket.test | LINK | 0.419485 | 0.879069 | 1.494965 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.453047 | 0.895108 | 1.512917 | — | — | — |
| basic_streambuf.test | LINK | 0.214118 | 0.418934 | 0.591195 | — | — | — |
| basic_streambuf_select.test | LINK | 0.228972 | 0.423766 | 0.603239 | — | — | — |
| basic_waitable_timer.test | LINK | 0.403288 | 0.833205 | 1.375500 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.406080 | 0.863147 | 1.406112 | — | — | — |
| basic_writable_pipe.test | LINK | 0.410381 | 0.871171 | 1.283421 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.424581 | 0.908035 | 1.547310 | — | — | — |
| bind_allocator.test | RUN | 0.656075 | 3.264745 | 3.279692 | 0.002282 | 0.002194 | 0.002354 |
| bind_allocator_select.test | RUN | 0.680284 | 3.287264 | 3.293966 | 0.001872 | 0.002246 | 0.001854 |
| bind_cancellation_slot.test | RUN | 0.674984 | 3.287951 | 3.311387 | 0.001612 | 0.001522 | 0.001973 |
| bind_cancellation_slot_select.test | RUN | 0.687020 | 3.304304 | 3.216621 | 0.001438 | 0.001421 | 0.001526 |
| bind_executor.test | RUN | 0.456713 | 2.260059 | 1.998289 | 0.002197 | 0.002104 | 0.002316 |
| bind_executor_select.test | RUN | 0.462779 | 2.304196 | 1.999670 | 0.001774 | 0.001965 | 0.001972 |
| bind_immediate_executor.test | RUN | 0.356690 | 1.884571 | 1.305488 | 0.001460 | 0.001536 | 0.001498 |
| bind_immediate_executor_select.test | RUN | 0.359930 | 1.859746 | 1.446245 | 0.001523 | 0.001539 | 0.001501 |
| buffer.test | RUN | 0.217085 | 0.827033 | 0.796658 | 0.001456 | 0.001411 | 0.001426 |
| buffer_select.test | RUN | 0.218463 | 0.809993 | 0.787573 | 0.001462 | 0.001379 | 0.001467 |
| buffer_registration.test | LINK | 0.175165 | 0.404981 | 0.474987 | — | — | — |
| buffer_registration_select.test | LINK | 0.177188 | 0.405151 | 0.468310 | — | — | — |
| buffered_read_stream.test | RUN | 0.738265 | 5.049614 | 4.980158 | 0.001824 | 0.002328 | 0.002012 |
| buffered_read_stream_select.test | RUN | 0.755571 | 5.255308 | 4.856642 | 0.001804 | 0.002330 | 0.002619 |
| buffered_stream.test | RUN | 1.101474 | 7.988456 | 8.099180 | 0.002237 | 0.002419 | 0.002532 |
| buffered_stream_select.test | RUN | 1.198113 | 7.966650 | 7.841986 | 0.002366 | 0.002549 | 0.002194 |
| buffered_write_stream.test | RUN | 1.219170 | 6.847421 | 6.955069 | 0.002450 | 0.002406 | 0.002628 |
| buffered_write_stream_select.test | RUN | 1.209298 | 6.995694 | 6.678984 | 0.002092 | 0.002489 | 0.002046 |
| buffers_iterator.test | RUN | 0.401030 | 0.656821 | 1.112896 | 0.001572 | 0.001837 | 0.001978 |
| buffers_iterator_select.test | RUN | 0.383564 | 0.685810 | 1.099992 | 0.001727 | 0.002102 | 0.001648 |
| cancel_after.test | RUN | 1.017030 | 5.333360 | 5.046318 | 0.003814 | 0.004012 | 0.003994 |
| cancel_after_select.test | RUN | 1.017652 | 5.240996 | 5.053561 | 0.003994 | 0.003930 | 0.004218 |
| cancel_at.test | RUN | 1.012457 | 4.754257 | 4.820526 | 0.003296 | 0.003687 | 0.004290 |
| cancel_at_select.test | RUN | 1.023119 | 4.478502 | 4.728308 | 0.003862 | 0.003590 | 0.003581 |
| cancellation_signal.test | LINK | 0.155175 | 0.244755 | 0.302396 | — | — | — |
| cancellation_signal_select.test | LINK | 0.179737 | 0.243440 | 0.307291 | — | — | — |
| cancellation_state.test | LINK | 0.187765 | 0.241463 | 0.307409 | — | — | — |
| cancellation_state_select.test | LINK | 0.197631 | 0.244203 | 0.310612 | — | — | — |
| cancellation_type.test | LINK | 0.145876 | 0.194855 | 0.383329 | — | — | — |
| cancellation_type_select.test | LINK | 0.142799 | 0.196036 | 0.406440 | — | — | — |
| co_composed.test | RUN | 0.145174 | 0.194609 | 0.398471 | 0.001722 | 0.001432 | 0.001327 |
| co_composed_select.test | RUN | 0.148511 | 0.214517 | 0.385507 | 0.001808 | 0.001958 | 0.001016 |
| co_spawn.test | LINK | 0.146423 | 0.219015 | 0.383107 | — | — | — |
| co_spawn_select.test | LINK | 0.143349 | 0.239142 | 0.395876 | — | — | — |
| completion_condition.test | LINK | 0.185203 | 0.417308 | 0.513376 | — | — | — |
| completion_condition_select.test | LINK | 0.183268 | 0.424841 | 0.498988 | — | — | — |
| compose.test | RUN | 0.838703 | 4.014707 | 4.173314 | 0.002396 | 0.002450 | 0.002623 |
| compose_select.test | RUN | 0.847751 | 4.012923 | 4.112206 | 0.002372 | 0.002164 | 0.002316 |
| composed.test | RUN | 0.812621 | 4.030225 | 4.140974 | 0.001960 | 0.002124 | 0.001852 |
| composed_select.test | RUN | 0.816567 | 3.975861 | 4.103595 | 0.001916 | 0.001983 | 0.002033 |
| config.test | RUN | 0.387603 | 2.511634 | 1.939314 | 0.002062 | 0.002046 | 0.002018 |
| config_select.test | RUN | 0.488955 | 2.724766 | 2.230767 | 0.001934 | 0.001829 | 0.002034 |
| connect.test | LINK | 1.297124 | 8.713627 | 8.857530 | — | — | — |
| connect_select.test | LINK | 1.314906 | 8.659184 | 8.935189 | — | — | — |
| connect_pipe.test | RUN | 0.714029 | 3.295835 | 3.245699 | 0.001838 | 0.002060 | 0.002206 |
| connect_pipe_select.test | RUN | 0.714463 | 3.440989 | 3.499369 | 0.001690 | 0.001990 | 0.002014 |
| consign.test | RUN | 0.612567 | 3.190296 | 2.893972 | 0.001925 | 0.002014 | 0.001912 |
| consign_select.test | RUN | 0.640541 | 3.214999 | 2.803057 | 0.001920 | 0.001935 | 0.001485 |
| coroutine.test | LINK | 0.145107 | 0.339408 | 0.407140 | — | — | — |
| coroutine_select.test | LINK | 0.147654 | 0.349045 | 0.422487 | — | — | — |
| deadline_timer.test | RUN | 0.917211 | 4.192509 | 4.335187 | 0.003463 | 0.003741 | 0.003616 |
| deadline_timer_select.test | RUN | 0.948294 | 4.150364 | 4.228720 | 0.002878 | 0.002843 | 0.003738 |
| deferred.test | RUN | 0.182486 | 0.300376 | 0.434830 | 0.001776 | 0.001728 | 0.001968 |
| deferred_select.test | RUN | 0.169374 | 0.301676 | 0.451131 | 0.001963 | 0.001614 | 0.001918 |
| detached.test | LINK | 0.179905 | 0.334456 | 0.498072 | — | — | — |
| detached_select.test | LINK | 0.176896 | 0.328663 | 0.489352 | — | — | — |
| disposition.test | RUN | 0.191815 | 0.808194 | 0.867580 | 0.001566 | 0.001898 | 0.001994 |
| disposition_select.test | RUN | 0.164995 | 0.804762 | 0.858723 | 0.001535 | 0.001905 | 0.001779 |
| error.test | RUN | 0.157563 | 0.788698 | 0.796550 | 0.001510 | 0.001907 | 0.001882 |
| error_select.test | RUN | 0.157297 | 0.777519 | 0.761221 | 0.001614 | 0.001882 | 0.001831 |
| file_base.test | LINK | 0.205136 | 0.653719 | 0.796931 | — | — | — |
| file_base_select.test | LINK | 0.230656 | 0.640390 | 0.645730 | — | — | — |
| fwd_first.test | LINK | 0.439842 | 1.028553 | 1.522073 | — | — | — |
| fwd_last.test | LINK | 0.443113 | 0.923720 | 1.551206 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.172818 | 0.386366 | 0.536080 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.168088 | 0.384195 | 0.538008 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.656078 | 3.353518 | 2.990864 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.656085 | 3.452595 | 2.979610 | — | — | — |
| generic_raw_protocol.test | LINK | 0.653593 | 3.327928 | 3.005308 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.650261 | 3.433790 | 2.949366 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.560414 | 2.836090 | 2.510317 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.560695 | 2.899977 | 2.523455 | — | — | — |
| generic_stream_protocol.test | LINK | 0.609623 | 3.052040 | 2.653675 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.610466 | 3.168826 | 2.692296 | — | — | — |
| high_resolution_timer.test | LINK | 0.271104 | 0.597336 | 0.822976 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.276854 | 0.597900 | 0.856424 | — | — | — |
| immediate.test | LINK | 0.194558 | 0.440814 | 0.519567 | — | — | — |
| immediate_select.test | LINK | 0.197897 | 0.440244 | 0.522611 | — | — | — |
| inline_executor.test | RUN | 0.246057 | 0.663498 | 0.767368 | 0.001544 | 0.001518 | 0.001511 |
| inline_executor_select.test | RUN | 0.237182 | 0.688849 | 0.791645 | 0.001508 | 0.001525 | 0.001509 |
| inline_or_executor.test | RUN | 0.372134 | 1.996437 | 1.471185 | 0.001454 | 0.001453 | 0.001506 |
| inline_or_executor_select.test | RUN | 0.388636 | 2.020806 | 1.645001 | 0.001492 | 0.001432 | 0.001490 |
| io_context.test | RUN | 0.527693 | 3.043845 | 2.589980 | 0.002428 | 0.002382 | 0.002447 |
| io_context_select.test | RUN | 0.534371 | 2.986372 | 2.604460 | 0.002244 | 0.002275 | 0.002462 |
| io_context_strand.test | RUN | 0.524804 | 2.541123 | 2.309459 | 0.002396 | 0.002384 | 0.002632 |
| io_context_strand_select.test | RUN | 0.526529 | 2.486546 | 2.293345 | 0.002382 | 0.002220 | 0.002282 |
| ip_address.test | LINK | 0.194013 | 0.591237 | 0.644406 | — | — | — |
| ip_address_select.test | LINK | 0.196427 | 0.592017 | 0.643178 | — | — | — |
| ip_address_v4.test | LINK | 0.200110 | 0.641423 | 0.694590 | — | — | — |
| ip_address_v4_select.test | LINK | 0.207693 | 0.629127 | 0.708751 | — | — | — |
| ip_address_v6.test | LINK | 0.230170 | 0.824759 | 0.859227 | — | — | — |
| ip_address_v6_select.test | LINK | 0.229653 | 0.816438 | 0.848669 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.180802 | 0.403173 | 0.561496 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.183384 | 0.400080 | 0.561431 | — | — | — |
| ip_basic_resolver.test | LINK | 0.279616 | 0.574825 | 0.875591 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.282044 | 0.588673 | 0.896705 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.097147 | 0.192364 | 0.243538 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.096809 | 0.191121 | 0.241707 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.177099 | 0.387667 | 0.582502 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.172854 | 0.384952 | 0.606105 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.163583 | 0.375520 | 0.850327 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.163562 | 0.371536 | 0.880667 | — | — | — |
| ip_host_name.test | RUN | 0.176157 | 0.501379 | 1.006429 | 0.001382 | 0.001478 | 0.001634 |
| ip_host_name_select.test | RUN | 0.175092 | 0.502129 | 1.012927 | 0.001463 | 0.001356 | 0.001764 |
| ip_icmp.test | RUN | 0.788783 | 6.425134 | 6.136470 | 0.001574 | 0.002134 | 0.001829 |
| ip_icmp_select.test | RUN | 0.794113 | 6.774301 | 5.957480 | 0.001576 | 0.002060 | 0.001917 |
| ip_multicast.test | RUN | 0.496264 | 3.454302 | 3.494217 | 0.001769 | 0.002032 | 0.001854 |
| ip_multicast_select.test | RUN | 0.510387 | 3.426939 | 3.459674 | 0.001690 | 0.002010 | 0.001666 |
| ip_resolver_query_base.test | LINK | 0.121494 | 0.306563 | 0.427933 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.117654 | 0.304703 | 0.428539 | — | — | — |
| ip_tcp.test | RUN | 1.175323 | 10.039781 | 9.428255 | 0.002114 | 0.002538 | 0.002824 |
| ip_tcp_select.test | RUN | 1.170719 | 10.466739 | 9.163917 | 0.002029 | 0.002691 | 0.002118 |
| ip_udp.test | RUN | 0.867814 | 7.156732 | 6.568805 | 0.001719 | 0.002277 | 0.001944 |
| ip_udp_select.test | RUN | 0.856439 | 7.316416 | 6.401003 | 0.001754 | 0.001904 | 0.001711 |
| ip_unicast.test | RUN | 0.463465 | 3.142274 | 3.189474 | 0.001583 | 0.002014 | 0.001769 |
| ip_unicast_select.test | RUN | 0.469076 | 3.157966 | 3.122833 | 0.001550 | 0.001806 | 0.002024 |
| ip_v6_only.test | RUN | 0.455867 | 3.249356 | 3.214583 | 0.001676 | 0.002056 | 0.002080 |
| ip_v6_only_select.test | RUN | 0.471743 | 3.371944 | 3.199832 | 0.001691 | 0.002088 | 0.002072 |
| is_read_buffered.test | RUN | 0.329430 | 1.014275 | 1.703948 | 0.001448 | 0.001796 | 0.001664 |
| is_read_buffered_select.test | RUN | 0.328712 | 1.034147 | 1.732882 | 0.001396 | 0.001642 | 0.001772 |
| is_write_buffered.test | RUN | 0.366825 | 1.020270 | 1.692044 | 0.001567 | 0.001766 | 0.001839 |
| is_write_buffered_select.test | RUN | 0.372889 | 1.023862 | 1.714807 | 0.001515 | 0.001899 | 0.001958 |
| local_basic_endpoint.test | LINK | 0.172621 | 0.565077 | 0.919092 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.165251 | 0.551541 | 0.915211 | — | — | — |
| local_connect_pair.test | LINK | 0.429869 | 3.163249 | 2.901249 | — | — | — |
| local_connect_pair_select.test | LINK | 0.445781 | 3.166718 | 2.903394 | — | — | — |
| local_datagram_protocol.test | LINK | 0.861111 | 4.112542 | 4.098820 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.863806 | 4.227278 | 4.066302 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.862743 | 4.102709 | 4.115590 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.881512 | 4.157802 | 4.123362 | — | — | — |
| local_stream_protocol.test | LINK | 0.771327 | 3.934630 | 3.884317 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.801443 | 3.963148 | 3.847095 | — | — | — |
| placeholders.test | LINK | 0.151166 | 0.318698 | 0.419806 | — | — | — |
| placeholders_select.test | LINK | 0.158993 | 0.331228 | 0.421269 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.403968 | 0.844196 | 1.267022 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.436393 | 0.884830 | 1.566236 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.404880 | 0.845560 | 1.283152 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.414633 | 0.914745 | 1.538478 | — | — | — |
| posix_descriptor_base.test | LINK | 0.167436 | 0.334609 | 0.448118 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.174466 | 0.313949 | 0.403801 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.806580 | 3.919103 | 3.777364 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.825433 | 3.984992 | 3.871398 | — | — | — |
| prepend.test | RUN | 0.632397 | 3.174562 | 3.031349 | 0.002207 | 0.001976 | 0.002080 |
| prepend_select.test | RUN | 0.660559 | 3.222569 | 3.004580 | 0.001901 | 0.001924 | 0.001936 |
| random_access_file.test | LINK | 0.371636 | 0.751993 | 1.010711 | — | — | — |
| random_access_file_select.test | LINK | 0.386373 | 0.827649 | 1.285236 | — | — | — |
| read.test | RUN | 1.903169 | 20.020494 | 17.062605 | 0.002567 | 0.002499 | 0.002514 |
| read_select.test | RUN | 1.926696 | 19.931796 | 17.265073 | 0.002351 | 0.002464 | 0.002398 |
| read_at.test | RUN | 1.921530 | 28.164925 | 23.425751 | 0.003166 | 0.003108 | 0.002716 |
| read_at_select.test | RUN | 1.927589 | 28.413370 | 23.493942 | 0.002863 | 0.003223 | 0.002941 |
| read_until.test | RUN | 1.006264 | 7.639308 | 6.005724 | 0.002101 | 0.002114 | 0.002178 |
| read_until_select.test | RUN | 1.034040 | 7.651477 | 6.175247 | 0.002034 | 0.002803 | 0.001988 |
| readable_pipe.test | LINK | 0.645025 | 3.191740 | 2.884778 | — | — | — |
| readable_pipe_select.test | LINK | 0.681205 | 3.353690 | 3.074072 | — | — | — |
| recycling_allocator.test | RUN | 0.201029 | 0.502399 | 0.628546 | 0.001630 | 0.001849 | 0.001848 |
| recycling_allocator_select.test | RUN | 0.200803 | 0.492959 | 0.634311 | 0.001750 | 0.001899 | 0.001941 |
| redirect_disposition.test | LINK | 0.845812 | 4.539801 | 4.489341 | — | — | — |
| redirect_disposition_select.test | LINK | 0.854716 | 4.480502 | 4.444505 | — | — | — |
| redirect_error.test | LINK | 0.756853 | 3.777979 | 3.918434 | — | — | — |
| redirect_error_select.test | LINK | 0.776883 | 3.744884 | 3.854127 | — | — | — |
| registered_buffer.test | LINK | 0.211799 | 0.407457 | 0.564838 | — | — | — |
| registered_buffer_select.test | LINK | 0.210103 | 0.405165 | 0.560989 | — | — | — |
| signal_set.test | RUN | 0.637354 | 3.117390 | 2.754330 | 0.001743 | 0.001918 | 0.001846 |
| signal_set_select.test | RUN | 0.660813 | 3.256336 | 2.997749 | 0.001978 | 0.002054 | 0.001787 |
| signal_set_base.test | LINK | 0.166865 | 0.327738 | 0.392273 | — | — | — |
| signal_set_base_select.test | LINK | 0.177906 | 0.337632 | 0.402936 | — | — | — |
| socket_base.test | RUN | 0.790476 | 4.826855 | 4.195821 | 0.002138 | 0.002024 | 0.002114 |
| socket_base_select.test | RUN | 0.812518 | 4.653973 | 4.249283 | 0.002070 | 0.002020 | 0.002104 |
| spawn.test | RUN | 1.274565 | 7.572595 | 6.916360 | 0.002227 | 0.002222 | 0.002292 |
| spawn_select.test | RUN | 1.294538 | 7.542569 | 6.913463 | 0.002242 | 0.002164 | 0.002206 |
| static_thread_pool.test | RUN | 0.367378 | 0.763900 | 0.950494 | 0.001820 | 0.001700 | 0.002018 |
| static_thread_pool_select.test | RUN | 0.392196 | 0.786731 | 1.279276 | 0.001758 | 0.002023 | 0.001862 |
| steady_timer.test | LINK | 0.401411 | 0.867617 | 1.342402 | — | — | — |
| steady_timer_select.test | LINK | 0.413005 | 0.873597 | 1.408844 | — | — | — |
| strand.test | RUN | 0.831741 | 4.327056 | 4.258608 | 0.002767 | 0.002218 | 0.002962 |
| strand_select.test | RUN | 0.832249 | 4.247454 | 4.301850 | 0.002410 | 0.002756 | 0.002746 |
| stream_file.test | LINK | 0.385985 | 0.782611 | 1.040069 | — | — | — |
| stream_file_select.test | LINK | 0.405139 | 0.838119 | 1.303769 | — | — | — |
| streambuf.test | RUN | 0.241315 | 0.630839 | 0.692074 | 0.001385 | 0.001414 | 0.001864 |
| streambuf_select.test | RUN | 0.220586 | 0.439372 | 0.754005 | 0.001475 | 0.001472 | 0.001968 |
| system_timer.test | LINK | 0.530642 | 2.788515 | 2.850025 | — | — | — |
| system_timer_select.test | LINK | 0.543454 | 2.773680 | 2.415790 | — | — | — |
| system_context.test | LINK | 0.271108 | 0.521927 | 0.588596 | — | — | — |
| system_context_select.test | LINK | 0.279135 | 0.551595 | 0.752768 | — | — | — |
| system_executor.test | LINK | 0.328659 | 1.631046 | 1.150097 | — | — | — |
| system_executor_select.test | LINK | 0.343320 | 1.614163 | 1.287702 | — | — | — |
| this_coro.test | LINK | 0.099312 | 0.193367 | 0.237595 | — | — | — |
| this_coro_select.test | LINK | 0.098775 | 0.198130 | 0.237100 | — | — | — |
| thread_pool.test | RUN | 0.378775 | 2.208283 | 1.509945 | 0.002675 | 0.003174 | 0.002616 |
| thread_pool_select.test | RUN | 0.395350 | 2.294298 | 1.643254 | 0.002752 | 0.002700 | 0.002653 |
| time_traits.test | LINK | 0.232221 | 0.594264 | 0.494357 | — | — | — |
| time_traits_select.test | LINK | 0.235570 | 0.598458 | 0.483755 | — | — | — |
| ts_buffer.test | LINK | 0.232849 | 0.660653 | 0.506306 | — | — | — |
| ts_buffer_select.test | LINK | 0.223691 | 0.668504 | 0.546420 | — | — | — |
| ts_executor.test | LINK | 0.307789 | 0.919142 | 1.311760 | — | — | — |
| ts_executor_select.test | LINK | 0.314859 | 0.984827 | 1.597485 | — | — | — |
| ts_internet.test | LINK | 0.339452 | 1.011061 | 1.291877 | — | — | — |
| ts_internet_select.test | LINK | 0.343584 | 1.019557 | 1.684578 | — | — | — |
| ts_io_context.test | LINK | 0.271048 | 0.775484 | 0.966136 | — | — | — |
| ts_io_context_select.test | LINK | 0.279236 | 0.823933 | 1.266461 | — | — | — |
| ts_net.test | LINK | 0.404204 | 1.196820 | 2.032649 | — | — | — |
| ts_net_select.test | LINK | 0.404574 | 1.234747 | 2.062653 | — | — | — |
| ts_netfwd.test | LINK | 0.402549 | 1.193723 | 2.024053 | — | — | — |
| ts_netfwd_select.test | LINK | 0.411579 | 1.241610 | 2.061085 | — | — | — |
| ts_socket.test | LINK | 0.318112 | 0.927318 | 1.574759 | — | — | — |
| ts_socket_select.test | LINK | 0.323241 | 0.967061 | 1.604954 | — | — | — |
| ts_timer.test | LINK | 0.285916 | 0.846065 | 1.329689 | — | — | — |
| ts_timer_select.test | LINK | 0.289936 | 0.862512 | 1.391972 | — | — | — |
| use_awaitable.test | LINK | 0.118233 | 0.280141 | 0.398816 | — | — | — |
| use_awaitable_select.test | LINK | 0.103093 | 0.283125 | 0.383246 | — | — | — |
| wait_traits.test | LINK | 0.101232 | 0.297122 | 0.384639 | — | — | — |
| wait_traits_select.test | LINK | 0.099854 | 0.291358 | 0.377699 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.099998 | 0.283121 | 0.389830 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.100064 | 0.281318 | 0.385666 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.099610 | 0.290980 | 0.390498 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.100274 | 0.278563 | 0.389301 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.099169 | 0.282128 | 0.387615 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.123342 | 0.288435 | 0.379362 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.138618 | 0.295046 | 0.388472 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.129924 | 0.276705 | 0.380529 | — | — | — |
| windows_object_handle.test | LINK | 0.379898 | 0.772033 | 1.033454 | — | — | — |
| windows_object_handle_select.test | LINK | 0.394371 | 0.822579 | 1.303044 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.394692 | 0.830343 | 1.161580 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.418690 | 0.881240 | 1.417762 | — | — | — |
| windows_random_access_handle.test | LINK | 0.380184 | 0.788305 | 1.015986 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.393868 | 0.850171 | 1.320633 | — | — | — |
| windows_stream_handle.test | LINK | 0.378584 | 0.802878 | 1.079773 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.403852 | 0.864408 | 1.317580 | — | — | — |
| writable_pipe.test | LINK | 0.674909 | 3.223706 | 3.089622 | — | — | — |
| writable_pipe_select.test | LINK | 0.709526 | 3.365937 | 3.287286 | — | — | — |
| write.test | RUN | 1.932980 | 16.688207 | 16.661670 | 0.002587 | 0.002112 | 0.002676 |
| write_select.test | RUN | 1.938478 | 16.567968 | 16.920617 | 0.002420 | 0.002302 | 0.002598 |
| write_at.test | RUN | 1.992873 | 23.581606 | 21.921604 | 0.002768 | 0.002392 | 0.002770 |
| write_at_select.test | RUN | 2.007602 | 23.754852 | 22.329118 | 0.002541 | 0.002532 | 0.002826 |
| any_executor.test | RUN | 0.834167 | 7.782846 | 6.605549 | 0.002371 | 0.002384 | 0.002723 |
| blocking.test | RUN | 1.992759 | 9.454211 | 13.816004 | 0.007358 | 0.007336 | 0.007611 |
| blocking_adaptation.test | RUN | 1.006275 | 4.101849 | 6.313443 | 0.003904 | 0.003942 | 0.004058 |
| context_as.test | RUN | 0.515268 | 2.885004 | 2.080301 | 0.002094 | 0.002104 | 0.002034 |
| executor.test | RUN | 0.154188 | 0.289449 | 0.418011 | 0.001866 | 0.001736 | 0.001829 |
| inline_exception_handling.test | RUN | 2.022235 | 8.885463 | 12.791720 | 0.006068 | 0.005245 | 0.005218 |
| invocable_archetype.test | RUN | 0.151480 | 0.297353 | 0.401781 | 0.001654 | 0.001843 | 0.001903 |
| mapping.test | RUN | 1.879811 | 9.231521 | 13.844047 | 0.005440 | 0.005180 | 0.005347 |
| outstanding_work.test | RUN | 0.886495 | 3.780232 | 6.203537 | 0.004254 | 0.004112 | 0.004250 |
| prefer_only.test | RUN | 0.297899 | 1.538747 | 1.433477 | 0.001883 | 0.001778 | 0.001928 |
| relationship.test | RUN | 0.651628 | 3.421500 | 6.165788 | 0.003459 | 0.002995 | 0.002965 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.997×, 0.979× | 0.997× |
| clang | 0.982× | 0.989×, 0.976× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 4 | 0.001669s | 0.001639s | 0.001625s | byte equality observed |
| any_completion_executor_select.test | 7 | 0.001587s | 0.001623s | 0.001583s | byte equality observed |
| any_completion_handler.test | 10 | 0.001288s | 0.001290s | 0.001273s | byte equality observed |
| any_completion_handler_select.test | 8 | 0.001302s | 0.001300s | 0.001246s | byte equality observed |
| any_io_executor.test | 5 | 0.001604s | 0.001597s | 0.001583s | byte equality observed |
| any_io_executor_select.test | 9 | 0.001618s | 0.001618s | 0.001601s | byte equality observed |
| append.test | 10 | 0.001216s | 0.001202s | 0.001203s | byte equality observed |
| append_select.test | 5 | 0.001208s | 0.001198s | 0.001202s | byte equality observed |
| as_tuple.test | 10 | 0.001274s | 0.001291s | 0.001252s | byte equality observed |
| as_tuple_select.test | 10 | 0.001215s | 0.001218s | 0.001213s | byte equality observed |
| bind_allocator.test | 1 | 0.001711s | 0.001632s | 0.001731s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001442s | 0.001458s | 0.001441s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001152s | 0.001170s | 0.001129s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001095s | 0.001070s | 0.001052s | byte equality observed |
| bind_executor.test | 1 | 0.001688s | 0.001693s | 0.001719s | byte equality observed |
| bind_executor_select.test | 1 | 0.002027s | 0.002020s | 0.002028s | byte equality observed |
| bind_immediate_executor.test | 9 | 0.001131s | 0.001129s | 0.001089s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001079s | 0.001069s | 0.001050s | byte equality observed |
| buffer.test | 10 | 0.001044s | 0.001046s | 0.001004s | byte equality observed |
| buffer_select.test | 10 | 0.001043s | 0.001033s | 0.001019s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001358s | 0.001381s | 0.001335s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001310s | 0.001334s | 0.001290s | byte equality observed |
| buffered_stream.test | 10 | 0.001328s | 0.001315s | 0.001337s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001304s | 0.001295s | 0.001363s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001321s | 0.001344s | 0.001354s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001339s | 0.001330s | 0.001331s | byte equality observed |
| buffers_iterator.test | 10 | 0.001048s | 0.000993s | 0.001040s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000993s | 0.000984s | 0.001029s | byte equality observed |
| cancel_after.test | 1 | 0.003478s | 0.003489s | 0.003611s | byte equality observed |
| cancel_after_select.test | 1 | 0.002998s | 0.002942s | 0.002868s | byte equality observed |
| cancel_at.test | 1 | 0.003728s | 0.003711s | 0.003890s | byte equality observed |
| cancel_at_select.test | 1 | 0.003706s | 0.003747s | 0.003510s | byte equality observed |
| co_composed.test | 10 | 0.001046s | 0.001023s | 0.001070s | byte equality observed |
| co_composed_select.test | 10 | 0.000976s | 0.000985s | 0.001005s | byte equality observed |
| compose.test | 1 | 0.001727s | 0.001682s | 0.001711s | byte equality observed |
| compose_select.test | 1 | 0.001475s | 0.001427s | 0.001494s | byte equality observed |
| composed.test | 1 | 0.002092s | 0.002093s | 0.002048s | byte equality observed |
| composed_select.test | 1 | 0.001655s | 0.001659s | 0.001747s | byte equality observed |
| config.test | 10 | 0.001130s | 0.001101s | 0.001086s | byte equality observed |
| config_select.test | 9 | 0.001091s | 0.001067s | 0.001068s | byte equality observed |
| connect_pipe.test | 10 | 0.001122s | 0.001112s | 0.001117s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001105s | 0.001099s | 0.001105s | byte equality observed |
| consign.test | 10 | 0.001103s | 0.001120s | 0.001092s | byte equality observed |
| consign_select.test | 10 | 0.001058s | 0.001100s | 0.001046s | byte equality observed |
| deadline_timer.test | 1 | 0.002448s | 0.002556s | 0.002482s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002153s | 0.002242s | 0.002259s | byte equality observed |
| deferred.test | 10 | 0.001031s | 0.001045s | 0.001014s | byte equality observed |
| deferred_select.test | 10 | 0.000959s | 0.000963s | 0.000959s | byte equality observed |
| disposition.test | 10 | 0.001027s | 0.001048s | 0.001005s | byte equality observed |
| disposition_select.test | 10 | 0.001027s | 0.001026s | 0.001031s | byte equality observed |
| error.test | 10 | 0.000993s | 0.000992s | 0.000982s | byte equality observed |
| error_select.test | 10 | 0.000992s | 0.001028s | 0.000968s | byte equality observed |
| inline_executor.test | 10 | 0.001046s | 0.001044s | 0.001005s | byte equality observed |
| inline_executor_select.test | 10 | 0.001036s | 0.001018s | 0.001005s | byte equality observed |
| inline_or_executor.test | 10 | 0.001031s | 0.001054s | 0.001010s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001039s | 0.001025s | 0.000995s | byte equality observed |
| io_context.test | 1 | 0.002057s | 0.001962s | 0.001941s | byte equality observed |
| io_context_select.test | 1 | 0.002278s | 0.001939s | 0.002275s | byte equality observed |
| io_context_strand.test | 1 | 0.002307s | 0.002297s | 0.002324s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002122s | 0.001924s | 0.002068s | byte equality observed |
| ip_host_name.test | 10 | 0.001048s | 0.001095s | 0.001019s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000985s | 0.001021s | 0.000970s | byte equality observed |
| ip_icmp.test | 10 | 0.001058s | 0.001086s | 0.000981s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001035s | 0.001075s | 0.001030s | byte equality observed |
| ip_multicast.test | 10 | 0.001147s | 0.001154s | 0.001123s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001108s | 0.001107s | 0.001058s | byte equality observed |
| ip_tcp.test | 10 | 0.001529s | 0.001557s | 0.001530s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001495s | 0.001448s | 0.001464s | byte equality observed |
| ip_udp.test | 10 | 0.001180s | 0.001202s | 0.001127s | byte equality observed |
| ip_udp_select.test | 10 | 0.001136s | 0.001167s | 0.001141s | byte equality observed |
| ip_unicast.test | 10 | 0.001100s | 0.001136s | 0.001104s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001121s | 0.001158s | 0.001085s | byte equality observed |
| ip_v6_only.test | 10 | 0.001130s | 0.001106s | 0.001116s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001118s | 0.001112s | 0.001079s | byte equality observed |
| is_read_buffered.test | 10 | 0.001041s | 0.001055s | 0.001035s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001020s | 0.001039s | 0.001006s | byte equality observed |
| is_write_buffered.test | 10 | 0.001065s | 0.001048s | 0.001011s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001017s | 0.001048s | 0.001015s | byte equality observed |
| prepend.test | 10 | 0.001102s | 0.001099s | 0.001065s | byte equality observed |
| prepend_select.test | 10 | 0.001093s | 0.001064s | 0.001068s | byte equality observed |
| read.test | 10 | 0.001509s | 0.001459s | 0.001448s | byte equality observed |
| read_at.test | 10 | 0.001884s | 0.001846s | 0.001730s | byte equality observed |
| read_at_select.test | 10 | 0.001923s | 0.001846s | 0.001682s | byte equality observed |
| read_select.test | 10 | 0.001503s | 0.001431s | 0.001484s | byte equality observed |
| read_until.test | 10 | 0.001238s | 0.001208s | 0.001206s | byte equality observed |
| read_until_select.test | 10 | 0.001269s | 0.001216s | 0.001214s | byte equality observed |
| recycling_allocator.test | 10 | 0.001046s | 0.001029s | 0.001035s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001028s | 0.001038s | 0.001028s | byte equality observed |
| signal_set.test | 10 | 0.001052s | 0.001037s | 0.001069s | byte equality observed |
| signal_set_select.test | 10 | 0.001064s | 0.001086s | 0.001069s | byte equality observed |
| socket_base.test | 10 | 0.001188s | 0.001181s | 0.001165s | byte equality observed |
| socket_base_select.test | 10 | 0.001152s | 0.001151s | 0.001162s | byte equality observed |
| spawn.test | 10 | 0.001265s | 0.001203s | 0.001249s | byte equality observed |
| spawn_select.test | 10 | 0.001259s | 0.001253s | 0.001235s | byte equality observed |
| static_thread_pool.test | 10 | 0.001044s | 0.000989s | 0.001005s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000994s | 0.000967s | 0.000970s | byte equality observed |
| strand.test | 1 | 0.001999s | 0.001982s | 0.001993s | byte equality observed |
| strand_select.test | 1 | 0.001658s | 0.001639s | 0.001645s | byte equality observed |
| streambuf.test | 10 | 0.001061s | 0.001059s | 0.001077s | byte equality observed |
| streambuf_select.test | 10 | 0.001036s | 0.001095s | 0.001045s | byte equality observed |
| thread_pool.test | 5 | 0.002298s | 0.002135s | 0.002254s | byte equality observed |
| thread_pool_select.test | 4 | 0.002289s | 0.002221s | 0.002251s | byte equality observed |
| write.test | 8 | 0.001528s | 0.001526s | 0.001555s | byte equality observed |
| write_at.test | 9 | 0.001634s | 0.001625s | 0.001582s | byte equality observed |
| write_at_select.test | 10 | 0.001660s | 0.001649s | 0.001598s | byte equality observed |
| write_select.test | 10 | 0.001542s | 0.001492s | 0.001487s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43620819273).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
