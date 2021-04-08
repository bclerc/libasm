#include "asm.h"

// rdi, rsi, rdx, rcx, r8, r9

int main(int argc, char**argv)
{
    const char *str;
    const char *strdup[2500];

    if (argc == 1)
    {
        ft_write(1, "Please insert one arguments", 29);
        exit(-1);
    }
    int fd = open("test.txt", O_RDWR);
    int fdwrite = open("write.txt", O_RDWR);

    str = ft_strdup(argv[1]);
    printf("--------- Ft_strlen -------\n");
    printf("Your sentence have %d character\n", ft_strlen(str));
    printf("---------------------------\n");
    printf("--------- Ft_write --------\n");
    ft_write(fdwrite, str, ft_strlen(str));
    printf("Your sentence is now in write.txt file\n");
    ft_write(-1, strdup, 0);
    printf("Errno error with random fd : %d\n", errno);
    printf("-------- Ft_read ----------\n");
    ft_read(fd, strdup, 2500);
    printf("Reading test.txt file\n");
    printf("%s\n", strdup);
    printf("The text contains %d character\n", ft_strlen(strdup));
    ft_read(-1, strdup, 10);
    printf("Errno error with random fd : %d\n", errno);
    printf("-------------------------\n");
}   
