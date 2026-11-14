# Public benchmarks: Intel (GitHub)

Measured compiler: [`13d6afdf5`](https://github.com/vishvananda/cppgm-extended/commit/13d6afdf5bac47b7d64eb4438784eee62a4f3c21) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43648658283) · [Raw program results](results.json)

81 of 81 programs built with cppgm++ and g++ and agreed. Each number is the reference over cppgm++, so above 1× means cppgm++ is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.29× | 75 | 2.95× | 75 |
| Compile CPU, `-O0` | 3.16× | 75 | 3.14× | 75 |
| Compile CPU, `-O3` | 4.29× | 79 | 3.87× | 79 |
| Compile peak RSS, `-O0` | 1.45× | 81 | 2.22× | 81 |
| Compile peak RSS, `-O3` | 1.72× | 81 | 2.33× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 0.98× | 81 | 0.98× | 80 |
| Run instructions, `-O3` | 0.96× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.921 to 1.029; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.069 | 0.249 | 3.61× | 0.211 | 3.06× | ok |
| Adobe-C++/loop_unroll | 0.049 | 0.571 | 11.65× | 0.167 | 3.41× | ok |
| Adobe-C++/simple_types_constant_folding | 0.051 | 0.672 | 13.18× | 0.200 | 3.92× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.049 | 0.466 | 9.51× | 0.186 | 3.80× | ok |
| Adobe-C++/stepanov_abstraction | 0.038 | 0.171 | 4.50× | 0.109 | 2.87× | ok |
| Adobe-C++/stepanov_vector | 0.063 | 0.269 | 4.27× | 0.197 | 3.13× | ok |
| Bullet | 4.361 | 17.442 | 4.00× | 14.951 | 3.43× | ok |
| CLAMR | 2.199 | 8.328 | 3.79× | 7.239 | 3.29× | ok |
| CoyoteBench/almabench | 0.025 | 0.078 | 3.12× | 0.075 | 3.00× | ok |
| CoyoteBench/fftbench | 0.100 | 0.249 | 2.49× | 0.304 | 3.04× | ok |
| CoyoteBench/huffbench | 0.025 | 0.064 | 2.56× | 0.079 | 3.16× | ok |
| CoyoteBench/lpbench | 0.027 | 0.071 | 2.63× | 0.075 | 2.78× | ok |
| DOE/HACCKernels | 0.102 | 0.261 | 2.56× | 0.310 | 3.04× | ok |
| DOE/HPCCG | 0.668 | 1.762 | 2.64× | 2.294 | 3.43× | ok |
| DOE/PENNANT | 1.395 | 3.739 | 2.68× | 3.889 | 2.79× | ok |
| DOE/miniFE | 0.649 | 1.928 | 2.97× | 2.207 | 3.40× | ok |
| Misc-C++-EH/spirit | 0.450 | 2.319 | 5.15× | 1.591 | 3.54× | ok |
| Misc-C++-Large/ray | 0.098 | 0.282 | 2.88× | 0.349 | 3.56× | ok |
| Misc-C++-Large/sphereflake | 0.084 | 0.202 | 2.40× | 0.287 | 3.42× | ok |
| Misc-C++/bigfib | 0.131 | 0.338 | 2.58× | 0.362 | 2.76× | ok |
| Misc-C++/oopack_v1p8 | 0.031 | 0.093 | 3.00× | 0.097 | 3.13× | ok |
| Misc-C++/stepanov_container | 0.166 | 0.588 | 3.54× | 0.552 | 3.33× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.117 | 4.33× | 0.086 | 3.19× | ok |
| PAQ8p | 0.067 | 0.464 | 6.93× | 0.204 | 3.04× | ok |
| Prolangs-C++/life | 0.004 | 0.032 | — | 0.027 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.058 | — | 0.040 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.023 | — | 0.026 | — | ok |
| Shootout-C++-EH/except | 0.061 | 0.146 | 2.39× | 0.195 | 3.20× | ok |
| Shootout-C++/ackermann | 0.071 | 0.158 | 2.23× | 0.233 | 3.28× | ok |
| Shootout-C++/ary3 | 0.075 | 0.182 | 2.43× | 0.232 | 3.09× | ok |
| Shootout-C++/fibo | 0.074 | 0.163 | 2.20× | 0.249 | 3.36× | ok |
| Shootout-C++/hash | 0.108 | 0.304 | 2.81× | 0.311 | 2.88× | ok |
| Shootout-C++/hash2 | 0.097 | 0.266 | 2.74× | 0.279 | 2.88× | ok |
| Shootout-C++/heapsort | 0.090 | 0.181 | 2.01× | 0.226 | 2.51× | ok |
| Shootout-C++/lists | 0.072 | 0.187 | 2.60× | 0.225 | 3.13× | ok |
| Shootout-C++/lists1 | 0.083 | 0.246 | 2.96× | 0.252 | 3.04× | ok |
| Shootout-C++/matrix | 0.068 | 0.146 | 2.15× | 0.231 | 3.40× | ok |
| Shootout-C++/methcall | 0.065 | 0.146 | 2.25× | 0.195 | 3.00× | ok |
| Shootout-C++/moments | 0.091 | 0.241 | 2.65× | 0.250 | 2.75× | ok |
| Shootout-C++/random | 0.080 | 0.175 | 2.19× | 0.246 | 3.08× | ok |
| Shootout-C++/sieve | 0.082 | 0.216 | 2.63× | 0.255 | 3.11× | ok |
| SmallPT | 0.028 | 0.082 | 2.93× | 0.084 | 3.00× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.033 | — | 0.034 | — | ok |
| Stanford/Treesort | 0.010 | 0.027 | 2.70× | 0.031 | 3.10× | ok |
| bg/binarytrees/2 | 0.064 | 0.151 | 2.36× | 0.206 | 3.22× | ok |
| bg/fannkuchredux/3 | 0.031 | 0.068 | 2.19× | 0.080 | 2.58× | ok |
| bg/fasta/1 | 0.048 | 0.120 | 2.50× | 0.127 | 2.65× | ok |
| bg/fasta/2 | 0.048 | 0.117 | 2.44× | 0.128 | 2.67× | ok |
| bg/fasta/3 | 0.091 | 0.183 | 2.01× | 0.229 | 2.52× | ok |
| bg/fasta/4 | 0.072 | 0.150 | 2.08× | 0.177 | 2.46× | ok |
| bg/fasta/6 | 0.129 | 0.411 | 3.19× | 0.374 | 2.90× | ok |
| bg/mandelbrot/0 | 0.140 | 0.416 | 2.97× | 0.421 | 3.01× | ok |
| bg/mandelbrot/2 | 0.082 | 0.240 | 2.93× | 0.263 | 3.21× | ok |
| bg/mandelbrot/3 | 0.091 | 0.201 | 2.21× | 0.265 | 2.91× | ok |
| bg/mandelbrot/5 | 0.049 | 0.104 | 2.12× | 0.118 | 2.41× | ok |
| bg/mandelbrot/7 | 0.048 | 0.131 | 2.73× | 0.138 | 2.88× | ok |
| bg/mandelbrot/9 | 0.045 | 0.107 | 2.38× | 0.121 | 2.69× | ok |
| bg/nbody/1 | 0.026 | 0.104 | 4.00× | 0.087 | 3.35× | ok |
| bg/nbody/2 | 0.025 | 0.070 | 2.80× | 0.085 | 3.40× | ok |
| bg/nbody/3 | 0.027 | 0.064 | 2.37× | 0.078 | 2.89× | ok |
| bg/nbody/6 | 0.028 | 0.097 | 3.46× | 0.104 | 3.71× | ok |
| bg/pidigits/4 | 0.115 | 0.298 | 2.59× | 0.334 | 2.90× | ok |
| bg/pidigits/5 | 0.070 | 0.163 | 2.33× | 0.238 | 3.40× | ok |
| bg/revcomp/1 | 0.081 | 0.220 | 2.72× | 0.281 | 3.47× | ok |
| bg/revcomp/5 | 0.076 | 0.211 | 2.78× | 0.260 | 3.42× | ok |
| bg/spectralnorm/1 | 0.105 | 0.239 | 2.28× | 0.293 | 2.79× | ok |
| box2d | 1.406 | 4.298 | 3.06× | 4.181 | 2.97× | ok |
| fmt | 0.540 | 2.493 | 4.62× | 2.016 | 3.73× | ok |
| hexxagon | 0.226 | 0.616 | 2.73× | 0.731 | 3.23× | ok |
| lambda | 0.045 | 0.277 | 6.16× | 0.193 | 4.29× | ok |
| minisat | 0.052 | 0.263 | 5.06× | 0.217 | 4.17× | ok |
| nlohmann-json | 0.389 | 1.777 | 4.57× | 1.891 | 4.86× | ok |
| pugixml | 0.268 | 1.364 | 5.09× | 0.940 | 3.51× | ok |
| pugixml-tests | 3.401 | 15.006 | 4.41× | 12.042 | 3.54× | ok |
| rapidjson | 0.116 | 0.466 | 4.02× | 0.382 | 3.29× | ok |
| re2 | 2.829 | 10.567 | 3.74× | 6.772 | 2.39× | ok |
| re2-test-re2 | 4.699 | 15.190 | 3.23× | 16.003 | 3.41× | ok |
| re2-test-search | 4.237 | 13.332 | 3.15× | 14.934 | 3.52× | ok |
| tramp3d-v4 | 1.008 | 5.788 | 5.74× | 2.610 | 2.59× | ok |

### O3 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.107 | 0.903 | 8.44× | 0.467 | 4.36× | ok |
| Adobe-C++/loop_unroll | 0.416 | 5.406 | 13.00× | 4.052 | 9.74× | ok |
| Adobe-C++/simple_types_constant_folding | 0.239 | 2.979 | 12.46× | 2.240 | 9.37× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.232 | 2.340 | 10.09× | 1.831 | 7.89× | ok |
| Adobe-C++/stepanov_abstraction | 0.090 | 1.050 | 11.67× | 0.446 | 4.96× | ok |
| Adobe-C++/stepanov_vector | 0.113 | 1.405 | 12.43× | 0.641 | 5.67× | ok |
| Bullet | 5.881 | 36.603 | 6.22× | 26.582 | 4.52× | ok |
| CLAMR | 4.859 | 23.698 | 4.88× | 17.403 | 3.58× | ok |
| CoyoteBench/almabench | 0.030 | 0.145 | 4.83× | 0.124 | 4.13× | ok |
| CoyoteBench/fftbench | 0.121 | 0.406 | 3.36× | 0.407 | 3.36× | ok |
| CoyoteBench/huffbench | 0.035 | 0.210 | 6.00× | 0.135 | 3.86× | ok |
| CoyoteBench/lpbench | 0.034 | 0.173 | 5.09× | 0.180 | 5.29× | ok |
| DOE/HACCKernels | 0.112 | 0.366 | 3.27× | 0.345 | 3.08× | ok |
| DOE/HPCCG | 0.720 | 2.550 | 3.54× | 2.214 | 3.08× | ok |
| DOE/PENNANT | 1.752 | 5.837 | 3.33× | 5.850 | 3.34× | ok |
| DOE/miniFE | 0.901 | 4.266 | 4.73× | 3.646 | 4.05× | ok |
| Misc-C++-EH/spirit | 0.717 | 3.434 | 4.79× | 2.872 | 4.01× | ok |
| Misc-C++-Large/ray | 0.108 | 0.445 | 4.12× | 0.336 | 3.11× | ok |
| Misc-C++-Large/sphereflake | 0.117 | 0.802 | 6.85× | 0.377 | 3.22× | ok |
| Misc-C++/bigfib | 0.143 | 0.520 | 3.64× | 0.540 | 3.78× | ok |
| Misc-C++/oopack_v1p8 | 0.040 | 0.187 | 4.67× | 0.176 | 4.40× | ok |
| Misc-C++/stepanov_container | 0.230 | 0.926 | 4.03× | 0.973 | 4.23× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.198 | 4.95× | 0.169 | 4.23× | ok |
| PAQ8p | 0.328 | 4.014 | 12.24× | 1.501 | 4.58× | ok |
| Prolangs-C++/life | 0.009 | 0.104 | — | 0.070 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.187 | 9.84× | 0.106 | 5.58× | ok |
| Prolangs-C++/primes | 0.007 | 0.035 | — | 0.036 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.173 | 2.62× | 0.210 | 3.18× | ok |
| Shootout-C++/ackermann | 0.075 | 0.198 | 2.64× | 0.241 | 3.21× | ok |
| Shootout-C++/ary3 | 0.097 | 0.216 | 2.23× | 0.246 | 2.54× | ok |
| Shootout-C++/fibo | 0.075 | 0.208 | 2.77× | 0.246 | 3.28× | ok |
| Shootout-C++/hash | 0.127 | 0.408 | 3.21× | 0.406 | 3.20× | ok |
| Shootout-C++/hash2 | 0.116 | 0.393 | 3.39× | 0.404 | 3.48× | ok |
| Shootout-C++/heapsort | 0.098 | 0.216 | 2.20× | 0.262 | 2.67× | ok |
| Shootout-C++/lists | 0.080 | 0.219 | 2.74× | 0.325 | 4.06× | ok |
| Shootout-C++/lists1 | 0.094 | 0.313 | 3.33× | 0.294 | 3.13× | ok |
| Shootout-C++/matrix | 0.073 | 0.227 | 3.11× | 0.351 | 4.81× | ok |
| Shootout-C++/methcall | 0.068 | 0.176 | 2.59× | 0.211 | 3.10× | ok |
| Shootout-C++/moments | 0.101 | 0.299 | 2.96× | 0.395 | 3.91× | ok |
| Shootout-C++/random | 0.088 | 0.199 | 2.26× | 0.260 | 2.95× | ok |
| Shootout-C++/sieve | 0.090 | 0.233 | 2.59× | 0.281 | 3.12× | ok |
| SmallPT | 0.041 | 0.287 | 7.00× | 0.162 | 3.95× | ok |
| Stanford/Bubblesort | 0.010 | 0.051 | 5.10× | 0.047 | 4.70× | ok |
| Stanford/FloatMM | 0.011 | 0.058 | 5.27× | 0.066 | 6.00× | ok |
| Stanford/Puzzle | 0.018 | 0.116 | 6.44× | 0.111 | 6.17× | ok |
| Stanford/Treesort | 0.014 | 0.080 | 5.71× | 0.053 | 3.79× | ok |
| bg/binarytrees/2 | 0.069 | 0.407 | 5.90× | 0.222 | 3.22× | ok |
| bg/fannkuchredux/3 | 0.036 | 0.114 | 3.17× | 0.110 | 3.06× | ok |
| bg/fasta/1 | 0.055 | 0.154 | 2.80× | 0.164 | 2.98× | ok |
| bg/fasta/2 | 0.055 | 0.153 | 2.78× | 0.167 | 3.04× | ok |
| bg/fasta/3 | 0.084 | 0.226 | 2.69× | 0.309 | 3.68× | ok |
| bg/fasta/4 | 0.086 | 0.177 | 2.06× | 0.252 | 2.93× | ok |
| bg/fasta/6 | 0.144 | 0.476 | 3.31× | 0.544 | 3.78× | ok |
| bg/mandelbrot/0 | 0.175 | 0.632 | 3.61× | 0.610 | 3.49× | ok |
| bg/mandelbrot/2 | 0.089 | 0.260 | 2.92× | 0.323 | 3.63× | ok |
| bg/mandelbrot/3 | 0.108 | 0.225 | 2.08× | 0.279 | 2.58× | ok |
| bg/mandelbrot/5 | 0.054 | 0.153 | 2.83× | 0.158 | 2.93× | ok |
| bg/mandelbrot/7 | 0.057 | 0.192 | 3.37× | 0.179 | 3.14× | ok |
| bg/mandelbrot/9 | 0.057 | 0.193 | 3.39× | 0.164 | 2.88× | ok |
| bg/nbody/1 | 0.037 | 0.160 | 4.32× | 0.162 | 4.38× | ok |
| bg/nbody/2 | 0.031 | 0.129 | 4.16× | 0.133 | 4.29× | ok |
| bg/nbody/3 | 0.030 | 0.114 | 3.80× | 0.103 | 3.43× | ok |
| bg/nbody/6 | 0.040 | 0.158 | 3.95× | 0.167 | 4.17× | ok |
| bg/pidigits/4 | 0.121 | 0.338 | 2.79× | 0.416 | 3.44× | ok |
| bg/pidigits/5 | 0.084 | 0.197 | 2.35× | 0.243 | 2.89× | ok |
| bg/revcomp/1 | 0.088 | 0.250 | 2.84× | 0.328 | 3.73× | ok |
| bg/revcomp/5 | 0.083 | 0.214 | 2.58× | 0.295 | 3.55× | ok |
| bg/spectralnorm/1 | 0.114 | 0.321 | 2.82× | 0.345 | 3.03× | ok |
| box2d | 1.770 | 7.561 | 4.27× | 6.592 | 3.72× | ok |
| fmt | 1.040 | 5.168 | 4.97× | 4.066 | 3.91× | ok |
| hexxagon | 0.265 | 0.976 | 3.68× | 1.104 | 4.17× | ok |
| lambda | 0.109 | 1.018 | 9.34× | 0.498 | 4.57× | ok |
| minisat | 0.134 | 0.908 | 6.78× | 0.639 | 4.77× | ok |
| nlohmann-json | 0.766 | 3.298 | 4.31× | 3.028 | 3.95× | ok |
| pugixml | 0.659 | 5.623 | 8.53× | 3.504 | 5.32× | ok |
| pugixml-tests | 5.120 | 34.305 | 6.70× | 23.471 | 4.58× | ok |
| rapidjson | 0.220 | 1.167 | 5.30× | 0.730 | 3.32× | ok |
| re2 | 2.998 | 18.264 | 6.09× | 10.122 | 3.38× | ok |
| re2-test-re2 | 5.803 | 26.170 | 4.51× | 22.332 | 3.85× | ok |
| re2-test-search | 5.957 | 23.679 | 3.97× | 21.011 | 3.53× | ok |
| tramp3d-v4 | 2.566 | 16.955 | 6.61× | 13.936 | 5.43× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.065 | 0.131 | 2.02× | 0.181 | 2.78× | ok |
| Adobe-C++/loop_unroll | 0.034 | 0.096 | 2.82× | 0.100 | 2.94× | ok |
| Adobe-C++/simple_types_constant_folding | 0.036 | 0.102 | 2.83× | 0.104 | 2.89× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.037 | 0.092 | 2.49× | 0.101 | 2.73× | ok |
| Adobe-C++/stepanov_abstraction | 0.032 | 0.073 | 2.28× | 0.085 | 2.66× | ok |
| Adobe-C++/stepanov_vector | 0.056 | 0.120 | 2.14× | 0.158 | 2.82× | ok |
| Bullet | 3.821 | 9.431 | 2.47× | 12.277 | 3.21× | ok |
| CLAMR | 2.198 | 4.483 | 2.04× | 6.370 | 2.90× | ok |
| CoyoteBench/almabench | 0.025 | 0.063 | 2.52× | 0.075 | 3.00× | ok |
| CoyoteBench/fftbench | 0.097 | 0.219 | 2.26× | 0.280 | 2.89× | ok |
| CoyoteBench/huffbench | 0.025 | 0.056 | 2.24× | 0.075 | 3.00× | ok |
| CoyoteBench/lpbench | 0.027 | 0.056 | 2.07× | 0.071 | 2.63× | ok |
| DOE/HACCKernels | 0.099 | 0.228 | 2.30× | 0.286 | 2.89× | ok |
| DOE/HPCCG | 0.635 | 1.468 | 2.31× | 2.073 | 3.26× | ok |
| DOE/PENNANT | 1.391 | 3.158 | 2.27× | 3.856 | 2.77× | ok |
| DOE/miniFE | 0.592 | 1.229 | 2.08× | 1.940 | 3.28× | ok |
| Misc-C++-EH/spirit | 0.286 | 0.815 | 2.85× | 1.046 | 3.66× | ok |
| Misc-C++-Large/ray | 0.094 | 0.229 | 2.44× | 0.323 | 3.44× | ok |
| Misc-C++-Large/sphereflake | 0.082 | 0.176 | 2.15× | 0.243 | 2.96× | ok |
| Misc-C++/bigfib | 0.120 | 0.226 | 1.88× | 0.316 | 2.63× | ok |
| Misc-C++/oopack_v1p8 | 0.030 | 0.064 | 2.13× | 0.084 | 2.80× | ok |
| Misc-C++/stepanov_container | 0.145 | 0.334 | 2.30× | 0.459 | 3.17× | ok |
| Misc-C++/stepanov_v1p2 | 0.026 | 0.061 | 2.35× | 0.073 | 2.81× | ok |
| PAQ8p | 0.045 | 0.120 | 2.67× | 0.116 | 2.58× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.021 | — | ok |
| Prolangs-C++/ocean | 0.007 | 0.019 | — | 0.028 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.016 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.063 | 0.144 | 2.29× | 0.186 | 2.95× | ok |
| Shootout-C++/ackermann | 0.071 | 0.162 | 2.28× | 0.226 | 3.18× | ok |
| Shootout-C++/ary3 | 0.071 | 0.166 | 2.34× | 0.237 | 3.34× | ok |
| Shootout-C++/fibo | 0.073 | 0.165 | 2.26× | 0.232 | 3.18× | ok |
| Shootout-C++/hash | 0.103 | 0.230 | 2.23× | 0.280 | 2.72× | ok |
| Shootout-C++/hash2 | 0.090 | 0.194 | 2.16× | 0.248 | 2.76× | ok |
| Shootout-C++/heapsort | 0.094 | 0.182 | 1.94× | 0.217 | 2.31× | ok |
| Shootout-C++/lists | 0.069 | 0.156 | 2.26× | 0.204 | 2.96× | ok |
| Shootout-C++/lists1 | 0.080 | 0.208 | 2.60× | 0.230 | 2.88× | ok |
| Shootout-C++/matrix | 0.067 | 0.144 | 2.15× | 0.240 | 3.58× | ok |
| Shootout-C++/methcall | 0.065 | 0.142 | 2.18× | 0.187 | 2.88× | ok |
| Shootout-C++/moments | 0.086 | 0.189 | 2.20× | 0.226 | 2.63× | ok |
| Shootout-C++/random | 0.080 | 0.175 | 2.19× | 0.237 | 2.96× | ok |
| Shootout-C++/sieve | 0.079 | 0.176 | 2.23× | 0.234 | 2.96× | ok |
| SmallPT | 0.026 | 0.053 | 2.04× | 0.077 | 2.96× | ok |
| Stanford/Bubblesort | 0.008 | 0.022 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.023 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.010 | 0.022 | 2.20× | 0.029 | 2.90× | ok |
| bg/binarytrees/2 | 0.064 | 0.149 | 2.33× | 0.194 | 3.03× | ok |
| bg/fannkuchredux/3 | 0.031 | 0.057 | 1.84× | 0.076 | 2.45× | ok |
| bg/fasta/1 | 0.047 | 0.094 | 2.00× | 0.116 | 2.47× | ok |
| bg/fasta/2 | 0.047 | 0.092 | 1.96× | 0.117 | 2.49× | ok |
| bg/fasta/3 | 0.084 | 0.174 | 2.07× | 0.225 | 2.68× | ok |
| bg/fasta/4 | 0.070 | 0.159 | 2.27× | 0.169 | 2.41× | ok |
| bg/fasta/6 | 0.118 | 0.260 | 2.20× | 0.327 | 2.77× | ok |
| bg/mandelbrot/0 | 0.125 | 0.282 | 2.26× | 0.370 | 2.96× | ok |
| bg/mandelbrot/2 | 0.078 | 0.183 | 2.35× | 0.244 | 3.13× | ok |
| bg/mandelbrot/3 | 0.089 | 0.193 | 2.17× | 0.252 | 2.83× | ok |
| bg/mandelbrot/5 | 0.046 | 0.083 | 1.80× | 0.108 | 2.35× | ok |
| bg/mandelbrot/7 | 0.045 | 0.091 | 2.02× | 0.121 | 2.69× | ok |
| bg/mandelbrot/9 | 0.042 | 0.077 | 1.83× | 0.107 | 2.55× | ok |
| bg/nbody/1 | 0.025 | 0.061 | 2.44× | 0.074 | 2.96× | ok |
| bg/nbody/2 | 0.026 | 0.057 | 2.19× | 0.076 | 2.92× | ok |
| bg/nbody/3 | 0.026 | 0.052 | 2.00× | 0.073 | 2.81× | ok |
| bg/nbody/6 | 0.027 | 0.056 | 2.07× | 0.085 | 3.15× | ok |
| bg/pidigits/4 | 0.113 | 0.268 | 2.37× | 0.369 | 3.27× | ok |
| bg/pidigits/5 | 0.074 | 0.158 | 2.14× | 0.223 | 3.01× | ok |
| bg/revcomp/1 | 0.077 | 0.171 | 2.22× | 0.254 | 3.30× | ok |
| bg/revcomp/5 | 0.073 | 0.160 | 2.19× | 0.231 | 3.16× | ok |
| bg/spectralnorm/1 | 0.103 | 0.251 | 2.44× | 0.275 | 2.67× | ok |
| box2d | 1.377 | 2.960 | 2.15× | 3.571 | 2.59× | ok |
| fmt | 0.455 | 1.087 | 2.39× | 1.595 | 3.51× | ok |
| hexxagon | 0.221 | 0.560 | 2.53× | 0.686 | 3.10× | ok |
| lambda | 0.036 | 0.109 | 3.03× | 0.137 | 3.81× | ok |
| minisat | 0.044 | 0.115 | 2.61× | 0.159 | 3.61× | ok |
| nlohmann-json | 0.348 | 0.779 | 2.24× | 1.381 | 3.97× | ok |
| pugixml | 0.204 | 0.516 | 2.53× | 0.685 | 3.36× | ok |
| pugixml-tests | 2.909 | 7.295 | 2.51× | 9.002 | 3.09× | ok |
| rapidjson | 0.091 | 0.237 | 2.60× | 0.295 | 3.24× | ok |
| re2 | 2.692 | 5.829 | 2.17× | 5.724 | 2.13× | ok |
| re2-test-re2 | 4.077 | 9.545 | 2.34× | 13.310 | 3.26× | ok |
| re2-test-search | 3.799 | 9.199 | 2.42× | 13.525 | 3.56× | ok |
| tramp3d-v4 | 0.437 | 2.313 | 5.29× | 1.520 | 3.48× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
