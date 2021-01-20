# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/23 16:37:25 by dmilan            #+#    #+#              #
#    Updated: 2020/12/24 12:02:46 by dmilan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libasm.a
HEADER		= libasm.h
FLAGS		= -Wall -Wextra -Werror
SRC			= ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s
OBJ			= $(SRC:.s=.o)

%.o: %.s
	# -f: format
	# macho64 - macos 64x architecture compatible format
	nasm -f macho64 $<
	
$(NAME): $(OBJ)
	ar -rcs $(OBJ)
	
build:
	gcc $(FLAGS) main.c libasm.a

run:
	./a.out

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all