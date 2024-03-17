
BITS 64
GLOBAL main
EXTERN puts

	section	.data
		txt db "Hello, Holberton\n"

	section .text

main:
	mov	rdi, txt
	mov 	rax, 0
	call	puts
	mov	eax, 60
	syscall

	section	.note.GNU-stack noalloc noexec nowrite progbits
