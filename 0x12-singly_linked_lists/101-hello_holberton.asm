section .data
    hello db "Hello, Holberton",

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov     rdi, hello
    call    printf

    ; Exit the program
    mov     rax, 60
    xor     rdi, rdi
    syscall
