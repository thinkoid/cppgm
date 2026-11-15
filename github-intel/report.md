# Public benchmarks: Intel (GitHub)

Measured compiler: [`d9ff17ff1`](https://github.com/vishvananda/cppgm-extended/commit/d9ff17ff1c4afc36d90ba4a6551b659323cc65ec) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43670794078) · [Raw program results](results.json)

81 of 81 programs built with cppgm++ and g++ and agreed. Each number is the reference over cppgm++, so above 1× means cppgm++ is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.25× | 74 | 2.97× | 74 |
| Compile CPU, `-O0` | 3.18× | 75 | 3.22× | 75 |
| Compile CPU, `-O3` | 4.25× | 79 | 3.82× | 79 |
| Compile peak RSS, `-O0` | 1.46× | 81 | 2.22× | 81 |
| Compile peak RSS, `-O3` | 1.73× | 81 | 2.33× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 1.00× | 81 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.918 to 1.019; raw observations and block ratios are retained in the artifact.

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

Times are CPU seconds, excluding linking. Speed is reference time divided by cppgm++ time; higher is better. Every program is listed. Missing times show a dash. Ratios are omitted for failed programs or when either time is below 10 ms.

Compilation is measured once per compiler and level; the ABBA/BAAB repetitions apply to generated-program execution and self-built compiler speed.

### O0 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.066 | 0.257 | 3.89× | 0.214 | 3.24× | ok |
| Adobe-C++/loop_unroll | 0.054 | 0.567 | 10.50× | 0.171 | 3.17× | ok |
| Adobe-C++/simple_types_constant_folding | 0.055 | 0.656 | 11.93× | 0.207 | 3.76× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.046 | 0.472 | 10.26× | 0.230 | 5.00× | ok |
| Adobe-C++/stepanov_abstraction | 0.037 | 0.183 | 4.95× | 0.134 | 3.62× | ok |
| Adobe-C++/stepanov_vector | 0.073 | 0.273 | 3.74× | 0.197 | 2.70× | ok |
| Bullet | 4.975 | 16.980 | 3.41× | 15.839 | 3.18× | ok |
| CLAMR | 2.607 | 8.228 | 3.16× | 7.412 | 2.84× | ok |
| CoyoteBench/almabench | 0.026 | 0.068 | 2.62× | 0.081 | 3.12× | ok |
| CoyoteBench/fftbench | 0.099 | 0.244 | 2.46× | 0.290 | 2.93× | ok |
| CoyoteBench/huffbench | 0.027 | 0.073 | 2.70× | 0.091 | 3.37× | ok |
| CoyoteBench/lpbench | 0.026 | 0.065 | 2.50× | 0.073 | 2.81× | ok |
| DOE/HACCKernels | 0.098 | 0.242 | 2.47× | 0.314 | 3.20× | ok |
| DOE/HPCCG | 0.659 | 1.528 | 2.32× | 2.226 | 3.38× | ok |
| DOE/PENNANT | 1.354 | 4.180 | 3.09× | 4.162 | 3.07× | ok |
| DOE/miniFE | 0.609 | 1.863 | 3.06× | 1.868 | 3.07× | ok |
| Misc-C++-EH/spirit | 0.404 | 2.433 | 6.02× | 1.657 | 4.10× | ok |
| Misc-C++-Large/ray | 0.100 | 0.279 | 2.79× | 0.304 | 3.04× | ok |
| Misc-C++-Large/sphereflake | 0.094 | 0.227 | 2.41× | 0.273 | 2.90× | ok |
| Misc-C++/bigfib | 0.116 | 0.362 | 3.12× | 0.423 | 3.65× | ok |
| Misc-C++/oopack_v1p8 | 0.031 | 0.094 | 3.03× | 0.096 | 3.10× | ok |
| Misc-C++/stepanov_container | 0.166 | 0.583 | 3.51× | 0.560 | 3.37× | ok |
| Misc-C++/stepanov_v1p2 | 0.029 | 0.118 | 4.07× | 0.089 | 3.07× | ok |
| PAQ8p | 0.066 | 0.457 | 6.92× | 0.236 | 3.58× | ok |
| Prolangs-C++/life | 0.003 | 0.029 | — | 0.024 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.063 | 6.30× | 0.047 | 4.70× | ok |
| Prolangs-C++/primes | 0.005 | 0.021 | — | 0.023 | — | ok |
| Shootout-C++-EH/except | 0.070 | 0.166 | 2.37× | 0.229 | 3.27× | ok |
| Shootout-C++/ackermann | 0.074 | 0.142 | 1.92× | 0.241 | 3.26× | ok |
| Shootout-C++/ary3 | 0.076 | 0.183 | 2.41× | 0.280 | 3.68× | ok |
| Shootout-C++/fibo | 0.074 | 0.162 | 2.19× | 0.231 | 3.12× | ok |
| Shootout-C++/hash | 0.096 | 0.262 | 2.73× | 0.290 | 3.02× | ok |
| Shootout-C++/hash2 | 0.107 | 0.309 | 2.89× | 0.368 | 3.44× | ok |
| Shootout-C++/heapsort | 0.083 | 0.171 | 2.06× | 0.291 | 3.51× | ok |
| Shootout-C++/lists | 0.075 | 0.196 | 2.61× | 0.236 | 3.15× | ok |
| Shootout-C++/lists1 | 0.086 | 0.212 | 2.47× | 0.259 | 3.01× | ok |
| Shootout-C++/matrix | 0.065 | 0.164 | 2.52× | 0.196 | 3.02× | ok |
| Shootout-C++/methcall | 0.069 | 0.146 | 2.12× | 0.207 | 3.00× | ok |
| Shootout-C++/moments | 0.094 | 0.240 | 2.55× | 0.256 | 2.72× | ok |
| Shootout-C++/random | 0.079 | 0.171 | 2.16× | 0.234 | 2.96× | ok |
| Shootout-C++/sieve | 0.085 | 0.224 | 2.64× | 0.252 | 2.96× | ok |
| SmallPT | 0.027 | 0.077 | 2.85× | 0.086 | 3.19× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.008 | 0.026 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.032 | — | ok |
| Stanford/Treesort | 0.008 | 0.027 | — | 0.031 | — | ok |
| bg/binarytrees/2 | 0.064 | 0.153 | 2.39× | 0.201 | 3.14× | ok |
| bg/fannkuchredux/3 | 0.031 | 0.067 | 2.16× | 0.079 | 2.55× | ok |
| bg/fasta/1 | 0.048 | 0.116 | 2.42× | 0.137 | 2.85× | ok |
| bg/fasta/2 | 0.048 | 0.117 | 2.44× | 0.128 | 2.67× | ok |
| bg/fasta/3 | 0.075 | 0.183 | 2.44× | 0.231 | 3.08× | ok |
| bg/fasta/4 | 0.070 | 0.160 | 2.29× | 0.184 | 2.63× | ok |
| bg/fasta/6 | 0.135 | 0.361 | 2.67× | 0.431 | 3.19× | ok |
| bg/mandelbrot/0 | 0.139 | 0.437 | 3.14× | 0.448 | 3.22× | ok |
| bg/mandelbrot/2 | 0.080 | 0.216 | 2.70× | 0.249 | 3.11× | ok |
| bg/mandelbrot/3 | 0.090 | 0.219 | 2.43× | 0.279 | 3.10× | ok |
| bg/mandelbrot/5 | 0.043 | 0.101 | 2.35× | 0.116 | 2.70× | ok |
| bg/mandelbrot/7 | 0.045 | 0.122 | 2.71× | 0.133 | 2.96× | ok |
| bg/mandelbrot/9 | 0.042 | 0.116 | 2.76× | 0.122 | 2.90× | ok |
| bg/nbody/1 | 0.028 | 0.096 | 3.43× | 0.078 | 2.79× | ok |
| bg/nbody/2 | 0.022 | 0.059 | 2.68× | 0.073 | 3.32× | ok |
| bg/nbody/3 | 0.025 | 0.068 | 2.72× | 0.071 | 2.84× | ok |
| bg/nbody/6 | 0.027 | 0.093 | 3.44× | 0.092 | 3.41× | ok |
| bg/pidigits/4 | 0.111 | 0.289 | 2.60× | 0.390 | 3.51× | ok |
| bg/pidigits/5 | 0.068 | 0.158 | 2.32× | 0.210 | 3.09× | ok |
| bg/revcomp/1 | 0.075 | 0.237 | 3.16× | 0.228 | 3.04× | ok |
| bg/revcomp/5 | 0.076 | 0.192 | 2.53× | 0.248 | 3.26× | ok |
| bg/spectralnorm/1 | 0.106 | 0.247 | 2.33× | 0.352 | 3.32× | ok |
| box2d | 1.411 | 4.145 | 2.94× | 4.447 | 3.15× | ok |
| fmt | 0.487 | 2.219 | 4.56× | 1.996 | 4.10× | ok |
| hexxagon | 0.242 | 0.572 | 2.36× | 0.820 | 3.39× | ok |
| lambda | 0.049 | 0.296 | 6.04× | 0.213 | 4.35× | ok |
| minisat | 0.057 | 0.273 | 4.79× | 0.205 | 3.60× | ok |
| nlohmann-json | 0.415 | 1.895 | 4.57× | 1.730 | 4.17× | ok |
| pugixml | 0.276 | 1.312 | 4.75× | 1.020 | 3.70× | ok |
| pugixml-tests | 3.372 | 14.554 | 4.32× | 12.472 | 3.70× | ok |
| rapidjson | 0.116 | 0.448 | 3.86× | 0.354 | 3.05× | ok |
| re2 | 3.058 | 9.818 | 3.21× | 6.901 | 2.26× | ok |
| re2-test-re2 | 4.750 | 15.200 | 3.20× | 14.918 | 3.14× | ok |
| re2-test-search | 4.711 | 14.516 | 3.08× | 14.929 | 3.17× | ok |
| tramp3d-v4 | 0.726 | 7.459 | 10.27× | 2.674 | 3.68× | ok |

### O3 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.130 | 0.827 | 6.36× | 0.459 | 3.53× | ok |
| Adobe-C++/loop_unroll | 0.436 | 5.338 | 12.24× | 4.090 | 9.38× | ok |
| Adobe-C++/simple_types_constant_folding | 0.241 | 2.825 | 11.72× | 2.240 | 9.29× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.202 | 2.170 | 10.74× | 1.803 | 8.93× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 1.000 | 10.87× | 0.460 | 5.00× | ok |
| Adobe-C++/stepanov_vector | 0.129 | 1.399 | 10.84× | 0.642 | 4.98× | ok |
| Bullet | 6.268 | 38.018 | 6.07× | 26.145 | 4.17× | ok |
| CLAMR | 4.858 | 22.812 | 4.70× | 18.319 | 3.77× | ok |
| CoyoteBench/almabench | 0.036 | 0.150 | 4.17× | 0.118 | 3.28× | ok |
| CoyoteBench/fftbench | 0.116 | 0.389 | 3.35× | 0.395 | 3.41× | ok |
| CoyoteBench/huffbench | 0.039 | 0.226 | 5.79× | 0.142 | 3.64× | ok |
| CoyoteBench/lpbench | 0.033 | 0.161 | 4.88× | 0.172 | 5.21× | ok |
| DOE/HACCKernels | 0.112 | 0.350 | 3.12× | 0.375 | 3.35× | ok |
| DOE/HPCCG | 0.698 | 2.369 | 3.39× | 2.605 | 3.73× | ok |
| DOE/PENNANT | 1.753 | 5.795 | 3.31× | 5.409 | 3.09× | ok |
| DOE/miniFE | 0.832 | 4.126 | 4.96× | 3.600 | 4.33× | ok |
| Misc-C++-EH/spirit | 0.663 | 3.855 | 5.81× | 2.914 | 4.40× | ok |
| Misc-C++-Large/ray | 0.110 | 0.497 | 4.52× | 0.366 | 3.33× | ok |
| Misc-C++-Large/sphereflake | 0.113 | 0.759 | 6.72× | 0.384 | 3.40× | ok |
| Misc-C++/bigfib | 0.142 | 0.511 | 3.60× | 0.571 | 4.02× | ok |
| Misc-C++/oopack_v1p8 | 0.039 | 0.187 | 4.79× | 0.171 | 4.38× | ok |
| Misc-C++/stepanov_container | 0.227 | 0.923 | 4.07× | 0.868 | 3.82× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.200 | 5.13× | 0.185 | 4.74× | ok |
| PAQ8p | 0.330 | 3.975 | 12.05× | 1.726 | 5.23× | ok |
| Prolangs-C++/life | 0.009 | 0.094 | — | 0.061 | — | ok |
| Prolangs-C++/ocean | 0.021 | 0.204 | 9.71× | 0.123 | 5.86× | ok |
| Prolangs-C++/primes | 0.007 | 0.033 | — | 0.032 | — | ok |
| Shootout-C++-EH/except | 0.074 | 0.196 | 2.65× | 0.252 | 3.41× | ok |
| Shootout-C++/ackermann | 0.077 | 0.181 | 2.35× | 0.246 | 3.19× | ok |
| Shootout-C++/ary3 | 0.092 | 0.221 | 2.40× | 0.297 | 3.23× | ok |
| Shootout-C++/fibo | 0.076 | 0.209 | 2.75× | 0.230 | 3.03× | ok |
| Shootout-C++/hash | 0.113 | 0.350 | 3.10× | 0.378 | 3.35× | ok |
| Shootout-C++/hash2 | 0.134 | 0.438 | 3.27× | 0.531 | 3.96× | ok |
| Shootout-C++/heapsort | 0.085 | 0.204 | 2.40× | 0.240 | 2.82× | ok |
| Shootout-C++/lists | 0.080 | 0.221 | 2.76× | 0.255 | 3.19× | ok |
| Shootout-C++/lists1 | 0.094 | 0.253 | 2.69× | 0.362 | 3.85× | ok |
| Shootout-C++/matrix | 0.071 | 0.201 | 2.83× | 0.286 | 4.03× | ok |
| Shootout-C++/methcall | 0.069 | 0.186 | 2.70× | 0.201 | 2.91× | ok |
| Shootout-C++/moments | 0.106 | 0.306 | 2.89× | 0.317 | 2.99× | ok |
| Shootout-C++/random | 0.082 | 0.197 | 2.40× | 0.244 | 2.98× | ok |
| Shootout-C++/sieve | 0.091 | 0.243 | 2.67× | 0.280 | 3.08× | ok |
| SmallPT | 0.040 | 0.269 | 6.72× | 0.164 | 4.10× | ok |
| Stanford/Bubblesort | 0.011 | 0.051 | 4.64× | 0.048 | 4.36× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.066 | 5.50× | ok |
| Stanford/Puzzle | 0.019 | 0.118 | 6.21× | 0.111 | 5.84× | ok |
| Stanford/Treesort | 0.014 | 0.081 | 5.79× | 0.052 | 3.71× | ok |
| bg/binarytrees/2 | 0.069 | 0.401 | 5.81× | 0.219 | 3.17× | ok |
| bg/fannkuchredux/3 | 0.036 | 0.113 | 3.14× | 0.109 | 3.03× | ok |
| bg/fasta/1 | 0.055 | 0.153 | 2.78× | 0.175 | 3.18× | ok |
| bg/fasta/2 | 0.055 | 0.154 | 2.80× | 0.164 | 2.98× | ok |
| bg/fasta/3 | 0.083 | 0.226 | 2.72× | 0.276 | 3.33× | ok |
| bg/fasta/4 | 0.087 | 0.181 | 2.08× | 0.207 | 2.38× | ok |
| bg/fasta/6 | 0.135 | 0.427 | 3.16× | 0.575 | 4.26× | ok |
| bg/mandelbrot/0 | 0.178 | 0.604 | 3.39× | 0.668 | 3.75× | ok |
| bg/mandelbrot/2 | 0.091 | 0.292 | 3.21× | 0.282 | 3.10× | ok |
| bg/mandelbrot/3 | 0.091 | 0.228 | 2.51× | 0.272 | 2.99× | ok |
| bg/mandelbrot/5 | 0.050 | 0.150 | 3.00× | 0.156 | 3.12× | ok |
| bg/mandelbrot/7 | 0.058 | 0.177 | 3.05× | 0.171 | 2.95× | ok |
| bg/mandelbrot/9 | 0.055 | 0.180 | 3.27× | 0.160 | 2.91× | ok |
| bg/nbody/1 | 0.043 | 0.149 | 3.47× | 0.156 | 3.63× | ok |
| bg/nbody/2 | 0.031 | 0.115 | 3.71× | 0.127 | 4.10× | ok |
| bg/nbody/3 | 0.030 | 0.123 | 4.10× | 0.102 | 3.40× | ok |
| bg/nbody/6 | 0.040 | 0.172 | 4.30× | 0.166 | 4.15× | ok |
| bg/pidigits/4 | 0.115 | 0.330 | 2.87× | 0.420 | 3.65× | ok |
| bg/pidigits/5 | 0.081 | 0.190 | 2.35× | 0.232 | 2.86× | ok |
| bg/revcomp/1 | 0.080 | 0.267 | 3.34× | 0.300 | 3.75× | ok |
| bg/revcomp/5 | 0.087 | 0.223 | 2.56× | 0.274 | 3.15× | ok |
| bg/spectralnorm/1 | 0.107 | 0.326 | 3.05× | 0.412 | 3.85× | ok |
| box2d | 1.707 | 6.716 | 3.93× | 4.840 | 2.84× | ok |
| fmt | 0.968 | 5.219 | 5.39× | 3.590 | 3.71× | ok |
| hexxagon | 0.288 | 1.039 | 3.61× | 1.088 | 3.78× | ok |
| lambda | 0.118 | 1.107 | 9.38× | 0.565 | 4.79× | ok |
| minisat | 0.142 | 0.985 | 6.94× | 0.639 | 4.50× | ok |
| nlohmann-json | 0.756 | 3.463 | 4.58× | 2.711 | 3.59× | ok |
| pugixml | 0.728 | 5.445 | 7.48× | 3.986 | 5.48× | ok |
| pugixml-tests | 5.012 | 34.780 | 6.94× | 24.075 | 4.80× | ok |
| rapidjson | 0.231 | 1.162 | 5.03× | 0.683 | 2.96× | ok |
| re2 | 3.050 | 18.444 | 6.05× | 10.328 | 3.39× | ok |
| re2-test-re2 | 5.965 | 27.163 | 4.55× | 21.399 | 3.59× | ok |
| re2-test-search | 5.986 | 23.763 | 3.97× | 21.023 | 3.51× | ok |
| tramp3d-v4 | 2.651 | 23.029 | 8.69× | 14.395 | 5.43× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.060 | 0.137 | 2.28× | 0.185 | 3.08× | ok |
| Adobe-C++/loop_unroll | 0.038 | 0.102 | 2.68× | 0.100 | 2.63× | ok |
| Adobe-C++/simple_types_constant_folding | 0.038 | 0.100 | 2.63× | 0.106 | 2.79× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.092 | 2.71× | 0.121 | 3.56× | ok |
| Adobe-C++/stepanov_abstraction | 0.032 | 0.067 | 2.09× | 0.103 | 3.22× | ok |
| Adobe-C++/stepanov_vector | 0.064 | 0.121 | 1.89× | 0.159 | 2.48× | ok |
| Bullet | 4.446 | 9.840 | 2.21× | 13.130 | 2.95× | ok |
| CLAMR | 2.271 | 4.427 | 1.95× | 7.329 | 3.23× | ok |
| CoyoteBench/almabench | 0.026 | 0.055 | 2.12× | 0.075 | 2.88× | ok |
| CoyoteBench/fftbench | 0.096 | 0.214 | 2.23× | 0.268 | 2.79× | ok |
| CoyoteBench/huffbench | 0.031 | 0.063 | 2.03× | 0.086 | 2.77× | ok |
| CoyoteBench/lpbench | 0.026 | 0.052 | 2.00× | 0.069 | 2.65× | ok |
| DOE/HACCKernels | 0.100 | 0.213 | 2.13× | 0.291 | 2.91× | ok |
| DOE/HPCCG | 0.672 | 1.334 | 1.99× | 2.106 | 3.13× | ok |
| DOE/PENNANT | 1.359 | 2.902 | 2.14× | 3.686 | 2.71× | ok |
| DOE/miniFE | 0.563 | 1.193 | 2.12× | 1.602 | 2.85× | ok |
| Misc-C++-EH/spirit | 0.286 | 0.823 | 2.88× | 1.313 | 4.59× | ok |
| Misc-C++-Large/ray | 0.095 | 0.227 | 2.39× | 0.276 | 2.91× | ok |
| Misc-C++-Large/sphereflake | 0.093 | 0.198 | 2.13× | 0.261 | 2.81× | ok |
| Misc-C++/bigfib | 0.105 | 0.241 | 2.30× | 0.359 | 3.42× | ok |
| Misc-C++/oopack_v1p8 | 0.030 | 0.064 | 2.13× | 0.085 | 2.83× | ok |
| Misc-C++/stepanov_container | 0.151 | 0.340 | 2.25× | 0.472 | 3.13× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.061 | 2.18× | 0.074 | 2.64× | ok |
| PAQ8p | 0.044 | 0.119 | 2.70× | 0.133 | 3.02× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.021 | — | 0.032 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.021 | — | ok |
| Shootout-C++-EH/except | 0.069 | 0.162 | 2.35× | 0.213 | 3.09× | ok |
| Shootout-C++/ackermann | 0.073 | 0.144 | 1.97× | 0.230 | 3.15× | ok |
| Shootout-C++/ary3 | 0.072 | 0.167 | 2.32× | 0.254 | 3.53× | ok |
| Shootout-C++/fibo | 0.073 | 0.164 | 2.25× | 0.223 | 3.05× | ok |
| Shootout-C++/hash | 0.091 | 0.198 | 2.18× | 0.255 | 2.80× | ok |
| Shootout-C++/hash2 | 0.100 | 0.237 | 2.37× | 0.296 | 2.96× | ok |
| Shootout-C++/heapsort | 0.084 | 0.171 | 2.04× | 0.236 | 2.81× | ok |
| Shootout-C++/lists | 0.072 | 0.164 | 2.28× | 0.205 | 2.85× | ok |
| Shootout-C++/lists1 | 0.081 | 0.173 | 2.14× | 0.233 | 2.88× | ok |
| Shootout-C++/matrix | 0.065 | 0.161 | 2.48× | 0.187 | 2.88× | ok |
| Shootout-C++/methcall | 0.068 | 0.144 | 2.12× | 0.202 | 2.97× | ok |
| Shootout-C++/moments | 0.088 | 0.188 | 2.14× | 0.232 | 2.64× | ok |
| Shootout-C++/random | 0.081 | 0.172 | 2.12× | 0.225 | 2.78× | ok |
| Shootout-C++/sieve | 0.081 | 0.184 | 2.27× | 0.228 | 2.81× | ok |
| SmallPT | 0.026 | 0.050 | 1.92× | 0.078 | 3.00× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.009 | 0.021 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.008 | 0.021 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.064 | 0.148 | 2.31× | 0.193 | 3.02× | ok |
| bg/fannkuchredux/3 | 0.031 | 0.058 | 1.87× | 0.075 | 2.42× | ok |
| bg/fasta/1 | 0.047 | 0.093 | 1.98× | 0.125 | 2.66× | ok |
| bg/fasta/2 | 0.046 | 0.092 | 2.00× | 0.117 | 2.54× | ok |
| bg/fasta/3 | 0.075 | 0.172 | 2.29× | 0.217 | 2.89× | ok |
| bg/fasta/4 | 0.070 | 0.143 | 2.04× | 0.170 | 2.43× | ok |
| bg/fasta/6 | 0.120 | 0.260 | 2.17× | 0.395 | 3.29× | ok |
| bg/mandelbrot/0 | 0.124 | 0.280 | 2.26× | 0.398 | 3.21× | ok |
| bg/mandelbrot/2 | 0.078 | 0.196 | 2.51× | 0.231 | 2.96× | ok |
| bg/mandelbrot/3 | 0.089 | 0.217 | 2.44× | 0.247 | 2.78× | ok |
| bg/mandelbrot/5 | 0.042 | 0.081 | 1.93× | 0.107 | 2.55× | ok |
| bg/mandelbrot/7 | 0.043 | 0.088 | 2.05× | 0.117 | 2.72× | ok |
| bg/mandelbrot/9 | 0.039 | 0.084 | 2.15× | 0.110 | 2.82× | ok |
| bg/nbody/1 | 0.027 | 0.056 | 2.07× | 0.067 | 2.48× | ok |
| bg/nbody/2 | 0.022 | 0.049 | 2.23× | 0.069 | 3.14× | ok |
| bg/nbody/3 | 0.025 | 0.056 | 2.24× | 0.067 | 2.68× | ok |
| bg/nbody/6 | 0.026 | 0.054 | 2.08× | 0.071 | 2.73× | ok |
| bg/pidigits/4 | 0.110 | 0.261 | 2.37× | 0.379 | 3.45× | ok |
| bg/pidigits/5 | 0.068 | 0.153 | 2.25× | 0.199 | 2.93× | ok |
| bg/revcomp/1 | 0.071 | 0.168 | 2.37× | 0.205 | 2.89× | ok |
| bg/revcomp/5 | 0.072 | 0.147 | 2.04× | 0.235 | 3.26× | ok |
| bg/spectralnorm/1 | 0.113 | 0.228 | 2.02× | 0.323 | 2.86× | ok |
| box2d | 1.286 | 2.749 | 2.14× | 3.621 | 2.82× | ok |
| fmt | 0.411 | 0.955 | 2.32× | 1.526 | 3.71× | ok |
| hexxagon | 0.238 | 0.481 | 2.02× | 0.781 | 3.28× | ok |
| lambda | 0.038 | 0.119 | 3.13× | 0.156 | 4.11× | ok |
| minisat | 0.049 | 0.122 | 2.49× | 0.164 | 3.35× | ok |
| nlohmann-json | 0.325 | 0.838 | 2.58× | 1.313 | 4.04× | ok |
| pugixml | 0.210 | 0.454 | 2.16× | 0.751 | 3.58× | ok |
| pugixml-tests | 2.854 | 7.246 | 2.54× | 9.361 | 3.28× | ok |
| rapidjson | 0.092 | 0.207 | 2.25× | 0.274 | 2.98× | ok |
| re2 | 2.742 | 6.346 | 2.31× | 5.852 | 2.13× | ok |
| re2-test-re2 | 4.306 | 9.679 | 2.25× | 12.721 | 2.95× | ok |
| re2-test-search | 4.150 | 8.713 | 2.10× | 13.071 | 3.15× | ok |
| tramp3d-v4 | 0.470 | 2.322 | 4.94× | 1.559 | 3.32× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
