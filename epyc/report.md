# Public benchmarks: AMD EPYC

Measured compiler: [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43778388609) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: AMD EPYC 7763 64-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.23× | 79 | 3.35× | 79 |
| Compile CPU, `-O0` | 2.96× | 79 | 3.61× | 79 |
| Compile CPU, `-O3` | 4.20× | 81 | 4.29× | 81 |
| Compile peak RSS, `-O0` | 1.46× | 81 | 2.22× | 81 |
| Compile peak RSS, `-O3` | 1.73× | 81 | 2.33× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.20× | 81 | 1.23× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.980 to 1.048; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.112 | 0.414 | 3.70× | 0.469 | 4.19× | ok |
| Adobe-C++/loop_unroll | 0.093 | 0.837 | 9.00× | 0.371 | 3.99× | ok |
| Adobe-C++/simple_types_constant_folding | 0.099 | 0.945 | 9.55× | 0.459 | 4.64× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.084 | 0.721 | 8.58× | 0.363 | 4.32× | ok |
| Adobe-C++/stepanov_abstraction | 0.064 | 0.279 | 4.36× | 0.216 | 3.38× | ok |
| Adobe-C++/stepanov_vector | 0.135 | 0.423 | 3.13× | 0.510 | 3.78× | ok |
| Bullet | 8.084 | 27.924 | 3.45× | 31.929 | 3.95× | ok |
| CLAMR | 3.749 | 13.766 | 3.67× | 14.952 | 3.99× | ok |
| CoyoteBench/almabench | 0.053 | 0.129 | 2.43× | 0.142 | 2.68× | ok |
| CoyoteBench/fftbench | 0.181 | 0.424 | 2.34× | 0.588 | 3.25× | ok |
| CoyoteBench/huffbench | 0.049 | 0.109 | 2.22× | 0.139 | 2.84× | ok |
| CoyoteBench/lpbench | 0.063 | 0.145 | 2.30× | 0.216 | 3.43× | ok |
| DOE/HACCKernels | 0.184 | 0.533 | 2.90× | 0.627 | 3.41× | ok |
| DOE/HPCCG | 1.342 | 2.625 | 1.96× | 4.798 | 3.58× | ok |
| DOE/PENNANT | 2.262 | 5.927 | 2.62× | 8.902 | 3.94× | ok |
| DOE/miniFE | 1.000 | 3.004 | 3.00× | 3.937 | 3.94× | ok |
| Misc-C++-EH/spirit | 0.749 | 3.769 | 5.03× | 2.983 | 3.98× | ok |
| Misc-C++-Large/ray | 0.183 | 0.406 | 2.22× | 0.770 | 4.21× | ok |
| Misc-C++-Large/sphereflake | 0.190 | 0.407 | 2.14× | 0.540 | 2.84× | ok |
| Misc-C++/bigfib | 0.228 | 0.564 | 2.47× | 0.880 | 3.86× | ok |
| Misc-C++/oopack_v1p8 | 0.052 | 0.170 | 3.27× | 0.155 | 2.98× | ok |
| Misc-C++/stepanov_container | 0.299 | 0.788 | 2.64× | 1.180 | 3.95× | ok |
| Misc-C++/stepanov_v1p2 | 0.050 | 0.180 | 3.60× | 0.159 | 3.18× | ok |
| PAQ8p | 0.117 | 0.695 | 5.94× | 0.434 | 3.71× | ok |
| Prolangs-C++/life | 0.006 | 0.045 | — | 0.039 | — | ok |
| Prolangs-C++/ocean | 0.017 | 0.093 | 5.47× | 0.074 | 4.35× | ok |
| Prolangs-C++/primes | 0.008 | 0.033 | — | 0.039 | — | ok |
| Shootout-C++-EH/except | 0.119 | 0.258 | 2.17× | 0.511 | 4.29× | ok |
| Shootout-C++/ackermann | 0.111 | 0.302 | 2.72× | 0.363 | 3.27× | ok |
| Shootout-C++/ary3 | 0.123 | 0.288 | 2.34× | 0.421 | 3.42× | ok |
| Shootout-C++/fibo | 0.111 | 0.229 | 2.06× | 0.344 | 3.10× | ok |
| Shootout-C++/hash | 0.156 | 0.414 | 2.65× | 0.629 | 4.03× | ok |
| Shootout-C++/hash2 | 0.158 | 0.428 | 2.71× | 0.541 | 3.42× | ok |
| Shootout-C++/heapsort | 0.135 | 0.290 | 2.15× | 0.438 | 3.24× | ok |
| Shootout-C++/lists | 0.121 | 0.304 | 2.51× | 0.411 | 3.40× | ok |
| Shootout-C++/lists1 | 0.136 | 0.333 | 2.45× | 0.449 | 3.30× | ok |
| Shootout-C++/matrix | 0.114 | 0.232 | 2.04× | 0.378 | 3.32× | ok |
| Shootout-C++/methcall | 0.110 | 0.248 | 2.25× | 0.353 | 3.21× | ok |
| Shootout-C++/moments | 0.143 | 0.374 | 2.62× | 0.469 | 3.28× | ok |
| Shootout-C++/random | 0.132 | 0.259 | 1.96× | 0.425 | 3.22× | ok |
| Shootout-C++/sieve | 0.144 | 0.379 | 2.63× | 0.553 | 3.84× | ok |
| SmallPT | 0.044 | 0.123 | 2.80× | 0.142 | 3.23× | ok |
| Stanford/Bubblesort | 0.014 | 0.041 | 2.93× | 0.046 | 3.29× | ok |
| Stanford/FloatMM | 0.014 | 0.041 | 2.93× | 0.047 | 3.36× | ok |
| Stanford/Puzzle | 0.016 | 0.051 | 3.19× | 0.053 | 3.31× | ok |
| Stanford/Treesort | 0.015 | 0.044 | 2.93× | 0.050 | 3.33× | ok |
| bg/binarytrees/2 | 0.113 | 0.248 | 2.19× | 0.375 | 3.32× | ok |
| bg/fannkuchredux/3 | 0.057 | 0.116 | 2.04× | 0.177 | 3.11× | ok |
| bg/fasta/1 | 0.080 | 0.185 | 2.31× | 0.238 | 2.97× | ok |
| bg/fasta/2 | 0.083 | 0.191 | 2.30× | 0.245 | 2.95× | ok |
| bg/fasta/3 | 0.125 | 0.285 | 2.28× | 0.438 | 3.50× | ok |
| bg/fasta/4 | 0.119 | 0.239 | 2.01× | 0.336 | 2.82× | ok |
| bg/fasta/6 | 0.217 | 0.583 | 2.69× | 0.756 | 3.48× | ok |
| bg/mandelbrot/0 | 0.232 | 0.664 | 2.86× | 0.898 | 3.87× | ok |
| bg/mandelbrot/2 | 0.158 | 0.359 | 2.27× | 0.457 | 2.89× | ok |
| bg/mandelbrot/3 | 0.146 | 0.321 | 2.20× | 0.520 | 3.56× | ok |
| bg/mandelbrot/5 | 0.071 | 0.164 | 2.31× | 0.221 | 3.11× | ok |
| bg/mandelbrot/7 | 0.071 | 0.179 | 2.52× | 0.235 | 3.31× | ok |
| bg/mandelbrot/9 | 0.076 | 0.174 | 2.29× | 0.244 | 3.21× | ok |
| bg/nbody/1 | 0.048 | 0.148 | 3.08× | 0.232 | 4.83× | ok |
| bg/nbody/2 | 0.042 | 0.099 | 2.36× | 0.198 | 4.71× | ok |
| bg/nbody/3 | 0.047 | 0.117 | 2.49× | 0.172 | 3.66× | ok |
| bg/nbody/6 | 0.053 | 0.143 | 2.70× | 0.167 | 3.15× | ok |
| bg/pidigits/4 | 0.181 | 0.463 | 2.56× | 0.834 | 4.61× | ok |
| bg/pidigits/5 | 0.126 | 0.285 | 2.26× | 0.483 | 3.83× | ok |
| bg/revcomp/1 | 0.128 | 0.329 | 2.57× | 0.458 | 3.58× | ok |
| bg/revcomp/5 | 0.146 | 0.310 | 2.12× | 0.550 | 3.77× | ok |
| bg/spectralnorm/1 | 0.201 | 0.406 | 2.02× | 0.715 | 3.56× | ok |
| box2d | 2.348 | 7.182 | 3.06× | 10.503 | 4.47× | ok |
| fmt | 0.772 | 3.664 | 4.75× | 3.830 | 4.96× | ok |
| hexxagon | 0.456 | 1.045 | 2.29× | 1.649 | 3.62× | ok |
| lambda | 0.078 | 0.433 | 5.55× | 0.398 | 5.10× | ok |
| minisat | 0.099 | 0.456 | 4.61× | 0.434 | 4.38× | ok |
| nlohmann-json | 0.570 | 2.585 | 4.54× | 2.805 | 4.92× | ok |
| pugixml | 0.467 | 2.047 | 4.38× | 2.008 | 4.30× | ok |
| pugixml-tests | 6.098 | 23.613 | 3.87× | 22.439 | 3.68× | ok |
| rapidjson | 0.183 | 0.682 | 3.73× | 0.786 | 4.30× | ok |
| re2 | 5.587 | 16.466 | 2.95× | 12.324 | 2.21× | ok |
| re2-test-re2 | 7.817 | 24.194 | 3.10× | 30.195 | 3.86× | ok |
| re2-test-search | 7.688 | 22.280 | 2.90× | 28.505 | 3.71× | ok |
| tramp3d-v4 | 1.036 | 12.648 | 12.21× | 4.689 | 4.53× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.180 | 1.337 | 7.43× | 0.832 | 4.62× | ok |
| Adobe-C++/loop_unroll | 0.625 | 8.355 | 13.37× | 6.707 | 10.73× | ok |
| Adobe-C++/simple_types_constant_folding | 0.376 | 4.221 | 11.23× | 3.378 | 8.98× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.288 | 3.310 | 11.49× | 3.225 | 11.20× | ok |
| Adobe-C++/stepanov_abstraction | 0.144 | 1.479 | 10.27× | 0.823 | 5.72× | ok |
| Adobe-C++/stepanov_vector | 0.193 | 2.261 | 11.72× | 1.083 | 5.61× | ok |
| Bullet | 9.673 | 56.694 | 5.86× | 50.270 | 5.20× | ok |
| CLAMR | 6.320 | 36.723 | 5.81× | 29.892 | 4.73× | ok |
| CoyoteBench/almabench | 0.052 | 0.289 | 5.56× | 0.205 | 3.94× | ok |
| CoyoteBench/fftbench | 0.202 | 0.667 | 3.30× | 0.744 | 3.68× | ok |
| CoyoteBench/huffbench | 0.057 | 0.307 | 5.39× | 0.217 | 3.81× | ok |
| CoyoteBench/lpbench | 0.072 | 0.325 | 4.51× | 0.404 | 5.61× | ok |
| DOE/HACCKernels | 0.198 | 0.728 | 3.68× | 0.711 | 3.59× | ok |
| DOE/HPCCG | 1.420 | 3.858 | 2.72× | 5.448 | 3.84× | ok |
| DOE/PENNANT | 2.661 | 9.146 | 3.44× | 9.877 | 3.71× | ok |
| DOE/miniFE | 1.271 | 5.912 | 4.65× | 6.503 | 5.12× | ok |
| Misc-C++-EH/spirit | 0.940 | 6.244 | 6.64× | 6.008 | 6.39× | ok |
| Misc-C++-Large/ray | 0.235 | 0.750 | 3.19× | 0.868 | 3.69× | ok |
| Misc-C++-Large/sphereflake | 0.178 | 1.224 | 6.88× | 0.576 | 3.24× | ok |
| Misc-C++/bigfib | 0.248 | 0.790 | 3.19× | 1.135 | 4.58× | ok |
| Misc-C++/oopack_v1p8 | 0.066 | 0.290 | 4.39× | 0.253 | 3.83× | ok |
| Misc-C++/stepanov_container | 0.356 | 1.243 | 3.49× | 1.714 | 4.81× | ok |
| Misc-C++/stepanov_v1p2 | 0.063 | 0.291 | 4.62× | 0.289 | 4.59× | ok |
| PAQ8p | 0.418 | 5.586 | 13.36× | 2.647 | 6.33× | ok |
| Prolangs-C++/life | 0.013 | 0.143 | 11.00× | 0.096 | 7.38× | ok |
| Prolangs-C++/ocean | 0.031 | 0.284 | 9.16× | 0.173 | 5.58× | ok |
| Prolangs-C++/primes | 0.011 | 0.048 | 4.36× | 0.050 | 4.55× | ok |
| Shootout-C++-EH/except | 0.124 | 0.304 | 2.45× | 0.500 | 4.03× | ok |
| Shootout-C++/ackermann | 0.113 | 0.299 | 2.65× | 0.373 | 3.30× | ok |
| Shootout-C++/ary3 | 0.148 | 0.341 | 2.30× | 0.634 | 4.28× | ok |
| Shootout-C++/fibo | 0.104 | 0.297 | 2.86× | 0.380 | 3.65× | ok |
| Shootout-C++/hash | 0.178 | 0.520 | 2.92× | 0.688 | 3.87× | ok |
| Shootout-C++/hash2 | 0.187 | 0.616 | 3.29× | 0.729 | 3.90× | ok |
| Shootout-C++/heapsort | 0.140 | 0.435 | 3.11× | 0.475 | 3.39× | ok |
| Shootout-C++/lists | 0.127 | 0.343 | 2.70× | 0.455 | 3.58× | ok |
| Shootout-C++/lists1 | 0.148 | 0.387 | 2.61× | 0.514 | 3.47× | ok |
| Shootout-C++/matrix | 0.120 | 0.326 | 2.72× | 0.488 | 4.07× | ok |
| Shootout-C++/methcall | 0.117 | 0.290 | 2.48× | 0.511 | 4.37× | ok |
| Shootout-C++/moments | 0.151 | 0.461 | 3.05× | 0.551 | 3.65× | ok |
| Shootout-C++/random | 0.134 | 0.298 | 2.22× | 0.439 | 3.28× | ok |
| Shootout-C++/sieve | 0.157 | 0.500 | 3.18× | 0.559 | 3.56× | ok |
| SmallPT | 0.058 | 0.423 | 7.29× | 0.265 | 4.57× | ok |
| Stanford/Bubblesort | 0.016 | 0.076 | 4.75× | 0.069 | 4.31× | ok |
| Stanford/FloatMM | 0.018 | 0.087 | 4.83× | 0.098 | 5.44× | ok |
| Stanford/Puzzle | 0.031 | 0.174 | 5.61× | 0.178 | 5.74× | ok |
| Stanford/Treesort | 0.021 | 0.121 | 5.76× | 0.079 | 3.76× | ok |
| bg/binarytrees/2 | 0.117 | 0.613 | 5.24× | 0.404 | 3.45× | ok |
| bg/fannkuchredux/3 | 0.062 | 0.188 | 3.03× | 0.220 | 3.55× | ok |
| bg/fasta/1 | 0.087 | 0.251 | 2.89× | 0.290 | 3.33× | ok |
| bg/fasta/2 | 0.091 | 0.239 | 2.63× | 0.301 | 3.31× | ok |
| bg/fasta/3 | 0.135 | 0.337 | 2.50× | 0.483 | 3.58× | ok |
| bg/fasta/4 | 0.126 | 0.292 | 2.32× | 0.377 | 2.99× | ok |
| bg/fasta/6 | 0.231 | 0.759 | 3.29× | 1.048 | 4.54× | ok |
| bg/mandelbrot/0 | 0.266 | 0.945 | 3.55× | 1.097 | 4.12× | ok |
| bg/mandelbrot/2 | 0.193 | 0.414 | 2.15× | 0.513 | 2.66× | ok |
| bg/mandelbrot/3 | 0.152 | 0.354 | 2.33× | 0.495 | 3.26× | ok |
| bg/mandelbrot/5 | 0.076 | 0.221 | 2.91× | 0.259 | 3.41× | ok |
| bg/mandelbrot/7 | 0.093 | 0.268 | 2.88× | 0.287 | 3.09× | ok |
| bg/mandelbrot/9 | 0.088 | 0.272 | 3.09× | 0.295 | 3.35× | ok |
| bg/nbody/1 | 0.064 | 0.231 | 3.61× | 0.280 | 4.38× | ok |
| bg/nbody/2 | 0.045 | 0.185 | 4.11× | 0.212 | 4.71× | ok |
| bg/nbody/3 | 0.054 | 0.172 | 3.19× | 0.188 | 3.48× | ok |
| bg/nbody/6 | 0.064 | 0.257 | 4.02× | 0.275 | 4.30× | ok |
| bg/pidigits/4 | 0.243 | 0.529 | 2.18× | 0.958 | 3.94× | ok |
| bg/pidigits/5 | 0.131 | 0.298 | 2.27× | 0.576 | 4.40× | ok |
| bg/revcomp/1 | 0.169 | 0.368 | 2.18× | 0.538 | 3.18× | ok |
| bg/revcomp/5 | 0.145 | 0.367 | 2.53× | 0.570 | 3.93× | ok |
| bg/spectralnorm/1 | 0.184 | 0.545 | 2.96× | 0.801 | 4.35× | ok |
| box2d | 3.119 | 11.844 | 3.80× | 12.090 | 3.88× | ok |
| fmt | 1.372 | 8.270 | 6.03× | 7.043 | 5.13× | ok |
| hexxagon | 0.496 | 1.546 | 3.12× | 1.903 | 3.84× | ok |
| lambda | 0.156 | 1.540 | 9.87× | 0.934 | 5.99× | ok |
| minisat | 0.226 | 1.552 | 6.87× | 1.069 | 4.73× | ok |
| nlohmann-json | 1.036 | 4.446 | 4.29× | 5.165 | 4.99× | ok |
| pugixml | 1.009 | 8.190 | 8.12× | 6.260 | 6.20× | ok |
| pugixml-tests | 8.632 | 52.628 | 6.10× | 42.650 | 4.94× | ok |
| rapidjson | 0.371 | 1.821 | 4.91× | 1.257 | 3.39× | ok |
| re2 | 4.926 | 26.885 | 5.46× | 16.858 | 3.42× | ok |
| re2-test-re2 | 9.651 | 41.480 | 4.30× | 41.584 | 4.31× | ok |
| re2-test-search | 10.070 | 36.450 | 3.62× | 28.380 | 2.82× | ok |
| tramp3d-v4 | 3.275 | 25.629 | 7.83× | 20.366 | 6.22× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.105 | 0.240 | 2.29× | 0.416 | 3.96× | ok |
| Adobe-C++/loop_unroll | 0.064 | 0.184 | 2.88× | 0.214 | 3.34× | ok |
| Adobe-C++/simple_types_constant_folding | 0.065 | 0.186 | 2.86× | 0.230 | 3.54× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.061 | 0.164 | 2.69× | 0.202 | 3.31× | ok |
| Adobe-C++/stepanov_abstraction | 0.055 | 0.115 | 2.09× | 0.163 | 2.96× | ok |
| Adobe-C++/stepanov_vector | 0.124 | 0.211 | 1.70× | 0.434 | 3.50× | ok |
| Bullet | 7.362 | 17.298 | 2.35× | 25.068 | 3.41× | ok |
| CLAMR | 3.358 | 8.078 | 2.41× | 12.163 | 3.62× | ok |
| CoyoteBench/almabench | 0.050 | 0.113 | 2.26× | 0.141 | 2.82× | ok |
| CoyoteBench/fftbench | 0.175 | 0.385 | 2.20× | 0.538 | 3.07× | ok |
| CoyoteBench/huffbench | 0.047 | 0.094 | 2.00× | 0.134 | 2.85× | ok |
| CoyoteBench/lpbench | 0.060 | 0.118 | 1.97× | 0.192 | 3.20× | ok |
| DOE/HACCKernels | 0.179 | 0.489 | 2.73× | 0.581 | 3.25× | ok |
| DOE/HPCCG | 1.308 | 2.405 | 1.84× | 4.559 | 3.49× | ok |
| DOE/PENNANT | 2.369 | 5.247 | 2.21× | 6.670 | 2.82× | ok |
| DOE/miniFE | 0.921 | 2.049 | 2.22× | 3.056 | 3.32× | ok |
| Misc-C++-EH/spirit | 0.597 | 1.418 | 2.38× | 2.374 | 3.98× | ok |
| Misc-C++-Large/ray | 0.167 | 0.346 | 2.07× | 0.709 | 4.25× | ok |
| Misc-C++-Large/sphereflake | 0.191 | 0.364 | 1.91× | 0.528 | 2.76× | ok |
| Misc-C++/bigfib | 0.214 | 0.383 | 1.79× | 0.692 | 3.23× | ok |
| Misc-C++/oopack_v1p8 | 0.052 | 0.129 | 2.48× | 0.142 | 2.73× | ok |
| Misc-C++/stepanov_container | 0.263 | 0.482 | 1.83× | 0.923 | 3.51× | ok |
| Misc-C++/stepanov_v1p2 | 0.048 | 0.103 | 2.15× | 0.134 | 2.79× | ok |
| PAQ8p | 0.093 | 0.207 | 2.23× | 0.273 | 2.94× | ok |
| Prolangs-C++/life | 0.004 | 0.015 | — | 0.028 | — | ok |
| Prolangs-C++/ocean | 0.014 | 0.036 | 2.57× | 0.051 | 3.64× | ok |
| Prolangs-C++/primes | 0.008 | 0.024 | — | 0.037 | — | ok |
| Shootout-C++-EH/except | 0.118 | 0.261 | 2.21× | 0.481 | 4.08× | ok |
| Shootout-C++/ackermann | 0.110 | 0.316 | 2.87× | 0.350 | 3.18× | ok |
| Shootout-C++/ary3 | 0.120 | 0.267 | 2.23× | 0.398 | 3.32× | ok |
| Shootout-C++/fibo | 0.109 | 0.237 | 2.17× | 0.334 | 3.06× | ok |
| Shootout-C++/hash | 0.149 | 0.321 | 2.15× | 0.681 | 4.57× | ok |
| Shootout-C++/hash2 | 0.149 | 0.328 | 2.20× | 0.495 | 3.32× | ok |
| Shootout-C++/heapsort | 0.137 | 0.292 | 2.13× | 0.413 | 3.01× | ok |
| Shootout-C++/lists | 0.117 | 0.258 | 2.21× | 0.376 | 3.21× | ok |
| Shootout-C++/lists1 | 0.131 | 0.279 | 2.13× | 0.415 | 3.17× | ok |
| Shootout-C++/matrix | 0.114 | 0.234 | 2.05× | 0.365 | 3.20× | ok |
| Shootout-C++/methcall | 0.110 | 0.247 | 2.25× | 0.339 | 3.08× | ok |
| Shootout-C++/moments | 0.137 | 0.302 | 2.20× | 0.427 | 3.12× | ok |
| Shootout-C++/random | 0.134 | 0.268 | 2.00× | 0.419 | 3.13× | ok |
| Shootout-C++/sieve | 0.137 | 0.317 | 2.31× | 0.512 | 3.74× | ok |
| SmallPT | 0.041 | 0.084 | 2.05× | 0.131 | 3.20× | ok |
| Stanford/Bubblesort | 0.014 | 0.037 | 2.64× | 0.046 | 3.29× | ok |
| Stanford/FloatMM | 0.014 | 0.035 | 2.50× | 0.046 | 3.29× | ok |
| Stanford/Puzzle | 0.017 | 0.037 | 2.18× | 0.050 | 2.94× | ok |
| Stanford/Treesort | 0.015 | 0.037 | 2.47× | 0.048 | 3.20× | ok |
| bg/binarytrees/2 | 0.118 | 0.252 | 2.14× | 0.361 | 3.06× | ok |
| bg/fannkuchredux/3 | 0.057 | 0.104 | 1.82× | 0.158 | 2.77× | ok |
| bg/fasta/1 | 0.078 | 0.152 | 1.95× | 0.219 | 2.81× | ok |
| bg/fasta/2 | 0.081 | 0.156 | 1.93× | 0.225 | 2.78× | ok |
| bg/fasta/3 | 0.123 | 0.271 | 2.20× | 0.401 | 3.26× | ok |
| bg/fasta/4 | 0.118 | 0.234 | 1.98× | 0.381 | 3.23× | ok |
| bg/fasta/6 | 0.192 | 0.419 | 2.18× | 0.653 | 3.40× | ok |
| bg/mandelbrot/0 | 0.210 | 0.571 | 2.72× | 0.712 | 3.39× | ok |
| bg/mandelbrot/2 | 0.154 | 0.298 | 1.94× | 0.431 | 2.80× | ok |
| bg/mandelbrot/3 | 0.145 | 0.312 | 2.15× | 0.502 | 3.46× | ok |
| bg/mandelbrot/5 | 0.068 | 0.136 | 2.00× | 0.200 | 2.94× | ok |
| bg/mandelbrot/7 | 0.069 | 0.135 | 1.96× | 0.205 | 2.97× | ok |
| bg/mandelbrot/9 | 0.071 | 0.131 | 1.85× | 0.259 | 3.65× | ok |
| bg/nbody/1 | 0.045 | 0.090 | 2.00× | 0.179 | 3.98× | ok |
| bg/nbody/2 | 0.043 | 0.085 | 1.98× | 0.150 | 3.49× | ok |
| bg/nbody/3 | 0.047 | 0.113 | 2.40× | 0.158 | 3.36× | ok |
| bg/nbody/6 | 0.056 | 0.088 | 1.57× | 0.146 | 2.61× | ok |
| bg/pidigits/4 | 0.180 | 0.494 | 2.74× | 0.621 | 3.45× | ok |
| bg/pidigits/5 | 0.126 | 0.279 | 2.21× | 0.521 | 4.13× | ok |
| bg/revcomp/1 | 0.124 | 0.275 | 2.22× | 0.403 | 3.25× | ok |
| bg/revcomp/5 | 0.139 | 0.258 | 1.86× | 0.483 | 3.47× | ok |
| bg/spectralnorm/1 | 0.171 | 0.396 | 2.32× | 0.677 | 3.96× | ok |
| box2d | 2.434 | 4.745 | 1.95× | 8.965 | 3.68× | ok |
| fmt | 0.736 | 1.639 | 2.23× | 3.056 | 4.15× | ok |
| hexxagon | 0.438 | 1.009 | 2.30× | 1.579 | 3.61× | ok |
| lambda | 0.063 | 0.206 | 3.27× | 0.315 | 5.00× | ok |
| minisat | 0.084 | 0.211 | 2.51× | 0.324 | 3.86× | ok |
| nlohmann-json | 0.482 | 1.404 | 2.91× | 2.135 | 4.43× | ok |
| pugixml | 0.340 | 0.885 | 2.60× | 1.536 | 4.52× | ok |
| pugixml-tests | 5.153 | 12.755 | 2.48× | 18.709 | 3.63× | ok |
| rapidjson | 0.163 | 0.367 | 2.25× | 0.579 | 3.55× | ok |
| re2 | 5.168 | 9.759 | 1.89× | 10.768 | 2.08× | ok |
| re2-test-re2 | 7.639 | 15.788 | 2.07× | 26.522 | 3.47× | ok |
| re2-test-search | 7.073 | 16.569 | 2.34× | 27.722 | 3.92× | ok |
| tramp3d-v4 | 0.684 | 3.404 | 4.98× | 2.794 | 4.08× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
