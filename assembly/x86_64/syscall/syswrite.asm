section .data
	message db "Hello, World!", 10
	length equ $-message

section .bss
section .text
	global main

main:
	mov rax, 1			; syswrite
	mov rdi, 1			; stdout
	mov rsi, message		; string address
	mov rdx, length			; message length
	syscall

	mov rax, 60			; sysexit
	xor rdi, rdi			; zero out rdi
	syscall

