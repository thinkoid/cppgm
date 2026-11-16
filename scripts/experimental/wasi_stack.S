// The single-threaded command host restores its initial memory image and this
// pointer between invocations. These leaf functions have no shadow-stack frame.
.globaltype __stack_pointer, i32
.functype __cppgm_wasi_stack_pointer () -> (i32)
.globl __cppgm_wasi_stack_pointer
__cppgm_wasi_stack_pointer:
.functype __cppgm_wasi_stack_pointer () -> (i32)
global.get __stack_pointer
end_function
.functype __cppgm_wasi_restore_stack_pointer (i32) -> ()
.globl __cppgm_wasi_restore_stack_pointer
__cppgm_wasi_restore_stack_pointer:
.functype __cppgm_wasi_restore_stack_pointer (i32) -> ()
local.get 0
global.set __stack_pointer
end_function
