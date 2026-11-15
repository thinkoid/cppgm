# Public benchmarks: AMD EPYC

Measured compiler: [`de44b5cf8`](https://github.com/vishvananda/cppgm-extended/commit/de44b5cf8e143b4625737955531361b622b74bef) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654033) · [Raw program results](results.json)

81 of 81 programs built with cppgm++ and g++ and agreed. Each number is the reference over cppgm++, so above 1× means cppgm++ is smaller or faster.

CPU: AMD EPYC 9V74 80-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.24× | 80 | 2.99× | 80 |
| Compile CPU, `-O0` | 3.03× | 80 | 3.16× | 80 |
| Compile CPU, `-O3` | 4.21× | 81 | 3.85× | 81 |
| Compile peak RSS, `-O0` | 1.46× | 81 | 2.24× | 81 |
| Compile peak RSS, `-O3` | 1.72× | 81 | 2.34× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.22× | 81 | 1.24× | 81 |
| Run CPU, `-O3` | 0.99× | 81 | 0.97× | 80 |
| Run instructions, `-O3` | 0.96× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.963 to 1.063; raw observations and block ratios are retained in the artifact.

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
| bg/mandelbrot/5 | 0.86× |
| bg/mandelbrot/2 | 0.86× |

## Compile CPU times

Times are CPU seconds, excluding linking. Speed is reference time divided by cppgm++ time; higher is better. Every program is listed. Missing times show a dash. Ratios are omitted for failed programs or when either time is below 10 ms.

Compilation is measured once per compiler and level; the ABBA/BAAB repetitions apply to generated-program execution and self-built compiler speed.

### O0 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.110 | 0.379 | 3.45× | 0.287 | 2.61× | ok |
| Adobe-C++/loop_unroll | 0.096 | 0.781 | 8.14× | 0.311 | 3.24× | ok |
| Adobe-C++/simple_types_constant_folding | 0.085 | 0.908 | 10.68× | 0.371 | 4.36× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.077 | 0.670 | 8.70× | 0.308 | 4.00× | ok |
| Adobe-C++/stepanov_abstraction | 0.070 | 0.277 | 3.96× | 0.197 | 2.81× | ok |
| Adobe-C++/stepanov_vector | 0.121 | 0.419 | 3.46× | 0.357 | 2.95× | ok |
| Bullet | 7.536 | 26.520 | 3.52× | 25.318 | 3.36× | ok |
| CLAMR | 3.856 | 13.430 | 3.48× | 11.574 | 3.00× | ok |
| CoyoteBench/almabench | 0.045 | 0.120 | 2.67× | 0.120 | 2.67× | ok |
| CoyoteBench/fftbench | 0.167 | 0.378 | 2.26× | 0.474 | 2.84× | ok |
| CoyoteBench/huffbench | 0.055 | 0.113 | 2.05× | 0.120 | 2.18× | ok |
| CoyoteBench/lpbench | 0.044 | 0.104 | 2.36× | 0.122 | 2.77× | ok |
| DOE/HACCKernels | 0.180 | 0.482 | 2.68× | 0.505 | 2.81× | ok |
| DOE/HPCCG | 0.970 | 2.356 | 2.43× | 3.915 | 4.04× | ok |
| DOE/PENNANT | 2.354 | 6.346 | 2.70× | 7.243 | 3.08× | ok |
| DOE/miniFE | 0.932 | 3.263 | 3.50× | 4.147 | 4.45× | ok |
| Misc-C++-EH/spirit | 0.673 | 3.711 | 5.51× | 2.644 | 3.93× | ok |
| Misc-C++-Large/ray | 0.168 | 0.428 | 2.55× | 0.598 | 3.56× | ok |
| Misc-C++-Large/sphereflake | 0.142 | 0.351 | 2.47× | 0.520 | 3.66× | ok |
| Misc-C++/bigfib | 0.179 | 0.545 | 3.04× | 0.628 | 3.51× | ok |
| Misc-C++/oopack_v1p8 | 0.050 | 0.139 | 2.78× | 0.148 | 2.96× | ok |
| Misc-C++/stepanov_container | 0.262 | 0.879 | 3.35× | 0.897 | 3.42× | ok |
| Misc-C++/stepanov_v1p2 | 0.049 | 0.184 | 3.76× | 0.150 | 3.06× | ok |
| PAQ8p | 0.104 | 0.668 | 6.42× | 0.366 | 3.52× | ok |
| Prolangs-C++/life | 0.006 | 0.048 | — | 0.045 | — | ok |
| Prolangs-C++/ocean | 0.018 | 0.098 | 5.44× | 0.076 | 4.22× | ok |
| Prolangs-C++/primes | 0.010 | 0.038 | 3.80× | 0.042 | 4.20× | ok |
| Shootout-C++-EH/except | 0.111 | 0.272 | 2.45× | 0.363 | 3.27× | ok |
| Shootout-C++/ackermann | 0.120 | 0.276 | 2.30× | 0.425 | 3.54× | ok |
| Shootout-C++/ary3 | 0.128 | 0.305 | 2.38× | 0.390 | 3.05× | ok |
| Shootout-C++/fibo | 0.129 | 0.242 | 1.88× | 0.425 | 3.29× | ok |
| Shootout-C++/hash | 0.171 | 0.435 | 2.54× | 0.509 | 2.98× | ok |
| Shootout-C++/hash2 | 0.167 | 0.453 | 2.71× | 0.482 | 2.89× | ok |
| Shootout-C++/heapsort | 0.132 | 0.316 | 2.39× | 0.390 | 2.95× | ok |
| Shootout-C++/lists | 0.128 | 0.353 | 2.76× | 0.394 | 3.08× | ok |
| Shootout-C++/lists1 | 0.125 | 0.324 | 2.59× | 0.410 | 3.28× | ok |
| Shootout-C++/matrix | 0.108 | 0.254 | 2.35× | 0.345 | 3.19× | ok |
| Shootout-C++/methcall | 0.115 | 0.252 | 2.19× | 0.342 | 2.97× | ok |
| Shootout-C++/moments | 0.157 | 0.381 | 2.43× | 0.460 | 2.93× | ok |
| Shootout-C++/random | 0.135 | 0.311 | 2.30× | 0.383 | 2.84× | ok |
| Shootout-C++/sieve | 0.141 | 0.367 | 2.60× | 0.423 | 3.00× | ok |
| SmallPT | 0.047 | 0.136 | 2.89× | 0.135 | 2.87× | ok |
| Stanford/Bubblesort | 0.015 | 0.044 | 2.93× | 0.049 | 3.27× | ok |
| Stanford/FloatMM | 0.015 | 0.044 | 2.93× | 0.049 | 3.27× | ok |
| Stanford/Puzzle | 0.017 | 0.056 | 3.29× | 0.059 | 3.47× | ok |
| Stanford/Treesort | 0.015 | 0.048 | 3.20× | 0.058 | 3.87× | ok |
| bg/binarytrees/2 | 0.117 | 0.265 | 2.26× | 0.346 | 2.96× | ok |
| bg/fannkuchredux/3 | 0.059 | 0.123 | 2.08× | 0.147 | 2.49× | ok |
| bg/fasta/1 | 0.084 | 0.185 | 2.20× | 0.231 | 2.75× | ok |
| bg/fasta/2 | 0.082 | 0.202 | 2.46× | 0.210 | 2.56× | ok |
| bg/fasta/3 | 0.128 | 0.289 | 2.26× | 0.355 | 2.77× | ok |
| bg/fasta/4 | 0.117 | 0.258 | 2.21× | 0.348 | 2.97× | ok |
| bg/fasta/6 | 0.214 | 0.582 | 2.72× | 0.630 | 2.94× | ok |
| bg/mandelbrot/0 | 0.228 | 0.668 | 2.93× | 0.682 | 2.99× | ok |
| bg/mandelbrot/2 | 0.133 | 0.332 | 2.50× | 0.429 | 3.23× | ok |
| bg/mandelbrot/3 | 0.151 | 0.317 | 2.10× | 0.409 | 2.71× | ok |
| bg/mandelbrot/5 | 0.075 | 0.165 | 2.20× | 0.185 | 2.47× | ok |
| bg/mandelbrot/7 | 0.071 | 0.197 | 2.77× | 0.198 | 2.79× | ok |
| bg/mandelbrot/9 | 0.073 | 0.163 | 2.23× | 0.187 | 2.56× | ok |
| bg/nbody/1 | 0.045 | 0.146 | 3.24× | 0.133 | 2.96× | ok |
| bg/nbody/2 | 0.041 | 0.106 | 2.59× | 0.124 | 3.02× | ok |
| bg/nbody/3 | 0.043 | 0.102 | 2.37× | 0.114 | 2.65× | ok |
| bg/nbody/6 | 0.047 | 0.150 | 3.19× | 0.166 | 3.53× | ok |
| bg/pidigits/4 | 0.216 | 0.467 | 2.16× | 0.603 | 2.79× | ok |
| bg/pidigits/5 | 0.114 | 0.270 | 2.37× | 0.342 | 3.00× | ok |
| bg/revcomp/1 | 0.127 | 0.324 | 2.55× | 0.365 | 2.87× | ok |
| bg/revcomp/5 | 0.122 | 0.294 | 2.41× | 0.493 | 4.04× | ok |
| bg/spectralnorm/1 | 0.168 | 0.385 | 2.29× | 0.474 | 2.82× | ok |
| box2d | 2.335 | 6.252 | 2.68× | 8.263 | 3.54× | ok |
| fmt | 0.771 | 3.517 | 4.56× | 3.024 | 3.92× | ok |
| hexxagon | 0.415 | 0.861 | 2.07× | 1.418 | 3.42× | ok |
| lambda | 0.084 | 0.433 | 5.15× | 0.346 | 4.12× | ok |
| minisat | 0.108 | 0.435 | 4.03× | 0.346 | 3.20× | ok |
| nlohmann-json | 0.643 | 2.735 | 4.25× | 2.841 | 4.42× | ok |
| pugixml | 0.414 | 1.856 | 4.48× | 1.379 | 3.33× | ok |
| pugixml-tests | 5.556 | 22.044 | 3.97× | 18.621 | 3.35× | ok |
| rapidjson | 0.184 | 0.649 | 3.53× | 0.617 | 3.35× | ok |
| re2 | 4.755 | 15.329 | 3.22× | 10.806 | 2.27× | ok |
| re2-test-re2 | 7.446 | 21.994 | 2.95× | 25.423 | 3.41× | ok |
| re2-test-search | 7.125 | 21.170 | 2.97× | 18.112 | 2.54× | ok |
| tramp3d-v4 | 1.053 | 12.227 | 11.61× | 4.084 | 3.88× | ok |

### O3 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.176 | 1.248 | 7.09× | 0.674 | 3.83× | ok |
| Adobe-C++/loop_unroll | 0.648 | 7.787 | 12.02× | 6.144 | 9.48× | ok |
| Adobe-C++/simple_types_constant_folding | 0.361 | 3.726 | 10.32× | 3.214 | 8.90× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.302 | 3.156 | 10.45× | 2.483 | 8.22× | ok |
| Adobe-C++/stepanov_abstraction | 0.148 | 1.729 | 11.68× | 0.744 | 5.03× | ok |
| Adobe-C++/stepanov_vector | 0.171 | 1.782 | 10.42× | 0.900 | 5.26× | ok |
| Bullet | 9.651 | 53.478 | 5.54× | 41.515 | 4.30× | ok |
| CLAMR | 6.319 | 33.547 | 5.31× | 24.861 | 3.93× | ok |
| CoyoteBench/almabench | 0.050 | 0.234 | 4.68× | 0.199 | 3.98× | ok |
| CoyoteBench/fftbench | 0.185 | 0.613 | 3.31× | 0.612 | 3.31× | ok |
| CoyoteBench/huffbench | 0.056 | 0.343 | 6.13× | 0.195 | 3.48× | ok |
| CoyoteBench/lpbench | 0.055 | 0.244 | 4.44× | 0.248 | 4.51× | ok |
| DOE/HACCKernels | 0.187 | 0.536 | 2.87× | 0.591 | 3.16× | ok |
| DOE/HPCCG | 1.038 | 3.361 | 3.24× | 4.496 | 4.33× | ok |
| DOE/PENNANT | 2.724 | 9.029 | 3.31× | 9.176 | 3.37× | ok |
| DOE/miniFE | 1.462 | 5.748 | 3.93× | 6.239 | 4.27× | ok |
| Misc-C++-EH/spirit | 0.967 | 5.180 | 5.36× | 4.810 | 4.97× | ok |
| Misc-C++-Large/ray | 0.183 | 0.779 | 4.26× | 0.642 | 3.51× | ok |
| Misc-C++-Large/sphereflake | 0.183 | 1.193 | 6.52× | 0.599 | 3.27× | ok |
| Misc-C++/bigfib | 0.214 | 0.770 | 3.60× | 0.809 | 3.78× | ok |
| Misc-C++/oopack_v1p8 | 0.060 | 0.260 | 4.33× | 0.246 | 4.10× | ok |
| Misc-C++/stepanov_container | 0.378 | 1.421 | 3.76× | 1.304 | 3.45× | ok |
| Misc-C++/stepanov_v1p2 | 0.066 | 0.302 | 4.58× | 0.256 | 3.88× | ok |
| PAQ8p | 0.425 | 5.547 | 13.05× | 2.534 | 5.96× | ok |
| Prolangs-C++/life | 0.012 | 0.144 | 12.00× | 0.095 | 7.92× | ok |
| Prolangs-C++/ocean | 0.030 | 0.294 | 9.80× | 0.173 | 5.77× | ok |
| Prolangs-C++/primes | 0.012 | 0.060 | 5.00× | 0.054 | 4.50× | ok |
| Shootout-C++-EH/except | 0.112 | 0.289 | 2.58× | 0.347 | 3.10× | ok |
| Shootout-C++/ackermann | 0.118 | 0.339 | 2.87× | 0.441 | 3.74× | ok |
| Shootout-C++/ary3 | 0.139 | 0.357 | 2.57× | 0.490 | 3.53× | ok |
| Shootout-C++/fibo | 0.133 | 0.355 | 2.67× | 0.344 | 2.59× | ok |
| Shootout-C++/hash | 0.192 | 0.557 | 2.90× | 0.638 | 3.32× | ok |
| Shootout-C++/hash2 | 0.179 | 0.636 | 3.55× | 0.635 | 3.55× | ok |
| Shootout-C++/heapsort | 0.139 | 0.373 | 2.68× | 0.403 | 2.90× | ok |
| Shootout-C++/lists | 0.133 | 0.370 | 2.78× | 0.417 | 3.14× | ok |
| Shootout-C++/lists1 | 0.146 | 0.376 | 2.58× | 0.455 | 3.12× | ok |
| Shootout-C++/matrix | 0.122 | 0.316 | 2.59× | 0.455 | 3.73× | ok |
| Shootout-C++/methcall | 0.117 | 0.285 | 2.44× | 0.357 | 3.05× | ok |
| Shootout-C++/moments | 0.167 | 0.466 | 2.79× | 0.548 | 3.28× | ok |
| Shootout-C++/random | 0.142 | 0.304 | 2.14× | 0.392 | 2.76× | ok |
| Shootout-C++/sieve | 0.148 | 0.395 | 2.67× | 0.473 | 3.20× | ok |
| SmallPT | 0.060 | 0.444 | 7.40× | 0.243 | 4.05× | ok |
| Stanford/Bubblesort | 0.017 | 0.081 | 4.76× | 0.072 | 4.24× | ok |
| Stanford/FloatMM | 0.019 | 0.090 | 4.74× | 0.098 | 5.16× | ok |
| Stanford/Puzzle | 0.027 | 0.177 | 6.56× | 0.188 | 6.96× | ok |
| Stanford/Treesort | 0.022 | 0.126 | 5.73× | 0.076 | 3.45× | ok |
| bg/binarytrees/2 | 0.116 | 0.631 | 5.44× | 0.378 | 3.26× | ok |
| bg/fannkuchredux/3 | 0.064 | 0.193 | 3.02× | 0.183 | 2.86× | ok |
| bg/fasta/1 | 0.092 | 0.234 | 2.54× | 0.286 | 3.11× | ok |
| bg/fasta/2 | 0.089 | 0.251 | 2.82× | 0.261 | 2.93× | ok |
| bg/fasta/3 | 0.129 | 0.330 | 2.56× | 0.425 | 3.29× | ok |
| bg/fasta/4 | 0.139 | 0.272 | 1.96× | 0.334 | 2.40× | ok |
| bg/fasta/6 | 0.229 | 0.663 | 2.90× | 0.770 | 3.36× | ok |
| bg/mandelbrot/0 | 0.256 | 0.933 | 3.64× | 0.987 | 3.86× | ok |
| bg/mandelbrot/2 | 0.141 | 0.396 | 2.81× | 0.478 | 3.39× | ok |
| bg/mandelbrot/3 | 0.150 | 0.353 | 2.35× | 0.473 | 3.15× | ok |
| bg/mandelbrot/5 | 0.074 | 0.216 | 2.92× | 0.219 | 2.96× | ok |
| bg/mandelbrot/7 | 0.082 | 0.308 | 3.76× | 0.256 | 3.12× | ok |
| bg/mandelbrot/9 | 0.081 | 0.257 | 3.17× | 0.244 | 3.01× | ok |
| bg/nbody/1 | 0.058 | 0.220 | 3.79× | 0.240 | 4.14× | ok |
| bg/nbody/2 | 0.052 | 0.181 | 3.48× | 0.177 | 3.40× | ok |
| bg/nbody/3 | 0.048 | 0.169 | 3.52× | 0.150 | 3.12× | ok |
| bg/nbody/6 | 0.066 | 0.239 | 3.62× | 0.269 | 4.08× | ok |
| bg/pidigits/4 | 0.186 | 0.522 | 2.81× | 0.714 | 3.84× | ok |
| bg/pidigits/5 | 0.119 | 0.299 | 2.51× | 0.367 | 3.08× | ok |
| bg/revcomp/1 | 0.134 | 0.364 | 2.72× | 0.421 | 3.14× | ok |
| bg/revcomp/5 | 0.130 | 0.391 | 3.01× | 0.477 | 3.67× | ok |
| bg/spectralnorm/1 | 0.181 | 0.487 | 2.69× | 0.529 | 2.92× | ok |
| box2d | 2.843 | 11.037 | 3.88× | 10.430 | 3.67× | ok |
| fmt | 1.411 | 7.686 | 5.45× | 6.351 | 4.50× | ok |
| hexxagon | 0.450 | 1.620 | 3.60× | 1.704 | 3.79× | ok |
| lambda | 0.173 | 1.496 | 8.65× | 0.786 | 4.54× | ok |
| minisat | 0.205 | 1.470 | 7.17× | 0.910 | 4.44× | ok |
| nlohmann-json | 1.104 | 4.268 | 3.87× | 4.413 | 4.00× | ok |
| pugixml | 0.983 | 8.254 | 8.40× | 4.954 | 5.04× | ok |
| pugixml-tests | 8.090 | 48.685 | 6.02× | 37.510 | 4.64× | ok |
| rapidjson | 0.332 | 1.739 | 5.24× | 1.057 | 3.18× | ok |
| re2 | 4.927 | 25.640 | 5.20× | 15.181 | 3.08× | ok |
| re2-test-re2 | 9.206 | 40.037 | 4.35× | 36.487 | 3.96× | ok |
| re2-test-search | 8.941 | 34.799 | 3.89× | 25.384 | 2.84× | ok |
| tramp3d-v4 | 3.124 | 23.357 | 7.48× | 19.420 | 6.22× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.103 | 0.212 | 2.06× | 0.243 | 2.36× | ok |
| Adobe-C++/loop_unroll | 0.065 | 0.154 | 2.37× | 0.179 | 2.75× | ok |
| Adobe-C++/simple_types_constant_folding | 0.059 | 0.166 | 2.81× | 0.187 | 3.17× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.058 | 0.144 | 2.48× | 0.167 | 2.88× | ok |
| Adobe-C++/stepanov_abstraction | 0.058 | 0.115 | 1.98× | 0.149 | 2.57× | ok |
| Adobe-C++/stepanov_vector | 0.105 | 0.185 | 1.76× | 0.276 | 2.63× | ok |
| Bullet | 7.209 | 16.432 | 2.28× | 20.654 | 2.87× | ok |
| CLAMR | 3.184 | 7.242 | 2.27× | 10.670 | 3.35× | ok |
| CoyoteBench/almabench | 0.045 | 0.101 | 2.24× | 0.112 | 2.49× | ok |
| CoyoteBench/fftbench | 0.167 | 0.336 | 2.01× | 0.438 | 2.62× | ok |
| CoyoteBench/huffbench | 0.053 | 0.099 | 1.87× | 0.115 | 2.17× | ok |
| CoyoteBench/lpbench | 0.043 | 0.087 | 2.02× | 0.112 | 2.60× | ok |
| DOE/HACCKernels | 0.176 | 0.437 | 2.48× | 0.473 | 2.69× | ok |
| DOE/HPCCG | 0.943 | 2.145 | 2.27× | 3.705 | 3.93× | ok |
| DOE/PENNANT | 2.224 | 4.764 | 2.14× | 5.943 | 2.67× | ok |
| DOE/miniFE | 0.872 | 2.213 | 2.54× | 3.224 | 3.70× | ok |
| Misc-C++-EH/spirit | 0.469 | 1.420 | 3.03× | 1.807 | 3.85× | ok |
| Misc-C++-Large/ray | 0.168 | 0.361 | 2.15× | 0.743 | 4.42× | ok |
| Misc-C++-Large/sphereflake | 0.138 | 0.314 | 2.28× | 0.545 | 3.95× | ok |
| Misc-C++/bigfib | 0.167 | 0.367 | 2.20× | 0.549 | 3.29× | ok |
| Misc-C++/oopack_v1p8 | 0.048 | 0.101 | 2.10× | 0.133 | 2.77× | ok |
| Misc-C++/stepanov_container | 0.231 | 0.598 | 2.59× | 0.862 | 3.73× | ok |
| Misc-C++/stepanov_v1p2 | 0.046 | 0.105 | 2.28× | 0.133 | 2.89× | ok |
| PAQ8p | 0.074 | 0.185 | 2.50× | 0.215 | 2.91× | ok |
| Prolangs-C++/life | 0.004 | 0.016 | — | 0.032 | — | ok |
| Prolangs-C++/ocean | 0.015 | 0.037 | 2.47× | 0.051 | 3.40× | ok |
| Prolangs-C++/primes | 0.010 | 0.027 | 2.70× | 0.037 | 3.70× | ok |
| Shootout-C++-EH/except | 0.109 | 0.271 | 2.49× | 0.342 | 3.14× | ok |
| Shootout-C++/ackermann | 0.120 | 0.280 | 2.33× | 0.410 | 3.42× | ok |
| Shootout-C++/ary3 | 0.125 | 0.274 | 2.19× | 0.368 | 2.94× | ok |
| Shootout-C++/fibo | 0.130 | 0.249 | 1.92× | 0.405 | 3.12× | ok |
| Shootout-C++/hash | 0.163 | 0.325 | 1.99× | 0.449 | 2.75× | ok |
| Shootout-C++/hash2 | 0.162 | 0.337 | 2.08× | 0.409 | 2.52× | ok |
| Shootout-C++/heapsort | 0.143 | 0.291 | 2.03× | 0.372 | 2.60× | ok |
| Shootout-C++/lists | 0.123 | 0.275 | 2.24× | 0.363 | 2.95× | ok |
| Shootout-C++/lists1 | 0.125 | 0.267 | 2.14× | 0.371 | 2.97× | ok |
| Shootout-C++/matrix | 0.106 | 0.247 | 2.33× | 0.329 | 3.10× | ok |
| Shootout-C++/methcall | 0.111 | 0.250 | 2.25× | 0.327 | 2.95× | ok |
| Shootout-C++/moments | 0.148 | 0.300 | 2.03× | 0.422 | 2.85× | ok |
| Shootout-C++/random | 0.137 | 0.309 | 2.26× | 0.369 | 2.69× | ok |
| Shootout-C++/sieve | 0.137 | 0.308 | 2.25× | 0.383 | 2.80× | ok |
| SmallPT | 0.044 | 0.090 | 2.05× | 0.121 | 2.75× | ok |
| Stanford/Bubblesort | 0.015 | 0.038 | 2.53× | 0.046 | 3.07× | ok |
| Stanford/FloatMM | 0.015 | 0.038 | 2.53× | 0.051 | 3.40× | ok |
| Stanford/Puzzle | 0.017 | 0.041 | 2.41× | 0.054 | 3.18× | ok |
| Stanford/Treesort | 0.015 | 0.039 | 2.60× | 0.052 | 3.47× | ok |
| bg/binarytrees/2 | 0.113 | 0.267 | 2.36× | 0.329 | 2.91× | ok |
| bg/fannkuchredux/3 | 0.057 | 0.106 | 1.86× | 0.159 | 2.79× | ok |
| bg/fasta/1 | 0.085 | 0.151 | 1.78× | 0.215 | 2.53× | ok |
| bg/fasta/2 | 0.083 | 0.160 | 1.93× | 0.196 | 2.36× | ok |
| bg/fasta/3 | 0.131 | 0.273 | 2.08× | 0.336 | 2.56× | ok |
| bg/fasta/4 | 0.114 | 0.237 | 2.08× | 0.318 | 2.79× | ok |
| bg/fasta/6 | 0.198 | 0.460 | 2.32× | 0.558 | 2.82× | ok |
| bg/mandelbrot/0 | 0.214 | 0.458 | 2.14× | 0.613 | 2.86× | ok |
| bg/mandelbrot/2 | 0.130 | 0.294 | 2.26× | 0.415 | 3.19× | ok |
| bg/mandelbrot/3 | 0.147 | 0.300 | 2.04× | 0.391 | 2.66× | ok |
| bg/mandelbrot/5 | 0.072 | 0.134 | 1.86× | 0.170 | 2.36× | ok |
| bg/mandelbrot/7 | 0.067 | 0.142 | 2.12× | 0.175 | 2.61× | ok |
| bg/mandelbrot/9 | 0.063 | 0.118 | 1.87× | 0.161 | 2.56× | ok |
| bg/nbody/1 | 0.042 | 0.088 | 2.10× | 0.112 | 2.67× | ok |
| bg/nbody/2 | 0.041 | 0.092 | 2.24× | 0.118 | 2.88× | ok |
| bg/nbody/3 | 0.043 | 0.084 | 1.95× | 0.108 | 2.51× | ok |
| bg/nbody/6 | 0.045 | 0.090 | 2.00× | 0.137 | 3.04× | ok |
| bg/pidigits/4 | 0.195 | 0.410 | 2.10× | 0.562 | 2.88× | ok |
| bg/pidigits/5 | 0.112 | 0.258 | 2.30× | 0.327 | 2.92× | ok |
| bg/revcomp/1 | 0.124 | 0.270 | 2.18× | 0.333 | 2.69× | ok |
| bg/revcomp/5 | 0.118 | 0.237 | 2.01× | 0.431 | 3.65× | ok |
| bg/spectralnorm/1 | 0.163 | 0.341 | 2.09× | 0.449 | 2.75× | ok |
| box2d | 2.134 | 4.356 | 2.04× | 7.894 | 3.70× | ok |
| fmt | 0.698 | 1.690 | 2.42× | 2.437 | 3.49× | ok |
| hexxagon | 0.404 | 0.785 | 1.94× | 1.379 | 3.41× | ok |
| lambda | 0.064 | 0.198 | 3.09× | 0.277 | 4.33× | ok |
| minisat | 0.092 | 0.208 | 2.26× | 0.258 | 2.80× | ok |
| nlohmann-json | 0.532 | 1.261 | 2.37× | 2.252 | 4.23× | ok |
| pugixml | 0.353 | 0.733 | 2.08× | 1.016 | 2.88× | ok |
| pugixml-tests | 4.621 | 11.736 | 2.54× | 16.722 | 3.62× | ok |
| rapidjson | 0.153 | 0.342 | 2.24× | 0.487 | 3.18× | ok |
| re2 | 4.570 | 10.250 | 2.24× | 9.208 | 2.01× | ok |
| re2-test-re2 | 6.811 | 14.669 | 2.15× | 21.725 | 3.19× | ok |
| re2-test-search | 6.517 | 14.592 | 2.24× | 22.827 | 3.50× | ok |
| tramp3d-v4 | 0.699 | 3.657 | 5.23× | 2.410 | 3.45× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
