#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Default Animal Constructor Called" << std::endl;
	type = "Animal";
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal Assignation called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound() const
{
	std::cout << "I dont have a speciefic sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string Animal::getType(void) const
{
	return  (type);
}

/* ************************************************************************** */