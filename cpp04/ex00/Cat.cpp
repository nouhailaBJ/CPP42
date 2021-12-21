#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat Constructor Called" << std::endl;
	type = "Cat";
}

Cat::Cat( const Cat & src ) : Animal("Cat")
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = src.getType();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat Assignation called" << std::endl;

	if ( this != &rhs )
	{
		this->type = rhs.getType();
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