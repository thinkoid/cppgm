# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.469105 | 3.249751 | 2.539386 | 0.002073 | 0.002551 | 0.002069 |
| any_completion_executor_select.test | RUN | 0.467125 | 3.233262 | 2.676572 | 0.002128 | 0.002508 | 0.002459 |
| any_completion_handler.test | RUN | 0.561685 | 2.961960 | 2.346545 | 0.001789 | 0.001985 | 0.002003 |
| any_completion_handler_select.test | RUN | 0.552455 | 3.091455 | 2.513824 | 0.001683 | 0.002079 | 0.001544 |
| any_io_executor.test | RUN | 0.505941 | 3.453111 | 2.828230 | 0.001820 | 0.002418 | 0.002258 |
| any_io_executor_select.test | RUN | 0.517166 | 3.441899 | 2.841580 | 0.002104 | 0.002152 | 0.002005 |
| append.test | RUN | 0.470014 | 2.796937 | 2.054715 | 0.001540 | 0.002036 | 0.001672 |
| append_select.test | RUN | 0.476544 | 2.889781 | 2.048297 | 0.001488 | 0.001862 | 0.001492 |
| as_tuple.test | RUN | 0.615168 | 3.380830 | 2.941663 | 0.001793 | 0.001981 | 0.001774 |
| as_tuple_select.test | RUN | 0.602148 | 3.376110 | 2.888958 | 0.001576 | 0.002006 | 0.001664 |
| associated_allocator.test | LINK | 0.130155 | 0.280834 | 0.315364 | — | — | — |
| associated_allocator_select.test | LINK | 0.130046 | 0.288713 | 0.302623 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.138750 | 0.321909 | 0.319695 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.141413 | 0.319917 | 0.333449 | — | — | — |
| associated_executor.test | LINK | 0.198008 | 0.519495 | 0.528785 | — | — | — |
| associated_executor_select.test | LINK | 0.195477 | 0.524080 | 0.530414 | — | — | — |
| associated_immediate_executor.test | LINK | 0.180850 | 0.519069 | 0.483030 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.183306 | 0.527197 | 0.480941 | — | — | — |
| associator.test | LINK | 0.102903 | 0.234247 | 0.255858 | — | — | — |
| associator_select.test | LINK | 0.102203 | 0.246306 | 0.266980 | — | — | — |
| awaitable.test | LINK | 0.101410 | 0.236519 | 0.263324 | — | — | — |
| awaitable_select.test | LINK | 0.103164 | 0.237436 | 0.249603 | — | — | — |
| basic_datagram_socket.test | LINK | 0.305183 | 0.741437 | 0.926107 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.309933 | 0.760160 | 0.951330 | — | — | — |
| basic_deadline_timer.test | LINK | 0.376201 | 0.882889 | 1.058888 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.387560 | 0.901312 | 1.066373 | — | — | — |
| basic_file.test | LINK | 0.113151 | 0.242669 | 0.251835 | — | — | — |
| basic_file_select.test | LINK | 0.112948 | 0.243119 | 0.250000 | — | — | — |
| basic_random_access_file.test | LINK | 0.108257 | 0.233822 | 0.253734 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.107298 | 0.229105 | 0.251972 | — | — | — |
| basic_raw_socket.test | LINK | 0.321784 | 0.746059 | 0.915916 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.329629 | 0.759947 | 0.964081 | — | — | — |
| basic_readable_pipe.test | LINK | 0.314215 | 0.729444 | 0.819132 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.329931 | 0.755947 | 0.982310 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.315585 | 0.752175 | 0.961222 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.321321 | 0.775082 | 0.985533 | — | — | — |
| basic_signal_set.test | LINK | 0.291765 | 0.683626 | 0.771105 | — | — | — |
| basic_signal_set_select.test | LINK | 0.307036 | 0.736713 | 0.939818 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.316428 | 0.740057 | 0.966902 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.334019 | 0.765289 | 0.977598 | — | — | — |
| basic_stream_file.test | LINK | 0.107911 | 0.235010 | 0.264668 | — | — | — |
| basic_stream_file_select.test | LINK | 0.103865 | 0.242326 | 0.261279 | — | — | — |
| basic_stream_socket.test | LINK | 0.308882 | 0.742383 | 0.982411 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.320201 | 0.780581 | 0.958103 | — | — | — |
| basic_streambuf.test | LINK | 0.153259 | 0.334603 | 0.360135 | — | — | — |
| basic_streambuf_select.test | LINK | 0.154679 | 0.333694 | 0.354209 | — | — | — |
| basic_waitable_timer.test | LINK | 0.288158 | 0.703131 | 0.890466 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.291066 | 0.722699 | 0.901660 | — | — | — |
| basic_writable_pipe.test | LINK | 0.296944 | 0.705509 | 0.810530 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.314770 | 0.774470 | 1.029546 | — | — | — |
| bind_allocator.test | RUN | 0.491119 | 2.815850 | 2.295735 | 0.001740 | 0.002356 | 0.002143 |
| bind_allocator_select.test | RUN | 0.506997 | 2.778232 | 2.311926 | 0.001336 | 0.001968 | 0.001848 |
| bind_cancellation_slot.test | RUN | 0.510094 | 2.775742 | 2.368974 | 0.001340 | 0.001582 | 0.001490 |
| bind_cancellation_slot_select.test | RUN | 0.513647 | 2.857250 | 2.258402 | 0.001167 | 0.001531 | 0.001354 |
| bind_executor.test | RUN | 0.346831 | 2.050557 | 1.455491 | 0.001712 | 0.002223 | 0.002096 |
| bind_executor_select.test | RUN | 0.350747 | 2.045670 | 1.454521 | 0.001556 | 0.002036 | 0.001799 |
| bind_immediate_executor.test | RUN | 0.260777 | 1.633984 | 0.901425 | 0.001249 | 0.001563 | 0.001286 |
| bind_immediate_executor_select.test | RUN | 0.267249 | 1.621226 | 0.992219 | 0.001161 | 0.001447 | 0.001308 |
| buffer.test | RUN | 0.159449 | 0.650143 | 0.534224 | 0.001158 | 0.001432 | 0.001267 |
| buffer_select.test | RUN | 0.161087 | 0.661287 | 0.539163 | 0.001098 | 0.001438 | 0.001209 |
| buffer_registration.test | LINK | 0.128478 | 0.346362 | 0.321021 | — | — | — |
| buffer_registration_select.test | LINK | 0.128025 | 0.350327 | 0.316789 | — | — | — |
| buffered_read_stream.test | RUN | 0.567330 | 4.324606 | 3.037880 | 0.001568 | 0.002330 | 0.002284 |
| buffered_read_stream_select.test | RUN | 0.571099 | 4.398112 | 3.178408 | 0.001448 | 0.002404 | 0.002134 |
| buffered_stream.test | RUN | 0.745192 | 6.908447 | 5.890417 | 0.001562 | 0.002296 | 0.002267 |
| buffered_stream_select.test | RUN | 0.750803 | 7.002286 | 5.666160 | 0.001571 | 0.002296 | 0.001960 |
| buffered_write_stream.test | RUN | 0.978648 | 5.948993 | 4.997457 | 0.002152 | 0.002359 | 0.002162 |
| buffered_write_stream_select.test | RUN | 0.997030 | 6.049090 | 4.863767 | 0.001844 | 0.002252 | 0.002116 |
| buffers_iterator.test | RUN | 0.284402 | 0.541922 | 0.750461 | 0.001501 | 0.001608 | 0.001705 |
| buffers_iterator_select.test | RUN | 0.286598 | 0.511157 | 0.764572 | 0.001571 | 0.001746 | 0.001389 |
| cancel_after.test | RUN | 0.821428 | 4.505831 | 3.611333 | 0.003199 | 0.004357 | 0.003476 |
| cancel_after_select.test | RUN | 0.835078 | 4.540936 | 3.608022 | 0.002986 | 0.003826 | 0.003693 |
| cancel_at.test | RUN | 0.704188 | 4.197305 | 3.562791 | 0.002632 | 0.003939 | 0.003761 |
| cancel_at_select.test | RUN | 0.685157 | 4.075623 | 3.568558 | 0.002293 | 0.003476 | 0.003388 |
| cancellation_signal.test | LINK | 0.098403 | 0.190965 | 0.290688 | — | — | — |
| cancellation_signal_select.test | LINK | 0.099015 | 0.199196 | 0.309302 | — | — | — |
| cancellation_state.test | LINK | 0.095385 | 0.202885 | 0.325302 | — | — | — |
| cancellation_state_select.test | LINK | 0.097568 | 0.199627 | 0.330676 | — | — | — |
| cancellation_type.test | LINK | 0.094142 | 0.156187 | 0.244968 | — | — | — |
| cancellation_type_select.test | LINK | 0.104861 | 0.156086 | 0.290138 | — | — | — |
| co_composed.test | RUN | 0.102088 | 0.155833 | 0.316201 | 0.001412 | 0.001563 | 0.001460 |
| co_composed_select.test | RUN | 0.105028 | 0.212545 | 0.298721 | 0.001250 | 0.001542 | 0.001482 |
| co_spawn.test | LINK | 0.107665 | 0.198052 | 0.257648 | — | — | — |
| co_spawn_select.test | LINK | 0.104734 | 0.233461 | 0.261675 | — | — | — |
| completion_condition.test | LINK | 0.137044 | 0.347101 | 0.338031 | — | — | — |
| completion_condition_select.test | LINK | 0.139059 | 0.356200 | 0.323834 | — | — | — |
| compose.test | RUN | 0.617659 | 3.528426 | 2.950868 | 0.001834 | 0.002321 | 0.002238 |
| compose_select.test | RUN | 0.626301 | 3.433529 | 2.961247 | 0.001502 | 0.002254 | 0.001737 |
| composed.test | RUN | 0.614012 | 3.455533 | 2.922448 | 0.001630 | 0.002077 | 0.002031 |
| composed_select.test | RUN | 0.614325 | 3.355899 | 2.910246 | 0.001485 | 0.001939 | 0.001748 |
| config.test | RUN | 0.315168 | 2.127276 | 1.299434 | 0.001599 | 0.001967 | 0.001818 |
| config_select.test | RUN | 0.347464 | 2.288411 | 1.493196 | 0.001724 | 0.001822 | 0.001718 |
| connect.test | LINK | 0.991153 | 7.391442 | 6.377060 | — | — | — |
| connect_select.test | LINK | 1.001176 | 7.384300 | 6.363920 | — | — | — |
| connect_pipe.test | RUN | 0.542190 | 2.823556 | 2.372738 | 0.001522 | 0.002042 | 0.001888 |
| connect_pipe_select.test | RUN | 0.566485 | 2.935763 | 2.531474 | 0.001393 | 0.002142 | 0.001670 |
| consign.test | RUN | 0.472715 | 2.741555 | 2.305857 | 0.001668 | 0.001769 | 0.001918 |
| consign_select.test | RUN | 0.480483 | 2.789617 | 2.282259 | 0.001300 | 0.002012 | 0.001914 |
| coroutine.test | LINK | 0.108748 | 0.286607 | 0.299110 | — | — | — |
| coroutine_select.test | LINK | 0.109736 | 0.269683 | 0.298311 | — | — | — |
| deadline_timer.test | RUN | 0.687171 | 3.582108 | 3.042002 | 0.003149 | 0.002982 | 0.003582 |
| deadline_timer_select.test | RUN | 0.695751 | 3.522237 | 2.982884 | 0.002812 | 0.003059 | 0.003137 |
| deferred.test | RUN | 0.116112 | 0.246356 | 0.293816 | 0.001526 | 0.001828 | 0.001508 |
| deferred_select.test | RUN | 0.116325 | 0.252123 | 0.287436 | 0.001492 | 0.001650 | 0.001518 |
| detached.test | LINK | 0.128637 | 0.277602 | 0.332787 | — | — | — |
| detached_select.test | LINK | 0.131079 | 0.277591 | 0.321095 | — | — | — |
| disposition.test | RUN | 0.122164 | 0.674402 | 0.578092 | 0.001238 | 0.001915 | 0.001860 |
| disposition_select.test | RUN | 0.119922 | 0.668298 | 0.596774 | 0.001161 | 0.001938 | 0.001710 |
| error.test | RUN | 0.114272 | 0.656514 | 0.538401 | 0.001267 | 0.001784 | 0.001671 |
| error_select.test | RUN | 0.114284 | 0.650523 | 0.522320 | 0.001254 | 0.001830 | 0.001445 |
| file_base.test | LINK | 0.141662 | 0.556936 | 0.517883 | — | — | — |
| file_base_select.test | LINK | 0.142800 | 0.539225 | 0.496361 | — | — | — |
| fwd_first.test | LINK | 0.308444 | 0.821745 | 1.073549 | — | — | — |
| fwd_last.test | LINK | 0.315706 | 0.765229 | 1.062347 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.122533 | 0.314616 | 0.364877 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.125772 | 0.321943 | 0.356517 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.497795 | 2.907100 | 2.125412 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.494505 | 3.005103 | 2.106379 | — | — | — |
| generic_raw_protocol.test | LINK | 0.489751 | 2.872803 | 2.147169 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.487668 | 2.924610 | 2.136796 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.425564 | 2.404305 | 1.834668 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.433218 | 2.565177 | 1.825109 | — | — | — |
| generic_stream_protocol.test | LINK | 0.453891 | 2.639787 | 1.965978 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.462717 | 2.642212 | 1.930183 | — | — | — |
| high_resolution_timer.test | LINK | 0.205956 | 0.461955 | 0.594753 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.206315 | 0.484510 | 0.640764 | — | — | — |
| immediate.test | LINK | 0.140654 | 0.356778 | 0.357526 | — | — | — |
| immediate_select.test | LINK | 0.141337 | 0.344148 | 0.362106 | — | — | — |
| inline_executor.test | RUN | 0.171890 | 0.555049 | 0.539401 | 0.001216 | 0.001427 | 0.001336 |
| inline_executor_select.test | RUN | 0.183224 | 0.554143 | 0.530050 | 0.001340 | 0.001337 | 0.001328 |
| inline_or_executor.test | RUN | 0.288959 | 1.565616 | 1.085839 | 0.001215 | 0.001401 | 0.001414 |
| inline_or_executor_select.test | RUN | 0.291744 | 1.601297 | 1.156404 | 0.001198 | 0.001427 | 0.001368 |
| io_context.test | RUN | 0.391860 | 2.458848 | 1.867273 | 0.001936 | 0.002462 | 0.002200 |
| io_context_select.test | RUN | 0.397334 | 2.382362 | 1.823167 | 0.001730 | 0.002290 | 0.002015 |
| io_context_strand.test | RUN | 0.377817 | 2.097079 | 1.638035 | 0.001861 | 0.002377 | 0.002218 |
| io_context_strand_select.test | RUN | 0.383142 | 2.043298 | 1.663780 | 0.001675 | 0.002113 | 0.001898 |
| ip_address.test | LINK | 0.146357 | 0.487939 | 0.445687 | — | — | — |
| ip_address_select.test | LINK | 0.148556 | 0.493521 | 0.438621 | — | — | — |
| ip_address_v4.test | LINK | 0.152920 | 0.503926 | 0.558982 | — | — | — |
| ip_address_v4_select.test | LINK | 0.163318 | 0.511387 | 0.515111 | — | — | — |
| ip_address_v6.test | LINK | 0.162200 | 0.740977 | 0.940651 | — | — | — |
| ip_address_v6_select.test | LINK | 0.163087 | 0.730730 | 0.926014 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.128838 | 0.344752 | 0.594803 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.130826 | 0.432310 | 0.594525 | — | — | — |
| ip_basic_resolver.test | LINK | 0.201387 | 0.715141 | 0.908904 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.208389 | 0.720237 | 0.940711 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.074537 | 0.229874 | 0.267036 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.080122 | 0.242900 | 0.270712 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.131173 | 0.486950 | 0.597606 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.131463 | 0.476378 | 0.609464 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.125365 | 0.470761 | 0.591991 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.131027 | 0.459176 | 0.585066 | — | — | — |
| ip_host_name.test | RUN | 0.132776 | 0.603462 | 0.669018 | 0.001182 | 0.001415 | 0.001728 |
| ip_host_name_select.test | RUN | 0.133821 | 0.595837 | 0.671096 | 0.001166 | 0.001705 | 0.001722 |
| ip_icmp.test | RUN | 0.603659 | 5.964102 | 4.433702 | 0.001257 | 0.001996 | 0.001382 |
| ip_icmp_select.test | RUN | 0.612840 | 6.085401 | 4.343085 | 0.001266 | 0.001927 | 0.001338 |
| ip_multicast.test | RUN | 0.417085 | 2.898493 | 2.439660 | 0.001337 | 0.002038 | 0.001731 |
| ip_multicast_select.test | RUN | 0.374242 | 2.894779 | 2.363552 | 0.001302 | 0.001862 | 0.001877 |
| ip_resolver_query_base.test | LINK | 0.085684 | 0.250546 | 0.268871 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.086544 | 0.256179 | 0.269866 | — | — | — |
| ip_tcp.test | RUN | 0.904821 | 8.486359 | 6.891314 | 0.001741 | 0.002306 | 0.001989 |
| ip_tcp_select.test | RUN | 0.916998 | 8.840309 | 6.665762 | 0.001746 | 0.002730 | 0.002186 |
| ip_udp.test | RUN | 0.653448 | 6.009292 | 4.728343 | 0.001414 | 0.002082 | 0.001912 |
| ip_udp_select.test | RUN | 0.657919 | 6.188711 | 4.609803 | 0.001387 | 0.002092 | 0.001628 |
| ip_unicast.test | RUN | 0.329527 | 2.644595 | 2.164055 | 0.001282 | 0.001959 | 0.001731 |
| ip_unicast_select.test | RUN | 0.328688 | 2.658223 | 2.114190 | 0.001271 | 0.001792 | 0.001606 |
| ip_v6_only.test | RUN | 0.344410 | 2.696253 | 2.205662 | 0.001377 | 0.002074 | 0.001465 |
| ip_v6_only_select.test | RUN | 0.360410 | 2.820896 | 2.173687 | 0.001405 | 0.001673 | 0.001679 |
| is_read_buffered.test | RUN | 0.244906 | 0.826567 | 1.117111 | 0.001404 | 0.001617 | 0.001409 |
| is_read_buffered_select.test | RUN | 0.259497 | 0.884994 | 1.155360 | 0.001227 | 0.001828 | 0.001608 |
| is_write_buffered.test | RUN | 0.247029 | 0.879807 | 1.126029 | 0.001241 | 0.001628 | 0.001590 |
| is_write_buffered_select.test | RUN | 0.248983 | 0.903864 | 1.161460 | 0.001178 | 0.001885 | 0.001445 |
| local_basic_endpoint.test | LINK | 0.125338 | 0.501602 | 0.557800 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.123541 | 0.483590 | 0.551629 | — | — | — |
| local_connect_pair.test | LINK | 0.313661 | 2.684705 | 2.017573 | — | — | — |
| local_connect_pair_select.test | LINK | 0.320897 | 2.688124 | 1.985572 | — | — | — |
| local_datagram_protocol.test | LINK | 0.427746 | 3.574892 | 2.884820 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.452302 | 3.589350 | 2.782591 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.434302 | 3.475171 | 2.852658 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.439333 | 3.524963 | 2.818004 | — | — | — |
| local_stream_protocol.test | LINK | 0.399554 | 3.289032 | 2.696262 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.409708 | 3.291143 | 2.671129 | — | — | — |
| placeholders.test | LINK | 0.078501 | 0.239722 | 0.308423 | — | — | — |
| placeholders_select.test | LINK | 0.078996 | 0.248002 | 0.283860 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.216291 | 0.711188 | 0.824110 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.213057 | 0.749540 | 0.999310 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.210927 | 0.749565 | 0.823573 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.215894 | 0.787879 | 0.981007 | — | — | — |
| posix_descriptor_base.test | LINK | 0.089037 | 0.267703 | 0.274037 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.087890 | 0.309340 | 0.272049 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.416177 | 3.311683 | 2.867934 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.431593 | 3.311543 | 2.887626 | — | — | — |
| prepend.test | RUN | 0.326265 | 2.674587 | 2.233108 | 0.001260 | 0.001734 | 0.001719 |
| prepend_select.test | RUN | 0.332728 | 2.746019 | 2.219085 | 0.001384 | 0.001886 | 0.001865 |
| random_access_file.test | LINK | 0.198451 | 0.612996 | 0.680459 | — | — | — |
| random_access_file_select.test | LINK | 0.211029 | 0.669995 | 0.826316 | — | — | — |
| read.test | RUN | 1.255953 | 16.840090 | 12.959293 | 0.002256 | 0.002212 | 0.002338 |
| read_select.test | RUN | 1.378929 | 16.776125 | 13.075803 | 0.002283 | 0.002219 | 0.002305 |
| read_at.test | RUN | 1.419194 | 24.948833 | 18.199731 | 0.002691 | 0.002494 | 0.002261 |
| read_at_select.test | RUN | 1.424105 | 24.668352 | 18.125896 | 0.002496 | 0.002454 | 0.001965 |
| read_until.test | RUN | 0.779350 | 6.273522 | 4.962191 | 0.001926 | 0.001981 | 0.001936 |
| read_until_select.test | RUN | 0.796316 | 6.293088 | 5.088366 | 0.001556 | 0.001949 | 0.002012 |
| readable_pipe.test | LINK | 0.519643 | 2.611512 | 2.236594 | — | — | — |
| readable_pipe_select.test | LINK | 0.541686 | 2.777426 | 2.437003 | — | — | — |
| recycling_allocator.test | RUN | 0.158611 | 0.394023 | 0.430171 | 0.001537 | 0.001518 | 0.001780 |
| recycling_allocator_select.test | RUN | 0.159224 | 0.390287 | 0.434564 | 0.001584 | 0.001432 | 0.001392 |
| redirect_disposition.test | LINK | 0.649306 | 3.685485 | 3.405288 | — | — | — |
| redirect_disposition_select.test | LINK | 0.655943 | 3.630107 | 3.406924 | — | — | — |
| redirect_error.test | LINK | 0.590020 | 3.089820 | 3.037665 | — | — | — |
| redirect_error_select.test | LINK | 0.595079 | 3.053997 | 3.027140 | — | — | — |
| registered_buffer.test | LINK | 0.151771 | 0.321860 | 0.413208 | — | — | — |
| registered_buffer_select.test | LINK | 0.149113 | 0.325464 | 0.404911 | — | — | — |
| signal_set.test | RUN | 0.471680 | 2.549470 | 2.058557 | 0.001473 | 0.001765 | 0.001740 |
| signal_set_select.test | RUN | 0.489157 | 2.630755 | 2.272309 | 0.001621 | 0.001557 | 0.001665 |
| signal_set_base.test | LINK | 0.124384 | 0.249491 | 0.303321 | — | — | — |
| signal_set_base_select.test | LINK | 0.123548 | 0.250940 | 0.294492 | — | — | — |
| socket_base.test | RUN | 0.576641 | 3.969655 | 3.253727 | 0.001776 | 0.001836 | 0.001976 |
| socket_base_select.test | RUN | 0.581063 | 3.858175 | 3.242353 | 0.001555 | 0.001922 | 0.001800 |
| spawn.test | RUN | 1.039915 | 6.290784 | 5.649907 | 0.001880 | 0.002069 | 0.001855 |
| spawn_select.test | RUN | 1.055189 | 6.315153 | 5.617757 | 0.001876 | 0.001932 | 0.002050 |
| static_thread_pool.test | RUN | 0.266041 | 0.595048 | 0.708251 | 0.001557 | 0.001761 | 0.001692 |
| static_thread_pool_select.test | RUN | 0.277792 | 0.663930 | 0.901666 | 0.001310 | 0.001710 | 0.001802 |
| steady_timer.test | LINK | 0.292642 | 0.678983 | 0.999746 | — | — | — |
| steady_timer_select.test | LINK | 0.299895 | 0.703954 | 1.020327 | — | — | — |
| strand.test | RUN | 0.641728 | 3.472080 | 3.352568 | 0.002145 | 0.002291 | 0.002787 |
| strand_select.test | RUN | 0.660091 | 3.473705 | 3.197570 | 0.002341 | 0.002150 | 0.002848 |
| stream_file.test | LINK | 0.289560 | 0.605846 | 0.724082 | — | — | — |
| stream_file_select.test | LINK | 0.299238 | 0.640553 | 0.936382 | — | — | — |
| streambuf.test | RUN | 0.160853 | 0.339956 | 0.513082 | 0.001291 | 0.001245 | 0.001676 |
| streambuf_select.test | RUN | 0.175264 | 0.333209 | 0.529828 | 0.001304 | 0.001306 | 0.001820 |
| system_timer.test | LINK | 0.423971 | 2.286624 | 2.115756 | — | — | — |
| system_timer_select.test | LINK | 0.422822 | 2.266956 | 1.955711 | — | — | — |
| system_context.test | LINK | 0.189814 | 0.382156 | 0.446923 | — | — | — |
| system_context_select.test | LINK | 0.194152 | 0.405901 | 0.530475 | — | — | — |
| system_executor.test | LINK | 0.309661 | 1.241283 | 0.869957 | — | — | — |
| system_executor_select.test | LINK | 0.323747 | 1.210078 | 0.988788 | — | — | — |
| this_coro.test | LINK | 0.074138 | 0.150692 | 0.185706 | — | — | — |
| this_coro_select.test | LINK | 0.080379 | 0.153208 | 0.190978 | — | — | — |
| thread_pool.test | RUN | 0.299488 | 1.670441 | 1.190058 | 0.002289 | 0.002430 | 0.002477 |
| thread_pool_select.test | RUN | 0.307637 | 1.696800 | 1.312798 | 0.002148 | 0.002342 | 0.002445 |
| time_traits.test | LINK | 0.160815 | 0.302484 | 0.366812 | — | — | — |
| time_traits_select.test | LINK | 0.161070 | 0.305408 | 0.351845 | — | — | — |
| ts_buffer.test | LINK | 0.150732 | 0.335884 | 0.360594 | — | — | — |
| ts_buffer_select.test | LINK | 0.153144 | 0.335406 | 0.369258 | — | — | — |
| ts_executor.test | LINK | 0.210427 | 0.626940 | 0.587044 | — | — | — |
| ts_executor_select.test | LINK | 0.218025 | 0.663445 | 0.707566 | — | — | — |
| ts_internet.test | LINK | 0.233493 | 0.769948 | 0.779344 | — | — | — |
| ts_internet_select.test | LINK | 0.234399 | 0.786458 | 0.942417 | — | — | — |
| ts_io_context.test | LINK | 0.188823 | 0.584376 | 0.607017 | — | — | — |
| ts_io_context_select.test | LINK | 0.197954 | 0.638858 | 0.902424 | — | — | — |
| ts_net.test | LINK | 0.275819 | 0.936491 | 1.422683 | — | — | — |
| ts_net_select.test | LINK | 0.285803 | 0.958330 | 1.428819 | — | — | — |
| ts_netfwd.test | LINK | 0.272826 | 0.940377 | 1.398794 | — | — | — |
| ts_netfwd_select.test | LINK | 0.283555 | 0.953307 | 1.474564 | — | — | — |
| ts_socket.test | LINK | 0.227063 | 0.721868 | 1.107442 | — | — | — |
| ts_socket_select.test | LINK | 0.236066 | 0.737527 | 1.118451 | — | — | — |
| ts_timer.test | LINK | 0.201633 | 0.639919 | 0.982835 | — | — | — |
| ts_timer_select.test | LINK | 0.206091 | 0.659908 | 0.989835 | — | — | — |
| use_awaitable.test | LINK | 0.073382 | 0.217914 | 0.275434 | — | — | — |
| use_awaitable_select.test | LINK | 0.073578 | 0.215449 | 0.260438 | — | — | — |
| wait_traits.test | LINK | 0.073036 | 0.210623 | 0.290116 | — | — | — |
| wait_traits_select.test | LINK | 0.074938 | 0.208413 | 0.267667 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.076159 | 0.214831 | 0.270169 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.072766 | 0.210278 | 0.285769 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.081285 | 0.217012 | 0.280401 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.073133 | 0.215200 | 0.266977 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.073583 | 0.218529 | 0.318239 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.075520 | 0.215855 | 0.350730 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.073274 | 0.209815 | 0.345488 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.074465 | 0.206404 | 0.319808 | — | — | — |
| windows_object_handle.test | LINK | 0.187681 | 0.575995 | 0.680132 | — | — | — |
| windows_object_handle_select.test | LINK | 0.200714 | 0.613813 | 0.848425 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.197796 | 0.610761 | 0.736417 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.203016 | 0.643816 | 0.923105 | — | — | — |
| windows_random_access_handle.test | LINK | 0.191134 | 0.583684 | 0.686671 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.197342 | 0.624824 | 0.898367 | — | — | — |
| windows_stream_handle.test | LINK | 0.191166 | 0.575041 | 0.700700 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.194545 | 0.613768 | 0.891204 | — | — | — |
| writable_pipe.test | LINK | 0.347935 | 2.523633 | 2.375640 | — | — | — |
| writable_pipe_select.test | LINK | 0.350519 | 2.642512 | 2.462101 | — | — | — |
| write.test | RUN | 1.372608 | 12.972858 | 12.784310 | 0.002251 | 0.002118 | 0.002244 |
| write_select.test | RUN | 1.432238 | 12.937109 | 12.781097 | 0.002086 | 0.001896 | 0.001982 |
| write_at.test | RUN | 1.436776 | 19.191430 | 16.049708 | 0.002000 | 0.002100 | 0.002422 |
| write_at_select.test | RUN | 1.464515 | 19.167409 | 16.290096 | 0.002273 | 0.002392 | 0.002575 |
| any_executor.test | RUN | 0.605443 | 6.605108 | 5.253688 | 0.002155 | 0.002332 | 0.002112 |
| blocking.test | RUN | 1.283677 | 7.622042 | 9.899054 | 0.005995 | 0.005892 | 0.006591 |
| blocking_adaptation.test | RUN | 0.649540 | 3.279617 | 4.585119 | 0.003478 | 0.003156 | 0.003787 |
| context_as.test | RUN | 0.397908 | 2.351153 | 1.587629 | 0.001715 | 0.001628 | 0.001657 |
| executor.test | RUN | 0.108854 | 0.215586 | 0.297152 | 0.001434 | 0.001852 | 0.001853 |
| inline_exception_handling.test | RUN | 1.268099 | 6.583178 | 9.459977 | 0.005978 | 0.004405 | 0.004472 |
| invocable_archetype.test | RUN | 0.104713 | 0.231226 | 0.259129 | 0.001570 | 0.001767 | 0.001648 |
| mapping.test | RUN | 1.284590 | 6.950365 | 9.568836 | 0.004348 | 0.004366 | 0.004518 |
| outstanding_work.test | RUN | 0.590623 | 3.017899 | 4.296561 | 0.002935 | 0.003505 | 0.004609 |
| prefer_only.test | RUN | 0.210603 | 1.186344 | 0.960754 | 0.001319 | 0.001616 | 0.001658 |
| relationship.test | RUN | 0.399959 | 3.039252 | 4.280367 | 0.002409 | 0.003409 | 0.003717 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.977×, 0.995× | 1.006× |
| clang | 0.999× | 0.979×, 1.019× | 1.036× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001395s | 0.001411s | 0.001354s | byte equality observed |
| any_completion_executor_select.test | 5 | 0.001364s | 0.001400s | 0.001335s | byte equality observed |
| any_completion_handler.test | 10 | 0.001121s | 0.001117s | 0.001080s | byte equality observed |
| any_completion_handler_select.test | 8 | 0.001122s | 0.001102s | 0.001079s | byte equality observed |
| any_io_executor.test | 7 | 0.001373s | 0.001384s | 0.001318s | byte equality observed |
| any_io_executor_select.test | 6 | 0.001349s | 0.001391s | 0.001346s | byte equality observed |
| append.test | 10 | 0.001063s | 0.001074s | 0.001037s | byte equality observed |
| append_select.test | 10 | 0.001052s | 0.001043s | 0.001019s | byte equality observed |
| as_tuple.test | 10 | 0.001127s | 0.001136s | 0.001102s | byte equality observed |
| as_tuple_select.test | 9 | 0.001073s | 0.001088s | 0.001048s | byte equality observed |
| bind_allocator.test | 1 | 0.001455s | 0.001479s | 0.001402s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001229s | 0.001271s | 0.001243s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000972s | 0.001026s | 0.001002s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000924s | 0.000924s | 0.000903s | byte equality observed |
| bind_executor.test | 1 | 0.001397s | 0.001432s | 0.001343s | byte equality observed |
| bind_executor_select.test | 1 | 0.001736s | 0.001619s | 0.001624s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000941s | 0.000960s | 0.000954s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000915s | 0.000929s | 0.000914s | byte equality observed |
| buffer.test | 10 | 0.000874s | 0.000927s | 0.000884s | byte equality observed |
| buffer_select.test | 10 | 0.000879s | 0.000890s | 0.000882s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001158s | 0.001149s | 0.001150s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001102s | 0.001114s | 0.001126s | byte equality observed |
| buffered_stream.test | 10 | 0.001135s | 0.001176s | 0.001140s | byte equality observed |
| buffered_stream_select.test | 9 | 0.001128s | 0.001129s | 0.001117s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001132s | 0.001176s | 0.001131s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001131s | 0.001119s | 0.001128s | byte equality observed |
| buffers_iterator.test | 10 | 0.000857s | 0.000870s | 0.000886s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000859s | 0.000871s | 0.000857s | byte equality observed |
| cancel_after.test | 1 | 0.002317s | 0.002554s | 0.002449s | byte equality observed |
| cancel_after_select.test | 1 | 0.001935s | 0.002119s | 0.002076s | byte equality observed |
| cancel_at.test | 1 | 0.002693s | 0.002913s | 0.002656s | byte equality observed |
| cancel_at_select.test | 1 | 0.002591s | 0.002949s | 0.002573s | byte equality observed |
| co_composed.test | 10 | 0.000906s | 0.000903s | 0.000904s | byte equality observed |
| co_composed_select.test | 10 | 0.000860s | 0.000847s | 0.000881s | byte equality observed |
| compose.test | 1 | 0.001360s | 0.001407s | 0.001347s | byte equality observed |
| compose_select.test | 1 | 0.001159s | 0.001175s | 0.001158s | byte equality observed |
| composed.test | 1 | 0.001716s | 0.001768s | 0.001635s | byte equality observed |
| composed_select.test | 1 | 0.001240s | 0.001348s | 0.001199s | byte equality observed |
| config.test | 10 | 0.000964s | 0.000964s | 0.000938s | byte equality observed |
| config_select.test | 10 | 0.000966s | 0.000919s | 0.000920s | byte equality observed |
| connect_pipe.test | 10 | 0.000967s | 0.000934s | 0.000948s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000947s | 0.000922s | 0.000941s | byte equality observed |
| consign.test | 10 | 0.000954s | 0.000922s | 0.000940s | byte equality observed |
| consign_select.test | 10 | 0.000902s | 0.000905s | 0.000899s | byte equality observed |
| deadline_timer.test | 1 | 0.002031s | 0.002073s | 0.002022s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001861s | 0.001816s | 0.001796s | byte equality observed |
| deferred.test | 10 | 0.000874s | 0.000843s | 0.000854s | byte equality observed |
| deferred_select.test | 10 | 0.000829s | 0.000788s | 0.000820s | byte equality observed |
| disposition.test | 10 | 0.000883s | 0.000842s | 0.000871s | byte equality observed |
| disposition_select.test | 10 | 0.000884s | 0.000847s | 0.000878s | byte equality observed |
| error.test | 10 | 0.000863s | 0.000828s | 0.000855s | byte equality observed |
| error_select.test | 10 | 0.000864s | 0.000843s | 0.000846s | byte equality observed |
| inline_executor.test | 10 | 0.000873s | 0.000853s | 0.000851s | byte equality observed |
| inline_executor_select.test | 10 | 0.000871s | 0.000867s | 0.000853s | byte equality observed |
| inline_or_executor.test | 10 | 0.000871s | 0.000865s | 0.000852s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000872s | 0.000864s | 0.000848s | byte equality observed |
| io_context.test | 1 | 0.001660s | 0.001598s | 0.001625s | byte equality observed |
| io_context_select.test | 1 | 0.001770s | 0.001778s | 0.001567s | byte equality observed |
| io_context_strand.test | 1 | 0.002037s | 0.001991s | 0.001992s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001803s | 0.001809s | 0.001557s | byte equality observed |
| ip_host_name.test | 10 | 0.000895s | 0.000892s | 0.000862s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000846s | 0.000848s | 0.000819s | byte equality observed |
| ip_icmp.test | 10 | 0.000879s | 0.000862s | 0.000863s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000870s | 0.000865s | 0.000856s | byte equality observed |
| ip_multicast.test | 10 | 0.000935s | 0.000921s | 0.000939s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000899s | 0.000900s | 0.000907s | byte equality observed |
| ip_tcp.test | 10 | 0.001269s | 0.001254s | 0.001294s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001217s | 0.001195s | 0.001230s | byte equality observed |
| ip_udp.test | 10 | 0.000949s | 0.000922s | 0.000956s | byte equality observed |
| ip_udp_select.test | 10 | 0.000920s | 0.000914s | 0.000938s | byte equality observed |
| ip_unicast.test | 10 | 0.000896s | 0.000895s | 0.000900s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000891s | 0.000878s | 0.000877s | byte equality observed |
| ip_v6_only.test | 10 | 0.000910s | 0.000896s | 0.000886s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000900s | 0.000881s | 0.000877s | byte equality observed |
| is_read_buffered.test | 10 | 0.000826s | 0.000836s | 0.000821s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000841s | 0.000862s | 0.000827s | byte equality observed |
| is_write_buffered.test | 10 | 0.000843s | 0.000853s | 0.000834s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000874s | 0.000856s | 0.000828s | byte equality observed |
| prepend.test | 10 | 0.000933s | 0.000936s | 0.000897s | byte equality observed |
| prepend_select.test | 10 | 0.000923s | 0.000930s | 0.000896s | byte equality observed |
| read.test | 10 | 0.001272s | 0.001236s | 0.001237s | byte equality observed |
| read_at.test | 10 | 0.001445s | 0.001485s | 0.001388s | byte equality observed |
| read_at_select.test | 10 | 0.001486s | 0.001470s | 0.001363s | byte equality observed |
| read_select.test | 10 | 0.001261s | 0.001245s | 0.001221s | byte equality observed |
| read_until.test | 10 | 0.001065s | 0.001027s | 0.001021s | byte equality observed |
| read_until_select.test | 10 | 0.001047s | 0.001035s | 0.001035s | byte equality observed |
| recycling_allocator.test | 10 | 0.000883s | 0.000851s | 0.000871s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000889s | 0.000846s | 0.000877s | byte equality observed |
| signal_set.test | 10 | 0.000911s | 0.000873s | 0.000857s | byte equality observed |
| signal_set_select.test | 10 | 0.000894s | 0.000899s | 0.000891s | byte equality observed |
| socket_base.test | 10 | 0.001001s | 0.001002s | 0.000984s | byte equality observed |
| socket_base_select.test | 10 | 0.000975s | 0.000960s | 0.000968s | byte equality observed |
| spawn.test | 10 | 0.001105s | 0.001047s | 0.001040s | byte equality observed |
| spawn_select.test | 10 | 0.001073s | 0.001039s | 0.001041s | byte equality observed |
| static_thread_pool.test | 10 | 0.000884s | 0.000853s | 0.000870s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000872s | 0.000840s | 0.000849s | byte equality observed |
| strand.test | 1 | 0.001743s | 0.001661s | 0.001666s | byte equality observed |
| strand_select.test | 1 | 0.001432s | 0.001368s | 0.001406s | byte equality observed |
| streambuf.test | 10 | 0.000910s | 0.000933s | 0.000915s | byte equality observed |
| streambuf_select.test | 10 | 0.000900s | 0.000895s | 0.000908s | byte equality observed |
| thread_pool.test | 10 | 0.001834s | 0.001847s | 0.001822s | byte equality observed |
| thread_pool_select.test | 10 | 0.001809s | 0.001841s | 0.001822s | byte equality observed |
| write.test | 7 | 0.001308s | 0.001287s | 0.001276s | byte equality observed |
| write_at.test | 7 | 0.001373s | 0.001387s | 0.001357s | byte equality observed |
| write_at_select.test | 10 | 0.001394s | 0.001383s | 0.001367s | byte equality observed |
| write_select.test | 10 | 0.001298s | 0.001243s | 0.001236s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517673).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
