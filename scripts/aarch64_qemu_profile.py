#!/usr/bin/env python3
"""Compare frozen Linux Arm64 executables under QEMU, using their original output oracles."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import platform
import re
import shlex
import shutil
import subprocess
import time

from benchmark_timing import Rebuild, observations, retain, sha, summarize
from public_benchmarks import ROOT, measure


def public_arguments(folder):
    with (folder / 'observations.jsonl').open() as stream:
        for line in stream:
            row = json.loads(line)
            if row['phase'] == 'check' and row['label'] == 'clang':
                cmd = row['command']
                for i, arg in enumerate(cmd):
                    if Path(arg).name == 'clang.elf':
                        return cmd[i + 1:]
    raise ValueError(f'missing Clang check command in {folder}')


def load_inputs(kernels, public):
    cases = {}
    sources = {}
    revisions = set()
    if kernels:
        data = json.loads((kernels / 'manifest.json').read_text())
        revisions.add(data['revision'])
        for name, expected in data['checksums'].items():
            sources[name] = data['inputs']
            cases[name] = ([(kernels / key, data['guests'][key]['sha256']) for key in ('clang', 'candidate')],
                           [name], hashlib.sha256(bytes.fromhex(expected)).hexdigest())
    if public:
        data = json.loads((public / 'results.json').read_text())
        if data['target'] != 'aarch64-linux-gnu':
            raise ValueError('expected a Linux Arm64 public benchmark bundle')
        revisions.add(data['revision'])
        for name, case in data['cases'].items():
            folder = public / name.replace('/', '-')
            sources[name] = case['source_sha256']
            cases[name] = ([(folder / (key + '.elf'), case['builds'][key]['sha256']) for key in ('clang', 'cppgm')],
                           public_arguments(folder), case['stdout_sha256'])
    if not cases or len(revisions) != 1 or None in revisions:
        raise ValueError('supply benchmark bundles from one recorded revision')
    return cases, revisions.pop(), sources


def check_file(binary):
    path, digest = binary
    if sha(path) != digest:
        raise ValueError(f'guest binary changed: {path}')


def count_instructions(args, qemu, name, path, label, argv, expected):
    log = args.output / (name.replace('/', '-') + '-' + label + '.log')
    cmd = [qemu, '-cpu', args.cpu, '-plugin', str(args.insn_plugin.resolve()) + ',inline=true']
    if args.hotblocks_plugin:
        cmd += ['-plugin', str(args.hotblocks_plugin.resolve()) + ',inline=true']
    cmd += ['-d', 'plugin', '-D', str(log), str(path.resolve()), *argv]
    result = subprocess.run(cmd, cwd=path.parent, stdin=subprocess.DEVNULL,
                            capture_output=True, timeout=300, check=True)
    if hashlib.sha256(result.stdout).hexdigest() != expected:
        raise ValueError(f'{name} {label}: unexpected output during instruction counting')
    count, = re.findall(r'^total insns: (\d+)$', log.read_text(), re.M)
    return dict(instructions=int(count), command=cmd)


def environment(args):
    qemu = shutil.which(args.qemu)
    if not qemu:
        raise ValueError(f'cannot find QEMU executable {args.qemu}')
    args.output = args.output.resolve()
    args.output.mkdir(parents=True, exist_ok=False)
    info = dict(mode='qemu-user', host=platform.uname()._asdict(), cpu=args.cpu,
                affinity=sorted(os.sched_getaffinity(0)), emulator_sha256=sha(qemu),
                emulator=subprocess.check_output([qemu, '--version'], text=True).splitlines()[0])
    return str(Path(qemu).absolute()), info


def time_guest(output, cwd, command, expected, **position):
    stdout, stderr = output / 'stdout', output / 'stderr'
    with stdout.open('wb') as stream:
        start = time.monotonic()
        row = measure(command, cwd, 300, stderr, stdout=stream)
        elapsed = time.monotonic() - start
    row.update(position, command=command, wall=elapsed, stdout_sha256=sha(stdout))
    retain(output / 'observations.jsonl', row)
    if row['timed_out'] or row['code'] or row['stdout_sha256'] != expected:
        raise RuntimeError(f'{position["case"]} {position["label"]} failed its exit or output check (see {output})')
    return row['cpu']


def profile(args):
    cases, revision, sources = load_inputs(args.kernels, args.public)
    selected = args.only or list(cases)
    unknown = set(selected) - cases.keys()
    if unknown:
        raise ValueError(f'unknown workload(s): {sorted(unknown)}')
    if args.hotblocks_plugin and not args.insn_plugin:
        raise ValueError('--hotblocks-plugin also requires --insn-plugin')
    reference = 'clang'
    reference_revision = revision
    if args.baseline_kernels or args.baseline_public:
        previous, reference_revision, previous_sources = load_inputs(args.baseline_kernels, args.baseline_public)
        reference = 'baseline'
        for name in selected:
            if (name not in previous or sources[name] != previous_sources[name] or
                    cases[name][1:] != previous[name][1:]):
                raise ValueError(f'{name}: baseline sources, arguments or expected output differ')
            (_, candidate), argv, expected = cases[name]
            _, baseline = previous[name][0]
            cases[name] = ([baseline, candidate], argv, expected)
    qemu, report = environment(args)
    report.update(revision=revision, reference=reference, reference_revision=reference_revision,
                  repeats=args.repeats, cases={})
    for name in selected:
        binaries, argv, expected = cases[name]
        for binary in binaries:
            check_file(binary)
        summary = dict(inputs={str(p.resolve()): digest for p, digest in binaries}, stdout_sha256=expected)
        if args.insn_plugin:
            for label, (path, _) in zip((reference, 'cppgm'), binaries):
                summary[label] = count_instructions(args, qemu, name, path, label, argv, expected)
            filename = 'qemu-instructions.json'
            print(f'{name}: {summary["cppgm"]["instructions"]:,} cppgm / '
                  f'{summary[reference]["instructions"]:,} {reference} guest instructions', flush=True)
        else:
            def run(label, phase, block, position):
                path = binaries[0 if label == reference else 1][0]
                cmd = [qemu, '-cpu', args.cpu, str(path.resolve()), *argv]
                times = [time_guest(args.output, path.parent, cmd, expected, case=name, label=label, phase=phase,
                                    block=block, position=position, repetition=i) for i in range(args.repeats)]
                return dict(cpu=sum(times) / len(times))

            for phase, candidate, blocks in [('AA', reference, args.aa_blocks), ('AB', 'cppgm', args.blocks)]:
                summary[phase] = summarize(observations(run, reference, candidate, blocks, phase))
            filename = 'qemu-results.json'
            print(f'{name}: {1 / summary["AB"]["ratio"]:.3f}x vs {reference} under QEMU', flush=True)
        for binary in binaries:
            check_file(binary)
        report['cases'][name] = summary
        (args.output / filename).write_text(json.dumps(report, indent=2) + '\n')


def rebuild(args):
    host = shutil.which(args.host_cxx)
    if not host:
        raise ValueError(f'cannot find cross compiler driver {args.host_cxx}')
    sources = dict(seed=args.clang_built, self=args.self_built)
    for path in sources.values():
        with path.open('rb') as stream:
            header = stream.read(20)
        if header[:6] != b'\x7fELF\x02\x01' or header[18:20] != b'\xb7\x00':
            raise ValueError(f'expected a little-endian AArch64 ELF compiler: {path}')
    qemu, report = environment(args)
    wrappers = {}
    inputs = {}
    for label, source in sources.items():
        guest = args.output / (label + '.elf')
        shutil.copyfile(source, guest)
        guest.chmod(0o555)
        wrapper = args.output / (label + '.sh')
        wrapper.write_text('#!/bin/sh\nexec ' + shlex.join([qemu, '-cpu', args.cpu, str(guest)]) + ' "$@"\n')
        wrapper.chmod(0o555)
        wrappers[label] = wrapper
        inputs[guest] = sha(guest)
    flags = '--target=aarch64-linux-gnu -fno-strict-aliasing'
    os.environ['INCEPTION_EXTRA_CC_FLAGS'] = flags
    report.update(revision=subprocess.check_output(['git', 'rev-parse', 'HEAD'], cwd=ROOT, text=True).strip(),
                  inputs={k: inputs[args.output / (k + '.elf')] for k in sources},
                  flags=flags, jobs=args.jobs, host_cxx=str(Path(host).absolute()))

    def timed(command, cwd, timeout, log, stdout):
        return measure(command, cwd, args.timeout, log, stdout=stdout)

    trial = Rebuild(ROOT, args.output, args.jobs, wrappers['seed'], wrappers['self'], timed, report['host_cxx'])

    def run(label, phase, block, position):
        start = time.monotonic()
        receipt = trial.run(label, phase, block, position)
        wall = time.monotonic() - start
        row = dict(label=label, phase=phase, block=block, position=position, cpu=receipt['cpu'], wall=wall)
        retain(args.output / 'timings.jsonl', row)
        print(f'{phase} {block + 1}.{position + 1} {label}  {wall:.2f}s wall  {row["cpu"]:.2f}s CPU', flush=True)
        return row

    for phase, candidate, blocks in [('AA', 'seed', args.aa_blocks), ('AB', 'self', args.blocks)]:
        rows = observations(run, 'seed', candidate, blocks, phase)
        cpu = summarize(rows)
        wall = summarize([dict(row, cpu=row['wall']) for row in rows])
        report[phase] = dict(cpu=cpu, wall_ratio=wall['ratio'], wall_blocks=[
            dict(reference_seconds=b['reference_cpu'], candidate_seconds=b['candidate_cpu'], ratio=b['ratio'])
            for b in wall['blocks']])
        report.update(objects=len(trial.objects), output_sha256=trial.expected)
        for binary in inputs.items():
            check_file(binary)
        (args.output / 'summary.json').write_text(json.dumps(report, indent=2) + '\n')


def positive(string):
    value = int(string)
    if value < 1:
        raise argparse.ArgumentTypeError('expected a positive integer')
    return value


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    modes = parser.add_subparsers(dest='mode', required=True)
    guests = modes.add_parser('guests', help='compare generated programs')
    compilers = modes.add_parser('rebuild', help='compare Arm compilers rebuilding PA35')
    for sub in (guests, compilers):
        sub.add_argument('--qemu', default=os.getenv('CPPGM_AARCH64_QEMU', 'qemu-aarch64'))
        sub.add_argument('--cpu', default='cortex-a53')
        sub.add_argument('--output', type=Path, required=True, help='new results directory')
        sub.add_argument('--blocks', type=positive, default=2, help='paired blocks, alternating ABBA and BAAB')
        sub.add_argument('--aa-blocks', type=positive, default=2 if sub is guests else 1)
    guests.add_argument('--kernels', type=Path, help='directory from aarch64_benchmarks.py build')
    guests.add_argument('--public', type=Path, help='Arm directory from portable_public_benchmarks.py')
    guests.add_argument('--baseline-kernels', type=Path, help='compare against cppgm from an earlier kernel bundle')
    guests.add_argument('--baseline-public', type=Path, help='compare against cppgm from an earlier public bundle')
    guests.add_argument('--only', action='append', help='exact workload name, repeatable')
    guests.add_argument('--repeats', type=positive, default=1, help='runs per block position, averaged for short workloads')
    guests.add_argument('--insn-plugin', type=Path, help='count guest instructions in an untimed replay using QEMU libinsn.so')
    guests.add_argument('--hotblocks-plugin', type=Path, help='also log hot blocks using QEMU libhotblocks.so')
    compilers.add_argument('--clang-built', type=Path, required=True, help='Clang-built Arm cppgm')
    compilers.add_argument('--self-built', type=Path, required=True, help='self-built Arm cppgm')
    compilers.add_argument('--host-cxx', required=True, help='executable cross compiler driver for the common final link')
    compilers.add_argument('--jobs', type=positive, required=True)
    compilers.add_argument('--timeout', type=positive, default=3600, help='time limit per rebuild in seconds')
    args = parser.parse_args()
    (profile if args.mode == 'guests' else rebuild)(args)


if __name__ == '__main__':
    main()
