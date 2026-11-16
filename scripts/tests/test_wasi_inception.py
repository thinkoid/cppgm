"""Optional inception orchestration: fixed points, failure retention and isolation."""
import importlib.util
import json
from pathlib import Path
import tempfile
import subprocess
import sys
from types import SimpleNamespace
import unittest
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[2]


def module(name):
    spec = importlib.util.spec_from_file_location(name, ROOT / 'scripts/experimental' / (name + '.py'))
    result = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(result)
    return result


lane = module('run_inception')
frozen = module('wasi_inception')


class WasiInception(unittest.TestCase):
    def test_freeze_uses_selected_checkout_for_sources_lists_and_revision(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            source, sdk, shim = root / 'source', root / 'sdk', root / 'shim'
            files = {
                'source/dev/frontend_source_sets.mk': 'FRONTEND_OBJ_BASENAMES_cppgm = selected\n',
                'source/dev/src/selected.cpp': 'selected source',
                'source/dev/cppgm.cpp': 'selected entry point',
                'source/LICENSE': 'license', 'source/NOTICE': 'notice',
                'source/scripts/experimental/wasi_host.h': 'selected host',
                'source/scripts/experimental/wasi_stack.S': 'selected stack',
                'source/obj/generated/cppgm_builtin_host_config.h': 'kStandardIncludePaths[] = {nullptr};',
                'source/.gitignore': 'obj/\n', 'compiler': 'binary',
                'shim/dist/index.js': 'shim',
                'shim/package.json': '{"name":"@bjorn3/browser_wasi_shim","version":"0.4.2"}',
                'sdk/VERSION': 'pinned SDK',
                'sdk/lib/clang/23/lib/wasm32-unknown-wasip1/libclang_rt.builtins.a': 'archive',
            }
            for name in ('crt1-command.o', 'libc.a', 'libc-printscan-long-double.a',
                         'eh/libc++.a', 'eh/libc++abi.a', 'eh/libunwind.a'):
                files['sdk/share/wasi-sysroot/lib/wasm32-wasip1/' + name] = 'archive'
            for name, contents in files.items():
                path = root / name
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_text(contents)
            subprocess.run(['git', 'init', '-q', str(source)], check=True)
            subprocess.run(['git', '-C', str(source), 'add', '.'], check=True)
            subprocess.run(['git', '-C', str(source), '-c', 'user.name=Test', '-c', 'user.email=test@example.org',
                            'commit', '-qm', 'selected sources'], check=True)
            expected = subprocess.check_output(['git', '-C', str(source), 'rev-parse', 'HEAD'], text=True).strip()
            package = root / 'package'
            frozen.prepare(SimpleNamespace(directory=package, repo_root=source, sdk=sdk,
                compiler=root / 'compiler', shim=shim, x86_headers=False, optimization=3))
            manifest = json.loads((package / 'manifest.json').read_text())
            self.assertEqual(manifest['revision'], expected)
            self.assertFalse(manifest['dirty'])
            self.assertEqual(manifest['x86_sources'][:-1], ['dev/src/selected.cpp', 'dev/cppgm.cpp'])
            self.assertEqual((package / 'inputs/dev/src/selected.cpp').read_text(), 'selected source')
            self.assertEqual((package / 'inputs/wasi_host.h').read_text(), 'selected host')
            frozen.verify(package, manifest)

    def test_lane_requires_all_fixed_points_and_x86_levels(self):
        args = lane.arguments([])
        phases = lane.plan(args, Path('/new-package'))
        self.assertEqual([name for name, _ in phases], ['prepare', 'wasi', 'x86', 'embedding', 'chromium'])
        self.assertIn('--x86-headers', phases[0][1])
        self.assertNotIn('--stages', phases[1][1])  # default builds W1, W2 and W3
        self.assertEqual(phases[2][1][-4:], ['--levels', '0', '2', '3'])
        self.assertIn('test_embedding.py', phases[3][1][1])
        self.assertEqual(phases[4][1][-1], 'chromium')
        args.chromium = Path('/custom/chromium')
        self.assertEqual(lane.plan(args, Path('/new-package'))[4][1][4], '/custom/chromium')

    def test_benchmark_package_import_preserves_existing_directory(self):
        # The benchmark imports experimental.wasi_inception instead of running
        # its script. Both entry points must retain the existing-directory guard.
        with patch('sys.path', [str(ROOT / 'scripts'), *sys.path]):
            packaged = importlib.import_module('experimental.wasi_inception')
            with tempfile.TemporaryDirectory() as directory:
                with self.assertRaises(FileExistsError):
                    packaged.prepare(SimpleNamespace(directory=Path(directory)))

    def test_failure_stops_later_phases_and_retains_observations(self):
        with tempfile.TemporaryDirectory() as directory:
            package = Path(directory) / 'frozen'
            args = lane.arguments(['--directory', str(package)])
            with patch.object(lane, 'preflight'), patch.object(lane, 'invoke', side_effect=[0, 7]) as run:
                with self.assertRaisesRegex(RuntimeError, 'wasi failed'):
                    lane.run(args)
            self.assertEqual(run.call_count, 2)
            rows = json.loads(package.with_name('frozen-logs').joinpath('results.json').read_text())
            self.assertEqual([row['exit'] for row in rows], [0, 7])
            self.assertTrue(all(row['seconds'] >= 0 for row in rows))
            with patch.object(lane, 'preflight'), patch.object(lane, 'invoke') as run:
                with self.assertRaisesRegex(RuntimeError, 'new package directory'):
                    lane.run(args)
                run.assert_not_called()

    def test_existing_package_cannot_be_overwritten(self):
        with tempfile.TemporaryDirectory() as directory:
            args = lane.arguments(['--directory', directory])
            with patch.object(lane, 'preflight'), patch.object(lane, 'invoke') as run:
                with self.assertRaisesRegex(RuntimeError, 'new package directory'):
                    lane.run(args)
                run.assert_not_called()

    def test_frozen_inputs_and_runner_mutations_are_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            paths = ['inputs/source.cpp', 'native-compiler', 'bundle.bin', 'shim/index.js', 'wasi_worker.mjs']
            for name in paths:
                path = root / name
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_bytes(name.encode())
            expected = lambda name: frozen.digest((root / name).read_bytes())
            manifest = {'files': [{'path': 'source.cpp', 'sha256': expected(paths[0])}],
                        'native_sha256': expected(paths[1]), 'bundle_sha256': expected(paths[2]),
                        'shim_files': {paths[3]: expected(paths[3])},
                        'runner_files': {paths[4]: expected(paths[4])}}
            frozen.save(root / 'manifest.json', manifest)
            (root / 'manifest.sha256').write_text(expected('manifest.json'))
            frozen.verify(root, manifest)
            for name in paths + ['manifest.json']:
                path = root / name
                original = path.read_bytes()
                path.write_bytes(original + b'changed')
                with self.subTest(name=name), self.assertRaisesRegex(RuntimeError, 'changed'):
                    frozen.verify(root, manifest)
                path.write_bytes(original)

    def test_byte_comparison_rejects_prefix_and_content_changes(self):
        with tempfile.TemporaryDirectory() as directory:
            a, b = [Path(directory) / name for name in ('expected', 'actual')]
            a.write_bytes(b'abc')
            for value in (b'ab', b'abcd', b'axc'):
                b.write_bytes(value)
                with self.subTest(value=value), self.assertRaisesRegex(RuntimeError, 'byte mismatch'):
                    frozen.compare(a, b)
            b.write_bytes(b'abc')
            self.assertEqual(frozen.compare(a, b)['bytes'], 3)


if __name__ == '__main__':
    unittest.main()
