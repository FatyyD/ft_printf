# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fadiallo <fadiallo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 15:23:55 by fadiallo          #+#    #+#              #
#    Updated: 2022/02/22 20:30:17 by fadiallo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a 

CC = gcc

CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c \
	ft_char.c \
	ft_conver.c \
	ft_dec.c \
	ft_format.c \
	ft_hexa.c \
	ft_ptr.c \
	ft_put.c \
	ft_str.c \
	ft_undec.c
	
	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	 
%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	rm -rf $(OBJ)

fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re