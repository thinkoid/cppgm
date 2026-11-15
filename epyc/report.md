# Public benchmarks: AMD EPYC

Measured compiler: [`b8749c615`](https://github.com/vishvananda/cppgm/commit/b8749c61550bdf9b4d65e7e01182a1f856100a46) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43712368937) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: AMD EPYC 7763 64-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.25× | 79 | 3.31× | 79 |
| Compile CPU, `-O0` | 2.96× | 79 | 3.49× | 79 |
| Compile CPU, `-O3` | 4.14× | 81 | 4.17× | 81 |
| Compile peak RSS, `-O0` | 1.48× | 81 | 2.35× | 81 |
| Compile peak RSS, `-O3` | 1.74× | 81 | 2.45× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.19× | 81 | 1.23× | 81 |
| Run CPU, `-O3` | 1.02× | 81 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.924 to 1.085; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.109 | 0.404 | 3.71× | 0.463 | 4.25× | ok |
| Adobe-C++/loop_unroll | 0.088 | 0.819 | 9.31× | 0.367 | 4.17× | ok |
| Adobe-C++/simple_types_constant_folding | 0.094 | 0.940 | 10.00× | 0.452 | 4.81× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.082 | 0.681 | 8.30× | 0.351 | 4.28× | ok |
| Adobe-C++/stepanov_abstraction | 0.071 | 0.276 | 3.89× | 0.207 | 2.92× | ok |
| Adobe-C++/stepanov_vector | 0.126 | 0.427 | 3.39× | 0.445 | 3.53× | ok |
| Bullet | 8.650 | 27.306 | 3.16× | 30.809 | 3.56× | ok |
| CLAMR | 4.268 | 13.690 | 3.21× | 13.264 | 3.11× | ok |
| CoyoteBench/almabench | 0.044 | 0.141 | 3.20× | 0.136 | 3.09× | ok |
| CoyoteBench/fftbench | 0.175 | 0.449 | 2.57× | 0.753 | 4.30× | ok |
| CoyoteBench/huffbench | 0.045 | 0.104 | 2.31× | 0.135 | 3.00× | ok |
| CoyoteBench/lpbench | 0.056 | 0.130 | 2.32× | 0.199 | 3.55× | ok |
| DOE/HACCKernels | 0.164 | 0.511 | 3.12× | 0.590 | 3.60× | ok |
| DOE/HPCCG | 1.239 | 2.438 | 1.97× | 3.384 | 2.73× | ok |
| DOE/PENNANT | 2.261 | 5.604 | 2.48× | 7.367 | 3.26× | ok |
| DOE/miniFE | 0.928 | 2.867 | 3.09× | 3.982 | 4.29× | ok |
| Misc-C++-EH/spirit | 0.720 | 3.753 | 5.21× | 3.780 | 5.25× | ok |
| Misc-C++-Large/ray | 0.184 | 0.476 | 2.59× | 0.697 | 3.79× | ok |
| Misc-C++-Large/sphereflake | 0.145 | 0.397 | 2.74× | 0.608 | 4.19× | ok |
| Misc-C++/bigfib | 0.206 | 0.678 | 3.29× | 0.847 | 4.11× | ok |
| Misc-C++/oopack_v1p8 | 0.052 | 0.143 | 2.75× | 0.198 | 3.81× | ok |
| Misc-C++/stepanov_container | 0.259 | 0.792 | 3.06× | 1.010 | 3.90× | ok |
| Misc-C++/stepanov_v1p2 | 0.064 | 0.184 | 2.88× | 0.167 | 2.61× | ok |
| PAQ8p | 0.111 | 0.682 | 6.14× | 0.363 | 3.27× | ok |
| Prolangs-C++/life | 0.005 | 0.042 | — | 0.037 | — | ok |
| Prolangs-C++/ocean | 0.016 | 0.087 | 5.44× | 0.068 | 4.25× | ok |
| Prolangs-C++/primes | 0.008 | 0.034 | — | 0.036 | — | ok |
| Shootout-C++-EH/except | 0.118 | 0.241 | 2.04× | 0.379 | 3.21× | ok |
| Shootout-C++/ackermann | 0.122 | 0.237 | 1.94× | 0.366 | 3.00× | ok |
| Shootout-C++/ary3 | 0.138 | 0.295 | 2.14× | 0.430 | 3.12× | ok |
| Shootout-C++/fibo | 0.109 | 0.233 | 2.14× | 0.355 | 3.26× | ok |
| Shootout-C++/hash | 0.154 | 0.431 | 2.80× | 0.509 | 3.31× | ok |
| Shootout-C++/hash2 | 0.194 | 0.438 | 2.26× | 0.550 | 2.84× | ok |
| Shootout-C++/heapsort | 0.134 | 0.274 | 2.04× | 0.416 | 3.10× | ok |
| Shootout-C++/lists | 0.165 | 0.311 | 1.88× | 0.430 | 2.61× | ok |
| Shootout-C++/lists1 | 0.139 | 0.334 | 2.40× | 0.524 | 3.77× | ok |
| Shootout-C++/matrix | 0.108 | 0.235 | 2.18× | 0.363 | 3.36× | ok |
| Shootout-C++/methcall | 0.104 | 0.231 | 2.22× | 0.345 | 3.32× | ok |
| Shootout-C++/moments | 0.153 | 0.382 | 2.50× | 0.478 | 3.12× | ok |
| Shootout-C++/random | 0.133 | 0.277 | 2.08× | 0.573 | 4.31× | ok |
| Shootout-C++/sieve | 0.136 | 0.347 | 2.55× | 0.459 | 3.38× | ok |
| SmallPT | 0.048 | 0.129 | 2.69× | 0.141 | 2.94× | ok |
| Stanford/Bubblesort | 0.014 | 0.040 | 2.86× | 0.047 | 3.36× | ok |
| Stanford/FloatMM | 0.014 | 0.041 | 2.93× | 0.048 | 3.43× | ok |
| Stanford/Puzzle | 0.015 | 0.052 | 3.47× | 0.054 | 3.60× | ok |
| Stanford/Treesort | 0.014 | 0.043 | 3.07× | 0.049 | 3.50× | ok |
| bg/binarytrees/2 | 0.108 | 0.245 | 2.27× | 0.361 | 3.34× | ok |
| bg/fannkuchredux/3 | 0.053 | 0.112 | 2.11× | 0.150 | 2.83× | ok |
| bg/fasta/1 | 0.079 | 0.191 | 2.42× | 0.254 | 3.22× | ok |
| bg/fasta/2 | 0.081 | 0.189 | 2.33× | 0.230 | 2.84× | ok |
| bg/fasta/3 | 0.124 | 0.277 | 2.23× | 0.418 | 3.37× | ok |
| bg/fasta/4 | 0.138 | 0.232 | 1.68× | 0.321 | 2.33× | ok |
| bg/fasta/6 | 0.218 | 0.586 | 2.69× | 0.808 | 3.71× | ok |
| bg/mandelbrot/0 | 0.227 | 0.656 | 2.89× | 0.751 | 3.31× | ok |
| bg/mandelbrot/2 | 0.136 | 0.315 | 2.32× | 0.469 | 3.45× | ok |
| bg/mandelbrot/3 | 0.142 | 0.351 | 2.47× | 0.491 | 3.46× | ok |
| bg/mandelbrot/5 | 0.072 | 0.165 | 2.29× | 0.209 | 2.90× | ok |
| bg/mandelbrot/7 | 0.074 | 0.185 | 2.50× | 0.224 | 3.03× | ok |
| bg/mandelbrot/9 | 0.073 | 0.167 | 2.29× | 0.213 | 2.92× | ok |
| bg/nbody/1 | 0.045 | 0.148 | 3.29× | 0.154 | 3.42× | ok |
| bg/nbody/2 | 0.042 | 0.102 | 2.43× | 0.138 | 3.29× | ok |
| bg/nbody/3 | 0.047 | 0.100 | 2.13× | 0.149 | 3.17× | ok |
| bg/nbody/6 | 0.045 | 0.148 | 3.29× | 0.160 | 3.56× | ok |
| bg/pidigits/4 | 0.168 | 0.430 | 2.56× | 0.651 | 3.88× | ok |
| bg/pidigits/5 | 0.142 | 0.279 | 1.96× | 0.479 | 3.37× | ok |
| bg/revcomp/1 | 0.128 | 0.343 | 2.68× | 0.438 | 3.42× | ok |
| bg/revcomp/5 | 0.133 | 0.329 | 2.47× | 0.538 | 4.05× | ok |
| bg/spectralnorm/1 | 0.196 | 0.405 | 2.07× | 0.784 | 4.00× | ok |
| box2d | 2.272 | 6.483 | 2.85× | 9.035 | 3.98× | ok |
| fmt | 0.746 | 3.739 | 5.01× | 3.706 | 4.97× | ok |
| hexxagon | 0.433 | 1.051 | 2.43× | 1.281 | 2.96× | ok |
| lambda | 0.089 | 0.473 | 5.31× | 0.374 | 4.20× | ok |
| minisat | 0.101 | 0.398 | 3.94× | 0.397 | 3.93× | ok |
| nlohmann-json | 0.692 | 2.444 | 3.53× | 2.742 | 3.96× | ok |
| pugixml | 0.395 | 2.038 | 5.16× | 1.694 | 4.29× | ok |
| pugixml-tests | 5.897 | 24.098 | 4.09× | 24.067 | 4.08× | ok |
| rapidjson | 0.220 | 0.679 | 3.09× | 0.739 | 3.36× | ok |
| re2 | 5.362 | 16.491 | 3.08× | 12.124 | 2.26× | ok |
| re2-test-re2 | 7.659 | 23.628 | 3.08× | 29.690 | 3.88× | ok |
| re2-test-search | 7.523 | 22.091 | 2.94× | 28.256 | 3.76× | ok |
| tramp3d-v4 | 1.022 | 12.481 | 12.21× | 4.669 | 4.57× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.173 | 1.287 | 7.44× | 0.987 | 5.71× | ok |
| Adobe-C++/loop_unroll | 0.675 | 7.869 | 11.66× | 7.350 | 10.89× | ok |
| Adobe-C++/simple_types_constant_folding | 0.367 | 4.022 | 10.96× | 3.406 | 9.28× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.278 | 3.128 | 11.25× | 2.730 | 9.82× | ok |
| Adobe-C++/stepanov_abstraction | 0.141 | 1.526 | 10.82× | 0.809 | 5.74× | ok |
| Adobe-C++/stepanov_vector | 0.169 | 1.816 | 10.75× | 0.909 | 5.38× | ok |
| Bullet | 10.281 | 55.040 | 5.35× | 43.085 | 4.19× | ok |
| CLAMR | 7.088 | 34.855 | 4.92× | 29.665 | 4.19× | ok |
| CoyoteBench/almabench | 0.049 | 0.226 | 4.61× | 0.193 | 3.94× | ok |
| CoyoteBench/fftbench | 0.246 | 0.705 | 2.87× | 0.968 | 3.93× | ok |
| CoyoteBench/huffbench | 0.068 | 0.296 | 4.35× | 0.214 | 3.15× | ok |
| CoyoteBench/lpbench | 0.069 | 0.267 | 3.87× | 0.383 | 5.55× | ok |
| DOE/HACCKernels | 0.180 | 0.574 | 3.19× | 0.691 | 3.84× | ok |
| DOE/HPCCG | 1.341 | 3.321 | 2.48× | 3.826 | 2.85× | ok |
| DOE/PENNANT | 2.666 | 8.700 | 3.26× | 9.901 | 3.71× | ok |
| DOE/miniFE | 1.362 | 5.728 | 4.21× | 6.298 | 4.62× | ok |
| Misc-C++-EH/spirit | 0.942 | 5.527 | 5.87× | 5.955 | 6.32× | ok |
| Misc-C++-Large/ray | 0.193 | 0.810 | 4.20× | 0.775 | 4.02× | ok |
| Misc-C++-Large/sphereflake | 0.180 | 1.196 | 6.64× | 0.789 | 4.38× | ok |
| Misc-C++/bigfib | 0.256 | 0.971 | 3.79× | 1.055 | 4.12× | ok |
| Misc-C++/oopack_v1p8 | 0.062 | 0.263 | 4.24× | 0.276 | 4.45× | ok |
| Misc-C++/stepanov_container | 0.386 | 1.135 | 2.94× | 1.694 | 4.39× | ok |
| Misc-C++/stepanov_v1p2 | 0.061 | 0.303 | 4.97× | 0.288 | 4.72× | ok |
| PAQ8p | 0.445 | 5.470 | 12.29× | 2.350 | 5.28× | ok |
| Prolangs-C++/life | 0.012 | 0.131 | 10.92× | 0.087 | 7.25× | ok |
| Prolangs-C++/ocean | 0.029 | 0.266 | 9.17× | 0.159 | 5.48× | ok |
| Prolangs-C++/primes | 0.010 | 0.048 | 4.80× | 0.049 | 4.90× | ok |
| Shootout-C++-EH/except | 0.144 | 0.303 | 2.10× | 0.394 | 2.74× | ok |
| Shootout-C++/ackermann | 0.112 | 0.290 | 2.59× | 0.374 | 3.34× | ok |
| Shootout-C++/ary3 | 0.140 | 0.398 | 2.84× | 0.475 | 3.39× | ok |
| Shootout-C++/fibo | 0.111 | 0.293 | 2.64× | 0.381 | 3.43× | ok |
| Shootout-C++/hash | 0.173 | 0.514 | 2.97× | 0.650 | 3.76× | ok |
| Shootout-C++/hash2 | 0.191 | 0.770 | 4.03× | 0.730 | 3.82× | ok |
| Shootout-C++/heapsort | 0.134 | 0.323 | 2.41× | 0.428 | 3.19× | ok |
| Shootout-C++/lists | 0.135 | 0.369 | 2.73× | 0.530 | 3.93× | ok |
| Shootout-C++/lists1 | 0.152 | 0.390 | 2.57× | 0.509 | 3.35× | ok |
| Shootout-C++/matrix | 0.115 | 0.307 | 2.67× | 0.491 | 4.27× | ok |
| Shootout-C++/methcall | 0.108 | 0.275 | 2.55× | 0.371 | 3.44× | ok |
| Shootout-C++/moments | 0.196 | 0.469 | 2.39× | 0.564 | 2.88× | ok |
| Shootout-C++/random | 0.135 | 0.315 | 2.33× | 0.457 | 3.39× | ok |
| Shootout-C++/sieve | 0.144 | 0.491 | 3.41× | 0.488 | 3.39× | ok |
| SmallPT | 0.061 | 0.421 | 6.90× | 0.343 | 5.62× | ok |
| Stanford/Bubblesort | 0.017 | 0.078 | 4.59× | 0.071 | 4.18× | ok |
| Stanford/FloatMM | 0.018 | 0.088 | 4.89× | 0.099 | 5.50× | ok |
| Stanford/Puzzle | 0.028 | 0.176 | 6.29× | 0.173 | 6.18× | ok |
| Stanford/Treesort | 0.021 | 0.120 | 5.71× | 0.077 | 3.67× | ok |
| bg/binarytrees/2 | 0.113 | 0.598 | 5.29× | 0.376 | 3.33× | ok |
| bg/fannkuchredux/3 | 0.059 | 0.175 | 2.97× | 0.191 | 3.24× | ok |
| bg/fasta/1 | 0.089 | 0.241 | 2.71× | 0.311 | 3.49× | ok |
| bg/fasta/2 | 0.088 | 0.241 | 2.74× | 0.312 | 3.55× | ok |
| bg/fasta/3 | 0.130 | 0.326 | 2.51× | 0.538 | 4.14× | ok |
| bg/fasta/4 | 0.118 | 0.277 | 2.35× | 0.372 | 3.15× | ok |
| bg/fasta/6 | 0.221 | 0.693 | 3.14× | 1.029 | 4.66× | ok |
| bg/mandelbrot/0 | 0.259 | 1.194 | 4.61× | 1.018 | 3.93× | ok |
| bg/mandelbrot/2 | 0.177 | 0.391 | 2.21× | 0.538 | 3.04× | ok |
| bg/mandelbrot/3 | 0.144 | 0.388 | 2.69× | 0.575 | 3.99× | ok |
| bg/mandelbrot/5 | 0.082 | 0.219 | 2.67× | 0.246 | 3.00× | ok |
| bg/mandelbrot/7 | 0.084 | 0.283 | 3.37× | 0.282 | 3.36× | ok |
| bg/mandelbrot/9 | 0.086 | 0.334 | 3.88× | 0.263 | 3.06× | ok |
| bg/nbody/1 | 0.060 | 0.224 | 3.73× | 0.263 | 4.38× | ok |
| bg/nbody/2 | 0.048 | 0.185 | 3.85× | 0.182 | 3.79× | ok |
| bg/nbody/3 | 0.052 | 0.176 | 3.38× | 0.191 | 3.67× | ok |
| bg/nbody/6 | 0.061 | 0.235 | 3.85× | 0.270 | 4.43× | ok |
| bg/pidigits/4 | 0.230 | 0.475 | 2.07× | 0.844 | 3.67× | ok |
| bg/pidigits/5 | 0.125 | 0.325 | 2.60× | 0.432 | 3.46× | ok |
| bg/revcomp/1 | 0.183 | 0.375 | 2.05× | 0.521 | 2.85× | ok |
| bg/revcomp/5 | 0.143 | 0.434 | 3.03× | 0.516 | 3.61× | ok |
| bg/spectralnorm/1 | 0.202 | 0.502 | 2.49× | 0.861 | 4.26× | ok |
| box2d | 3.144 | 10.620 | 3.38× | 10.402 | 3.31× | ok |
| fmt | 1.458 | 8.030 | 5.51× | 6.770 | 4.64× | ok |
| hexxagon | 0.422 | 1.673 | 3.96× | 1.644 | 3.90× | ok |
| lambda | 0.179 | 1.681 | 9.39× | 0.756 | 4.22× | ok |
| minisat | 0.212 | 1.305 | 6.16× | 1.103 | 5.20× | ok |
| nlohmann-json | 1.197 | 4.310 | 3.60× | 5.206 | 4.35× | ok |
| pugixml | 0.959 | 8.016 | 8.36× | 6.010 | 6.27× | ok |
| pugixml-tests | 8.553 | 53.864 | 6.30× | 40.611 | 4.75× | ok |
| rapidjson | 0.364 | 2.005 | 5.51× | 1.191 | 3.27× | ok |
| re2 | 4.918 | 26.182 | 5.32× | 16.621 | 3.38× | ok |
| re2-test-re2 | 9.576 | 40.999 | 4.28× | 38.825 | 4.05× | ok |
| re2-test-search | 10.032 | 37.199 | 3.71× | 35.061 | 3.49× | ok |
| tramp3d-v4 | 3.281 | 23.049 | 7.02× | 20.230 | 6.17× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.099 | 0.227 | 2.29× | 0.402 | 4.06× | ok |
| Adobe-C++/loop_unroll | 0.059 | 0.169 | 2.86× | 0.211 | 3.58× | ok |
| Adobe-C++/simple_types_constant_folding | 0.062 | 0.182 | 2.94× | 0.226 | 3.65× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.060 | 0.165 | 2.75× | 0.199 | 3.32× | ok |
| Adobe-C++/stepanov_abstraction | 0.054 | 0.116 | 2.15× | 0.157 | 2.91× | ok |
| Adobe-C++/stepanov_vector | 0.093 | 0.202 | 2.17× | 0.380 | 4.09× | ok |
| Bullet | 6.823 | 17.888 | 2.62× | 25.328 | 3.71× | ok |
| CLAMR | 3.730 | 8.519 | 2.28× | 10.979 | 2.94× | ok |
| CoyoteBench/almabench | 0.043 | 0.122 | 2.84× | 0.129 | 3.00× | ok |
| CoyoteBench/fftbench | 0.173 | 0.409 | 2.36× | 0.716 | 4.14× | ok |
| CoyoteBench/huffbench | 0.045 | 0.089 | 1.98× | 0.129 | 2.87× | ok |
| CoyoteBench/lpbench | 0.051 | 0.121 | 2.37× | 0.185 | 3.63× | ok |
| DOE/HACCKernels | 0.161 | 0.460 | 2.86× | 0.556 | 3.45× | ok |
| DOE/HPCCG | 1.232 | 2.148 | 1.74× | 3.173 | 2.58× | ok |
| DOE/PENNANT | 2.122 | 4.355 | 2.05× | 6.450 | 3.04× | ok |
| DOE/miniFE | 0.857 | 1.935 | 2.26× | 3.446 | 4.02× | ok |
| Misc-C++-EH/spirit | 0.489 | 1.370 | 2.80× | 2.265 | 4.63× | ok |
| Misc-C++-Large/ray | 0.182 | 0.389 | 2.14× | 0.697 | 3.83× | ok |
| Misc-C++-Large/sphereflake | 0.147 | 0.337 | 2.29× | 0.564 | 3.84× | ok |
| Misc-C++/bigfib | 0.184 | 0.455 | 2.47× | 0.729 | 3.96× | ok |
| Misc-C++/oopack_v1p8 | 0.050 | 0.111 | 2.22× | 0.181 | 3.62× | ok |
| Misc-C++/stepanov_container | 0.243 | 0.483 | 1.99× | 0.881 | 3.63× | ok |
| Misc-C++/stepanov_v1p2 | 0.060 | 0.106 | 1.77× | 0.140 | 2.33× | ok |
| PAQ8p | 0.087 | 0.200 | 2.30× | 0.216 | 2.48× | ok |
| Prolangs-C++/life | 0.004 | 0.013 | — | 0.027 | — | ok |
| Prolangs-C++/ocean | 0.013 | 0.033 | 2.54× | 0.045 | 3.46× | ok |
| Prolangs-C++/primes | 0.008 | 0.024 | — | 0.033 | — | ok |
| Shootout-C++-EH/except | 0.116 | 0.242 | 2.09× | 0.355 | 3.06× | ok |
| Shootout-C++/ackermann | 0.121 | 0.242 | 2.00× | 0.352 | 2.91× | ok |
| Shootout-C++/ary3 | 0.138 | 0.273 | 1.98× | 0.446 | 3.23× | ok |
| Shootout-C++/fibo | 0.108 | 0.237 | 2.19× | 0.348 | 3.22× | ok |
| Shootout-C++/hash | 0.145 | 0.337 | 2.32× | 0.457 | 3.15× | ok |
| Shootout-C++/hash2 | 0.200 | 0.336 | 1.68× | 0.479 | 2.39× | ok |
| Shootout-C++/heapsort | 0.140 | 0.276 | 1.97× | 0.396 | 2.83× | ok |
| Shootout-C++/lists | 0.152 | 0.263 | 1.73× | 0.398 | 2.62× | ok |
| Shootout-C++/lists1 | 0.135 | 0.283 | 2.10× | 0.433 | 3.21× | ok |
| Shootout-C++/matrix | 0.107 | 0.235 | 2.20× | 0.349 | 3.26× | ok |
| Shootout-C++/methcall | 0.104 | 0.231 | 2.22× | 0.327 | 3.14× | ok |
| Shootout-C++/moments | 0.148 | 0.307 | 2.07× | 0.429 | 2.90× | ok |
| Shootout-C++/random | 0.133 | 0.281 | 2.11× | 0.422 | 3.17× | ok |
| Shootout-C++/sieve | 0.130 | 0.291 | 2.24× | 0.433 | 3.33× | ok |
| SmallPT | 0.046 | 0.086 | 1.87× | 0.130 | 2.83× | ok |
| Stanford/Bubblesort | 0.014 | 0.037 | 2.64× | 0.047 | 3.36× | ok |
| Stanford/FloatMM | 0.014 | 0.036 | 2.57× | 0.046 | 3.29× | ok |
| Stanford/Puzzle | 0.015 | 0.038 | 2.53× | 0.048 | 3.20× | ok |
| Stanford/Treesort | 0.015 | 0.037 | 2.47× | 0.048 | 3.20× | ok |
| bg/binarytrees/2 | 0.106 | 0.242 | 2.28× | 0.350 | 3.30× | ok |
| bg/fannkuchredux/3 | 0.052 | 0.101 | 1.94× | 0.142 | 2.73× | ok |
| bg/fasta/1 | 0.076 | 0.155 | 2.04× | 0.234 | 3.08× | ok |
| bg/fasta/2 | 0.080 | 0.154 | 1.92× | 0.218 | 2.72× | ok |
| bg/fasta/3 | 0.122 | 0.263 | 2.16× | 0.386 | 3.16× | ok |
| bg/fasta/4 | 0.124 | 0.228 | 1.84× | 0.327 | 2.64× | ok |
| bg/fasta/6 | 0.197 | 0.415 | 2.11× | 0.861 | 4.37× | ok |
| bg/mandelbrot/0 | 0.206 | 0.457 | 2.22× | 0.681 | 3.31× | ok |
| bg/mandelbrot/2 | 0.132 | 0.288 | 2.18× | 0.429 | 3.25× | ok |
| bg/mandelbrot/3 | 0.140 | 0.348 | 2.49× | 0.483 | 3.45× | ok |
| bg/mandelbrot/5 | 0.068 | 0.139 | 2.04× | 0.193 | 2.84× | ok |
| bg/mandelbrot/7 | 0.073 | 0.140 | 1.92× | 0.201 | 2.75× | ok |
| bg/mandelbrot/9 | 0.069 | 0.123 | 1.78× | 0.192 | 2.78× | ok |
| bg/nbody/1 | 0.043 | 0.091 | 2.12× | 0.129 | 3.00× | ok |
| bg/nbody/2 | 0.042 | 0.088 | 2.10× | 0.132 | 3.14× | ok |
| bg/nbody/3 | 0.046 | 0.083 | 1.80× | 0.143 | 3.11× | ok |
| bg/nbody/6 | 0.044 | 0.090 | 2.05× | 0.138 | 3.14× | ok |
| bg/pidigits/4 | 0.166 | 0.392 | 2.36× | 0.678 | 4.08× | ok |
| bg/pidigits/5 | 0.144 | 0.272 | 1.89× | 0.449 | 3.12× | ok |
| bg/revcomp/1 | 0.121 | 0.307 | 2.54× | 0.400 | 3.31× | ok |
| bg/revcomp/5 | 0.125 | 0.268 | 2.14× | 0.498 | 3.98× | ok |
| bg/spectralnorm/1 | 0.191 | 0.368 | 1.93× | 0.743 | 3.89× | ok |
| box2d | 2.383 | 4.944 | 2.07× | 9.462 | 3.97× | ok |
| fmt | 0.683 | 1.535 | 2.25× | 3.062 | 4.48× | ok |
| hexxagon | 0.424 | 0.992 | 2.34× | 1.226 | 2.89× | ok |
| lambda | 0.071 | 0.217 | 3.06× | 0.278 | 3.92× | ok |
| minisat | 0.092 | 0.189 | 2.05× | 0.321 | 3.49× | ok |
| nlohmann-json | 0.457 | 1.287 | 2.82× | 2.410 | 5.27× | ok |
| pugixml | 0.311 | 0.870 | 2.80× | 1.251 | 4.02× | ok |
| pugixml-tests | 5.074 | 12.994 | 2.56× | 18.873 | 3.72× | ok |
| rapidjson | 0.151 | 0.396 | 2.62× | 0.568 | 3.76× | ok |
| re2 | 4.828 | 11.271 | 2.33× | 10.571 | 2.19× | ok |
| re2-test-re2 | 6.799 | 16.735 | 2.46× | 25.377 | 3.73× | ok |
| re2-test-search | 7.615 | 16.148 | 2.12× | 25.363 | 3.33× | ok |
| tramp3d-v4 | 0.634 | 3.617 | 5.71× | 2.747 | 4.33× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
