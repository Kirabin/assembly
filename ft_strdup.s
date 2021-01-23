segment .text ; is this right ?
global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy
; rdi - 1 arg
; rsi - 2 arg
; rax - return register
_ft_strdup:
	call _ft_strlen			; set rax to len
	push rdi
	mov rdi, rax			; set rdi to len
	call _malloc			; rax = malloc(len)
	cmp rax, 0
	je error
	pop rdi
	push r8
	xor r8, r8
	.loop:
		mov cl, byte [rdi+r8]
		mov byte [rax+r8], cl
		cmp cl, 0
		je exit
		inc r8
		jmp .loop

error:
	pop rdi
	mov rax, 0
	ret

exit:
	pop r8
	ret