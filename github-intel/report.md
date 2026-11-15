# Public benchmarks: Intel (GitHub)

Measured compiler: [`116052803`](https://github.com/vishvananda/cppgm-extended/commit/116052803d2981c33ce1fab0c2a17d640d831a91) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43666517805) · [Raw program results](results.json)

81 of 81 programs built with cppgm++ and g++ and agreed. Each number is the reference over cppgm++, so above 1× means cppgm++ is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.25× | 74 | 2.89× | 74 |
| Compile CPU, `-O0` | 3.17× | 76 | 3.12× | 76 |
| Compile CPU, `-O3` | 4.24× | 79 | 3.77× | 79 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.12× | 81 |
| Compile peak RSS, `-O3` | 1.69× | 81 | 2.20× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 1.00× | 81 | 1.00× | 80 |
| Run instructions, `-O3` | 0.98× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.896 to 1.026; raw observations and block ratios are retained in the artifact.

## Slowest generated code, by run-time instructions

| Program | vs g++ |
| --- | ---: |
| bg/nbody/2 | 0.63× |
| PAQ8p | 0.69× |
| bg/spectralnorm/1 | 0.75× |
| tramp3d-v4 | 0.76× |
| bg/nbody/1 | 0.82× |
| bg/mandelbrot/7 | 0.84× |
| bg/mandelbrot/9 | 0.84× |
| bg/mandelbrot/5 | 0.86× |
| bg/mandelbrot/2 | 0.86× |
| bg/nbody/3 | 0.87× |

## Compile CPU times

Times are CPU seconds, excluding linking. Speed is reference time divided by cppgm++ time; higher is better. Every program is listed. Missing times show a dash. Ratios are omitted for failed programs or when either time is below 10 ms.

Compilation is measured once per compiler and level; the ABBA/BAAB repetitions apply to generated-program execution and self-built compiler speed.

### O0 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.066 | 0.253 | 3.83× | 0.218 | 3.30× | ok |
| Adobe-C++/loop_unroll | 0.051 | 0.568 | 11.14× | 0.173 | 3.39× | ok |
| Adobe-C++/simple_types_constant_folding | 0.056 | 0.652 | 11.64× | 0.208 | 3.71× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.048 | 0.476 | 9.92× | 0.234 | 4.88× | ok |
| Adobe-C++/stepanov_abstraction | 0.040 | 0.186 | 4.65× | 0.110 | 2.75× | ok |
| Adobe-C++/stepanov_vector | 0.075 | 0.275 | 3.67× | 0.230 | 3.07× | ok |
| Bullet | 5.080 | 16.166 | 3.18× | 15.026 | 2.96× | ok |
| CLAMR | 2.522 | 8.600 | 3.41× | 7.237 | 2.87× | ok |
| CoyoteBench/almabench | 0.026 | 0.067 | 2.58× | 0.081 | 3.12× | ok |
| CoyoteBench/fftbench | 0.101 | 0.251 | 2.49× | 0.307 | 3.04× | ok |
| CoyoteBench/huffbench | 0.028 | 0.064 | 2.29× | 0.076 | 2.71× | ok |
| CoyoteBench/lpbench | 0.028 | 0.071 | 2.54× | 0.078 | 2.79× | ok |
| DOE/HACCKernels | 0.105 | 0.253 | 2.41× | 0.318 | 3.03× | ok |
| DOE/HPCCG | 0.712 | 1.783 | 2.50× | 1.933 | 2.71× | ok |
| DOE/PENNANT | 1.409 | 3.801 | 2.70× | 3.854 | 2.74× | ok |
| DOE/miniFE | 0.649 | 2.196 | 3.38× | 2.285 | 3.52× | ok |
| Misc-C++-EH/spirit | 0.454 | 2.868 | 6.32× | 1.583 | 3.49× | ok |
| Misc-C++-Large/ray | 0.097 | 0.285 | 2.94× | 0.278 | 2.87× | ok |
| Misc-C++-Large/sphereflake | 0.083 | 0.203 | 2.45× | 0.243 | 2.93× | ok |
| Misc-C++/bigfib | 0.125 | 0.350 | 2.80× | 0.429 | 3.43× | ok |
| Misc-C++/oopack_v1p8 | 0.031 | 0.094 | 3.03× | 0.098 | 3.16× | ok |
| Misc-C++/stepanov_container | 0.171 | 0.578 | 3.38× | 0.532 | 3.11× | ok |
| Misc-C++/stepanov_v1p2 | 0.029 | 0.121 | 4.17× | 0.090 | 3.10× | ok |
| PAQ8p | 0.066 | 0.454 | 6.88× | 0.242 | 3.67× | ok |
| Prolangs-C++/life | 0.003 | 0.029 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.064 | 6.40× | 0.048 | 4.80× | ok |
| Prolangs-C++/primes | 0.005 | 0.022 | — | 0.027 | — | ok |
| Shootout-C++-EH/except | 0.065 | 0.146 | 2.25× | 0.198 | 3.05× | ok |
| Shootout-C++/ackermann | 0.072 | 0.161 | 2.24× | 0.242 | 3.36× | ok |
| Shootout-C++/ary3 | 0.076 | 0.183 | 2.41× | 0.221 | 2.91× | ok |
| Shootout-C++/fibo | 0.075 | 0.162 | 2.16× | 0.239 | 3.19× | ok |
| Shootout-C++/hash | 0.109 | 0.309 | 2.83× | 0.346 | 3.17× | ok |
| Shootout-C++/hash2 | 0.097 | 0.272 | 2.80× | 0.287 | 2.96× | ok |
| Shootout-C++/heapsort | 0.082 | 0.192 | 2.34× | 0.240 | 2.93× | ok |
| Shootout-C++/lists | 0.090 | 0.190 | 2.11× | 0.236 | 2.62× | ok |
| Shootout-C++/lists1 | 0.082 | 0.211 | 2.57× | 0.244 | 2.98× | ok |
| Shootout-C++/matrix | 0.064 | 0.143 | 2.23× | 0.198 | 3.09× | ok |
| Shootout-C++/methcall | 0.065 | 0.152 | 2.34× | 0.200 | 3.08× | ok |
| Shootout-C++/moments | 0.094 | 0.238 | 2.53× | 0.253 | 2.69× | ok |
| Shootout-C++/random | 0.078 | 0.172 | 2.21× | 0.233 | 2.99× | ok |
| Shootout-C++/sieve | 0.092 | 0.225 | 2.45× | 0.293 | 3.18× | ok |
| SmallPT | 0.027 | 0.085 | 3.15× | 0.086 | 3.19× | ok |
| Stanford/Bubblesort | 0.009 | 0.027 | — | 0.031 | — | ok |
| Stanford/FloatMM | 0.009 | 0.026 | — | 0.033 | — | ok |
| Stanford/Puzzle | 0.010 | 0.034 | 3.40× | 0.038 | 3.80× | ok |
| Stanford/Treesort | 0.008 | 0.029 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.068 | 0.151 | 2.22× | 0.204 | 3.00× | ok |
| bg/fannkuchredux/3 | 0.031 | 0.070 | 2.26× | 0.080 | 2.58× | ok |
| bg/fasta/1 | 0.050 | 0.118 | 2.36× | 0.138 | 2.76× | ok |
| bg/fasta/2 | 0.048 | 0.117 | 2.44× | 0.135 | 2.81× | ok |
| bg/fasta/3 | 0.080 | 0.184 | 2.30× | 0.204 | 2.55× | ok |
| bg/fasta/4 | 0.069 | 0.147 | 2.13× | 0.181 | 2.62× | ok |
| bg/fasta/6 | 0.135 | 0.449 | 3.33× | 0.386 | 2.86× | ok |
| bg/mandelbrot/0 | 0.146 | 0.472 | 3.23× | 0.429 | 2.94× | ok |
| bg/mandelbrot/2 | 0.086 | 0.203 | 2.36× | 0.275 | 3.20× | ok |
| bg/mandelbrot/3 | 0.090 | 0.204 | 2.27× | 0.273 | 3.03× | ok |
| bg/mandelbrot/5 | 0.042 | 0.103 | 2.45× | 0.118 | 2.81× | ok |
| bg/mandelbrot/7 | 0.047 | 0.126 | 2.68× | 0.122 | 2.60× | ok |
| bg/mandelbrot/9 | 0.041 | 0.116 | 2.83× | 0.112 | 2.73× | ok |
| bg/nbody/1 | 0.028 | 0.096 | 3.43× | 0.093 | 3.32× | ok |
| bg/nbody/2 | 0.025 | 0.062 | 2.48× | 0.072 | 2.88× | ok |
| bg/nbody/3 | 0.027 | 0.063 | 2.33× | 0.076 | 2.81× | ok |
| bg/nbody/6 | 0.027 | 0.108 | 4.00× | 0.095 | 3.52× | ok |
| bg/pidigits/4 | 0.117 | 0.289 | 2.47× | 0.365 | 3.12× | ok |
| bg/pidigits/5 | 0.073 | 0.166 | 2.27× | 0.217 | 2.97× | ok |
| bg/revcomp/1 | 0.079 | 0.194 | 2.46× | 0.243 | 3.08× | ok |
| bg/revcomp/5 | 0.079 | 0.200 | 2.53× | 0.210 | 2.66× | ok |
| bg/spectralnorm/1 | 0.121 | 0.262 | 2.17× | 0.355 | 2.93× | ok |
| box2d | 1.433 | 4.056 | 2.83× | 4.773 | 3.33× | ok |
| fmt | 0.510 | 2.442 | 4.79× | 2.006 | 3.93× | ok |
| hexxagon | 0.245 | 0.639 | 2.61× | 0.845 | 3.45× | ok |
| lambda | 0.050 | 0.303 | 6.06× | 0.224 | 4.48× | ok |
| minisat | 0.059 | 0.295 | 5.00× | 0.212 | 3.59× | ok |
| nlohmann-json | 0.437 | 1.929 | 4.41× | 1.703 | 3.90× | ok |
| pugixml | 0.274 | 1.234 | 4.50× | 0.981 | 3.58× | ok |
| pugixml-tests | 3.443 | 14.816 | 4.30× | 10.955 | 3.18× | ok |
| rapidjson | 0.114 | 0.412 | 3.61× | 0.384 | 3.37× | ok |
| re2 | 2.921 | 10.222 | 3.50× | 6.628 | 2.27× | ok |
| re2-test-re2 | 4.597 | 14.537 | 3.16× | 15.230 | 3.31× | ok |
| re2-test-search | 4.527 | 13.976 | 3.09× | 14.773 | 3.26× | ok |
| tramp3d-v4 | 0.739 | 8.595 | 11.63× | 2.623 | 3.55× | ok |

### O3 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.129 | 0.824 | 6.39× | 0.471 | 3.65× | ok |
| Adobe-C++/loop_unroll | 0.436 | 5.346 | 12.26× | 4.158 | 9.54× | ok |
| Adobe-C++/simple_types_constant_folding | 0.246 | 2.819 | 11.46× | 2.239 | 9.10× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.200 | 2.171 | 10.85× | 1.804 | 9.02× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 1.100 | 11.96× | 0.446 | 4.85× | ok |
| Adobe-C++/stepanov_vector | 0.116 | 1.448 | 12.48× | 0.517 | 4.46× | ok |
| Bullet | 6.041 | 35.403 | 5.86× | 27.460 | 4.55× | ok |
| CLAMR | 4.276 | 22.993 | 5.38× | 18.806 | 4.40× | ok |
| CoyoteBench/almabench | 0.031 | 0.149 | 4.81× | 0.122 | 3.94× | ok |
| CoyoteBench/fftbench | 0.126 | 0.401 | 3.18× | 0.422 | 3.35× | ok |
| CoyoteBench/huffbench | 0.038 | 0.221 | 5.82× | 0.143 | 3.76× | ok |
| CoyoteBench/lpbench | 0.036 | 0.175 | 4.86× | 0.205 | 5.69× | ok |
| DOE/HACCKernels | 0.117 | 0.357 | 3.05× | 0.378 | 3.23× | ok |
| DOE/HPCCG | 0.772 | 2.545 | 3.30× | 2.242 | 2.90× | ok |
| DOE/PENNANT | 1.790 | 5.962 | 3.33× | 5.423 | 3.03× | ok |
| DOE/miniFE | 0.905 | 3.918 | 4.33× | 3.188 | 3.52× | ok |
| Misc-C++-EH/spirit | 0.703 | 3.465 | 4.93× | 2.918 | 4.15× | ok |
| Misc-C++-Large/ray | 0.104 | 0.446 | 4.29× | 0.335 | 3.22× | ok |
| Misc-C++-Large/sphereflake | 0.102 | 0.702 | 6.88× | 0.385 | 3.77× | ok |
| Misc-C++/bigfib | 0.158 | 0.513 | 3.25× | 0.555 | 3.51× | ok |
| Misc-C++/oopack_v1p8 | 0.039 | 0.186 | 4.77× | 0.173 | 4.44× | ok |
| Misc-C++/stepanov_container | 0.233 | 0.939 | 4.03× | 0.916 | 3.93× | ok |
| Misc-C++/stepanov_v1p2 | 0.044 | 0.199 | 4.52× | 0.175 | 3.98× | ok |
| PAQ8p | 0.332 | 3.954 | 11.91× | 1.722 | 5.19× | ok |
| Prolangs-C++/life | 0.009 | 0.094 | — | 0.062 | — | ok |
| Prolangs-C++/ocean | 0.021 | 0.206 | 9.81× | 0.122 | 5.81× | ok |
| Prolangs-C++/primes | 0.007 | 0.035 | — | 0.038 | — | ok |
| Shootout-C++-EH/except | 0.067 | 0.174 | 2.60× | 0.210 | 3.13× | ok |
| Shootout-C++/ackermann | 0.078 | 0.205 | 2.63× | 0.248 | 3.18× | ok |
| Shootout-C++/ary3 | 0.078 | 0.221 | 2.83× | 0.254 | 3.26× | ok |
| Shootout-C++/fibo | 0.076 | 0.206 | 2.71× | 0.240 | 3.16× | ok |
| Shootout-C++/hash | 0.128 | 0.412 | 3.22× | 0.457 | 3.57× | ok |
| Shootout-C++/hash2 | 0.122 | 0.399 | 3.27× | 0.421 | 3.45× | ok |
| Shootout-C++/heapsort | 0.085 | 0.220 | 2.59× | 0.256 | 3.01× | ok |
| Shootout-C++/lists | 0.082 | 0.255 | 3.11× | 0.252 | 3.07× | ok |
| Shootout-C++/lists1 | 0.092 | 0.252 | 2.74× | 0.280 | 3.04× | ok |
| Shootout-C++/matrix | 0.071 | 0.206 | 2.90× | 0.273 | 3.85× | ok |
| Shootout-C++/methcall | 0.069 | 0.181 | 2.62× | 0.223 | 3.23× | ok |
| Shootout-C++/moments | 0.105 | 0.297 | 2.83× | 0.317 | 3.02× | ok |
| Shootout-C++/random | 0.096 | 0.193 | 2.01× | 0.243 | 2.53× | ok |
| Shootout-C++/sieve | 0.090 | 0.247 | 2.74× | 0.288 | 3.20× | ok |
| SmallPT | 0.041 | 0.285 | 6.95× | 0.153 | 3.73× | ok |
| Stanford/Bubblesort | 0.011 | 0.054 | 4.91× | 0.048 | 4.36× | ok |
| Stanford/FloatMM | 0.013 | 0.058 | 4.46× | 0.069 | 5.31× | ok |
| Stanford/Puzzle | 0.020 | 0.122 | 6.10× | 0.129 | 6.45× | ok |
| Stanford/Treesort | 0.014 | 0.081 | 5.79× | 0.051 | 3.64× | ok |
| bg/binarytrees/2 | 0.073 | 0.401 | 5.49× | 0.221 | 3.03× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.116 | 3.31× | 0.107 | 3.06× | ok |
| bg/fasta/1 | 0.060 | 0.153 | 2.55× | 0.177 | 2.95× | ok |
| bg/fasta/2 | 0.054 | 0.153 | 2.83× | 0.172 | 3.19× | ok |
| bg/fasta/3 | 0.097 | 0.226 | 2.33× | 0.274 | 2.82× | ok |
| bg/fasta/4 | 0.076 | 0.180 | 2.37× | 0.216 | 2.84× | ok |
| bg/fasta/6 | 0.147 | 0.443 | 3.01× | 0.533 | 3.63× | ok |
| bg/mandelbrot/0 | 0.176 | 0.633 | 3.60× | 0.671 | 3.81× | ok |
| bg/mandelbrot/2 | 0.104 | 0.271 | 2.61× | 0.312 | 3.00× | ok |
| bg/mandelbrot/3 | 0.087 | 0.237 | 2.72× | 0.272 | 3.13× | ok |
| bg/mandelbrot/5 | 0.048 | 0.141 | 2.94× | 0.157 | 3.27× | ok |
| bg/mandelbrot/7 | 0.058 | 0.192 | 3.31× | 0.155 | 2.67× | ok |
| bg/mandelbrot/9 | 0.054 | 0.180 | 3.33× | 0.159 | 2.94× | ok |
| bg/nbody/1 | 0.040 | 0.150 | 3.75× | 0.166 | 4.15× | ok |
| bg/nbody/2 | 0.030 | 0.123 | 4.10× | 0.115 | 3.83× | ok |
| bg/nbody/3 | 0.033 | 0.117 | 3.55× | 0.106 | 3.21× | ok |
| bg/nbody/6 | 0.039 | 0.159 | 4.08× | 0.160 | 4.10× | ok |
| bg/pidigits/4 | 0.122 | 0.331 | 2.71× | 0.410 | 3.36× | ok |
| bg/pidigits/5 | 0.077 | 0.199 | 2.58× | 0.237 | 3.08× | ok |
| bg/revcomp/1 | 0.091 | 0.250 | 2.75× | 0.266 | 2.92× | ok |
| bg/revcomp/5 | 0.084 | 0.221 | 2.63× | 0.303 | 3.61× | ok |
| bg/spectralnorm/1 | 0.109 | 0.323 | 2.96× | 0.419 | 3.84× | ok |
| box2d | 1.724 | 7.120 | 4.13× | 5.449 | 3.16× | ok |
| fmt | 0.955 | 5.476 | 5.73× | 3.837 | 4.02× | ok |
| hexxagon | 0.300 | 1.053 | 3.51× | 1.097 | 3.66× | ok |
| lambda | 0.121 | 1.133 | 9.36× | 0.574 | 4.74× | ok |
| minisat | 0.142 | 1.003 | 7.06× | 0.614 | 4.32× | ok |
| nlohmann-json | 0.817 | 3.498 | 4.28× | 2.716 | 3.32× | ok |
| pugixml | 0.723 | 5.218 | 7.22× | 3.727 | 5.15× | ok |
| pugixml-tests | 5.107 | 34.623 | 6.78× | 24.686 | 4.83× | ok |
| rapidjson | 0.223 | 1.148 | 5.15× | 0.732 | 3.28× | ok |
| re2 | 2.986 | 18.430 | 6.17× | 9.915 | 3.32× | ok |
| re2-test-re2 | 5.878 | 26.320 | 4.48× | 22.116 | 3.76× | ok |
| re2-test-search | 5.763 | 23.762 | 4.12× | 20.385 | 3.54× | ok |
| tramp3d-v4 | 2.643 | 23.439 | 8.87× | 14.046 | 5.31× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.060 | 0.132 | 2.20× | 0.184 | 3.07× | ok |
| Adobe-C++/loop_unroll | 0.035 | 0.096 | 2.74× | 0.101 | 2.89× | ok |
| Adobe-C++/simple_types_constant_folding | 0.037 | 0.102 | 2.76× | 0.106 | 2.86× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.094 | 2.76× | 0.118 | 3.47× | ok |
| Adobe-C++/stepanov_abstraction | 0.033 | 0.073 | 2.21× | 0.085 | 2.58× | ok |
| Adobe-C++/stepanov_vector | 0.057 | 0.122 | 2.14× | 0.185 | 3.25× | ok |
| Bullet | 4.623 | 10.120 | 2.19× | 12.318 | 2.66× | ok |
| CLAMR | 2.153 | 4.509 | 2.09× | 5.876 | 2.73× | ok |
| CoyoteBench/almabench | 0.026 | 0.055 | 2.12× | 0.073 | 2.81× | ok |
| CoyoteBench/fftbench | 0.099 | 0.223 | 2.25× | 0.285 | 2.88× | ok |
| CoyoteBench/huffbench | 0.028 | 0.054 | 1.93× | 0.071 | 2.54× | ok |
| CoyoteBench/lpbench | 0.027 | 0.056 | 2.07× | 0.074 | 2.74× | ok |
| DOE/HACCKernels | 0.099 | 0.224 | 2.26× | 0.292 | 2.95× | ok |
| DOE/HPCCG | 0.691 | 1.514 | 2.19× | 2.158 | 3.12× | ok |
| DOE/PENNANT | 1.371 | 2.855 | 2.08× | 3.431 | 2.50× | ok |
| DOE/miniFE | 0.590 | 1.230 | 2.08× | 1.885 | 3.19× | ok |
| Misc-C++-EH/spirit | 0.286 | 0.969 | 3.39× | 1.033 | 3.61× | ok |
| Misc-C++-Large/ray | 0.094 | 0.236 | 2.51× | 0.254 | 2.70× | ok |
| Misc-C++-Large/sphereflake | 0.080 | 0.177 | 2.21× | 0.229 | 2.86× | ok |
| Misc-C++/bigfib | 0.112 | 0.231 | 2.06× | 0.376 | 3.36× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.065 | 2.24× | 0.086 | 2.97× | ok |
| Misc-C++/stepanov_container | 0.154 | 0.333 | 2.16× | 0.470 | 3.05× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.062 | 2.21× | 0.075 | 2.68× | ok |
| PAQ8p | 0.044 | 0.121 | 2.75× | 0.134 | 3.05× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.021 | — | 0.032 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.064 | 0.146 | 2.28× | 0.187 | 2.92× | ok |
| Shootout-C++/ackermann | 0.072 | 0.166 | 2.31× | 0.232 | 3.22× | ok |
| Shootout-C++/ary3 | 0.073 | 0.167 | 2.29× | 0.205 | 2.81× | ok |
| Shootout-C++/fibo | 0.073 | 0.164 | 2.25× | 0.225 | 3.08× | ok |
| Shootout-C++/hash | 0.102 | 0.233 | 2.28× | 0.309 | 3.03× | ok |
| Shootout-C++/hash2 | 0.092 | 0.202 | 2.20× | 0.253 | 2.75× | ok |
| Shootout-C++/heapsort | 0.083 | 0.194 | 2.34× | 0.232 | 2.80× | ok |
| Shootout-C++/lists | 0.086 | 0.160 | 1.86× | 0.214 | 2.49× | ok |
| Shootout-C++/lists1 | 0.079 | 0.172 | 2.18× | 0.219 | 2.77× | ok |
| Shootout-C++/matrix | 0.063 | 0.142 | 2.25× | 0.190 | 3.02× | ok |
| Shootout-C++/methcall | 0.063 | 0.149 | 2.37× | 0.190 | 3.02× | ok |
| Shootout-C++/moments | 0.088 | 0.187 | 2.12× | 0.227 | 2.58× | ok |
| Shootout-C++/random | 0.078 | 0.173 | 2.22× | 0.224 | 2.87× | ok |
| Shootout-C++/sieve | 0.090 | 0.194 | 2.16× | 0.246 | 2.73× | ok |
| SmallPT | 0.025 | 0.054 | 2.16× | 0.077 | 3.08× | ok |
| Stanford/Bubblesort | 0.009 | 0.023 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.009 | 0.021 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.023 | — | 0.034 | — | ok |
| Stanford/Treesort | 0.008 | 0.025 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.070 | 0.147 | 2.10× | 0.220 | 3.14× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.059 | 1.97× | 0.075 | 2.50× | ok |
| bg/fasta/1 | 0.048 | 0.093 | 1.94× | 0.126 | 2.62× | ok |
| bg/fasta/2 | 0.047 | 0.092 | 1.96× | 0.124 | 2.64× | ok |
| bg/fasta/3 | 0.079 | 0.174 | 2.20× | 0.207 | 2.62× | ok |
| bg/fasta/4 | 0.068 | 0.141 | 2.07× | 0.173 | 2.54× | ok |
| bg/fasta/6 | 0.123 | 0.265 | 2.15× | 0.339 | 2.76× | ok |
| bg/mandelbrot/0 | 0.132 | 0.322 | 2.44× | 0.378 | 2.86× | ok |
| bg/mandelbrot/2 | 0.084 | 0.185 | 2.20× | 0.255 | 3.04× | ok |
| bg/mandelbrot/3 | 0.089 | 0.193 | 2.17× | 0.260 | 2.92× | ok |
| bg/mandelbrot/5 | 0.040 | 0.084 | 2.10× | 0.107 | 2.67× | ok |
| bg/mandelbrot/7 | 0.043 | 0.091 | 2.12× | 0.109 | 2.53× | ok |
| bg/mandelbrot/9 | 0.039 | 0.084 | 2.15× | 0.098 | 2.51× | ok |
| bg/nbody/1 | 0.027 | 0.056 | 2.07× | 0.076 | 2.81× | ok |
| bg/nbody/2 | 0.027 | 0.052 | 1.93× | 0.068 | 2.52× | ok |
| bg/nbody/3 | 0.028 | 0.051 | 1.82× | 0.071 | 2.54× | ok |
| bg/nbody/6 | 0.026 | 0.058 | 2.23× | 0.069 | 2.65× | ok |
| bg/pidigits/4 | 0.117 | 0.259 | 2.21× | 0.339 | 2.90× | ok |
| bg/pidigits/5 | 0.072 | 0.158 | 2.19× | 0.220 | 3.06× | ok |
| bg/revcomp/1 | 0.072 | 0.170 | 2.36× | 0.228 | 3.17× | ok |
| bg/revcomp/5 | 0.075 | 0.173 | 2.31× | 0.189 | 2.52× | ok |
| bg/spectralnorm/1 | 0.110 | 0.226 | 2.05× | 0.332 | 3.02× | ok |
| box2d | 1.311 | 2.738 | 2.09× | 4.257 | 3.25× | ok |
| fmt | 0.417 | 1.046 | 2.51× | 1.594 | 3.82× | ok |
| hexxagon | 0.244 | 0.589 | 2.41× | 0.793 | 3.25× | ok |
| lambda | 0.039 | 0.124 | 3.18× | 0.158 | 4.05× | ok |
| minisat | 0.051 | 0.129 | 2.53× | 0.157 | 3.08× | ok |
| nlohmann-json | 0.337 | 0.851 | 2.53× | 1.311 | 3.89× | ok |
| pugixml | 0.215 | 0.452 | 2.10× | 0.707 | 3.29× | ok |
| pugixml-tests | 2.889 | 6.994 | 2.42× | 9.191 | 3.18× | ok |
| rapidjson | 0.092 | 0.204 | 2.22× | 0.295 | 3.21× | ok |
| re2 | 2.828 | 6.457 | 2.28× | 5.673 | 2.01× | ok |
| re2-test-re2 | 4.158 | 9.632 | 2.32× | 13.086 | 3.15× | ok |
| re2-test-search | 4.120 | 9.286 | 2.25× | 12.605 | 3.06× | ok |
| tramp3d-v4 | 0.688 | 2.335 | 3.39× | 1.530 | 2.22× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
