section .text
global main

main:
	; write message to stdout
	mov rax, 1        ; system call for "write"
	mov rdi, 1        ; file descriptor for stdout
	mov rsi, msg      ; message to write
	mov rdx, msglen   ; message length
	syscall

	; exit the program
	mov rax, 60       ; system call for "exit"
	mov rdi, 0        ; exit status
	syscall

section .rodata
	msg: db "Hello, Holberton", 10   ; message to print
	msglen: equ $ - msg              ; length of message
