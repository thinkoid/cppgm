# Public benchmarks: Intel Xeon (dedicated)

Measured compiler: [`2a915cfbf`](https://github.com/vishvananda/cppgm/commit/2a915cfbfed25b5f95be7b7e5c345dfe87f11666) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43785824014) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.21× | 74 | 2.86× | 74 |
| Compile CPU, `-O0` | 3.11× | 74 | 3.09× | 74 |
| Compile CPU, `-O3` | 4.18× | 79 | 3.75× | 79 |
| Compile peak RSS, `-O0` | 1.23× | 81 | 1.93× | 81 |
| Compile peak RSS, `-O3` | 1.40× | 81 | 1.91× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.05× | 81 | 0.99× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.00× | 81 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.771 to 1.029; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.063 | 0.210 | 3.33× | 0.167 | 2.65× | ok |
| Adobe-C++/loop_unroll | 0.049 | 0.494 | 10.08× | 0.157 | 3.20× | ok |
| Adobe-C++/simple_types_constant_folding | 0.050 | 0.568 | 11.36× | 0.195 | 3.90× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.043 | 0.408 | 9.49× | 0.180 | 4.19× | ok |
| Adobe-C++/stepanov_abstraction | 0.032 | 0.159 | 4.97× | 0.103 | 3.22× | ok |
| Adobe-C++/stepanov_vector | 0.064 | 0.255 | 3.98× | 0.185 | 2.89× | ok |
| Bullet | 4.055 | 15.497 | 3.82× | 14.458 | 3.57× | ok |
| CLAMR | 2.157 | 8.006 | 3.71× | 6.929 | 3.21× | ok |
| CoyoteBench/almabench | 0.024 | 0.060 | 2.50× | 0.071 | 2.96× | ok |
| CoyoteBench/fftbench | 0.095 | 0.227 | 2.39× | 0.278 | 2.93× | ok |
| CoyoteBench/huffbench | 0.025 | 0.057 | 2.28× | 0.067 | 2.68× | ok |
| CoyoteBench/lpbench | 0.024 | 0.060 | 2.50× | 0.070 | 2.92× | ok |
| DOE/HACCKernels | 0.101 | 0.233 | 2.31× | 0.299 | 2.96× | ok |
| DOE/HPCCG | 0.576 | 1.420 | 2.47× | 1.836 | 3.19× | ok |
| DOE/PENNANT | 1.231 | 3.461 | 2.81× | 3.625 | 2.94× | ok |
| DOE/miniFE | 0.552 | 1.739 | 3.15× | 1.709 | 3.10× | ok |
| Misc-C++-EH/spirit | 0.362 | 2.249 | 6.21× | 1.504 | 4.15× | ok |
| Misc-C++-Large/ray | 0.088 | 0.233 | 2.65× | 0.263 | 2.99× | ok |
| Misc-C++-Large/sphereflake | 0.079 | 0.188 | 2.38× | 0.225 | 2.85× | ok |
| Misc-C++/bigfib | 0.101 | 0.321 | 3.18× | 0.332 | 3.29× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.074 | 2.74× | 0.077 | 2.85× | ok |
| Misc-C++/stepanov_container | 0.140 | 0.474 | 3.39× | 0.431 | 3.08× | ok |
| Misc-C++/stepanov_v1p2 | 0.025 | 0.099 | 3.96× | 0.078 | 3.12× | ok |
| PAQ8p | 0.056 | 0.380 | 6.79× | 0.200 | 3.57× | ok |
| Prolangs-C++/life | 0.003 | 0.027 | — | 0.022 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.054 | — | 0.039 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.020 | — | 0.021 | — | ok |
| Shootout-C++-EH/except | 0.059 | 0.139 | 2.36× | 0.201 | 3.41× | ok |
| Shootout-C++/ackermann | 0.064 | 0.138 | 2.16× | 0.181 | 2.83× | ok |
| Shootout-C++/ary3 | 0.073 | 0.171 | 2.34× | 0.214 | 2.93× | ok |
| Shootout-C++/fibo | 0.059 | 0.134 | 2.27× | 0.184 | 3.12× | ok |
| Shootout-C++/hash | 0.094 | 0.259 | 2.76× | 0.267 | 2.84× | ok |
| Shootout-C++/hash2 | 0.093 | 0.262 | 2.82× | 0.294 | 3.16× | ok |
| Shootout-C++/heapsort | 0.077 | 0.163 | 2.12× | 0.221 | 2.87× | ok |
| Shootout-C++/lists | 0.070 | 0.186 | 2.66× | 0.218 | 3.11× | ok |
| Shootout-C++/lists1 | 0.077 | 0.201 | 2.61× | 0.229 | 2.97× | ok |
| Shootout-C++/matrix | 0.062 | 0.137 | 2.21× | 0.184 | 2.97× | ok |
| Shootout-C++/methcall | 0.062 | 0.140 | 2.26× | 0.189 | 3.05× | ok |
| Shootout-C++/moments | 0.087 | 0.230 | 2.64× | 0.248 | 2.85× | ok |
| Shootout-C++/random | 0.071 | 0.154 | 2.17× | 0.215 | 3.03× | ok |
| Shootout-C++/sieve | 0.078 | 0.213 | 2.73× | 0.241 | 3.09× | ok |
| SmallPT | 0.024 | 0.072 | 3.00× | 0.075 | 3.12× | ok |
| Stanford/Bubblesort | 0.008 | 0.023 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.023 | — | 0.027 | — | ok |
| Stanford/Puzzle | 0.008 | 0.029 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.008 | 0.025 | — | 0.027 | — | ok |
| bg/binarytrees/2 | 0.058 | 0.139 | 2.40× | 0.186 | 3.21× | ok |
| bg/fannkuchredux/3 | 0.028 | 0.062 | 2.21× | 0.077 | 2.75× | ok |
| bg/fasta/1 | 0.048 | 0.113 | 2.35× | 0.119 | 2.48× | ok |
| bg/fasta/2 | 0.043 | 0.108 | 2.51× | 0.125 | 2.91× | ok |
| bg/fasta/3 | 0.071 | 0.162 | 2.28× | 0.207 | 2.92× | ok |
| bg/fasta/4 | 0.064 | 0.131 | 2.05× | 0.169 | 2.64× | ok |
| bg/fasta/6 | 0.118 | 0.343 | 2.91× | 0.366 | 3.10× | ok |
| bg/mandelbrot/0 | 0.128 | 0.395 | 3.09× | 0.396 | 3.09× | ok |
| bg/mandelbrot/2 | 0.075 | 0.196 | 2.61× | 0.241 | 3.21× | ok |
| bg/mandelbrot/3 | 0.079 | 0.182 | 2.30× | 0.233 | 2.95× | ok |
| bg/mandelbrot/5 | 0.038 | 0.094 | 2.47× | 0.113 | 2.97× | ok |
| bg/mandelbrot/7 | 0.041 | 0.108 | 2.63× | 0.116 | 2.83× | ok |
| bg/mandelbrot/9 | 0.037 | 0.100 | 2.70× | 0.104 | 2.81× | ok |
| bg/nbody/1 | 0.025 | 0.091 | 3.64× | 0.078 | 3.12× | ok |
| bg/nbody/2 | 0.024 | 0.057 | 2.38× | 0.064 | 2.67× | ok |
| bg/nbody/3 | 0.022 | 0.054 | 2.45× | 0.068 | 3.09× | ok |
| bg/nbody/6 | 0.026 | 0.088 | 3.38× | 0.076 | 2.92× | ok |
| bg/pidigits/4 | 0.097 | 0.258 | 2.66× | 0.336 | 3.46× | ok |
| bg/pidigits/5 | 0.066 | 0.144 | 2.18× | 0.193 | 2.92× | ok |
| bg/revcomp/1 | 0.071 | 0.184 | 2.59× | 0.222 | 3.13× | ok |
| bg/revcomp/5 | 0.063 | 0.166 | 2.63× | 0.211 | 3.35× | ok |
| bg/spectralnorm/1 | 0.094 | 0.214 | 2.28× | 0.281 | 2.99× | ok |
| box2d | 1.169 | 3.598 | 3.08× | 3.713 | 3.18× | ok |
| fmt | 0.455 | 2.072 | 4.55× | 1.543 | 3.39× | ok |
| hexxagon | 0.220 | 0.523 | 2.38× | 0.654 | 2.97× | ok |
| lambda | 0.045 | 0.263 | 5.84× | 0.176 | 3.91× | ok |
| minisat | 0.050 | 0.243 | 4.86× | 0.177 | 3.54× | ok |
| nlohmann-json | 0.367 | 1.572 | 4.28× | 1.356 | 3.69× | ok |
| pugixml | 0.230 | 1.140 | 4.96× | 0.743 | 3.23× | ok |
| pugixml-tests | 2.919 | 12.468 | 4.27× | 9.679 | 3.32× | ok |
| rapidjson | 0.102 | 0.387 | 3.79× | 0.284 | 2.78× | ok |
| re2 | 2.640 | 8.623 | 3.27× | 8.072 | 3.06× | ok |
| re2-test-re2 | 3.748 | 12.248 | 3.27× | 11.452 | 3.06× | ok |
| re2-test-search | 3.851 | 11.681 | 3.03× | 11.272 | 2.93× | ok |
| tramp3d-v4 | 0.822 | 6.867 | 8.35× | 3.049 | 3.71× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.108 | 0.779 | 7.21× | 0.466 | 4.31× | ok |
| Adobe-C++/loop_unroll | 0.433 | 4.860 | 11.22× | 4.069 | 9.40× | ok |
| Adobe-C++/simple_types_constant_folding | 0.253 | 2.721 | 10.75× | 2.299 | 9.09× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.212 | 2.127 | 10.03× | 1.770 | 8.35× | ok |
| Adobe-C++/stepanov_abstraction | 0.085 | 0.877 | 10.32× | 0.452 | 5.32× | ok |
| Adobe-C++/stepanov_vector | 0.110 | 1.150 | 10.45× | 0.514 | 4.67× | ok |
| Bullet | 5.723 | 33.207 | 5.80× | 24.185 | 4.23× | ok |
| CLAMR | 4.076 | 21.492 | 5.27× | 16.033 | 3.93× | ok |
| CoyoteBench/almabench | 0.029 | 0.138 | 4.76× | 0.107 | 3.69× | ok |
| CoyoteBench/fftbench | 0.119 | 0.374 | 3.14× | 0.403 | 3.39× | ok |
| CoyoteBench/huffbench | 0.033 | 0.186 | 5.64× | 0.116 | 3.52× | ok |
| CoyoteBench/lpbench | 0.033 | 0.153 | 4.64× | 0.173 | 5.24× | ok |
| DOE/HACCKernels | 0.108 | 0.331 | 3.06× | 0.350 | 3.24× | ok |
| DOE/HPCCG | 0.623 | 2.030 | 3.26× | 2.057 | 3.30× | ok |
| DOE/PENNANT | 1.585 | 5.417 | 3.42× | 5.146 | 3.25× | ok |
| DOE/miniFE | 0.780 | 3.636 | 4.66× | 2.963 | 3.80× | ok |
| Misc-C++-EH/spirit | 0.586 | 3.023 | 5.16× | 2.740 | 4.68× | ok |
| Misc-C++-Large/ray | 0.099 | 0.407 | 4.11× | 0.322 | 3.25× | ok |
| Misc-C++-Large/sphereflake | 0.093 | 0.651 | 7.00× | 0.303 | 3.26× | ok |
| Misc-C++/bigfib | 0.140 | 0.486 | 3.47× | 0.442 | 3.16× | ok |
| Misc-C++/oopack_v1p8 | 0.033 | 0.156 | 4.73× | 0.143 | 4.33× | ok |
| Misc-C++/stepanov_container | 0.196 | 0.792 | 4.04× | 0.791 | 4.04× | ok |
| Misc-C++/stepanov_v1p2 | 0.036 | 0.177 | 4.92× | 0.167 | 4.64× | ok |
| PAQ8p | 0.289 | 3.316 | 11.47× | 1.456 | 5.04× | ok |
| Prolangs-C++/life | 0.009 | 0.090 | — | 0.059 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.185 | 9.74× | 0.110 | 5.79× | ok |
| Prolangs-C++/primes | 0.006 | 0.030 | — | 0.027 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.167 | 2.53× | 0.204 | 3.09× | ok |
| Shootout-C++/ackermann | 0.066 | 0.171 | 2.59× | 0.191 | 2.89× | ok |
| Shootout-C++/ary3 | 0.076 | 0.205 | 2.70× | 0.236 | 3.11× | ok |
| Shootout-C++/fibo | 0.064 | 0.170 | 2.66× | 0.193 | 3.02× | ok |
| Shootout-C++/hash | 0.111 | 0.345 | 3.11× | 0.386 | 3.48× | ok |
| Shootout-C++/hash2 | 0.117 | 0.379 | 3.24× | 0.404 | 3.45× | ok |
| Shootout-C++/heapsort | 0.079 | 0.192 | 2.43× | 0.234 | 2.96× | ok |
| Shootout-C++/lists | 0.076 | 0.208 | 2.74× | 0.242 | 3.18× | ok |
| Shootout-C++/lists1 | 0.085 | 0.249 | 2.93× | 0.271 | 3.19× | ok |
| Shootout-C++/matrix | 0.067 | 0.184 | 2.75× | 0.268 | 4.00× | ok |
| Shootout-C++/methcall | 0.065 | 0.166 | 2.55× | 0.200 | 3.08× | ok |
| Shootout-C++/moments | 0.096 | 0.281 | 2.93× | 0.303 | 3.16× | ok |
| Shootout-C++/random | 0.077 | 0.179 | 2.32× | 0.229 | 2.97× | ok |
| Shootout-C++/sieve | 0.086 | 0.229 | 2.66× | 0.268 | 3.12× | ok |
| SmallPT | 0.034 | 0.257 | 7.56× | 0.140 | 4.12× | ok |
| Stanford/Bubblesort | 0.010 | 0.047 | 4.70× | 0.043 | 4.30× | ok |
| Stanford/FloatMM | 0.011 | 0.056 | 5.09× | 0.060 | 5.45× | ok |
| Stanford/Puzzle | 0.018 | 0.107 | 5.94× | 0.104 | 5.78× | ok |
| Stanford/Treesort | 0.013 | 0.074 | 5.69× | 0.047 | 3.62× | ok |
| bg/binarytrees/2 | 0.066 | 0.355 | 5.38× | 0.202 | 3.06× | ok |
| bg/fannkuchredux/3 | 0.032 | 0.105 | 3.28× | 0.105 | 3.28× | ok |
| bg/fasta/1 | 0.053 | 0.144 | 2.72× | 0.158 | 2.98× | ok |
| bg/fasta/2 | 0.052 | 0.143 | 2.75× | 0.155 | 2.98× | ok |
| bg/fasta/3 | 0.080 | 0.199 | 2.49× | 0.243 | 3.04× | ok |
| bg/fasta/4 | 0.072 | 0.172 | 2.39× | 0.203 | 2.82× | ok |
| bg/fasta/6 | 0.139 | 0.405 | 2.91× | 0.452 | 3.25× | ok |
| bg/mandelbrot/0 | 0.163 | 0.573 | 3.52× | 0.583 | 3.58× | ok |
| bg/mandelbrot/2 | 0.083 | 0.237 | 2.86× | 0.278 | 3.35× | ok |
| bg/mandelbrot/3 | 0.083 | 0.204 | 2.46× | 0.254 | 3.06× | ok |
| bg/mandelbrot/5 | 0.047 | 0.135 | 2.87× | 0.133 | 2.83× | ok |
| bg/mandelbrot/7 | 0.051 | 0.170 | 3.33× | 0.155 | 3.04× | ok |
| bg/mandelbrot/9 | 0.047 | 0.158 | 3.36× | 0.146 | 3.11× | ok |
| bg/nbody/1 | 0.036 | 0.134 | 3.72× | 0.145 | 4.03× | ok |
| bg/nbody/2 | 0.027 | 0.108 | 4.00× | 0.102 | 3.78× | ok |
| bg/nbody/3 | 0.026 | 0.101 | 3.88× | 0.093 | 3.58× | ok |
| bg/nbody/6 | 0.035 | 0.139 | 3.97× | 0.149 | 4.26× | ok |
| bg/pidigits/4 | 0.106 | 0.296 | 2.79× | 0.375 | 3.54× | ok |
| bg/pidigits/5 | 0.069 | 0.173 | 2.51× | 0.213 | 3.09× | ok |
| bg/revcomp/1 | 0.079 | 0.220 | 2.78× | 0.261 | 3.30× | ok |
| bg/revcomp/5 | 0.071 | 0.211 | 2.97× | 0.230 | 3.24× | ok |
| bg/spectralnorm/1 | 0.103 | 0.298 | 2.89× | 0.331 | 3.21× | ok |
| box2d | 1.517 | 6.444 | 4.25× | 5.315 | 3.50× | ok |
| fmt | 0.908 | 4.705 | 5.18× | 3.330 | 3.67× | ok |
| hexxagon | 0.249 | 0.911 | 3.66× | 0.880 | 3.53× | ok |
| lambda | 0.108 | 0.989 | 9.16× | 0.493 | 4.56× | ok |
| minisat | 0.132 | 0.880 | 6.67× | 0.557 | 4.22× | ok |
| nlohmann-json | 0.709 | 2.950 | 4.16× | 2.325 | 3.28× | ok |
| pugixml | 0.632 | 4.799 | 7.59× | 3.121 | 4.94× | ok |
| pugixml-tests | 4.375 | 29.842 | 6.82× | 19.439 | 4.44× | ok |
| rapidjson | 0.215 | 1.002 | 4.66× | 0.569 | 2.65× | ok |
| re2 | 3.532 | 15.277 | 4.33× | 12.120 | 3.43× | ok |
| re2-test-re2 | 4.957 | 22.258 | 4.49× | 17.277 | 3.49× | ok |
| re2-test-search | 4.843 | 20.188 | 4.17× | 16.267 | 3.36× | ok |
| tramp3d-v4 | 3.199 | 20.083 | 6.28× | 16.390 | 5.12× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.112 | 1.93× | 0.142 | 2.45× | ok |
| Adobe-C++/loop_unroll | 0.034 | 0.082 | 2.41× | 0.096 | 2.82× | ok |
| Adobe-C++/simple_types_constant_folding | 0.034 | 0.081 | 2.38× | 0.100 | 2.94× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.077 | 2.33× | 0.091 | 2.76× | ok |
| Adobe-C++/stepanov_abstraction | 0.027 | 0.059 | 2.19× | 0.079 | 2.93× | ok |
| Adobe-C++/stepanov_vector | 0.054 | 0.111 | 2.06× | 0.148 | 2.74× | ok |
| Bullet | 3.606 | 9.278 | 2.57× | 11.824 | 3.28× | ok |
| CLAMR | 1.813 | 4.313 | 2.38× | 5.570 | 3.07× | ok |
| CoyoteBench/almabench | 0.024 | 0.050 | 2.08× | 0.068 | 2.83× | ok |
| CoyoteBench/fftbench | 0.095 | 0.199 | 2.09× | 0.261 | 2.75× | ok |
| CoyoteBench/huffbench | 0.024 | 0.049 | 2.04× | 0.066 | 2.75× | ok |
| CoyoteBench/lpbench | 0.024 | 0.049 | 2.04× | 0.066 | 2.75× | ok |
| DOE/HACCKernels | 0.097 | 0.206 | 2.12× | 0.277 | 2.86× | ok |
| DOE/HPCCG | 0.574 | 1.237 | 2.16× | 1.647 | 2.87× | ok |
| DOE/PENNANT | 1.193 | 2.582 | 2.16× | 3.227 | 2.70× | ok |
| DOE/miniFE | 0.516 | 1.126 | 2.18× | 1.486 | 2.88× | ok |
| Misc-C++-EH/spirit | 0.261 | 0.772 | 2.96× | 0.960 | 3.68× | ok |
| Misc-C++-Large/ray | 0.086 | 0.187 | 2.17× | 0.239 | 2.78× | ok |
| Misc-C++-Large/sphereflake | 0.078 | 0.167 | 2.14× | 0.213 | 2.73× | ok |
| Misc-C++/bigfib | 0.093 | 0.215 | 2.31× | 0.274 | 2.95× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.052 | 1.93× | 0.068 | 2.52× | ok |
| Misc-C++/stepanov_container | 0.123 | 0.273 | 2.22× | 0.361 | 2.93× | ok |
| Misc-C++/stepanov_v1p2 | 0.024 | 0.051 | 2.12× | 0.066 | 2.75× | ok |
| PAQ8p | 0.038 | 0.097 | 2.55× | 0.117 | 3.08× | ok |
| Prolangs-C++/life | 0.003 | 0.008 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.007 | 0.019 | — | 0.028 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.020 | — | ok |
| Shootout-C++-EH/except | 0.060 | 0.141 | 2.35× | 0.188 | 3.13× | ok |
| Shootout-C++/ackermann | 0.065 | 0.139 | 2.14× | 0.174 | 2.68× | ok |
| Shootout-C++/ary3 | 0.069 | 0.154 | 2.23× | 0.200 | 2.90× | ok |
| Shootout-C++/fibo | 0.061 | 0.144 | 2.36× | 0.178 | 2.92× | ok |
| Shootout-C++/hash | 0.088 | 0.190 | 2.16× | 0.238 | 2.70× | ok |
| Shootout-C++/hash2 | 0.088 | 0.200 | 2.27× | 0.243 | 2.76× | ok |
| Shootout-C++/heapsort | 0.078 | 0.161 | 2.06× | 0.209 | 2.68× | ok |
| Shootout-C++/lists | 0.067 | 0.154 | 2.30× | 0.201 | 3.00× | ok |
| Shootout-C++/lists1 | 0.075 | 0.167 | 2.23× | 0.215 | 2.87× | ok |
| Shootout-C++/matrix | 0.060 | 0.136 | 2.27× | 0.174 | 2.90× | ok |
| Shootout-C++/methcall | 0.061 | 0.135 | 2.21× | 0.190 | 3.11× | ok |
| Shootout-C++/moments | 0.084 | 0.179 | 2.13× | 0.218 | 2.60× | ok |
| Shootout-C++/random | 0.075 | 0.155 | 2.07× | 0.206 | 2.75× | ok |
| Shootout-C++/sieve | 0.075 | 0.171 | 2.28× | 0.227 | 3.03× | ok |
| SmallPT | 0.023 | 0.047 | 2.04× | 0.068 | 2.96× | ok |
| Stanford/Bubblesort | 0.008 | 0.020 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.021 | — | 0.027 | — | ok |
| Stanford/Puzzle | 0.008 | 0.021 | — | 0.028 | — | ok |
| Stanford/Treesort | 0.008 | 0.020 | — | 0.027 | — | ok |
| bg/binarytrees/2 | 0.060 | 0.142 | 2.37× | 0.180 | 3.00× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.055 | 1.90× | 0.072 | 2.48× | ok |
| bg/fasta/1 | 0.047 | 0.087 | 1.85× | 0.110 | 2.34× | ok |
| bg/fasta/2 | 0.043 | 0.085 | 1.98× | 0.114 | 2.65× | ok |
| bg/fasta/3 | 0.070 | 0.153 | 2.19× | 0.201 | 2.87× | ok |
| bg/fasta/4 | 0.066 | 0.126 | 1.91× | 0.158 | 2.39× | ok |
| bg/fasta/6 | 0.111 | 0.245 | 2.21× | 0.322 | 2.90× | ok |
| bg/mandelbrot/0 | 0.118 | 0.268 | 2.27× | 0.349 | 2.96× | ok |
| bg/mandelbrot/2 | 0.074 | 0.169 | 2.28× | 0.224 | 3.03× | ok |
| bg/mandelbrot/3 | 0.086 | 0.172 | 2.00× | 0.224 | 2.60× | ok |
| bg/mandelbrot/5 | 0.038 | 0.076 | 2.00× | 0.101 | 2.66× | ok |
| bg/mandelbrot/7 | 0.039 | 0.079 | 2.03× | 0.105 | 2.69× | ok |
| bg/mandelbrot/9 | 0.036 | 0.071 | 1.97× | 0.095 | 2.64× | ok |
| bg/nbody/1 | 0.023 | 0.046 | 2.00× | 0.067 | 2.91× | ok |
| bg/nbody/2 | 0.023 | 0.048 | 2.09× | 0.062 | 2.70× | ok |
| bg/nbody/3 | 0.022 | 0.044 | 2.00× | 0.062 | 2.82× | ok |
| bg/nbody/6 | 0.025 | 0.049 | 1.96× | 0.067 | 2.68× | ok |
| bg/pidigits/4 | 0.099 | 0.236 | 2.38× | 0.291 | 2.94× | ok |
| bg/pidigits/5 | 0.065 | 0.139 | 2.14× | 0.185 | 2.85× | ok |
| bg/revcomp/1 | 0.070 | 0.150 | 2.14× | 0.199 | 2.84× | ok |
| bg/revcomp/5 | 0.062 | 0.138 | 2.23× | 0.191 | 3.08× | ok |
| bg/spectralnorm/1 | 0.091 | 0.199 | 2.19× | 0.264 | 2.90× | ok |
| box2d | 1.165 | 2.358 | 2.02× | 3.170 | 2.72× | ok |
| fmt | 0.378 | 0.874 | 2.31× | 1.222 | 3.23× | ok |
| hexxagon | 0.216 | 0.472 | 2.19× | 0.594 | 2.75× | ok |
| lambda | 0.036 | 0.101 | 2.81× | 0.122 | 3.39× | ok |
| minisat | 0.042 | 0.103 | 2.45× | 0.129 | 3.07× | ok |
| nlohmann-json | 0.279 | 0.697 | 2.50× | 1.006 | 3.61× | ok |
| pugixml | 0.172 | 0.424 | 2.47× | 0.545 | 3.17× | ok |
| pugixml-tests | 2.518 | 5.921 | 2.35× | 7.286 | 2.89× | ok |
| rapidjson | 0.083 | 0.197 | 2.37× | 0.223 | 2.69× | ok |
| re2 | 2.356 | 5.431 | 2.31× | 6.849 | 2.91× | ok |
| re2-test-re2 | 3.382 | 7.737 | 2.29× | 9.765 | 2.89× | ok |
| re2-test-search | 3.507 | 7.898 | 2.25× | 9.773 | 2.79× | ok |
| tramp3d-v4 | 0.520 | 1.790 | 3.44× | 1.759 | 3.38× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
