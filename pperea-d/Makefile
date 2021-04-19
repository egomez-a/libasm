# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pperea-d <pperea-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 11:47:00 by pperea-d          #+#    #+#              #
#    Updated: 2021/03/02 14:18:30 by pperea-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libasm.a

SRC		=	ft_strlen.s\
			ft_strcpy.s\
			ft_strcmp.s\
			ft_write.s\
			ft_read.s\
			ft_strdup.s \

OBJ		=	$(SRC:%.s=%.o)
SFLAGS	=	-f macho64	



%.o: %.s
	nasm $(SFLAGS) $< -o $@

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
		rm -f $(OBJ) 

test: all
	gcc -Wall -Wextra -Werror -I./libasm.h libasm.a main.c -o tester
	./tester

fclean: clean
		rm -f $(NAME)
		rm -f tester



re: fclean all

.PHONY: all clean fclean re