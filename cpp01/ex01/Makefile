NAME = ZombieHorde

SRC  = 	main.cpp		\
		ZombieHorde.cpp	\
		Zombie.cpp

OBJ = 	main.o			\
		ZombieHorde.o	\
		Zombie.o
	
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : ${SRC}
	clang++  -o $(NAME) ${SRC} ${FLAGS}

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all