# Public benchmarks: AMD EPYC

Measured compiler: [`f9e97b328`](https://github.com/vishvananda/cppgm-extended/commit/f9e97b328c0796c85c317bee205ca89a663490b1) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890561) · [Raw program results](results.json)

81 of 81 programs built with cppgm++ and g++ and agreed. Each number is the reference over cppgm++, so above 1× means cppgm++ is smaller or faster.

CPU: AMD EPYC 9V45 96-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.20× | 76 | 2.70× | 76 |
| Compile CPU, `-O0` | 3.05× | 77 | 2.92× | 77 |
| Compile CPU, `-O3` | 4.16× | 79 | 3.65× | 79 |
| Compile peak RSS, `-O0` | 1.46× | 81 | 2.22× | 81 |
| Compile peak RSS, `-O3` | 1.72× | 81 | 2.31× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.09× | 81 |
| Run CPU, `-O3` | 0.98× | 80 | 0.99× | 80 |
| Run instructions, `-O3` | 0.96× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.962 to 1.029; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.060 | 0.219 | 3.65× | 0.153 | 2.55× | ok |
| Adobe-C++/loop_unroll | 0.050 | 0.457 | 9.14× | 0.139 | 2.78× | ok |
| Adobe-C++/simple_types_constant_folding | 0.049 | 0.558 | 11.39× | 0.185 | 3.78× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.042 | 0.393 | 9.36× | 0.147 | 3.50× | ok |
| Adobe-C++/stepanov_abstraction | 0.035 | 0.145 | 4.14× | 0.097 | 2.77× | ok |
| Adobe-C++/stepanov_vector | 0.073 | 0.235 | 3.22× | 0.200 | 2.74× | ok |
| Bullet | 4.690 | 15.258 | 3.25× | 14.166 | 3.02× | ok |
| CLAMR | 2.202 | 7.633 | 3.47× | 7.393 | 3.36× | ok |
| CoyoteBench/almabench | 0.025 | 0.074 | 2.96× | 0.074 | 2.96× | ok |
| CoyoteBench/fftbench | 0.092 | 0.212 | 2.30× | 0.263 | 2.86× | ok |
| CoyoteBench/huffbench | 0.025 | 0.068 | 2.72× | 0.074 | 2.96× | ok |
| CoyoteBench/lpbench | 0.027 | 0.064 | 2.37× | 0.079 | 2.93× | ok |
| DOE/HACCKernels | 0.099 | 0.255 | 2.58× | 0.269 | 2.72× | ok |
| DOE/HPCCG | 0.586 | 1.415 | 2.41× | 1.685 | 2.88× | ok |
| DOE/PENNANT | 1.306 | 3.303 | 2.53× | 3.459 | 2.65× | ok |
| DOE/miniFE | 0.571 | 1.895 | 3.32× | 1.748 | 3.06× | ok |
| Misc-C++-EH/spirit | 0.382 | 2.184 | 5.72× | 1.502 | 3.93× | ok |
| Misc-C++-Large/ray | 0.092 | 0.251 | 2.73× | 0.318 | 3.46× | ok |
| Misc-C++-Large/sphereflake | 0.082 | 0.227 | 2.77× | 0.233 | 2.84× | ok |
| Misc-C++/bigfib | 0.116 | 0.337 | 2.91× | 0.353 | 3.04× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.080 | 2.96× | 0.079 | 2.93× | ok |
| Misc-C++/stepanov_container | 0.159 | 0.467 | 2.94× | 0.489 | 3.08× | ok |
| Misc-C++/stepanov_v1p2 | 0.031 | 0.106 | 3.42× | 0.083 | 2.68× | ok |
| PAQ8p | 0.062 | 0.391 | 6.31× | 0.185 | 2.98× | ok |
| Prolangs-C++/life | 0.004 | 0.030 | — | 0.029 | — | ok |
| Prolangs-C++/ocean | 0.011 | 0.063 | 5.73× | 0.044 | 4.00× | ok |
| Prolangs-C++/primes | 0.006 | 0.024 | — | 0.026 | — | ok |
| Shootout-C++-EH/except | 0.071 | 0.165 | 2.32× | 0.217 | 3.06× | ok |
| Shootout-C++/ackermann | 0.068 | 0.146 | 2.15× | 0.192 | 2.82× | ok |
| Shootout-C++/ary3 | 0.086 | 0.198 | 2.30× | 0.237 | 2.76× | ok |
| Shootout-C++/fibo | 0.067 | 0.142 | 2.12× | 0.186 | 2.78× | ok |
| Shootout-C++/hash | 0.094 | 0.263 | 2.80× | 0.276 | 2.94× | ok |
| Shootout-C++/hash2 | 0.102 | 0.267 | 2.62× | 0.295 | 2.89× | ok |
| Shootout-C++/heapsort | 0.080 | 0.167 | 2.09× | 0.216 | 2.70× | ok |
| Shootout-C++/lists | 0.081 | 0.184 | 2.27× | 0.207 | 2.56× | ok |
| Shootout-C++/lists1 | 0.084 | 0.210 | 2.50× | 0.227 | 2.70× | ok |
| Shootout-C++/matrix | 0.064 | 0.140 | 2.19× | 0.184 | 2.88× | ok |
| Shootout-C++/methcall | 0.065 | 0.144 | 2.22× | 0.165 | 2.54× | ok |
| Shootout-C++/moments | 0.093 | 0.232 | 2.49× | 0.223 | 2.40× | ok |
| Shootout-C++/random | 0.080 | 0.168 | 2.10× | 0.212 | 2.65× | ok |
| Shootout-C++/sieve | 0.081 | 0.204 | 2.52× | 0.241 | 2.98× | ok |
| SmallPT | 0.027 | 0.084 | 3.11× | 0.075 | 2.78× | ok |
| Stanford/Bubblesort | 0.009 | 0.028 | — | 0.032 | — | ok |
| Stanford/FloatMM | 0.009 | 0.028 | — | 0.033 | — | ok |
| Stanford/Puzzle | 0.010 | 0.034 | 3.40× | 0.034 | 3.40× | ok |
| Stanford/Treesort | 0.010 | 0.031 | 3.10× | 0.030 | 3.00× | ok |
| bg/binarytrees/2 | 0.067 | 0.136 | 2.03× | 0.184 | 2.75× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.068 | 2.06× | 0.075 | 2.27× | ok |
| bg/fasta/1 | 0.051 | 0.117 | 2.29× | 0.123 | 2.41× | ok |
| bg/fasta/2 | 0.050 | 0.118 | 2.36× | 0.122 | 2.44× | ok |
| bg/fasta/3 | 0.078 | 0.164 | 2.10× | 0.245 | 3.14× | ok |
| bg/fasta/4 | 0.072 | 0.141 | 1.96× | 0.199 | 2.76× | ok |
| bg/fasta/6 | 0.131 | 0.354 | 2.70× | 0.391 | 2.98× | ok |
| bg/mandelbrot/0 | 0.155 | 0.398 | 2.57× | 0.385 | 2.48× | ok |
| bg/mandelbrot/2 | 0.082 | 0.204 | 2.49× | 0.235 | 2.87× | ok |
| bg/mandelbrot/3 | 0.087 | 0.197 | 2.26× | 0.266 | 3.06× | ok |
| bg/mandelbrot/5 | 0.041 | 0.101 | 2.46× | 0.108 | 2.63× | ok |
| bg/mandelbrot/7 | 0.044 | 0.114 | 2.59× | 0.117 | 2.66× | ok |
| bg/mandelbrot/9 | 0.042 | 0.119 | 2.83× | 0.113 | 2.69× | ok |
| bg/nbody/1 | 0.028 | 0.095 | 3.39× | 0.081 | 2.89× | ok |
| bg/nbody/2 | 0.026 | 0.064 | 2.46× | 0.068 | 2.62× | ok |
| bg/nbody/3 | 0.026 | 0.064 | 2.46× | 0.072 | 2.77× | ok |
| bg/nbody/6 | 0.028 | 0.093 | 3.32× | 0.078 | 2.79× | ok |
| bg/pidigits/4 | 0.113 | 0.290 | 2.57× | 0.311 | 2.75× | ok |
| bg/pidigits/5 | 0.070 | 0.165 | 2.36× | 0.203 | 2.90× | ok |
| bg/revcomp/1 | 0.077 | 0.195 | 2.53× | 0.214 | 2.78× | ok |
| bg/revcomp/5 | 0.071 | 0.181 | 2.55× | 0.199 | 2.80× | ok |
| bg/spectralnorm/1 | 0.104 | 0.247 | 2.38× | 0.325 | 3.13× | ok |
| box2d | 1.382 | 3.835 | 2.77× | 4.330 | 3.13× | ok |
| fmt | 0.461 | 2.240 | 4.86× | 1.450 | 3.15× | ok |
| hexxagon | 0.265 | 0.579 | 2.18× | 0.724 | 2.73× | ok |
| lambda | 0.050 | 0.294 | 5.88× | 0.203 | 4.06× | ok |
| minisat | 0.056 | 0.254 | 4.54× | 0.184 | 3.29× | ok |
| nlohmann-json | 0.390 | 1.656 | 4.25× | 1.535 | 3.94× | ok |
| pugixml | 0.250 | 1.036 | 4.14× | 0.862 | 3.45× | ok |
| pugixml-tests | 3.242 | 13.170 | 4.06× | 11.072 | 3.42× | ok |
| rapidjson | 0.114 | 0.396 | 3.47× | 0.317 | 2.78× | ok |
| re2 | 2.761 | 8.966 | 3.25× | 5.796 | 2.10× | ok |
| re2-test-re2 | 4.265 | 13.042 | 3.06× | 13.257 | 3.11× | ok |
| re2-test-search | 4.075 | 11.827 | 2.90× | 11.456 | 2.81× | ok |
| tramp3d-v4 | 0.615 | 7.432 | 12.08× | 2.173 | 3.53× | ok |

### O3 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.117 | 0.701 | 5.99× | 0.423 | 3.62× | ok |
| Adobe-C++/loop_unroll | 0.313 | 4.656 | 14.88× | 3.498 | 11.18× | ok |
| Adobe-C++/simple_types_constant_folding | 0.194 | 2.413 | 12.44× | 1.922 | 9.91× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.156 | 1.869 | 11.98× | 1.756 | 11.26× | ok |
| Adobe-C++/stepanov_abstraction | 0.074 | 0.871 | 11.77× | 0.432 | 5.84× | ok |
| Adobe-C++/stepanov_vector | 0.107 | 1.120 | 10.47× | 0.550 | 5.14× | ok |
| Bullet | 5.719 | 32.774 | 5.73× | 22.709 | 3.97× | ok |
| CLAMR | 3.849 | 19.255 | 5.00× | 15.063 | 3.91× | ok |
| CoyoteBench/almabench | 0.029 | 0.132 | 4.55× | 0.105 | 3.62× | ok |
| CoyoteBench/fftbench | 0.105 | 0.349 | 3.32× | 0.355 | 3.38× | ok |
| CoyoteBench/huffbench | 0.036 | 0.181 | 5.03× | 0.128 | 3.56× | ok |
| CoyoteBench/lpbench | 0.036 | 0.151 | 4.19× | 0.173 | 4.81× | ok |
| DOE/HACCKernels | 0.106 | 0.317 | 2.99× | 0.329 | 3.10× | ok |
| DOE/HPCCG | 0.612 | 1.940 | 3.17× | 1.962 | 3.21× | ok |
| DOE/PENNANT | 1.628 | 5.014 | 3.08× | 4.705 | 2.89× | ok |
| DOE/miniFE | 0.767 | 3.430 | 4.47× | 2.798 | 3.65× | ok |
| Misc-C++-EH/spirit | 0.569 | 3.312 | 5.82× | 2.694 | 4.73× | ok |
| Misc-C++-Large/ray | 0.107 | 0.415 | 3.88× | 0.359 | 3.36× | ok |
| Misc-C++-Large/sphereflake | 0.093 | 0.627 | 6.74× | 0.310 | 3.33× | ok |
| Misc-C++/bigfib | 0.138 | 0.477 | 3.46× | 0.390 | 2.83× | ok |
| Misc-C++/oopack_v1p8 | 0.032 | 0.150 | 4.69× | 0.140 | 4.38× | ok |
| Misc-C++/stepanov_container | 0.210 | 0.842 | 4.01× | 0.766 | 3.65× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.206 | 5.15× | 0.174 | 4.35× | ok |
| PAQ8p | 0.257 | 3.278 | 12.75× | 1.396 | 5.43× | ok |
| Prolangs-C++/life | 0.008 | 0.093 | — | 0.065 | — | ok |
| Prolangs-C++/ocean | 0.020 | 0.190 | 9.50× | 0.104 | 5.20× | ok |
| Prolangs-C++/primes | 0.008 | 0.034 | — | 0.035 | — | ok |
| Shootout-C++-EH/except | 0.072 | 0.180 | 2.50× | 0.233 | 3.24× | ok |
| Shootout-C++/ackermann | 0.071 | 0.178 | 2.51× | 0.219 | 3.08× | ok |
| Shootout-C++/ary3 | 0.092 | 0.248 | 2.70× | 0.236 | 2.57× | ok |
| Shootout-C++/fibo | 0.074 | 0.186 | 2.51× | 0.195 | 2.64× | ok |
| Shootout-C++/hash | 0.107 | 0.334 | 3.12× | 0.356 | 3.33× | ok |
| Shootout-C++/hash2 | 0.119 | 0.397 | 3.34× | 0.398 | 3.34× | ok |
| Shootout-C++/heapsort | 0.083 | 0.198 | 2.39× | 0.236 | 2.84× | ok |
| Shootout-C++/lists | 0.080 | 0.199 | 2.49× | 0.231 | 2.89× | ok |
| Shootout-C++/lists1 | 0.094 | 0.246 | 2.62× | 0.268 | 2.85× | ok |
| Shootout-C++/matrix | 0.070 | 0.194 | 2.77× | 0.259 | 3.70× | ok |
| Shootout-C++/methcall | 0.067 | 0.169 | 2.52× | 0.200 | 2.99× | ok |
| Shootout-C++/moments | 0.103 | 0.280 | 2.72× | 0.278 | 2.70× | ok |
| Shootout-C++/random | 0.085 | 0.184 | 2.16× | 0.217 | 2.55× | ok |
| Shootout-C++/sieve | 0.089 | 0.216 | 2.43× | 0.249 | 2.80× | ok |
| SmallPT | 0.037 | 0.242 | 6.54× | 0.144 | 3.89× | ok |
| Stanford/Bubblesort | 0.011 | 0.051 | 4.64× | 0.050 | 4.55× | ok |
| Stanford/FloatMM | 0.012 | 0.059 | 4.92× | 0.060 | 5.00× | ok |
| Stanford/Puzzle | 0.017 | 0.108 | 6.35× | 0.104 | 6.12× | ok |
| Stanford/Treesort | 0.014 | 0.078 | 5.57× | 0.048 | 3.43× | ok |
| bg/binarytrees/2 | 0.071 | 0.348 | 4.90× | 0.213 | 3.00× | ok |
| bg/fannkuchredux/3 | 0.036 | 0.111 | 3.08× | 0.101 | 2.81× | ok |
| bg/fasta/1 | 0.058 | 0.152 | 2.62× | 0.158 | 2.72× | ok |
| bg/fasta/2 | 0.056 | 0.147 | 2.62× | 0.161 | 2.88× | ok |
| bg/fasta/3 | 0.081 | 0.198 | 2.44× | 0.243 | 3.00× | ok |
| bg/fasta/4 | 0.077 | 0.171 | 2.22× | 0.196 | 2.55× | ok |
| bg/fasta/6 | 0.150 | 0.463 | 3.09× | 0.492 | 3.28× | ok |
| bg/mandelbrot/0 | 0.174 | 0.572 | 3.29× | 0.576 | 3.31× | ok |
| bg/mandelbrot/2 | 0.089 | 0.249 | 2.80× | 0.269 | 3.02× | ok |
| bg/mandelbrot/3 | 0.090 | 0.210 | 2.33× | 0.245 | 2.72× | ok |
| bg/mandelbrot/5 | 0.046 | 0.143 | 3.11× | 0.132 | 2.87× | ok |
| bg/mandelbrot/7 | 0.051 | 0.169 | 3.31× | 0.154 | 3.02× | ok |
| bg/mandelbrot/9 | 0.050 | 0.160 | 3.20× | 0.145 | 2.90× | ok |
| bg/nbody/1 | 0.035 | 0.142 | 4.06× | 0.140 | 4.00× | ok |
| bg/nbody/2 | 0.028 | 0.116 | 4.14× | 0.102 | 3.64× | ok |
| bg/nbody/3 | 0.028 | 0.107 | 3.82× | 0.099 | 3.54× | ok |
| bg/nbody/6 | 0.037 | 0.146 | 3.95× | 0.145 | 3.92× | ok |
| bg/pidigits/4 | 0.119 | 0.320 | 2.69× | 0.349 | 2.93× | ok |
| bg/pidigits/5 | 0.078 | 0.194 | 2.49× | 0.216 | 2.77× | ok |
| bg/revcomp/1 | 0.082 | 0.236 | 2.88× | 0.290 | 3.54× | ok |
| bg/revcomp/5 | 0.080 | 0.223 | 2.79× | 0.230 | 2.88× | ok |
| bg/spectralnorm/1 | 0.105 | 0.296 | 2.82× | 0.359 | 3.42× | ok |
| box2d | 1.716 | 6.510 | 3.79× | 5.915 | 3.45× | ok |
| fmt | 0.846 | 4.686 | 5.54× | 3.039 | 3.59× | ok |
| hexxagon | 0.279 | 1.002 | 3.59× | 1.010 | 3.62× | ok |
| lambda | 0.111 | 1.078 | 9.71× | 0.535 | 4.82× | ok |
| minisat | 0.127 | 0.911 | 7.17× | 0.554 | 4.36× | ok |
| nlohmann-json | 0.671 | 3.042 | 4.53× | 2.416 | 3.60× | ok |
| pugixml | 0.610 | 4.204 | 6.89× | 3.160 | 5.18× | ok |
| pugixml-tests | 4.687 | 30.304 | 6.47× | 21.344 | 4.55× | ok |
| rapidjson | 0.204 | 1.031 | 5.05× | 0.578 | 2.83× | ok |
| re2 | 2.906 | 15.448 | 5.32× | 8.545 | 2.94× | ok |
| re2-test-re2 | 5.302 | 23.484 | 4.43× | 19.173 | 3.62× | ok |
| re2-test-search | 5.260 | 21.234 | 4.04× | 15.229 | 2.90× | ok |
| tramp3d-v4 | 1.869 | 14.200 | 7.60× | 11.784 | 6.30× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.057 | 0.123 | 2.16× | 0.130 | 2.28× | ok |
| Adobe-C++/loop_unroll | 0.037 | 0.083 | 2.24× | 0.086 | 2.32× | ok |
| Adobe-C++/simple_types_constant_folding | 0.035 | 0.091 | 2.60× | 0.095 | 2.71× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.032 | 0.082 | 2.56× | 0.084 | 2.62× | ok |
| Adobe-C++/stepanov_abstraction | 0.030 | 0.063 | 2.10× | 0.076 | 2.53× | ok |
| Adobe-C++/stepanov_vector | 0.059 | 0.107 | 1.81× | 0.161 | 2.73× | ok |
| Bullet | 3.974 | 9.404 | 2.37× | 11.623 | 2.92× | ok |
| CLAMR | 2.012 | 4.064 | 2.02× | 5.890 | 2.93× | ok |
| CoyoteBench/almabench | 0.025 | 0.062 | 2.48× | 0.067 | 2.68× | ok |
| CoyoteBench/fftbench | 0.095 | 0.192 | 2.02× | 0.249 | 2.62× | ok |
| CoyoteBench/huffbench | 0.024 | 0.058 | 2.42× | 0.068 | 2.83× | ok |
| CoyoteBench/lpbench | 0.026 | 0.053 | 2.04× | 0.076 | 2.92× | ok |
| DOE/HACCKernels | 0.094 | 0.224 | 2.38× | 0.250 | 2.66× | ok |
| DOE/HPCCG | 0.577 | 1.207 | 2.09× | 1.586 | 2.75× | ok |
| DOE/PENNANT | 1.242 | 2.541 | 2.05× | 3.237 | 2.61× | ok |
| DOE/miniFE | 0.522 | 1.239 | 2.37× | 1.477 | 2.83× | ok |
| Misc-C++-EH/spirit | 0.305 | 0.774 | 2.54× | 0.971 | 3.18× | ok |
| Misc-C++-Large/ray | 0.091 | 0.202 | 2.22× | 0.259 | 2.85× | ok |
| Misc-C++-Large/sphereflake | 0.081 | 0.205 | 2.53× | 0.220 | 2.72× | ok |
| Misc-C++/bigfib | 0.104 | 0.248 | 2.38× | 0.317 | 3.05× | ok |
| Misc-C++/oopack_v1p8 | 0.026 | 0.056 | 2.15× | 0.071 | 2.73× | ok |
| Misc-C++/stepanov_container | 0.144 | 0.271 | 1.88× | 0.389 | 2.70× | ok |
| Misc-C++/stepanov_v1p2 | 0.029 | 0.058 | 2.00× | 0.072 | 2.48× | ok |
| PAQ8p | 0.042 | 0.111 | 2.64× | 0.109 | 2.60× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.021 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.024 | — | 0.031 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.016 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.070 | 0.163 | 2.33× | 0.200 | 2.86× | ok |
| Shootout-C++/ackermann | 0.068 | 0.145 | 2.13× | 0.184 | 2.71× | ok |
| Shootout-C++/ary3 | 0.083 | 0.174 | 2.10× | 0.217 | 2.61× | ok |
| Shootout-C++/fibo | 0.068 | 0.144 | 2.12× | 0.181 | 2.66× | ok |
| Shootout-C++/hash | 0.088 | 0.191 | 2.17× | 0.246 | 2.80× | ok |
| Shootout-C++/hash2 | 0.096 | 0.199 | 2.07× | 0.270 | 2.81× | ok |
| Shootout-C++/heapsort | 0.081 | 0.169 | 2.09× | 0.207 | 2.56× | ok |
| Shootout-C++/lists | 0.078 | 0.160 | 2.05× | 0.190 | 2.44× | ok |
| Shootout-C++/lists1 | 0.082 | 0.171 | 2.09× | 0.212 | 2.59× | ok |
| Shootout-C++/matrix | 0.064 | 0.139 | 2.17× | 0.175 | 2.73× | ok |
| Shootout-C++/methcall | 0.064 | 0.141 | 2.20× | 0.159 | 2.48× | ok |
| Shootout-C++/moments | 0.089 | 0.187 | 2.10× | 0.218 | 2.45× | ok |
| Shootout-C++/random | 0.081 | 0.167 | 2.06× | 0.211 | 2.60× | ok |
| Shootout-C++/sieve | 0.080 | 0.169 | 2.11× | 0.215 | 2.69× | ok |
| SmallPT | 0.026 | 0.055 | 2.12× | 0.068 | 2.62× | ok |
| Stanford/Bubblesort | 0.009 | 0.024 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.009 | 0.023 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.010 | 0.024 | 2.40× | 0.031 | 3.10× | ok |
| Stanford/Treesort | 0.010 | 0.024 | 2.40× | 0.029 | 2.90× | ok |
| bg/binarytrees/2 | 0.067 | 0.130 | 1.94× | 0.179 | 2.67× | ok |
| bg/fannkuchredux/3 | 0.032 | 0.056 | 1.75× | 0.071 | 2.22× | ok |
| bg/fasta/1 | 0.048 | 0.093 | 1.94× | 0.113 | 2.35× | ok |
| bg/fasta/2 | 0.048 | 0.093 | 1.94× | 0.110 | 2.29× | ok |
| bg/fasta/3 | 0.075 | 0.150 | 2.00× | 0.202 | 2.69× | ok |
| bg/fasta/4 | 0.070 | 0.137 | 1.96× | 0.180 | 2.57× | ok |
| bg/fasta/6 | 0.120 | 0.289 | 2.41× | 0.344 | 2.87× | ok |
| bg/mandelbrot/0 | 0.142 | 0.275 | 1.94× | 0.341 | 2.40× | ok |
| bg/mandelbrot/2 | 0.079 | 0.178 | 2.25× | 0.215 | 2.72× | ok |
| bg/mandelbrot/3 | 0.088 | 0.179 | 2.03× | 0.226 | 2.57× | ok |
| bg/mandelbrot/5 | 0.039 | 0.083 | 2.13× | 0.098 | 2.51× | ok |
| bg/mandelbrot/7 | 0.041 | 0.083 | 2.02× | 0.104 | 2.54× | ok |
| bg/mandelbrot/9 | 0.040 | 0.083 | 2.08× | 0.097 | 2.43× | ok |
| bg/nbody/1 | 0.026 | 0.056 | 2.15× | 0.071 | 2.73× | ok |
| bg/nbody/2 | 0.026 | 0.052 | 2.00× | 0.065 | 2.50× | ok |
| bg/nbody/3 | 0.025 | 0.052 | 2.08× | 0.067 | 2.68× | ok |
| bg/nbody/6 | 0.026 | 0.056 | 2.15× | 0.068 | 2.62× | ok |
| bg/pidigits/4 | 0.117 | 0.241 | 2.06× | 0.283 | 2.42× | ok |
| bg/pidigits/5 | 0.069 | 0.156 | 2.26× | 0.187 | 2.71× | ok |
| bg/revcomp/1 | 0.073 | 0.156 | 2.14× | 0.206 | 2.82× | ok |
| bg/revcomp/5 | 0.071 | 0.141 | 1.99× | 0.178 | 2.51× | ok |
| bg/spectralnorm/1 | 0.098 | 0.209 | 2.13× | 0.313 | 3.19× | ok |
| box2d | 1.332 | 2.718 | 2.04× | 3.703 | 2.78× | ok |
| fmt | 0.403 | 1.045 | 2.59× | 1.141 | 2.83× | ok |
| hexxagon | 0.260 | 0.511 | 1.97× | 0.694 | 2.67× | ok |
| lambda | 0.041 | 0.133 | 3.24× | 0.159 | 3.88× | ok |
| minisat | 0.048 | 0.119 | 2.48× | 0.141 | 2.94× | ok |
| nlohmann-json | 0.323 | 0.744 | 2.30× | 1.150 | 3.56× | ok |
| pugixml | 0.207 | 0.406 | 1.96× | 0.633 | 3.06× | ok |
| pugixml-tests | 2.752 | 6.781 | 2.46× | 8.325 | 3.03× | ok |
| rapidjson | 0.091 | 0.209 | 2.30× | 0.258 | 2.84× | ok |
| re2 | 2.757 | 5.864 | 2.13× | 4.872 | 1.77× | ok |
| re2-test-re2 | 3.811 | 8.781 | 2.30× | 11.396 | 2.99× | ok |
| re2-test-search | 3.825 | 8.552 | 2.24× | 10.837 | 2.83× | ok |
| tramp3d-v4 | 0.398 | 2.179 | 5.47× | 1.259 | 3.16× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
