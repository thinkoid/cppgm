#!/usr/bin/env python3
"""The Clang build check compiles C++ with cppgm and reports each failed step."""
import os
from pathlib import Path
import re
import shlex
import shutil
import subprocess
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import llvm_ci as ci

VERBOSE = '''Using built-in specs.
ignoring nonexistent directory "/usr/include/x86_64-linux-gnu/c++/15/x"
#include "..." search starts here:
#include <...> search starts here:
 /usr/include/c++/15
 /usr/lib/gcc/x86_64-linux-gnu/15/../../../../include/x86_64-linux-gnu/c++/15
 /usr/include
End of search list.
'''
LOG = '''[1/4] Building CXX object lib/Support/CMakeFiles/LLVMSupport.dir/APInt.cpp.o
[2/4] Building CXX object lib/Support/CMakeFiles/LLVMSupport.dir/Path.cpp.o
FAILED: lib/Support/CMakeFiles/LLVMSupport.dir/Path.cpp.o
/work/cppgm -DNDEBUG -Ilib/Support -O3 -o lib/Support/CMakeFiles/LLVMSupport.dir/Path.cpp.o -c Path.cpp
ERROR: Path.cpp:12:3: syntax error
[3/4] Building CXX object lib/Support/CMakeFiles/LLVMSupport.dir/Regex.cpp.o
FAILED: lib/Support/CMakeFiles/LLVMSupport.dir/Regex.cpp.o
/work/cppgm -DNDEBUG -Ilib/Support -O3 -o lib/Support/CMakeFiles/LLVMSupport.dir/Regex.cpp.o -c Regex.cpp
ERROR: Regex.cpp:40:9: unknown type
ninja: build stopped: cannot make progress due to previous errors.
'''


class LLVMCITests(unittest.TestCase):
    def test_expected_text_is_what_the_program_prints(self):
        self.assertEqual(ci.expected(), 'area=2996 words=brown=1 dog=1 end=1 fox=1 jumps=1 lazy=1 over=1 quick=1 '
                         'the=3 longest=178 mean=59.542 caught=1\n')
        host = shlex.split(os.environ.get('CPPGM_HOST_CXX', 'c++'))
        compiler = shutil.which(host[0])
        if compiler is None:
            self.skipTest('no host C++ compiler')
        flags = host[1:] + shlex.split(os.environ.get('CPPGM_STDLIB_FLAGS', ''))
        with tempfile.TemporaryDirectory() as tmp:
            self.assertEqual(ci.check_program(compiler, Path(tmp), flags), ['O0', 'O2'])
            (Path(tmp) / 'wrong').write_text('#!/bin/sh\nfor last; do :; done\nprintf "#!/bin/sh\\necho no\\n" > "$last"\n'
                                             'chmod +x "$last"\n')
            (Path(tmp) / 'wrong').chmod(0o755)
            with self.assertRaisesRegex(ValueError, "printed 'no"):
                ci.check_program(Path(tmp) / 'wrong', Path(tmp))

    def test_include_directories_come_from_the_host_compiler(self):
        self.assertEqual(ci.implicit_includes(VERBOSE), ['/usr/include/c++/15', '/usr/include/x86_64-linux-gnu/c++/15',
                                                         '/usr/include'])
        with self.assertRaisesRegex(ValueError, 'include directories'):
            ci.implicit_includes('no list')

    def test_cppgm_compiles_and_the_host_compiler_links(self):
        text = ci.rules('/usr/bin/g++', ['/usr/include/c++/15', '/usr/include'])
        self.assertIn('set(CMAKE_CXX_LINK_EXECUTABLE "/usr/bin/g++ <LINK_FLAGS> <OBJECTS> -o <TARGET> '
                      '<LINK_LIBRARIES>")', text)
        self.assertIn('set(CMAKE_CXX_COMPILE_OBJECT "<CMAKE_CXX_COMPILER> <DEFINES> <INCLUDES> <FLAGS> -o <OBJECT> '
                      '-c <SOURCE>")', text)
        self.assertIn('"/usr/include/c++/15;/usr/include"', text)
        command = ci.configure_command(Path('/src'), Path('/build'), Path('/work/cppgm'), '/usr/bin/cc',
                                       Path('/build/cppgm-rules.cmake'), 'O3')
        self.assertEqual(command[:7], ['cmake', '-G', 'Ninja', '-S', '/src/llvm', '-B', '/build'])
        for option in ('-DCMAKE_CXX_COMPILER=/work/cppgm', '-DCMAKE_C_COMPILER=/usr/bin/cc',
                       '-DCMAKE_USER_MAKE_RULES_OVERRIDE_CXX=/build/cppgm-rules.cmake',
                       '-DCMAKE_CXX_FLAGS_RELEASE=-O3 -DNDEBUG', '-DLLVM_ENABLE_PROJECTS=clang',
                       '-DLLVM_TARGETS_TO_BUILD=X86', '-DLLVM_ENABLE_ZLIB=OFF'):
            self.assertIn(option, command)
        with self.assertRaisesRegex(ValueError, 'optimization level'):
            ci.configure_command(Path('/src'), Path('/build'), Path('/work/cppgm'), 'cc', Path('/rules'), 'Ofast')

    def test_failed_steps_are_counted_and_shown_with_their_diagnostics(self):
        count, shown = ci.failures(LOG, limit=1)
        self.assertEqual(count, 2)
        self.assertEqual(len(shown), 1)
        self.assertTrue(shown[0].startswith('FAILED: lib/Support/CMakeFiles/LLVMSupport.dir/Path.cpp.o'))
        self.assertIn('ERROR: Path.cpp:12:3: syntax error', shown[0])
        self.assertNotIn('Regex', shown[0])
        self.assertEqual(ci.failures('[1/1] Building CXX object a.o\n'), (0, []))
        text = ci.report(dict(status='failed', error="ValueError('the Clang build failed: 1')", failed_steps=count,
                              failures=shown))
        self.assertIn('2 build steps failed', text)
        self.assertIn('syntax error', text)

    def test_report_states_the_measured_build(self):
        text = ci.report(dict(status='complete', level='O3', units=2700, build=dict(wall=1500.4, cpu=5900.2),
                              version='clang version 22.1.2', program_levels=['O0', 'O2']))
        for part in ('LLVM 22.1.2', '`-O3`', '| 2700 |', '1500 s', '5900 s', '`-O0`, `-O2`'):
            self.assertIn(part, text)

    def test_source_must_be_the_clean_pinned_commit(self):
        with tempfile.TemporaryDirectory() as tmp:
            for arguments in (['init', '-q'], ['-c', 'user.name=test', '-c', 'user.email=test@example.invalid',
                                               'commit', '-q', '--allow-empty', '-m', 'other']):
                subprocess.run(['git', '-C', tmp, *arguments], check=True)
            with self.assertRaisesRegex(ValueError, 'pinned'):
                ci.source_check(tmp)

    def test_workflow_builds_the_compiler_then_clang(self):
        workflow = (Path(__file__).resolve().parents[2] / '.github/workflows/llvm.yml').read_text()
        self.assertIn('pull_request:', workflow)
        self.assertIn('branches: [main]', workflow)
        self.assertLess(workflow.index('uses: ./.github/actions/build-compiler'),
                        workflow.index('scripts/llvm_ci.py run'))
        self.assertRegex(ci.COMMIT, r'\A[0-9a-f]{40}\Z')
        self.assertTrue(re.search(r'persist-credentials: false', workflow))


if __name__ == '__main__':
    unittest.main()
