#!/usr/bin/env python3
"""Measure the same checksummed public programs on native Linux or WASIp1."""
import argparse
import json
from pathlib import Path
import platform
import subprocess

import benchmark_timing as timing
import public_benchmarks as public


def c_headers(clang, target_flags):
    # The Stanford sources are built as C++ and include only target C headers.
    probe = subprocess.run([clang, *target_flags, '-E', '-v', '-x', 'c', '-'], input='',
                           text=True, capture_output=True, check=True)
    listing = probe.stderr.split('#include <...> search starts here:\n', 1)[1].split('End of search list.', 1)[0]
    paths = [line.strip() for line in listing.splitlines() if line.strip()]
    if not paths or not all(Path(p).is_dir() for p in paths):
        raise ValueError('unable to resolve target C headers from Clang')
    return ['-nostdinc', *(arg for path in paths for arg in ('-isystem', path))]


def measure_program(program, src, args, flags, target_flags, directory):
    directory.mkdir()
    module = args.target == 'wasm32-wasip1'
    commands = {}
    builds = {}
    expected = program['portable_stdout_sha256']
    for label, compiler in [('clang', args.clang), ('cppgm', str(args.cppgm.resolve()))]:
        obj = directory / f'{label}.o'
        exe = directory / (label + ('.wasm' if module else '.elf'))
        compile_cmd = [compiler, *target_flags, *flags, *program.get('flags', []), '-c', str(src), '-o', str(obj)]
        link = [args.clang, *target_flags]
        if not module:
            link.append('-no-pie')
        if args.target == 'aarch64-linux-gnu':
            link.append('-fuse-ld=lld')
        if args.linker:
            link = [args.linker]
        link_cmd = [*link, str(obj), '-o', str(exe)]
        for cmd in (compile_cmd, link_cmd):
            subprocess.run(cmd, check=True, cwd=src.parent)
        builds[label] = dict(compile=compile_cmd, link=link_cmd, sha256=timing.sha(exe))
        if module:
            cached = directory / (label + '.cwasm')
            # The upstream prime sieve nests a virtual call for each prime.
            stack = ['-W', 'max-wasm-stack=8388608']
            subprocess.run([args.wasmtime, 'compile', *stack, '-o', str(cached), str(exe)], check=True)
            commands[label] = [args.wasmtime, 'run', *stack, '--allow-precompiled', str(cached)]
        else:
            commands[label] = [*([args.runner] if args.runner else []), str(exe)]

    def run(label, phase, block, position):
        output = directory / 'stdout'
        cmd = [*commands[label], *program.get('args', [])]
        with output.open('wb') as stream:
            result = public.measure(cmd, directory, 120, directory / 'stderr', stdout=stream)
        row = dict(result, label=label, phase=phase, block=block, position=position,
                   command=cmd, stdout_sha256=timing.sha(output))
        timing.retain(directory / 'observations.jsonl', row)
        if result['timed_out'] or result['code'] or row['stdout_sha256'] != expected:
            raise ValueError(f'{program["name"]} {label} failed its exit or stdout check')
        return row

    for label in commands:
        run(label, 'check', -1, 0)
    result = dict(source_sha256=timing.sha(src), stdout_sha256=expected, builds=builds)
    if not args.check_only:
        for phase, candidate in [('AA', 'clang'), ('AB', 'cppgm')]:
            result[phase] = timing.summarize(timing.observations(run, 'clang', candidate, args.blocks, phase))
    return result


def main(args):
    native = {'aarch64-linux-gnu': 'aarch64', 'x86_64-linux-gnu': 'x86_64'}
    if args.blocks < 1:
        raise ValueError('at least one timing block is required')
    if args.target in native and not args.check_only:
        if platform.system() != 'Linux' or platform.machine() != native[args.target] or args.runner:
            raise ValueError('native timings require the target Linux machine; use --check-only for emulation')
    manifest = public.load_manifest(public.MANIFEST)
    cohort = [p for p in manifest['programs'] if 'portable_stdout_sha256' in p]
    if not cohort:
        raise ValueError('empty portable public benchmark cohort')
    cache = args.cache.resolve()
    cache.mkdir(parents=True, exist_ok=True)
    for source in sorted({p['source'] for p in cohort}):
        public.fetch_source(source, manifest['sources'][source], public.MANIFEST.parent, cache)
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=False)
    target_flags = ['--target=' + args.target]
    if args.sysroot:
        target_flags.append('--sysroot=' + str(args.sysroot.resolve()))
    flags = [*c_headers(args.clang, target_flags), '-x', 'c++', manifest['default_std'], '-w',
             '-O3', '-ffp-contract=off']
    report = dict(target=args.target, host=platform.uname()._asdict(), cases={},
                  cpu=public.cpu_model() or platform.machine(),
                  revision=public.tool_version(['git', '-C', str(public.ROOT), 'rev-parse', 'HEAD']),
                  dirty=bool(subprocess.check_output(['git', '-C', str(public.ROOT), 'status',
                                                      '--porcelain', '--untracked-files=no'])),
                  compiler_sha256=timing.sha(args.cppgm), clang=public.tool_version([args.clang, '--version']),
                  source_commits={p['source']: manifest['sources'][p['source']]['commit'] for p in cohort})
    if args.target == 'wasm32-wasip1':
        report['wasmtime'] = public.tool_version([args.wasmtime, '--version'])
    lines = [f'### Portable public benchmarks on {args.target}', '',
             '| Program | Runtime speedup vs Clang O3 |', '| --- | ---: |']
    for p in cohort:
        name = p['name']
        source, = p['srcs']
        result = measure_program(p, cache / p['source'] / p['dir'] / source, args, flags,
                                 target_flags, output / name.replace('/', '-'))
        report['cases'][name] = result
        ratio = result.get('AB', {}).get('ratio')
        speedup = f'{1 / ratio:.2f}×' if ratio else 'n/m'
        lines.append(f'| {name} | {speedup} |')
        (output / 'results.json').write_text(json.dumps(report, indent=2) + '\n')
    summary = '\n'.join(lines) + '\n'
    (output / 'report.md').write_text(summary)
    print(summary)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--target', choices=['x86_64-linux-gnu', 'aarch64-linux-gnu', 'wasm32-wasip1'], required=True)
    parser.add_argument('--cache', type=Path, default=Path('obj/public-benchmarks/src'))
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--cppgm', type=Path, default=public.ROOT / 'dev/cppgm')
    parser.add_argument('--clang', default='clang++')
    parser.add_argument('--sysroot', type=Path)
    parser.add_argument('--linker', help='optional target compiler driver for linking both producers')
    parser.add_argument('--wasmtime', default='wasmtime')
    parser.add_argument('--check-only', action='store_true')
    parser.add_argument('--runner', help='native guest emulator for --check-only')
    parser.add_argument('--blocks', type=int, default=2)
    args = parser.parse_args()
    # Commands may run in the upstream source or output directory.
    for option in ('clang', 'linker', 'wasmtime', 'runner'):
        value = getattr(args, option)
        if value and '/' in value:
            # clang++ selects its C++ link libraries from the invoked name.
            setattr(args, option, str(Path(value).absolute()))
    main(args)
