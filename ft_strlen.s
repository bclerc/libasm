global ft_strlen

ft_strlen:
    xor rax, 0
    jmp while

while:
    cmp byte [rdi + rax], 0
    je exit
    inc rax
    jmp while
exit:
    ret
