section .text
	global _ft_strcmp

_ft_strcmp:

loop:
	movzx	rax, byte[rdi]
	movzx	rbx, byte[rsi]
	cmp		rax, 0
	je		exit
	cmp		rbx, 0
	je		exit
	cmp rax, rbx
	jne exit
	inc rdi
	inc rsi
	jmp loop

exit:
	sub rax, rbx
	ret 

