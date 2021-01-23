section .text
global _ft_write
extern ___error
SYS_WRITE equ 0x2000004

; rdi - 1 arg
; rsi - 2 arg 
; rdx - 3 arg
; should handle errors
_ft_write:
	mov rax, SYS_WRITE
	syscall					; call system call which contains in rax
	jc error				; write will set carry flag in case of an error
	jmp exit

error:
	push r8
	mov r8, rax				; after syscall rax contains error code
	call ___error			; returns pointer to errno variable
	mov [rax], r8
	mov rax, -1
	pop r8
	ret

exit:
	ret