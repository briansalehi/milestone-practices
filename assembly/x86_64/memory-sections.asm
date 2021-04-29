section .data
	message db 'hello, world', 10, 0
	length equ $ - message - 1

section .bss
	response resb 20

section .text
	global main

main:
	push rbx
	mov rbx, rsi

	mov rax, 1			; write system call
	mov rdi, 1			; standard output
	mov rsi, message	; message address in memory
	mov rdx, length		; length of message
	syscall

	mov rsi, rbx
	pop rbx

	mov rax, 60			; exit system call
	mov rdi, 0			; return 0
	syscall
