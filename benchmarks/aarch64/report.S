.text
.globl report
.type report, %function
report:
	str x0, [sp, #-16]!
	mov x1, sp
	mov x0, #1
	mov x2, #8
	mov x8, #64
	svc #0
	add sp, sp, #16
	ret
.section .note.GNU-stack,"",%progbits
