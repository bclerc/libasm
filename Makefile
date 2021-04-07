NAME = libasm.a

SRCS =	ft_strlen.s \
		ft_strcmp.s \
		ft_write.s \
		ft_strdup.s \
		ft_read.s \
		ft_strcpy.s
	
CC = nasm -felf64

OBJS = ${SRCS:.s=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

.s.o:
	${CC} -o $@ $?

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf $(NAME)
	rm -rf a.out

re: fclean all
