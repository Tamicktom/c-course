; hello.asm - imprime "Hello, World!" e sai

section .data
    msg db 'Hello, World!', 0x0A ; Mensagem a ser impressa
    len equ $ - msg ; Comprimento da mensagem
    ; 0x0A é o caractere de nova linha (newline)

section .text
    global _start ; Ponto de entrada do programa

_start:
    ; Chamada de sistema para escrever na saída padrão
    mov rax, 1          ; syscall: sys_write
    mov rdi, 1          ; file descriptor: stdout
    mov rsi, msg        ; ponteiro para a mensagem
    mov rdx, len        ; comprimento da mensagem
    syscall             ; chamada de sistema

    ; Chamada de sistema para sair do programa
    mov rax, 60         ; syscall: sys_exit
    xor rdi, rdi        ; código de saída: 0
    syscall             ; chamada de sistema

; Compilar e executar:
; nas linhas de comando do Linux:
; nasm -f elf64 hello.asm -o hello.o
; ld hello.o -o hello
; ./hello
; ou
; nasm -f elf64 hello.asm && ld hello.o -o hello && ./hello