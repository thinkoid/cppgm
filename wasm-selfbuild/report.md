# WASI compiler self-build hosts

Each host retains its last measurement. Compare the CPU model and measured commit.

| Host | CPU | Measured compiler | Report |
|---|---|---|---|
| EPYC (CI) | AMD EPYC 9V74 80-Core Processor | `f77a0af0a` | [Results](epyc/report.md) |
| Intel (CI) | Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz | `32b57ecb1` | [Results](github-intel/report.md) |
