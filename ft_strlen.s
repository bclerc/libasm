global ft_strlen

ft_strlen:
    mov rcx, 0
    jmp while

while:
    cmp byte [rdi + rcx], 0
    je exit
    inc rcx
    jmp while
exit:
    mov rax, rcx
    ret
