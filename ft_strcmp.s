section .text
	global _ft_strcmp

; rdi - 1 arg
; rsi - 2 arg
; rax - return register
_ft_strcmp:
	xor rax, rax
	ret
	
exit:
	ret