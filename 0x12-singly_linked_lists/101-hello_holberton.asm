section .data
    hello db "Hello, Holberton",10  ; The string to be printed, followed by a newline
    hello_len equ $ - hello         ; Calculate the length of the string

section .text
    global main                     ; Entry point for the program
    extern printf                  ; Declare printf as an external symbol

main:
    ; Load the address of the format string into RDI
    mov rdi, hello

    ; Load the address of the string to print into RSI
    mov rsi, hello

    ; Clear RAX register (no floating-point args)
    xor rax, rax

    ; Call printf function
    call printf

    ; Exit the program
    mov rax, 60                    ; syscall number for exit (60 on x86-64)
    xor rdi, rdi                   ; Status code (0)
    syscall                        ; Invoke syscall

