NAME = cpp

SRC  = 	main.cpp		\
		ClapTrap.cpp	\
		FragTrap.cpp	\
		ScavTrap.cpp	\
		DiamondTrap.cpp	

OBJ = 	main.o			\
		ClapTrap.o		\
		FragTrap.o		\
		ScavTrap.o		\
		DiamondTrap.o	
	
FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

all : $(NAME)

$(NAME) : ${SRC}
	clang++  -o $(NAME) ${SRC} ${FLAGS}

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all