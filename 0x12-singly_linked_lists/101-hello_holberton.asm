assembly
section .data
    message db "Hello, Holberton", 0

section .text
    extern printf

global _start

_start:
    sub rsp, 8
    mov rdi, message
    xor eax, eax
    call printf

    mov eax, 60
    xor edi, edi
    syscall
