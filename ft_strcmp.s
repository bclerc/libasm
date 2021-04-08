global ft_strcmp

ft_strcmp:
    mov rcx, 0

loop:
    cmp byte [rdi + rcx], 0
    jz return
    cmp byte [rsi + rcx], 0
    jz return
    mov al, byte [rdi + rcx]
    cmp byte [rsi + rcx], al
    jnz return
    inc rcx
    jmp loop 

return:
    movzx rax, byte [rdi + rcx]
    movzx r9, byte [rsi + rcx]
    sub rax, r9
    ret