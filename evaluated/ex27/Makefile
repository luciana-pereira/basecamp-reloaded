# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 18:57:57 by lucperei          #+#    #+#              #
#    Updated: 2022/03/27 06:21:59 by lucperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
LFT = libft.a
FLAGS = -Wall -Wextra -Werror
HEADERS = ./includes/
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/file.c
OBJS = ft_putchar.o ft_putstr.o file.o
AR = ar rcs

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(SRC) -I $(HEADERS)
		$(AR) $(LFT) $(OBJS)
		gcc $(FLAGS) srcs/main.c $(SRC) -I $(HEADERS) -o $(NAME)
clean:
		rm -rf $(OBJS)
		rm -rf $(LFT)
		
fclean: clean
		rm $(NAME)
			
re: fclean all