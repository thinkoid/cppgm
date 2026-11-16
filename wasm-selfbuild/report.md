# WASI compiler self-build hosts

Each host retains its last measurement. Compare the CPU model and measured commit.

| Host | CPU | Measured compiler | Report |
|---|---|---|---|
| EPYC (CI) | AMD EPYC 9V45 96-Core Processor | `41e06a23e` | [Results](epyc/report.md) |
| Intel (CI) | Intel(R) Xeon(R) 6975P-C | `c9b05c4c0` | [Results](github-intel/report.md) |
