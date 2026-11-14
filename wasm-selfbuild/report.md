# WASI compiler self-build hosts

Each host retains its last measurement. Compare the CPU model and measured commit.

| Host | CPU | Measured compiler | Report |
|---|---|---|---|
| EPYC (CI) | AMD EPYC 7763 64-Core Processor | `13d6afdf5` | [Results](epyc/report.md) |
| Intel (CI) | Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz | `32b57ecb1` | [Results](github-intel/report.md) |
