#!/usr/bin/env python3
"""Exercise cross-target LowIR library objects with independent C callers and linkers."""

import argparse
import os
from pathlib import Path
import platform
import shlex
import struct
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[2]
DEV = ROOT / 'dev'
TESTS = ROOT / 'scripts/tests'
TARGETS = {
    'wasm32-unknown-unknown': 2,
    'wasm32-wasip1': 3,
    'wasm32-unknown-emscripten': 4,
    'aarch64-linux-gnu': 5,
    'arm64-apple-macos11': 6,
}


def run(*args):
    try:
        return subprocess.run([str(arg) for arg in args], cwd=ROOT, check=True, timeout=120,
                              capture_output=True, text=True).stdout
    except subprocess.CalledProcessError as exc:
        raise RuntimeError(f'{shlex.join(exc.cmd)}: exit {exc.returncode}\n{exc.stdout}{exc.stderr}') from exc


def tool(variable, default):
    return shlex.split(os.environ.get(variable, default))


def check_header(obj, target):
    header = obj.read_bytes()[:20]
    if target == 'aarch64-linux-gnu':
        assert header.startswith(b'\x7fELF\x02\x01'), 'expected a 64-bit little-endian ELF object'
        assert struct.unpack_from('<HH', header, 16) == (1, 183), 'expected relocatable AArch64 ELF'
    elif target == 'arm64-apple-macos11':
        magic, cpu, _, kind = struct.unpack_from('<IIII', header)
        assert (magic, cpu, kind) == (0xfeedfacf, 0x0100000c, 1), 'expected arm64 Mach-O object'
    else:
        assert header.startswith(b'\0asm\1\0\0\0'), 'expected a WebAssembly object'


def check_wasm(target, obj, harness, out):
    linked = out / 'linked.wasm'
    ld = tool('CPPGM_WASM_LD', 'wasm-ref-ld')
    if target == 'wasm32-wasip1':
        run(*ld, '--entry=_start', harness, obj, '-o', linked)
        run(*tool('CPPGM_WASMTIME', 'wasmtime'), 'run', linked)
    else:
        run(*ld, '--no-entry', '--export=verify', harness, obj, '-o', linked)
        assert run(*tool('CPPGM_WASMTIME', 'wasmtime'), 'run', '--invoke', 'verify', linked).strip() == '0'


def apple_silicon():
    return platform.system() == 'Darwin' and platform.machine().lower() in ('arm64', 'aarch64')


def check_arm(target, obj, harness, out):
    linked = out / 'linked'
    if target == 'aarch64-linux-gnu':
        run(*tool('CPPGM_AARCH64_LLD', 'ld.lld'), '-m', 'aarch64elf', '-static', '-e', '_start',
            out / 'start.o', harness, obj, '-o', linked)
        if platform.system() == 'Linux' and platform.machine().lower() in ('arm64', 'aarch64'):
            run(linked)
        else:
            run(*tool('CPPGM_AARCH64_QEMU', 'qemu-aarch64'), '-cpu', 'cortex-a53', linked)
    else:
        clang = tool('CPPGM_AARCH64_CLANG', 'clang')
        if apple_silicon():
            run(*clang, '--target=' + target, harness, obj, '-o', linked)
            run(linked)
        else:
            run(*clang, '--target=' + target, '-nostdlib', '-fuse-ld=lld', harness, obj, '-o', linked)
            magic, cpu, _, kind = struct.unpack_from('<IIII', linked.read_bytes())
            assert (magic, cpu, kind) == (0xfeedfacf, 0x0100000c, 2), 'expected an arm64 Mach-O executable'


def check_target(target, clients, out, levels):
    out.mkdir()
    harness = out / 'host.o'
    wasm = target.startswith('wasm')
    cc = tool('CPPGM_WASM_CC', 'wasm-ref-clang++') if wasm else tool('CPPGM_AARCH64_CLANG', 'clang')
    options = ('-DCPPGM_WASI_START',) if target == 'wasm32-wasip1' else ()
    run(*cc, '--target=' + target, '-x', 'c', '-ffreestanding', '-fno-stack-protector',
        '-O2', *options, '-c', TESTS / 'lowir_library_targets_host.c', '-o', harness)
    if target == 'aarch64-linux-gnu':
        run(*cc, '--target=' + target, '-c', ROOT / 'pa39/support/start.S', '-o', out / 'start.o')

    pic_forms = (0,) if wasm else (0, 1)
    for form, client in clients.items():
        for level in levels:
            for pic in pic_forms:
                name = f'{form}-O{level}-pic{pic}'
                obj = out / (name + '.o')
                lowir = obj.with_suffix('.lowir')
                run(client, TARGETS[target], level, pic, lowir, obj)
                check_header(obj, target)
                cli = out / 'cli.o'
                flags = [] if wasm else ['-fPIC' if pic else '-fno-pic']
                run(DEV / 'cppgm', '--target=' + target, f'-O{level}', *flags, '-c', lowir, '-o', cli)
                assert obj.read_bytes() == cli.read_bytes(), f'{target} {name}: typed/CLI objects differ'
                if wasm:
                    check_wasm(target, obj, harness, out)
                else:
                    check_arm(target, obj, harness, out)
    result = 'linked' if target == 'arm64-apple-macos11' and not apple_silicon() else 'linked and ran'
    print(f'{target}: static/shared API objects matched CLI bytes, {result} with a C caller')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--target', nargs='+', choices=TARGETS, default=list(TARGETS))
    parser.add_argument('--levels', nargs='+', type=int, choices=range(4), default=list(range(4)))
    args = parser.parse_args()
    cc = tool('CC', 'cc')
    cxx = tool('CPPGM_HOST_CXX', os.environ.get('CXX', 'g++'))
    stdlib = tool('CPPGM_STDLIB_FLAGS', '')
    with tempfile.TemporaryDirectory(prefix='cppgm-library-targets-') as directory:
        out = Path(directory)
        client = out / 'client.o'
        run(*cc, '-std=c11', '-Wall', '-Wextra', '-Werror', '-I', DEV / 'src',
            '-c', TESTS / 'lowir_library_targets.c', '-o', client)
        clients = {'static': out / 'static', 'shared': out / 'shared'}
        run(*cxx, *stdlib, client, DEV / 'libcppgm_lowir.a', '-pthread', '-o', clients['static'])
        run(*cxx, *stdlib, client, '-Ldev', '-lcppgm_lowir', f'-Wl,-rpath,{DEV}', '-pthread', '-o', clients['shared'])
        for target in args.target:
            check_target(target, clients, out / target, args.levels)


if __name__ == '__main__':
    main()
