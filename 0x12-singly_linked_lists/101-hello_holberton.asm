section .data
    hello db "Hello, Holberton", 0
    newline db 10, 0    ; Newline character (ASCII 10)

section .text
    global main
    extern printf

main:
    push rbp              ; Preserve base pointer

    mov rdi, hello        ; Load the address of the string into rdi
    call printf          ; Call the printf function

    mov rdi, newline      ; Load the address of the newline character into rdi
    call printf          ; Call the printf function for newline

    pop rbp               ; Restore base pointer
    ret
