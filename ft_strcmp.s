section .text
	global _ft_strcmp

; rdi - 1 arg
; rsi - 2 arg
; rax - return register
_ft_strcmp:
	xor rax, rax
	.loop:
		mov cl, byte [rdi+rax]
		mov dl, byte [rsi+rax]
		inc rax
		cmp cl, 0
		je _lower
		cmp dl, 0
		je _bigger
		cmp cl, dl
		je .loop

_lower:
	cmp dl, 0
	je _equal
	mov rax, -1
	ret

_bigger:
	mov rax, 1
	ret

_equal:
	mov rax, 0
	ret