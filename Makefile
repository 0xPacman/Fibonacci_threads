# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahjadani <ahjadani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 14:28:39 by ahjadani          #+#    #+#              #
#    Updated: 2022/02/20 14:46:51 by ahjadani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = fib.c

CFLAGS = -Werror -Wextra -Wall

OBJECTS = $(FILES:.c=.o)

NAME = fib
CC = cc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o:%.c fib.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re