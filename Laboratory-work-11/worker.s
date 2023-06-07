	.file	"worker.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Deleting worker failed.\n"
.LC1:
	.string	"Adding worker failed.\n"
.LC2:
	.string	"Getting worker failed.\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movl	$1, %ebp
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$8, %rsp
	.cfi_def_cfa_offset 32
	call	connect_worker
	testq	%rax, %rax
	je	.L1
	movq	%rax, %rdi
	movq	%rax, %rbx
	call	remove_worker
	cmpl	$1, %eax
	je	.L3
	movl	$.LC0, %edi
	movl	$24, %edx
	movl	$1, %esi
	movq	stderr(%rip), %rcx
	call	fwrite
	movq	%rbx, %rdi
	call	PQfinish
.L1:
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	movl	%ebp, %eax
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
.L3:
	.cfi_restore_state
	movq	%rbx, %rdi
	call	add_worker
	subl	$1, %eax
	jne	.L10
	movq	%rbx, %rdi
	call	get_worker
	subl	$1, %eax
	je	.L5
	movl	$23, %edx
	movl	$1, %esi
	movl	$.LC2, %edi
	movq	stderr(%rip), %rcx
	call	fwrite
	movq	%rbx, %rdi
	call	PQfinish
	jmp	.L1
.L10:
	movl	$22, %edx
	movl	$1, %esi
	movl	$.LC1, %edi
	movq	stderr(%rip), %rcx
	call	fwrite
	movq	%rbx, %rdi
	call	PQfinish
	jmp	.L1
.L5:
	movq	%rbx, %rdi
	xorl	%ebp, %ebp
	call	PQfinish
	jmp	.L1
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (GNU) 8.5.0 20210514 (Red Hat 8.5.0-4)"
	.section	.note.GNU-stack,"",@progbits
