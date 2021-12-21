NAME = cpp

SRC  =  main.cpp          \
		Bureaucrat.cpp    \
		Form.cpp   		 \

OBJ =   main.o            \
		Bureaucrat.o      \
		Form.o     		 \

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : ${SRC}
	clang++  -o $(NAME) ${SRC} ${FLAGS}

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all