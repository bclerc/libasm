#include "asm.h"

// rdi, rsi, rdx, rcx, r8, r9


int main(int argc, char**argv)
{
    int i = argc;
    i++;
-    printf("Longueur de la chaine \"%s\" est : %zu", argv[1], ft_strlen(argv[1]));
    char *dst;
    ft_strcpy(dst, argv[1]);
    printf("DST = : %s\n", dst);
    return (0);
}