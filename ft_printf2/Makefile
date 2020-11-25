# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lolivero <lolivero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 10:25:22 by lolivero          #+#    #+#              #
#    Updated: 2020/11/18 10:30:54 by lolivero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS = char_conv.c conv_utils.c str_conv.c ft_ulltoa_base.c pos_conv.c int_conv.c unsign_conv.c ft_itoa_base.c hexa_conv.c percent_conv.c flags_utils.c ft_printf.c

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS) 
		cd libft && $(MAKE)
		cp libft/libft.a $(NAME)
		ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
		rm -f $(OBJS)
		$(MAKE) clean -C ./Libft
fclean : clean
		rm -f $(NAME)
		rm -f libftprintf.a
		$(MAKE) fclean -C ./Libft
re : fclean all

%.o: %.c
	$(CC) $(FLAGS) -I ft_printf.h -c $<  -o $(<:.c=.o)
