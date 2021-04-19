section .text
	global _ft_strcpy

_ft_strcpy:
	mov rax, rdi		
loop:
	cmp		byte[rsi], 0
	je		exit
	movsb
	jmp		loop	

exit:
	mov byte[rdi], 0 
	ret					