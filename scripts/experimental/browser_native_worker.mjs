// Each invocation of cppgm or LLD runs inside this browser worker.
import {invoke, File, Directory, insert, lookup} from './wasi_runtime.mjs';
import {invokeEmscripten} from './emscripten_host.mjs';
import {fetchBytes} from './transport_bytes.mjs';

const targets = [
  ['linux-x86_64', 'x86_64-linux-gnu', 'elf_x86_64'],
  ['linux-arm64', 'aarch64-linux-gnu', 'aarch64elf'],
  ['macos-x86_64', 'x86_64-apple-macos', 'x86_64'],
  ['macos-arm64', 'arm64-apple-macos11', 'arm64'],
];

async function build() {
  const compiler = await WebAssembly.compile(await fetchBytes('cppgm.wasm'));
  const linker = await WebAssembly.compile(await fetchBytes('lld.wasm'));
  const source = {main: 'extern "C" int plus(int,int); int main(){return plus(17,22);}',
                  peer: 'extern "C" int plus(int a,int b){return a+b;}'};
  for (const [name, triple, arch] of targets) {
    const root = new Directory([]), files = [];
    for (const [unit, code] of Object.entries(source)) {
      insert(root, unit+'.cpp', new File(new TextEncoder().encode(code)));
      const res = await invoke(compiler, root, ['--target='+triple, '-O2', '-c', unit+'.cpp', '-o', unit+'.o']);
      if (res.status) throw Error(name+' compile: '+res.log.join('\n'));
      files.push({path:unit+'.o', bytes:lookup(root,unit+'.o').data});
    }
    const elf = name.startsWith('linux');
    if (elf) files.push({path:'start.o', bytes:await fetchBytes(name+'-start.o')});
    // A minimal link-time interface to the system library already on the Mac.
    // General hosted programs use the corresponding macOS SDK .tbd files.
    if (!elf) {
      const stub = "--- !tapi-tbd\ntbd-version: 4\ntargets: [ x86_64-macos, arm64-macos ]\n" +
        "install-name: '/usr/lib/libSystem.B.dylib'\nexports:\n  - targets: [ x86_64-macos, arm64-macos ]\n" +
        "    symbols: [ _exit ]\n...\n";
      files.push({path:'libSystem.tbd', bytes:new TextEncoder().encode(stub)});
    }
    const args = elf ? ['-m',arch,'-static','-e','_start'] :
      ['-arch',arch,'-platform_version','macos',arch==='arm64'?'11.0':'10.15','11.0','-e','_main'];
    const res = await invokeEmscripten({module:linker, runtime:new URL('glue.mjs',self.location).href,
      program:elf?'ld.lld':'ld64.lld', files, args:[...args,...files.map(f=>f.path),'-o','program'],output:'program'});
    postMessage({name,bytes:res.bytes},[res.bytes.buffer]);
  }
  postMessage({done:true});
}
build().catch(error=>postMessage({error:String(error)}));
