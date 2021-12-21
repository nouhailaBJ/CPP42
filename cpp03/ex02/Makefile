NAME = cpp

SRC  = 	main.cpp		\
		ClapTrap.cpp	\
		FragTrap.cpp	\
		ScavTrap.cpp	\

OBJ = 	main.o			\
		ClapTrap.o		\
		FragTrap.o		\
		ScavTrap.o	
	
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : ${SRC}
	clang++  -o $(NAME) ${SRC} ${FLAGS}

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all