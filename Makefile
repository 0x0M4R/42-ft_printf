SRCS	= ft_printf.c libft/ft_strchr.c libft/ft_strlen.c libft/ft_putstr.c libft/ft_putnbr.c libft/ft_putchar.c libft/ft_putnbru.c libft/ft_puthex.c libft/ft_putp.c

NAME = libftprintf.a
OBJS = ${SRCS:.c=.o}
all:	${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
.c.o: ${SRCS}
	gcc -Wall -Wextra -Werror -I. -c -o $@ $<
bonus: ${OBJS} ${OBJS_B}
	ar rcs ${NAME} ${OBJS} ${OBJS_B}
clean:
	rm -f ${OBJS} ${OBJS_B}
fclean:	clean
	rm -f ${NAME}
re:	fclean all