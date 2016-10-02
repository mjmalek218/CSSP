	.file	"Three_61.c"
	.text
	.globl	cread
	.type	cread, @function
cread:
.LFB24:
	.cfi_startproc
	testq	%rdi, %rdi
	je	.L3
	movq	(%rdi), %rax
	ret
.L3:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	cread, .-cread
	.globl	cread1
	.type	cread1, @function
cread1:
.LFB25:
	.cfi_startproc
	testq	%rdi, %rdi
	je	.L6
	movq	(%rdi), %rax
	ret
.L6:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE25:
	.size	cread1, .-cread1
	.globl	main
	.type	main, @function
main:
.LFB26:
	.cfi_startproc
	subq	$16, %rsp
	.cfi_def_cfa_offset 24
	movq	$5, 8(%rsp)
	leaq	8(%rsp), %rdi
	call	cread1
	addq	$16, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE26:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
