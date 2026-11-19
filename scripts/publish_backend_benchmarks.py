#!/usr/bin/env python3
"""Publish the common public workload and the native Arm benchmark results."""
import argparse
import json
from pathlib import Path
import statistics

import index_cpp_ci as index
from benchmark_hosts import BACKEND_CAPTIONS
import public_benchmarks as public
from publish_benchmark_badges import badge_svg


APPLICATIONS = ('public-81', 'index-cpp')
MEASUREMENTS = ('compile', 'runtime')
REFERENCES = ('gcc', 'clang')


def application_badge(suite, phase, reference):
    return f'{suite}-{phase}-{reference}'


def seed(destination):
    for target, caption in BACKEND_CAPTIONS.items():
        directory = destination / 'backend' / target
        directory.mkdir(parents=True, exist_ok=True)
        names = ['public-runtime-clang']
        if target == 'aarch64-linux-gnu':
            names += [row[2] for row in public.BUILDS] + ['vectors-gcc', 'vectors-clang']
            names += [application_badge(suite, phase, ref) for suite in APPLICATIONS
                      for phase in MEASUREMENTS for ref in REFERENCES]
        for name in names:
            badge = directory / (name + '.svg')
            if not badge.exists():
                badge.write_text(badge_svg(dict(label=name, left_label=caption, message='n/m', color='475569')))
        report = directory / 'report.md'
        if not report.exists():
            report.write_text(f'# {caption} backend performance\n\nAwaiting the first measured main revision.\n')


def application_results(artifacts, revision, run_url):
    program_run = json.loads((artifacts / 'pa39-applications-public/results.json').read_text())
    index_run = json.loads((artifacts / 'pa39-applications-index-cpp/results.json').read_text())
    program_host = program_run['environment']
    index_host = index_run['metadata']
    if any(host['dirty'] or host['revision'] != revision for host in (program_host, index_host)):
        raise ValueError('application results must describe the clean measured revision')
    if program_host['target'] != 'aarch64-linux-gnu' or index_host['machine'] != 'aarch64':
        raise ValueError('application results require native Arm measurements')
    if program_host['cppgm_sha256'] != index_host['compiler_hashes']['cppgm']:
        raise ValueError('application jobs measured different cppgm builds')

    index.validate(index_run)
    programs = program_run['programs']
    inventory = {p['name'] for p in public.load_manifest()['programs']}
    if len(programs) != len(inventory) or {p['name'] for p in programs} != inventory:
        raise ValueError('public results omit part of the pinned program inventory')
    for program in programs:
        if (program['status'] != 'ok' or program.get('clang_error')
                or not all(ref in program.get('timing', {}).get('pairs', {}) for ref in REFERENCES)):
            raise ValueError('incomplete public result: ' + program['name'])

    badges = {}
    lines = ['', '## Native Arm application suites', '',
             f'All {len(programs)} public programs agree across cppgm, GCC and Clang. '
             'The three index-cpp binaries pass all 50 checksums.',
             '', '| Suite | Measurement | vs GCC | vs Clang |',
             '| --- | --- | ---: | ---: |']
    for suite, title in zip(APPLICATIONS, ('Public programs', 'index-cpp')):
        for phase, metric in zip(MEASUREMENTS, ('compile_cpu_O3', 'run_cpu_O3')):
            cells = []
            for reference in REFERENCES:
                if suite == 'public-81':
                    ratio, count = public.mean_ratio(programs, metric, reference)
                else:
                    speed = (index_run['compilation'][reference]['cpu']['speed'] if phase == 'compile'
                             else index_run['runtime']['pairs'][reference + ':all']['geometric_speed'])
                    ratio, count = 1 / speed, len(index_run['runtime']['workloads'])
                name = application_badge(suite, phase, reference)
                badges[name] = public.speed_badge(f'{title} {phase} vs {reference}', ratio, 2, 0)
                cells.append(f'{public.speed_text(ratio)} ({count})')
            lines.append(f'| {title} | {phase} | {" | ".join(cells)} |')
    lines += ['', 'Counts show how many cases contributed to each speed ratio. The public suite '
              'omits timings below 10 ms. Public runtime uses CPU time. Index-cpp runtime uses '
              'elapsed time per workload. Both use paired observations.',
              '', f'[Per-case results, toolchain provenance and raw observations]({run_url})']
    return badges, lines


def publish(portable, target, destination, revision, run_url, applications=None):
    result = json.loads((portable / 'results.json').read_text())
    expected = {p['name']: p['portable_stdout_sha256'] for p in public.load_manifest()['programs']
                if 'portable_stdout_sha256' in p}
    cases = result['cases']
    if result['dirty'] or result['target'] != target or result['revision'] != revision or set(cases) != set(expected):
        raise ValueError('expected a clean checkout of the measured revision, target and portable workload inventory')
    ratios = []
    for name, digest in expected.items():
        case = cases[name]
        if case['stdout_sha256'] != digest or not case.get('AA') or not case.get('AB'):
            raise ValueError('missing timing or checksum for ' + name)
        ratios.append(case['AB']['ratio'])
    mean = statistics.geometric_mean(ratios) if all(r and r > 0 for r in ratios) else None
    badges = {'public-runtime-clang': public.speed_badge('Public subset vs Clang', mean, 2, 0)}
    sections = [f'# {BACKEND_CAPTIONS[target]} backend performance', '',
                f'Measured `{revision}` on {result["cpu"]}. [CI run and raw observations]({run_url})',
                '', (portable / 'report.md').read_text().strip(),
                '', 'The badge gives the geometric mean of the per-program CPU speedups.']
    if target == 'aarch64-linux-gnu':
        native = portable.parent
        builds = json.loads((native / 'self-build.json').read_text())
        kernels = json.loads((native / 'results.json').read_text())
        if builds['status'] != 'ok' or builds['metadata']['revision'] != revision or kernels['revision'] != revision:
            raise ValueError('incomplete or mismatched Arm self-build or kernel measurements')
        for key, reference, name, label, digits, _ in public.BUILDS:
            badges[name] = public.build_badge(builds, key, reference, label, digits)
        for ref in ('gcc', 'clang'):
            ratio = kernels['cases']['vectors'][ref]['ratio']
            badges['vectors-' + ref] = public.speed_badge('NEON vs ' + ref, ratio, 2, 0)
        sections += ['', (native / 'report.md').read_text().strip(), '', (native / 'self-build.md').read_text().strip()]
        if applications is not None:
            application_badges, application_report = application_results(applications, revision, run_url)
            badges.update(application_badges)
            sections += application_report
    directory = destination / 'backend' / target
    directory.mkdir(parents=True, exist_ok=True)
    (directory / 'report.md').write_text('\n'.join(sections) + '\n')
    (directory / 'metadata.json').write_text(json.dumps(dict(revision=revision, cpu=result['cpu'], run_url=run_url)) + '\n')
    for name, data in badges.items():
        data['left_label'] = BACKEND_CAPTIONS[target]
        (directory / (name + '.svg')).write_text(badge_svg(data))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('portable', type=Path)
    parser.add_argument('target', choices=BACKEND_CAPTIONS)
    parser.add_argument('destination', type=Path)
    parser.add_argument('--revision', required=True)
    parser.add_argument('--run-url', required=True)
    parser.add_argument('--applications', type=Path)
    args = parser.parse_args()
    publish(args.portable, args.target, args.destination, args.revision, args.run_url, args.applications)
