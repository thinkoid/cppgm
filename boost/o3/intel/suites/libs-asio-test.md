# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.446721 | 2.809311 | 2.293126 | 0.001563 | 0.001688 | 0.001445 |
| any_completion_executor_select.test | RUN | 0.463093 | 2.814431 | 2.419334 | 0.001594 | 0.001597 | 0.001322 |
| any_completion_handler.test | RUN | 0.507270 | 2.593547 | 2.071345 | 0.001299 | 0.001233 | 0.001208 |
| any_completion_handler_select.test | RUN | 0.528595 | 2.652456 | 2.237678 | 0.001257 | 0.001246 | 0.001050 |
| any_io_executor.test | RUN | 0.473589 | 3.017761 | 2.450096 | 0.001700 | 0.001446 | 0.001625 |
| any_io_executor_select.test | RUN | 0.487778 | 2.968910 | 2.663392 | 0.001695 | 0.001562 | 0.001563 |
| append.test | RUN | 0.447852 | 2.480934 | 1.908904 | 0.001052 | 0.001087 | 0.001037 |
| append_select.test | RUN | 0.444427 | 2.519619 | 1.894266 | 0.001042 | 0.001120 | 0.001115 |
| as_tuple.test | RUN | 0.581595 | 3.009789 | 2.622804 | 0.001207 | 0.001210 | 0.001186 |
| as_tuple_select.test | RUN | 0.583125 | 2.913396 | 2.591710 | 0.001145 | 0.001052 | 0.001020 |
| associated_allocator.test | LINK | 0.108700 | 0.239463 | 0.272666 | — | — | — |
| associated_allocator_select.test | LINK | 0.114408 | 0.239326 | 0.276894 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.122725 | 0.254918 | 0.290395 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.124284 | 0.256631 | 0.304702 | — | — | — |
| associated_executor.test | LINK | 0.179896 | 0.465466 | 0.479299 | — | — | — |
| associated_executor_select.test | LINK | 0.173355 | 0.465155 | 0.487890 | — | — | — |
| associated_immediate_executor.test | LINK | 0.161078 | 0.419979 | 0.440547 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.158034 | 0.418872 | 0.454905 | — | — | — |
| associator.test | LINK | 0.087925 | 0.201306 | 0.232518 | — | — | — |
| associator_select.test | LINK | 0.086620 | 0.193953 | 0.234183 | — | — | — |
| awaitable.test | LINK | 0.085708 | 0.193897 | 0.229121 | — | — | — |
| awaitable_select.test | LINK | 0.086333 | 0.195837 | 0.237318 | — | — | — |
| basic_datagram_socket.test | LINK | 0.283004 | 0.651363 | 0.870756 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.281487 | 0.639300 | 0.883080 | — | — | — |
| basic_deadline_timer.test | LINK | 0.329916 | 0.758141 | 1.017811 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.343333 | 0.755373 | 1.002121 | — | — | — |
| basic_file.test | LINK | 0.086242 | 0.191811 | 0.243799 | — | — | — |
| basic_file_select.test | LINK | 0.084319 | 0.192876 | 0.230948 | — | — | — |
| basic_random_access_file.test | LINK | 0.085668 | 0.195388 | 0.260173 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.087510 | 0.196535 | 0.227182 | — | — | — |
| basic_raw_socket.test | LINK | 0.277794 | 0.618866 | 0.850905 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.282935 | 0.637567 | 0.875692 | — | — | — |
| basic_readable_pipe.test | LINK | 0.268599 | 0.614776 | 0.744720 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.276199 | 0.630867 | 0.889690 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.284794 | 0.624080 | 0.836420 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.288102 | 0.635427 | 0.859910 | — | — | — |
| basic_signal_set.test | LINK | 0.264192 | 0.578467 | 0.674991 | — | — | — |
| basic_signal_set_select.test | LINK | 0.275703 | 0.605502 | 0.833178 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.278506 | 0.634982 | 0.844264 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.286185 | 0.641071 | 0.870202 | — | — | — |
| basic_stream_file.test | LINK | 0.089069 | 0.200980 | 0.238045 | — | — | — |
| basic_stream_file_select.test | LINK | 0.087396 | 0.200860 | 0.235082 | — | — | — |
| basic_stream_socket.test | LINK | 0.278467 | 0.623595 | 0.856495 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.281788 | 0.643763 | 0.867796 | — | — | — |
| basic_streambuf.test | LINK | 0.136179 | 0.279911 | 0.325666 | — | — | — |
| basic_streambuf_select.test | LINK | 0.133099 | 0.282809 | 0.331716 | — | — | — |
| basic_waitable_timer.test | LINK | 0.261341 | 0.592926 | 0.803468 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.274230 | 0.605775 | 0.806753 | — | — | — |
| basic_writable_pipe.test | LINK | 0.268396 | 0.605894 | 0.749585 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.283257 | 0.628549 | 0.894311 | — | — | — |
| bind_allocator.test | RUN | 0.480106 | 2.530797 | 2.086925 | 0.001328 | 0.001404 | 0.001390 |
| bind_allocator_select.test | RUN | 0.502149 | 2.550747 | 2.021300 | 0.001233 | 0.001352 | 0.001311 |
| bind_cancellation_slot.test | RUN | 0.495808 | 2.595782 | 2.131793 | 0.001062 | 0.001207 | 0.001048 |
| bind_cancellation_slot_select.test | RUN | 0.506787 | 2.596876 | 2.109364 | 0.001058 | 0.001163 | 0.001013 |
| bind_executor.test | RUN | 0.489908 | 2.592887 | 2.068772 | 0.001294 | 0.001470 | 0.001535 |
| bind_executor_select.test | RUN | 0.498642 | 2.577686 | 2.060646 | 0.001293 | 0.001350 | 0.001448 |
| bind_immediate_executor.test | RUN | 0.369959 | 2.102135 | 1.318924 | 0.000968 | 0.001135 | 0.001113 |
| bind_immediate_executor_select.test | RUN | 0.376131 | 2.056639 | 1.439151 | 0.001011 | 0.001017 | 0.001022 |
| buffer.test | RUN | 0.212400 | 0.886850 | 0.763464 | 0.001074 | 0.001128 | 0.001029 |
| buffer_select.test | RUN | 0.214994 | 0.849875 | 0.789892 | 0.000902 | 0.001160 | 0.001046 |
| buffer_registration.test | LINK | 0.160897 | 0.432716 | 0.454728 | — | — | — |
| buffer_registration_select.test | LINK | 0.162470 | 0.423796 | 0.458038 | — | — | — |
| buffered_read_stream.test | RUN | 0.837079 | 4.344534 | 3.700805 | 0.001368 | 0.001317 | 0.001244 |
| buffered_read_stream_select.test | RUN | 0.848979 | 4.398449 | 3.655594 | 0.001232 | 0.001425 | 0.001416 |
| buffered_stream.test | RUN | 1.097484 | 6.010444 | 5.201548 | 0.001168 | 0.001256 | 0.001334 |
| buffered_stream_select.test | RUN | 1.111900 | 6.021907 | 5.041172 | 0.001120 | 0.001309 | 0.001280 |
| buffered_write_stream.test | RUN | 0.946528 | 5.173860 | 4.450670 | 0.001268 | 0.001468 | 0.001252 |
| buffered_write_stream_select.test | RUN | 0.960546 | 5.283392 | 4.315829 | 0.001344 | 0.001170 | 0.001225 |
| buffers_iterator.test | RUN | 0.270263 | 0.462075 | 0.716226 | 0.001051 | 0.000993 | 0.000948 |
| buffers_iterator_select.test | RUN | 0.269713 | 0.442151 | 0.690274 | 0.001010 | 0.001023 | 0.000958 |
| cancel_after.test | RUN | 0.784182 | 4.058541 | 3.228436 | 0.002458 | 0.002495 | 0.002517 |
| cancel_after_select.test | RUN | 0.788034 | 4.024514 | 3.226673 | 0.002550 | 0.002569 | 0.002397 |
| cancel_at.test | RUN | 0.775719 | 4.072651 | 3.201340 | 0.002488 | 0.002293 | 0.002444 |
| cancel_at_select.test | RUN | 0.788392 | 4.031060 | 3.181988 | 0.002397 | 0.002530 | 0.002214 |
| cancellation_signal.test | LINK | 0.112600 | 0.244328 | 0.284779 | — | — | — |
| cancellation_signal_select.test | LINK | 0.111883 | 0.247019 | 0.283120 | — | — | — |
| cancellation_state.test | LINK | 0.111087 | 0.246393 | 0.284693 | — | — | — |
| cancellation_state_select.test | LINK | 0.110788 | 0.245026 | 0.283311 | — | — | — |
| cancellation_type.test | LINK | 0.085335 | 0.191999 | 0.225714 | — | — | — |
| cancellation_type_select.test | LINK | 0.086314 | 0.191981 | 0.223011 | — | — | — |
| co_composed.test | RUN | 0.086555 | 0.192060 | 0.225275 | 0.000956 | 0.001025 | 0.001009 |
| co_composed_select.test | RUN | 0.085381 | 0.192301 | 0.223756 | 0.000923 | 0.001026 | 0.000962 |
| co_spawn.test | LINK | 0.087427 | 0.191365 | 0.224631 | — | — | — |
| co_spawn_select.test | LINK | 0.085291 | 0.192858 | 0.225316 | — | — | — |
| completion_condition.test | LINK | 0.110788 | 0.298090 | 0.297884 | — | — | — |
| completion_condition_select.test | LINK | 0.110549 | 0.299629 | 0.296516 | — | — | — |
| compose.test | RUN | 0.583720 | 3.113173 | 2.584704 | 0.001380 | 0.001394 | 0.001336 |
| compose_select.test | RUN | 0.589876 | 3.063797 | 2.564096 | 0.001256 | 0.001349 | 0.001456 |
| composed.test | RUN | 0.580237 | 3.137714 | 2.570804 | 0.001368 | 0.001542 | 0.001423 |
| composed_select.test | RUN | 0.588597 | 3.074638 | 2.542568 | 0.001188 | 0.001358 | 0.001367 |
| config.test | RUN | 0.328713 | 2.034406 | 1.230325 | 0.001260 | 0.001093 | 0.001022 |
| config_select.test | RUN | 0.340138 | 2.087571 | 1.346170 | 0.001113 | 0.001045 | 0.000992 |
| connect.test | LINK | 0.932053 | 6.427635 | 5.439479 | — | — | — |
| connect_select.test | LINK | 0.942420 | 6.410353 | 5.396165 | — | — | — |
| connect_pipe.test | RUN | 0.493822 | 2.492582 | 1.988417 | 0.001050 | 0.001146 | 0.001040 |
| connect_pipe_select.test | RUN | 0.512408 | 2.578448 | 2.100714 | 0.001011 | 0.001102 | 0.000989 |
| consign.test | RUN | 0.428587 | 2.436380 | 1.842517 | 0.001033 | 0.001104 | 0.000995 |
| consign_select.test | RUN | 0.438971 | 2.486273 | 1.824225 | 0.001036 | 0.001140 | 0.001047 |
| coroutine.test | LINK | 0.089603 | 0.227477 | 0.252342 | — | — | — |
| coroutine_select.test | LINK | 0.089051 | 0.226475 | 0.251923 | — | — | — |
| deadline_timer.test | RUN | 0.636666 | 3.218686 | 2.655811 | 0.002398 | 0.001992 | 0.002367 |
| deadline_timer_select.test | RUN | 0.643692 | 3.157895 | 2.616525 | 0.002174 | 0.002090 | 0.002342 |
| deferred.test | RUN | 0.095449 | 0.207789 | 0.241147 | 0.001167 | 0.000974 | 0.000921 |
| deferred_select.test | RUN | 0.094794 | 0.207166 | 0.240928 | 0.000966 | 0.001031 | 0.000910 |
| detached.test | LINK | 0.107064 | 0.229662 | 0.270412 | — | — | — |
| detached_select.test | LINK | 0.105317 | 0.227904 | 0.266565 | — | — | — |
| disposition.test | RUN | 0.156123 | 0.574848 | 0.510029 | 0.001025 | 0.001083 | 0.001034 |
| disposition_select.test | RUN | 0.156596 | 0.573014 | 0.514319 | 0.001026 | 0.001043 | 0.001051 |
| error.test | RUN | 0.141812 | 0.542918 | 0.455537 | 0.001023 | 0.001009 | 0.001024 |
| error_select.test | RUN | 0.141770 | 0.540700 | 0.444452 | 0.000922 | 0.000967 | 0.000971 |
| file_base.test | LINK | 0.174750 | 0.447550 | 0.483137 | — | — | — |
| file_base_select.test | LINK | 0.174616 | 0.447435 | 0.480337 | — | — | — |
| fwd_first.test | LINK | 0.417700 | 0.944570 | 1.422272 | — | — | — |
| fwd_last.test | LINK | 0.409561 | 0.951145 | 1.400707 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.149939 | 0.394473 | 0.522404 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.150247 | 0.390185 | 0.507258 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.702202 | 3.725339 | 2.988579 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.695784 | 3.824248 | 2.959388 | — | — | — |
| generic_raw_protocol.test | LINK | 0.697346 | 3.707050 | 3.015860 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.695898 | 3.807496 | 2.950248 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.599878 | 3.128249 | 2.554374 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.597001 | 3.159657 | 2.563747 | — | — | — |
| generic_stream_protocol.test | LINK | 0.634336 | 3.382069 | 2.741268 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.635491 | 3.461421 | 2.740613 | — | — | — |
| high_resolution_timer.test | LINK | 0.259323 | 0.616212 | 0.827010 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.264244 | 0.616452 | 0.817576 | — | — | — |
| immediate.test | LINK | 0.174456 | 0.468274 | 0.497337 | — | — | — |
| immediate_select.test | LINK | 0.171821 | 0.460323 | 0.481807 | — | — | — |
| inline_executor.test | RUN | 0.220304 | 0.700458 | 0.743367 | 0.000991 | 0.001135 | 0.001044 |
| inline_executor_select.test | RUN | 0.219311 | 0.726881 | 0.743608 | 0.000988 | 0.001201 | 0.001061 |
| inline_or_executor.test | RUN | 0.370058 | 2.139094 | 1.481913 | 0.001064 | 0.001060 | 0.001124 |
| inline_or_executor_select.test | RUN | 0.381094 | 2.209807 | 1.615479 | 0.001037 | 0.001126 | 0.000971 |
| io_context.test | RUN | 0.549923 | 3.308003 | 2.600332 | 0.001902 | 0.001779 | 0.001578 |
| io_context_select.test | RUN | 0.556466 | 3.260312 | 2.582800 | 0.001509 | 0.001693 | 0.001568 |
| io_context_strand.test | RUN | 0.519561 | 2.818917 | 2.265286 | 0.001615 | 0.001667 | 0.001519 |
| io_context_strand_select.test | RUN | 0.528241 | 2.777084 | 2.237495 | 0.001539 | 0.001610 | 0.001419 |
| ip_address.test | LINK | 0.180864 | 0.635336 | 0.629284 | — | — | — |
| ip_address_select.test | LINK | 0.181570 | 0.637320 | 0.626320 | — | — | — |
| ip_address_v4.test | LINK | 0.185747 | 0.666747 | 0.685364 | — | — | — |
| ip_address_v4_select.test | LINK | 0.186249 | 0.666365 | 0.684873 | — | — | — |
| ip_address_v6.test | LINK | 0.213958 | 0.921380 | 0.833957 | — | — | — |
| ip_address_v6_select.test | LINK | 0.214537 | 0.869211 | 0.839764 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.156624 | 0.419905 | 0.541622 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.158802 | 0.415676 | 0.539075 | — | — | — |
| ip_basic_resolver.test | LINK | 0.265592 | 0.605209 | 0.798365 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.270151 | 0.625603 | 0.822305 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.086315 | 0.202100 | 0.226387 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.086533 | 0.202389 | 0.226908 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.161428 | 0.405646 | 0.522013 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.158695 | 0.407181 | 0.529857 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.151731 | 0.392641 | 0.502249 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.150809 | 0.393149 | 0.506060 | — | — | — |
| ip_host_name.test | RUN | 0.162090 | 0.535043 | 0.578893 | 0.000997 | 0.001120 | 0.000980 |
| ip_host_name_select.test | RUN | 0.162294 | 0.536388 | 0.579902 | 0.001029 | 0.001103 | 0.000906 |
| ip_icmp.test | RUN | 0.884874 | 5.225908 | 3.937358 | 0.001045 | 0.001160 | 0.000888 |
| ip_icmp_select.test | RUN | 0.881166 | 5.333654 | 3.831461 | 0.001007 | 0.001047 | 0.001175 |
| ip_multicast.test | RUN | 0.481500 | 2.608613 | 2.117471 | 0.001226 | 0.001166 | 0.001181 |
| ip_multicast_select.test | RUN | 0.491868 | 2.570457 | 2.105558 | 0.001085 | 0.001062 | 0.001087 |
| ip_resolver_query_base.test | LINK | 0.098217 | 0.209932 | 0.233985 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.099202 | 0.217350 | 0.234617 | — | — | — |
| ip_tcp.test | RUN | 1.317803 | 7.728097 | 6.078966 | 0.001354 | 0.001393 | 0.001308 |
| ip_tcp_select.test | RUN | 1.321780 | 8.049317 | 5.894014 | 0.001334 | 0.001446 | 0.001349 |
| ip_udp.test | RUN | 0.941732 | 5.524154 | 4.144359 | 0.001044 | 0.001220 | 0.001112 |
| ip_udp_select.test | RUN | 0.933695 | 5.645997 | 4.029836 | 0.001161 | 0.001185 | 0.001118 |
| ip_unicast.test | RUN | 0.444019 | 2.362227 | 1.865260 | 0.001097 | 0.001155 | 0.001032 |
| ip_unicast_select.test | RUN | 0.447186 | 2.382088 | 1.842637 | 0.001080 | 0.001027 | 0.000973 |
| ip_v6_only.test | RUN | 0.458440 | 2.431919 | 1.915736 | 0.001131 | 0.001140 | 0.001106 |
| ip_v6_only_select.test | RUN | 0.466363 | 2.486623 | 1.899008 | 0.001074 | 0.001147 | 0.001022 |
| is_read_buffered.test | RUN | 0.302886 | 0.687331 | 0.956742 | 0.000914 | 0.001015 | 0.000926 |
| is_read_buffered_select.test | RUN | 0.308977 | 0.703824 | 0.969622 | 0.000887 | 0.000937 | 0.000906 |
| is_write_buffered.test | RUN | 0.304937 | 0.685035 | 0.958782 | 0.000880 | 0.001041 | 0.000966 |
| is_write_buffered_select.test | RUN | 0.313099 | 0.704339 | 0.981171 | 0.000910 | 0.000986 | 0.000873 |
| local_basic_endpoint.test | LINK | 0.152002 | 0.388857 | 0.500105 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.152773 | 0.388703 | 0.501740 | — | — | — |
| local_connect_pair.test | LINK | 0.426727 | 2.378566 | 1.783665 | — | — | — |
| local_connect_pair_select.test | LINK | 0.437230 | 2.383663 | 1.746215 | — | — | — |
| local_datagram_protocol.test | LINK | 0.596975 | 3.134737 | 2.543806 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.603066 | 3.140096 | 2.474902 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.604323 | 3.083921 | 2.520874 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.611018 | 3.109965 | 2.494036 | — | — | — |
| local_stream_protocol.test | LINK | 0.555535 | 2.947971 | 2.389098 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.573514 | 2.950482 | 2.357298 | — | — | — |
| placeholders.test | LINK | 0.095245 | 0.209275 | 0.239558 | — | — | — |
| placeholders_select.test | LINK | 0.095754 | 0.209649 | 0.236761 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.265908 | 0.593022 | 0.716915 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.275123 | 0.624247 | 0.877593 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.269334 | 0.589033 | 0.725095 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.276982 | 0.633285 | 0.876681 | — | — | — |
| posix_descriptor_base.test | LINK | 0.103015 | 0.218868 | 0.241449 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.102508 | 0.218620 | 0.242400 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.585762 | 3.031231 | 2.398752 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.597649 | 3.089287 | 2.448517 | — | — | — |
| prepend.test | RUN | 0.434759 | 2.475159 | 1.856330 | 0.001098 | 0.001207 | 0.000985 |
| prepend_select.test | RUN | 0.440603 | 2.494199 | 1.841740 | 0.001033 | 0.001155 | 0.001037 |
| random_access_file.test | LINK | 0.241395 | 0.538582 | 0.589923 | — | — | — |
| random_access_file_select.test | LINK | 0.252795 | 0.571074 | 0.739953 | — | — | — |
| read.test | RUN | 1.431851 | 14.162577 | 10.969027 | 0.001493 | 0.001529 | 0.001450 |
| read_select.test | RUN | 1.445155 | 14.103976 | 11.118592 | 0.001426 | 0.001509 | 0.001477 |
| read_at.test | RUN | 1.423945 | 18.079339 | 14.709542 | 0.001877 | 0.001926 | 0.001791 |
| read_at_select.test | RUN | 1.435003 | 18.031562 | 14.811985 | 0.001751 | 0.001932 | 0.001780 |
| read_until.test | RUN | 0.747181 | 5.750220 | 4.160307 | 0.001229 | 0.001267 | 0.001185 |
| read_until_select.test | RUN | 0.757559 | 5.746837 | 4.256880 | 0.001182 | 0.001265 | 0.001178 |
| readable_pipe.test | LINK | 0.462490 | 2.455527 | 1.872693 | — | — | — |
| readable_pipe_select.test | LINK | 0.475710 | 2.564336 | 1.946901 | — | — | — |
| recycling_allocator.test | RUN | 0.127156 | 0.338526 | 0.381538 | 0.001015 | 0.001162 | 0.000931 |
| recycling_allocator_select.test | RUN | 0.128839 | 0.352004 | 0.377960 | 0.000918 | 0.001167 | 0.000935 |
| redirect_disposition.test | LINK | 0.597670 | 3.434337 | 2.819164 | — | — | — |
| redirect_disposition_select.test | LINK | 0.606078 | 3.415989 | 2.796482 | — | — | — |
| redirect_error.test | LINK | 0.532700 | 2.868141 | 2.464762 | — | — | — |
| redirect_error_select.test | LINK | 0.539974 | 2.832025 | 2.478436 | — | — | — |
| registered_buffer.test | LINK | 0.123658 | 0.280299 | 0.316846 | — | — | — |
| registered_buffer_select.test | LINK | 0.124738 | 0.273988 | 0.325352 | — | — | — |
| signal_set.test | RUN | 0.443161 | 2.439815 | 1.757255 | 0.001101 | 0.001164 | 0.000966 |
| signal_set_select.test | RUN | 0.462403 | 2.509028 | 1.903371 | 0.000986 | 0.001063 | 0.001000 |
| signal_set_base.test | LINK | 0.098849 | 0.211548 | 0.251956 | — | — | — |
| signal_set_base_select.test | LINK | 0.098443 | 0.221240 | 0.248594 | — | — | — |
| socket_base.test | RUN | 0.539884 | 3.383435 | 2.613618 | 0.001091 | 0.001322 | 0.001211 |
| socket_base_select.test | RUN | 0.544195 | 3.337345 | 2.565353 | 0.001039 | 0.001305 | 0.001290 |
| spawn.test | RUN | 0.945724 | 5.849584 | 4.627618 | 0.001261 | 0.001554 | 0.001232 |
| spawn_select.test | RUN | 0.953222 | 5.816094 | 4.588833 | 0.001221 | 0.001202 | 0.001210 |
| static_thread_pool.test | RUN | 0.235648 | 0.524932 | 0.577500 | 0.000929 | 0.001066 | 0.001071 |
| static_thread_pool_select.test | RUN | 0.245698 | 0.562804 | 0.757987 | 0.000983 | 0.001133 | 0.001002 |
| steady_timer.test | LINK | 0.259893 | 0.587607 | 0.790999 | — | — | — |
| steady_timer_select.test | LINK | 0.264561 | 0.606756 | 0.804950 | — | — | — |
| strand.test | RUN | 0.583716 | 3.300142 | 2.754034 | 0.001890 | 0.001761 | 0.001718 |
| strand_select.test | RUN | 0.592074 | 3.269789 | 2.750730 | 0.001965 | 0.001724 | 0.001757 |
| stream_file.test | LINK | 0.243368 | 0.562679 | 0.608114 | — | — | — |
| stream_file_select.test | LINK | 0.252911 | 0.588361 | 0.756341 | — | — | — |
| streambuf.test | RUN | 0.150632 | 0.463288 | 0.434659 | 0.000993 | 0.001093 | 0.001050 |
| streambuf_select.test | RUN | 0.150741 | 0.454677 | 0.430752 | 0.000960 | 0.001074 | 0.001028 |
| system_timer.test | LINK | 0.557997 | 3.118140 | 2.521653 | — | — | — |
| system_timer_select.test | LINK | 0.567035 | 3.066664 | 2.508413 | — | — | — |
| system_context.test | LINK | 0.235149 | 0.523704 | 0.572586 | — | — | — |
| system_context_select.test | LINK | 0.243509 | 0.577149 | 0.725125 | — | — | — |
| system_executor.test | LINK | 0.322050 | 1.774480 | 1.181869 | — | — | — |
| system_executor_select.test | LINK | 0.333354 | 1.726125 | 1.346202 | — | — | — |
| this_coro.test | LINK | 0.085639 | 0.206041 | 0.233720 | — | — | — |
| this_coro_select.test | LINK | 0.086045 | 0.203553 | 0.233586 | — | — | — |
| thread_pool.test | RUN | 0.386780 | 2.272060 | 1.537981 | 0.003008 | 0.002596 | 0.002746 |
| thread_pool_select.test | RUN | 0.398942 | 2.294050 | 1.664137 | 0.002916 | 0.002583 | 0.002592 |
| time_traits.test | LINK | 0.195154 | 0.401881 | 0.460852 | — | — | — |
| time_traits_select.test | LINK | 0.195064 | 0.403977 | 0.463916 | — | — | — |
| ts_buffer.test | LINK | 0.188296 | 0.455048 | 0.492913 | — | — | — |
| ts_buffer_select.test | LINK | 0.186872 | 0.456443 | 0.499440 | — | — | — |
| ts_executor.test | LINK | 0.271871 | 0.630402 | 0.774448 | — | — | — |
| ts_executor_select.test | LINK | 0.284404 | 0.667376 | 0.924965 | — | — | — |
| ts_internet.test | LINK | 0.297281 | 0.684542 | 0.967253 | — | — | — |
| ts_internet_select.test | LINK | 0.302444 | 0.708516 | 0.972500 | — | — | — |
| ts_io_context.test | LINK | 0.240918 | 0.531026 | 0.584574 | — | — | — |
| ts_io_context_select.test | LINK | 0.251006 | 0.564371 | 0.738344 | — | — | — |
| ts_net.test | LINK | 0.359547 | 0.828887 | 1.178624 | — | — | — |
| ts_net_select.test | LINK | 0.363210 | 0.848224 | 1.200503 | — | — | — |
| ts_netfwd.test | LINK | 0.356167 | 0.830716 | 1.175688 | — | — | — |
| ts_netfwd_select.test | LINK | 0.362181 | 0.848626 | 1.195818 | — | — | — |
| ts_socket.test | LINK | 0.293787 | 0.657458 | 0.894580 | — | — | — |
| ts_socket_select.test | LINK | 0.296313 | 0.671844 | 0.918710 | — | — | — |
| ts_timer.test | LINK | 0.258513 | 0.585364 | 0.783220 | — | — | — |
| ts_timer_select.test | LINK | 0.264930 | 0.601521 | 0.806885 | — | — | — |
| use_awaitable.test | LINK | 0.085365 | 0.194947 | 0.223279 | — | — | — |
| use_awaitable_select.test | LINK | 0.085389 | 0.193587 | 0.225605 | — | — | — |
| wait_traits.test | LINK | 0.084595 | 0.194425 | 0.225426 | — | — | — |
| wait_traits_select.test | LINK | 0.085228 | 0.194499 | 0.223245 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.085386 | 0.192532 | 0.224695 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.083288 | 0.193186 | 0.223684 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.084763 | 0.192528 | 0.221921 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.084150 | 0.191738 | 0.223223 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.084551 | 0.194215 | 0.224209 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.085569 | 0.193476 | 0.224791 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.085219 | 0.194355 | 0.223002 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.085587 | 0.194229 | 0.221526 | — | — | — |
| windows_object_handle.test | LINK | 0.243010 | 0.534435 | 0.593883 | — | — | — |
| windows_object_handle_select.test | LINK | 0.253391 | 0.568692 | 0.745832 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.249432 | 0.560217 | 0.642616 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.262406 | 0.595834 | 0.797006 | — | — | — |
| windows_random_access_handle.test | LINK | 0.242174 | 0.535564 | 0.591856 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.253335 | 0.568147 | 0.744594 | — | — | — |
| windows_stream_handle.test | LINK | 0.242939 | 0.535510 | 0.586707 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.251920 | 0.569561 | 0.746656 | — | — | — |
| writable_pipe.test | LINK | 0.466038 | 2.435570 | 1.926814 | — | — | — |
| writable_pipe_select.test | LINK | 0.482869 | 2.527278 | 2.001765 | — | — | — |
| write.test | RUN | 1.420788 | 11.814746 | 10.529372 | 0.001509 | 0.001643 | 0.001406 |
| write_select.test | RUN | 1.433180 | 11.751373 | 10.612932 | 0.001446 | 0.001428 | 0.001602 |
| write_at.test | RUN | 1.459133 | 15.481242 | 13.242125 | 0.001573 | 0.001574 | 0.001548 |
| write_at_select.test | RUN | 1.469804 | 15.314885 | 13.472918 | 0.001516 | 0.001674 | 0.001592 |
| any_executor.test | RUN | 0.569700 | 5.155098 | 4.346735 | 0.001493 | 0.001664 | 0.001488 |
| blocking.test | RUN | 1.169491 | 7.191087 | 8.725860 | 0.002667 | 0.002670 | 0.002721 |
| blocking_adaptation.test | RUN | 0.587442 | 3.088706 | 3.901070 | 0.001742 | 0.001814 | 0.001736 |
| context_as.test | RUN | 0.360596 | 2.165248 | 1.356830 | 0.001366 | 0.001231 | 0.001232 |
| executor.test | RUN | 0.087583 | 0.198757 | 0.230718 | 0.001048 | 0.001064 | 0.000893 |
| inline_exception_handling.test | RUN | 1.160223 | 7.174229 | 8.680293 | 0.002751 | 0.002608 | 0.002736 |
| invocable_archetype.test | RUN | 0.086163 | 0.195406 | 0.223276 | 0.000997 | 0.001120 | 0.001016 |
| mapping.test | RUN | 1.214895 | 7.630057 | 9.362698 | 0.002758 | 0.002815 | 0.002940 |
| outstanding_work.test | RUN | 0.538801 | 2.945594 | 3.782445 | 0.001701 | 0.001728 | 0.001746 |
| prefer_only.test | RUN | 0.180180 | 1.105611 | 0.834799 | 0.000960 | 0.001034 | 0.001024 |
| relationship.test | RUN | 0.535647 | 2.957429 | 3.771563 | 0.001799 | 0.001746 | 0.001729 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 1.000×, 0.992× | 1.001× |
| clang | 0.983× | 0.986×, 0.981× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1365 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001274s | 0.001302s | 0.001321s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001296s | 0.001281s | 0.001298s | byte equality observed |
| any_completion_handler.test | 3 | 0.001056s | 0.001061s | 0.001025s | byte equality observed |
| any_completion_handler_select.test | 4 | 0.001043s | 0.001050s | 0.001037s | byte equality observed |
| any_io_executor.test | 3 | 0.001285s | 0.001309s | 0.001367s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001356s | 0.001346s | 0.001375s | byte equality observed |
| append.test | 5 | 0.001000s | 0.000998s | 0.000974s | byte equality observed |
| append_select.test | 9 | 0.000975s | 0.000965s | 0.000963s | byte equality observed |
| as_tuple.test | 8 | 0.001054s | 0.001053s | 0.001055s | byte equality observed |
| as_tuple_select.test | 8 | 0.001002s | 0.000993s | 0.000988s | byte equality observed |
| bind_allocator.test | 1 | 0.001318s | 0.001306s | 0.001252s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001190s | 0.001193s | 0.001210s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001023s | 0.001015s | 0.000996s | byte equality observed |
| bind_cancellation_slot_select.test | 7 | 0.001004s | 0.001008s | 0.000989s | byte equality observed |
| bind_executor.test | 1 | 0.001325s | 0.001342s | 0.001288s | byte equality observed |
| bind_executor_select.test | 1 | 0.001223s | 0.001238s | 0.001231s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000968s | 0.000970s | 0.000951s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000963s | 0.000964s | 0.000948s | byte equality observed |
| buffer.test | 10 | 0.000939s | 0.000940s | 0.000930s | byte equality observed |
| buffer_select.test | 10 | 0.000944s | 0.000929s | 0.000918s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001146s | 0.001142s | 0.001129s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001135s | 0.001123s | 0.001112s | byte equality observed |
| buffered_stream.test | 8 | 0.001159s | 0.001139s | 0.001135s | byte equality observed |
| buffered_stream_select.test | 9 | 0.001134s | 0.001124s | 0.001117s | byte equality observed |
| buffered_write_stream.test | 9 | 0.001146s | 0.001134s | 0.001136s | byte equality observed |
| buffered_write_stream_select.test | 9 | 0.001129s | 0.001115s | 0.001122s | byte equality observed |
| buffers_iterator.test | 9 | 0.000929s | 0.000915s | 0.000921s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000932s | 0.000917s | 0.000914s | byte equality observed |
| cancel_after.test | 1 | 0.002284s | 0.002244s | 0.002151s | byte equality observed |
| cancel_after_select.test | 1 | 0.002137s | 0.002171s | 0.002100s | byte equality observed |
| cancel_at.test | 1 | 0.002187s | 0.002137s | 0.002116s | byte equality observed |
| cancel_at_select.test | 1 | 0.002173s | 0.002163s | 0.001959s | byte equality observed |
| co_composed.test | 10 | 0.000909s | 0.000895s | 0.000897s | byte equality observed |
| co_composed_select.test | 10 | 0.000907s | 0.000886s | 0.000898s | byte equality observed |
| compose.test | 1 | 0.001244s | 0.001303s | 0.001187s | byte equality observed |
| compose_select.test | 1 | 0.001235s | 0.001238s | 0.001195s | byte equality observed |
| composed.test | 1 | 0.001216s | 0.001246s | 0.001210s | byte equality observed |
| composed_select.test | 1 | 0.001192s | 0.001213s | 0.001162s | byte equality observed |
| config.test | 10 | 0.000943s | 0.000950s | 0.000933s | byte equality observed |
| config_select.test | 10 | 0.000953s | 0.000950s | 0.000928s | byte equality observed |
| connect_pipe.test | 10 | 0.000966s | 0.000965s | 0.000953s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000954s | 0.000950s | 0.000934s | byte equality observed |
| consign.test | 10 | 0.000955s | 0.000959s | 0.000954s | byte equality observed |
| consign_select.test | 10 | 0.000938s | 0.000917s | 0.000926s | byte equality observed |
| deadline_timer.test | 1 | 0.002465s | 0.002507s | 0.002391s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002265s | 0.002124s | 0.002217s | byte equality observed |
| deferred.test | 10 | 0.000987s | 0.000950s | 0.000957s | byte equality observed |
| deferred_select.test | 10 | 0.000876s | 0.000947s | 0.000885s | byte equality observed |
| disposition.test | 10 | 0.000904s | 0.000982s | 0.000896s | byte equality observed |
| disposition_select.test | 10 | 0.000897s | 0.000973s | 0.000886s | byte equality observed |
| error.test | 10 | 0.000878s | 0.000952s | 0.000866s | byte equality observed |
| error_select.test | 10 | 0.000869s | 0.000948s | 0.000860s | byte equality observed |
| inline_executor.test | 10 | 0.000888s | 0.000958s | 0.000863s | byte equality observed |
| inline_executor_select.test | 10 | 0.000919s | 0.000949s | 0.000872s | byte equality observed |
| inline_or_executor.test | 10 | 0.000947s | 0.000948s | 0.000911s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000941s | 0.000941s | 0.000900s | byte equality observed |
| io_context.test | 1 | 0.001907s | 0.002023s | 0.001795s | byte equality observed |
| io_context_select.test | 1 | 0.001682s | 0.001691s | 0.001753s | byte equality observed |
| io_context_strand.test | 1 | 0.001523s | 0.001489s | 0.001507s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001460s | 0.001442s | 0.001438s | byte equality observed |
| ip_host_name.test | 10 | 0.000860s | 0.000880s | 0.000849s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000854s | 0.000863s | 0.000826s | byte equality observed |
| ip_icmp.test | 10 | 0.000899s | 0.000883s | 0.000858s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000890s | 0.000886s | 0.000856s | byte equality observed |
| ip_multicast.test | 10 | 0.000966s | 0.000960s | 0.000942s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000943s | 0.000949s | 0.000922s | byte equality observed |
| ip_tcp.test | 10 | 0.001177s | 0.001176s | 0.001162s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001150s | 0.001152s | 0.001145s | byte equality observed |
| ip_udp.test | 10 | 0.000985s | 0.000989s | 0.000957s | byte equality observed |
| ip_udp_select.test | 10 | 0.000968s | 0.000962s | 0.000962s | byte equality observed |
| ip_unicast.test | 10 | 0.000940s | 0.000934s | 0.000921s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000924s | 0.000915s | 0.000900s | byte equality observed |
| ip_v6_only.test | 10 | 0.000932s | 0.000927s | 0.000912s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000918s | 0.000931s | 0.000924s | byte equality observed |
| is_read_buffered.test | 10 | 0.000860s | 0.000846s | 0.000838s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000856s | 0.000848s | 0.000834s | byte equality observed |
| is_write_buffered.test | 10 | 0.000849s | 0.000831s | 0.000831s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000842s | 0.000836s | 0.000838s | byte equality observed |
| prepend.test | 10 | 0.000910s | 0.000906s | 0.000892s | byte equality observed |
| prepend_select.test | 10 | 0.000894s | 0.000903s | 0.000877s | byte equality observed |
| read.test | 10 | 0.001303s | 0.001272s | 0.001256s | byte equality observed |
| read_at.test | 10 | 0.001719s | 0.001782s | 0.001614s | byte equality observed |
| read_at_select.test | 10 | 0.001737s | 0.001794s | 0.001622s | byte equality observed |
| read_select.test | 10 | 0.001349s | 0.001316s | 0.001273s | byte equality observed |
| read_until.test | 10 | 0.001097s | 0.001070s | 0.001058s | byte equality observed |
| read_until_select.test | 10 | 0.001089s | 0.001078s | 0.001060s | byte equality observed |
| recycling_allocator.test | 10 | 0.000900s | 0.000899s | 0.000883s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000894s | 0.000894s | 0.000889s | byte equality observed |
| signal_set.test | 10 | 0.000916s | 0.000915s | 0.000901s | byte equality observed |
| signal_set_select.test | 10 | 0.000916s | 0.000921s | 0.000893s | byte equality observed |
| socket_base.test | 10 | 0.000993s | 0.001000s | 0.000986s | byte equality observed |
| socket_base_select.test | 10 | 0.000986s | 0.000984s | 0.000964s | byte equality observed |
| spawn.test | 10 | 0.001107s | 0.001097s | 0.001084s | byte equality observed |
| spawn_select.test | 10 | 0.001098s | 0.001074s | 0.001077s | byte equality observed |
| static_thread_pool.test | 10 | 0.000901s | 0.000889s | 0.000887s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000878s | 0.000886s | 0.000868s | byte equality observed |
| strand.test | 1 | 0.001619s | 0.001621s | 0.001621s | byte equality observed |
| strand_select.test | 1 | 0.001550s | 0.001528s | 0.001509s | byte equality observed |
| streambuf.test | 10 | 0.001039s | 0.001067s | 0.001032s | byte equality observed |
| streambuf_select.test | 10 | 0.000994s | 0.001000s | 0.000968s | byte equality observed |
| thread_pool.test | 5 | 0.003109s | 0.003139s | 0.003105s | byte equality observed |
| thread_pool_select.test | 6 | 0.003123s | 0.003107s | 0.003093s | byte equality observed |
| write.test | 10 | 0.001416s | 0.001365s | 0.001356s | byte equality observed |
| write_at.test | 10 | 0.001535s | 0.001531s | 0.001505s | byte equality observed |
| write_at_select.test | 10 | 0.001509s | 0.001493s | 0.001479s | byte equality observed |
| write_select.test | 10 | 0.001373s | 0.001329s | 0.001339s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43796354412).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
