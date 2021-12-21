#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog & src ) : Animal("Dog")
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
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
void Dog::makeSound() const
{
	std::cout << "Haw haw Haw!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
// std::string Dog::getType(void) const
// {
// 	return  (type);
// }

/* ************************************************************************** */