# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/17 00:42:04 by hamrachi          #+#    #+#              #
#    Updated: 2023/12/19 21:07:12 by hamrachi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_put_unsigned.c ft_put_adress.c ft_puthexa_lu.c

CC = cc

AR = ar rc

OBJS = $(SRCS:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
