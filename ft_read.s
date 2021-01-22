section .text
global _ft_read  ; set entry point
				 ; why start with _? 
SYS_READ equ 0x2000003

; rdi - 1 arg
; rsi - 2 arg 
; rdx - 3 arg
; rax - return register
_ft_read:
	mov rax, SYS_READ
	syscall
	jc error				; jump if read set carry flag to 1
	jmp exit

error:
	mov rax, -1
	ret

exit:
	ret