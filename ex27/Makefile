# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 19:33:15 by gcadiou           #+#    #+#              #
#    Updated: 2016/11/09 02:52:28 by gcadiou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = display_file.c ft_puterror.c ft_putnbr.c ft_putstr.c ft_putchar.c

all: header $(NAME)

header:
	gcc header.h

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o *.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
