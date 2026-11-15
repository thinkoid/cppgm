# Public benchmarks: AMD EPYC

Measured compiler: [`bb0980105`](https://github.com/vishvananda/cppgm/commit/bb09801053e48486beebe014071a71353ce9be0b) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43701438026) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: AMD EPYC 7763 64-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.23× | 79 | 3.34× | 79 |
| Compile CPU, `-O0` | 2.98× | 79 | 3.54× | 79 |
| Compile CPU, `-O3` | 4.14× | 81 | 4.09× | 81 |
| Compile peak RSS, `-O0` | 1.46× | 81 | 2.22× | 81 |
| Compile peak RSS, `-O3` | 1.74× | 81 | 2.33× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.19× | 81 | 1.22× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.937 to 1.038; raw observations and block ratios are retained in the artifact.

## Slowest generated code, by run-time instructions

| Program | vs g++ |
| --- | ---: |
| bg/nbody/2 | 0.63× |
| bg/spectralnorm/1 | 0.75× |
| tramp3d-v4 | 0.78× |
| bg/nbody/1 | 0.82× |
| bg/mandelbrot/7 | 0.84× |
| bg/mandelbrot/9 | 0.84× |
| bg/mandelbrot/5 | 0.86× |
| bg/mandelbrot/2 | 0.86× |
| bg/nbody/3 | 0.87× |
| CoyoteBench/fftbench | 0.89× |

## Compile CPU times

Times are CPU seconds, excluding linking. Speed is reference time divided by cppgm time; higher is better. Every program is listed. Missing times show a dash. Ratios are omitted for failed programs or when either time is below 10 ms.

Compilation is measured once per compiler and level; the ABBA/BAAB repetitions apply to generated-program execution and self-built compiler speed.

### O0 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.099 | 0.405 | 4.09× | 0.460 | 4.65× | ok |
| Adobe-C++/loop_unroll | 0.090 | 0.807 | 8.97× | 0.370 | 4.11× | ok |
| Adobe-C++/simple_types_constant_folding | 0.092 | 0.951 | 10.34× | 0.447 | 4.86× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.079 | 0.694 | 8.78× | 0.350 | 4.43× | ok |
| Adobe-C++/stepanov_abstraction | 0.061 | 0.258 | 4.23× | 0.206 | 3.38× | ok |
| Adobe-C++/stepanov_vector | 0.130 | 0.404 | 3.11× | 0.452 | 3.48× | ok |
| Bullet | 7.834 | 25.853 | 3.30× | 28.237 | 3.60× | ok |
| CLAMR | 4.293 | 13.489 | 3.14× | 16.416 | 3.82× | ok |
| CoyoteBench/almabench | 0.047 | 0.127 | 2.70× | 0.192 | 4.09× | ok |
| CoyoteBench/fftbench | 0.165 | 0.395 | 2.39× | 0.767 | 4.65× | ok |
| CoyoteBench/huffbench | 0.047 | 0.106 | 2.26× | 0.202 | 4.30× | ok |
| CoyoteBench/lpbench | 0.047 | 0.130 | 2.77× | 0.131 | 2.79× | ok |
| DOE/HACCKernels | 0.164 | 0.396 | 2.41× | 0.554 | 3.38× | ok |
| DOE/HPCCG | 0.980 | 2.407 | 2.46× | 4.586 | 4.68× | ok |
| DOE/PENNANT | 2.176 | 5.928 | 2.72× | 8.489 | 3.90× | ok |
| DOE/miniFE | 0.961 | 3.333 | 3.47× | 3.669 | 3.82× | ok |
| Misc-C++-EH/spirit | 0.727 | 3.577 | 4.92× | 3.600 | 4.95× | ok |
| Misc-C++-Large/ray | 0.164 | 0.438 | 2.67× | 0.640 | 3.90× | ok |
| Misc-C++-Large/sphereflake | 0.165 | 0.321 | 1.95× | 0.524 | 3.18× | ok |
| Misc-C++/bigfib | 0.176 | 0.531 | 3.02× | 0.766 | 4.35× | ok |
| Misc-C++/oopack_v1p8 | 0.047 | 0.128 | 2.72× | 0.174 | 3.70× | ok |
| Misc-C++/stepanov_container | 0.230 | 0.934 | 4.06× | 0.834 | 3.63× | ok |
| Misc-C++/stepanov_v1p2 | 0.048 | 0.165 | 3.44× | 0.163 | 3.40× | ok |
| PAQ8p | 0.100 | 0.630 | 6.30× | 0.426 | 4.26× | ok |
| Prolangs-C++/life | 0.006 | 0.044 | — | 0.039 | — | ok |
| Prolangs-C++/ocean | 0.017 | 0.093 | 5.47× | 0.075 | 4.41× | ok |
| Prolangs-C++/primes | 0.009 | 0.035 | — | 0.039 | — | ok |
| Shootout-C++-EH/except | 0.118 | 0.259 | 2.19× | 0.413 | 3.50× | ok |
| Shootout-C++/ackermann | 0.110 | 0.252 | 2.29× | 0.347 | 3.15× | ok |
| Shootout-C++/ary3 | 0.125 | 0.287 | 2.30× | 0.422 | 3.38× | ok |
| Shootout-C++/fibo | 0.130 | 0.230 | 1.77× | 0.376 | 2.89× | ok |
| Shootout-C++/hash | 0.215 | 0.423 | 1.97× | 0.557 | 2.59× | ok |
| Shootout-C++/hash2 | 0.154 | 0.416 | 2.70× | 0.526 | 3.42× | ok |
| Shootout-C++/heapsort | 0.131 | 0.315 | 2.40× | 0.427 | 3.26× | ok |
| Shootout-C++/lists | 0.121 | 0.300 | 2.48× | 0.424 | 3.50× | ok |
| Shootout-C++/lists1 | 0.133 | 0.349 | 2.62× | 0.455 | 3.42× | ok |
| Shootout-C++/matrix | 0.105 | 0.236 | 2.25× | 0.355 | 3.38× | ok |
| Shootout-C++/methcall | 0.105 | 0.244 | 2.32× | 0.337 | 3.21× | ok |
| Shootout-C++/moments | 0.149 | 0.377 | 2.53× | 0.471 | 3.16× | ok |
| Shootout-C++/random | 0.131 | 0.271 | 2.07× | 0.427 | 3.26× | ok |
| Shootout-C++/sieve | 0.135 | 0.365 | 2.70× | 0.538 | 3.99× | ok |
| SmallPT | 0.045 | 0.123 | 2.73× | 0.143 | 3.18× | ok |
| Stanford/Bubblesort | 0.014 | 0.041 | 2.93× | 0.046 | 3.29× | ok |
| Stanford/FloatMM | 0.014 | 0.040 | 2.86× | 0.050 | 3.57× | ok |
| Stanford/Puzzle | 0.015 | 0.052 | 3.47× | 0.050 | 3.33× | ok |
| Stanford/Treesort | 0.014 | 0.042 | 3.00× | 0.049 | 3.50× | ok |
| bg/binarytrees/2 | 0.106 | 0.242 | 2.28× | 0.356 | 3.36× | ok |
| bg/fannkuchredux/3 | 0.051 | 0.110 | 2.16× | 0.143 | 2.80× | ok |
| bg/fasta/1 | 0.080 | 0.190 | 2.38× | 0.242 | 3.02× | ok |
| bg/fasta/2 | 0.080 | 0.187 | 2.34× | 0.231 | 2.89× | ok |
| bg/fasta/3 | 0.127 | 0.279 | 2.20× | 0.403 | 3.17× | ok |
| bg/fasta/4 | 0.145 | 0.227 | 1.57× | 0.334 | 2.30× | ok |
| bg/fasta/6 | 0.201 | 0.575 | 2.86× | 0.866 | 4.31× | ok |
| bg/mandelbrot/0 | 0.234 | 0.645 | 2.76× | 0.747 | 3.19× | ok |
| bg/mandelbrot/2 | 0.133 | 0.323 | 2.43× | 0.441 | 3.32× | ok |
| bg/mandelbrot/3 | 0.140 | 0.298 | 2.13× | 0.463 | 3.31× | ok |
| bg/mandelbrot/5 | 0.069 | 0.161 | 2.33× | 0.212 | 3.07× | ok |
| bg/mandelbrot/7 | 0.072 | 0.173 | 2.40× | 0.256 | 3.56× | ok |
| bg/mandelbrot/9 | 0.064 | 0.168 | 2.62× | 0.212 | 3.31× | ok |
| bg/nbody/1 | 0.049 | 0.149 | 3.04× | 0.183 | 3.73× | ok |
| bg/nbody/2 | 0.046 | 0.097 | 2.11× | 0.137 | 2.98× | ok |
| bg/nbody/3 | 0.047 | 0.116 | 2.47× | 0.148 | 3.15× | ok |
| bg/nbody/6 | 0.045 | 0.147 | 3.27× | 0.176 | 3.91× | ok |
| bg/pidigits/4 | 0.198 | 0.430 | 2.17× | 0.708 | 3.58× | ok |
| bg/pidigits/5 | 0.138 | 0.266 | 1.93× | 0.424 | 3.07× | ok |
| bg/revcomp/1 | 0.130 | 0.354 | 2.72× | 0.425 | 3.27× | ok |
| bg/revcomp/5 | 0.143 | 0.304 | 2.13× | 0.406 | 2.84× | ok |
| bg/spectralnorm/1 | 0.168 | 0.483 | 2.87× | 0.786 | 4.68× | ok |
| box2d | 2.587 | 7.001 | 2.71× | 9.771 | 3.78× | ok |
| fmt | 0.829 | 3.617 | 4.36× | 3.025 | 3.65× | ok |
| hexxagon | 0.444 | 1.059 | 2.39× | 1.589 | 3.58× | ok |
| lambda | 0.091 | 0.459 | 5.04× | 0.390 | 4.29× | ok |
| minisat | 0.124 | 0.444 | 3.58× | 0.485 | 3.91× | ok |
| nlohmann-json | 0.575 | 2.874 | 5.00× | 2.752 | 4.79× | ok |
| pugixml | 0.433 | 1.728 | 3.99× | 1.652 | 3.82× | ok |
| pugixml-tests | 6.531 | 24.155 | 3.70× | 25.399 | 3.89× | ok |
| rapidjson | 0.203 | 0.763 | 3.76× | 0.701 | 3.45× | ok |
| re2 | 4.997 | 16.362 | 3.27× | 12.043 | 2.41× | ok |
| re2-test-re2 | 7.811 | 24.303 | 3.11× | 30.156 | 3.86× | ok |
| re2-test-search | 8.418 | 25.215 | 3.00× | 21.608 | 2.57× | ok |
| tramp3d-v4 | 1.083 | 13.101 | 12.10× | 4.615 | 4.26× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.177 | 1.287 | 7.27× | 0.795 | 4.49× | ok |
| Adobe-C++/loop_unroll | 0.677 | 8.176 | 12.08× | 7.483 | 11.05× | ok |
| Adobe-C++/simple_types_constant_folding | 0.374 | 4.014 | 10.73× | 3.335 | 8.92× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.299 | 3.036 | 10.15× | 3.118 | 10.43× | ok |
| Adobe-C++/stepanov_abstraction | 0.141 | 1.440 | 10.21× | 0.805 | 5.71× | ok |
| Adobe-C++/stepanov_vector | 0.168 | 2.209 | 13.15× | 1.071 | 6.37× | ok |
| Bullet | 9.384 | 61.041 | 6.50× | 44.443 | 4.74× | ok |
| CLAMR | 7.132 | 33.895 | 4.75× | 27.608 | 3.87× | ok |
| CoyoteBench/almabench | 0.067 | 0.267 | 3.99× | 0.191 | 2.85× | ok |
| CoyoteBench/fftbench | 0.244 | 0.634 | 2.60× | 0.954 | 3.91× | ok |
| CoyoteBench/huffbench | 0.067 | 0.368 | 5.49× | 0.203 | 3.03× | ok |
| CoyoteBench/lpbench | 0.055 | 0.307 | 5.58× | 0.380 | 6.91× | ok |
| DOE/HACCKernels | 0.179 | 0.543 | 3.03× | 0.642 | 3.59× | ok |
| DOE/HPCCG | 1.053 | 3.359 | 3.19× | 3.858 | 3.66× | ok |
| DOE/PENNANT | 2.736 | 9.147 | 3.34× | 10.279 | 3.76× | ok |
| DOE/miniFE | 1.401 | 6.204 | 4.43× | 6.455 | 4.61× | ok |
| Misc-C++-EH/spirit | 1.062 | 5.859 | 5.52× | 5.031 | 4.74× | ok |
| Misc-C++-Large/ray | 0.194 | 0.660 | 3.40× | 0.613 | 3.16× | ok |
| Misc-C++-Large/sphereflake | 0.170 | 1.287 | 7.57× | 0.648 | 3.81× | ok |
| Misc-C++/bigfib | 0.273 | 0.832 | 3.05× | 1.079 | 3.95× | ok |
| Misc-C++/oopack_v1p8 | 0.069 | 0.242 | 3.51× | 0.244 | 3.54× | ok |
| Misc-C++/stepanov_container | 0.314 | 1.129 | 3.60× | 1.541 | 4.91× | ok |
| Misc-C++/stepanov_v1p2 | 0.062 | 0.305 | 4.92× | 0.288 | 4.65× | ok |
| PAQ8p | 0.417 | 5.716 | 13.71× | 2.616 | 6.27× | ok |
| Prolangs-C++/life | 0.013 | 0.142 | 10.92× | 0.095 | 7.31× | ok |
| Prolangs-C++/ocean | 0.031 | 0.283 | 9.13× | 0.170 | 5.48× | ok |
| Prolangs-C++/primes | 0.011 | 0.051 | 4.64× | 0.051 | 4.64× | ok |
| Shootout-C++-EH/except | 0.120 | 0.302 | 2.52× | 0.433 | 3.61× | ok |
| Shootout-C++/ackermann | 0.111 | 0.366 | 3.30× | 0.367 | 3.31× | ok |
| Shootout-C++/ary3 | 0.133 | 0.337 | 2.53× | 0.452 | 3.40× | ok |
| Shootout-C++/fibo | 0.126 | 0.329 | 2.61× | 0.379 | 3.01× | ok |
| Shootout-C++/hash | 0.234 | 0.714 | 3.05× | 0.860 | 3.68× | ok |
| Shootout-C++/hash2 | 0.186 | 0.596 | 3.20× | 0.702 | 3.77× | ok |
| Shootout-C++/heapsort | 0.132 | 0.444 | 3.36× | 0.463 | 3.51× | ok |
| Shootout-C++/lists | 0.135 | 0.348 | 2.58× | 0.429 | 3.18× | ok |
| Shootout-C++/lists1 | 0.144 | 0.383 | 2.66× | 0.512 | 3.56× | ok |
| Shootout-C++/matrix | 0.114 | 0.304 | 2.67× | 0.492 | 4.32× | ok |
| Shootout-C++/methcall | 0.136 | 0.281 | 2.07× | 0.380 | 2.79× | ok |
| Shootout-C++/moments | 0.163 | 0.462 | 2.83× | 0.556 | 3.41× | ok |
| Shootout-C++/random | 0.186 | 0.323 | 1.74× | 0.437 | 2.35× | ok |
| Shootout-C++/sieve | 0.151 | 0.395 | 2.62× | 0.524 | 3.47× | ok |
| SmallPT | 0.059 | 0.433 | 7.34× | 0.261 | 4.42× | ok |
| Stanford/Bubblesort | 0.016 | 0.078 | 4.88× | 0.071 | 4.44× | ok |
| Stanford/FloatMM | 0.018 | 0.091 | 5.06× | 0.099 | 5.50× | ok |
| Stanford/Puzzle | 0.028 | 0.172 | 6.14× | 0.166 | 5.93× | ok |
| Stanford/Treesort | 0.020 | 0.116 | 5.80× | 0.079 | 3.95× | ok |
| bg/binarytrees/2 | 0.118 | 0.608 | 5.15× | 0.378 | 3.20× | ok |
| bg/fannkuchredux/3 | 0.056 | 0.175 | 3.12× | 0.192 | 3.43× | ok |
| bg/fasta/1 | 0.089 | 0.242 | 2.72× | 0.291 | 3.27× | ok |
| bg/fasta/2 | 0.088 | 0.238 | 2.70× | 0.288 | 3.27× | ok |
| bg/fasta/3 | 0.132 | 0.336 | 2.55× | 0.468 | 3.55× | ok |
| bg/fasta/4 | 0.121 | 0.274 | 2.26× | 0.381 | 3.15× | ok |
| bg/fasta/6 | 0.229 | 0.703 | 3.07× | 1.016 | 4.44× | ok |
| bg/mandelbrot/0 | 0.274 | 0.916 | 3.34× | 1.068 | 3.90× | ok |
| bg/mandelbrot/2 | 0.142 | 0.389 | 2.74× | 0.487 | 3.43× | ok |
| bg/mandelbrot/3 | 0.145 | 0.400 | 2.76× | 0.494 | 3.41× | ok |
| bg/mandelbrot/5 | 0.075 | 0.215 | 2.87× | 0.252 | 3.36× | ok |
| bg/mandelbrot/7 | 0.085 | 0.261 | 3.07× | 0.291 | 3.42× | ok |
| bg/mandelbrot/9 | 0.081 | 0.300 | 3.70× | 0.261 | 3.22× | ok |
| bg/nbody/1 | 0.066 | 0.228 | 3.45× | 0.275 | 4.17× | ok |
| bg/nbody/2 | 0.058 | 0.199 | 3.43× | 0.182 | 3.14× | ok |
| bg/nbody/3 | 0.053 | 0.174 | 3.28× | 0.169 | 3.19× | ok |
| bg/nbody/6 | 0.075 | 0.245 | 3.27× | 0.290 | 3.87× | ok |
| bg/pidigits/4 | 0.205 | 0.502 | 2.45× | 0.786 | 3.83× | ok |
| bg/pidigits/5 | 0.124 | 0.317 | 2.56× | 0.437 | 3.52× | ok |
| bg/revcomp/1 | 0.165 | 0.385 | 2.33× | 0.595 | 3.61× | ok |
| bg/revcomp/5 | 0.157 | 0.428 | 2.73× | 0.445 | 2.83× | ok |
| bg/spectralnorm/1 | 0.198 | 0.499 | 2.52× | 0.877 | 4.43× | ok |
| box2d | 3.103 | 10.817 | 3.49× | 12.410 | 4.00× | ok |
| fmt | 1.384 | 8.374 | 6.05× | 5.689 | 4.11× | ok |
| hexxagon | 0.484 | 1.831 | 3.78× | 1.893 | 3.91× | ok |
| lambda | 0.178 | 1.713 | 9.62× | 0.967 | 5.43× | ok |
| minisat | 0.213 | 1.491 | 7.00× | 1.213 | 5.69× | ok |
| nlohmann-json | 1.318 | 5.346 | 4.06× | 4.741 | 3.60× | ok |
| pugixml | 1.025 | 6.914 | 6.75× | 6.372 | 6.22× | ok |
| pugixml-tests | 8.948 | 55.384 | 6.19× | 42.680 | 4.77× | ok |
| rapidjson | 0.342 | 1.823 | 5.33× | 1.203 | 3.52× | ok |
| re2 | 5.331 | 28.683 | 5.38× | 16.558 | 3.11× | ok |
| re2-test-re2 | 10.757 | 43.468 | 4.04× | 40.166 | 3.73× | ok |
| re2-test-search | 10.663 | 37.197 | 3.49× | 35.904 | 3.37× | ok |
| tramp3d-v4 | 3.379 | 24.379 | 7.21× | 20.212 | 5.98× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.090 | 0.235 | 2.61× | 0.408 | 4.53× | ok |
| Adobe-C++/loop_unroll | 0.062 | 0.181 | 2.92× | 0.215 | 3.47× | ok |
| Adobe-C++/simple_types_constant_folding | 0.062 | 0.173 | 2.79× | 0.223 | 3.60× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.058 | 0.153 | 2.64× | 0.200 | 3.45× | ok |
| Adobe-C++/stepanov_abstraction | 0.051 | 0.109 | 2.14× | 0.159 | 3.12× | ok |
| Adobe-C++/stepanov_vector | 0.121 | 0.187 | 1.55× | 0.413 | 3.41× | ok |
| Bullet | 7.255 | 17.927 | 2.47× | 25.209 | 3.47× | ok |
| CLAMR | 3.231 | 7.735 | 2.39× | 14.070 | 4.35× | ok |
| CoyoteBench/almabench | 0.047 | 0.108 | 2.30× | 0.188 | 4.00× | ok |
| CoyoteBench/fftbench | 0.164 | 0.361 | 2.20× | 0.698 | 4.26× | ok |
| CoyoteBench/huffbench | 0.046 | 0.092 | 2.00× | 0.183 | 3.98× | ok |
| CoyoteBench/lpbench | 0.047 | 0.119 | 2.53× | 0.128 | 2.72× | ok |
| DOE/HACCKernels | 0.159 | 0.353 | 2.22× | 0.519 | 3.26× | ok |
| DOE/HPCCG | 0.956 | 2.119 | 2.22× | 4.278 | 4.47× | ok |
| DOE/PENNANT | 2.253 | 4.952 | 2.20× | 7.860 | 3.49× | ok |
| DOE/miniFE | 0.867 | 2.049 | 2.36× | 3.989 | 4.60× | ok |
| Misc-C++-EH/spirit | 0.474 | 1.348 | 2.84× | 2.459 | 5.19× | ok |
| Misc-C++-Large/ray | 0.158 | 0.380 | 2.41× | 0.589 | 3.73× | ok |
| Misc-C++-Large/sphereflake | 0.166 | 0.290 | 1.75× | 0.521 | 3.14× | ok |
| Misc-C++/bigfib | 0.165 | 0.365 | 2.21× | 0.617 | 3.74× | ok |
| Misc-C++/oopack_v1p8 | 0.045 | 0.094 | 2.09× | 0.163 | 3.62× | ok |
| Misc-C++/stepanov_container | 0.209 | 0.565 | 2.70× | 0.708 | 3.39× | ok |
| Misc-C++/stepanov_v1p2 | 0.044 | 0.095 | 2.16× | 0.139 | 3.16× | ok |
| PAQ8p | 0.076 | 0.181 | 2.38× | 0.261 | 3.43× | ok |
| Prolangs-C++/life | 0.004 | 0.014 | — | 0.028 | — | ok |
| Prolangs-C++/ocean | 0.014 | 0.036 | 2.57× | 0.050 | 3.57× | ok |
| Prolangs-C++/primes | 0.009 | 0.025 | — | 0.036 | — | ok |
| Shootout-C++-EH/except | 0.118 | 0.259 | 2.19× | 0.391 | 3.31× | ok |
| Shootout-C++/ackermann | 0.107 | 0.261 | 2.44× | 0.334 | 3.12× | ok |
| Shootout-C++/ary3 | 0.119 | 0.267 | 2.24× | 0.398 | 3.34× | ok |
| Shootout-C++/fibo | 0.129 | 0.237 | 1.84× | 0.389 | 3.02× | ok |
| Shootout-C++/hash | 0.205 | 0.328 | 1.60× | 0.493 | 2.40× | ok |
| Shootout-C++/hash2 | 0.152 | 0.325 | 2.14× | 0.475 | 3.12× | ok |
| Shootout-C++/heapsort | 0.134 | 0.275 | 2.05× | 0.403 | 3.01× | ok |
| Shootout-C++/lists | 0.116 | 0.265 | 2.28× | 0.381 | 3.28× | ok |
| Shootout-C++/lists1 | 0.129 | 0.288 | 2.23× | 0.417 | 3.23× | ok |
| Shootout-C++/matrix | 0.105 | 0.238 | 2.27× | 0.349 | 3.32× | ok |
| Shootout-C++/methcall | 0.103 | 0.244 | 2.37× | 0.390 | 3.79× | ok |
| Shootout-C++/moments | 0.143 | 0.305 | 2.13× | 0.435 | 3.04× | ok |
| Shootout-C++/random | 0.132 | 0.276 | 2.09× | 0.418 | 3.17× | ok |
| Shootout-C++/sieve | 0.131 | 0.304 | 2.32× | 0.503 | 3.84× | ok |
| SmallPT | 0.044 | 0.084 | 1.91× | 0.129 | 2.93× | ok |
| Stanford/Bubblesort | 0.015 | 0.038 | 2.53× | 0.045 | 3.00× | ok |
| Stanford/FloatMM | 0.015 | 0.036 | 2.40× | 0.047 | 3.13× | ok |
| Stanford/Puzzle | 0.014 | 0.038 | 2.71× | 0.046 | 3.29× | ok |
| Stanford/Treesort | 0.014 | 0.036 | 2.57× | 0.048 | 3.43× | ok |
| bg/binarytrees/2 | 0.107 | 0.239 | 2.23× | 0.353 | 3.30× | ok |
| bg/fannkuchredux/3 | 0.050 | 0.098 | 1.96× | 0.138 | 2.76× | ok |
| bg/fasta/1 | 0.078 | 0.158 | 2.03× | 0.220 | 2.82× | ok |
| bg/fasta/2 | 0.078 | 0.152 | 1.95× | 0.220 | 2.82× | ok |
| bg/fasta/3 | 0.125 | 0.265 | 2.12× | 0.389 | 3.11× | ok |
| bg/fasta/4 | 0.126 | 0.226 | 1.79× | 0.321 | 2.55× | ok |
| bg/fasta/6 | 0.189 | 0.427 | 2.26× | 0.688 | 3.64× | ok |
| bg/mandelbrot/0 | 0.215 | 0.455 | 2.12× | 0.681 | 3.17× | ok |
| bg/mandelbrot/2 | 0.128 | 0.293 | 2.29× | 0.420 | 3.28× | ok |
| bg/mandelbrot/3 | 0.140 | 0.299 | 2.14× | 0.450 | 3.21× | ok |
| bg/mandelbrot/5 | 0.067 | 0.135 | 2.01× | 0.192 | 2.87× | ok |
| bg/mandelbrot/7 | 0.068 | 0.131 | 1.93× | 0.208 | 3.06× | ok |
| bg/mandelbrot/9 | 0.061 | 0.127 | 2.08× | 0.184 | 3.02× | ok |
| bg/nbody/1 | 0.047 | 0.089 | 1.89× | 0.132 | 2.81× | ok |
| bg/nbody/2 | 0.045 | 0.082 | 1.82× | 0.115 | 2.56× | ok |
| bg/nbody/3 | 0.047 | 0.096 | 2.04× | 0.140 | 2.98× | ok |
| bg/nbody/6 | 0.043 | 0.091 | 2.12× | 0.157 | 3.65× | ok |
| bg/pidigits/4 | 0.201 | 0.396 | 1.97× | 0.669 | 3.33× | ok |
| bg/pidigits/5 | 0.141 | 0.247 | 1.75× | 0.421 | 2.99× | ok |
| bg/revcomp/1 | 0.123 | 0.283 | 2.30× | 0.510 | 4.15× | ok |
| bg/revcomp/5 | 0.136 | 0.257 | 1.89× | 0.371 | 2.73× | ok |
| bg/spectralnorm/1 | 0.165 | 0.352 | 2.13× | 0.644 | 3.90× | ok |
| box2d | 2.280 | 5.061 | 2.22× | 8.935 | 3.92× | ok |
| fmt | 0.696 | 1.727 | 2.48× | 2.665 | 3.83× | ok |
| hexxagon | 0.443 | 0.856 | 1.93× | 1.541 | 3.48× | ok |
| lambda | 0.079 | 0.215 | 2.72× | 0.291 | 3.68× | ok |
| minisat | 0.106 | 0.234 | 2.21× | 0.370 | 3.49× | ok |
| nlohmann-json | 0.600 | 1.570 | 2.62× | 2.100 | 3.50× | ok |
| pugixml | 0.365 | 0.716 | 1.96× | 1.250 | 3.42× | ok |
| pugixml-tests | 5.574 | 12.777 | 2.29× | 18.840 | 3.38× | ok |
| rapidjson | 0.167 | 0.385 | 2.31× | 0.520 | 3.11× | ok |
| re2 | 5.199 | 11.370 | 2.19× | 10.698 | 2.06× | ok |
| re2-test-re2 | 7.176 | 16.383 | 2.28× | 27.080 | 3.77× | ok |
| re2-test-search | 7.341 | 17.506 | 2.38× | 25.511 | 3.48× | ok |
| tramp3d-v4 | 0.829 | 4.000 | 4.83× | 2.762 | 3.33× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
