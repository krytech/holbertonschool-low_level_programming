        extern	printf		; the C function

	section .data
msg:	db "Hello, Holberton", 0 ; Text to print
fmt:	db "%s", 10, 0          ; String, new line,'0'

	section .text		; Code

	global main		; the standard gcc entry point
main:
	push    rbp

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0
	call    printf		; Call C function

	pop	rbp		; restore stack

	mov	rax,0		; normal, no error, return value
	ret			; return
