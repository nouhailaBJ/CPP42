#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor Called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this == &rhs )
		return *this;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void WrongCat::makeSound() const
{
	std::cout << "Meow Meow! " << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */