NAME = Weapon

SRC  = 	main.cpp		\
		Weapon.cpp		\
		HumanA.cpp		\
		HumanB.cpp		\

OBJ = 	main.o			\
		Weapon.o		\
		HumanA.o		\
		HumanB.o		\
	
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : ${SRC}
	clang++  -o $(NAME) ${SRC} ${FLAGS}

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all