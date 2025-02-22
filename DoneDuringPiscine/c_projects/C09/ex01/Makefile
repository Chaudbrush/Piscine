# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 09:42:45 by vloureir          #+#    #+#              #
#    Updated: 2025/02/13 12:04:35 by vloureir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB_NAME = libft.a

SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INC_PATH = ./includes/
INCLUDES = includes/ft.h
OBJECTS = $(SOURCES:.c=.o)

all: $(LIB_NAME)

$(LIB_NAME): $(OBJECTS)
	ar -rcs $(LIB_NAME) $^

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_PATH)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all
