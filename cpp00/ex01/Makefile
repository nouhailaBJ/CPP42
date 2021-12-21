# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/24 18:14:21 by nbjaghou          #+#    #+#              #
#    Updated: 2021/09/23 19:00:18 by nbjaghou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC = PhoneBook.cpp \
	  Contact.cpp

OBJ = PhoneBook.o \
	  Contact.o

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