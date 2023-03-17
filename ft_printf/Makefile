# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylamkhan <ylamkhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 17:10:33 by ylamkhan          #+#    #+#              #
#    Updated: 2023/03/16 03:55:29 by ylamkhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf
BONUS = bonus_prinf
CFLAGS =-Wall -Werror -Wextra
RM = rm -rf
CC = gcc

SRCS =src/ft_printf.c\
		src/ft_putchar.c\
		src/ft_putstr.c\
		src/ft_putnumbre.c\
		src/ft_putnumber_non_s.c\
		src/ft_putnumber_HEX.c\
		src/ft_putnumber_hex2.c\
		src/ft_putadresse.c

SRCS_BONUS =bonus/ft_printf_bonus.c\
		bonus/ft_putchar_bonus.c\
		bonus/ft_putstr_bonus.c\
		bonus/ft_putnumbre_bonus.c\
		bonus/ft_putnumber_non_s_bonus.c\
		bonus/ft_putnumber_HEX_bonus.c\
		bonus/ft_putnumber_hex2_bonus.c\
		bonus/ft_putadresse_bonus.c


all: $(NAME)
bonus: $(BONUS)

OBJ = $(SRCS:%.c=%.o)
OBJ_BONUS = $(SRCS_BONUS:%.c = %.o)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

$(BONUS):	$(OBJ_BONUS)
		$(CC) $(CFLAGS) $(SRCS_BONUS) -o $(BONUS)
clean:
		$(RM) $(OBJ) $(OBJ_BONUS)

fclean:	clean
		$(RM) $(NAME) $(BONUS)

re:	fclean all

.PHONY: all clean fclean re bonus

