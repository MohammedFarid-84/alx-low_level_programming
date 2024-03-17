BITS 64
GLOBAL main
EXTERN puts

section .data
    msg db "Hello, Holberton", 0

section .text
main:
    ;pass an argument to the puts function.
    mov rdi, msg
    call puts
    ;exit
    mov eax, 60
    xor edi, edi
    syscall

section .note.GNU-stack noalloc noexec nowrite progbits
