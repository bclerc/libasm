#include "asm.h"

// rdi, rsi, rdx, rcx, r8, r9

int main(int argc, char**argv)
{
    int i = argc;
    i++;
    char *caca;
    char buf[16] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
   printf("Longueur de la chaine \"%s\" est : %zu\n", argv[1], ft_strlen(argv[1]));
    char dst[ft_strlen(argv[1])];
    int fd = open("test.txt", O_RDWR);
    ft_strcpy(dst, argv[1]);
    printf("DST = %s\n", dst);
    if (!ft_strcmp(dst, "coucou"))
        printf("La chaine est identique à coucou.\n");
    else
        printf("La chaine n'est pas identique à coucou :/\n");
    printf("\nRetour write : %d | retour errno %d\n", ft_write(1, "pute", 4), errno);
    ft_read(fd, buf, 16);
    printf("\nRead: %s\n", buf);
    caca = ft_strdup("grosse");
    printf("Strdup : %s %d\n", caca, ft_strlen(caca));
    return (0);
}
