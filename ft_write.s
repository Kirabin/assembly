section .text
global _ft_write
SYS_WRITE equ 0x2000004

; rdi - 1 arg
; rsi - 2 arg 
; rdx - 3 arg
; should handle errors
_ft_write:
	cmp rdi, 0
	jl error
	
	cmp rdx, 0
	jle error
	
	mov rax, SYS_WRITE
	syscall					; call system call which contains in rax
	jc error
	jmp exit
	
error:
	mov rax, -1
	ret

exit:
	ret