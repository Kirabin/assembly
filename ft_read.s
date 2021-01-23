section .text
global _ft_read
extern ___error
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
	push r8
	mov r8, rax				; after syscall rax contains error code
	call ___error			; returns pointer to errno variable
	mov [rax], r8
	mov rax, -1
	pop r8
	ret

exit:
	ret