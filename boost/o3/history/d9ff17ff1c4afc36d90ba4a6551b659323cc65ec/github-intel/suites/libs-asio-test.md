# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.518025 | 3.383193 | 2.879270 | 0.001688 | 0.001854 | 0.001717 |
| any_completion_executor_select.test | RUN | 0.541480 | 3.399991 | 3.033811 | 0.001563 | 0.001477 | 0.001614 |
| any_completion_handler.test | RUN | 0.582037 | 3.083423 | 2.588052 | 0.000935 | 0.001218 | 0.001186 |
| any_completion_handler_select.test | RUN | 0.596394 | 3.151137 | 2.809285 | 0.001237 | 0.001393 | 0.001210 |
| any_io_executor.test | RUN | 0.553871 | 3.591674 | 3.189002 | 0.001479 | 0.001914 | 0.001892 |
| any_io_executor_select.test | RUN | 0.562308 | 3.584370 | 3.242926 | 0.001382 | 0.001664 | 0.001457 |
| append.test | RUN | 0.507070 | 2.894009 | 2.344144 | 0.001007 | 0.001348 | 0.001147 |
| append_select.test | RUN | 0.511877 | 2.959888 | 2.351941 | 0.001252 | 0.001302 | 0.001077 |
| as_tuple.test | RUN | 0.661273 | 3.468878 | 3.294665 | 0.001302 | 0.001399 | 0.001184 |
| as_tuple_select.test | RUN | 0.678567 | 3.432596 | 3.255544 | 0.001139 | 0.001278 | 0.001106 |
| associated_allocator.test | LINK | 0.119121 | 0.273920 | 0.340835 | — | — | — |
| associated_allocator_select.test | LINK | 0.126511 | 0.274947 | 0.346222 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.132008 | 0.308378 | 0.368543 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.133722 | 0.296393 | 0.373003 | — | — | — |
| associated_executor.test | LINK | 0.192815 | 0.535310 | 0.598905 | — | — | — |
| associated_executor_select.test | LINK | 0.192892 | 0.530893 | 0.599934 | — | — | — |
| associated_immediate_executor.test | LINK | 0.188960 | 0.491124 | 0.545556 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.182820 | 0.496550 | 0.541770 | — | — | — |
| associator.test | LINK | 0.097072 | 0.233084 | 0.282688 | — | — | — |
| associator_select.test | LINK | 0.097252 | 0.230967 | 0.275285 | — | — | — |
| awaitable.test | LINK | 0.099347 | 0.233006 | 0.276329 | — | — | — |
| awaitable_select.test | LINK | 0.098553 | 0.233387 | 0.283458 | — | — | — |
| basic_datagram_socket.test | LINK | 0.315035 | 0.752451 | 1.070550 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.320486 | 0.774205 | 1.096641 | — | — | — |
| basic_deadline_timer.test | LINK | 0.385267 | 0.865927 | 1.232645 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.395763 | 0.898348 | 1.252277 | — | — | — |
| basic_file.test | LINK | 0.097980 | 0.235157 | 0.286275 | — | — | — |
| basic_file_select.test | LINK | 0.100580 | 0.238561 | 0.287455 | — | — | — |
| basic_random_access_file.test | LINK | 0.098098 | 0.230847 | 0.283313 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.100095 | 0.232596 | 0.282778 | — | — | — |
| basic_raw_socket.test | LINK | 0.318236 | 0.749703 | 1.068786 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.326821 | 0.772632 | 1.107299 | — | — | — |
| basic_readable_pipe.test | LINK | 0.306274 | 0.717846 | 0.941624 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.325274 | 0.757006 | 1.131930 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.321665 | 0.755600 | 1.077642 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.325992 | 0.757170 | 1.112410 | — | — | — |
| basic_signal_set.test | LINK | 0.294552 | 0.691283 | 0.847313 | — | — | — |
| basic_signal_set_select.test | LINK | 0.314103 | 0.729090 | 1.042585 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.328187 | 0.751875 | 1.088985 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.331506 | 0.764007 | 1.108261 | — | — | — |
| basic_stream_file.test | LINK | 0.098348 | 0.231941 | 0.288083 | — | — | — |
| basic_stream_file_select.test | LINK | 0.097455 | 0.236292 | 0.285920 | — | — | — |
| basic_stream_socket.test | LINK | 0.320460 | 0.749870 | 1.072126 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.328746 | 0.762498 | 1.078779 | — | — | — |
| basic_streambuf.test | LINK | 0.154817 | 0.344905 | 0.415841 | — | — | — |
| basic_streambuf_select.test | LINK | 0.158340 | 0.341782 | 0.418896 | — | — | — |
| basic_waitable_timer.test | LINK | 0.295517 | 0.708064 | 1.018112 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.302450 | 0.721960 | 1.038250 | — | — | — |
| basic_writable_pipe.test | LINK | 0.308839 | 0.710706 | 0.934823 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.319216 | 0.761057 | 1.138217 | — | — | — |
| bind_allocator.test | RUN | 0.538862 | 2.902970 | 2.537060 | 0.001414 | 0.001667 | 0.001074 |
| bind_allocator_select.test | RUN | 0.559619 | 2.996510 | 2.507811 | 0.001470 | 0.001289 | 0.001369 |
| bind_cancellation_slot.test | RUN | 0.568748 | 2.933742 | 2.625178 | 0.000941 | 0.001127 | 0.000846 |
| bind_cancellation_slot_select.test | RUN | 0.575956 | 2.975372 | 2.521813 | 0.000901 | 0.000914 | 0.000853 |
| bind_executor.test | RUN | 0.376492 | 1.998652 | 1.606930 | 0.001384 | 0.001478 | 0.001396 |
| bind_executor_select.test | RUN | 0.385440 | 2.030867 | 1.606653 | 0.001266 | 0.001334 | 0.001216 |
| bind_immediate_executor.test | RUN | 0.285618 | 1.652145 | 1.029814 | 0.000879 | 0.001099 | 0.000847 |
| bind_immediate_executor_select.test | RUN | 0.288779 | 1.619576 | 1.120866 | 0.000862 | 0.000906 | 0.000765 |
| buffer.test | RUN | 0.168875 | 0.677608 | 0.607746 | 0.000839 | 0.000898 | 0.000846 |
| buffer_select.test | RUN | 0.162713 | 0.683608 | 0.596977 | 0.000770 | 0.000873 | 0.000746 |
| buffer_registration.test | LINK | 0.125649 | 0.331228 | 0.349305 | — | — | — |
| buffer_registration_select.test | LINK | 0.128778 | 0.334195 | 0.343969 | — | — | — |
| buffered_read_stream.test | RUN | 0.662463 | 4.501514 | 3.660487 | 0.001175 | 0.001507 | 0.001367 |
| buffered_read_stream_select.test | RUN | 0.665930 | 4.512663 | 3.532279 | 0.001043 | 0.001482 | 0.001446 |
| buffered_stream.test | RUN | 0.900003 | 7.097619 | 6.560728 | 0.001530 | 0.001590 | 0.001397 |
| buffered_stream_select.test | RUN | 0.911858 | 7.195689 | 6.287276 | 0.001391 | 0.001651 | 0.001503 |
| buffered_write_stream.test | RUN | 1.102286 | 6.154036 | 5.554192 | 0.001590 | 0.001666 | 0.001415 |
| buffered_write_stream_select.test | RUN | 1.106293 | 6.259762 | 5.372030 | 0.001383 | 0.001608 | 0.001420 |
| buffers_iterator.test | RUN | 0.323882 | 0.538172 | 0.864491 | 0.001182 | 0.001135 | 0.001115 |
| buffers_iterator_select.test | RUN | 0.318406 | 0.532880 | 0.870832 | 0.001059 | 0.001151 | 0.001001 |
| cancel_after.test | RUN | 0.919122 | 4.797208 | 3.963235 | 0.002358 | 0.002411 | 0.002572 |
| cancel_after_select.test | RUN | 0.927284 | 4.788817 | 3.985372 | 0.002412 | 0.002426 | 0.002250 |
| cancel_at.test | RUN | 0.796541 | 4.260522 | 3.954155 | 0.002212 | 0.002202 | 0.002124 |
| cancel_at_select.test | RUN | 0.769583 | 4.260560 | 3.932167 | 0.002081 | 0.002180 | 0.002046 |
| cancellation_signal.test | LINK | 0.087863 | 0.192485 | 0.279858 | — | — | — |
| cancellation_signal_select.test | LINK | 0.090673 | 0.192789 | 0.353340 | — | — | — |
| cancellation_state.test | LINK | 0.086596 | 0.194732 | 0.370346 | — | — | — |
| cancellation_state_select.test | LINK | 0.091442 | 0.194803 | 0.358206 | — | — | — |
| cancellation_type.test | LINK | 0.097144 | 0.154456 | 0.284521 | — | — | — |
| cancellation_type_select.test | LINK | 0.096822 | 0.150746 | 0.289181 | — | — | — |
| co_composed.test | RUN | 0.099809 | 0.151073 | 0.275794 | 0.001065 | 0.000902 | 0.001039 |
| co_composed_select.test | RUN | 0.099515 | 0.192175 | 0.285273 | 0.000991 | 0.001207 | 0.001037 |
| co_spawn.test | LINK | 0.098769 | 0.163720 | 0.279395 | — | — | — |
| co_spawn_select.test | LINK | 0.096056 | 0.216534 | 0.283265 | — | — | — |
| completion_condition.test | LINK | 0.129448 | 0.362234 | 0.381004 | — | — | — |
| completion_condition_select.test | LINK | 0.122726 | 0.358839 | 0.380959 | — | — | — |
| compose.test | RUN | 0.676409 | 3.746774 | 3.244263 | 0.001662 | 0.001450 | 0.001530 |
| compose_select.test | RUN | 0.683340 | 3.614725 | 3.225017 | 0.001359 | 0.001744 | 0.001394 |
| composed.test | RUN | 0.686195 | 3.576435 | 3.179146 | 0.001199 | 0.001269 | 0.001114 |
| composed_select.test | RUN | 0.681310 | 3.558067 | 3.163051 | 0.001084 | 0.001186 | 0.001052 |
| config.test | RUN | 0.356071 | 2.314688 | 1.448404 | 0.001242 | 0.001267 | 0.001203 |
| config_select.test | RUN | 0.369511 | 2.420650 | 1.672604 | 0.001089 | 0.001213 | 0.001122 |
| connect.test | LINK | 1.145487 | 7.813740 | 6.690577 | — | — | — |
| connect_select.test | LINK | 1.158228 | 7.739522 | 6.829390 | — | — | — |
| connect_pipe.test | RUN | 0.586711 | 2.946529 | 2.505156 | 0.001292 | 0.001346 | 0.001233 |
| connect_pipe_select.test | RUN | 0.606231 | 3.031333 | 2.696161 | 0.001224 | 0.001198 | 0.001244 |
| consign.test | RUN | 0.502971 | 2.900353 | 2.308506 | 0.001252 | 0.001358 | 0.001212 |
| consign_select.test | RUN | 0.514500 | 2.902831 | 2.288520 | 0.001190 | 0.001280 | 0.001048 |
| coroutine.test | LINK | 0.101478 | 0.272499 | 0.317248 | — | — | — |
| coroutine_select.test | LINK | 0.102328 | 0.276985 | 0.310159 | — | — | — |
| deadline_timer.test | RUN | 0.750090 | 3.776605 | 3.349689 | 0.002215 | 0.002551 | 0.002205 |
| deadline_timer_select.test | RUN | 0.748875 | 3.744341 | 3.301816 | 0.002031 | 0.001995 | 0.002018 |
| deferred.test | RUN | 0.111143 | 0.247083 | 0.314309 | 0.001123 | 0.001152 | 0.001045 |
| deferred_select.test | RUN | 0.110197 | 0.261721 | 0.306472 | 0.001078 | 0.001188 | 0.000997 |
| detached.test | LINK | 0.118714 | 0.281722 | 0.343816 | — | — | — |
| detached_select.test | LINK | 0.126397 | 0.284718 | 0.337289 | — | — | — |
| disposition.test | RUN | 0.123223 | 0.692973 | 0.661296 | 0.000822 | 0.001367 | 0.001299 |
| disposition_select.test | RUN | 0.121691 | 0.690661 | 0.642649 | 0.000834 | 0.001315 | 0.001090 |
| error.test | RUN | 0.107046 | 0.656183 | 0.598117 | 0.000795 | 0.001269 | 0.000845 |
| error_select.test | RUN | 0.110112 | 0.665130 | 0.583397 | 0.000826 | 0.001265 | 0.001090 |
| file_base.test | LINK | 0.133156 | 0.536980 | 0.620787 | — | — | — |
| file_base_select.test | LINK | 0.137144 | 0.539715 | 0.617216 | — | — | — |
| fwd_first.test | LINK | 0.322401 | 0.931172 | 1.104523 | — | — | — |
| fwd_last.test | LINK | 0.327457 | 0.836922 | 1.084688 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.118124 | 0.309073 | 0.400129 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.120071 | 0.311826 | 0.393807 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.562155 | 2.910612 | 2.355031 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.564818 | 3.003845 | 2.294513 | — | — | — |
| generic_raw_protocol.test | LINK | 0.566381 | 2.916278 | 2.330736 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.567445 | 3.003719 | 2.327762 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.484268 | 2.454624 | 1.993612 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.487397 | 2.501470 | 1.990175 | — | — | — |
| generic_stream_protocol.test | LINK | 0.513592 | 2.641567 | 2.131895 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.518437 | 2.717589 | 2.143616 | — | — | — |
| high_resolution_timer.test | LINK | 0.202043 | 0.458097 | 0.613389 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.206281 | 0.477484 | 0.630809 | — | — | — |
| immediate.test | LINK | 0.135671 | 0.355182 | 0.378662 | — | — | — |
| immediate_select.test | LINK | 0.133435 | 0.353991 | 0.381469 | — | — | — |
| inline_executor.test | RUN | 0.166330 | 0.563131 | 0.573079 | 0.000879 | 0.000905 | 0.000848 |
| inline_executor_select.test | RUN | 0.170745 | 0.555214 | 0.577027 | 0.000853 | 0.000918 | 0.000793 |
| inline_or_executor.test | RUN | 0.293686 | 1.722405 | 1.163182 | 0.000861 | 0.000918 | 0.000840 |
| inline_or_executor_select.test | RUN | 0.299270 | 1.744457 | 1.269508 | 0.000867 | 0.000947 | 0.000819 |
| io_context.test | RUN | 0.437049 | 2.640790 | 2.015818 | 0.001531 | 0.001508 | 0.001730 |
| io_context_select.test | RUN | 0.446769 | 2.556584 | 2.031528 | 0.001477 | 0.001405 | 0.001365 |
| io_context_strand.test | RUN | 0.423107 | 2.208978 | 1.758672 | 0.001408 | 0.001549 | 0.001408 |
| io_context_strand_select.test | RUN | 0.425010 | 2.187501 | 1.766453 | 0.001361 | 0.001461 | 0.001514 |
| ip_address.test | LINK | 0.142899 | 0.505126 | 0.604892 | — | — | — |
| ip_address_select.test | LINK | 0.146922 | 0.499252 | 0.718966 | — | — | — |
| ip_address_v4.test | LINK | 0.142729 | 0.527612 | 0.880204 | — | — | — |
| ip_address_v4_select.test | LINK | 0.141187 | 0.523898 | 0.881496 | — | — | — |
| ip_address_v6.test | LINK | 0.165963 | 0.690639 | 1.084481 | — | — | — |
| ip_address_v6_select.test | LINK | 0.163672 | 0.692481 | 1.088767 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.121282 | 0.346525 | 0.684334 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.117890 | 0.344703 | 0.689150 | — | — | — |
| ip_basic_resolver.test | LINK | 0.202284 | 0.682043 | 1.027603 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.204415 | 0.737648 | 1.051665 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.066832 | 0.208280 | 0.288169 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.065842 | 0.236749 | 0.286180 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.118152 | 0.488798 | 0.669499 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.123935 | 0.492112 | 0.669050 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.113478 | 0.468326 | 0.635656 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.115778 | 0.467145 | 0.642173 | — | — | — |
| ip_host_name.test | RUN | 0.122914 | 0.643444 | 0.727320 | 0.000813 | 0.001106 | 0.001047 |
| ip_host_name_select.test | RUN | 0.122902 | 0.638410 | 0.735414 | 0.000804 | 0.001143 | 0.001050 |
| ip_icmp.test | RUN | 0.704520 | 6.150905 | 4.863157 | 0.000899 | 0.001186 | 0.001129 |
| ip_icmp_select.test | RUN | 0.710727 | 6.213943 | 4.807610 | 0.000872 | 0.001230 | 0.001169 |
| ip_multicast.test | RUN | 0.388136 | 3.099269 | 2.733579 | 0.000992 | 0.001553 | 0.001254 |
| ip_multicast_select.test | RUN | 0.403863 | 3.103170 | 2.685656 | 0.000945 | 0.001305 | 0.001308 |
| ip_resolver_query_base.test | LINK | 0.075998 | 0.254355 | 0.300545 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.075774 | 0.254210 | 0.305794 | — | — | — |
| ip_tcp.test | RUN | 1.086845 | 9.176580 | 7.481063 | 0.001234 | 0.001806 | 0.001537 |
| ip_tcp_select.test | RUN | 1.086933 | 9.491370 | 7.229697 | 0.001128 | 0.001736 | 0.001503 |
| ip_udp.test | RUN | 0.760223 | 6.439842 | 5.176946 | 0.001076 | 0.001426 | 0.001327 |
| ip_udp_select.test | RUN | 0.748902 | 6.625748 | 5.022492 | 0.000958 | 0.001446 | 0.001283 |
| ip_unicast.test | RUN | 0.354626 | 2.800131 | 2.431347 | 0.001071 | 0.001327 | 0.001253 |
| ip_unicast_select.test | RUN | 0.354276 | 2.845699 | 2.383381 | 0.000877 | 0.001319 | 0.001225 |
| ip_v6_only.test | RUN | 0.370142 | 2.938603 | 2.470200 | 0.000935 | 0.001459 | 0.001201 |
| ip_v6_only_select.test | RUN | 0.375307 | 2.972272 | 2.476491 | 0.000875 | 0.001320 | 0.001100 |
| is_read_buffered.test | RUN | 0.239975 | 0.830225 | 1.283837 | 0.000861 | 0.001311 | 0.001029 |
| is_read_buffered_select.test | RUN | 0.247639 | 0.860745 | 1.282117 | 0.000813 | 0.001098 | 0.000995 |
| is_write_buffered.test | RUN | 0.237378 | 0.853491 | 1.233510 | 0.000882 | 0.001352 | 0.001067 |
| is_write_buffered_select.test | RUN | 0.242203 | 0.868302 | 1.259638 | 0.000835 | 0.001071 | 0.001022 |
| local_basic_endpoint.test | LINK | 0.118274 | 0.471580 | 0.645245 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.117635 | 0.478789 | 0.633179 | — | — | — |
| local_connect_pair.test | LINK | 0.333404 | 2.849899 | 2.261428 | — | — | — |
| local_connect_pair_select.test | LINK | 0.341848 | 2.813532 | 2.240458 | — | — | — |
| local_datagram_protocol.test | LINK | 0.479729 | 3.644065 | 3.195332 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.486690 | 3.681150 | 3.139858 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.483575 | 3.644662 | 3.232931 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.488362 | 3.678495 | 3.190701 | — | — | — |
| local_stream_protocol.test | LINK | 0.454321 | 3.444264 | 3.051862 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.456505 | 3.436955 | 2.989384 | — | — | — |
| placeholders.test | LINK | 0.073342 | 0.253602 | 0.310694 | — | — | — |
| placeholders_select.test | LINK | 0.075485 | 0.252402 | 0.311881 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.215743 | 0.718355 | 0.939426 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.215888 | 0.759026 | 1.119807 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.207888 | 0.715550 | 0.934404 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.220508 | 0.754082 | 1.124923 | — | — | — |
| posix_descriptor_base.test | LINK | 0.079942 | 0.260575 | 0.309151 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.078111 | 0.263722 | 0.308307 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.461369 | 3.563032 | 3.004229 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.472952 | 3.595737 | 3.061165 | — | — | — |
| prepend.test | RUN | 0.341423 | 2.841820 | 2.328601 | 0.000891 | 0.001441 | 0.001112 |
| prepend_select.test | RUN | 0.354447 | 2.901680 | 2.320337 | 0.001000 | 0.001398 | 0.001040 |
| random_access_file.test | LINK | 0.231002 | 0.640448 | 0.758433 | — | — | — |
| random_access_file_select.test | LINK | 0.286926 | 0.676146 | 0.958743 | — | — | — |
| read.test | RUN | 1.693798 | 18.029137 | 13.405694 | 0.001650 | 0.001698 | 0.001666 |
| read_select.test | RUN | 1.704311 | 17.898245 | 13.641392 | 0.001576 | 0.001712 | 0.001694 |
| read_at.test | RUN | 1.680021 | 23.350660 | 17.822866 | 0.002008 | 0.002382 | 0.001938 |
| read_at_select.test | RUN | 1.680133 | 23.382819 | 18.059106 | 0.001940 | 0.002098 | 0.001871 |
| read_until.test | RUN | 0.877440 | 6.993917 | 5.198650 | 0.001302 | 0.001388 | 0.001297 |
| read_until_select.test | RUN | 0.897642 | 7.041281 | 5.380095 | 0.001256 | 0.001474 | 0.001275 |
| readable_pipe.test | LINK | 0.547672 | 2.888916 | 2.350879 | — | — | — |
| readable_pipe_select.test | LINK | 0.553001 | 3.022141 | 2.506933 | — | — | — |
| recycling_allocator.test | RUN | 0.154299 | 0.406855 | 0.462154 | 0.001040 | 0.001178 | 0.001079 |
| recycling_allocator_select.test | RUN | 0.156625 | 0.410197 | 0.464257 | 0.001084 | 0.001130 | 0.001071 |
| redirect_disposition.test | LINK | 0.693261 | 4.053272 | 3.588303 | — | — | — |
| redirect_disposition_select.test | LINK | 0.708317 | 4.054012 | 3.616680 | — | — | — |
| redirect_error.test | LINK | 0.618329 | 3.378706 | 3.093681 | — | — | — |
| redirect_error_select.test | LINK | 0.619007 | 3.310859 | 3.117334 | — | — | — |
| registered_buffer.test | LINK | 0.137787 | 0.324972 | 0.412221 | — | — | — |
| registered_buffer_select.test | LINK | 0.146637 | 0.326439 | 0.398892 | — | — | — |
| signal_set.test | RUN | 0.521656 | 2.868102 | 2.240656 | 0.001157 | 0.001309 | 0.001130 |
| signal_set_select.test | RUN | 0.540390 | 2.943786 | 2.416578 | 0.001166 | 0.001284 | 0.001075 |
| signal_set_base.test | LINK | 0.114074 | 0.261727 | 0.298625 | — | — | — |
| signal_set_base_select.test | LINK | 0.115658 | 0.262368 | 0.308830 | — | — | — |
| socket_base.test | RUN | 0.636932 | 4.173178 | 3.359637 | 0.001388 | 0.001405 | 0.001260 |
| socket_base_select.test | RUN | 0.649205 | 4.026287 | 3.354199 | 0.001219 | 0.001313 | 0.001145 |
| spawn.test | RUN | 1.102973 | 6.935073 | 5.803701 | 0.001337 | 0.001679 | 0.001354 |
| spawn_select.test | RUN | 1.122532 | 6.836317 | 5.731091 | 0.001212 | 0.001554 | 0.001301 |
| static_thread_pool.test | RUN | 0.264615 | 0.634607 | 0.749322 | 0.001123 | 0.001271 | 0.001040 |
| static_thread_pool_select.test | RUN | 0.290687 | 0.682290 | 0.975721 | 0.001039 | 0.001154 | 0.001092 |
| steady_timer.test | LINK | 0.302677 | 0.692998 | 1.046915 | — | — | — |
| steady_timer_select.test | LINK | 0.313036 | 0.725696 | 1.060448 | — | — | — |
| strand.test | RUN | 0.681865 | 3.845133 | 3.424682 | 0.001786 | 0.001940 | 0.001678 |
| strand_select.test | RUN | 0.705773 | 3.835629 | 3.341784 | 0.001418 | 0.001489 | 0.001433 |
| stream_file.test | LINK | 0.279443 | 0.633600 | 0.781153 | — | — | — |
| stream_file_select.test | LINK | 0.294757 | 0.594346 | 0.972149 | — | — | — |
| streambuf.test | RUN | 0.172737 | 0.360923 | 0.551440 | 0.000833 | 0.000880 | 0.001048 |
| streambuf_select.test | RUN | 0.174122 | 0.356850 | 0.535306 | 0.000821 | 0.000897 | 0.001089 |
| system_timer.test | LINK | 0.456994 | 2.472613 | 2.142550 | — | — | — |
| system_timer_select.test | LINK | 0.452135 | 2.396555 | 2.009206 | — | — | — |
| system_context.test | LINK | 0.185515 | 0.414279 | 0.464566 | — | — | — |
| system_context_select.test | LINK | 0.190053 | 0.437735 | 0.569920 | — | — | — |
| system_executor.test | LINK | 0.250507 | 1.401384 | 0.938757 | — | — | — |
| system_executor_select.test | LINK | 0.259288 | 1.348550 | 1.022496 | — | — | — |
| this_coro.test | LINK | 0.065792 | 0.155051 | 0.178214 | — | — | — |
| this_coro_select.test | LINK | 0.069570 | 0.152006 | 0.177162 | — | — | — |
| thread_pool.test | RUN | 0.304886 | 1.793174 | 1.211839 | 0.001497 | 0.001620 | 0.001509 |
| thread_pool_select.test | RUN | 0.318800 | 1.801101 | 1.313929 | 0.001405 | 0.001631 | 0.001377 |
| time_traits.test | LINK | 0.157143 | 0.322251 | 0.366680 | — | — | — |
| time_traits_select.test | LINK | 0.157785 | 0.317891 | 0.362004 | — | — | — |
| ts_buffer.test | LINK | 0.146026 | 0.517341 | 0.384843 | — | — | — |
| ts_buffer_select.test | LINK | 0.142853 | 0.537926 | 0.387087 | — | — | — |
| ts_executor.test | LINK | 0.213582 | 0.760861 | 0.604042 | — | — | — |
| ts_executor_select.test | LINK | 0.225852 | 0.815521 | 0.729751 | — | — | — |
| ts_internet.test | LINK | 0.235170 | 0.834383 | 0.764609 | — | — | — |
| ts_internet_select.test | LINK | 0.235004 | 0.853883 | 1.041427 | — | — | — |
| ts_io_context.test | LINK | 0.187384 | 0.641833 | 0.753064 | — | — | — |
| ts_io_context_select.test | LINK | 0.199879 | 0.684977 | 0.763754 | — | — | — |
| ts_net.test | LINK | 0.279819 | 1.001514 | 1.514737 | — | — | — |
| ts_net_select.test | LINK | 0.284028 | 1.016960 | 1.522801 | — | — | — |
| ts_netfwd.test | LINK | 0.289165 | 1.000978 | 1.522253 | — | — | — |
| ts_netfwd_select.test | LINK | 0.282060 | 1.035700 | 1.530731 | — | — | — |
| ts_socket.test | LINK | 0.231551 | 0.792599 | 1.156773 | — | — | — |
| ts_socket_select.test | LINK | 0.238180 | 0.800519 | 1.163678 | — | — | — |
| ts_timer.test | LINK | 0.208811 | 0.702999 | 1.007776 | — | — | — |
| ts_timer_select.test | LINK | 0.204528 | 0.734824 | 1.029404 | — | — | — |
| use_awaitable.test | LINK | 0.065965 | 0.233223 | 0.280728 | — | — | — |
| use_awaitable_select.test | LINK | 0.068777 | 0.230322 | 0.282974 | — | — | — |
| wait_traits.test | LINK | 0.067433 | 0.232914 | 0.284191 | — | — | — |
| wait_traits_select.test | LINK | 0.065350 | 0.229617 | 0.277596 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.065661 | 0.225736 | 0.284251 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.066437 | 0.224402 | 0.282645 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.064717 | 0.233101 | 0.280059 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.065224 | 0.231594 | 0.287377 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.064458 | 0.232353 | 0.285046 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.064323 | 0.231285 | 0.277766 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.065099 | 0.234124 | 0.285190 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.064813 | 0.227353 | 0.279814 | — | — | — |
| windows_object_handle.test | LINK | 0.187324 | 0.647848 | 0.762869 | — | — | — |
| windows_object_handle_select.test | LINK | 0.199919 | 0.687818 | 0.951544 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.195961 | 0.680403 | 0.832024 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.203091 | 0.719281 | 1.043736 | — | — | — |
| windows_random_access_handle.test | LINK | 0.188600 | 0.654020 | 0.767000 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.199942 | 0.688043 | 0.950297 | — | — | — |
| windows_stream_handle.test | LINK | 0.187816 | 0.644116 | 0.753218 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.196667 | 0.685070 | 0.958128 | — | — | — |
| writable_pipe.test | LINK | 0.379789 | 2.921714 | 2.477565 | — | — | — |
| writable_pipe_select.test | LINK | 0.386086 | 3.051663 | 2.577704 | — | — | — |
| write.test | RUN | 1.461799 | 14.975055 | 13.237436 | 0.001634 | 0.001605 | 0.001590 |
| write_select.test | RUN | 1.538906 | 15.077353 | 13.455810 | 0.001680 | 0.001742 | 0.001801 |
| write_at.test | RUN | 1.720105 | 19.954132 | 16.930711 | 0.001752 | 0.001865 | 0.001755 |
| write_at_select.test | RUN | 1.736020 | 20.052537 | 16.806572 | 0.001804 | 0.001780 | 0.001688 |
| any_executor.test | RUN | 0.667002 | 6.538688 | 5.514520 | 0.001588 | 0.001549 | 0.001613 |
| blocking.test | RUN | 1.417910 | 8.757868 | 11.343187 | 0.003226 | 0.003225 | 0.003202 |
| blocking_adaptation.test | RUN | 0.709046 | 3.761853 | 4.951895 | 0.002024 | 0.002193 | 0.002029 |
| context_as.test | RUN | 0.424232 | 2.616278 | 1.703496 | 0.001326 | 0.001484 | 0.001263 |
| executor.test | RUN | 0.106321 | 0.230822 | 0.295000 | 0.001265 | 0.001150 | 0.001085 |
| inline_exception_handling.test | RUN | 1.406631 | 8.093640 | 11.062323 | 0.003195 | 0.002230 | 0.002220 |
| invocable_archetype.test | RUN | 0.099257 | 0.231240 | 0.300970 | 0.001072 | 0.001144 | 0.001085 |
| mapping.test | RUN | 1.367382 | 8.078700 | 11.310950 | 0.002282 | 0.002304 | 0.002228 |
| outstanding_work.test | RUN | 0.663893 | 3.442006 | 4.819379 | 0.001980 | 0.002106 | 0.002050 |
| prefer_only.test | RUN | 0.218184 | 1.424795 | 1.081346 | 0.001249 | 0.001177 | 0.001122 |
| relationship.test | RUN | 0.553401 | 3.505713 | 4.056169 | 0.001436 | 0.001992 | 0.001449 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.996×, 1.005× | 0.999× |
| clang | 0.981× | 0.983×, 0.978× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 7 | 0.001213s | 0.001224s | 0.001189s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001207s | 0.001229s | 0.001187s | byte equality observed |
| any_completion_handler.test | 10 | 0.001036s | 0.001019s | 0.001006s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001035s | 0.001017s | 0.001005s | byte equality observed |
| any_io_executor.test | 5 | 0.001236s | 0.001209s | 0.001213s | byte equality observed |
| any_io_executor_select.test | 9 | 0.001230s | 0.001220s | 0.001214s | byte equality observed |
| append.test | 10 | 0.000984s | 0.000961s | 0.000971s | byte equality observed |
| append_select.test | 10 | 0.000978s | 0.000950s | 0.000952s | byte equality observed |
| as_tuple.test | 10 | 0.001041s | 0.001027s | 0.001041s | byte equality observed |
| as_tuple_select.test | 10 | 0.000987s | 0.000969s | 0.000955s | byte equality observed |
| bind_allocator.test | 1 | 0.001172s | 0.001149s | 0.001146s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001069s | 0.001040s | 0.001070s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000831s | 0.000833s | 0.000813s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000805s | 0.000807s | 0.000787s | byte equality observed |
| bind_executor.test | 1 | 0.001105s | 0.001112s | 0.001050s | byte equality observed |
| bind_executor_select.test | 1 | 0.001087s | 0.001066s | 0.001075s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000815s | 0.000810s | 0.000782s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000847s | 0.000905s | 0.000841s | byte equality observed |
| buffer.test | 10 | 0.000839s | 0.000848s | 0.000806s | byte equality observed |
| buffer_select.test | 10 | 0.000836s | 0.000812s | 0.000814s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001030s | 0.001030s | 0.001011s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001021s | 0.000989s | 0.001015s | byte equality observed |
| buffered_stream.test | 8 | 0.001011s | 0.001008s | 0.001021s | byte equality observed |
| buffered_stream_select.test | 10 | 0.000989s | 0.000998s | 0.000999s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001014s | 0.001013s | 0.001009s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001008s | 0.000973s | 0.000981s | byte equality observed |
| buffers_iterator.test | 10 | 0.000824s | 0.000828s | 0.000828s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000771s | 0.000759s | 0.000759s | byte equality observed |
| cancel_after.test | 1 | 0.002104s | 0.002122s | 0.002053s | byte equality observed |
| cancel_after_select.test | 1 | 0.002046s | 0.001992s | 0.001977s | byte equality observed |
| cancel_at.test | 1 | 0.002043s | 0.002189s | 0.002071s | byte equality observed |
| cancel_at_select.test | 1 | 0.002056s | 0.001988s | 0.002048s | byte equality observed |
| co_composed.test | 10 | 0.000752s | 0.000732s | 0.000733s | byte equality observed |
| co_composed_select.test | 10 | 0.000749s | 0.000749s | 0.000747s | byte equality observed |
| compose.test | 1 | 0.001181s | 0.001217s | 0.001180s | byte equality observed |
| compose_select.test | 1 | 0.001039s | 0.001040s | 0.001024s | byte equality observed |
| composed.test | 1 | 0.001106s | 0.001116s | 0.001092s | byte equality observed |
| composed_select.test | 1 | 0.001063s | 0.001047s | 0.001041s | byte equality observed |
| config.test | 10 | 0.000803s | 0.000799s | 0.000784s | byte equality observed |
| config_select.test | 10 | 0.000862s | 0.000864s | 0.000847s | byte equality observed |
| connect_pipe.test | 10 | 0.000868s | 0.000888s | 0.000842s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000874s | 0.000883s | 0.000871s | byte equality observed |
| consign.test | 10 | 0.000882s | 0.000890s | 0.000858s | byte equality observed |
| consign_select.test | 10 | 0.000816s | 0.000813s | 0.000802s | byte equality observed |
| deadline_timer.test | 1 | 0.001746s | 0.001766s | 0.001734s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001619s | 0.001600s | 0.001639s | byte equality observed |
| deferred.test | 10 | 0.000744s | 0.000736s | 0.000730s | byte equality observed |
| deferred_select.test | 10 | 0.000737s | 0.000736s | 0.000723s | byte equality observed |
| disposition.test | 10 | 0.000785s | 0.000782s | 0.000779s | byte equality observed |
| disposition_select.test | 10 | 0.000788s | 0.000778s | 0.000782s | byte equality observed |
| error.test | 10 | 0.000760s | 0.000774s | 0.000755s | byte equality observed |
| error_select.test | 10 | 0.000767s | 0.000770s | 0.000771s | byte equality observed |
| inline_executor.test | 10 | 0.000772s | 0.000774s | 0.000764s | byte equality observed |
| inline_executor_select.test | 10 | 0.000780s | 0.000778s | 0.000773s | byte equality observed |
| inline_or_executor.test | 10 | 0.000782s | 0.000780s | 0.000776s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000785s | 0.000788s | 0.000772s | byte equality observed |
| io_context.test | 1 | 0.001393s | 0.001401s | 0.001412s | byte equality observed |
| io_context_select.test | 1 | 0.001386s | 0.001385s | 0.001393s | byte equality observed |
| io_context_strand.test | 1 | 0.001321s | 0.001325s | 0.001339s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001250s | 0.001216s | 0.001231s | byte equality observed |
| ip_host_name.test | 10 | 0.000760s | 0.000751s | 0.000745s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000755s | 0.000757s | 0.000748s | byte equality observed |
| ip_icmp.test | 10 | 0.000785s | 0.000784s | 0.000733s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000782s | 0.000788s | 0.000755s | byte equality observed |
| ip_multicast.test | 10 | 0.000842s | 0.000839s | 0.000821s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000828s | 0.000830s | 0.000814s | byte equality observed |
| ip_tcp.test | 10 | 0.001035s | 0.001029s | 0.001011s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001010s | 0.001005s | 0.000984s | byte equality observed |
| ip_udp.test | 10 | 0.000860s | 0.000855s | 0.000835s | byte equality observed |
| ip_udp_select.test | 10 | 0.000852s | 0.000851s | 0.000828s | byte equality observed |
| ip_unicast.test | 10 | 0.000821s | 0.000823s | 0.000800s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000810s | 0.000818s | 0.000789s | byte equality observed |
| ip_v6_only.test | 10 | 0.000820s | 0.000820s | 0.000799s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000809s | 0.000808s | 0.000793s | byte equality observed |
| is_read_buffered.test | 10 | 0.000761s | 0.000753s | 0.000744s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000757s | 0.000736s | 0.000742s | byte equality observed |
| is_write_buffered.test | 10 | 0.000753s | 0.000740s | 0.000750s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000751s | 0.000747s | 0.000750s | byte equality observed |
| prepend.test | 10 | 0.000809s | 0.000816s | 0.000793s | byte equality observed |
| prepend_select.test | 10 | 0.000792s | 0.000797s | 0.000776s | byte equality observed |
| read.test | 10 | 0.001104s | 0.001149s | 0.001065s | byte equality observed |
| read_at.test | 10 | 0.001321s | 0.001415s | 0.001302s | byte equality observed |
| read_at_select.test | 10 | 0.001319s | 0.001505s | 0.001301s | byte equality observed |
| read_select.test | 10 | 0.001105s | 0.001156s | 0.001061s | byte equality observed |
| read_until.test | 10 | 0.000910s | 0.000963s | 0.000877s | byte equality observed |
| read_until_select.test | 10 | 0.000940s | 0.000965s | 0.000883s | byte equality observed |
| recycling_allocator.test | 10 | 0.000825s | 0.000831s | 0.000777s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000816s | 0.000852s | 0.000762s | byte equality observed |
| signal_set.test | 10 | 0.000846s | 0.000826s | 0.000827s | byte equality observed |
| signal_set_select.test | 10 | 0.000841s | 0.000871s | 0.000807s | byte equality observed |
| socket_base.test | 10 | 0.000903s | 0.000907s | 0.000897s | byte equality observed |
| socket_base_select.test | 10 | 0.000903s | 0.000910s | 0.000890s | byte equality observed |
| spawn.test | 10 | 0.000996s | 0.000989s | 0.000962s | byte equality observed |
| spawn_select.test | 10 | 0.000996s | 0.000986s | 0.000966s | byte equality observed |
| static_thread_pool.test | 10 | 0.000819s | 0.000784s | 0.000802s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000772s | 0.000752s | 0.000777s | byte equality observed |
| strand.test | 1 | 0.001342s | 0.001330s | 0.001350s | byte equality observed |
| strand_select.test | 1 | 0.001262s | 0.001233s | 0.001280s | byte equality observed |
| streambuf.test | 10 | 0.000776s | 0.000775s | 0.000776s | byte equality observed |
| streambuf_select.test | 10 | 0.000822s | 0.000810s | 0.000808s | byte equality observed |
| thread_pool.test | 10 | 0.001572s | 0.001503s | 0.001550s | byte equality observed |
| thread_pool_select.test | 10 | 0.001526s | 0.001512s | 0.001575s | byte equality observed |
| write.test | 10 | 0.001216s | 0.001183s | 0.001182s | byte equality observed |
| write_at.test | 10 | 0.001325s | 0.001293s | 0.001270s | byte equality observed |
| write_at_select.test | 10 | 0.001322s | 0.001274s | 0.001271s | byte equality observed |
| write_select.test | 10 | 0.001199s | 0.001159s | 0.001161s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794197).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
