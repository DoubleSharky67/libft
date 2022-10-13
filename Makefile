# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 17:27:25 by ffeaugas          #+#    #+#              #
#    Updated: 2022/10/13 17:44:32 by ffeaugas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft/libft.a

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
		srcs/ft_check_spec_X.c 

OBJ = $(SRCS:%.c=%.o)

%.o:	%.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

all:	$(LIBFT) $(NAME)

$(LIBFT):
	make -C ./libft

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(LIBFT) $(OBJ)

clean:
	rm -f $(OBJ)
	make clean -C ./libft

fclean:	clean
	rm -f $(NAME)
	make fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re
