# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.837302 | 5.100159 | 5.331778 | 0.003027 | 0.003030 | 0.002920 |
| any_completion_executor_select.test | RUN | 0.904889 | 5.079087 | 5.587282 | 0.003144 | 0.002868 | 0.002941 |
| any_completion_handler.test | RUN | 0.963324 | 4.567807 | 4.920329 | 0.002229 | 0.002335 | 0.002294 |
| any_completion_handler_select.test | RUN | 0.982768 | 4.752705 | 5.333416 | 0.002290 | 0.002371 | 0.002372 |
| any_io_executor.test | RUN | 0.907064 | 5.415906 | 5.626117 | 0.002422 | 0.002876 | 0.002896 |
| any_io_executor_select.test | RUN | 0.913192 | 5.414987 | 6.068971 | 0.002850 | 0.002884 | 0.003138 |
| append.test | RUN | 0.848078 | 4.239119 | 4.497348 | 0.002118 | 0.002374 | 0.002286 |
| append_select.test | RUN | 0.855410 | 4.382489 | 4.459441 | 0.001974 | 0.002129 | 0.002290 |
| as_tuple.test | RUN | 1.040829 | 5.215226 | 5.821381 | 0.002195 | 0.002176 | 0.002484 |
| as_tuple_select.test | RUN | 1.077183 | 5.187611 | 5.904974 | 0.001890 | 0.002148 | 0.002368 |
| associated_allocator.test | LINK | 0.224930 | 0.458677 | 0.747002 | — | — | — |
| associated_allocator_select.test | LINK | 0.234415 | 0.465337 | 0.753304 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.248095 | 0.501911 | 0.804193 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.243654 | 0.507420 | 0.813014 | — | — | — |
| associated_executor.test | LINK | 0.359626 | 0.876006 | 1.274398 | — | — | — |
| associated_executor_select.test | LINK | 0.356479 | 0.878385 | 1.285601 | — | — | — |
| associated_immediate_executor.test | LINK | 0.337650 | 0.801617 | 1.075461 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.333368 | 0.827682 | 1.123787 | — | — | — |
| associator.test | LINK | 0.182234 | 0.393163 | 0.575646 | — | — | — |
| associator_select.test | LINK | 0.186655 | 0.403139 | 0.601770 | — | — | — |
| awaitable.test | LINK | 0.182502 | 0.393868 | 0.533545 | — | — | — |
| awaitable_select.test | LINK | 0.185756 | 0.381653 | 0.582836 | — | — | — |
| basic_datagram_socket.test | LINK | 0.550454 | 1.241487 | 2.329771 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.561983 | 1.275696 | 2.384232 | — | — | — |
| basic_deadline_timer.test | LINK | 0.662990 | 1.439447 | 2.704959 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.675540 | 1.460367 | 2.662935 | — | — | — |
| basic_file.test | LINK | 0.186681 | 0.379348 | 0.596418 | — | — | — |
| basic_file_select.test | LINK | 0.188056 | 0.397878 | 0.569047 | — | — | — |
| basic_random_access_file.test | LINK | 0.188339 | 0.396672 | 0.577388 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.184911 | 0.395145 | 0.573431 | — | — | — |
| basic_raw_socket.test | LINK | 0.554000 | 1.214652 | 2.337839 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.572573 | 1.265253 | 2.384591 | — | — | — |
| basic_readable_pipe.test | LINK | 0.536939 | 1.202481 | 1.973674 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.562656 | 1.263294 | 2.475085 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.562076 | 1.230786 | 2.356694 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.565924 | 1.290431 | 2.352453 | — | — | — |
| basic_signal_set.test | LINK | 0.516987 | 1.133932 | 1.783581 | — | — | — |
| basic_signal_set_select.test | LINK | 0.550271 | 1.215279 | 2.227421 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.566999 | 1.231104 | 2.344017 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.580103 | 1.292355 | 2.330152 | — | — | — |
| basic_stream_file.test | LINK | 0.183491 | 0.385976 | 0.617640 | — | — | — |
| basic_stream_file_select.test | LINK | 0.188446 | 0.393743 | 0.615726 | — | — | — |
| basic_stream_socket.test | LINK | 0.565149 | 1.232312 | 2.272129 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.577175 | 1.279368 | 2.370206 | — | — | — |
| basic_streambuf.test | LINK | 0.292070 | 0.563973 | 0.923664 | — | — | — |
| basic_streambuf_select.test | LINK | 0.292966 | 0.568250 | 0.927954 | — | — | — |
| basic_waitable_timer.test | LINK | 0.519640 | 1.147649 | 2.195387 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.529040 | 1.179459 | 2.228313 | — | — | — |
| basic_writable_pipe.test | LINK | 0.536383 | 1.183353 | 1.965515 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.554362 | 1.268783 | 2.477142 | — | — | — |
| bind_allocator.test | RUN | 0.873836 | 4.379518 | 4.745521 | 0.002570 | 0.002716 | 0.002756 |
| bind_allocator_select.test | RUN | 0.916426 | 4.438304 | 4.843913 | 0.002332 | 0.002602 | 0.002276 |
| bind_cancellation_slot.test | RUN | 0.896267 | 4.355562 | 4.798864 | 0.001776 | 0.001700 | 0.001708 |
| bind_cancellation_slot_select.test | RUN | 0.933166 | 4.424633 | 4.521540 | 0.001696 | 0.001695 | 0.001609 |
| bind_executor.test | RUN | 0.564583 | 3.031540 | 2.827966 | 0.002467 | 0.003009 | 0.002580 |
| bind_executor_select.test | RUN | 0.572745 | 3.059589 | 3.121787 | 0.002261 | 0.002832 | 0.002793 |
| bind_immediate_executor.test | RUN | 0.426182 | 2.606260 | 2.161698 | 0.001544 | 0.001503 | 0.001537 |
| bind_immediate_executor_select.test | RUN | 0.436454 | 2.487423 | 2.081037 | 0.001554 | 0.001618 | 0.001568 |
| buffer.test | RUN | 0.257696 | 1.013792 | 1.126363 | 0.001586 | 0.001601 | 0.001501 |
| buffer_select.test | RUN | 0.258250 | 1.036252 | 1.132104 | 0.001493 | 0.001594 | 0.001543 |
| buffer_registration.test | LINK | 0.209308 | 0.526633 | 0.657290 | — | — | — |
| buffer_registration_select.test | LINK | 0.210786 | 0.522570 | 0.678607 | — | — | — |
| buffered_read_stream.test | RUN | 0.931972 | 6.775846 | 7.010739 | 0.001972 | 0.002334 | 0.002730 |
| buffered_read_stream_select.test | RUN | 0.956058 | 6.973755 | 7.774433 | 0.002010 | 0.002694 | 0.002832 |
| buffered_stream.test | RUN | 1.757898 | 10.215987 | 11.342503 | 0.002718 | 0.002775 | 0.002684 |
| buffered_stream_select.test | RUN | 1.870107 | 10.285295 | 11.047143 | 0.002398 | 0.002746 | 0.002784 |
| buffered_write_stream.test | RUN | 1.683060 | 8.936519 | 9.723854 | 0.002440 | 0.002726 | 0.003089 |
| buffered_write_stream_select.test | RUN | 1.688094 | 9.019497 | 9.607086 | 0.002648 | 0.002688 | 0.002370 |
| buffers_iterator.test | RUN | 0.523975 | 0.903032 | 1.644711 | 0.002120 | 0.001980 | 0.002122 |
| buffers_iterator_select.test | RUN | 0.521912 | 0.902365 | 1.697623 | 0.002092 | 0.002068 | 0.001891 |
| cancel_after.test | RUN | 1.371701 | 7.023757 | 7.333342 | 0.004476 | 0.004665 | 0.004387 |
| cancel_after_select.test | RUN | 1.416813 | 6.969054 | 7.086717 | 0.004290 | 0.004356 | 0.004066 |
| cancel_at.test | RUN | 1.306380 | 5.750370 | 6.374329 | 0.003742 | 0.004154 | 0.004079 |
| cancel_at_select.test | RUN | 1.183480 | 5.624195 | 5.964135 | 0.003944 | 0.003739 | 0.004089 |
| cancellation_signal.test | LINK | 0.152605 | 0.311395 | 0.433969 | — | — | — |
| cancellation_signal_select.test | LINK | 0.157179 | 0.309470 | 0.455488 | — | — | — |
| cancellation_state.test | LINK | 0.191523 | 0.315575 | 0.448259 | — | — | — |
| cancellation_state_select.test | LINK | 0.232054 | 0.310564 | 0.440595 | — | — | — |
| cancellation_type.test | LINK | 0.181475 | 0.245242 | 0.331782 | — | — | — |
| cancellation_type_select.test | LINK | 0.191227 | 0.243554 | 0.347647 | — | — | — |
| co_composed.test | RUN | 0.186040 | 0.250958 | 0.357133 | 0.001876 | 0.001572 | 0.001883 |
| co_composed_select.test | RUN | 0.183598 | 0.250066 | 0.583895 | 0.001917 | 0.001574 | 0.001541 |
| co_spawn.test | LINK | 0.182959 | 0.248306 | 0.592622 | — | — | — |
| co_spawn_select.test | LINK | 0.183602 | 0.252689 | 0.568094 | — | — | — |
| completion_condition.test | LINK | 0.240331 | 0.470189 | 0.814336 | — | — | — |
| completion_condition_select.test | LINK | 0.239350 | 0.427282 | 0.789557 | — | — | — |
| compose.test | RUN | 1.079140 | 5.452351 | 6.004988 | 0.002529 | 0.002528 | 0.002502 |
| compose_select.test | RUN | 1.103619 | 5.343348 | 5.991737 | 0.002163 | 0.002693 | 0.002026 |
| composed.test | RUN | 1.061210 | 5.387190 | 5.914464 | 0.002202 | 0.002036 | 0.002176 |
| composed_select.test | RUN | 1.007416 | 5.336967 | 5.764080 | 0.002223 | 0.002173 | 0.002039 |
| config.test | RUN | 0.510368 | 3.576095 | 2.613201 | 0.002377 | 0.002228 | 0.002222 |
| config_select.test | RUN | 0.565266 | 3.747797 | 2.933995 | 0.002108 | 0.002137 | 0.002178 |
| connect.test | LINK | 1.762089 | 11.534429 | 12.528480 | — | — | — |
| connect_select.test | LINK | 1.776566 | 11.450886 | 12.459148 | — | — | — |
| connect_pipe.test | RUN | 0.942993 | 4.330527 | 4.641094 | 0.002214 | 0.002180 | 0.001863 |
| connect_pipe_select.test | RUN | 0.985465 | 4.482908 | 5.101827 | 0.002175 | 0.002240 | 0.002222 |
| consign.test | RUN | 0.802702 | 4.220221 | 4.165776 | 0.002046 | 0.002129 | 0.002478 |
| consign_select.test | RUN | 0.830964 | 4.292624 | 4.128490 | 0.002457 | 0.002312 | 0.001861 |
| coroutine.test | LINK | 0.194535 | 0.450782 | 0.638042 | — | — | — |
| coroutine_select.test | LINK | 0.193205 | 0.450266 | 0.679282 | — | — | — |
| deadline_timer.test | RUN | 1.191099 | 5.527919 | 6.079866 | 0.003666 | 0.004029 | 0.004275 |
| deadline_timer_select.test | RUN | 1.219997 | 5.476674 | 6.055311 | 0.003506 | 0.002821 | 0.003764 |
| deferred.test | RUN | 0.220966 | 0.430530 | 0.670949 | 0.001945 | 0.002008 | 0.002150 |
| deferred_select.test | RUN | 0.222531 | 0.438970 | 0.671376 | 0.002030 | 0.002098 | 0.002168 |
| detached.test | LINK | 0.235004 | 0.489755 | 0.752682 | — | — | — |
| detached_select.test | LINK | 0.237112 | 0.503969 | 0.732279 | — | — | — |
| disposition.test | RUN | 0.209210 | 1.115742 | 1.289312 | 0.001722 | 0.002286 | 0.002121 |
| disposition_select.test | RUN | 0.203865 | 1.106769 | 1.289646 | 0.001657 | 0.002188 | 0.002252 |
| error.test | RUN | 0.185020 | 1.058401 | 1.161167 | 0.001597 | 0.002156 | 0.002164 |
| error_select.test | RUN | 0.187432 | 1.069496 | 1.107719 | 0.001601 | 0.002073 | 0.002104 |
| file_base.test | LINK | 0.230734 | 0.889977 | 1.060170 | — | — | — |
| file_base_select.test | LINK | 0.233995 | 0.772229 | 0.875274 | — | — | — |
| fwd_first.test | LINK | 0.526869 | 1.253596 | 2.106221 | — | — | — |
| fwd_last.test | LINK | 0.524618 | 1.183498 | 2.128929 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.203181 | 0.497671 | 0.741455 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.208175 | 0.486146 | 0.770704 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.813162 | 4.144050 | 3.899246 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.836790 | 4.243361 | 3.919070 | — | — | — |
| generic_raw_protocol.test | LINK | 0.814495 | 4.130711 | 3.894057 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.812061 | 4.219335 | 3.942098 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.697670 | 3.492537 | 3.311454 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.706278 | 3.525784 | 3.379144 | — | — | — |
| generic_stream_protocol.test | LINK | 0.765051 | 3.815004 | 3.569054 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.752019 | 3.844616 | 3.614761 | — | — | — |
| high_resolution_timer.test | LINK | 0.340578 | 0.746633 | 1.173239 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.337883 | 0.749353 | 1.226967 | — | — | — |
| immediate.test | LINK | 0.228293 | 0.559827 | 0.743563 | — | — | — |
| immediate_select.test | LINK | 0.230465 | 0.561937 | 0.731760 | — | — | — |
| inline_executor.test | RUN | 0.279889 | 0.860395 | 1.061394 | 0.001601 | 0.001672 | 0.001633 |
| inline_executor_select.test | RUN | 0.284379 | 0.851895 | 1.083290 | 0.001598 | 0.001643 | 0.001591 |
| inline_or_executor.test | RUN | 0.445832 | 2.478008 | 2.017116 | 0.001630 | 0.001658 | 0.001572 |
| inline_or_executor_select.test | RUN | 0.460359 | 2.537664 | 2.238780 | 0.001562 | 0.001701 | 0.001542 |
| io_context.test | RUN | 0.682861 | 3.754717 | 3.501182 | 0.002572 | 0.002570 | 0.002642 |
| io_context_select.test | RUN | 0.667509 | 3.635812 | 3.480710 | 0.002355 | 0.002490 | 0.002578 |
| io_context_strand.test | RUN | 0.617567 | 4.170064 | 3.512730 | 0.002573 | 0.002768 | 0.003114 |
| io_context_strand_select.test | RUN | 0.631936 | 4.366966 | 3.862560 | 0.002389 | 0.002433 | 0.002850 |
| ip_address.test | LINK | 0.231877 | 1.226116 | 1.694088 | — | — | — |
| ip_address_select.test | LINK | 0.243118 | 1.204541 | 1.476808 | — | — | — |
| ip_address_v4.test | LINK | 0.240342 | 1.288204 | 1.104909 | — | — | — |
| ip_address_v4_select.test | LINK | 0.241253 | 1.267499 | 1.014535 | — | — | — |
| ip_address_v6.test | LINK | 0.272747 | 1.321886 | 1.281794 | — | — | — |
| ip_address_v6_select.test | LINK | 0.274262 | 1.136267 | 1.265293 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.205843 | 0.525642 | 0.827411 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.215617 | 0.520071 | 0.811932 | — | — | — |
| ip_basic_resolver.test | LINK | 0.335448 | 0.750228 | 1.224012 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.342389 | 0.773376 | 1.197175 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.116292 | 0.249726 | 0.347976 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.119513 | 0.247583 | 0.334845 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.209710 | 0.500780 | 0.806186 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.212314 | 0.512682 | 0.771636 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.200569 | 0.487078 | 0.775563 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.207497 | 0.495013 | 0.766289 | — | — | — |
| ip_host_name.test | RUN | 0.211913 | 0.634589 | 1.288530 | 0.001562 | 0.001585 | 0.002072 |
| ip_host_name_select.test | RUN | 0.211650 | 0.645691 | 1.205251 | 0.001523 | 0.001616 | 0.001972 |
| ip_icmp.test | RUN | 0.993007 | 7.411131 | 8.736976 | 0.001551 | 0.001838 | 0.002036 |
| ip_icmp_select.test | RUN | 1.005413 | 7.713136 | 8.485728 | 0.001640 | 0.002168 | 0.002081 |
| ip_multicast.test | RUN | 0.603453 | 4.547608 | 5.035603 | 0.001786 | 0.002318 | 0.002370 |
| ip_multicast_select.test | RUN | 0.614080 | 4.556676 | 5.123461 | 0.001793 | 0.002092 | 0.002030 |
| ip_resolver_query_base.test | LINK | 0.145691 | 0.429698 | 0.598583 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.142393 | 0.429022 | 0.606396 | — | — | — |
| ip_tcp.test | RUN | 1.503354 | 13.060678 | 12.972886 | 0.002308 | 0.003105 | 0.003232 |
| ip_tcp_select.test | RUN | 1.513011 | 13.655990 | 12.566936 | 0.002269 | 0.002773 | 0.002872 |
| ip_udp.test | RUN | 1.057002 | 9.214830 | 9.086438 | 0.001963 | 0.002372 | 0.002332 |
| ip_udp_select.test | RUN | 1.074076 | 9.418071 | 8.880486 | 0.002178 | 0.002256 | 0.002260 |
| ip_unicast.test | RUN | 0.824377 | 4.142907 | 4.441160 | 0.002199 | 0.002044 | 0.001920 |
| ip_unicast_select.test | RUN | 0.853496 | 4.273299 | 4.395910 | 0.001926 | 0.002370 | 0.002139 |
| ip_v6_only.test | RUN | 0.883823 | 4.316568 | 4.691997 | 0.002205 | 0.002223 | 0.001630 |
| ip_v6_only_select.test | RUN | 0.908403 | 4.422533 | 4.648212 | 0.002196 | 0.002178 | 0.002350 |
| is_read_buffered.test | RUN | 0.616201 | 1.374250 | 2.614393 | 0.002049 | 0.002169 | 0.001806 |
| is_read_buffered_select.test | RUN | 0.642907 | 1.484923 | 2.609179 | 0.001880 | 0.002096 | 0.002023 |
| is_write_buffered.test | RUN | 0.636098 | 1.448414 | 2.612990 | 0.002010 | 0.002055 | 0.002156 |
| is_write_buffered_select.test | RUN | 0.642675 | 1.407196 | 2.611767 | 0.002108 | 0.002045 | 0.002040 |
| local_basic_endpoint.test | LINK | 0.321124 | 0.770793 | 1.462711 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.316122 | 0.782185 | 1.460533 | — | — | — |
| local_connect_pair.test | LINK | 0.821613 | 4.255553 | 4.373062 | — | — | — |
| local_connect_pair_select.test | LINK | 0.829615 | 4.266567 | 4.322553 | — | — | — |
| local_datagram_protocol.test | LINK | 1.085001 | 5.542052 | 5.941012 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.109798 | 5.595168 | 5.839569 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.112212 | 5.409821 | 5.844470 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.123529 | 5.508507 | 5.748828 | — | — | — |
| local_stream_protocol.test | LINK | 1.036400 | 5.207172 | 5.600856 | — | — | — |
| local_stream_protocol_select.test | LINK | 1.066028 | 5.176383 | 5.580271 | — | — | — |
| placeholders.test | LINK | 0.197596 | 0.438515 | 0.673840 | — | — | — |
| placeholders_select.test | LINK | 0.208015 | 0.441927 | 0.644679 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.535777 | 1.162947 | 1.898336 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.554882 | 1.221731 | 2.509543 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.530778 | 1.175904 | 1.969140 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.548338 | 1.252891 | 2.475876 | — | — | — |
| posix_descriptor_base.test | LINK | 0.228437 | 0.446050 | 0.675741 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.227026 | 0.430385 | 0.681217 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.073949 | 5.213214 | 5.400978 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.093107 | 5.286278 | 5.663922 | — | — | — |
| prepend.test | RUN | 0.835848 | 4.241570 | 4.419704 | 0.001980 | 0.002320 | 0.001988 |
| prepend_select.test | RUN | 0.838325 | 4.400254 | 4.372996 | 0.002164 | 0.002031 | 0.001977 |
| random_access_file.test | LINK | 0.493721 | 1.044548 | 1.566099 | — | — | — |
| random_access_file_select.test | LINK | 0.509827 | 1.123085 | 2.052051 | — | — | — |
| read.test | RUN | 2.556143 | 25.585378 | 24.068640 | 0.002937 | 0.002760 | 0.002592 |
| read_select.test | RUN | 2.609730 | 25.277723 | 24.283068 | 0.002908 | 0.002804 | 0.002964 |
| read_at.test | RUN | 2.574033 | 35.603485 | 32.398473 | 0.003483 | 0.003824 | 0.003430 |
| read_at_select.test | RUN | 2.609140 | 35.109008 | 32.851553 | 0.003202 | 0.003571 | 0.003656 |
| read_until.test | RUN | 1.343626 | 9.980673 | 8.686357 | 0.002343 | 0.002451 | 0.002158 |
| read_until_select.test | RUN | 1.351296 | 10.022842 | 9.077984 | 0.002046 | 0.002293 | 0.002536 |
| readable_pipe.test | LINK | 0.855985 | 4.351144 | 4.259700 | — | — | — |
| readable_pipe_select.test | LINK | 0.894539 | 4.605503 | 4.755236 | — | — | — |
| recycling_allocator.test | RUN | 0.273099 | 0.651202 | 0.913654 | 0.002154 | 0.002103 | 0.002006 |
| recycling_allocator_select.test | RUN | 0.267405 | 0.688930 | 0.912778 | 0.002030 | 0.002188 | 0.002132 |
| redirect_disposition.test | LINK | 1.107960 | 6.142054 | 6.561991 | — | — | — |
| redirect_disposition_select.test | LINK | 1.128565 | 5.989761 | 6.521955 | — | — | — |
| redirect_error.test | LINK | 0.989559 | 5.016941 | 5.866978 | — | — | — |
| redirect_error_select.test | LINK | 1.009445 | 4.947209 | 5.886968 | — | — | — |
| registered_buffer.test | LINK | 0.265031 | 0.567683 | 0.827252 | — | — | — |
| registered_buffer_select.test | LINK | 0.273576 | 0.567589 | 0.855583 | — | — | — |
| signal_set.test | RUN | 0.826622 | 4.257455 | 4.022371 | 0.002012 | 0.002132 | 0.002238 |
| signal_set_select.test | RUN | 0.870123 | 4.363614 | 4.515828 | 0.002236 | 0.002238 | 0.002124 |
| signal_set_base.test | LINK | 0.227273 | 0.421210 | 0.653696 | — | — | — |
| signal_set_base_select.test | LINK | 0.228069 | 0.428196 | 0.658648 | — | — | — |
| socket_base.test | RUN | 1.034629 | 6.247477 | 6.217577 | 0.002446 | 0.002413 | 0.002512 |
| socket_base_select.test | RUN | 1.038769 | 6.064883 | 6.250055 | 0.002364 | 0.002440 | 0.002520 |
| spawn.test | RUN | 1.730900 | 9.918279 | 10.457687 | 0.002378 | 0.002604 | 0.002581 |
| spawn_select.test | RUN | 1.720588 | 9.912220 | 10.228089 | 0.002278 | 0.002654 | 0.002217 |
| static_thread_pool.test | RUN | 0.489145 | 1.010384 | 1.570127 | 0.001999 | 0.002131 | 0.002061 |
| static_thread_pool_select.test | RUN | 0.503756 | 1.105771 | 2.047038 | 0.001675 | 0.002168 | 0.002087 |
| steady_timer.test | LINK | 0.519908 | 1.152082 | 2.224729 | — | — | — |
| steady_timer_select.test | LINK | 0.535053 | 1.198098 | 2.192256 | — | — | — |
| strand.test | RUN | 1.088120 | 5.789826 | 6.243508 | 0.002646 | 0.003098 | 0.003320 |
| strand_select.test | RUN | 1.086636 | 5.718034 | 6.001811 | 0.002856 | 0.002998 | 0.002546 |
| stream_file.test | LINK | 0.504108 | 1.035181 | 1.590296 | — | — | — |
| stream_file_select.test | LINK | 0.540993 | 1.126948 | 2.109297 | — | — | — |
| streambuf.test | RUN | 0.267191 | 0.886136 | 1.034903 | 0.001558 | 0.002064 | 0.002266 |
| streambuf_select.test | RUN | 0.242629 | 0.733585 | 1.108405 | 0.001534 | 0.001583 | 0.002174 |
| system_timer.test | LINK | 0.644599 | 3.617355 | 3.818032 | — | — | — |
| system_timer_select.test | LINK | 0.657969 | 3.423944 | 3.639948 | — | — | — |
| system_context.test | LINK | 0.298148 | 0.652662 | 0.880328 | — | — | — |
| system_context_select.test | LINK | 0.320098 | 0.697508 | 1.077690 | — | — | — |
| system_executor.test | LINK | 0.392767 | 2.009863 | 1.593111 | — | — | — |
| system_executor_select.test | LINK | 0.412301 | 1.959106 | 1.834922 | — | — | — |
| this_coro.test | LINK | 0.115900 | 0.248534 | 0.330521 | — | — | — |
| this_coro_select.test | LINK | 0.119252 | 0.254325 | 0.338381 | — | — | — |
| thread_pool.test | RUN | 0.462364 | 3.334515 | 2.464118 | 0.003204 | 0.003744 | 0.003658 |
| thread_pool_select.test | RUN | 0.485055 | 3.827326 | 3.699319 | 0.003288 | 0.003834 | 0.003924 |
| time_traits.test | LINK | 0.265284 | 0.871069 | 1.310997 | — | — | — |
| time_traits_select.test | LINK | 0.268609 | 0.837597 | 1.193456 | — | — | — |
| ts_buffer.test | LINK | 0.254055 | 0.916988 | 1.339004 | — | — | — |
| ts_buffer_select.test | LINK | 0.249721 | 0.885773 | 1.277943 | — | — | — |
| ts_executor.test | LINK | 0.349188 | 1.250347 | 2.059473 | — | — | — |
| ts_executor_select.test | LINK | 0.371950 | 1.344623 | 2.503205 | — | — | — |
| ts_internet.test | LINK | 0.384176 | 1.370913 | 2.557551 | — | — | — |
| ts_internet_select.test | LINK | 0.386560 | 1.402154 | 2.697738 | — | — | — |
| ts_io_context.test | LINK | 0.316744 | 1.055063 | 1.546630 | — | — | — |
| ts_io_context_select.test | LINK | 0.327123 | 1.103355 | 2.091772 | — | — | — |
| ts_net.test | LINK | 0.465810 | 1.634855 | 3.106349 | — | — | — |
| ts_net_select.test | LINK | 0.466164 | 1.674975 | 3.249909 | — | — | — |
| ts_netfwd.test | LINK | 0.447484 | 1.676392 | 3.159198 | — | — | — |
| ts_netfwd_select.test | LINK | 0.455409 | 1.678840 | 3.270079 | — | — | — |
| ts_socket.test | LINK | 0.375355 | 1.317049 | 2.483137 | — | — | — |
| ts_socket_select.test | LINK | 0.383982 | 1.323319 | 2.530919 | — | — | — |
| ts_timer.test | LINK | 0.325866 | 1.176167 | 2.145120 | — | — | — |
| ts_timer_select.test | LINK | 0.335988 | 1.170391 | 2.202855 | — | — | — |
| use_awaitable.test | LINK | 0.113875 | 0.405718 | 0.591878 | — | — | — |
| use_awaitable_select.test | LINK | 0.154136 | 0.391260 | 0.582991 | — | — | — |
| wait_traits.test | LINK | 0.140613 | 0.395699 | 0.586985 | — | — | — |
| wait_traits_select.test | LINK | 0.177934 | 0.404929 | 0.600200 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.188240 | 0.389519 | 0.554519 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.188772 | 0.407073 | 0.573410 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.185206 | 0.386991 | 0.564844 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.184390 | 0.404007 | 0.608178 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.187172 | 0.390487 | 0.612258 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.189328 | 0.388372 | 0.561334 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.185599 | 0.394524 | 0.563056 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.186487 | 0.402156 | 0.610800 | — | — | — |
| windows_object_handle.test | LINK | 0.489937 | 1.047704 | 1.546884 | — | — | — |
| windows_object_handle_select.test | LINK | 0.514763 | 1.107355 | 2.069127 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.513328 | 1.101766 | 1.730014 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.537324 | 1.203008 | 2.212591 | — | — | — |
| windows_random_access_handle.test | LINK | 0.495038 | 1.054834 | 1.553938 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.508308 | 1.144237 | 2.068077 | — | — | — |
| windows_stream_handle.test | LINK | 0.477534 | 1.058683 | 1.584919 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.528801 | 1.142292 | 2.080712 | — | — | — |
| writable_pipe.test | LINK | 0.883270 | 4.263136 | 4.495791 | — | — | — |
| writable_pipe_select.test | LINK | 0.907719 | 4.455624 | 4.903463 | — | — | — |
| write.test | RUN | 2.529898 | 21.531324 | 23.694926 | 0.003043 | 0.002995 | 0.002652 |
| write_select.test | RUN | 2.545030 | 21.658662 | 24.318976 | 0.003010 | 0.002896 | 0.003225 |
| write_at.test | RUN | 2.639501 | 29.942426 | 30.031698 | 0.002971 | 0.003412 | 0.003250 |
| write_at_select.test | RUN | 2.665755 | 30.291840 | 30.567716 | 0.003348 | 0.003556 | 0.003319 |
| any_executor.test | RUN | 1.093358 | 9.816896 | 10.131655 | 0.002584 | 0.002893 | 0.002821 |
| blocking.test | RUN | 2.752161 | 12.329736 | 20.806731 | 0.008890 | 0.008962 | 0.009072 |
| blocking_adaptation.test | RUN | 1.379911 | 5.516656 | 9.394258 | 0.004662 | 0.005036 | 0.004824 |
| context_as.test | RUN | 0.711953 | 3.938990 | 3.187020 | 0.002315 | 0.002370 | 0.001990 |
| executor.test | RUN | 0.185008 | 0.401605 | 0.625088 | 0.002109 | 0.002138 | 0.001903 |
| inline_exception_handling.test | RUN | 2.782189 | 11.660210 | 20.672526 | 0.008483 | 0.005818 | 0.005923 |
| invocable_archetype.test | RUN | 0.187608 | 0.412074 | 0.589952 | 0.001873 | 0.002134 | 0.002072 |
| mapping.test | RUN | 2.545814 | 12.043383 | 19.241453 | 0.006051 | 0.005858 | 0.006145 |
| outstanding_work.test | RUN | 1.290979 | 5.204573 | 8.969139 | 0.004848 | 0.004830 | 0.004693 |
| prefer_only.test | RUN | 0.387790 | 2.125621 | 2.075994 | 0.002132 | 0.002228 | 0.002144 |
| relationship.test | RUN | 0.979336 | 4.373502 | 8.907959 | 0.003408 | 0.003427 | 0.003345 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 1.000×, 0.991× | 1.003× |
| clang | 0.992× | 0.993×, 0.992× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.002001s | 0.002010s | 0.002033s | byte equality observed |
| any_completion_executor_select.test | 2 | 0.001975s | 0.002084s | 0.001950s | byte equality observed |
| any_completion_handler.test | 10 | 0.001564s | 0.001588s | 0.001547s | byte equality observed |
| any_completion_handler_select.test | 6 | 0.001560s | 0.001550s | 0.001550s | byte equality observed |
| any_io_executor.test | 5 | 0.001963s | 0.002028s | 0.001958s | byte equality observed |
| any_io_executor_select.test | 4 | 0.001968s | 0.001982s | 0.001973s | byte equality observed |
| append.test | 7 | 0.001515s | 0.001491s | 0.001487s | byte equality observed |
| append_select.test | 10 | 0.001472s | 0.001490s | 0.001458s | byte equality observed |
| as_tuple.test | 6 | 0.001650s | 0.001662s | 0.001623s | byte equality observed |
| as_tuple_select.test | 7 | 0.001523s | 0.001493s | 0.001488s | byte equality observed |
| bind_allocator.test | 1 | 0.002018s | 0.001955s | 0.001938s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001711s | 0.001629s | 0.001651s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001360s | 0.001355s | 0.001349s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001281s | 0.001246s | 0.001249s | byte equality observed |
| bind_executor.test | 1 | 0.001966s | 0.001896s | 0.001910s | byte equality observed |
| bind_executor_select.test | 1 | 0.002156s | 0.002127s | 0.002149s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001325s | 0.001359s | 0.001275s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001302s | 0.001342s | 0.001311s | byte equality observed |
| buffer.test | 10 | 0.001283s | 0.001366s | 0.001360s | byte equality observed |
| buffer_select.test | 10 | 0.001289s | 0.001268s | 0.001267s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001662s | 0.001651s | 0.001715s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001707s | 0.001682s | 0.001693s | byte equality observed |
| buffered_stream.test | 10 | 0.001663s | 0.001678s | 0.001659s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001645s | 0.001602s | 0.001647s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001641s | 0.001656s | 0.001708s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001642s | 0.001623s | 0.001666s | byte equality observed |
| buffers_iterator.test | 10 | 0.001276s | 0.001314s | 0.001242s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001216s | 0.001251s | 0.001285s | byte equality observed |
| cancel_after.test | 1 | 0.003851s | 0.003827s | 0.003825s | byte equality observed |
| cancel_after_select.test | 1 | 0.003250s | 0.003207s | 0.003197s | byte equality observed |
| cancel_at.test | 1 | 0.004019s | 0.003897s | 0.004043s | byte equality observed |
| cancel_at_select.test | 1 | 0.003735s | 0.003786s | 0.003673s | byte equality observed |
| co_composed.test | 10 | 0.001241s | 0.001251s | 0.001225s | byte equality observed |
| co_composed_select.test | 10 | 0.001226s | 0.001260s | 0.001194s | byte equality observed |
| compose.test | 1 | 0.002017s | 0.001935s | 0.002017s | byte equality observed |
| compose_select.test | 1 | 0.001672s | 0.001613s | 0.001664s | byte equality observed |
| composed.test | 1 | 0.002278s | 0.002224s | 0.002207s | byte equality observed |
| composed_select.test | 1 | 0.001793s | 0.001730s | 0.001791s | byte equality observed |
| config.test | 10 | 0.001381s | 0.001353s | 0.001317s | byte equality observed |
| config_select.test | 10 | 0.001397s | 0.001343s | 0.001363s | byte equality observed |
| connect_pipe.test | 10 | 0.001362s | 0.001334s | 0.001374s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001360s | 0.001365s | 0.001345s | byte equality observed |
| consign.test | 10 | 0.001342s | 0.001372s | 0.001346s | byte equality observed |
| consign_select.test | 10 | 0.001306s | 0.001331s | 0.001288s | byte equality observed |
| deadline_timer.test | 1 | 0.002763s | 0.002792s | 0.002805s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002503s | 0.002437s | 0.002469s | byte equality observed |
| deferred.test | 10 | 0.001181s | 0.001187s | 0.001164s | byte equality observed |
| deferred_select.test | 10 | 0.001144s | 0.001138s | 0.001125s | byte equality observed |
| disposition.test | 10 | 0.001216s | 0.001208s | 0.001193s | byte equality observed |
| disposition_select.test | 10 | 0.001217s | 0.001214s | 0.001202s | byte equality observed |
| error.test | 10 | 0.001180s | 0.001190s | 0.001176s | byte equality observed |
| error_select.test | 10 | 0.001184s | 0.001181s | 0.001171s | byte equality observed |
| inline_executor.test | 10 | 0.001203s | 0.001195s | 0.001177s | byte equality observed |
| inline_executor_select.test | 10 | 0.001201s | 0.001185s | 0.001198s | byte equality observed |
| inline_or_executor.test | 10 | 0.001212s | 0.001186s | 0.001190s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001202s | 0.001175s | 0.001193s | byte equality observed |
| io_context.test | 1 | 0.002274s | 0.002290s | 0.002301s | byte equality observed |
| io_context_select.test | 1 | 0.002549s | 0.002596s | 0.002621s | byte equality observed |
| io_context_strand.test | 1 | 0.002566s | 0.002554s | 0.002559s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002289s | 0.002250s | 0.002349s | byte equality observed |
| ip_host_name.test | 10 | 0.001201s | 0.001182s | 0.001194s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001165s | 0.001140s | 0.001161s | byte equality observed |
| ip_icmp.test | 10 | 0.001211s | 0.001186s | 0.001179s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001205s | 0.001202s | 0.001183s | byte equality observed |
| ip_multicast.test | 10 | 0.001292s | 0.001265s | 0.001276s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001266s | 0.001256s | 0.001261s | byte equality observed |
| ip_tcp.test | 10 | 0.001794s | 0.001760s | 0.001795s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001719s | 0.001684s | 0.001698s | byte equality observed |
| ip_udp.test | 10 | 0.001316s | 0.001317s | 0.001292s | byte equality observed |
| ip_udp_select.test | 10 | 0.001304s | 0.001396s | 0.001289s | byte equality observed |
| ip_unicast.test | 10 | 0.001262s | 0.001339s | 0.001236s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001244s | 0.001331s | 0.001222s | byte equality observed |
| ip_v6_only.test | 10 | 0.001263s | 0.001376s | 0.001231s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001234s | 0.001378s | 0.001222s | byte equality observed |
| is_read_buffered.test | 10 | 0.001167s | 0.001262s | 0.001194s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001204s | 0.001209s | 0.001345s | byte equality observed |
| is_write_buffered.test | 10 | 0.001295s | 0.001256s | 0.001295s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001279s | 0.001256s | 0.001249s | byte equality observed |
| prepend.test | 10 | 0.001368s | 0.001345s | 0.001383s | byte equality observed |
| prepend_select.test | 10 | 0.001337s | 0.001277s | 0.001292s | byte equality observed |
| read.test | 10 | 0.001802s | 0.001775s | 0.001758s | byte equality observed |
| read_at.test | 9 | 0.002239s | 0.002228s | 0.002153s | byte equality observed |
| read_at_select.test | 9 | 0.002237s | 0.002262s | 0.002204s | byte equality observed |
| read_select.test | 10 | 0.001820s | 0.001750s | 0.001795s | byte equality observed |
| read_until.test | 10 | 0.001542s | 0.001511s | 0.001479s | byte equality observed |
| read_until_select.test | 10 | 0.001512s | 0.001487s | 0.001494s | byte equality observed |
| recycling_allocator.test | 10 | 0.001235s | 0.001226s | 0.001318s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001272s | 0.001273s | 0.001303s | byte equality observed |
| signal_set.test | 10 | 0.001297s | 0.001298s | 0.001328s | byte equality observed |
| signal_set_select.test | 10 | 0.001304s | 0.001315s | 0.001296s | byte equality observed |
| socket_base.test | 10 | 0.001431s | 0.001385s | 0.001442s | byte equality observed |
| socket_base_select.test | 10 | 0.001407s | 0.001364s | 0.001389s | byte equality observed |
| spawn.test | 10 | 0.001550s | 0.001499s | 0.001472s | byte equality observed |
| spawn_select.test | 10 | 0.001518s | 0.001454s | 0.001476s | byte equality observed |
| static_thread_pool.test | 10 | 0.001282s | 0.001287s | 0.001255s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001242s | 0.001201s | 0.001245s | byte equality observed |
| strand.test | 1 | 0.002373s | 0.002330s | 0.002410s | byte equality observed |
| strand_select.test | 1 | 0.001987s | 0.001965s | 0.001930s | byte equality observed |
| streambuf.test | 10 | 0.001277s | 0.001280s | 0.001307s | byte equality observed |
| streambuf_select.test | 10 | 0.001285s | 0.001304s | 0.001320s | byte equality observed |
| thread_pool.test | 8 | 0.002946s | 0.002951s | 0.002880s | byte equality observed |
| thread_pool_select.test | 8 | 0.002956s | 0.002925s | 0.002891s | byte equality observed |
| write.test | 10 | 0.001889s | 0.001838s | 0.001883s | byte equality observed |
| write_at.test | 10 | 0.002007s | 0.001982s | 0.001903s | byte equality observed |
| write_at_select.test | 10 | 0.001977s | 0.002030s | 0.001959s | byte equality observed |
| write_select.test | 10 | 0.001873s | 0.001796s | 0.001796s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43674678137).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
