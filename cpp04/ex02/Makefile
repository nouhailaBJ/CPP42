NAME = cpp

SRC  = 	main.cpp		\
		Animal.cpp		\
		Cat.cpp		\
		Dog.cpp		\
		WrongAnimal.cpp		\
		WrongCat.cpp		\
		Brain.cpp		\

OBJ = 	main.o			\
		Animal.o		\
		Cat.o		\
		Dog.o		\
		WrongAnimal.o		\
		WrongCat.o		\
		Brain.o		\
	
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : ${SRC}
	clang++  -o $(NAME) ${SRC} ${FLAGS}

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all