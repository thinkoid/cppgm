# Build cppgm from source

Both source downloads build the compiler, its eight stage tools and the LowIR
library. Use GNU Make, Perl, a C++11 host compiler with its standard library,
a linker and an archiver. Linux defaults to GCC. On macOS the build prefers
Homebrew LLVM when installed.

From the extracted directory, run:

```sh
make
dev/cppgm --version
make lowir-library
```

The tools and the static and shared libraries are written to `dev/`. See
[the LowIR library guide](docs/lowir-library.md) for its C interface. To use
a specific host compiler, set both `CXX` and `CPPGM_HOST_CXX` to its path
on each make invocation.

For the assignment suites, download `cppgm-<tag>-source-with-tests.tar.gz`.
It includes the same implementation, the fixtures, expected outputs, runners
and course documentation. From that archive, `make test-pa1` runs the first
assignment. See `TESTING_AND_REFERENCES.md` there for the full test report and
target-specific tool requirements.
