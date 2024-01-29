# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/01 17:18:23 by ahamdi            #+#    #+#              #
#    Updated: 2024/01/02 16:10:50 by ahamdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src = ft_puthex_lower.c ft_putptr.c ft_put_unsigned.c ft_putchar.c ft_putstr.c \
      ft_putnbr.c ft_printf.c ft_puthex_upper.c
OBJS = ${src:.c=.o}
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@
	

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
