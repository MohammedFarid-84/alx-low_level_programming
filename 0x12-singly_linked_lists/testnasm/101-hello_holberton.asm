BITS 64
GLOBAL main

section .note.GNU-stack noalloc noexec nowrite progbits

section .data
        msg db 'Hello, Holberton', 0
	newline db 10


section .text
	global main

main:
;pass an argument to the printf function.
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 17
	syscall
;print newline
	mov rax, 1
	mov rdi, 1
	mov rsi, newline
	mov rdx, 1
	syscall
	;exit
	mov eax, 60
	xor edi, edi
	syscall
