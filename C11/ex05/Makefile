# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sum <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 12:58:58 by sum               #+#    #+#              #
#    Updated: 2022/05/26 11:02:58 by sum              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADER = ./includes/

SRC_D = ./srcs/
SRCS = $(SRC_D)do-op.c \
	$(SRC_D)ft_atoi.c \
	$(SRC_D)ft_operator.c \
	$(SRC_D)ft_putnbr.c \
	$(SRC_D)ft_putstr.c
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
