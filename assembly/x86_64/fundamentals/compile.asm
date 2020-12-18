section .data
section .bss
section .text
	global main

main:
	mov rax, 60			; exit system call
	mov rdi, 0			; return 0
	syscall

