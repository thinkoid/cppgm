.text
.globl main
main:
	// This instruction needs R_AARCH64_MOVW_UABS_G0_NC at final link.
	movz x0, #:abs_g0_nc:main
	ret
