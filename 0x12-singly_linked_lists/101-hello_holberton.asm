section .data
    hello db "Hello, Holberton",10  ; The string to be printed, followed by a newline
    hello_len equ $ - hello         ; Calculate the length of the string
    format db "%s", 0              ; Format string for printf

section .text
    global main                     ; Entry point for the program
    extern printf                  ; Declare printf as an external symbol

main:
    ; Prepare arguments for printf
    mov rdi, format                ; Address of the format string
    mov rsi, hello                 ; Address of the string to print
    xor rax, rax                   ; Clear RAX register (no floating-point args)
    call printf                    ; Call printf function

    ; Exit the program
    mov rax, 60                    ; syscall number for exit (60 on x86-64)
    xor rdi, rdi                   ; Status code (0)
    syscall                        ; Invoke syscall

