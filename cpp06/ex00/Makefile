NAME = convert

SRC  =  main.cpp          \

FLAGS = -Wall -Werror -Wno-unused -Wconversion -Werror

all : $(NAME)

$(NAME) : ${SRC}
	clang++  -o $(NAME) ${SRC} ${FLAGS}

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all