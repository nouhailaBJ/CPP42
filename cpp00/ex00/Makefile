# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/24 18:14:21 by nbjaghou          #+#    #+#              #
#    Updated: 2021/09/22 18:12:39 by nbjaghou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJ = megaphone.o

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : ${OBJ}
	clang++  -o $(NAME) ${OBJ} ${FLAGS}

.c.o : ${SRC}
	clang++ -c $< -o ${<:.c=.o}

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all