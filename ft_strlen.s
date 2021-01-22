global _ft_strlen

; rdi - first argument
; rax - return register
_ft_strlen:
	xor rax, rax				; xor rax on itself to set it to zero
	.loop:						; NASM uses a leading . to identify local labels
		cmp [rdi+rax], byte 0	; compare(but actually subtract) *(str + len) with byte long 0
		je exit					; jump if operands of previous cmp instruction are equal
		inc rax					; increment
		jmp .loop				; analog of goto in some programming languages

exit:
	ret							; close program