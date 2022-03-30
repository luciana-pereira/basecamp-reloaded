# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 06:44:31 by lucperei          #+#    #+#              #
#    Updated: 2022/03/27 08:06:33 by lucperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADERS = ./includes/
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
AR = ar rcs

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(SRC) -I $(HEADERS)
		$(AR) $(NAME) $(OBJS)
clean:
		rm -rf $(OBJS)
		
fclean: clean
		rm -rf $(NAME)
		
re: fclean all