#ifndef _ASM_H
# define _ASM_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

size_t  ft_strlen(const char *str);
char    *ft_strcpy(char *dest, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
size_t  ft_read(int fd, char *buf, size_t count);
char *ft_strdup(char *s);
size_t  ft_write(int fd, char *buf, size_t count);

#endif
