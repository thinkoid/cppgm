#!/usr/bin/env python3
"""Dedicated runs must preserve compiler provenance and avoid launching during setup."""
import contextlib
import io
import json
from pathlib import Path
import subprocess
import sys
import tempfile
from types import SimpleNamespace
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import benchmark_hosts
import intel_library_benchmarks as library
import run_intel_benchmarks_once as launcher


class IntelBenchmarkTests(unittest.TestCase):
    def test_missing_dispatch_url_uses_exact_job_labels_and_runner_identity(self):
        label='cppgm-intel-unique'
        def api(endpoint):
            if '/workflows/' in endpoint:
                return {'workflow_runs': [{'id': 11}, {'id': 12}, {'id': 13}]}
            if '/11/' in endpoint:
                return {'jobs': [{'labels': ['self-hosted', label], 'runner_name': 'someone-else'}]}
            if '/12/' in endpoint:
                return {'jobs': [{'labels': ['self-hosted', label], 'runner_name': label}]}
            return {'jobs': [{'labels': ['self-hosted', 'different'], 'runner_name': label}]}
        with patch.object(launcher, 'github', side_effect=api):
            self.assertEqual(launcher.dispatched_run('owner/repo','suite.yml',label,'2026-11-16T00:00:00Z'), '12')

    def test_discovery_waits_for_job_visibility_and_rejects_ambiguous_matches(self):
        response=[{'workflow_runs': []}, {'workflow_runs': [{'id': 12}]},
                  {'jobs': [{'labels': ['unique'], 'runner_name': 'unique'}]}]
        with patch.object(launcher, 'github', side_effect=response), patch.object(launcher.time,'sleep') as sleep:
            self.assertEqual(launcher.dispatched_run('owner/repo','suite.yml','unique','since',attempts=2),'12')
            sleep.assert_called_once_with(5)
        response=[{'workflow_runs':[{'id':11},{'id':12}]},
                  {'jobs':[{'labels':['unique'],'runner_name':'unique'}]},
                  {'jobs':[{'labels':['unique'],'runner_name':'unique'}]}]
        with patch.object(launcher,'github',side_effect=response):
            with self.assertRaisesRegex(RuntimeError,'multiple workflow runs'):
                launcher.dispatched_run('owner/repo','suite.yml','unique','since')

    def test_discovery_never_guesses_the_latest_unrelated_run(self):
        with patch.object(launcher,'github',return_value={'workflow_runs':[]}), patch.object(launcher.time,'sleep'):
            with self.assertRaisesRegex(RuntimeError,'could not identify'):
                launcher.dispatched_run('owner/repo','suite.yml','unique','since',attempts=1)

    def test_plan_pins_all_suites_without_registering_or_dispatching(self):
        with patch.object(sys, 'argv', ['runner', '--plan', '--ref', 'feature', '--revision', 'main']), \
                patch.object(launcher, 'github', return_value={'sha': 'a' * 40}) as api, \
                patch.object(launcher.subprocess, 'run') as run, contextlib.redirect_stdout(io.StringIO()) as output:
            launcher.main()
        api.assert_called_once_with('repos/vishvananda/cppgm/commits/main')
        run.assert_not_called()
        plan = json.loads(output.getvalue())
        self.assertEqual(plan['revision'], 'a' * 40)
        self.assertEqual(plan['workflow_ref'], 'feature')
        self.assertEqual(list(plan['suites']), list(launcher.SUITES))

    def test_library_commands_measure_source_instead_of_workflow_checkout(self):
        source = Path('/measured/compiler')
        for suite in library.SCRIPTS:
            command = library.run_command(suite, source, 16)
            with self.subTest(suite=suite):
                self.assertEqual(command[command.index('--repo-root') + 1], str(source))
                self.assertEqual(command[command.index('--compiler') + 1], str(source / 'dev/cppgm'))
                self.assertEqual(command[command.index('--output') + 1], str(source / 'obj' / suite))
                self.assertEqual('--jobs' in command, suite in ('godot', 'boost', 'internal', 'wasm-selfbuild'))
                self.assertEqual(Path(command[1]).name, library.SCRIPTS[suite])

    def test_wasi_selfbuild_dispatch_selects_only_its_suite(self):
        args = SimpleNamespace(suite='wasm-selfbuild', repo='owner/repo', ref='tooling', course_quality=False)
        command = launcher.dispatch_command(args, 'a' * 40, 'unique')
        self.assertEqual(command[3], 'wasm.yml')
        self.assertIn('intel_suite=wasm-selfbuild', command)
        self.assertIn('revision=' + 'a' * 40, command)
        self.assertIn('runner_label=unique', command)
        args.suite = 'wasm'
        self.assertNotIn('intel_suite=wasm-selfbuild', launcher.dispatch_command(args, 'a' * 40, 'unique'))

    def test_wasi_selfbuild_installs_pinned_tools_and_routes_publication(self):
        with tempfile.TemporaryDirectory() as temporary:
            source = Path(temporary)
            args = SimpleNamespace(suite='wasm-selfbuild', source=source, jobs=2)
            with patch.object(library.subprocess, 'run') as run:
                library.run(args)
            calls = [call.args[0] for call in run.call_args_list]
            self.assertEqual(len(calls), 3)
            self.assertEqual(calls[0][-2:], ['--prefix', str(source / 'obj/wasm-tools')])
            self.assertEqual(calls[1][:3], ['npm', 'ci', '--ignore-scripts'])
            self.assertEqual(calls[2], library.run_command('wasm-selfbuild', source, 2))
            with patch.object(sys, 'argv', ['adapter', 'publish', '--suite', 'wasm-selfbuild',
                    '--artifact', 'artifact', '--target', 'badges', '--revision', 'a' * 40,
                    '--run-url', 'https://example.org/run']), patch.object(library.subprocess, 'run') as run:
                library.main()
            command = run.call_args.args[0]
            self.assertEqual(command[2:4], ['publish-selfbuild', 'artifact'])
            self.assertEqual(command[-2:], ['--platform', 'intel'])

    def test_source_metadata_reads_the_selected_clean_checkout(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            subprocess.run(['git', 'init', '-q', str(root)], check=True)
            (root / 'source.cpp').write_text('original\n')
            subprocess.run(['git', '-C', str(root), 'add', '.'], check=True)
            subprocess.run(['git', '-C', str(root), '-c', 'user.name=Test',
                            '-c', 'user.email=test@example.org', 'commit', '-qm', 'source'], check=True)
            expected = subprocess.check_output(['git', '-C', str(root), 'rev-parse', 'HEAD'], text=True).strip()
            self.assertEqual(benchmark_hosts.source_metadata(root), dict(revision=expected, dirty=False))
            (root / 'source.cpp').write_text('changed\n')
            self.assertEqual(benchmark_hosts.source_metadata(root), dict(revision=expected, dirty=True))

    def test_dedicated_hardware_cannot_be_inferred_from_hosted_intel(self):
        self.assertEqual(benchmark_hosts.publication_platform('Intel Xeon'), 'github-intel')
        self.assertEqual(benchmark_hosts.publication_platform('Intel Xeon', 'intel'), 'intel')
        self.assertEqual(benchmark_hosts.publication_platform('AMD EPYC'), 'epyc')
        with self.assertRaisesRegex(ValueError, 'Intel hardware'):
            benchmark_hosts.publication_platform('AMD EPYC', 'intel')
        self.assertIn('Dedicated Intel', benchmark_hosts.environment('intel'))

    def test_collection_retains_nested_observations_without_build_trees(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            source, target = root / 'run', root / 'artifact'
            keep = ['results.json', 'compile.stdout', 'compile.stderr', 'counter-probe',
                    'package/manifest.json', 'package/manifest.sha256', 'package/inputs/AB-0-0/a.log',
                    'raw/requests.stdin',
                    'runtime/observations.jsonl', 'runtime/000/stdout', 'runtime/000/stderr',
                    'cppgm/libs-json-test/invocations.jsonl', 'cppgm/libs-json-test/b2.log']
            discard = ['compiler', 'output.o', 'source/input.json', 'source/tests/result.stdout',
                       'package/inputs/dev/header.hpp', 'package/inputs/sysroot/large.json',
                       'cppgm/build/large.json', 'binary']
            for name in keep + discard:
                path = source / name
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_text(name)
            library.collect(source, target)
            self.assertEqual({str(p.relative_to(target)) for p in target.rglob('*') if p.is_file()}, set(keep))


if __name__ == '__main__':
    unittest.main()
