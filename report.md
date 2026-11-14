# Public benchmarks: AMD EPYC

Measured compiler: [`32b57ecb1`](https://github.com/vishvananda/cppgm-extended/commit/32b57ecb146865fc206be7a79a159bc13e644dc1) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138824) · [Raw program results](results.json)

81 of 81 programs built with cppgm++ and g++ and agreed. Each number is the reference over cppgm++, so above 1× means cppgm++ is smaller or faster.

CPU: AMD EPYC 7763 64-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.30× | 79 | 3.37× | 79 |
| Compile CPU, `-O0` | 3.04× | 79 | 3.55× | 79 |
| Compile CPU, `-O3` | 4.20× | 81 | 4.20× | 81 |
| Compile peak RSS, `-O0` | 1.47× | 81 | 2.25× | 81 |
| Compile peak RSS, `-O3` | 1.74× | 81 | 2.36× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.20× | 81 | 1.24× | 81 |
| Run CPU, `-O3` | 0.99× | 81 | 0.98× | 80 |
| Run instructions, `-O3` | 0.96× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.981 to 1.030; raw observations and block ratios are retained in the artifact.

## Slowest generated code, by run-time instructions

| Program | vs g++ |
| --- | ---: |
| tramp3d-v4 | 0.46× |
| bg/nbody/2 | 0.63× |
| bg/mandelbrot/0 | 0.68× |
| PAQ8p | 0.69× |
| bg/spectralnorm/1 | 0.75× |
| bg/nbody/1 | 0.82× |
| bg/mandelbrot/7 | 0.84× |
| bg/mandelbrot/9 | 0.84× |
| bg/nbody/3 | 0.86× |
| bg/mandelbrot/5 | 0.86× |

## Compile CPU times

Times are CPU seconds, excluding linking. Speed is reference time divided by cppgm++ time; higher is better. Every program is listed. Missing times show a dash. Ratios are omitted for failed programs or when either time is below 10 ms.

Compilation is measured once per compiler and level; the ABBA/BAAB repetitions apply to generated-program execution and self-built compiler speed.

### O0 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.099 | 0.396 | 4.00× | 0.359 | 3.63× | ok |
| Adobe-C++/loop_unroll | 0.089 | 0.797 | 8.96× | 0.343 | 3.85× | ok |
| Adobe-C++/simple_types_constant_folding | 0.114 | 0.937 | 8.22× | 0.438 | 3.84× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.077 | 0.680 | 8.83× | 0.358 | 4.65× | ok |
| Adobe-C++/stepanov_abstraction | 0.058 | 0.254 | 4.38× | 0.226 | 3.90× | ok |
| Adobe-C++/stepanov_vector | 0.121 | 0.428 | 3.54× | 0.482 | 3.98× | ok |
| Bullet | 7.391 | 27.044 | 3.66× | 27.830 | 3.77× | ok |
| CLAMR | 3.898 | 12.683 | 3.25× | 13.199 | 3.39× | ok |
| CoyoteBench/almabench | 0.054 | 0.139 | 2.57× | 0.179 | 3.31× | ok |
| CoyoteBench/fftbench | 0.167 | 0.390 | 2.34× | 0.546 | 3.27× | ok |
| CoyoteBench/huffbench | 0.043 | 0.104 | 2.42× | 0.189 | 4.40× | ok |
| CoyoteBench/lpbench | 0.046 | 0.109 | 2.37× | 0.131 | 2.85× | ok |
| DOE/HACCKernels | 0.162 | 0.384 | 2.37× | 0.547 | 3.38× | ok |
| DOE/HPCCG | 0.963 | 2.333 | 2.42× | 4.576 | 4.75× | ok |
| DOE/PENNANT | 2.317 | 5.525 | 2.38× | 6.871 | 2.97× | ok |
| DOE/miniFE | 0.899 | 2.826 | 3.14× | 4.093 | 4.55× | ok |
| Misc-C++-EH/spirit | 0.785 | 4.094 | 5.22× | 3.468 | 4.42× | ok |
| Misc-C++-Large/ray | 0.179 | 0.416 | 2.32× | 0.608 | 3.40× | ok |
| Misc-C++-Large/sphereflake | 0.153 | 0.366 | 2.39× | 0.547 | 3.58× | ok |
| Misc-C++/bigfib | 0.186 | 0.571 | 3.07× | 0.624 | 3.35× | ok |
| Misc-C++/oopack_v1p8 | 0.047 | 0.130 | 2.77× | 0.145 | 3.09× | ok |
| Misc-C++/stepanov_container | 0.229 | 0.747 | 3.26× | 0.818 | 3.57× | ok |
| Misc-C++/stepanov_v1p2 | 0.046 | 0.163 | 3.54× | 0.173 | 3.76× | ok |
| PAQ8p | 0.097 | 0.625 | 6.44× | 0.358 | 3.69× | ok |
| Prolangs-C++/life | 0.005 | 0.047 | — | 0.037 | — | ok |
| Prolangs-C++/ocean | 0.016 | 0.087 | 5.44× | 0.068 | 4.25× | ok |
| Prolangs-C++/primes | 0.008 | 0.033 | — | 0.035 | — | ok |
| Shootout-C++-EH/except | 0.106 | 0.236 | 2.23× | 0.358 | 3.38× | ok |
| Shootout-C++/ackermann | 0.111 | 0.228 | 2.05× | 0.418 | 3.77× | ok |
| Shootout-C++/ary3 | 0.120 | 0.287 | 2.39× | 0.428 | 3.57× | ok |
| Shootout-C++/fibo | 0.118 | 0.261 | 2.21× | 0.347 | 2.94× | ok |
| Shootout-C++/hash | 0.156 | 0.448 | 2.87× | 0.527 | 3.38× | ok |
| Shootout-C++/hash2 | 0.151 | 0.430 | 2.85× | 0.510 | 3.38× | ok |
| Shootout-C++/heapsort | 0.130 | 0.267 | 2.05× | 0.422 | 3.25× | ok |
| Shootout-C++/lists | 0.117 | 0.310 | 2.65× | 0.427 | 3.65× | ok |
| Shootout-C++/lists1 | 0.131 | 0.344 | 2.63× | 0.443 | 3.38× | ok |
| Shootout-C++/matrix | 0.102 | 0.231 | 2.26× | 0.344 | 3.37× | ok |
| Shootout-C++/methcall | 0.106 | 0.231 | 2.18× | 0.354 | 3.34× | ok |
| Shootout-C++/moments | 0.155 | 0.432 | 2.79× | 0.467 | 3.01× | ok |
| Shootout-C++/random | 0.132 | 0.312 | 2.36× | 0.432 | 3.27× | ok |
| Shootout-C++/sieve | 0.133 | 0.376 | 2.83× | 0.522 | 3.92× | ok |
| SmallPT | 0.042 | 0.133 | 3.17× | 0.145 | 3.45× | ok |
| Stanford/Bubblesort | 0.013 | 0.040 | 3.08× | 0.047 | 3.62× | ok |
| Stanford/FloatMM | 0.013 | 0.039 | 3.00× | 0.047 | 3.62× | ok |
| Stanford/Puzzle | 0.014 | 0.051 | 3.64× | 0.049 | 3.50× | ok |
| Stanford/Treesort | 0.013 | 0.042 | 3.23× | 0.050 | 3.85× | ok |
| bg/binarytrees/2 | 0.106 | 0.243 | 2.29× | 0.345 | 3.25× | ok |
| bg/fannkuchredux/3 | 0.051 | 0.109 | 2.14× | 0.148 | 2.90× | ok |
| bg/fasta/1 | 0.079 | 0.181 | 2.29× | 0.239 | 3.03× | ok |
| bg/fasta/2 | 0.081 | 0.187 | 2.31× | 0.233 | 2.88× | ok |
| bg/fasta/3 | 0.123 | 0.274 | 2.23× | 0.420 | 3.41× | ok |
| bg/fasta/4 | 0.135 | 0.230 | 1.70× | 0.363 | 2.69× | ok |
| bg/fasta/6 | 0.199 | 0.614 | 3.09× | 0.702 | 3.53× | ok |
| bg/mandelbrot/0 | 0.219 | 0.688 | 3.14× | 0.783 | 3.58× | ok |
| bg/mandelbrot/2 | 0.137 | 0.367 | 2.68× | 0.440 | 3.21× | ok |
| bg/mandelbrot/3 | 0.140 | 0.301 | 2.15× | 0.461 | 3.29× | ok |
| bg/mandelbrot/5 | 0.067 | 0.161 | 2.40× | 0.211 | 3.15× | ok |
| bg/mandelbrot/7 | 0.072 | 0.185 | 2.57× | 0.233 | 3.24× | ok |
| bg/mandelbrot/9 | 0.070 | 0.193 | 2.76× | 0.211 | 3.01× | ok |
| bg/nbody/1 | 0.046 | 0.149 | 3.24× | 0.152 | 3.30× | ok |
| bg/nbody/2 | 0.040 | 0.097 | 2.43× | 0.136 | 3.40× | ok |
| bg/nbody/3 | 0.052 | 0.118 | 2.27× | 0.129 | 2.48× | ok |
| bg/nbody/6 | 0.047 | 0.145 | 3.09× | 0.160 | 3.40× | ok |
| bg/pidigits/4 | 0.210 | 0.449 | 2.14× | 0.718 | 3.42× | ok |
| bg/pidigits/5 | 0.122 | 0.274 | 2.25× | 0.466 | 3.82× | ok |
| bg/revcomp/1 | 0.124 | 0.338 | 2.73× | 0.512 | 4.13× | ok |
| bg/revcomp/5 | 0.141 | 0.368 | 2.61× | 0.446 | 3.16× | ok |
| bg/spectralnorm/1 | 0.188 | 0.377 | 2.01× | 0.711 | 3.78× | ok |
| box2d | 2.227 | 7.005 | 3.15× | 10.403 | 4.67× | ok |
| fmt | 0.753 | 3.291 | 4.37× | 3.646 | 4.84× | ok |
| hexxagon | 0.413 | 1.045 | 2.53× | 1.492 | 3.61× | ok |
| lambda | 0.085 | 0.441 | 5.19× | 0.366 | 4.31× | ok |
| minisat | 0.102 | 0.442 | 4.33× | 0.419 | 4.11× | ok |
| nlohmann-json | 0.629 | 3.137 | 4.99× | 3.084 | 4.90× | ok |
| pugixml | 0.458 | 2.057 | 4.49× | 1.821 | 3.98× | ok |
| pugixml-tests | 5.988 | 22.471 | 3.75× | 24.199 | 4.04× | ok |
| rapidjson | 0.188 | 0.708 | 3.77× | 0.674 | 3.59× | ok |
| re2 | 5.889 | 15.596 | 2.65× | 11.804 | 2.00× | ok |
| re2-test-re2 | 7.641 | 22.665 | 2.97× | 28.095 | 3.68× | ok |
| re2-test-search | 7.514 | 21.404 | 2.85× | 28.387 | 3.78× | ok |
| tramp3d-v4 | 0.983 | 11.816 | 12.02× | 4.442 | 4.52× | ok |

### O3 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.176 | 1.323 | 7.52× | 0.964 | 5.48× | ok |
| Adobe-C++/loop_unroll | 0.567 | 7.643 | 13.48× | 6.008 | 10.60× | ok |
| Adobe-C++/simple_types_constant_folding | 0.359 | 3.760 | 10.47× | 3.271 | 9.11× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.294 | 3.068 | 10.44× | 2.758 | 9.38× | ok |
| Adobe-C++/stepanov_abstraction | 0.150 | 1.475 | 9.83× | 0.783 | 5.22× | ok |
| Adobe-C++/stepanov_vector | 0.166 | 2.140 | 12.89× | 1.034 | 6.23× | ok |
| Bullet | 9.083 | 53.927 | 5.94× | 44.072 | 4.85× | ok |
| CLAMR | 5.998 | 34.610 | 5.77× | 27.517 | 4.59× | ok |
| CoyoteBench/almabench | 0.049 | 0.292 | 5.96× | 0.189 | 3.86× | ok |
| CoyoteBench/fftbench | 0.195 | 0.682 | 3.50× | 0.711 | 3.65× | ok |
| CoyoteBench/huffbench | 0.066 | 0.362 | 5.48× | 0.212 | 3.21× | ok |
| CoyoteBench/lpbench | 0.054 | 0.247 | 4.57× | 0.276 | 5.11× | ok |
| DOE/HACCKernels | 0.176 | 0.534 | 3.03× | 0.623 | 3.54× | ok |
| DOE/HPCCG | 1.029 | 3.287 | 3.19× | 4.743 | 4.61× | ok |
| DOE/PENNANT | 2.739 | 8.511 | 3.11× | 9.210 | 3.36× | ok |
| DOE/miniFE | 1.202 | 5.571 | 4.63× | 5.899 | 4.91× | ok |
| Misc-C++-EH/spirit | 1.155 | 4.812 | 4.17× | 4.759 | 4.12× | ok |
| Misc-C++-Large/ray | 0.182 | 0.803 | 4.41× | 0.601 | 3.30× | ok |
| Misc-C++-Large/sphereflake | 0.176 | 1.152 | 6.55× | 0.663 | 3.77× | ok |
| Misc-C++/bigfib | 0.203 | 0.731 | 3.60× | 0.798 | 3.93× | ok |
| Misc-C++/oopack_v1p8 | 0.055 | 0.242 | 4.40× | 0.239 | 4.35× | ok |
| Misc-C++/stepanov_container | 0.302 | 1.171 | 3.88× | 1.334 | 4.42× | ok |
| Misc-C++/stepanov_v1p2 | 0.060 | 0.303 | 5.05× | 0.302 | 5.03× | ok |
| PAQ8p | 0.401 | 5.198 | 12.96× | 2.483 | 6.19× | ok |
| Prolangs-C++/life | 0.011 | 0.139 | 12.64× | 0.087 | 7.91× | ok |
| Prolangs-C++/ocean | 0.028 | 0.264 | 9.43× | 0.158 | 5.64× | ok |
| Prolangs-C++/primes | 0.010 | 0.049 | 4.90× | 0.046 | 4.60× | ok |
| Shootout-C++-EH/except | 0.108 | 0.275 | 2.55× | 0.375 | 3.47× | ok |
| Shootout-C++/ackermann | 0.126 | 0.301 | 2.39× | 0.459 | 3.64× | ok |
| Shootout-C++/ary3 | 0.162 | 0.336 | 2.07× | 0.444 | 2.74× | ok |
| Shootout-C++/fibo | 0.106 | 0.326 | 3.08× | 0.349 | 3.29× | ok |
| Shootout-C++/hash | 0.176 | 0.556 | 3.16× | 0.663 | 3.77× | ok |
| Shootout-C++/hash2 | 0.180 | 0.587 | 3.26× | 0.714 | 3.97× | ok |
| Shootout-C++/heapsort | 0.130 | 0.328 | 2.52× | 0.439 | 3.38× | ok |
| Shootout-C++/lists | 0.127 | 0.334 | 2.63× | 0.441 | 3.47× | ok |
| Shootout-C++/lists1 | 0.144 | 0.404 | 2.81× | 0.503 | 3.49× | ok |
| Shootout-C++/matrix | 0.109 | 0.294 | 2.70× | 0.458 | 4.20× | ok |
| Shootout-C++/methcall | 0.108 | 0.280 | 2.59× | 0.378 | 3.50× | ok |
| Shootout-C++/moments | 0.156 | 0.450 | 2.88× | 0.546 | 3.50× | ok |
| Shootout-C++/random | 0.169 | 0.302 | 1.79× | 0.454 | 2.69× | ok |
| Shootout-C++/sieve | 0.141 | 0.356 | 2.52× | 0.515 | 3.65× | ok |
| SmallPT | 0.059 | 0.412 | 6.98× | 0.280 | 4.75× | ok |
| Stanford/Bubblesort | 0.016 | 0.076 | 4.75× | 0.067 | 4.19× | ok |
| Stanford/FloatMM | 0.018 | 0.085 | 4.72× | 0.097 | 5.39× | ok |
| Stanford/Puzzle | 0.025 | 0.172 | 6.88× | 0.166 | 6.64× | ok |
| Stanford/Treesort | 0.020 | 0.116 | 5.80× | 0.077 | 3.85× | ok |
| bg/binarytrees/2 | 0.114 | 0.605 | 5.31× | 0.380 | 3.33× | ok |
| bg/fannkuchredux/3 | 0.057 | 0.176 | 3.09× | 0.183 | 3.21× | ok |
| bg/fasta/1 | 0.087 | 0.228 | 2.62× | 0.292 | 3.36× | ok |
| bg/fasta/2 | 0.085 | 0.237 | 2.79× | 0.284 | 3.34× | ok |
| bg/fasta/3 | 0.128 | 0.325 | 2.54× | 0.460 | 3.59× | ok |
| bg/fasta/4 | 0.142 | 0.277 | 1.95× | 0.374 | 2.63× | ok |
| bg/fasta/6 | 0.241 | 0.715 | 2.97× | 0.896 | 3.72× | ok |
| bg/mandelbrot/0 | 0.247 | 0.975 | 3.95× | 1.036 | 4.19× | ok |
| bg/mandelbrot/2 | 0.146 | 0.385 | 2.64× | 0.540 | 3.70× | ok |
| bg/mandelbrot/3 | 0.142 | 0.344 | 2.42× | 0.527 | 3.71× | ok |
| bg/mandelbrot/5 | 0.074 | 0.217 | 2.93× | 0.250 | 3.38× | ok |
| bg/mandelbrot/7 | 0.085 | 0.280 | 3.29× | 0.315 | 3.71× | ok |
| bg/mandelbrot/9 | 0.080 | 0.257 | 3.21× | 0.266 | 3.33× | ok |
| bg/nbody/1 | 0.062 | 0.227 | 3.66× | 0.266 | 4.29× | ok |
| bg/nbody/2 | 0.046 | 0.178 | 3.87× | 0.220 | 4.78× | ok |
| bg/nbody/3 | 0.055 | 0.160 | 2.91× | 0.215 | 3.91× | ok |
| bg/nbody/6 | 0.060 | 0.222 | 3.70× | 0.266 | 4.43× | ok |
| bg/pidigits/4 | 0.219 | 0.498 | 2.27× | 0.758 | 3.46× | ok |
| bg/pidigits/5 | 0.129 | 0.323 | 2.50× | 0.411 | 3.19× | ok |
| bg/revcomp/1 | 0.175 | 0.368 | 2.10× | 0.586 | 3.35× | ok |
| bg/revcomp/5 | 0.134 | 0.382 | 2.85× | 0.537 | 4.01× | ok |
| bg/spectralnorm/1 | 0.176 | 0.502 | 2.85× | 0.714 | 4.06× | ok |
| box2d | 2.943 | 11.075 | 3.76× | 11.440 | 3.89× | ok |
| fmt | 1.356 | 7.740 | 5.71× | 6.253 | 4.61× | ok |
| hexxagon | 0.452 | 1.656 | 3.66× | 1.864 | 4.12× | ok |
| lambda | 0.174 | 1.464 | 8.41× | 0.917 | 5.27× | ok |
| minisat | 0.198 | 1.500 | 7.58× | 1.063 | 5.37× | ok |
| nlohmann-json | 1.260 | 4.957 | 3.93× | 5.083 | 4.03× | ok |
| pugixml | 1.037 | 7.936 | 7.65× | 5.890 | 5.68× | ok |
| pugixml-tests | 7.875 | 50.242 | 6.38× | 38.776 | 4.92× | ok |
| rapidjson | 0.332 | 1.858 | 5.60× | 1.172 | 3.53× | ok |
| re2 | 4.703 | 26.529 | 5.64× | 16.245 | 3.45× | ok |
| re2-test-re2 | 9.314 | 40.109 | 4.31× | 38.681 | 4.15× | ok |
| re2-test-search | 8.820 | 35.248 | 4.00× | 30.809 | 3.49× | ok |
| tramp3d-v4 | 2.934 | 21.350 | 7.28× | 19.707 | 6.72× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.089 | 0.230 | 2.58× | 0.286 | 3.21× | ok |
| Adobe-C++/loop_unroll | 0.059 | 0.179 | 3.03× | 0.201 | 3.41× | ok |
| Adobe-C++/simple_types_constant_folding | 0.075 | 0.174 | 2.32× | 0.223 | 2.97× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.056 | 0.157 | 2.80× | 0.195 | 3.48× | ok |
| Adobe-C++/stepanov_abstraction | 0.049 | 0.110 | 2.24× | 0.173 | 3.53× | ok |
| Adobe-C++/stepanov_vector | 0.111 | 0.198 | 1.78× | 0.387 | 3.49× | ok |
| Bullet | 6.809 | 16.235 | 2.38× | 22.676 | 3.33× | ok |
| CLAMR | 3.301 | 7.198 | 2.18× | 12.130 | 3.67× | ok |
| CoyoteBench/almabench | 0.051 | 0.120 | 2.35× | 0.183 | 3.59× | ok |
| CoyoteBench/fftbench | 0.163 | 0.351 | 2.15× | 0.511 | 3.13× | ok |
| CoyoteBench/huffbench | 0.043 | 0.089 | 2.07× | 0.190 | 4.42× | ok |
| CoyoteBench/lpbench | 0.047 | 0.090 | 1.91× | 0.128 | 2.72× | ok |
| DOE/HACCKernels | 0.157 | 0.343 | 2.18× | 0.514 | 3.27× | ok |
| DOE/HPCCG | 0.943 | 2.067 | 2.19× | 3.445 | 3.65× | ok |
| DOE/PENNANT | 2.128 | 4.474 | 2.10× | 6.226 | 2.93× | ok |
| DOE/miniFE | 0.833 | 1.996 | 2.40× | 3.783 | 4.54× | ok |
| Misc-C++-EH/spirit | 0.438 | 1.521 | 3.47× | 2.326 | 5.31× | ok |
| Misc-C++-Large/ray | 0.171 | 0.352 | 2.06× | 0.565 | 3.30× | ok |
| Misc-C++-Large/sphereflake | 0.148 | 0.328 | 2.22× | 0.450 | 3.04× | ok |
| Misc-C++/bigfib | 0.174 | 0.391 | 2.25× | 0.650 | 3.74× | ok |
| Misc-C++/oopack_v1p8 | 0.045 | 0.097 | 2.16× | 0.139 | 3.09× | ok |
| Misc-C++/stepanov_container | 0.212 | 0.452 | 2.13× | 0.689 | 3.25× | ok |
| Misc-C++/stepanov_v1p2 | 0.043 | 0.092 | 2.14× | 0.163 | 3.79× | ok |
| PAQ8p | 0.067 | 0.176 | 2.63× | 0.220 | 3.28× | ok |
| Prolangs-C++/life | 0.004 | 0.015 | — | 0.027 | — | ok |
| Prolangs-C++/ocean | 0.013 | 0.033 | 2.54× | 0.045 | 3.46× | ok |
| Prolangs-C++/primes | 0.008 | 0.023 | — | 0.032 | — | ok |
| Shootout-C++-EH/except | 0.106 | 0.235 | 2.22× | 0.340 | 3.21× | ok |
| Shootout-C++/ackermann | 0.116 | 0.234 | 2.02× | 0.412 | 3.55× | ok |
| Shootout-C++/ary3 | 0.116 | 0.266 | 2.29× | 0.413 | 3.56× | ok |
| Shootout-C++/fibo | 0.120 | 0.303 | 2.52× | 0.336 | 2.80× | ok |
| Shootout-C++/hash | 0.149 | 0.318 | 2.13× | 0.475 | 3.19× | ok |
| Shootout-C++/hash2 | 0.150 | 0.325 | 2.17× | 0.448 | 2.99× | ok |
| Shootout-C++/heapsort | 0.132 | 0.271 | 2.05× | 0.407 | 3.08× | ok |
| Shootout-C++/lists | 0.111 | 0.263 | 2.37× | 0.383 | 3.45× | ok |
| Shootout-C++/lists1 | 0.126 | 0.298 | 2.37× | 0.406 | 3.22× | ok |
| Shootout-C++/matrix | 0.102 | 0.230 | 2.25× | 0.332 | 3.25× | ok |
| Shootout-C++/methcall | 0.105 | 0.236 | 2.25× | 0.353 | 3.36× | ok |
| Shootout-C++/moments | 0.129 | 0.312 | 2.42× | 0.448 | 3.47× | ok |
| Shootout-C++/random | 0.130 | 0.320 | 2.46× | 0.415 | 3.19× | ok |
| Shootout-C++/sieve | 0.129 | 0.282 | 2.19× | 0.469 | 3.64× | ok |
| SmallPT | 0.041 | 0.090 | 2.20× | 0.133 | 3.24× | ok |
| Stanford/Bubblesort | 0.014 | 0.037 | 2.64× | 0.045 | 3.21× | ok |
| Stanford/FloatMM | 0.014 | 0.035 | 2.50× | 0.046 | 3.29× | ok |
| Stanford/Puzzle | 0.014 | 0.037 | 2.64× | 0.046 | 3.29× | ok |
| Stanford/Treesort | 0.014 | 0.035 | 2.50× | 0.047 | 3.36× | ok |
| bg/binarytrees/2 | 0.106 | 0.243 | 2.29× | 0.339 | 3.20× | ok |
| bg/fannkuchredux/3 | 0.052 | 0.096 | 1.85× | 0.142 | 2.73× | ok |
| bg/fasta/1 | 0.077 | 0.148 | 1.92× | 0.219 | 2.84× | ok |
| bg/fasta/2 | 0.077 | 0.151 | 1.96× | 0.216 | 2.81× | ok |
| bg/fasta/3 | 0.120 | 0.260 | 2.17× | 0.392 | 3.27× | ok |
| bg/fasta/4 | 0.139 | 0.227 | 1.63× | 0.314 | 2.26× | ok |
| bg/fasta/6 | 0.183 | 0.431 | 2.36× | 0.624 | 3.41× | ok |
| bg/mandelbrot/0 | 0.200 | 0.469 | 2.34× | 0.692 | 3.46× | ok |
| bg/mandelbrot/2 | 0.134 | 0.337 | 2.51× | 0.411 | 3.07× | ok |
| bg/mandelbrot/3 | 0.139 | 0.291 | 2.09× | 0.452 | 3.25× | ok |
| bg/mandelbrot/5 | 0.064 | 0.135 | 2.11× | 0.197 | 3.08× | ok |
| bg/mandelbrot/7 | 0.068 | 0.141 | 2.07× | 0.236 | 3.47× | ok |
| bg/mandelbrot/9 | 0.067 | 0.127 | 1.90× | 0.193 | 2.88× | ok |
| bg/nbody/1 | 0.044 | 0.091 | 2.07× | 0.130 | 2.95× | ok |
| bg/nbody/2 | 0.040 | 0.083 | 2.08× | 0.128 | 3.20× | ok |
| bg/nbody/3 | 0.050 | 0.107 | 2.14× | 0.124 | 2.48× | ok |
| bg/nbody/6 | 0.044 | 0.093 | 2.11× | 0.135 | 3.07× | ok |
| bg/pidigits/4 | 0.184 | 0.409 | 2.22× | 0.680 | 3.70× | ok |
| bg/pidigits/5 | 0.123 | 0.269 | 2.19× | 0.461 | 3.75× | ok |
| bg/revcomp/1 | 0.119 | 0.300 | 2.52× | 0.456 | 3.83× | ok |
| bg/revcomp/5 | 0.135 | 0.322 | 2.39× | 0.464 | 3.44× | ok |
| bg/spectralnorm/1 | 0.199 | 0.396 | 1.99× | 0.666 | 3.35× | ok |
| box2d | 2.083 | 4.945 | 2.37× | 9.816 | 4.71× | ok |
| fmt | 0.697 | 1.564 | 2.24× | 3.325 | 4.77× | ok |
| hexxagon | 0.398 | 0.961 | 2.41× | 1.512 | 3.80× | ok |
| lambda | 0.069 | 0.194 | 2.81× | 0.270 | 3.91× | ok |
| minisat | 0.087 | 0.217 | 2.49× | 0.297 | 3.41× | ok |
| nlohmann-json | 0.554 | 1.494 | 2.70× | 2.374 | 4.29× | ok |
| pugixml | 0.352 | 0.890 | 2.53× | 1.361 | 3.87× | ok |
| pugixml-tests | 5.295 | 11.641 | 2.20× | 18.220 | 3.44× | ok |
| rapidjson | 0.151 | 0.389 | 2.58× | 0.496 | 3.28× | ok |
| re2 | 4.872 | 10.372 | 2.13× | 10.341 | 2.12× | ok |
| re2-test-re2 | 6.652 | 15.785 | 2.37× | 25.169 | 3.78× | ok |
| re2-test-search | 6.661 | 16.016 | 2.40× | 24.246 | 3.64× | ok |
| tramp3d-v4 | 0.604 | 3.472 | 5.75× | 2.631 | 4.36× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
