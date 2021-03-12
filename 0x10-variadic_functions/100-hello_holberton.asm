global main

	section .text

main:
	mov rax, 1		; write
	mov rdi, 1		; start
	mov rsi, msg 		; Hello Holberton
	mov rdx, msglen		; length
	syscall			; write
	mov rax, 60		; exit
	mov rdi, 0		; exit success
	syscall	

	section .rodata
msg:	db "Hello, Holberton", 10
msglen:	equ $ - msg
