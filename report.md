# Public benchmarks: AMD EPYC

Measured compiler: [`c49e45b16`](https://github.com/vishvananda/cppgm/commit/c49e45b16cddb1f5665d1f308b5e8e71622aea59) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44362912416) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: AMD EPYC 7763 64-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.27× | 79 | 3.45× | 79 |
| Compile CPU, `-O0` | 2.98× | 79 | 3.67× | 79 |
| Compile CPU, `-O3` | 4.21× | 81 | 4.23× | 81 |
| Compile peak RSS, `-O0` | 1.49× | 81 | 2.39× | 81 |
| Compile peak RSS, `-O3` | 1.77× | 81 | 2.51× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.19× | 81 | 1.21× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.972 to 1.111; raw observations and block ratios are retained in the artifact.

## Slowest generated code, by run-time instructions

| Program | vs g++ |
| --- | ---: |
| bg/nbody/2 | 0.63× |
| bg/spectralnorm/1 | 0.75× |
| tramp3d-v4 | 0.78× |
| bg/nbody/1 | 0.82× |
| bg/mandelbrot/7 | 0.84× |
| bg/mandelbrot/9 | 0.84× |
| bg/nbody/3 | 0.86× |
| bg/mandelbrot/5 | 0.86× |
| bg/mandelbrot/2 | 0.86× |
| CoyoteBench/fftbench | 0.89× |

## Compile CPU times

Times are CPU seconds, excluding linking. Speed is reference time divided by cppgm time; higher is better. Every program is listed. Missing times show a dash. Ratios are omitted for failed programs or when either time is below 10 ms.

Compilation is measured once per compiler and level; the ABBA/BAAB repetitions apply to generated-program execution and self-built compiler speed.

### O0 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.112 | 0.401 | 3.58× | 0.469 | 4.19× | ok |
| Adobe-C++/loop_unroll | 0.094 | 0.832 | 8.85× | 0.360 | 3.83× | ok |
| Adobe-C++/simple_types_constant_folding | 0.095 | 0.955 | 10.05× | 0.455 | 4.79× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.083 | 0.688 | 8.29× | 0.360 | 4.34× | ok |
| Adobe-C++/stepanov_abstraction | 0.061 | 0.262 | 4.30× | 0.304 | 4.98× | ok |
| Adobe-C++/stepanov_vector | 0.108 | 0.420 | 3.89× | 0.461 | 4.27× | ok |
| Bullet | 7.987 | 27.770 | 3.48× | 30.427 | 3.81× | ok |
| CLAMR | 3.626 | 14.696 | 4.05× | 13.850 | 3.82× | ok |
| CoyoteBench/almabench | 0.047 | 0.132 | 2.81× | 0.153 | 3.26× | ok |
| CoyoteBench/fftbench | 0.173 | 0.382 | 2.21× | 0.554 | 3.20× | ok |
| CoyoteBench/huffbench | 0.045 | 0.101 | 2.24× | 0.201 | 4.47× | ok |
| CoyoteBench/lpbench | 0.046 | 0.110 | 2.39× | 0.207 | 4.50× | ok |
| DOE/HACCKernels | 0.180 | 0.529 | 2.94× | 0.614 | 3.41× | ok |
| DOE/HPCCG | 1.013 | 2.411 | 2.38× | 4.717 | 4.66× | ok |
| DOE/PENNANT | 2.403 | 5.781 | 2.41× | 7.550 | 3.14× | ok |
| DOE/miniFE | 0.980 | 2.887 | 2.95× | 4.034 | 4.12× | ok |
| Misc-C++-EH/spirit | 0.643 | 3.662 | 5.70× | 3.702 | 5.76× | ok |
| Misc-C++-Large/ray | 0.200 | 0.393 | 1.97× | 0.666 | 3.33× | ok |
| Misc-C++-Large/sphereflake | 0.177 | 0.384 | 2.17× | 0.635 | 3.59× | ok |
| Misc-C++/bigfib | 0.205 | 0.611 | 2.98× | 0.881 | 4.30× | ok |
| Misc-C++/oopack_v1p8 | 0.056 | 0.153 | 2.73× | 0.184 | 3.29× | ok |
| Misc-C++/stepanov_container | 0.225 | 0.791 | 3.52× | 0.871 | 3.87× | ok |
| Misc-C++/stepanov_v1p2 | 0.057 | 0.168 | 2.95× | 0.205 | 3.60× | ok |
| PAQ8p | 0.100 | 0.641 | 6.41× | 0.385 | 3.85× | ok |
| Prolangs-C++/life | 0.005 | 0.044 | — | 0.038 | — | ok |
| Prolangs-C++/ocean | 0.016 | 0.090 | 5.62× | 0.070 | 4.38× | ok |
| Prolangs-C++/primes | 0.008 | 0.034 | — | 0.043 | — | ok |
| Shootout-C++-EH/except | 0.124 | 0.267 | 2.15× | 0.429 | 3.46× | ok |
| Shootout-C++/ackermann | 0.110 | 0.262 | 2.38× | 0.457 | 4.15× | ok |
| Shootout-C++/ary3 | 0.127 | 0.356 | 2.80× | 0.419 | 3.30× | ok |
| Shootout-C++/fibo | 0.117 | 0.283 | 2.42× | 0.494 | 4.22× | ok |
| Shootout-C++/hash | 0.153 | 0.434 | 2.84× | 0.543 | 3.55× | ok |
| Shootout-C++/hash2 | 0.209 | 0.431 | 2.06× | 0.572 | 2.74× | ok |
| Shootout-C++/heapsort | 0.131 | 0.293 | 2.24× | 0.445 | 3.40× | ok |
| Shootout-C++/lists | 0.121 | 0.322 | 2.66× | 0.449 | 3.71× | ok |
| Shootout-C++/lists1 | 0.141 | 0.354 | 2.51× | 0.484 | 3.43× | ok |
| Shootout-C++/matrix | 0.116 | 0.244 | 2.10× | 0.369 | 3.18× | ok |
| Shootout-C++/methcall | 0.112 | 0.247 | 2.21× | 0.380 | 3.39× | ok |
| Shootout-C++/moments | 0.147 | 0.369 | 2.51× | 0.481 | 3.27× | ok |
| Shootout-C++/random | 0.130 | 0.274 | 2.11× | 0.437 | 3.36× | ok |
| Shootout-C++/sieve | 0.139 | 0.386 | 2.78× | 0.570 | 4.10× | ok |
| SmallPT | 0.050 | 0.132 | 2.64× | 0.160 | 3.20× | ok |
| Stanford/Bubblesort | 0.014 | 0.041 | 2.93× | 0.049 | 3.50× | ok |
| Stanford/FloatMM | 0.014 | 0.043 | 3.07× | 0.051 | 3.64× | ok |
| Stanford/Puzzle | 0.016 | 0.054 | 3.38× | 0.055 | 3.44× | ok |
| Stanford/Treesort | 0.015 | 0.045 | 3.00× | 0.053 | 3.53× | ok |
| bg/binarytrees/2 | 0.113 | 0.253 | 2.24× | 0.388 | 3.43× | ok |
| bg/fannkuchredux/3 | 0.054 | 0.110 | 2.04× | 0.146 | 2.70× | ok |
| bg/fasta/1 | 0.081 | 0.191 | 2.36× | 0.241 | 2.98× | ok |
| bg/fasta/2 | 0.082 | 0.192 | 2.34× | 0.324 | 3.95× | ok |
| bg/fasta/3 | 0.134 | 0.281 | 2.10× | 0.430 | 3.21× | ok |
| bg/fasta/4 | 0.150 | 0.294 | 1.96× | 0.388 | 2.59× | ok |
| bg/fasta/6 | 0.208 | 0.605 | 2.91× | 0.923 | 4.44× | ok |
| bg/mandelbrot/0 | 0.247 | 0.686 | 2.78× | 0.799 | 3.23× | ok |
| bg/mandelbrot/2 | 0.135 | 0.328 | 2.43× | 0.462 | 3.42× | ok |
| bg/mandelbrot/3 | 0.153 | 0.306 | 2.00× | 0.479 | 3.13× | ok |
| bg/mandelbrot/5 | 0.072 | 0.168 | 2.33× | 0.222 | 3.08× | ok |
| bg/mandelbrot/7 | 0.076 | 0.189 | 2.49× | 0.249 | 3.28× | ok |
| bg/mandelbrot/9 | 0.068 | 0.176 | 2.59× | 0.240 | 3.53× | ok |
| bg/nbody/1 | 0.052 | 0.155 | 2.98× | 0.155 | 2.98× | ok |
| bg/nbody/2 | 0.044 | 0.103 | 2.34× | 0.144 | 3.27× | ok |
| bg/nbody/3 | 0.045 | 0.100 | 2.22× | 0.141 | 3.13× | ok |
| bg/nbody/6 | 0.049 | 0.155 | 3.16× | 0.177 | 3.61× | ok |
| bg/pidigits/4 | 0.208 | 0.522 | 2.51× | 0.715 | 3.44× | ok |
| bg/pidigits/5 | 0.110 | 0.265 | 2.41× | 0.553 | 5.03× | ok |
| bg/revcomp/1 | 0.141 | 0.354 | 2.51× | 0.552 | 3.91× | ok |
| bg/revcomp/5 | 0.146 | 0.309 | 2.12× | 0.575 | 3.94× | ok |
| bg/spectralnorm/1 | 0.177 | 0.418 | 2.36× | 0.737 | 4.16× | ok |
| box2d | 2.686 | 7.364 | 2.74× | 11.300 | 4.21× | ok |
| fmt | 0.793 | 3.616 | 4.56× | 3.456 | 4.36× | ok |
| hexxagon | 0.454 | 1.074 | 2.37× | 1.616 | 3.56× | ok |
| lambda | 0.097 | 0.468 | 4.82× | 0.409 | 4.22× | ok |
| minisat | 0.112 | 0.465 | 4.15× | 0.443 | 3.96× | ok |
| nlohmann-json | 0.676 | 3.013 | 4.46× | 3.341 | 4.94× | ok |
| pugixml | 0.393 | 1.774 | 4.51× | 1.623 | 4.13× | ok |
| pugixml-tests | 6.660 | 23.762 | 3.57× | 24.744 | 3.72× | ok |
| rapidjson | 0.205 | 0.755 | 3.68× | 0.776 | 3.79× | ok |
| re2 | 6.268 | 16.925 | 2.70× | 12.731 | 2.03× | ok |
| re2-test-re2 | 8.520 | 24.893 | 2.92× | 31.182 | 3.66× | ok |
| re2-test-search | 8.904 | 23.480 | 2.64× | 25.538 | 2.87× | ok |
| tramp3d-v4 | 1.106 | 12.796 | 11.57× | 4.919 | 4.45× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.175 | 1.295 | 7.40× | 0.819 | 4.68× | ok |
| Adobe-C++/loop_unroll | 0.615 | 8.141 | 13.24× | 6.682 | 10.87× | ok |
| Adobe-C++/simple_types_constant_folding | 0.372 | 4.061 | 10.92× | 3.420 | 9.19× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.288 | 3.204 | 11.13× | 3.151 | 10.94× | ok |
| Adobe-C++/stepanov_abstraction | 0.163 | 1.694 | 10.39× | 0.860 | 5.28× | ok |
| Adobe-C++/stepanov_vector | 0.179 | 1.965 | 10.98× | 1.072 | 5.99× | ok |
| Bullet | 9.852 | 55.140 | 5.60× | 46.649 | 4.73× | ok |
| CLAMR | 6.025 | 34.383 | 5.71× | 27.831 | 4.62× | ok |
| CoyoteBench/almabench | 0.054 | 0.245 | 4.54× | 0.242 | 4.48× | ok |
| CoyoteBench/fftbench | 0.186 | 0.606 | 3.26× | 0.711 | 3.82× | ok |
| CoyoteBench/huffbench | 0.067 | 0.309 | 4.61× | 0.294 | 4.39× | ok |
| CoyoteBench/lpbench | 0.071 | 0.259 | 3.65× | 0.391 | 5.51× | ok |
| DOE/HACCKernels | 0.191 | 0.699 | 3.66× | 0.703 | 3.68× | ok |
| DOE/HPCCG | 1.085 | 3.387 | 3.12× | 5.333 | 4.92× | ok |
| DOE/PENNANT | 2.836 | 8.712 | 3.07× | 10.269 | 3.62× | ok |
| DOE/miniFE | 1.509 | 6.156 | 4.08× | 6.270 | 4.16× | ok |
| Misc-C++-EH/spirit | 1.153 | 5.107 | 4.43× | 5.976 | 5.18× | ok |
| Misc-C++-Large/ray | 0.208 | 0.778 | 3.74× | 0.757 | 3.64× | ok |
| Misc-C++-Large/sphereflake | 0.183 | 1.335 | 7.30× | 0.795 | 4.34× | ok |
| Misc-C++/bigfib | 0.242 | 0.907 | 3.75× | 1.015 | 4.19× | ok |
| Misc-C++/oopack_v1p8 | 0.066 | 0.296 | 4.48× | 0.287 | 4.35× | ok |
| Misc-C++/stepanov_container | 0.306 | 1.418 | 4.63× | 1.373 | 4.49× | ok |
| Misc-C++/stepanov_v1p2 | 0.069 | 0.389 | 5.64× | 0.315 | 4.57× | ok |
| PAQ8p | 0.396 | 5.475 | 13.83× | 2.475 | 6.25× | ok |
| Prolangs-C++/life | 0.013 | 0.135 | 10.38× | 0.089 | 6.85× | ok |
| Prolangs-C++/ocean | 0.028 | 0.270 | 9.64× | 0.159 | 5.68× | ok |
| Prolangs-C++/primes | 0.011 | 0.048 | 4.36× | 0.054 | 4.91× | ok |
| Shootout-C++-EH/except | 0.126 | 0.313 | 2.48× | 0.457 | 3.63× | ok |
| Shootout-C++/ackermann | 0.113 | 0.324 | 2.87× | 0.518 | 4.58× | ok |
| Shootout-C++/ary3 | 0.154 | 0.354 | 2.30× | 0.476 | 3.09× | ok |
| Shootout-C++/fibo | 0.130 | 0.339 | 2.61× | 0.431 | 3.32× | ok |
| Shootout-C++/hash | 0.171 | 0.524 | 3.06× | 0.682 | 3.99× | ok |
| Shootout-C++/hash2 | 0.243 | 0.625 | 2.57× | 0.764 | 3.14× | ok |
| Shootout-C++/heapsort | 0.137 | 0.451 | 3.29× | 0.470 | 3.43× | ok |
| Shootout-C++/lists | 0.138 | 0.382 | 2.77× | 0.464 | 3.36× | ok |
| Shootout-C++/lists1 | 0.151 | 0.414 | 2.74× | 0.540 | 3.58× | ok |
| Shootout-C++/matrix | 0.114 | 0.335 | 2.94× | 0.498 | 4.37× | ok |
| Shootout-C++/methcall | 0.120 | 0.296 | 2.47× | 0.392 | 3.27× | ok |
| Shootout-C++/moments | 0.157 | 0.441 | 2.81× | 0.646 | 4.11× | ok |
| Shootout-C++/random | 0.134 | 0.325 | 2.43× | 0.462 | 3.45× | ok |
| Shootout-C++/sieve | 0.145 | 0.410 | 2.83× | 0.522 | 3.60× | ok |
| SmallPT | 0.065 | 0.416 | 6.40× | 0.256 | 3.94× | ok |
| Stanford/Bubblesort | 0.017 | 0.078 | 4.59× | 0.070 | 4.12× | ok |
| Stanford/FloatMM | 0.019 | 0.090 | 4.74× | 0.101 | 5.32× | ok |
| Stanford/Puzzle | 0.029 | 0.181 | 6.24× | 0.177 | 6.10× | ok |
| Stanford/Treesort | 0.022 | 0.123 | 5.59× | 0.080 | 3.64× | ok |
| bg/binarytrees/2 | 0.120 | 0.625 | 5.21× | 0.408 | 3.40× | ok |
| bg/fannkuchredux/3 | 0.058 | 0.175 | 3.02× | 0.187 | 3.22× | ok |
| bg/fasta/1 | 0.088 | 0.235 | 2.67× | 0.293 | 3.33× | ok |
| bg/fasta/2 | 0.093 | 0.245 | 2.63× | 0.315 | 3.39× | ok |
| bg/fasta/3 | 0.131 | 0.341 | 2.60× | 0.489 | 3.73× | ok |
| bg/fasta/4 | 0.134 | 0.287 | 2.14× | 0.392 | 2.93× | ok |
| bg/fasta/6 | 0.275 | 0.720 | 2.62× | 0.858 | 3.12× | ok |
| bg/mandelbrot/0 | 0.273 | 1.015 | 3.72× | 1.096 | 4.01× | ok |
| bg/mandelbrot/2 | 0.144 | 0.396 | 2.75× | 0.518 | 3.60× | ok |
| bg/mandelbrot/3 | 0.150 | 0.411 | 2.74× | 0.514 | 3.43× | ok |
| bg/mandelbrot/5 | 0.078 | 0.222 | 2.85× | 0.260 | 3.33× | ok |
| bg/mandelbrot/7 | 0.086 | 0.285 | 3.31× | 0.292 | 3.40× | ok |
| bg/mandelbrot/9 | 0.077 | 0.340 | 4.42× | 0.287 | 3.73× | ok |
| bg/nbody/1 | 0.061 | 0.235 | 3.85× | 0.260 | 4.26× | ok |
| bg/nbody/2 | 0.050 | 0.191 | 3.82× | 0.224 | 4.48× | ok |
| bg/nbody/3 | 0.049 | 0.183 | 3.73× | 0.185 | 3.78× | ok |
| bg/nbody/6 | 0.064 | 0.231 | 3.61× | 0.282 | 4.41× | ok |
| bg/pidigits/4 | 0.216 | 0.584 | 2.70× | 0.987 | 4.57× | ok |
| bg/pidigits/5 | 0.154 | 0.309 | 2.01× | 0.520 | 3.38× | ok |
| bg/revcomp/1 | 0.178 | 0.386 | 2.17× | 0.507 | 2.85× | ok |
| bg/revcomp/5 | 0.157 | 0.389 | 2.48× | 0.558 | 3.55× | ok |
| bg/spectralnorm/1 | 0.187 | 0.526 | 2.81× | 0.833 | 4.45× | ok |
| box2d | 3.192 | 11.817 | 3.70× | 12.763 | 4.00× | ok |
| fmt | 1.359 | 8.012 | 5.90× | 5.889 | 4.33× | ok |
| hexxagon | 0.537 | 1.749 | 3.26× | 2.060 | 3.84× | ok |
| lambda | 0.185 | 1.789 | 9.67× | 0.940 | 5.08× | ok |
| minisat | 0.201 | 1.619 | 8.05× | 0.998 | 4.97× | ok |
| nlohmann-json | 1.243 | 5.500 | 4.42× | 5.358 | 4.31× | ok |
| pugixml | 0.916 | 7.079 | 7.73× | 5.761 | 6.29× | ok |
| pugixml-tests | 8.877 | 52.367 | 5.90× | 43.996 | 4.96× | ok |
| rapidjson | 0.357 | 1.942 | 5.44× | 1.285 | 3.60× | ok |
| re2 | 5.401 | 28.084 | 5.20× | 17.561 | 3.25× | ok |
| re2-test-re2 | 9.952 | 42.695 | 4.29× | 41.433 | 4.16× | ok |
| re2-test-search | 10.334 | 39.254 | 3.80× | 24.623 | 2.38× | ok |
| tramp3d-v4 | 3.537 | 28.206 | 7.97× | 21.590 | 6.10× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.101 | 0.229 | 2.27× | 0.396 | 3.92× | ok |
| Adobe-C++/loop_unroll | 0.065 | 0.176 | 2.71× | 0.214 | 3.29× | ok |
| Adobe-C++/simple_types_constant_folding | 0.063 | 0.183 | 2.90× | 0.229 | 3.63× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.060 | 0.166 | 2.77× | 0.198 | 3.30× | ok |
| Adobe-C++/stepanov_abstraction | 0.051 | 0.112 | 2.20× | 0.235 | 4.61× | ok |
| Adobe-C++/stepanov_vector | 0.094 | 0.200 | 2.13× | 0.405 | 4.31× | ok |
| Bullet | 7.187 | 17.626 | 2.45× | 24.261 | 3.38× | ok |
| CLAMR | 3.259 | 8.052 | 2.47× | 13.380 | 4.11× | ok |
| CoyoteBench/almabench | 0.047 | 0.111 | 2.36× | 0.145 | 3.09× | ok |
| CoyoteBench/fftbench | 0.171 | 0.342 | 2.00× | 0.518 | 3.03× | ok |
| CoyoteBench/huffbench | 0.045 | 0.088 | 1.96× | 0.194 | 4.31× | ok |
| CoyoteBench/lpbench | 0.046 | 0.093 | 2.02× | 0.185 | 4.02× | ok |
| DOE/HACCKernels | 0.176 | 0.468 | 2.66× | 0.562 | 3.19× | ok |
| DOE/HPCCG | 0.974 | 2.133 | 2.19× | 3.500 | 3.59× | ok |
| DOE/PENNANT | 2.288 | 5.239 | 2.29× | 6.823 | 2.98× | ok |
| DOE/miniFE | 1.127 | 1.940 | 1.72× | 3.651 | 3.24× | ok |
| Misc-C++-EH/spirit | 0.473 | 1.338 | 2.83× | 2.455 | 5.19× | ok |
| Misc-C++-Large/ray | 0.192 | 0.341 | 1.78× | 0.647 | 3.37× | ok |
| Misc-C++-Large/sphereflake | 0.170 | 0.350 | 2.06× | 0.556 | 3.27× | ok |
| Misc-C++/bigfib | 0.186 | 0.483 | 2.60× | 0.758 | 4.08× | ok |
| Misc-C++/oopack_v1p8 | 0.058 | 0.114 | 1.97× | 0.171 | 2.95× | ok |
| Misc-C++/stepanov_container | 0.205 | 0.488 | 2.38× | 0.723 | 3.53× | ok |
| Misc-C++/stepanov_v1p2 | 0.053 | 0.097 | 1.83× | 0.216 | 4.08× | ok |
| PAQ8p | 0.070 | 0.180 | 2.57× | 0.233 | 3.33× | ok |
| Prolangs-C++/life | 0.004 | 0.014 | — | 0.027 | — | ok |
| Prolangs-C++/ocean | 0.013 | 0.034 | 2.62× | 0.046 | 3.54× | ok |
| Prolangs-C++/primes | 0.009 | 0.024 | — | 0.039 | — | ok |
| Shootout-C++-EH/except | 0.122 | 0.271 | 2.22× | 0.420 | 3.44× | ok |
| Shootout-C++/ackermann | 0.110 | 0.268 | 2.44× | 0.427 | 3.88× | ok |
| Shootout-C++/ary3 | 0.124 | 0.332 | 2.68× | 0.385 | 3.10× | ok |
| Shootout-C++/fibo | 0.114 | 0.282 | 2.47× | 0.458 | 4.02× | ok |
| Shootout-C++/hash | 0.144 | 0.339 | 2.35× | 0.489 | 3.40× | ok |
| Shootout-C++/hash2 | 0.199 | 0.330 | 1.66× | 0.504 | 2.53× | ok |
| Shootout-C++/heapsort | 0.133 | 0.293 | 2.20× | 0.431 | 3.24× | ok |
| Shootout-C++/lists | 0.118 | 0.274 | 2.32× | 0.401 | 3.40× | ok |
| Shootout-C++/lists1 | 0.136 | 0.299 | 2.20× | 0.436 | 3.21× | ok |
| Shootout-C++/matrix | 0.116 | 0.243 | 2.09× | 0.343 | 2.96× | ok |
| Shootout-C++/methcall | 0.112 | 0.244 | 2.18× | 0.372 | 3.32× | ok |
| Shootout-C++/moments | 0.139 | 0.319 | 2.29× | 0.440 | 3.17× | ok |
| Shootout-C++/random | 0.131 | 0.277 | 2.11× | 0.423 | 3.23× | ok |
| Shootout-C++/sieve | 0.132 | 0.326 | 2.47× | 0.516 | 3.91× | ok |
| SmallPT | 0.049 | 0.089 | 1.82× | 0.150 | 3.06× | ok |
| Stanford/Bubblesort | 0.014 | 0.037 | 2.64× | 0.047 | 3.36× | ok |
| Stanford/FloatMM | 0.015 | 0.038 | 2.53× | 0.049 | 3.27× | ok |
| Stanford/Puzzle | 0.015 | 0.039 | 2.60× | 0.050 | 3.33× | ok |
| Stanford/Treesort | 0.015 | 0.038 | 2.53× | 0.049 | 3.27× | ok |
| bg/binarytrees/2 | 0.112 | 0.250 | 2.23× | 0.377 | 3.37× | ok |
| bg/fannkuchredux/3 | 0.053 | 0.097 | 1.83× | 0.142 | 2.68× | ok |
| bg/fasta/1 | 0.078 | 0.153 | 1.96× | 0.225 | 2.88× | ok |
| bg/fasta/2 | 0.078 | 0.158 | 2.03× | 0.275 | 3.53× | ok |
| bg/fasta/3 | 0.128 | 0.274 | 2.14× | 0.421 | 3.29× | ok |
| bg/fasta/4 | 0.129 | 0.308 | 2.39× | 0.359 | 2.78× | ok |
| bg/fasta/6 | 0.189 | 0.438 | 2.32× | 0.676 | 3.58× | ok |
| bg/mandelbrot/0 | 0.228 | 0.520 | 2.28× | 0.777 | 3.41× | ok |
| bg/mandelbrot/2 | 0.132 | 0.346 | 2.62× | 0.439 | 3.33× | ok |
| bg/mandelbrot/3 | 0.152 | 0.306 | 2.01× | 0.462 | 3.04× | ok |
| bg/mandelbrot/5 | 0.069 | 0.138 | 2.00× | 0.210 | 3.04× | ok |
| bg/mandelbrot/7 | 0.071 | 0.142 | 2.00× | 0.286 | 4.03× | ok |
| bg/mandelbrot/9 | 0.063 | 0.132 | 2.10× | 0.215 | 3.41× | ok |
| bg/nbody/1 | 0.050 | 0.095 | 1.90× | 0.131 | 2.62× | ok |
| bg/nbody/2 | 0.043 | 0.086 | 2.00× | 0.138 | 3.21× | ok |
| bg/nbody/3 | 0.044 | 0.083 | 1.89× | 0.130 | 2.95× | ok |
| bg/nbody/6 | 0.046 | 0.095 | 2.07× | 0.146 | 3.17× | ok |
| bg/pidigits/4 | 0.204 | 0.473 | 2.32× | 0.675 | 3.31× | ok |
| bg/pidigits/5 | 0.123 | 0.261 | 2.12× | 0.400 | 3.25× | ok |
| bg/revcomp/1 | 0.133 | 0.304 | 2.29× | 0.515 | 3.87× | ok |
| bg/revcomp/5 | 0.142 | 0.259 | 1.82× | 0.502 | 3.54× | ok |
| bg/spectralnorm/1 | 0.195 | 0.384 | 1.97× | 0.695 | 3.56× | ok |
| box2d | 2.427 | 5.052 | 2.08× | 10.101 | 4.16× | ok |
| fmt | 0.672 | 1.643 | 2.44× | 3.004 | 4.47× | ok |
| hexxagon | 0.447 | 1.046 | 2.34× | 1.518 | 3.40× | ok |
| lambda | 0.077 | 0.204 | 2.65× | 0.295 | 3.83× | ok |
| minisat | 0.094 | 0.225 | 2.39× | 0.328 | 3.49× | ok |
| nlohmann-json | 0.566 | 1.566 | 2.77× | 2.695 | 4.76× | ok |
| pugixml | 0.309 | 0.738 | 2.39× | 1.215 | 3.93× | ok |
| pugixml-tests | 5.464 | 12.529 | 2.29× | 20.049 | 3.67× | ok |
| rapidjson | 0.165 | 0.411 | 2.49× | 0.623 | 3.78× | ok |
| re2 | 4.948 | 11.273 | 2.28× | 10.892 | 2.20× | ok |
| re2-test-re2 | 7.966 | 16.508 | 2.07× | 26.133 | 3.28× | ok |
| re2-test-search | 7.093 | 16.292 | 2.30× | 25.865 | 3.65× | ok |
| tramp3d-v4 | 0.673 | 3.656 | 5.43× | 2.883 | 4.28× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
