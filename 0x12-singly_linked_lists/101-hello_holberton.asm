global   main       ; Declare 'main' as a globally accessible entry point
extern    printf     ; Declare 'printf' as an external function

main:
    mov   edi, format  ; Move the address of the 'format' string to the 'edi' register
    xor   eax, eax     ; Clear the 'eax' register (return value of the function)
    call  printf       ; Call the 'printf' function to print the formatted string
    mov   eax, 0       ; Set the return value of the function to 0 (success)
    ret                ; Return from the function

format: db `Hello, Holberton\n`,0  ; Define the null-terminated string 'format'
