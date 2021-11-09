# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 11:20:36 by hmaronen          #+#    #+#              #
#    Updated: 2021/11/02 10:50:48 by hmaronen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c
O_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o
FLAGS = -Wall -Wextra -Werror -I $(HEADER)
HEADER = includes

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(O_FILES)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

