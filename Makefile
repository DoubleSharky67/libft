# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 17:27:25 by ffeaugas          #+#    #+#              #
#    Updated: 2022/10/17 23:51:14 by ffeaugas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDES = -I./includes

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS =	\
		ft_printf.c \
		srcs/ft_check_spec.c \
		srcs/ft_check_spec_c.c \
		srcs/ft_check_spec_s.c \
		srcs/ft_check_spec_p.c \
		srcs/ft_check_spec_d_i.c \
		srcs/ft_check_spec_u.c \
		srcs/ft_check_spec_x.c \
		srcs/ft_check_spec_X.c \
		srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_putnbr.c \
		srcs/ft_putnbr_base.c \
		srcs/ft_strlen.c \
		srcs/ft_nblen.c \
		srcs/ft_nbexlen.c

OBJ = $(SRCS:%.c=%.o)

%.o:	%.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
