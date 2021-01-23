section .text
global _ft_strcpy


; rdi - first argument (dest)
; rsi - second argument (src)
; rax - return register
_ft_strcpy:
	xor rax, rax
	.loop:
		mov cl, byte [rsi + rax]
		mov byte [rdi + rax], cl
		cmp cl, 0
		je exit
		inc rax
		jmp .loop

exit:
	mov rax, rdi
	ret