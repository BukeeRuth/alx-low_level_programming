; Declare C functions
extern printf

section .data
    message db "Hello, Holberton", 0 ; Null-terminated message string
    format db "%s\n", 0             ; Null-terminated format string for printf

section .text
global main

main:
    push rbp               ; Set up stack frame

    mov rdi, format       ; Load format string address
    mov rsi, message      ; Load message string address
    xor rax, rax          ; Clear RAX (no floating-point arguments)
    call printf           ; Call printf function

    pop rbp                ; Restore stack
    xor rax, rax           ; Return value (no error)
    ret                    ; Return

