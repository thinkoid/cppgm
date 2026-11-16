# Public benchmarks: Intel Xeon (dedicated)

Measured compiler: [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43918648976) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.25× | 74 | 2.89× | 74 |
| Compile CPU, `-O0` | 3.13× | 74 | 3.09× | 74 |
| Compile CPU, `-O3` | 4.27× | 79 | 3.80× | 79 |
| Compile peak RSS, `-O0` | 1.26× | 81 | 1.95× | 81 |
| Compile peak RSS, `-O3` | 1.42× | 81 | 1.91× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.04× | 81 | 1.02× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.00× | 81 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.959 to 1.077; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.064 | 0.209 | 3.27× | 0.164 | 2.56× | ok |
| Adobe-C++/loop_unroll | 0.048 | 0.486 | 10.12× | 0.164 | 3.42× | ok |
| Adobe-C++/simple_types_constant_folding | 0.052 | 0.578 | 11.12× | 0.187 | 3.60× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.044 | 0.396 | 9.00× | 0.169 | 3.84× | ok |
| Adobe-C++/stepanov_abstraction | 0.033 | 0.158 | 4.79× | 0.104 | 3.15× | ok |
| Adobe-C++/stepanov_vector | 0.060 | 0.256 | 4.27× | 0.180 | 3.00× | ok |
| Bullet | 4.134 | 15.511 | 3.75× | 14.165 | 3.43× | ok |
| CLAMR | 2.087 | 8.093 | 3.88× | 6.914 | 3.31× | ok |
| CoyoteBench/almabench | 0.026 | 0.062 | 2.38× | 0.075 | 2.88× | ok |
| CoyoteBench/fftbench | 0.093 | 0.227 | 2.44× | 0.283 | 3.04× | ok |
| CoyoteBench/huffbench | 0.024 | 0.062 | 2.58× | 0.069 | 2.88× | ok |
| CoyoteBench/lpbench | 0.024 | 0.063 | 2.62× | 0.070 | 2.92× | ok |
| DOE/HACCKernels | 0.095 | 0.241 | 2.54× | 0.307 | 3.23× | ok |
| DOE/HPCCG | 0.567 | 1.437 | 2.53× | 1.771 | 3.12× | ok |
| DOE/PENNANT | 1.258 | 3.420 | 2.72× | 3.606 | 2.87× | ok |
| DOE/miniFE | 0.543 | 1.753 | 3.23× | 1.803 | 3.32× | ok |
| Misc-C++-EH/spirit | 0.375 | 2.259 | 6.02× | 1.516 | 4.04× | ok |
| Misc-C++-Large/ray | 0.093 | 0.228 | 2.45× | 0.263 | 2.83× | ok |
| Misc-C++-Large/sphereflake | 0.078 | 0.189 | 2.42× | 0.228 | 2.92× | ok |
| Misc-C++/bigfib | 0.107 | 0.324 | 3.03× | 0.319 | 2.98× | ok |
| Misc-C++/oopack_v1p8 | 0.026 | 0.081 | 3.12× | 0.085 | 3.27× | ok |
| Misc-C++/stepanov_container | 0.135 | 0.476 | 3.53× | 0.429 | 3.18× | ok |
| Misc-C++/stepanov_v1p2 | 0.025 | 0.097 | 3.88× | 0.080 | 3.20× | ok |
| PAQ8p | 0.055 | 0.408 | 7.42× | 0.189 | 3.44× | ok |
| Prolangs-C++/life | 0.003 | 0.027 | — | 0.023 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.058 | — | 0.039 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.020 | — | 0.023 | — | ok |
| Shootout-C++-EH/except | 0.060 | 0.137 | 2.28× | 0.194 | 3.23× | ok |
| Shootout-C++/ackermann | 0.060 | 0.132 | 2.20× | 0.194 | 3.23× | ok |
| Shootout-C++/ary3 | 0.069 | 0.172 | 2.49× | 0.213 | 3.09× | ok |
| Shootout-C++/fibo | 0.060 | 0.134 | 2.23× | 0.188 | 3.13× | ok |
| Shootout-C++/hash | 0.095 | 0.249 | 2.62× | 0.268 | 2.82× | ok |
| Shootout-C++/hash2 | 0.091 | 0.255 | 2.80× | 0.270 | 2.97× | ok |
| Shootout-C++/heapsort | 0.072 | 0.158 | 2.19× | 0.220 | 3.06× | ok |
| Shootout-C++/lists | 0.073 | 0.181 | 2.48× | 0.226 | 3.10× | ok |
| Shootout-C++/lists1 | 0.077 | 0.209 | 2.71× | 0.234 | 3.04× | ok |
| Shootout-C++/matrix | 0.061 | 0.144 | 2.36× | 0.186 | 3.05× | ok |
| Shootout-C++/methcall | 0.064 | 0.136 | 2.12× | 0.195 | 3.05× | ok |
| Shootout-C++/moments | 0.087 | 0.229 | 2.63× | 0.241 | 2.77× | ok |
| Shootout-C++/random | 0.077 | 0.157 | 2.04× | 0.213 | 2.77× | ok |
| Shootout-C++/sieve | 0.080 | 0.213 | 2.66× | 0.241 | 3.01× | ok |
| SmallPT | 0.025 | 0.074 | 2.96× | 0.074 | 2.96× | ok |
| Stanford/Bubblesort | 0.008 | 0.022 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.027 | — | ok |
| Stanford/Puzzle | 0.008 | 0.030 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.008 | 0.025 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.138 | 2.19× | 0.190 | 3.02× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.061 | 2.10× | 0.074 | 2.55× | ok |
| bg/fasta/1 | 0.048 | 0.109 | 2.27× | 0.124 | 2.58× | ok |
| bg/fasta/2 | 0.045 | 0.110 | 2.44× | 0.120 | 2.67× | ok |
| bg/fasta/3 | 0.070 | 0.165 | 2.36× | 0.205 | 2.93× | ok |
| bg/fasta/4 | 0.069 | 0.133 | 1.93× | 0.168 | 2.43× | ok |
| bg/fasta/6 | 0.118 | 0.347 | 2.94× | 0.374 | 3.17× | ok |
| bg/mandelbrot/0 | 0.136 | 0.402 | 2.96× | 0.392 | 2.88× | ok |
| bg/mandelbrot/2 | 0.077 | 0.193 | 2.51× | 0.236 | 3.06× | ok |
| bg/mandelbrot/3 | 0.080 | 0.185 | 2.31× | 0.231 | 2.89× | ok |
| bg/mandelbrot/5 | 0.039 | 0.095 | 2.44× | 0.110 | 2.82× | ok |
| bg/mandelbrot/7 | 0.040 | 0.116 | 2.90× | 0.118 | 2.95× | ok |
| bg/mandelbrot/9 | 0.037 | 0.101 | 2.73× | 0.106 | 2.86× | ok |
| bg/nbody/1 | 0.024 | 0.091 | 3.79× | 0.077 | 3.21× | ok |
| bg/nbody/2 | 0.024 | 0.060 | 2.50× | 0.065 | 2.71× | ok |
| bg/nbody/3 | 0.023 | 0.057 | 2.48× | 0.065 | 2.83× | ok |
| bg/nbody/6 | 0.024 | 0.085 | 3.54× | 0.079 | 3.29× | ok |
| bg/pidigits/4 | 0.107 | 0.258 | 2.41× | 0.336 | 3.14× | ok |
| bg/pidigits/5 | 0.065 | 0.146 | 2.25× | 0.198 | 3.05× | ok |
| bg/revcomp/1 | 0.071 | 0.187 | 2.63× | 0.220 | 3.10× | ok |
| bg/revcomp/5 | 0.062 | 0.169 | 2.73× | 0.200 | 3.23× | ok |
| bg/spectralnorm/1 | 0.096 | 0.219 | 2.28× | 0.290 | 3.02× | ok |
| box2d | 1.197 | 3.647 | 3.05× | 3.868 | 3.23× | ok |
| fmt | 0.443 | 2.090 | 4.72× | 1.541 | 3.48× | ok |
| hexxagon | 0.218 | 0.538 | 2.47× | 0.643 | 2.95× | ok |
| lambda | 0.044 | 0.264 | 6.00× | 0.187 | 4.25× | ok |
| minisat | 0.050 | 0.248 | 4.96× | 0.177 | 3.54× | ok |
| nlohmann-json | 0.347 | 1.622 | 4.67× | 1.336 | 3.85× | ok |
| pugixml | 0.220 | 1.121 | 5.10× | 0.737 | 3.35× | ok |
| pugixml-tests | 2.940 | 12.457 | 4.24× | 9.585 | 3.26× | ok |
| rapidjson | 0.097 | 0.382 | 3.94× | 0.280 | 2.89× | ok |
| re2 | 2.622 | 8.691 | 3.31× | 7.976 | 3.04× | ok |
| re2-test-re2 | 3.750 | 12.239 | 3.26× | 11.485 | 3.06× | ok |
| re2-test-search | 3.741 | 11.704 | 3.13× | 11.297 | 3.02× | ok |
| tramp3d-v4 | 0.847 | 7.103 | 8.39× | 3.074 | 3.63× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.107 | 0.777 | 7.26× | 0.458 | 4.28× | ok |
| Adobe-C++/loop_unroll | 0.413 | 4.821 | 11.67× | 4.010 | 9.71× | ok |
| Adobe-C++/simple_types_constant_folding | 0.232 | 2.684 | 11.57× | 2.281 | 9.83× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.199 | 2.131 | 10.71× | 1.733 | 8.71× | ok |
| Adobe-C++/stepanov_abstraction | 0.086 | 0.890 | 10.35× | 0.428 | 4.98× | ok |
| Adobe-C++/stepanov_vector | 0.107 | 1.129 | 10.55× | 0.512 | 4.79× | ok |
| Bullet | 5.737 | 33.330 | 5.81× | 23.966 | 4.18× | ok |
| CLAMR | 3.947 | 21.662 | 5.49× | 15.974 | 4.05× | ok |
| CoyoteBench/almabench | 0.029 | 0.137 | 4.72× | 0.104 | 3.59× | ok |
| CoyoteBench/fftbench | 0.112 | 0.383 | 3.42× | 0.387 | 3.46× | ok |
| CoyoteBench/huffbench | 0.033 | 0.192 | 5.82× | 0.117 | 3.55× | ok |
| CoyoteBench/lpbench | 0.031 | 0.153 | 4.94× | 0.166 | 5.35× | ok |
| DOE/HACCKernels | 0.103 | 0.328 | 3.18× | 0.342 | 3.32× | ok |
| DOE/HPCCG | 0.622 | 2.055 | 3.30× | 2.133 | 3.43× | ok |
| DOE/PENNANT | 1.540 | 5.408 | 3.51× | 5.105 | 3.31× | ok |
| DOE/miniFE | 0.750 | 3.604 | 4.81× | 2.906 | 3.87× | ok |
| Misc-C++-EH/spirit | 0.594 | 3.130 | 5.27× | 2.829 | 4.76× | ok |
| Misc-C++-Large/ray | 0.096 | 0.406 | 4.23× | 0.322 | 3.35× | ok |
| Misc-C++-Large/sphereflake | 0.092 | 0.658 | 7.15× | 0.299 | 3.25× | ok |
| Misc-C++/bigfib | 0.128 | 0.482 | 3.77× | 0.460 | 3.59× | ok |
| Misc-C++/oopack_v1p8 | 0.033 | 0.157 | 4.76× | 0.144 | 4.36× | ok |
| Misc-C++/stepanov_container | 0.192 | 0.771 | 4.02× | 0.770 | 4.01× | ok |
| Misc-C++/stepanov_v1p2 | 0.036 | 0.180 | 5.00× | 0.163 | 4.53× | ok |
| PAQ8p | 0.285 | 3.363 | 11.80× | 1.446 | 5.07× | ok |
| Prolangs-C++/life | 0.009 | 0.090 | — | 0.059 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.183 | 9.63× | 0.105 | 5.53× | ok |
| Prolangs-C++/primes | 0.006 | 0.030 | — | 0.032 | — | ok |
| Shootout-C++-EH/except | 0.063 | 0.165 | 2.62× | 0.196 | 3.11× | ok |
| Shootout-C++/ackermann | 0.063 | 0.172 | 2.73× | 0.190 | 3.02× | ok |
| Shootout-C++/ary3 | 0.079 | 0.216 | 2.73× | 0.235 | 2.97× | ok |
| Shootout-C++/fibo | 0.062 | 0.175 | 2.82× | 0.187 | 3.02× | ok |
| Shootout-C++/hash | 0.107 | 0.338 | 3.16× | 0.359 | 3.36× | ok |
| Shootout-C++/hash2 | 0.118 | 0.380 | 3.22× | 0.401 | 3.40× | ok |
| Shootout-C++/heapsort | 0.077 | 0.191 | 2.48× | 0.238 | 3.09× | ok |
| Shootout-C++/lists | 0.081 | 0.207 | 2.56× | 0.245 | 3.02× | ok |
| Shootout-C++/lists1 | 0.085 | 0.257 | 3.02× | 0.269 | 3.16× | ok |
| Shootout-C++/matrix | 0.066 | 0.189 | 2.86× | 0.261 | 3.95× | ok |
| Shootout-C++/methcall | 0.063 | 0.167 | 2.65× | 0.207 | 3.29× | ok |
| Shootout-C++/moments | 0.102 | 0.288 | 2.82× | 0.300 | 2.94× | ok |
| Shootout-C++/random | 0.077 | 0.180 | 2.34× | 0.223 | 2.90× | ok |
| Shootout-C++/sieve | 0.084 | 0.230 | 2.74× | 0.278 | 3.31× | ok |
| SmallPT | 0.034 | 0.250 | 7.35× | 0.146 | 4.29× | ok |
| Stanford/Bubblesort | 0.010 | 0.050 | 5.00× | 0.045 | 4.50× | ok |
| Stanford/FloatMM | 0.011 | 0.055 | 5.00× | 0.060 | 5.45× | ok |
| Stanford/Puzzle | 0.018 | 0.104 | 5.78× | 0.105 | 5.83× | ok |
| Stanford/Treesort | 0.013 | 0.073 | 5.62× | 0.049 | 3.77× | ok |
| bg/binarytrees/2 | 0.064 | 0.364 | 5.69× | 0.199 | 3.11× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.107 | 3.24× | 0.102 | 3.09× | ok |
| bg/fasta/1 | 0.053 | 0.146 | 2.75× | 0.158 | 2.98× | ok |
| bg/fasta/2 | 0.053 | 0.147 | 2.77× | 0.164 | 3.09× | ok |
| bg/fasta/3 | 0.075 | 0.202 | 2.69× | 0.240 | 3.20× | ok |
| bg/fasta/4 | 0.069 | 0.173 | 2.51× | 0.200 | 2.90× | ok |
| bg/fasta/6 | 0.130 | 0.416 | 3.20× | 0.450 | 3.46× | ok |
| bg/mandelbrot/0 | 0.163 | 0.576 | 3.53× | 0.575 | 3.53× | ok |
| bg/mandelbrot/2 | 0.086 | 0.237 | 2.76× | 0.271 | 3.15× | ok |
| bg/mandelbrot/3 | 0.082 | 0.216 | 2.63× | 0.265 | 3.23× | ok |
| bg/mandelbrot/5 | 0.043 | 0.129 | 3.00× | 0.134 | 3.12× | ok |
| bg/mandelbrot/7 | 0.049 | 0.170 | 3.47× | 0.153 | 3.12× | ok |
| bg/mandelbrot/9 | 0.046 | 0.157 | 3.41× | 0.144 | 3.13× | ok |
| bg/nbody/1 | 0.036 | 0.135 | 3.75× | 0.146 | 4.06× | ok |
| bg/nbody/2 | 0.027 | 0.107 | 3.96× | 0.104 | 3.85× | ok |
| bg/nbody/3 | 0.026 | 0.103 | 3.96× | 0.093 | 3.58× | ok |
| bg/nbody/6 | 0.036 | 0.139 | 3.86× | 0.146 | 4.06× | ok |
| bg/pidigits/4 | 0.105 | 0.307 | 2.92× | 0.367 | 3.50× | ok |
| bg/pidigits/5 | 0.067 | 0.179 | 2.67× | 0.215 | 3.21× | ok |
| bg/revcomp/1 | 0.076 | 0.215 | 2.83× | 0.253 | 3.33× | ok |
| bg/revcomp/5 | 0.070 | 0.208 | 2.97× | 0.228 | 3.26× | ok |
| bg/spectralnorm/1 | 0.101 | 0.295 | 2.92× | 0.321 | 3.18× | ok |
| box2d | 1.496 | 6.417 | 4.29× | 5.419 | 3.62× | ok |
| fmt | 0.883 | 4.707 | 5.33× | 3.331 | 3.77× | ok |
| hexxagon | 0.250 | 0.884 | 3.54× | 0.906 | 3.62× | ok |
| lambda | 0.107 | 0.984 | 9.20× | 0.497 | 4.64× | ok |
| minisat | 0.124 | 0.865 | 6.98× | 0.543 | 4.38× | ok |
| nlohmann-json | 0.693 | 3.016 | 4.35× | 2.336 | 3.37× | ok |
| pugixml | 0.603 | 4.764 | 7.90× | 3.085 | 5.12× | ok |
| pugixml-tests | 4.325 | 29.752 | 6.88× | 19.312 | 4.47× | ok |
| rapidjson | 0.206 | 0.979 | 4.75× | 0.578 | 2.81× | ok |
| re2 | 3.493 | 15.185 | 4.35× | 11.987 | 3.43× | ok |
| re2-test-re2 | 4.886 | 22.429 | 4.59× | 17.232 | 3.53× | ok |
| re2-test-search | 4.864 | 20.232 | 4.16× | 16.202 | 3.33× | ok |
| tramp3d-v4 | 3.171 | 20.663 | 6.52× | 16.781 | 5.29× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.059 | 0.108 | 1.83× | 0.139 | 2.36× | ok |
| Adobe-C++/loop_unroll | 0.032 | 0.077 | 2.41× | 0.098 | 3.06× | ok |
| Adobe-C++/simple_types_constant_folding | 0.033 | 0.081 | 2.45× | 0.097 | 2.94× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.032 | 0.075 | 2.34× | 0.090 | 2.81× | ok |
| Adobe-C++/stepanov_abstraction | 0.029 | 0.059 | 2.03× | 0.077 | 2.66× | ok |
| Adobe-C++/stepanov_vector | 0.052 | 0.115 | 2.21× | 0.147 | 2.83× | ok |
| Bullet | 3.692 | 9.208 | 2.49× | 11.702 | 3.17× | ok |
| CLAMR | 1.789 | 4.308 | 2.41× | 5.599 | 3.13× | ok |
| CoyoteBench/almabench | 0.024 | 0.050 | 2.08× | 0.069 | 2.88× | ok |
| CoyoteBench/fftbench | 0.090 | 0.200 | 2.22× | 0.261 | 2.90× | ok |
| CoyoteBench/huffbench | 0.024 | 0.049 | 2.04× | 0.065 | 2.71× | ok |
| CoyoteBench/lpbench | 0.024 | 0.049 | 2.04× | 0.065 | 2.71× | ok |
| DOE/HACCKernels | 0.093 | 0.204 | 2.19× | 0.277 | 2.98× | ok |
| DOE/HPCCG | 0.554 | 1.243 | 2.24× | 1.667 | 3.01× | ok |
| DOE/PENNANT | 1.187 | 2.623 | 2.21× | 3.211 | 2.71× | ok |
| DOE/miniFE | 0.491 | 1.154 | 2.35× | 1.483 | 3.02× | ok |
| Misc-C++-EH/spirit | 0.258 | 0.794 | 3.08× | 0.984 | 3.81× | ok |
| Misc-C++-Large/ray | 0.088 | 0.186 | 2.11× | 0.242 | 2.75× | ok |
| Misc-C++-Large/sphereflake | 0.075 | 0.165 | 2.20× | 0.227 | 3.03× | ok |
| Misc-C++/bigfib | 0.092 | 0.213 | 2.32× | 0.285 | 3.10× | ok |
| Misc-C++/oopack_v1p8 | 0.025 | 0.053 | 2.12× | 0.070 | 2.80× | ok |
| Misc-C++/stepanov_container | 0.122 | 0.273 | 2.24× | 0.363 | 2.98× | ok |
| Misc-C++/stepanov_v1p2 | 0.024 | 0.050 | 2.08× | 0.068 | 2.83× | ok |
| PAQ8p | 0.036 | 0.099 | 2.75× | 0.105 | 2.92× | ok |
| Prolangs-C++/life | 0.003 | 0.008 | — | 0.017 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.019 | — | 0.027 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.013 | — | 0.021 | — | ok |
| Shootout-C++-EH/except | 0.060 | 0.138 | 2.30× | 0.178 | 2.97× | ok |
| Shootout-C++/ackermann | 0.059 | 0.135 | 2.29× | 0.171 | 2.90× | ok |
| Shootout-C++/ary3 | 0.065 | 0.156 | 2.40× | 0.201 | 3.09× | ok |
| Shootout-C++/fibo | 0.060 | 0.141 | 2.35× | 0.173 | 2.88× | ok |
| Shootout-C++/hash | 0.088 | 0.186 | 2.11× | 0.238 | 2.70× | ok |
| Shootout-C++/hash2 | 0.084 | 0.186 | 2.21× | 0.238 | 2.83× | ok |
| Shootout-C++/heapsort | 0.075 | 0.161 | 2.15× | 0.205 | 2.73× | ok |
| Shootout-C++/lists | 0.067 | 0.151 | 2.25× | 0.207 | 3.09× | ok |
| Shootout-C++/lists1 | 0.073 | 0.173 | 2.37× | 0.211 | 2.89× | ok |
| Shootout-C++/matrix | 0.060 | 0.141 | 2.35× | 0.177 | 2.95× | ok |
| Shootout-C++/methcall | 0.063 | 0.134 | 2.13× | 0.184 | 2.92× | ok |
| Shootout-C++/moments | 0.081 | 0.177 | 2.19× | 0.220 | 2.72× | ok |
| Shootout-C++/random | 0.077 | 0.158 | 2.05× | 0.204 | 2.65× | ok |
| Shootout-C++/sieve | 0.076 | 0.170 | 2.24× | 0.221 | 2.91× | ok |
| SmallPT | 0.023 | 0.046 | 2.00× | 0.067 | 2.91× | ok |
| Stanford/Bubblesort | 0.008 | 0.020 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.025 | — | ok |
| Stanford/Puzzle | 0.008 | 0.021 | — | 0.028 | — | ok |
| Stanford/Treesort | 0.008 | 0.020 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.062 | 0.136 | 2.19× | 0.178 | 2.87× | ok |
| bg/fannkuchredux/3 | 0.028 | 0.052 | 1.86× | 0.070 | 2.50× | ok |
| bg/fasta/1 | 0.046 | 0.085 | 1.85× | 0.109 | 2.37× | ok |
| bg/fasta/2 | 0.045 | 0.086 | 1.91× | 0.108 | 2.40× | ok |
| bg/fasta/3 | 0.068 | 0.151 | 2.22× | 0.192 | 2.82× | ok |
| bg/fasta/4 | 0.064 | 0.128 | 2.00× | 0.161 | 2.52× | ok |
| bg/fasta/6 | 0.110 | 0.247 | 2.25× | 0.323 | 2.94× | ok |
| bg/mandelbrot/0 | 0.118 | 0.272 | 2.31× | 0.351 | 2.97× | ok |
| bg/mandelbrot/2 | 0.073 | 0.172 | 2.36× | 0.219 | 3.00× | ok |
| bg/mandelbrot/3 | 0.084 | 0.180 | 2.14× | 0.222 | 2.64× | ok |
| bg/mandelbrot/5 | 0.037 | 0.076 | 2.05× | 0.101 | 2.73× | ok |
| bg/mandelbrot/7 | 0.037 | 0.083 | 2.24× | 0.107 | 2.89× | ok |
| bg/mandelbrot/9 | 0.035 | 0.072 | 2.06× | 0.095 | 2.71× | ok |
| bg/nbody/1 | 0.023 | 0.050 | 2.17× | 0.064 | 2.78× | ok |
| bg/nbody/2 | 0.024 | 0.047 | 1.96× | 0.062 | 2.58× | ok |
| bg/nbody/3 | 0.022 | 0.046 | 2.09× | 0.063 | 2.86× | ok |
| bg/nbody/6 | 0.023 | 0.050 | 2.17× | 0.066 | 2.87× | ok |
| bg/pidigits/4 | 0.099 | 0.232 | 2.34× | 0.290 | 2.93× | ok |
| bg/pidigits/5 | 0.067 | 0.144 | 2.15× | 0.183 | 2.73× | ok |
| bg/revcomp/1 | 0.067 | 0.148 | 2.21× | 0.190 | 2.84× | ok |
| bg/revcomp/5 | 0.059 | 0.138 | 2.34× | 0.181 | 3.07× | ok |
| bg/spectralnorm/1 | 0.096 | 0.200 | 2.08× | 0.259 | 2.70× | ok |
| box2d | 1.160 | 2.406 | 2.07× | 3.307 | 2.85× | ok |
| fmt | 0.371 | 0.882 | 2.38× | 1.213 | 3.27× | ok |
| hexxagon | 0.204 | 0.485 | 2.38× | 0.598 | 2.93× | ok |
| lambda | 0.034 | 0.107 | 3.15× | 0.129 | 3.79× | ok |
| minisat | 0.042 | 0.108 | 2.57× | 0.130 | 3.10× | ok |
| nlohmann-json | 0.277 | 0.715 | 2.58× | 1.034 | 3.73× | ok |
| pugixml | 0.178 | 0.418 | 2.35× | 0.533 | 2.99× | ok |
| pugixml-tests | 2.458 | 6.135 | 2.50× | 7.249 | 2.95× | ok |
| rapidjson | 0.079 | 0.194 | 2.46× | 0.221 | 2.80× | ok |
| re2 | 2.341 | 5.510 | 2.35× | 6.758 | 2.89× | ok |
| re2-test-re2 | 3.385 | 7.885 | 2.33× | 9.750 | 2.88× | ok |
| re2-test-search | 3.416 | 7.787 | 2.28× | 9.778 | 2.86× | ok |
| tramp3d-v4 | 0.519 | 1.883 | 3.63× | 1.800 | 3.47× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
