global ft_strdup
extern malloc
extern  __errno_location
extern  ft_strlen
extern ft_strcpy

ft_strdup:
    push rdi
    call ft_strlen
    inc rax
    mov rdi, rax
    call malloc
    cmp rax, 0
    jz error
    mov rdi, rax
    pop rsi
    call ft_strcpy
    ret
error:
    neg rax
    mov rdi, rax
    call __errno_location
    mov [rax], rdi
    mov rax, -1
    ret