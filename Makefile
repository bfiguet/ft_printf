# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfiguet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 14:25:50 by bfiguet           #+#    #+#              #
#    Updated: 2022/02/23 14:25:53 by bfiguet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
INCLUDE = ft_printf.h
CFLAGS = -Wall -Werror -Wextra
AR = ar rc
RM =rm -f

SRCS = \
	ft_printf.c \
	ft_printf_utils.c \
	ft_itoa.c \
	ft_print_hexa.c \
	ft_print_ptr.c \
	ft_print_unsigned.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:
	all clean fclean re