#!/usr/bin/env node
// Use the same downloadable linker and host glue as the incpption site.
const fs=require('node:fs'), path=require('node:path'), os=require('node:os'), http=require('node:http');
const {gunzipSync}=require('node:zlib'), {createHash}=require('node:crypto'), {execFileSync}=require('node:child_process');
const [pkg,site,dest]=process.argv.slice(2).map(arg=>path.resolve(arg));
if(!dest)throw Error('usage: browser_native_downloads.cjs WASI_PACKAGE INCPPTION_CHECKOUT NEW_OUTPUT_DIRECTORY');
const {chromium}=require(path.join(site,'node_modules/playwright'));
const scratch=fs.mkdtempSync(path.join(os.tmpdir(),'pa39-browser-'));
const copy=(source,name)=>fs.copyFileSync(source,path.join(scratch,name));
const hash=bytes=>createHash('sha256').update(bytes).digest('hex');

function prepare(){
  copy(path.join(pkg,'inputs/w1/cppgm.wasm'),'cppgm.wasm');
  fs.cpSync(path.join(pkg,'shim'),path.join(scratch,'shim'),{recursive:true});
  for(const file of ['wasi_runtime.mjs','transport_bytes.mjs','browser_native_worker.mjs'])copy(path.join(__dirname,file),file);
  for(const file of ['emscripten_host.mjs','emscripten_inputs.mjs','emscripten_process.mjs','error_text.mjs','memory_image.mjs'])
    copy(path.join(site,'web',file),file);
  const seed=path.join(site,'dist/clang-seed'), manifest=JSON.parse(fs.readFileSync(path.join(seed,'manifest.json')));
  const spec=manifest.tools.lld, bytes=Buffer.concat(spec.chunks.map(c=>gunzipSync(fs.readFileSync(path.join(seed,c.path)))));
  if(hash(bytes)!==spec.sha256)throw Error('Linker seed checksum mismatch');
  fs.writeFileSync(path.join(scratch,'lld.wasm'),bytes);
  copy(path.join(seed,spec.runtime.path),'glue.mjs');
  // The two Linux entry objects are the prepackaged CRT inputs to the browser.
  const assembler=process.env.CPPGM_AARCH64_CLANG||'clang';
  const arm=path.resolve(__dirname,'../../pa39/support/start.S');
  execFileSync(assembler,['--target=aarch64-linux-gnu','-c',arm,'-o',path.join(scratch,'linux-arm64-start.o')]);
  execFileSync(assembler,['--target=x86_64-linux-gnu','-x','assembler','-c','-','-o',path.join(scratch,'linux-x86_64-start.o')],
    {input:'.text\n.globl _start\n_start:\n and $-16,%rsp\n call main\n mov %eax,%edi\n mov $60,%eax\n syscall\n'});
}
const pageHtml='<script>window.state={};const w=new Worker("browser_native_worker.mjs",{type:"module"});'+
 'w.onmessage=({data:r})=>{if(!r.bytes){Object.assign(state,r);return}const a=document.createElement("a");'+
 'a.download=r.name;a.href=URL.createObjectURL(new Blob([r.bytes],{type:"application/octet-stream"}));'+
 'a.textContent=r.name;document.body.append(a)};w.onerror=e=>state.error=e.message;</script>';
async function test(){
  prepare();fs.mkdirSync(dest);
  const server=http.createServer((req,res)=>{
    if(req.url==='/'){res.setHeader('Content-Type','text/html');res.end(pageHtml);return;}
    const file=path.resolve(scratch,'.'+req.url);
    if(!file.startsWith(scratch+'/')||!fs.existsSync(file)){res.writeHead(404);res.end();return;}
    res.setHeader('Content-Type',/\.m?js$/.test(file)?'text/javascript':'application/octet-stream');
    fs.createReadStream(file).pipe(res);
  });
  await new Promise(r=>server.listen(0,'127.0.0.1',r));
  let browser;
  try{
    browser=await chromium.launch({headless:true,args:['--no-sandbox']});
    const page=await browser.newPage();
    await page.goto('http://127.0.0.1:'+server.address().port+'/');
    await page.waitForFunction(()=>window.state?.done||window.state?.error,null,{timeout:240000});
    const error=await page.evaluate(()=>state.error);if(error)throw Error(error);
    const names=await page.locator('a[download]').allTextContents();
    if(names.length!==4)throw Error('Expected four executable downloads');
    for(const name of names){
      const [file]=await Promise.all([page.waitForEvent('download'),page.getByText(name,{exact:true}).click()]);
      const out=path.join(dest,name);await file.saveAs(out);fs.chmodSync(out,0o755);
      const bytes=fs.readFileSync(out), arm=name.endsWith('arm64');
      const matches=name.startsWith('linux')?bytes.readUInt32BE(0)===0x7f454c46&&bytes.readUInt16LE(16)===2&&bytes.readUInt16LE(18)===(arm?183:62)
         :bytes.readUInt32LE(0)===0xfeedfacf&&bytes.readUInt32LE(4)===(arm?0x100000c:0x1000007)&&bytes.readUInt32LE(12)===2;
      if(!matches)throw Error('Wrong executable format: '+name);
      console.log(name,bytes.length,hash(bytes));
    }
  }finally{if(browser)await browser.close();server.close();}
}
test().catch(e=>{console.error(e);process.exitCode=1}).finally(()=>fs.rmSync(scratch,{recursive:true,force:true}));
