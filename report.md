# Public benchmarks: AMD EPYC

Measured compiler: [`7697b5524`](https://github.com/vishvananda/cppgm/commit/7697b5524a9b033f6a1350581507ee478d068097) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44560957980) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: AMD EPYC 9V74 80-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.22× | 79 | 2.93× | 79 |
| Compile CPU, `-O0` | 2.97× | 79 | 3.14× | 79 |
| Compile CPU, `-O3` | 4.13× | 80 | 3.86× | 80 |
| Compile peak RSS, `-O0` | 1.48× | 81 | 2.38× | 81 |
| Compile peak RSS, `-O3` | 1.74× | 81 | 2.48× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.20× | 81 | 1.24× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.864 to 1.129; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.084 | 0.289 | 3.44× | 0.213 | 2.54× | ok |
| Adobe-C++/loop_unroll | 0.070 | 0.603 | 8.61× | 0.230 | 3.29× | ok |
| Adobe-C++/simple_types_constant_folding | 0.076 | 0.700 | 9.21× | 0.293 | 3.86× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.060 | 0.505 | 8.42× | 0.312 | 5.20× | ok |
| Adobe-C++/stepanov_abstraction | 0.052 | 0.201 | 3.87× | 0.141 | 2.71× | ok |
| Adobe-C++/stepanov_vector | 0.092 | 0.324 | 3.52× | 0.274 | 2.98× | ok |
| Bullet | 5.666 | 20.491 | 3.62× | 20.063 | 3.54× | ok |
| CLAMR | 2.777 | 10.198 | 3.67× | 8.775 | 3.16× | ok |
| CoyoteBench/almabench | 0.035 | 0.101 | 2.89× | 0.094 | 2.69× | ok |
| CoyoteBench/fftbench | 0.133 | 0.293 | 2.20× | 0.368 | 2.77× | ok |
| CoyoteBench/huffbench | 0.034 | 0.089 | 2.62× | 0.094 | 2.76× | ok |
| CoyoteBench/lpbench | 0.034 | 0.081 | 2.38× | 0.119 | 3.50× | ok |
| DOE/HACCKernels | 0.130 | 0.286 | 2.20× | 0.396 | 3.05× | ok |
| DOE/HPCCG | 0.756 | 1.856 | 2.46× | 2.413 | 3.19× | ok |
| DOE/PENNANT | 1.691 | 4.790 | 2.83× | 5.556 | 3.29× | ok |
| DOE/miniFE | 0.753 | 2.479 | 3.29× | 2.370 | 3.15× | ok |
| Misc-C++-EH/spirit | 0.450 | 3.235 | 7.19× | 2.098 | 4.66× | ok |
| Misc-C++-Large/ray | 0.125 | 0.323 | 2.58× | 0.448 | 3.58× | ok |
| Misc-C++-Large/sphereflake | 0.116 | 0.259 | 2.23× | 0.440 | 3.79× | ok |
| Misc-C++/bigfib | 0.161 | 0.428 | 2.66× | 0.509 | 3.16× | ok |
| Misc-C++/oopack_v1p8 | 0.041 | 0.120 | 2.93× | 0.133 | 3.24× | ok |
| Misc-C++/stepanov_container | 0.191 | 0.634 | 3.32× | 0.759 | 3.97× | ok |
| Misc-C++/stepanov_v1p2 | 0.037 | 0.145 | 3.92× | 0.112 | 3.03× | ok |
| PAQ8p | 0.078 | 0.511 | 6.55× | 0.275 | 3.53× | ok |
| Prolangs-C++/life | 0.004 | 0.036 | — | 0.032 | — | ok |
| Prolangs-C++/ocean | 0.013 | 0.070 | 5.38× | 0.053 | 4.08× | ok |
| Prolangs-C++/primes | 0.007 | 0.027 | — | 0.032 | — | ok |
| Shootout-C++-EH/except | 0.088 | 0.194 | 2.20× | 0.324 | 3.68× | ok |
| Shootout-C++/ackermann | 0.092 | 0.180 | 1.96× | 0.330 | 3.59× | ok |
| Shootout-C++/ary3 | 0.099 | 0.266 | 2.69× | 0.309 | 3.12× | ok |
| Shootout-C++/fibo | 0.102 | 0.187 | 1.83× | 0.326 | 3.20× | ok |
| Shootout-C++/hash | 0.126 | 0.324 | 2.57× | 0.375 | 2.98× | ok |
| Shootout-C++/hash2 | 0.125 | 0.351 | 2.81× | 0.496 | 3.97× | ok |
| Shootout-C++/heapsort | 0.106 | 0.217 | 2.05× | 0.296 | 2.79× | ok |
| Shootout-C++/lists | 0.096 | 0.217 | 2.26× | 0.280 | 2.92× | ok |
| Shootout-C++/lists1 | 0.103 | 0.254 | 2.47× | 0.306 | 2.97× | ok |
| Shootout-C++/matrix | 0.100 | 0.170 | 1.70× | 0.270 | 2.70× | ok |
| Shootout-C++/methcall | 0.084 | 0.188 | 2.24× | 0.243 | 2.89× | ok |
| Shootout-C++/moments | 0.120 | 0.293 | 2.44× | 0.329 | 2.74× | ok |
| Shootout-C++/random | 0.106 | 0.212 | 2.00× | 0.295 | 2.78× | ok |
| Shootout-C++/sieve | 0.114 | 0.266 | 2.33× | 0.304 | 2.67× | ok |
| SmallPT | 0.035 | 0.103 | 2.94× | 0.101 | 2.89× | ok |
| Stanford/Bubblesort | 0.012 | 0.035 | 2.92× | 0.040 | 3.33× | ok |
| Stanford/FloatMM | 0.012 | 0.032 | 2.67× | 0.037 | 3.08× | ok |
| Stanford/Puzzle | 0.012 | 0.043 | 3.58× | 0.038 | 3.17× | ok |
| Stanford/Treesort | 0.011 | 0.034 | 3.09× | 0.038 | 3.45× | ok |
| bg/binarytrees/2 | 0.081 | 0.169 | 2.09× | 0.252 | 3.11× | ok |
| bg/fannkuchredux/3 | 0.040 | 0.084 | 2.10× | 0.101 | 2.53× | ok |
| bg/fasta/1 | 0.059 | 0.142 | 2.41× | 0.161 | 2.73× | ok |
| bg/fasta/2 | 0.060 | 0.139 | 2.32× | 0.159 | 2.65× | ok |
| bg/fasta/3 | 0.097 | 0.207 | 2.13× | 0.274 | 2.82× | ok |
| bg/fasta/4 | 0.085 | 0.174 | 2.05× | 0.227 | 2.67× | ok |
| bg/fasta/6 | 0.157 | 0.433 | 2.76× | 0.506 | 3.22× | ok |
| bg/mandelbrot/0 | 0.173 | 0.492 | 2.84× | 0.522 | 3.02× | ok |
| bg/mandelbrot/2 | 0.102 | 0.273 | 2.68× | 0.311 | 3.05× | ok |
| bg/mandelbrot/3 | 0.110 | 0.239 | 2.17× | 0.314 | 2.85× | ok |
| bg/mandelbrot/5 | 0.052 | 0.112 | 2.15× | 0.148 | 2.85× | ok |
| bg/mandelbrot/7 | 0.054 | 0.139 | 2.57× | 0.164 | 3.04× | ok |
| bg/mandelbrot/9 | 0.051 | 0.129 | 2.53× | 0.140 | 2.75× | ok |
| bg/nbody/1 | 0.036 | 0.114 | 3.17× | 0.109 | 3.03× | ok |
| bg/nbody/2 | 0.033 | 0.082 | 2.48× | 0.092 | 2.79× | ok |
| bg/nbody/3 | 0.036 | 0.079 | 2.19× | 0.093 | 2.58× | ok |
| bg/nbody/6 | 0.034 | 0.113 | 3.32× | 0.104 | 3.06× | ok |
| bg/pidigits/4 | 0.157 | 0.335 | 2.13× | 0.483 | 3.08× | ok |
| bg/pidigits/5 | 0.094 | 0.197 | 2.10× | 0.268 | 2.85× | ok |
| bg/revcomp/1 | 0.110 | 0.246 | 2.24× | 0.296 | 2.69× | ok |
| bg/revcomp/5 | 0.095 | 0.238 | 2.51× | 0.265 | 2.79× | ok |
| bg/spectralnorm/1 | 0.139 | 0.283 | 2.04× | 0.445 | 3.20× | ok |
| box2d | 1.851 | 5.105 | 2.76× | 6.307 | 3.41× | ok |
| fmt | 0.595 | 2.674 | 4.49× | 2.480 | 4.17× | ok |
| hexxagon | 0.342 | 0.710 | 2.08× | 1.028 | 3.01× | ok |
| lambda | 0.069 | 0.359 | 5.20× | 0.271 | 3.93× | ok |
| minisat | 0.076 | 0.354 | 4.66× | 0.271 | 3.57× | ok |
| nlohmann-json | 0.481 | 2.166 | 4.50× | 1.801 | 3.74× | ok |
| pugixml | 0.331 | 1.296 | 3.92× | 1.306 | 3.95× | ok |
| pugixml-tests | 4.607 | 17.183 | 3.73× | 15.582 | 3.38× | ok |
| rapidjson | 0.140 | 0.533 | 3.81× | 0.447 | 3.19× | ok |
| re2 | 4.154 | 11.950 | 2.88× | 8.183 | 1.97× | ok |
| re2-test-re2 | 5.594 | 17.607 | 3.15× | 20.000 | 3.58× | ok |
| re2-test-search | 5.620 | 16.702 | 2.97× | 14.558 | 2.59× | ok |
| tramp3d-v4 | 0.801 | 8.772 | 10.95× | 3.129 | 3.91× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.126 | 1.075 | 8.53× | 0.656 | 5.21× | ok |
| Adobe-C++/loop_unroll | 0.490 | 5.801 | 11.84× | 4.732 | 9.66× | ok |
| Adobe-C++/simple_types_constant_folding | 0.286 | 3.056 | 10.69× | 2.432 | 8.50× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.229 | 2.456 | 10.72× | 2.002 | 8.74× | ok |
| Adobe-C++/stepanov_abstraction | 0.112 | 1.216 | 10.86× | 0.569 | 5.08× | ok |
| Adobe-C++/stepanov_vector | 0.135 | 1.456 | 10.79× | 0.732 | 5.42× | ok |
| Bullet | 7.375 | 40.617 | 5.51× | 30.160 | 4.09× | ok |
| CLAMR | 4.735 | 25.841 | 5.46× | 19.835 | 4.19× | ok |
| CoyoteBench/almabench | 0.040 | 0.171 | 4.28× | 0.157 | 3.92× | ok |
| CoyoteBench/fftbench | 0.141 | 0.470 | 3.33× | 0.480 | 3.40× | ok |
| CoyoteBench/huffbench | 0.044 | 0.244 | 5.55× | 0.159 | 3.61× | ok |
| CoyoteBench/lpbench | 0.051 | 0.187 | 3.67× | 0.256 | 5.02× | ok |
| DOE/HACCKernels | 0.146 | 0.417 | 2.86× | 0.455 | 3.12× | ok |
| DOE/HPCCG | 0.819 | 2.592 | 3.16× | 2.773 | 3.39× | ok |
| DOE/PENNANT | 2.104 | 6.796 | 3.23× | 7.024 | 3.34× | ok |
| DOE/miniFE | 0.995 | 4.387 | 4.41× | 4.579 | 4.60× | ok |
| Misc-C++-EH/spirit | 0.739 | 3.722 | 5.04× | 4.347 | 5.88× | ok |
| Misc-C++-Large/ray | 0.148 | 0.600 | 4.05× | 0.440 | 2.97× | ok |
| Misc-C++-Large/sphereflake | 0.132 | 0.849 | 6.43× | 0.424 | 3.21× | ok |
| Misc-C++/bigfib | 0.174 | 0.600 | 3.45× | 0.694 | 3.99× | ok |
| Misc-C++/oopack_v1p8 | 0.050 | 0.233 | 4.66× | 0.230 | 4.60× | ok |
| Misc-C++/stepanov_container | 0.264 | 0.981 | 3.72× | 1.132 | 4.29× | ok |
| Misc-C++/stepanov_v1p2 | 0.049 | 0.244 | 4.98× | 0.265 | 5.41× | ok |
| PAQ8p | 0.315 | 4.468 | 14.18× | 1.844 | 5.85× | ok |
| Prolangs-C++/life | 0.010 | 0.109 | 10.90× | 0.070 | 7.00× | ok |
| Prolangs-C++/ocean | 0.023 | 0.209 | 9.09× | 0.123 | 5.35× | ok |
| Prolangs-C++/primes | 0.009 | 0.038 | — | 0.039 | — | ok |
| Shootout-C++-EH/except | 0.088 | 0.218 | 2.48× | 0.359 | 4.08× | ok |
| Shootout-C++/ackermann | 0.089 | 0.237 | 2.66× | 0.346 | 3.89× | ok |
| Shootout-C++/ary3 | 0.110 | 0.270 | 2.45× | 0.322 | 2.93× | ok |
| Shootout-C++/fibo | 0.100 | 0.268 | 2.68× | 0.314 | 3.14× | ok |
| Shootout-C++/hash | 0.141 | 0.477 | 3.38× | 0.598 | 4.24× | ok |
| Shootout-C++/hash2 | 0.146 | 0.479 | 3.28× | 0.503 | 3.45× | ok |
| Shootout-C++/heapsort | 0.115 | 0.258 | 2.24× | 0.317 | 2.76× | ok |
| Shootout-C++/lists | 0.106 | 0.264 | 2.49× | 0.305 | 2.88× | ok |
| Shootout-C++/lists1 | 0.117 | 0.314 | 2.68× | 0.347 | 2.97× | ok |
| Shootout-C++/matrix | 0.096 | 0.229 | 2.39× | 0.350 | 3.65× | ok |
| Shootout-C++/methcall | 0.086 | 0.217 | 2.52× | 0.259 | 3.01× | ok |
| Shootout-C++/moments | 0.126 | 0.359 | 2.85× | 0.391 | 3.10× | ok |
| Shootout-C++/random | 0.105 | 0.240 | 2.29× | 0.303 | 2.89× | ok |
| Shootout-C++/sieve | 0.117 | 0.248 | 2.12× | 0.329 | 2.81× | ok |
| SmallPT | 0.046 | 0.334 | 7.26× | 0.207 | 4.50× | ok |
| Stanford/Bubblesort | 0.014 | 0.062 | 4.43× | 0.054 | 3.86× | ok |
| Stanford/FloatMM | 0.015 | 0.072 | 4.80× | 0.084 | 5.60× | ok |
| Stanford/Puzzle | 0.022 | 0.133 | 6.05× | 0.126 | 5.73× | ok |
| Stanford/Treesort | 0.016 | 0.091 | 5.69× | 0.059 | 3.69× | ok |
| bg/binarytrees/2 | 0.085 | 0.426 | 5.01× | 0.268 | 3.15× | ok |
| bg/fannkuchredux/3 | 0.044 | 0.135 | 3.07× | 0.131 | 2.98× | ok |
| bg/fasta/1 | 0.076 | 0.180 | 2.37× | 0.201 | 2.64× | ok |
| bg/fasta/2 | 0.067 | 0.184 | 2.75× | 0.199 | 2.97× | ok |
| bg/fasta/3 | 0.102 | 0.246 | 2.41× | 0.316 | 3.10× | ok |
| bg/fasta/4 | 0.094 | 0.205 | 2.18× | 0.273 | 2.90× | ok |
| bg/fasta/6 | 0.199 | 0.506 | 2.54× | 0.618 | 3.11× | ok |
| bg/mandelbrot/0 | 0.202 | 0.760 | 3.76× | 0.737 | 3.65× | ok |
| bg/mandelbrot/2 | 0.108 | 0.312 | 2.89× | 0.346 | 3.20× | ok |
| bg/mandelbrot/3 | 0.112 | 0.286 | 2.55× | 0.335 | 2.99× | ok |
| bg/mandelbrot/5 | 0.058 | 0.149 | 2.57× | 0.174 | 3.00× | ok |
| bg/mandelbrot/7 | 0.065 | 0.215 | 3.31× | 0.200 | 3.08× | ok |
| bg/mandelbrot/9 | 0.059 | 0.200 | 3.39× | 0.185 | 3.14× | ok |
| bg/nbody/1 | 0.048 | 0.177 | 3.69× | 0.189 | 3.94× | ok |
| bg/nbody/2 | 0.041 | 0.144 | 3.51× | 0.137 | 3.34× | ok |
| bg/nbody/3 | 0.039 | 0.134 | 3.44× | 0.124 | 3.18× | ok |
| bg/nbody/6 | 0.048 | 0.178 | 3.71× | 0.189 | 3.94× | ok |
| bg/pidigits/4 | 0.149 | 0.372 | 2.50× | 0.516 | 3.46× | ok |
| bg/pidigits/5 | 0.095 | 0.249 | 2.62× | 0.290 | 3.05× | ok |
| bg/revcomp/1 | 0.105 | 0.339 | 3.23× | 0.340 | 3.24× | ok |
| bg/revcomp/5 | 0.103 | 0.264 | 2.56× | 0.294 | 2.85× | ok |
| bg/spectralnorm/1 | 0.149 | 0.370 | 2.48× | 0.491 | 3.30× | ok |
| box2d | 2.253 | 8.238 | 3.66× | 8.417 | 3.74× | ok |
| fmt | 1.078 | 5.416 | 5.02× | 3.821 | 3.54× | ok |
| hexxagon | 0.376 | 1.207 | 3.21× | 1.396 | 3.71× | ok |
| lambda | 0.131 | 1.304 | 9.95× | 0.679 | 5.18× | ok |
| minisat | 0.170 | 1.188 | 6.99× | 0.755 | 4.44× | ok |
| nlohmann-json | 0.745 | 3.896 | 5.23× | 3.225 | 4.33× | ok |
| pugixml | 0.728 | 5.117 | 7.03× | 4.206 | 5.78× | ok |
| pugixml-tests | 6.232 | 38.835 | 6.23× | 28.886 | 4.64× | ok |
| rapidjson | 0.266 | 1.287 | 4.84× | 0.818 | 3.08× | ok |
| re2 | 3.819 | 19.286 | 5.05× | 11.706 | 3.07× | ok |
| re2-test-re2 | 7.025 | 30.641 | 4.36× | 27.446 | 3.91× | ok |
| re2-test-search | 7.209 | 28.816 | 4.00× | 18.791 | 2.61× | ok |
| tramp3d-v4 | 2.588 | 18.523 | 7.16× | 14.906 | 5.76× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.078 | 0.158 | 2.03× | 0.180 | 2.31× | ok |
| Adobe-C++/loop_unroll | 0.048 | 0.126 | 2.62× | 0.134 | 2.79× | ok |
| Adobe-C++/simple_types_constant_folding | 0.053 | 0.122 | 2.30× | 0.146 | 2.75× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.108 | 2.40× | 0.166 | 3.69× | ok |
| Adobe-C++/stepanov_abstraction | 0.044 | 0.083 | 1.89× | 0.110 | 2.50× | ok |
| Adobe-C++/stepanov_vector | 0.073 | 0.134 | 1.84× | 0.217 | 2.97× | ok |
| Bullet | 5.174 | 12.406 | 2.40× | 16.210 | 3.13× | ok |
| CLAMR | 2.468 | 5.672 | 2.30× | 7.546 | 3.06× | ok |
| CoyoteBench/almabench | 0.035 | 0.085 | 2.43× | 0.086 | 2.46× | ok |
| CoyoteBench/fftbench | 0.131 | 0.266 | 2.03× | 0.342 | 2.61× | ok |
| CoyoteBench/huffbench | 0.033 | 0.079 | 2.39× | 0.091 | 2.76× | ok |
| CoyoteBench/lpbench | 0.034 | 0.067 | 1.97× | 0.114 | 3.35× | ok |
| DOE/HACCKernels | 0.126 | 0.259 | 2.06× | 0.358 | 2.84× | ok |
| DOE/HPCCG | 0.741 | 1.629 | 2.20× | 2.221 | 3.00× | ok |
| DOE/PENNANT | 1.703 | 3.518 | 2.07× | 4.718 | 2.77× | ok |
| DOE/miniFE | 0.696 | 1.669 | 2.40× | 2.041 | 2.93× | ok |
| Misc-C++-EH/spirit | 0.361 | 1.246 | 3.45× | 1.381 | 3.83× | ok |
| Misc-C++-Large/ray | 0.123 | 0.274 | 2.23× | 0.391 | 3.18× | ok |
| Misc-C++-Large/sphereflake | 0.113 | 0.232 | 2.05× | 0.394 | 3.49× | ok |
| Misc-C++/bigfib | 0.144 | 0.308 | 2.14× | 0.443 | 3.08× | ok |
| Misc-C++/oopack_v1p8 | 0.040 | 0.089 | 2.22× | 0.118 | 2.95× | ok |
| Misc-C++/stepanov_container | 0.176 | 0.376 | 2.14× | 0.697 | 3.96× | ok |
| Misc-C++/stepanov_v1p2 | 0.035 | 0.082 | 2.34× | 0.094 | 2.69× | ok |
| PAQ8p | 0.055 | 0.149 | 2.71× | 0.164 | 2.98× | ok |
| Prolangs-C++/life | 0.004 | 0.012 | — | 0.023 | — | ok |
| Prolangs-C++/ocean | 0.011 | 0.026 | 2.36× | 0.036 | 3.27× | ok |
| Prolangs-C++/primes | 0.007 | 0.019 | — | 0.029 | — | ok |
| Shootout-C++-EH/except | 0.086 | 0.191 | 2.22× | 0.255 | 2.97× | ok |
| Shootout-C++/ackermann | 0.091 | 0.231 | 2.54× | 0.321 | 3.53× | ok |
| Shootout-C++/ary3 | 0.096 | 0.255 | 2.66× | 0.284 | 2.96× | ok |
| Shootout-C++/fibo | 0.095 | 0.190 | 2.00× | 0.321 | 3.38× | ok |
| Shootout-C++/hash | 0.119 | 0.251 | 2.11× | 0.336 | 2.82× | ok |
| Shootout-C++/hash2 | 0.116 | 0.268 | 2.31× | 0.345 | 2.97× | ok |
| Shootout-C++/heapsort | 0.107 | 0.218 | 2.04× | 0.323 | 3.02× | ok |
| Shootout-C++/lists | 0.092 | 0.182 | 1.98× | 0.259 | 2.82× | ok |
| Shootout-C++/lists1 | 0.111 | 0.212 | 1.91× | 0.275 | 2.48× | ok |
| Shootout-C++/matrix | 0.101 | 0.172 | 1.70× | 0.257 | 2.54× | ok |
| Shootout-C++/methcall | 0.084 | 0.186 | 2.21× | 0.236 | 2.81× | ok |
| Shootout-C++/moments | 0.114 | 0.233 | 2.04× | 0.294 | 2.58× | ok |
| Shootout-C++/random | 0.108 | 0.214 | 1.98× | 0.282 | 2.61× | ok |
| Shootout-C++/sieve | 0.109 | 0.221 | 2.03× | 0.273 | 2.50× | ok |
| SmallPT | 0.034 | 0.071 | 2.09× | 0.101 | 2.97× | ok |
| Stanford/Bubblesort | 0.012 | 0.031 | 2.58× | 0.035 | 2.92× | ok |
| Stanford/FloatMM | 0.012 | 0.028 | 2.33× | 0.036 | 3.00× | ok |
| Stanford/Puzzle | 0.012 | 0.032 | 2.67× | 0.036 | 3.00× | ok |
| Stanford/Treesort | 0.011 | 0.028 | 2.55× | 0.036 | 3.27× | ok |
| bg/binarytrees/2 | 0.080 | 0.167 | 2.09× | 0.239 | 2.99× | ok |
| bg/fannkuchredux/3 | 0.039 | 0.074 | 1.90× | 0.096 | 2.46× | ok |
| bg/fasta/1 | 0.058 | 0.115 | 1.98× | 0.148 | 2.55× | ok |
| bg/fasta/2 | 0.059 | 0.112 | 1.90× | 0.145 | 2.46× | ok |
| bg/fasta/3 | 0.096 | 0.195 | 2.03× | 0.261 | 2.72× | ok |
| bg/fasta/4 | 0.084 | 0.198 | 2.36× | 0.221 | 2.63× | ok |
| bg/fasta/6 | 0.146 | 0.306 | 2.10× | 0.438 | 3.00× | ok |
| bg/mandelbrot/0 | 0.158 | 0.379 | 2.40× | 0.460 | 2.91× | ok |
| bg/mandelbrot/2 | 0.103 | 0.245 | 2.38× | 0.289 | 2.81× | ok |
| bg/mandelbrot/3 | 0.113 | 0.234 | 2.07× | 0.303 | 2.68× | ok |
| bg/mandelbrot/5 | 0.051 | 0.093 | 1.82× | 0.134 | 2.63× | ok |
| bg/mandelbrot/7 | 0.051 | 0.103 | 2.02× | 0.150 | 2.94× | ok |
| bg/mandelbrot/9 | 0.048 | 0.095 | 1.98× | 0.124 | 2.58× | ok |
| bg/nbody/1 | 0.035 | 0.069 | 1.97× | 0.089 | 2.54× | ok |
| bg/nbody/2 | 0.033 | 0.063 | 1.91× | 0.088 | 2.67× | ok |
| bg/nbody/3 | 0.034 | 0.064 | 1.88× | 0.088 | 2.59× | ok |
| bg/nbody/6 | 0.032 | 0.069 | 2.16× | 0.089 | 2.78× | ok |
| bg/pidigits/4 | 0.149 | 0.300 | 2.01× | 0.498 | 3.34× | ok |
| bg/pidigits/5 | 0.089 | 0.195 | 2.19× | 0.253 | 2.84× | ok |
| bg/revcomp/1 | 0.109 | 0.196 | 1.80× | 0.287 | 2.63× | ok |
| bg/revcomp/5 | 0.090 | 0.204 | 2.27× | 0.237 | 2.63× | ok |
| bg/spectralnorm/1 | 0.125 | 0.259 | 2.07× | 0.422 | 3.38× | ok |
| box2d | 1.684 | 3.469 | 2.06× | 5.466 | 3.25× | ok |
| fmt | 0.504 | 1.207 | 2.39× | 1.699 | 3.37× | ok |
| hexxagon | 0.318 | 0.697 | 2.19× | 0.963 | 3.03× | ok |
| lambda | 0.058 | 0.160 | 2.76× | 0.204 | 3.52× | ok |
| minisat | 0.065 | 0.170 | 2.62× | 0.216 | 3.32× | ok |
| nlohmann-json | 0.422 | 1.055 | 2.50× | 1.367 | 3.24× | ok |
| pugixml | 0.248 | 0.517 | 2.08× | 0.946 | 3.81× | ok |
| pugixml-tests | 3.657 | 9.107 | 2.49× | 12.467 | 3.41× | ok |
| rapidjson | 0.116 | 0.311 | 2.68× | 0.352 | 3.03× | ok |
| re2 | 3.535 | 7.198 | 2.04× | 7.273 | 2.06× | ok |
| re2-test-re2 | 5.247 | 11.217 | 2.14× | 16.799 | 3.20× | ok |
| re2-test-search | 5.108 | 11.499 | 2.25× | 16.708 | 3.27× | ok |
| tramp3d-v4 | 0.505 | 2.809 | 5.56× | 1.836 | 3.64× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
