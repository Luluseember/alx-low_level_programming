global main
    Extern printf

main:
    mov     rdi, format
    xor     rdi, rdi
    call printf
 mov  rax, 0
   ret
format db "Hello, Holberton\n",0
