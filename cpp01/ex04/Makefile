NAME = replace

SRC  = 	main.cpp	\
		replace.cpp	

OBJ = 	main.o		\
		Replace.o
	
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : ${SRC}
	clang++  -o $(NAME) ${SRC} ${FLAGS}

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all