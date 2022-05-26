# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sum <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 13:03:49 by sum               #+#    #+#              #
#    Updated: 2022/05/26 10:37:23 by sum              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rc
LIBR = ranlib
HEADER = ./includes/

SRCS_D = ./srcs/
SRCS = $(SRCS_D)ft_putchar.c \
	$(SRCS_D)ft_putstr.c \
	$(SRCS_D)ft_strcmp.c \
	$(SRCS_D)ft_strlen.c \
	$(SRCS_D)ft_swap.c
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
