# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolaniya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/21 00:11:54 by dolaniya          #+#    #+#              #
#    Updated: 2025/11/21 00:12:03 by dolaniya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

cc = gcc
CFLAGS = -Wall -Wextra -Werror






all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
