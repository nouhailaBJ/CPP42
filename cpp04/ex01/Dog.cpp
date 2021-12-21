#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "Copy constructor called" << std::endl;
	brain = NULL;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog Assignation called" << std::endl;
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