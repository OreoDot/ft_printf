# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolaniya <dolaniya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/21 00:11:54 by dolaniya          #+#    #+#              #
#    Updated: 2025/12/17 08:28:13 by dolaniya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

SRCS = ft_printf.c \
       handle_format.c \
       ft_putchar.c \
       ft_putstr.c \
       ft_putnbr.c \
       ft_putunbr.c \
       ft_puthex.c \
       ft_putpointer.c

OBJS = $(SRCS:.c=.o)

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	ar rcs $@ $^

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
