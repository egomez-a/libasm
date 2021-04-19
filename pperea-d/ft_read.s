section .text
	global _ft_read
	extern ___error

_ft_read:
	mov rax, 0x2000003
	syscall
	jc error
	ret
error:
	push rax
	call ___error
	mov	rbx, rax
	pop rax
	mov	[rbx], rax
	mov rax, -1
	ret
	