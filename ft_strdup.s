segment .text
global _ft_strdup
; extern _malloc
extern _ft_strlen
; rdi - 1 arg
; rsi - 2 arg
; rax - return register
_ft_strdup:
	call _ft_strlen			; set rax to len
	ret