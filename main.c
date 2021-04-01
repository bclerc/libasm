#include "asm.h"

// rdi, rsi, rdx, rcx, r8, r9

int main(int argc, char**argv)
{
    int i = argc;
    i++;

   printf("Longueur de la chaine \"%s\" est : %zu\n", argv[1], ft_strlen(argv[1]));
    
    char dst[ft_strlen(argv[1])];
    ft_strcpy(dst, argv[1]);
    printf("DST = %s\n", dst);
    if (!ft_strcmp(dst, "coucou"))
        printf("La chaise est identique à coucou.");
    else
        printf("La chaine n'est pas identique à coucou :/");

    return (0);
}
