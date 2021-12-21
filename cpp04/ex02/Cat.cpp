#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat Constructor Called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat( const Cat & src ) : Animal("Cat")
{
	std::cout << "Copy constructor called" << std::endl;
	brain = NULL;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat Assignation called" << std::endl;
	if ( this != &rhs )
	{
		if (brain != NULL)
			delete brain;
		this->type = rhs.getType();
		brain = new Brain();
		*brain = *rhs.brain;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Cat::makeSound() const
{
	std::cout << "Meow Meow! " << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
// std::string Cat::getType(void) const
// {
// 	return  (type);
// }

/* ************************************************************************** */