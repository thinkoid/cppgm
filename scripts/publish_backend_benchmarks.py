#!/usr/bin/env python3
"""Publish the common public workload and the native Arm benchmark results."""
import argparse
import json
from pathlib import Path
import statistics

from benchmark_hosts import BACKEND_CAPTIONS
import public_benchmarks as public
from publish_benchmark_badges import badge_svg


def seed(destination):
    for target, caption in BACKEND_CAPTIONS.items():
        directory = destination / 'backend' / target
        directory.mkdir(parents=True, exist_ok=True)
        names = ['public-runtime-clang']
        if target == 'aarch64-linux-gnu':
            names += [row[2] for row in public.BUILDS] + ['vectors-gcc', 'vectors-clang']
        for name in names:
            badge = directory / (name + '.svg')
            if not badge.exists():
                badge.write_text(badge_svg(dict(label=name, left_label=caption, message='n/m', color='475569')))
        report = directory / 'report.md'
        if not report.exists():
            report.write_text(f'# {caption} backend performance\n\nAwaiting the first measured main revision.\n')


def publish(portable, target, destination, revision, run_url):
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
    args = parser.parse_args()
    publish(args.portable, args.target, args.destination, args.revision, args.run_url)
