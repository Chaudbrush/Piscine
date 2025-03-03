# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vloureir <vloureir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/01 17:06:52 by vloureir          #+#    #+#              #
#    Updated: 2025/03/01 20:12:25 by vloureir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := do-op
SRC := ft_do-op.c ft_operator.c
CFLAGS := -Wall -Wextra -Werror
CC := cc
RM := rm -rf

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $@ $(SRC)

clean:
	$(RM) $(NAME)

re: clean all

