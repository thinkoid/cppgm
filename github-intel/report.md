# Public benchmarks: Intel (GitHub)

Measured compiler: [`b19fe4925`](https://github.com/vishvananda/cppgm-extended/commit/b19fe49250af0b6050c1791ff584c423942b8b79) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677077) · [Raw program results](results.json)

81 of 81 programs built with cppgm++ and g++ and agreed. Each number is the reference over cppgm++, so above 1× means cppgm++ is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.23× | 74 | 2.82× | 74 |
| Compile CPU, `-O0` | 3.11× | 74 | 3.05× | 74 |
| Compile CPU, `-O3` | 4.32× | 79 | 3.83× | 79 |
| Compile peak RSS, `-O0` | 1.46× | 81 | 2.23× | 81 |
| Compile peak RSS, `-O3` | 1.73× | 81 | 2.33× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 0.98× | 81 | 0.98× | 80 |
| Run instructions, `-O3` | 0.96× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.892 to 1.014; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.072 | 0.252 | 3.50× | 0.173 | 2.40× | ok |
| Adobe-C++/loop_unroll | 0.053 | 0.557 | 10.51× | 0.168 | 3.17× | ok |
| Adobe-C++/simple_types_constant_folding | 0.059 | 0.649 | 11.00× | 0.221 | 3.75× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.049 | 0.473 | 9.65× | 0.186 | 3.80× | ok |
| Adobe-C++/stepanov_abstraction | 0.036 | 0.179 | 4.97× | 0.110 | 3.06× | ok |
| Adobe-C++/stepanov_vector | 0.074 | 0.272 | 3.68× | 0.242 | 3.27× | ok |
| Bullet | 4.574 | 16.620 | 3.63× | 16.142 | 3.53× | ok |
| CLAMR | 2.526 | 8.554 | 3.39× | 7.495 | 2.97× | ok |
| CoyoteBench/almabench | 0.026 | 0.075 | 2.88× | 0.077 | 2.96× | ok |
| CoyoteBench/fftbench | 0.105 | 0.255 | 2.43× | 0.360 | 3.43× | ok |
| CoyoteBench/huffbench | 0.025 | 0.065 | 2.60× | 0.075 | 3.00× | ok |
| CoyoteBench/lpbench | 0.028 | 0.078 | 2.79× | 0.084 | 3.00× | ok |
| DOE/HACCKernels | 0.114 | 0.283 | 2.48× | 0.302 | 2.65× | ok |
| DOE/HPCCG | 0.671 | 1.456 | 2.17× | 2.199 | 3.28× | ok |
| DOE/PENNANT | 1.298 | 3.850 | 2.97× | 3.851 | 2.97× | ok |
| DOE/miniFE | 0.605 | 1.882 | 3.11× | 1.954 | 3.23× | ok |
| Misc-C++-EH/spirit | 0.431 | 2.788 | 6.47× | 1.886 | 4.38× | ok |
| Misc-C++-Large/ray | 0.091 | 0.301 | 3.31× | 0.265 | 2.91× | ok |
| Misc-C++-Large/sphereflake | 0.089 | 0.199 | 2.24× | 0.234 | 2.63× | ok |
| Misc-C++/bigfib | 0.107 | 0.335 | 3.13× | 0.323 | 3.02× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.079 | 2.82× | 0.094 | 3.36× | ok |
| Misc-C++/stepanov_container | 0.164 | 0.509 | 3.10× | 0.437 | 2.66× | ok |
| Misc-C++/stepanov_v1p2 | 0.029 | 0.106 | 3.66× | 0.083 | 2.86× | ok |
| PAQ8p | 0.059 | 0.411 | 6.97× | 0.201 | 3.41× | ok |
| Prolangs-C++/life | 0.003 | 0.028 | — | 0.026 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.058 | — | 0.040 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.022 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.159 | 2.34× | 0.200 | 2.94× | ok |
| Shootout-C++/ackermann | 0.065 | 0.150 | 2.31× | 0.199 | 3.06× | ok |
| Shootout-C++/ary3 | 0.077 | 0.183 | 2.38× | 0.224 | 2.91× | ok |
| Shootout-C++/fibo | 0.065 | 0.143 | 2.20× | 0.198 | 3.05× | ok |
| Shootout-C++/hash | 0.101 | 0.276 | 2.73× | 0.340 | 3.37× | ok |
| Shootout-C++/hash2 | 0.117 | 0.302 | 2.58× | 0.277 | 2.37× | ok |
| Shootout-C++/heapsort | 0.088 | 0.178 | 2.02× | 0.225 | 2.56× | ok |
| Shootout-C++/lists | 0.083 | 0.190 | 2.29× | 0.215 | 2.59× | ok |
| Shootout-C++/lists1 | 0.085 | 0.216 | 2.54× | 0.246 | 2.89× | ok |
| Shootout-C++/matrix | 0.064 | 0.146 | 2.28× | 0.203 | 3.17× | ok |
| Shootout-C++/methcall | 0.062 | 0.144 | 2.32× | 0.206 | 3.32× | ok |
| Shootout-C++/moments | 0.089 | 0.235 | 2.64× | 0.251 | 2.82× | ok |
| Shootout-C++/random | 0.093 | 0.169 | 1.82× | 0.231 | 2.48× | ok |
| Shootout-C++/sieve | 0.079 | 0.218 | 2.76× | 0.255 | 3.23× | ok |
| SmallPT | 0.027 | 0.073 | 2.70× | 0.079 | 2.93× | ok |
| Stanford/Bubblesort | 0.008 | 0.024 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.008 | 0.026 | — | 0.027 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.144 | 2.29× | 0.196 | 3.11× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.066 | 2.20× | 0.078 | 2.60× | ok |
| bg/fasta/1 | 0.056 | 0.116 | 2.07× | 0.125 | 2.23× | ok |
| bg/fasta/2 | 0.050 | 0.119 | 2.38× | 0.126 | 2.52× | ok |
| bg/fasta/3 | 0.080 | 0.168 | 2.10× | 0.225 | 2.81× | ok |
| bg/fasta/4 | 0.074 | 0.147 | 1.99× | 0.170 | 2.30× | ok |
| bg/fasta/6 | 0.129 | 0.360 | 2.79× | 0.353 | 2.74× | ok |
| bg/mandelbrot/0 | 0.161 | 0.446 | 2.77× | 0.422 | 2.62× | ok |
| bg/mandelbrot/2 | 0.085 | 0.209 | 2.46× | 0.247 | 2.91× | ok |
| bg/mandelbrot/3 | 0.088 | 0.197 | 2.24× | 0.270 | 3.07× | ok |
| bg/mandelbrot/5 | 0.044 | 0.101 | 2.30× | 0.117 | 2.66× | ok |
| bg/mandelbrot/7 | 0.042 | 0.115 | 2.74× | 0.131 | 3.12× | ok |
| bg/mandelbrot/9 | 0.039 | 0.116 | 2.97× | 0.110 | 2.82× | ok |
| bg/nbody/1 | 0.027 | 0.102 | 3.78× | 0.077 | 2.85× | ok |
| bg/nbody/2 | 0.025 | 0.058 | 2.32× | 0.080 | 3.20× | ok |
| bg/nbody/3 | 0.025 | 0.061 | 2.44× | 0.073 | 2.92× | ok |
| bg/nbody/6 | 0.025 | 0.092 | 3.68× | 0.085 | 3.40× | ok |
| bg/pidigits/4 | 0.116 | 0.292 | 2.52× | 0.399 | 3.44× | ok |
| bg/pidigits/5 | 0.073 | 0.184 | 2.52× | 0.213 | 2.92× | ok |
| bg/revcomp/1 | 0.092 | 0.206 | 2.24× | 0.223 | 2.42× | ok |
| bg/revcomp/5 | 0.080 | 0.190 | 2.38× | 0.203 | 2.54× | ok |
| bg/spectralnorm/1 | 0.108 | 0.264 | 2.44× | 0.285 | 2.64× | ok |
| box2d | 1.490 | 3.951 | 2.65× | 4.844 | 3.25× | ok |
| fmt | 0.529 | 2.351 | 4.44× | 1.959 | 3.70× | ok |
| hexxagon | 0.212 | 0.643 | 3.03× | 0.683 | 3.22× | ok |
| lambda | 0.044 | 0.269 | 6.11× | 0.181 | 4.11× | ok |
| minisat | 0.051 | 0.273 | 5.35× | 0.215 | 4.22× | ok |
| nlohmann-json | 0.381 | 1.721 | 4.52× | 1.788 | 4.69× | ok |
| pugixml | 0.256 | 1.339 | 5.23× | 0.979 | 3.82× | ok |
| pugixml-tests | 3.509 | 14.783 | 4.21× | 11.551 | 3.29× | ok |
| rapidjson | 0.115 | 0.468 | 4.07× | 0.393 | 3.42× | ok |
| re2 | 2.244 | 10.752 | 4.79× | 6.776 | 3.02× | ok |
| re2-test-re2 | 4.751 | 14.672 | 3.09× | 15.028 | 3.16× | ok |
| re2-test-search | 4.500 | 13.743 | 3.05× | 14.495 | 3.22× | ok |
| tramp3d-v4 | 0.726 | 5.869 | 8.08× | 2.555 | 3.52× | ok |

### O3 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.115 | 0.896 | 7.79× | 0.568 | 4.94× | ok |
| Adobe-C++/loop_unroll | 0.407 | 5.410 | 13.29× | 4.072 | 10.00× | ok |
| Adobe-C++/simple_types_constant_folding | 0.232 | 3.150 | 13.58× | 2.258 | 9.73× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.220 | 2.342 | 10.65× | 1.867 | 8.49× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 0.957 | 10.40× | 0.443 | 4.82× | ok |
| Adobe-C++/stepanov_vector | 0.128 | 1.422 | 11.11× | 0.639 | 4.99× | ok |
| Bullet | 6.271 | 35.629 | 5.68× | 25.349 | 4.04× | ok |
| CLAMR | 4.222 | 22.275 | 5.28× | 17.444 | 4.13× | ok |
| CoyoteBench/almabench | 0.030 | 0.170 | 5.67× | 0.110 | 3.67× | ok |
| CoyoteBench/fftbench | 0.136 | 0.413 | 3.04× | 0.486 | 3.57× | ok |
| CoyoteBench/huffbench | 0.039 | 0.188 | 4.82× | 0.125 | 3.21× | ok |
| CoyoteBench/lpbench | 0.038 | 0.187 | 4.92× | 0.200 | 5.26× | ok |
| DOE/HACCKernels | 0.115 | 0.405 | 3.52× | 0.378 | 3.29× | ok |
| DOE/HPCCG | 0.683 | 2.459 | 3.60× | 2.611 | 3.82× | ok |
| DOE/PENNANT | 1.713 | 5.821 | 3.40× | 5.516 | 3.22× | ok |
| DOE/miniFE | 0.841 | 3.897 | 4.63× | 2.997 | 3.56× | ok |
| Misc-C++-EH/spirit | 0.691 | 3.230 | 4.67× | 3.447 | 4.99× | ok |
| Misc-C++-Large/ray | 0.114 | 0.431 | 3.78× | 0.323 | 2.83× | ok |
| Misc-C++-Large/sphereflake | 0.095 | 0.682 | 7.18× | 0.359 | 3.78× | ok |
| Misc-C++/bigfib | 0.135 | 0.491 | 3.64× | 0.483 | 3.58× | ok |
| Misc-C++/oopack_v1p8 | 0.035 | 0.162 | 4.63× | 0.152 | 4.34× | ok |
| Misc-C++/stepanov_container | 0.201 | 0.887 | 4.41× | 0.786 | 3.91× | ok |
| Misc-C++/stepanov_v1p2 | 0.038 | 0.211 | 5.55× | 0.169 | 4.45× | ok |
| PAQ8p | 0.302 | 3.534 | 11.70× | 1.493 | 4.94× | ok |
| Prolangs-C++/life | 0.008 | 0.093 | — | 0.069 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.191 | 10.05× | 0.114 | 6.00× | ok |
| Prolangs-C++/primes | 0.007 | 0.036 | — | 0.034 | — | ok |
| Shootout-C++-EH/except | 0.077 | 0.189 | 2.45× | 0.214 | 2.78× | ok |
| Shootout-C++/ackermann | 0.068 | 0.187 | 2.75× | 0.208 | 3.06× | ok |
| Shootout-C++/ary3 | 0.079 | 0.224 | 2.84× | 0.279 | 3.53× | ok |
| Shootout-C++/fibo | 0.069 | 0.185 | 2.68× | 0.210 | 3.04× | ok |
| Shootout-C++/hash | 0.119 | 0.370 | 3.11× | 0.406 | 3.41× | ok |
| Shootout-C++/hash2 | 0.118 | 0.476 | 4.03× | 0.406 | 3.44× | ok |
| Shootout-C++/heapsort | 0.080 | 0.213 | 2.66× | 0.241 | 3.01× | ok |
| Shootout-C++/lists | 0.079 | 0.231 | 2.92× | 0.246 | 3.11× | ok |
| Shootout-C++/lists1 | 0.108 | 0.258 | 2.39× | 0.287 | 2.66× | ok |
| Shootout-C++/matrix | 0.071 | 0.201 | 2.83× | 0.280 | 3.94× | ok |
| Shootout-C++/methcall | 0.068 | 0.169 | 2.49× | 0.231 | 3.40× | ok |
| Shootout-C++/moments | 0.102 | 0.293 | 2.87× | 0.312 | 3.06× | ok |
| Shootout-C++/random | 0.081 | 0.192 | 2.37× | 0.239 | 2.95× | ok |
| Shootout-C++/sieve | 0.091 | 0.237 | 2.60× | 0.278 | 3.05× | ok |
| SmallPT | 0.038 | 0.274 | 7.21× | 0.168 | 4.42× | ok |
| Stanford/Bubblesort | 0.010 | 0.049 | 4.90× | 0.043 | 4.30× | ok |
| Stanford/FloatMM | 0.011 | 0.057 | 5.18× | 0.064 | 5.82× | ok |
| Stanford/Puzzle | 0.017 | 0.115 | 6.76× | 0.107 | 6.29× | ok |
| Stanford/Treesort | 0.013 | 0.077 | 5.92× | 0.047 | 3.62× | ok |
| bg/binarytrees/2 | 0.068 | 0.390 | 5.74× | 0.236 | 3.47× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.113 | 3.23× | 0.109 | 3.11× | ok |
| bg/fasta/1 | 0.055 | 0.153 | 2.78× | 0.161 | 2.93× | ok |
| bg/fasta/2 | 0.053 | 0.163 | 3.08× | 0.164 | 3.09× | ok |
| bg/fasta/3 | 0.079 | 0.208 | 2.63× | 0.269 | 3.41× | ok |
| bg/fasta/4 | 0.089 | 0.179 | 2.01× | 0.205 | 2.30× | ok |
| bg/fasta/6 | 0.130 | 0.430 | 3.31× | 0.455 | 3.50× | ok |
| bg/mandelbrot/0 | 0.177 | 0.581 | 3.28× | 0.600 | 3.39× | ok |
| bg/mandelbrot/2 | 0.093 | 0.241 | 2.59× | 0.309 | 3.32× | ok |
| bg/mandelbrot/3 | 0.098 | 0.238 | 2.43× | 0.272 | 2.78× | ok |
| bg/mandelbrot/5 | 0.047 | 0.136 | 2.89× | 0.146 | 3.11× | ok |
| bg/mandelbrot/7 | 0.055 | 0.180 | 3.27× | 0.161 | 2.93× | ok |
| bg/mandelbrot/9 | 0.053 | 0.183 | 3.45× | 0.155 | 2.92× | ok |
| bg/nbody/1 | 0.043 | 0.155 | 3.60× | 0.151 | 3.51× | ok |
| bg/nbody/2 | 0.029 | 0.112 | 3.86× | 0.119 | 4.10× | ok |
| bg/nbody/3 | 0.030 | 0.127 | 4.23× | 0.106 | 3.53× | ok |
| bg/nbody/6 | 0.036 | 0.155 | 4.31× | 0.159 | 4.42× | ok |
| bg/pidigits/4 | 0.121 | 0.327 | 2.70× | 0.432 | 3.57× | ok |
| bg/pidigits/5 | 0.075 | 0.218 | 2.91× | 0.231 | 3.08× | ok |
| bg/revcomp/1 | 0.079 | 0.247 | 3.13× | 0.291 | 3.68× | ok |
| bg/revcomp/5 | 0.088 | 0.221 | 2.51× | 0.308 | 3.50× | ok |
| bg/spectralnorm/1 | 0.116 | 0.329 | 2.84× | 0.336 | 2.90× | ok |
| box2d | 1.677 | 7.255 | 4.33× | 5.644 | 3.37× | ok |
| fmt | 1.012 | 5.065 | 5.00× | 4.034 | 3.99× | ok |
| hexxagon | 0.275 | 0.961 | 3.49× | 1.066 | 3.88× | ok |
| lambda | 0.107 | 0.997 | 9.32× | 0.487 | 4.55× | ok |
| minisat | 0.138 | 0.895 | 6.49× | 0.643 | 4.66× | ok |
| nlohmann-json | 0.754 | 3.207 | 4.25× | 3.043 | 4.04× | ok |
| pugixml | 0.658 | 5.517 | 8.38× | 3.758 | 5.71× | ok |
| pugixml-tests | 5.156 | 34.530 | 6.70× | 24.265 | 4.71× | ok |
| rapidjson | 0.222 | 1.183 | 5.33× | 0.731 | 3.29× | ok |
| re2 | 2.958 | 18.756 | 6.34× | 10.027 | 3.39× | ok |
| re2-test-re2 | 5.821 | 26.405 | 4.54× | 21.453 | 3.69× | ok |
| re2-test-search | 5.707 | 23.831 | 4.18× | 20.366 | 3.57× | ok |
| tramp3d-v4 | 2.384 | 23.977 | 10.06× | 14.003 | 5.87× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.132 | 2.28× | 0.148 | 2.55× | ok |
| Adobe-C++/loop_unroll | 0.036 | 0.097 | 2.69× | 0.100 | 2.78× | ok |
| Adobe-C++/simple_types_constant_folding | 0.041 | 0.100 | 2.44× | 0.107 | 2.61× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.037 | 0.093 | 2.51× | 0.102 | 2.76× | ok |
| Adobe-C++/stepanov_abstraction | 0.030 | 0.067 | 2.23× | 0.085 | 2.83× | ok |
| Adobe-C++/stepanov_vector | 0.063 | 0.120 | 1.90× | 0.198 | 3.14× | ok |
| Bullet | 3.869 | 9.691 | 2.50× | 13.989 | 3.62× | ok |
| CLAMR | 2.191 | 4.568 | 2.08× | 5.771 | 2.63× | ok |
| CoyoteBench/almabench | 0.026 | 0.063 | 2.42× | 0.071 | 2.73× | ok |
| CoyoteBench/fftbench | 0.102 | 0.225 | 2.21× | 0.315 | 3.09× | ok |
| CoyoteBench/huffbench | 0.026 | 0.055 | 2.12× | 0.071 | 2.73× | ok |
| CoyoteBench/lpbench | 0.029 | 0.059 | 2.03× | 0.079 | 2.72× | ok |
| DOE/HACCKernels | 0.112 | 0.250 | 2.23× | 0.287 | 2.56× | ok |
| DOE/HPCCG | 0.652 | 1.298 | 1.99× | 2.043 | 3.13× | ok |
| DOE/PENNANT | 1.320 | 3.036 | 2.30× | 3.572 | 2.71× | ok |
| DOE/miniFE | 0.544 | 1.240 | 2.28× | 1.677 | 3.08× | ok |
| Misc-C++-EH/spirit | 0.296 | 0.964 | 3.26× | 1.272 | 4.30× | ok |
| Misc-C++-Large/ray | 0.090 | 0.242 | 2.69× | 0.244 | 2.71× | ok |
| Misc-C++-Large/sphereflake | 0.088 | 0.172 | 1.95× | 0.222 | 2.52× | ok |
| Misc-C++/bigfib | 0.098 | 0.221 | 2.26× | 0.285 | 2.91× | ok |
| Misc-C++/oopack_v1p8 | 0.030 | 0.055 | 1.83× | 0.086 | 2.87× | ok |
| Misc-C++/stepanov_container | 0.145 | 0.274 | 1.89× | 0.369 | 2.54× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.056 | 2.00× | 0.071 | 2.54× | ok |
| PAQ8p | 0.040 | 0.105 | 2.62× | 0.115 | 2.88× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.023 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.020 | — | 0.027 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.069 | 0.157 | 2.28× | 0.190 | 2.75× | ok |
| Shootout-C++/ackermann | 0.064 | 0.155 | 2.42× | 0.190 | 2.97× | ok |
| Shootout-C++/ary3 | 0.074 | 0.167 | 2.26× | 0.209 | 2.82× | ok |
| Shootout-C++/fibo | 0.066 | 0.147 | 2.23× | 0.190 | 2.88× | ok |
| Shootout-C++/hash | 0.094 | 0.208 | 2.21× | 0.321 | 3.41× | ok |
| Shootout-C++/hash2 | 0.102 | 0.224 | 2.20× | 0.246 | 2.41× | ok |
| Shootout-C++/heapsort | 0.090 | 0.198 | 2.20× | 0.216 | 2.40× | ok |
| Shootout-C++/lists | 0.077 | 0.157 | 2.04× | 0.197 | 2.56× | ok |
| Shootout-C++/lists1 | 0.083 | 0.176 | 2.12× | 0.223 | 2.69× | ok |
| Shootout-C++/matrix | 0.065 | 0.143 | 2.20× | 0.192 | 2.95× | ok |
| Shootout-C++/methcall | 0.062 | 0.142 | 2.29× | 0.208 | 3.35× | ok |
| Shootout-C++/moments | 0.086 | 0.184 | 2.14× | 0.226 | 2.63× | ok |
| Shootout-C++/random | 0.080 | 0.168 | 2.10× | 0.221 | 2.76× | ok |
| Shootout-C++/sieve | 0.078 | 0.179 | 2.29× | 0.232 | 2.97× | ok |
| SmallPT | 0.026 | 0.048 | 1.85× | 0.072 | 2.77× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.021 | — | 0.028 | — | ok |
| Stanford/Treesort | 0.009 | 0.021 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.141 | 2.24× | 0.188 | 2.98× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.057 | 1.90× | 0.076 | 2.53× | ok |
| bg/fasta/1 | 0.050 | 0.093 | 1.86× | 0.113 | 2.26× | ok |
| bg/fasta/2 | 0.050 | 0.094 | 1.88× | 0.115 | 2.30× | ok |
| bg/fasta/3 | 0.079 | 0.158 | 2.00× | 0.213 | 2.70× | ok |
| bg/fasta/4 | 0.070 | 0.141 | 2.01× | 0.168 | 2.40× | ok |
| bg/fasta/6 | 0.124 | 0.256 | 2.06× | 0.314 | 2.53× | ok |
| bg/mandelbrot/0 | 0.142 | 0.293 | 2.06× | 0.373 | 2.63× | ok |
| bg/mandelbrot/2 | 0.091 | 0.188 | 2.07× | 0.231 | 2.54× | ok |
| bg/mandelbrot/3 | 0.096 | 0.209 | 2.18× | 0.244 | 2.54× | ok |
| bg/mandelbrot/5 | 0.043 | 0.080 | 1.86× | 0.108 | 2.51× | ok |
| bg/mandelbrot/7 | 0.041 | 0.085 | 2.07× | 0.113 | 2.76× | ok |
| bg/mandelbrot/9 | 0.038 | 0.083 | 2.18× | 0.101 | 2.66× | ok |
| bg/nbody/1 | 0.027 | 0.058 | 2.15× | 0.065 | 2.41× | ok |
| bg/nbody/2 | 0.026 | 0.048 | 1.85× | 0.079 | 3.04× | ok |
| bg/nbody/3 | 0.025 | 0.049 | 1.96× | 0.069 | 2.76× | ok |
| bg/nbody/6 | 0.024 | 0.053 | 2.21× | 0.072 | 3.00× | ok |
| bg/pidigits/4 | 0.113 | 0.237 | 2.10× | 0.385 | 3.41× | ok |
| bg/pidigits/5 | 0.074 | 0.185 | 2.50× | 0.202 | 2.73× | ok |
| bg/revcomp/1 | 0.084 | 0.164 | 1.95× | 0.200 | 2.38× | ok |
| bg/revcomp/5 | 0.074 | 0.154 | 2.08× | 0.186 | 2.51× | ok |
| bg/spectralnorm/1 | 0.106 | 0.226 | 2.13× | 0.270 | 2.55× | ok |
| box2d | 1.365 | 2.776 | 2.03× | 3.112 | 2.28× | ok |
| fmt | 0.448 | 0.959 | 2.14× | 1.514 | 3.38× | ok |
| hexxagon | 0.214 | 0.578 | 2.70× | 0.643 | 3.00× | ok |
| lambda | 0.035 | 0.104 | 2.97× | 0.133 | 3.80× | ok |
| minisat | 0.044 | 0.130 | 2.95× | 0.155 | 3.52× | ok |
| nlohmann-json | 0.303 | 0.752 | 2.48× | 1.304 | 4.30× | ok |
| pugixml | 0.210 | 0.506 | 2.41× | 0.708 | 3.37× | ok |
| pugixml-tests | 2.980 | 7.328 | 2.46× | 9.280 | 3.11× | ok |
| rapidjson | 0.093 | 0.239 | 2.57× | 0.299 | 3.22× | ok |
| re2 | 2.901 | 6.545 | 2.26× | 5.722 | 1.97× | ok |
| re2-test-re2 | 4.185 | 9.590 | 2.29× | 12.781 | 3.05× | ok |
| re2-test-search | 4.075 | 9.854 | 2.42× | 12.407 | 3.04× | ok |
| tramp3d-v4 | 0.462 | 2.231 | 4.83× | 1.481 | 3.21× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
