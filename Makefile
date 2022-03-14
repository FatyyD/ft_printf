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
SRC = ft_prinft.c \
	ft_putchar.c \
	ft_putstr.c \
	
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