#!/usr/bin/env python3
"""Build unmodified pinned Clang with cppgm and run the built compiler on a checked program."""
import argparse
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys
import time

import benchmark_hosts

ROOT = Path(__file__).resolve().parents[1]
COMMIT = '1ab49a973e210e97d61e5db6557180dcb92c3e98'  # llvmorg-22.1.2
VERSION = '22.1.2'
UPSTREAM = 'https://github.com/llvm/llvm-project.git'
DIRECTORIES = ('llvm', 'clang', 'cmake', 'third-party')
LEVELS = ('O0', 'O1', 'O2', 'O3')
# The Clang driver for one target. No optional host library changes the set of compiled sources.
OPTIONS = [
    'CMAKE_BUILD_TYPE=Release', 'CMAKE_CXX_STANDARD=17', 'LLVM_ENABLE_PROJECTS=clang',
    'LLVM_TARGETS_TO_BUILD=X86', 'LLVM_INCLUDE_TESTS=OFF', 'LLVM_INCLUDE_EXAMPLES=OFF',
    'LLVM_INCLUDE_BENCHMARKS=OFF', 'LLVM_BUILD_DOCS=OFF', 'LLVM_ENABLE_ASSERTIONS=OFF', 'LLVM_ENABLE_RTTI=ON',
    'LLVM_ENABLE_EH=OFF', 'LLVM_ENABLE_PIC=ON', 'LLVM_ENABLE_LTO=OFF', 'LLVM_PARALLEL_LINK_JOBS=2',
    'LLVM_ENABLE_ZLIB=OFF', 'LLVM_ENABLE_ZSTD=OFF', 'LLVM_ENABLE_LIBXML2=OFF', 'LLVM_ENABLE_LIBEDIT=OFF',
    'LLVM_ENABLE_LIBPFM=OFF', 'LLVM_ENABLE_BINDINGS=OFF', 'CMAKE_CXX_FLAGS=', 'CMAKE_C_FLAGS=',
]
PROGRAM = r'''#include <algorithm>
#include <cstdio>
#include <functional>
#include <map>
#include <memory>
#include <numeric>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

struct Shape
{
    virtual ~Shape() {}
    virtual long area() const = 0;
};

struct Square : Shape
{
    long side;
    explicit Square(long side) : side(side) {}
    long area() const override { return side * side; }
};

struct Strip : Shape
{
    long width, height;
    Strip(long width, long height) : width(width), height(height) {}
    long area() const override { return width * height; }
};

template <class T> T fold(const std::vector<T>& values)
{
    return std::accumulate(values.begin(), values.end(), T());
}

static unsigned long collatz(unsigned long n)
{
    unsigned long steps = 0;
    for (; n != 1; ++steps)
        n = n % 2 ? 3 * n + 1 : n / 2;
    return steps;
}

int main()
{
    std::vector<std::unique_ptr<Shape>> shapes;
    for (long i = 1; i <= 20; ++i)
    {
        if (i % 3)
            shapes.emplace_back(new Square(i));
        else
            shapes.emplace_back(new Strip(i, i + 2));
    }
    long area = 0;
    for (const auto& shape : shapes)
        area += shape->area();
    std::map<std::string, int> counts;
    std::istringstream words("the quick brown fox jumps over the lazy dog the end");
    for (std::string word; words >> word;)
        ++counts[word];
    std::string joined;
    for (const auto& entry : counts)
        joined += entry.first + '=' + std::to_string(entry.second) + ' ';
    std::vector<unsigned long> steps;
    for (unsigned long n = 1; n <= 1000; ++n)
        steps.push_back(collatz(n));
    std::sort(steps.begin(), steps.end(), std::greater<unsigned long>());
    const double mean = double(fold(steps)) / steps.size();
    int caught = 0;
    try
    {
        std::vector<int> three(3);
        three.at(7) = 1;
    }
    catch (const std::out_of_range&)
    {
        caught = 1;
    }
    std::printf("area=%ld words=%slongest=%lu mean=%.3f caught=%d\n", area, joined.c_str(), steps[0], mean, caught);
    return 0;
}
'''


def save(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n')


def expected():
    """What PROGRAM prints, computed without a compiler."""
    area = sum(i * i if i % 3 else i * (i + 2) for i in range(1, 21))
    counts = {}
    for word in 'the quick brown fox jumps over the lazy dog the end'.split():
        counts[word] = counts.get(word, 0) + 1
    joined = ''.join(f'{word}={count} ' for word, count in sorted(counts.items()))

    def collatz(n):
        steps = 0
        while n != 1:
            n, steps = (3 * n + 1 if n % 2 else n // 2), steps + 1
        return steps

    steps = [collatz(n) for n in range(1, 1001)]
    return f'area={area} words={joined}longest={max(steps)} mean={sum(steps) / len(steps):.3f} caught=1\n'


def source_check(source):
    revision = subprocess.check_output(['git', '-C', source, 'rev-parse', 'HEAD'], text=True).strip()
    dirty = subprocess.check_output(['git', '-C', source, 'status', '--porcelain'], text=True)
    if revision != COMMIT or dirty:
        raise ValueError('LLVM must be the clean pinned upstream checkout')


def fetch(source):
    """The pinned commit's directories that the Clang build reads, without the other projects."""
    source.mkdir(parents=True)
    for args in [('init', '-q'), ('remote', 'add', 'origin', UPSTREAM),
                 ('sparse-checkout', 'set', '--cone', *DIRECTORIES),
                 ('fetch', '-q', '--depth', '1', '--filter=blob:none', 'origin', COMMIT),
                 ('checkout', '-q', '--detach', 'FETCH_HEAD')]:
        subprocess.run(['git', '-C', source, *args], check=True)


def tool(spelling):
    path = shutil.which(spelling)
    if not path:
        raise ValueError('missing tool: ' + spelling)
    return os.path.abspath(path)


def implicit_includes(verbose):
    """The system include directories in the output of a GCC-compatible `-E -v`."""
    listed = re.search(r'#include <\.\.\.> search starts here:\n(.*?)End of search list\.', verbose, re.S)
    if not listed:
        raise ValueError('the host compiler did not list its include directories')
    return [os.path.normpath(line.strip()) for line in listed.group(1).splitlines() if line.strip()]


def rules(host, includes):
    """CMake rules for cppgm: it compiles each C++ source; the host compiler links.

    The link command has no compile flags: the configuration tests them with cppgm, which accepts
    warning options that the host compiler does not have.
    """
    return '\n'.join([
        f'set(CMAKE_CXX_LINK_EXECUTABLE "{host} <LINK_FLAGS> <OBJECTS> -o <TARGET> <LINK_LIBRARIES>")',
        # cppgm does not print GCC's verbose compilation; state the directories that it searches.
        'set(CMAKE_CXX_VERBOSE_FLAG "")',
        f'set(_CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES_INIT "{";".join(includes)}")',
        'set(CMAKE_CXX_COMPILE_OBJECT "<CMAKE_CXX_COMPILER> <DEFINES> <INCLUDES> <FLAGS> -o <OBJECT> -c <SOURCE>")',
    ]) + '\n'


def configure_command(source, build, compiler, cc, rules_path, level):
    if level not in LEVELS:
        raise ValueError('unknown optimization level: ' + level)
    flags = f'-{level} -DNDEBUG'
    return ['cmake', '-G', 'Ninja', '-S', str(source / 'llvm'), '-B', str(build),
            *('-D' + option for option in OPTIONS),
            '-DCMAKE_C_COMPILER=' + str(cc), '-DCMAKE_ASM_COMPILER=' + str(cc),
            '-DCMAKE_CXX_COMPILER=' + str(compiler), '-DCMAKE_USER_MAKE_RULES_OVERRIDE_CXX=' + str(rules_path),
            '-DCMAKE_CXX_FLAGS_RELEASE=' + flags, '-DCMAKE_C_FLAGS_RELEASE=' + flags,
            '-DCMAKE_ASM_FLAGS_RELEASE=' + flags]


def failures(log, limit=5, lines=30):
    """The first failed build steps of a Ninja log, each with the start of its output."""
    blocks = re.split(r'^(?=FAILED: )', log, flags=re.M)[1:]
    shown = []
    for block in blocks[:limit]:
        body = re.split(r'^\[\d+/\d+\] ', block, maxsplit=1, flags=re.M)[0].rstrip().splitlines()
        # The second line is the command; a C++ command is long and names the source last.
        shown.append('\n'.join(line[:400] for line in body[:lines]))
    return len(blocks), shown


def timed(command, log, timeout, cwd=None):
    """Run a command with its output in a log; return status, wall seconds and CPU seconds."""
    before, started = os.times(), time.monotonic()
    with open(log, 'w') as output:
        try:
            status = subprocess.run(command, stdout=output, stderr=subprocess.STDOUT, cwd=cwd,
                                    env=dict(os.environ, LC_ALL='C'), timeout=timeout).returncode
        except subprocess.TimeoutExpired:
            status = 'timeout'
    after = os.times()
    cpu = after.children_user + after.children_system - before.children_user - before.children_system
    return status, time.monotonic() - started, cpu


def library_flags(host):
    """Make the built Clang use the host compiler's C++ library, where several GCC versions are installed."""
    libgcc = subprocess.check_output([host, '-print-libgcc-file-name'], text=True).strip()
    return ['--gcc-install-dir=' + os.path.dirname(libgcc)] if '/gcc/' in libgcc else []


def check_program(clang, directory, flags=(), levels=('O0', 'O2')):
    """Compile and run PROGRAM with the built Clang; its output must be the expected text."""
    source = directory / 'program.cpp'
    source.write_text(PROGRAM)
    for level in levels:
        executable = directory / ('program-' + level)
        subprocess.run([str(clang), '-std=c++17', '-' + level, *flags, str(source), '-o', str(executable)],
                       check=True, timeout=300)
        output = subprocess.run([str(executable)], check=True, capture_output=True, text=True, timeout=60).stdout
        if output != expected():
            raise ValueError(f'the program built at -{level} printed {output!r}, not {expected()!r}')
    return list(levels)


def report(document):
    lines = ['# Clang built by cppgm', '']
    if document['status'] != 'complete':
        lines += [f"Status: **{document['status']}**. {document.get('error', '')}", '']
        for block in document.get('failures', []):
            lines += ['```', block, '```', '']
        if document.get('failed_steps'):
            lines += [f"{document['failed_steps']} build steps failed; `build.log` in the artifact has every one.", '']
        return '\n'.join(lines)
    build = document['build']
    lines += [f"LLVM {VERSION} (`{COMMIT[:12]}`), target `clang`, `-{document['level']}`.", '',
              '| Step | Result |', '|---|---|',
              f"| C++ sources compiled by cppgm | {document['units']} |",
              f"| Build wall time | {build['wall']:.0f} s |",
              f"| Build CPU time | {build['cpu']:.0f} s |",
              f"| Built compiler | `{document['version']}` |",
              f"| Checked program compiled by the built Clang | passes at "
              f"{', '.join('`-' + level + '`' for level in document['program_levels'])} |", '']
    return '\n'.join(lines)


def run(args):
    directory = args.output.resolve()
    directory.mkdir(parents=True, exist_ok=False)
    source = args.source.resolve() if args.source else directory / 'source'
    document = dict(status='running', source_commit=COMMIT, level=args.level)
    try:
        if args.source is None:
            fetch(source)
        source_check(source)
        compiler, host, cc = args.compiler.resolve(strict=True), tool(args.host_cxx), tool(args.cc)
        document.update(benchmark_hosts.source_metadata(args.repo_root),
                        toolchains={name: subprocess.check_output([str(path), '--version'], text=True).splitlines()[0]
                                    for name, path in [('cppgm', compiler), ('host C++', host), ('C', cc)]})
        build = directory / 'build'
        build.mkdir()
        verbose = subprocess.run([host, '-E', '-x', 'c++', '-v', os.devnull], check=True, capture_output=True,
                                 text=True, env=dict(os.environ, LC_ALL='C')).stderr
        (build / 'cppgm-rules.cmake').write_text(rules(host, implicit_includes(verbose)))
        command = configure_command(source, build, compiler, cc, build / 'cppgm-rules.cmake', args.level)
        status, _, _ = timed(command, directory / 'configure.log', args.build_timeout)
        if status != 0:
            print((directory / 'configure.log').read_text(errors='replace')[-8000:], file=sys.stderr)
            raise ValueError('CMake configuration failed')
        status, wall, cpu = timed(['ninja', '-C', str(build), '-j', str(args.jobs), '-k', '0', 'clang'],
                                  directory / 'build.log', args.build_timeout)
        if status != 0:
            count, shown = failures((directory / 'build.log').read_text(errors='replace'))
            document.update(failed_steps=count, failures=shown)
            print('\n\n'.join(shown), file=sys.stderr)
            raise ValueError(f'the Clang build failed: {status}')
        log = (directory / 'build.log').read_text(errors='replace')
        built = set(re.findall(r'^\[\d+/\d+\] Building CXX object (\S+)', log, flags=re.M))
        if not built:
            raise ValueError('the build compiled no C++ source')
        # Not resolved: the driver links the C++ library only under the name clang++.
        clang = build / 'bin/clang++'
        version = subprocess.check_output([str(clang), '--version'], text=True).splitlines()[0]
        if 'clang version ' + VERSION not in version:
            raise ValueError('unexpected built compiler: ' + version)
        source_check(source)
        document.update(status='complete', units=len(built), build=dict(wall=wall, cpu=cpu, command=command),
                        version=version, program_levels=check_program(clang, directory, library_flags(host)))
    except BaseException as error:
        document.update(status='failed', error=repr(error))
        raise
    finally:
        save(directory / 'results.json', document)
        (directory / 'summary.md').write_text(report(document))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    commands = parser.add_subparsers(dest='command', required=True)
    runner = commands.add_parser('run')
    runner.add_argument('--compiler', type=Path, default=ROOT / 'dev/cppgm')
    runner.add_argument('--repo-root', type=Path, default=ROOT, help='source checkout that built the compiler')
    runner.add_argument('--source', type=Path, help='existing clean checkout of the pinned LLVM commit')
    runner.add_argument('--output', type=Path, required=True)
    runner.add_argument('--level', choices=LEVELS, default='O3')
    runner.add_argument('--host-cxx', default='g++', help='links the objects; its include directories are used')
    runner.add_argument('--cc', default='cc', help='compiles the C and assembly sources')
    runner.add_argument('--jobs', type=int, default=len(os.sched_getaffinity(0)))
    runner.add_argument('--build-timeout', type=int, default=7200)
    args = parser.parse_args()
    if min(args.jobs, args.build_timeout) < 1:
        parser.error('positive budgets are required')
    run(args)


if __name__ == '__main__':
    main()
