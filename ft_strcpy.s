global ft_strcpy

ft_strcpy:
    mov rcx, 0

loop:
    cmp byte [rsi + rcx], 0
    jz return
    mov dl, [rsi + rcx]
    mov [rdi, rcx], dl
    inc rcx
    jmp loop
return:
    mov byte [rdi + rcx], 0
    mov rax, rdi
    ret